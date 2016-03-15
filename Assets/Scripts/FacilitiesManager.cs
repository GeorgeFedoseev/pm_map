using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class FacilitiesManager {

	Dictionary<int, FacilityScript> facilities_map;
	public FacilitiesDatabaseScript facilities_db;

	public FacilitiesManager(){
		facilities_db = new FacilitiesDatabaseScript ();

		initFacilities ();
	}

	private void initFacilities(){
		// map all facilities
		facilities_map = new Dictionary<int, FacilityScript>();
		foreach (var f in GameObject.FindObjectsOfType<FacilityScript>()){
			facilities_map[f.gameObject.GetInstanceID()] = f;
		}

		// rebuild facilites DB
		facilities_db.clearDb ();
		foreach(var f in GameObject.FindObjectsOfType<FacilityScript>()){
			facilities_db.addFacility (f.name, f.description, f.aliases, f.gameObject.GetInstanceID());
		}

		foreach(var f in facilities_db.findFacilities("кофе")){
			Debug.LogWarning ("Found "+f.name+" "+f.gameObjectID);
			var go = facilities_map [f.gameObjectID];
			go.GetComponent<MeshRenderer> ().material.color = Color.red;
		}
	}

	public List<FacilityScript> findFacilities(string query){
		var res = new List<FacilityScript> ();

		foreach (var f_r in facilities_db.findFacilities(query)) {
			res.Add (facilities_map[f_r.gameObjectID]);
		}

		return res;
	}

	public void flyToFacility(FacilityScript f){
		
	}
}
