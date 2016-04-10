using UnityEngine;
using System.Collections;
using System;
using SQLite;
using System.Collections.Generic;

[Table("timetable")]
public class TimetableRecord {	
	[PrimaryKey, AutoIncrement]
	public int id { get; set; }
	public WeekType weekType { get; set; }
	public DayOfWeek day { get; set; }
	public DateTime startTime { get; set;}
	public DateTime endTime { get; set;}
	public string name { get; set; }
	public string lecturer { get; set; }
	public string location { get; set; }
	public string room { get; set; }
}

public class TimetableManger {
	AppScript app;

	private string db_path;

	public WeekTimetable currentWeek, nextWeek;

	public List<Dictionary<string, WeekTimetable>> history;

	public TimetableManger(){
		
		app = AppScript.getSharedInstance ();	
		db_path = Constants.getDBPath ("data.db");

		history = new List<Dictionary<string, WeekTimetable>> ();

		//clearDb ();

		if (!hasTimetable ()) {
			Debug.LogWarning ("NO TIMETABLE");

			getTimetable ();
			restoreTimetableFromDatabase (true);
		} else {			
			restoreTimetableFromDatabase (true);
			Debug.LogWarning ("Timetable recovered from database");
		}


	}

	public void getTimetable(){
		if (hasTimetableLink()) {
			Debug.LogWarning ("Getting timetable from Internet...");

			var timetable_url = ConfigStorage.getSting("tt_study_timetable_link");

			var currentWeekStart = DateTime.Today.AddDays(-(int)(DateTime.Today.DayOfWeek-1)).Date;
			var nw = DateTime.Now.AddDays (7).Date;
			var nextWeekStart = nw.AddDays(-(int)(nw.DayOfWeek-1)).Date;

			var current_week_tt = TimetableParser.getTimetable (timetable_url, currentWeekStart);
			var next_week_tt = TimetableParser.getTimetable (timetable_url, nextWeekStart);

			saveTimetableToDatabase (current_week_tt, next_week_tt);

		} else {
			// do nothing - user will click on button and go through tour, than get link
			Debug.LogWarning ("No link for getting timetable, waiting for user action.");
		}
	}

	private bool hasTimetableLink(){
		return ConfigStorage.hasKey ("tt_study_timetable_link");
	}



	public void updatePair(Pair oldPair, Pair newPair){
		saveCurrentState ();

		removePair (oldPair, false);
		addPair (newPair, false);
	}

	public void removePair(Pair pair, bool saveState = true){
		if(saveState)
			saveCurrentState ();

		foreach (var d in currentWeek.days) {
			if (d.pairs.Contains (pair)) {
				d.pairs.Remove (pair);
				Debug.LogWarning ("Pair removed in currentWeek");
			}
		}

		foreach (var d in nextWeek.days) {
			if (d.pairs.Contains (pair)) {
				d.pairs.Remove (pair);
				Debug.LogWarning ("Pair removed in nextWeek");
			}
		}

		saveTimetableToDatabase (currentWeek, nextWeek);
		restoreTimetableFromDatabase ();

	}

	public void addPair(Pair pair, bool saveState = true){
		if(saveState)
			saveCurrentState ();

		using (var db = new SQLiteConnection (db_path)) {		
			var pr = new TimetableRecord ();
			pr.weekType = WeekTimetable.GetIso8601WeekNumber(pair.day.Date)%2==0?WeekType.Even:WeekType.Odd;
			pr.day = pair.day.DayOfWeek;
			pr.startTime = pair.startTime;
			pr.endTime = pair.endTime;
			pr.name = pair.name;
			pr.lecturer = pair.lecturer;
			pr.location = pair.location;
			pr.room = pair.room;

			Debug.LogWarning ("ADDING PAIR: "+pair.name);

			db.Insert (pr);	

			db.Close();

			//saveTimetableToDatabase (currentWeek, nextWeek);
			restoreTimetableFromDatabase ();
		}
	}



	public void restoreTimetableFromDatabase(bool saveState = false){
		

		// clear all 
		//PlayerPrefs.DeleteAll();
		Debug.LogWarning ("RESTORING TIMETABLE FROM DB");
		using (var db = new SQLiteConnection(db_path)){						
			var pairRecords = db.Query<TimetableRecord>("SELECT * FROM timetable");

			var currentWeekStart = DateTime.Today.AddDays(-(int)(DateTime.Today.DayOfWeek-1)).Date;
			var nw = DateTime.Now.AddDays (7).Date;
			var nextWeekStart = nw.AddDays(-(int)(nw.DayOfWeek-1)).Date;

			var w1 = new WeekTimetable (currentWeekStart);
			var w2 = new WeekTimetable (nextWeekStart);

			foreach (TimetableRecord p in pairRecords){			

				var w = p.weekType == w1.weekType ? w1 : w2;
				var date = w.weekStartDay.AddDays ((int)p.day - 1).Date;

				var pair = new Pair (
					date,
					p.name,
					string.Format("{0}–{1}", p.startTime.ToString("HH:mm"), p.endTime.ToString("HH:mm")),
					p.location,
					p.lecturer
				);

				if (!w.hasDayOfWeek (p.day)) {
					w.days.Add (new DayTimetable(date));
				}
				w.getDayTimetable (p.day).pairs.Add (pair);
			}
							
			currentWeek = w1;
			nextWeek = w2;

			if(saveState)
				saveCurrentState ();


			// sort pairs
			foreach(var d in currentWeek.days){
				d.pairs.Sort( (p1,p2)=>p1.startTime.CompareTo(p2.startTime) );
			}
			foreach(var d in nextWeek.days){
				d.pairs.Sort( (p1,p2)=>p1.startTime.CompareTo(p2.startTime) );
			}

			db.Close();
		}
	}

	private void saveTimetableToDatabase(WeekTimetable w1, WeekTimetable w2){
		clearDb ();

		using (var db = new SQLiteConnection (db_path)) {		

			Debug.LogWarning ("Saving week of type "+w1.weekType);
			foreach (var d in w1.days) {
				foreach (var p in d.pairs) {
					var pair = new TimetableRecord ();
					pair.weekType = w1.weekType;
					pair.day = d.day.DayOfWeek;
					pair.startTime = p.startTime;
					pair.endTime = p.endTime;
					pair.name = p.name;
					pair.lecturer = p.lecturer;
					pair.location = p.location;
					pair.room = p.room;

					db.Insert (pair);
				}
			}

			Debug.LogWarning ("Saving week of type "+w2.weekType);

			foreach (var d in w2.days) {
				foreach (var p in d.pairs) {
					var pair = new TimetableRecord ();
					pair.weekType = w2.weekType;
					pair.day = d.day.DayOfWeek;
					pair.startTime = p.startTime;
					pair.endTime = p.endTime;
					pair.name = p.name;
					pair.lecturer = p.lecturer;
					pair.location = p.location;
					pair.room = p.room;

					db.Insert (pair);
				}
			}

			db.Close();

			Debug.LogWarning ("Timetable saved to database");
		}
	}

	private void saveCurrentState(){
		// add to history
		history.Add(new Dictionary<string, WeekTimetable>() {
			{"currentWeek", currentWeek.Clone()},
			{"nextWeek", nextWeek.Clone()}
		});

		Debug.LogWarning ("CURRENT STATE SAVED, history count: "+history.Count);
	}

	public void undo(){
		if (!historyHasPrevState ()) {
			Debug.LogError ("Nothing to undo; only current state in history");
			return;
		}

		currentWeek = history [history.Count - 2] ["currentWeek"].Clone();
		nextWeek = history [history.Count - 2] ["nextWeek"].Clone();

		history.RemoveAt (history.Count-1);

		Debug.LogWarning ("UNDO, history count: "+history.Count);
	}


	public bool historyHasPrevState(){
		return history.Count > 1;		
	}

	public bool hasTimetable(){
		using (var db = new SQLiteConnection(db_path)){
			var count = db.CreateCommand ("SELECT count(*) FROM timetable").ExecuteScalar<int>();
//			Debug.LogWarning ("table rows count: "+count);
			if (count > 0)
				return true;
			return false;
		}
	}



	private void clearDb(){
		using (var db = new SQLiteConnection(db_path)){			
			db.DeleteAll<TimetableRecord>();
			db.Close();
		}
	}
}