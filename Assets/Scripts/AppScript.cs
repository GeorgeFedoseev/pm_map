using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AppScript : MonoBehaviour {

	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}


	Dictionary<int, FacilityScript> facilities_map;
	public FacilitiesDatabaseScript db;


	void Awake(){
		db = new FacilitiesDatabaseScript ();
	}

	void Start () {
		// map all facilities
		/// <summary>
		/// Map instanceID to GameObjects
		/// </summary>
		facilities_map = new Dictionary<int, FacilityScript>();
		foreach (var f in GameObject.FindObjectsOfType<FacilityScript>()){
			facilities_map[f.gameObject.GetInstanceID()] = f;
		}


		// rebuild facilites DB
		db.clearDb ();
		foreach(var f in GameObject.FindObjectsOfType<FacilityScript>()){
			db.addFacility (f.name, f.description, f.aliases, f.gameObject.GetInstanceID());
		}

		//db.traceAllFacilities ();
		foreach(var f in db.findFacilities("кофе")){
			Debug.LogWarning ("Found "+f.name+" "+f.gameObjectID);
			var go = facilities_map [f.gameObjectID];
			go.GetComponent<MeshRenderer> ().material.color = Color.red;
		}




	}
	

	void Update () {
	
	}
}
