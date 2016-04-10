using UnityEngine;
using System.Collections;

using Mono.Data.Sqlite;
using System;
using System.Data;

using SQLite;
using System.Collections.Generic;
using System.IO;

[Table("facilities")]
public class FacilityRecord {	
	[PrimaryKey, AutoIncrement]
	public int id { get; set; }
	public string name { get; set; }
	public string description { get; set; }
	public string aliases { get; set; }
	public string room { get; set; }
	public string icon { get; set; }
	public int gameObjectID { get; set; }

	public string search_string { get; set; }
}


public class FacilitiesDatabaseScript {

	private string db_path;
	
	public FacilitiesDatabaseScript(){
		db_path = Constants.getDBPath ("facilities.db");			
		Debug.LogWarning ("db_path: "+db_path);
	}

	public void addFacility(string name, string desc, string aliases, string room, string icon, int gameObjectID){

		var f = new FacilityRecord ();
		f.name = name;
		f.description = desc;
		f.aliases = aliases;
		f.room = room;
		f.icon = icon;
		f.gameObjectID = gameObjectID;

		f.search_string = (name!=null?name.ToLower():"")
			+ " " + (desc!=null?desc.ToLower():"")
			+ " " + (aliases!=null?aliases.ToLower():"")
			+ " " + (room!=null?room.ToLower():"");

		using (var db = new SQLiteConnection(db_path)){			
			db.Insert (f);
			db.Close();
		}	
	}


	public void clearDb(){
		using (var db = new SQLiteConnection(db_path)){			
			db.DeleteAll<FacilityRecord>();
			db.Close();
		}
	}

	public List<FacilityRecord> findFacilities(string search_query){
		using (var db = new SQLiteConnection(db_path)){			
			var q = "SELECT * FROM facilities WHERE search_string LIKE ?";
			var fs = db.Query<FacilityRecord> (q, "%"+search_query.ToLower()+"%");

			return fs;
		}

		return new List<FacilityRecord>();
	}

	public FacilityRecord getRoom(string room){
		using (var db = new SQLiteConnection(db_path)){			
			var q = "SELECT * FROM facilities WHERE room = ?";
			var fs = db.Query<FacilityRecord> (q, room);
			if (fs.Count > 0)
				return fs [0];
			return null;
		}

		return null;
	}

	public void traceAllFacilities(){
		using (var db = new SQLiteConnection(db_path)){						
			IEnumerable<FacilityRecord> list = db.Query<FacilityRecord>("SELECT * FROM facilities");

			foreach (FacilityRecord f in list){
				const string frmt = "Id: {0}; Name: {1}; Desc: {2};";
				Debug.LogWarning(string.Format(frmt,
					f.id,
					f.name,
					f.description
				));
			}

			db.Close();
		}
	}
}
