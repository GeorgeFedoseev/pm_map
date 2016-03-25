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

	public TimetableManger(){
		app = AppScript.getSharedInstance ();	
		db_path = Constants.getDBPath ("data.db");

		if (hasTimetable ()) {
			Debug.LogWarning ("NO TIMETABLE");
			getTimetable ();
		} else {
			Debug.LogWarning ("YES TIMETABLE");
		}
	}

	private void getTimetable(){
		if (ConfigStorage.hasKey ("tt_study_timetable_link")) {
			var timetable_url = ConfigStorage.getSting("tt_study_timetable_link");

			var currentWeekStart = DateTime.Today.AddDays(-(int)(DateTime.Today.DayOfWeek-1)).Date;
			var nextWeek = DateTime.Now.AddDays (7).Date;
			var nextWeekStart = nextWeek.AddDays(-(int)(nextWeek.DayOfWeek-1)).Date;

			var current_week_tt = TimetableParser.getTimetable (timetable_url, currentWeekStart);
			var next_week_tt = TimetableParser.getTimetable (timetable_url, nextWeekStart);

			saveTimetableToDatabase (current_week_tt, next_week_tt);
		} else {
			Debug.LogError ("No timetable link");
		}
	}

	private void restoreTimetableFromDatabase(){
		
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
		}
	}


	private bool hasTimetable(){
		using (var db = new SQLiteConnection(db_path)){						
			var rows = db.Query<TimetableRecord>("SELECT count(*) FROM timetable");
			db.Close();

			if (rows.Count > 0)
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