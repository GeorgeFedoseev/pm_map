using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AppScript : MonoBehaviour {

	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}

	public FacilitiesManager facilities;
	public PoolSystem pool;

	void Awake(){
		facilities = new FacilitiesManager ();
		pool = GameObject.FindObjectOfType<PoolSystem> ();
	}

	void Start () {

	}
	

	void Update () {
	
	}
}
