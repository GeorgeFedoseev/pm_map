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
	public int edited { get; set; }
	public int deleted { get; set; }
	public string initial_hash { get; set; }
}

public class TimetableManger {
	AppScript app;

	private string db_path;

	public WeekTimetable currentWeek, nextWeek;

	public List<Dictionary<string, WeekTimetable>> history;

	public TimetableManger(){
		
		app = AppScript.getSharedInstance ();	
		db_path = Constants.getDBPath ("timetable.db", false);

		history = new List<Dictionary<string, WeekTimetable>> ();

		/* DEBUG */
		if (AppScript.CLEAN_EVERYTHING_ON_START) {
			clearDb ();
		}

		initTimetable ();
	}


	public bool initTimetable(bool forceUpdateFromInternet = false, bool preserveEdits = false){
		if (!hasTimetable () || forceUpdateFromInternet) {
			if (!hasTimetable ()) {
				Debug.LogWarning ("NO TIMETABLE");
			} else {
				Debug.LogWarning ("Force update from internet");
			}




			if (hasTimetableLink ()) {
				Debug.LogWarning ("Timetable link is: "+ConfigStorage.getSting ("tt_study_timetable_link"));
				if (getTimetableFromInternet (preserveEdits)) {
					restoreTimetableFromDatabase (true);
					return true;
				} else {
					Debug.LogWarning ("Cant get timetable!");
				}
			} else {
				Debug.LogWarning ("NO timetable link");
				return true;
			}
		} else {			
			restoreTimetableFromDatabase (true);
			Debug.LogWarning ("Timetable recovered from database");
			return true;
		}

		return false;
	}


	public bool getTimetableFromInternet(bool preserveEdits){
		Debug.LogWarning ("Getting timetable from Internet...");

		var timetable_url = ConfigStorage.getSting("tt_study_timetable_link");

		var currentWeekStart = DateTime.Today.AddDays(-(int)(DateTime.Today.DayOfWeek-1)).Date;
		var nw = DateTime.Now.AddDays (7).Date;
		var nextWeekStart = nw.AddDays(-(int)(nw.DayOfWeek-1)).Date;

		try{
			var current_week_tt = TimetableParser.getTimetable (timetable_url, currentWeekStart);
			var next_week_tt = TimetableParser.getTimetable (timetable_url, nextWeekStart);

			saveTimetableToDatabase (current_week_tt, next_week_tt, preserveEdits);

			return true;
		}catch(Exception e){
			Debug.LogError ("Cant get timetable from "+timetable_url+": "+e.Message);
			Debug.LogError (e.StackTrace);
			return false;
		}
	}

	private bool hasTimetableLink(){
		return ConfigStorage.hasKey ("tt_study_timetable_link");
	}


	public Pair getCurrentPair(){
		foreach (var d in currentWeek.days) {
			foreach (var p in d.pairs) {
				if (p.now ())
					return p;
			}
		}

		return null;
	}

	public Pair getSoonPair(){
		foreach (var d in currentWeek.days) {
			foreach (var p in d.pairs) {
				if (p.soon ())
					return p;
			}
		}

		return null;
	}


	public void updatePair(Pair oldPair, Pair newPair){	

		removePair (oldPair);
		addPair (newPair, false);

		saveCurrentState ();
	}

	// REMOVE
	public void setPairDeleted(Pair pair){
		var deletedPair = pair.Clone ();
		deletedPair.deleted = true;
		updatePair (pair, deletedPair);
	}


	// REAL REMOVE
	public void removePair(Pair pair, bool immediateSaveToDB = true){
		

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


		if (immediateSaveToDB) {
			saveTimetableToDatabase (currentWeek, nextWeek);
			restoreTimetableFromDatabase ();	
		}

	}

	public void addPair(Pair pair, bool saveState = true){
		

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


			pr.edited = pair.edited?1:0;
			pr.deleted = pair.deleted?1:0;
			pr.initial_hash = pair.initial_hash;

			Debug.LogWarning ("ADDING PAIR: "+pair.name+ " DELETED: "+pr.deleted);

			db.Insert (pr);	

			db.Close();

			// NEW PAIR IN DB NOW

			//saveTimetableToDatabase (currentWeek, nextWeek);
			restoreTimetableFromDatabase ();

			if(saveState)
				saveCurrentState ();
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
					p.lecturer,
					p.edited==1,
					p.deleted==1,
					p.initial_hash
				);

				if (p.room != null && p.room != "") {
					pair.room = p.room;
				}

				if (!w.hasDayOfWeek (p.day)) {
					w.days.Add (new DayTimetable(date));
				}
				w.getDayTimetable (p.day).pairs.Add (pair);
			}
							
			currentWeek = w1;
			nextWeek = w2;

			if(saveState)
				saveCurrentState ();

			sortEverything ();


			db.Close();
		}
	}

	private void sortEverything(){
		// sort days
		currentWeek.days.Sort( (d1, d2) => d1.day.DayOfWeek.CompareTo(d2.day.DayOfWeek));
		nextWeek.days.Sort( (d1, d2) => d1.day.DayOfWeek.CompareTo(d2.day.DayOfWeek));

		// sort pairs
		foreach(var d in currentWeek.days){
			d.pairs.Sort( (p1,p2)=>p1.startTime.CompareTo(p2.startTime) );
		}
		foreach(var d in nextWeek.days){
			d.pairs.Sort( (p1,p2)=>p1.startTime.CompareTo(p2.startTime) );
		}
	}

	private void saveTimetableToDatabase(WeekTimetable w1, WeekTimetable w2, bool preserveEdits = false){

		if (!preserveEdits) {
			// simply remove all pairs from db and add provided
			clearDb ();

			using (var db = new SQLiteConnection (db_path)) {	

				foreach (var w in new List<WeekTimetable>(){w1, w2}) {

					Debug.LogWarning ("Saving week of type " + w.weekType);
					foreach (var d in w.days) {
						foreach (var p in d.pairs) {
							var pair = new TimetableRecord ();
							pair.weekType = w.weekType;
							pair.day = d.day.DayOfWeek;
							pair.startTime = p.startTime;
							pair.endTime = p.endTime;
							pair.name = p.name;
							pair.lecturer = p.lecturer;
							pair.location = p.location;
							pair.room = p.room;

							pair.edited = p.edited ? 1 : 0;
							pair.deleted = p.deleted ? 1 : 0;
							pair.initial_hash = p.initial_hash;

							db.Insert (pair);
						}
					}

				}

				db.Close ();

				Debug.LogWarning ("Timetable saved to database");
			}
		} else {
			// foreach exisiting pair check for similar (with initial_hash) in new pairs
			// if found - dont add new pair
			// if not found remove (real remove) existing pair
			// Then add other new pairs

			// create one list with all existing pairs
			var exisitingPairs = new List<Pair>();
			foreach (var ex_w in new List<WeekTimetable>(){currentWeek, nextWeek}) {
				foreach (var d in ex_w.days) {
					foreach (var p in d.pairs) {
						exisitingPairs.Add (p);
					}
				}
			}

			// create another list with all new pairs
			var newPairs = new List<Pair>();
			foreach (var new_w in new List<WeekTimetable>(){w1, w2}) {
				foreach (var d in new_w.days) {
					foreach (var new_p in d.pairs) {
						newPairs.Add (new_p);
					}
				}
			}




			// foreach existing pair check if it stays or not
			foreach(var ex_p in exisitingPairs){
				if (newPairs.FindAll (x => x.initial_hash == ex_p.initial_hash).Count == 0) {
					// no such pair in new data - delete it from our local data
					removePair (ex_p, immediateSaveToDB:false);
				} else {
					// found such pair in new data
					// remove it from list of new data
					newPairs.RemoveAll(x => x.initial_hash == ex_p.initial_hash);
				}
			}

			// save our removals to DB
			saveTimetableToDatabase(currentWeek, nextWeek);

			// add rest of new data
			foreach(var new_p in newPairs){
				addPair (new_p, saveState:false); // adds directly to db
			}

			// done saving new data
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

		sortEverything ();

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