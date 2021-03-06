﻿using UnityEngine;
using System.Collections;
using System;
using SQLite;
using System.Collections.Generic;

using System.Linq;

using SPBUTimetable;

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
	public string hash { get; set; }
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

	bool MigrateTo_v1_3_IdNeeded(){
		using (var db = new SQLiteConnection (db_path)) {
			var columns = db.GetTableInfo ("timetable");

			if (columns.Where (x => x.Name == "hash").ToList ().Count > 0) {
				// nop need to migrate
				return false;
			} else {
				// migration needed
				// add column "hash"
				Debug.LogWarning ("MIGRATE DB to v1.3");

				db.Trace = true;

				try{					
					db.Execute("ALTER TABLE timetable ADD COLUMN hash TEXT;");
				}catch(SQLiteException ex){
					Debug.LogError ("Migration error: "+ex.Message+" "+ex.StackTrace);
					db.Close ();
					return true;
				}
			}

			db.Close ();
		}

		return true;
	}

	bool MigrateTo_v1_2_IfNeeded(){
		// in v1.2: new merging algorithm requires new columns: edited(0-1), deleted(0-1), initial_hash(string md5)
		// add them if they are not present in current db and load new db from Internet
		// (cause could be modified pairs and we dont know initial hashes fot them)

		using (var db = new SQLiteConnection (db_path)) {
			var columns = db.GetTableInfo ("timetable");

			var controlSum = 0;
			foreach (var c in columns) {
				if (c.Name == "edited" || c.Name == "deleted" || c.Name == "initial_hash") {
					controlSum++;
				}
			}

			if (controlSum == 3) {
				// no need to migrage
				return false;
			} else if(controlSum == 0) {
				// migration needed
				// add 3 columns to db:

				Debug.LogWarning ("MIGRATE DB to v1.2");

				db.Trace = true;

				try{
					db.Execute("ALTER TABLE timetable ADD COLUMN edited INTEGER NOT NULL DEFAULT 0;");
					db.Execute("ALTER TABLE timetable ADD COLUMN deleted INTEGER NOT NULL DEFAULT 0;");
					db.Execute("ALTER TABLE timetable ADD COLUMN initial_hash TEXT;");
				}catch(SQLiteException ex){
					Debug.LogError ("Migration error: "+ex.Message+" "+ex.StackTrace);
					db.Close ();
					return true;
				}

				// clear db
				db.DeleteAll<TimetableRecord>();

				// load new data from Internet
				// TODO: what if no Internet?
				initTimetable(forceUpdateFromInternet:true);


			}else {
				Debug.LogError ("Unexpected error when migrating DB to v1.2");
			}

			db.Close ();
		}

		return true;
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
			
			if (!MigrateTo_v1_2_IfNeeded ()) {
				// if migration to 1.2 needed than it will init automatically

				MigrateTo_v1_3_IdNeeded ();

				restoreTimetableFromDatabase (true);

				Debug.LogWarning ("Timetable recovered from database");

				var _timetable_link = ConfigStorage.getSting ("tt_study_timetable_link");

				if (Utils.CheckForInternetConnection ()) {
					// check for updates
					Loom.RunAsync (() => {
						if (getTimetableFromInternet (preserveEdits: true, _timetable_link: _timetable_link)) {
							Debug.LogWarning ("SOME NEW UPDATES to timetable");
							// update timetable
							app.timetablePanel.firstLoadDone = false;
							Loom.QueueOnMainThread (() => {
								Loom.QueueOnMainThread (() => {
									app.timetablePanel.UpdateContents ();	
								}, 1f);
							});

						} else {
							Debug.LogWarning ("NO UPDATES to timetable");
						}
					});
				} else {
					Debug.LogWarning ("No internet connection");
				}

			}

			return true;
		}

		return false;
	}


	public bool getTimetableFromInternet(bool preserveEdits, string _timetable_link = null){
		Debug.LogWarning ("Getting timetable from Internet...");

		var timetable_url = _timetable_link==null?ConfigStorage.getSting("tt_study_timetable_link"):_timetable_link;

		var currentWeekStart = DateTime.Today.AddDays(-(int)(DateTime.Today.DayOfWeek-1)).Date;
		var nw = DateTime.Now.AddDays (7).Date;
		var nextWeekStart = nw.AddDays(-(int)(nw.DayOfWeek-1)).Date;

		try{
			var current_week_tt = TimetableParser.getTimetable (timetable_url, currentWeekStart);
			var next_week_tt = TimetableParser.getTimetable (timetable_url, nextWeekStart);

			return saveTimetableToDatabase (current_week_tt, next_week_tt, preserveEdits); // returns true if anuthing changed

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
		newPair.CopyTo (oldPair);
		//removePair (oldPair, true);
		//addPair (newPair, false);
		saveTimetableToDatabase(currentWeek, nextWeek);

		saveCurrentState ();
	}

	// DELETE
	public void setPairDeleted(Pair pair){
		//var deletedPair = pair.Clone ();
		//deletedPair.deleted = true;
		//updatePair (pair, deletedPair);
		pair.deleted = true;
		saveTimetableToDatabase (currentWeek, nextWeek);
		saveCurrentState ();
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
		/*WeekTimetable week;
		var p_weekType = WeekTimetable.GetIso8601WeekNumber (pair.day.Date) % 2 == 0 ? WeekType.Even : WeekType.Odd;
		week = currentWeek.weekType == p_weekType ? currentWeek : nextWeek;

*/

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
			pr.hash = pair.hash;

			Debug.LogWarning ("ADDING PAIR: "+pair.name+ " DELETED: "+pr.deleted);

			db.Insert (pr);	

			db.Close();

			// NEW PAIR IN DB NOW

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
					p.hash
				);
				// for capability
				pair.initial_hash = p.initial_hash;



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
			d.pairs.Sort ((p1, p2) => p1.name.CompareTo (p2.name));
			d.pairs.Sort( (p1,p2)=>p1.startTime.CompareTo(p2.startTime) );
		}
		foreach(var d in nextWeek.days){
			d.pairs.Sort ((p1, p2) => p1.name.CompareTo (p2.name));
			d.pairs.Sort( (p1,p2)=> p1.startTime.CompareTo(p2.startTime) );
		}
	}

	private bool saveTimetableToDatabase(WeekTimetable w1, WeekTimetable w2, bool preserveEdits = false){
		bool anyChanges = false;

//		var start_t = Time.realtimeSinceStartup;
		if (!preserveEdits) {
			anyChanges = true;
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
							pair.hash = p.hash;

							db.Insert (pair);
						}
					}

				}

				db.Close ();

				//Debug.LogWarning ("Timetable saved to database ("+(Time.renderedFrameCount-start_t)+"s)");
			}
		} else {
			// foreach exisiting pair check for similar (with hash) in new pairs
			// if found - dont add new pair
			// if not found remove (real remove) existing pair
			// Then add other new pairs

			var old_weeks = new List<WeekTimetable>(){currentWeek, nextWeek};
			var new_weeks = new List<WeekTimetable>(){w1, w2};

			// create one list with all existing pairs
			var exisitingPairs = new List<Pair>();
			foreach (var ex_w in old_weeks) {
				foreach (var d in ex_w.days) {
					foreach (var p in d.pairs) {
						exisitingPairs.Add (p);
					}
				}
			}

			// create another list with all new pairs
			var newPairs = new List<Pair>();
			foreach (var new_w in new_weeks) {
				foreach (var d in new_w.days) {
					foreach (var new_p in d.pairs) {
						newPairs.Add (new_p);
					}
				}
			}


			// v1.3 hash migration
			if(exisitingPairs.Where(x => x.hash == null).Count() > 0){
				// needs migration
				//Debug.LogError ("Needs v1.3 pair migration");

				for(int i = 0; i < 2; i++){
					var old_w = old_weeks [i]; var new_w = new_weeks [i];

					var old_w_pairs = new List<Pair>();
					foreach (var d in old_w.days) {
						foreach (var p in d.pairs) {
							old_w_pairs.Add (p);
						}
					}

					var new_w_pairs = new List<Pair>();
					foreach (var d in new_w.days) {
						foreach (var new_p in d.pairs) {
							new_w_pairs.Add (new_p);
						}
					}


					foreach (var ex_p in old_w_pairs) {
						if (ex_p.hash == null) {
							//Debug.LogError ("Found null hash");
							// pair needs migration
							if (ex_p.edited) {
								// than needs more work:
								// if its the only pair on this week with such hash
								if (old_w_pairs.Where (x => x.initial_hash == ex_p.initial_hash).Count () == 1) {
									// try to find in new pairs pair with same initial_hash	
									var new_pairs_with_same_initial_hash = new_w_pairs.Where (
										                                       x => ex_p.initial_hash == x.initial_hash
									                                       ).ToList ();
									if (new_pairs_with_same_initial_hash.Count > 0) {
										//Debug.LogWarning ("Found similar pair in new data for migration");
										// than take this new pair and calculate old pair's hash using it
										var new_pair = new_pairs_with_same_initial_hash [0];
										ex_p.hash = new_pair.hash;
									} else {
										//Debug.LogError ("Cant find similar (initila_hash) pair in new data");
										// in this case cant restore
										// than replace it with new pairs on update
									}
								} else {
									//Debug.LogError ("Pair is not single on this week");
									// cant restore - replace on update
								}

							} else {
								// just calculate new hash
								if (ex_p.deleted) {
									//Debug.LogWarning ("Set new hash for deleted pair");
								}
								ex_p.hash = TimetableParser.GetPairMD5 (ex_p.day.DayOfWeek, ex_p.time, ex_p.name, ex_p.location, ex_p.lecturer, old_w.weekType);
							}
						} else {
							//Debug.LogError ("HASH IS NOT NULL!");
						}
					}
				}
			}






			// foreach existing pair check if it stays or not
			foreach(var ex_p in exisitingPairs){
				if(ex_p.hash == null){
					Debug.LogError ("Exisiting pair hash is null!");
				}
				if (newPairs.FindAll (x => x.hash == ex_p.hash).Count == 0) {
					// no such pair in new data - delete it from our local data
					removePair (ex_p, immediateSaveToDB:false);
					anyChanges = true;
				} else {
					// found such pair in new data
					// remove it from list of new data
					newPairs.RemoveAll(x => x.hash == ex_p.hash);
				}
			}

			// save our removals to DB
			saveTimetableToDatabase(currentWeek, nextWeek);

			// add rest of new data
			foreach(var new_p in newPairs){
				addPair (new_p, saveState:false); // adds directly to db
				anyChanges = true;
			}

			// done saving new data
		}

		return anyChanges;
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