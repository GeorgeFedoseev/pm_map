using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class FacilitiesManager {

	AppScript app;

	Dictionary<int, FacilityScript> facilities_map;
	public FacilitiesDatabaseScript facilities_db;

	FacilityScript target_facility;

	public FacilitiesManager(){
		app = AppScript.getSharedInstance ();
		facilities_db = new FacilitiesDatabaseScript ();

	
	}

	public void initFacilities(){
		// map all facilities
		facilities_map = new Dictionary<int, FacilityScript>();
		foreach (var f in GameObject.FindObjectsOfType<FacilityScript>()){
			facilities_map[f.gameObject.GetInstanceID()] = f;
		}

		// rebuild facilites DB
		facilities_db.clearDb ();
		foreach(var f in GameObject.FindObjectsOfType<FacilityScript>()){
			facilities_db.addFacility (f._name, f._description, f._aliases, f._room, f.gameObject.GetInstanceID());
		}

		/*foreach(var f in facilities_db.findFacilities("кофе")){
			Debug.LogWarning ("Found "+f.name+" "+f.gameObjectID);
			var go = facilities_map [f.gameObjectID];
			go.GetComponent<MeshRenderer> ().material.color = Color.red;
		}*/
	}

	public List<FacilityScript> findFacilities(string query){
		var res = new List<FacilityScript> ();

		foreach (var f_r in facilities_db.findFacilities(query)) {
			res.Add (facilities_map[f_r.gameObjectID]);
		}

		return res;
	}

	public void flyToFacility(FacilityScript f){
		var flyTime = 1.5f;
		var h = 5f;
		var d = 5f;

		target_facility = f;


		var look_dst = f.getSize ()*4;
		if (look_dst < 10f)
			look_dst = 10f;
		
		app.cam.lookDistance = look_dst;
		app.cam.lookHeight = look_dst;


		app.cam.flying = true;
		app.cam.lookTarget = f;

		app.switchToFloor (f.getFloor());

		dehighlightAll ();
		f.highlight ();
	}

	public void dehighlightAll(){
		foreach(var f in GameObject.FindObjectsOfType<FacilityScript>()){
			f.dehighlight ();
		}
	}




}
