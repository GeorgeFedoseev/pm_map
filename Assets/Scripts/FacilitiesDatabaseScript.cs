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
	public int gameObjectID { get; set; }
}


public class FacilitiesDatabaseScript {

	private string db_path;
	
	public FacilitiesDatabaseScript(){
		db_path = Application.dataPath + "/Data/" + "data.db";
	}

	public void addFacility(string name, string desc, string aliases, int gameObjectID){

		var f = new FacilityRecord ();
		f.name = name;
		f.description = desc;
		f.aliases = aliases;
		f.gameObjectID = gameObjectID;

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
			var q = "SELECT * FROM facilities WHERE description LIKE ?";
			var fs = db.Query<FacilityRecord> (q, "%"+search_query+"%");

			return fs;
		}

		return new List<FacilityRecord>();
	}

	public void traceAllFacilities(){
		using (var db = new SQLiteConnection(db_path)){			
			// Делаем запрос на выборку данных
			IEnumerable<FacilityRecord> list = db.Query<FacilityRecord>("SELECT * FROM facilities");

			// Читаем и выводим результат
			foreach (FacilityRecord f in list){
				const string frmt = "Id: {0}; Name: {1}; Desc: {2};";
				Debug.LogWarning(string.Format(frmt,
					f.id,
					f.name,
					f.description
				));
			}
			// И не забываем закрыть соединение
			db.Close();
		}
	}
}
