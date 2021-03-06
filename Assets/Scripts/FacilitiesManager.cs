﻿using UnityEngine;
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
		// activate all floors
		foreach(Transform fl in app.building){
			fl.gameObject.SetActive (true);
		}

		// map all facilities
		facilities_map = new Dictionary<int, FacilityScript>();
		var id = 0;
		foreach (var f in app.building.GetComponentsInChildren<FacilityScript>()){
			// set its id 
			f._id = id;
			facilities_map[id] = f;
			id++;
		}

		if(AppScript.UPDATE_FACILITIES_DB_ON_START) {
			// rebuild facilites DB
			facilities_db.clearDb ();
			foreach(var f in app.building.GetComponentsInChildren<FacilityScript>()){
				facilities_db.addFacility (f._name, f._description, f._info, f._people, f._aliases, f._room, f._icon, f._id);
			}	
		}

		/*foreach(var f in facilities_db.findFacilities("кофе")){
			Debug.LogWarning ("Found "+f.name+" "+f.gameObjectID);
			var go = facilities_map [f.gameObjectID];
			go.GetComponent<MeshRenderer> ().material.color = Color.red;
		}*/

		dehighlightAll ();
	}

	public List<FacilityScript> findFacilities(string query){
		var res = new List<FacilityScript> ();

		foreach (var f_r in facilities_db.findFacilities(query)) {
			res.Add (facilities_map[f_r.gameObjectID]);
		}

		return res;
	}

	public void focusFacility(FacilityScript f, bool flyTo = true, bool showInfo = false, bool switchFloor = true){
		app.OnFacilityFocus (f);
		target_facility = f;

		var look_dst = f.getSize ()*4;
		if (look_dst < 20f)
			look_dst = 20f;

		if (flyTo) {
			app.cam.setTargetFacility(f, look_dst, look_dst);

			if (switchFloor) {
				app.floorSwitcher.switchToFloor (f.getFloor());
			}				
		}



		dehighlightAll ();
		f.highlight ();

		if (showInfo) {
			app.bottomPanel.showFacilities(new List<FacilityScript>(){f}, "ВЫДЕЛЕННЫЙ ОБЪЕКТ");
		}
	}


	public void switchToFloor(int floor){
		int i = 0;
		foreach(Transform fl in app.building){
			if (i + 1 > floor) {
				fl.gameObject.SetActive (false);
			} else {
				fl.gameObject.SetActive (true);
			}
			i++;
		}
	}

	public bool hasRoom(string room){
		var res = facilities_db.getRoom (room);
		if (res != null) {
			return true;
		}

		return false;
	}

	public RoomScript getRoom(string room){
		var res = facilities_db.getRoom (room);
		if (res != null) {
			var f = facilities_map[res.gameObjectID];
			return (RoomScript)f;
		}

		return null;
	}

	public void goToRoom(string room){
		var res = facilities_db.getRoom (room);
		if (res != null) {
			var f = facilities_map[res.gameObjectID];
			Loom.QueueOnMainThread (() => {
				focusFacility (f, true, true);	
			});

		}
	}

	public void clearFocus(){
		app.cam.stopFlying ();
		dehighlightAll ();
		app.bottomPanel.fold (true);
	}

	public void dehighlightAll(){
		foreach(var f in facilities_map){
			f.Value.dehighlight ();
		}
	}




}
