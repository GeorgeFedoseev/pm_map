using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class AppScript : MonoBehaviour {

	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}


	// inspector
	public Transform building;

	public FacilitiesManager facilities;
	public TimetableManger timetableManager;

	[HideInInspector]
	public PoolSystem pool;
	[HideInInspector]
	public Canvas canvas;
	[HideInInspector]
	public CameraScript cam;
	[HideInInspector]
	public SearchBoxScript searchBox;
	[HideInInspector]
	public FloorSwitchScript floorSwitcher;
	[HideInInspector]
	public BottomPanelScript bottomPanel;
	[HideInInspector]
	public RectTransform openTimetableButton;
	[HideInInspector]
	public Transform centerPanelContainer;

	[HideInInspector]
	public TTPanelScript timetablePanel;

	void Awake(){



		canvas = GameObject.FindObjectOfType<Canvas> ();
		cam = GetComponent<CameraScript> ();

		facilities = new FacilitiesManager ();
		timetableManager = new TimetableManger ();

		pool = GameObject.FindObjectOfType<PoolSystem> ();

		searchBox = GameObject.FindObjectOfType<SearchBoxScript> ();
		floorSwitcher = GameObject.FindObjectOfType <FloorSwitchScript> ();
		bottomPanel = GameObject.FindObjectOfType<BottomPanelScript> ();

		centerPanelContainer = GameObject.Find ("CenterPanelContainer").transform;
		if (centerPanelContainer == null)
			Debug.LogError ("cant find center panel container");

		openTimetableButton = GameObject.Find ("OpenTimetableButton").GetComponent<RectTransform> ();

		Application.targetFrameRate = 30;

		/*DEBUG*/
		PlayerPrefs.DeleteAll ();



		clearCenterPanelContainer ();
	}

	void Start () {
		facilities.initFacilities ();


		floorSwitcher.switchToFloor (1);

		openTimetable ();
	}
	

	void Update () {
		

	}

	public void disableCamera(){
		cam.enabled = false;	
	}

	public void enableCamera(){
		cam.enabled = true;
	}

	public void switchToFloor(int floor){
		facilities.switchToFloor (floor);
	}


	// CENTER PANEL
	private void clearCenterPanelContainer(){		
		foreach(Transform t in centerPanelContainer){
			Destroy (t.gameObject);
		}
	}

	public void disableAllInCentralPanelContainer(){
		foreach(Transform t in centerPanelContainer){
			t.gameObject.SetActive (false);
		}
	}

	private GameObject loadCenterPanel(string name){
		clearCenterPanelContainer ();

		var go = Instantiate (Resources.Load("Prefabs/UI/CenterPanels/"+name)) as GameObject;
		go.transform.SetParent (centerPanelContainer);
		var rect = go.GetComponent<RectTransform> ();
		rect.transform.localScale = Vector3.one;
		rect.sizeDelta = Vector2.zero;
		rect.anchoredPosition = Vector2.zero;

		return go;
	}


	// TIMETABLE
	public void openTimetable(){
		foreach (Transform t in centerPanelContainer) {
			if (t.gameObject.GetComponent<TTPanelScript> () != null) {
				t.gameObject.SetActive (true);
				return;
			}
		}

		if (timetableManager.hasTimetable ()) {
			timetablePanel = loadCenterPanel ("TimetableCenterPanel").GetComponent<TTPanelScript> ();
			timetablePanel.Prepare ();
		} else {
			// tour for getting timetable link
			openTimtableTour();
		}

		//disableCamera ();
	}



	public void openTimtableTour(){
		loadCenterPanel ("LoadTimetableCenterPanel");
	}

	public void closeTimetable(){
		disableAllInCentralPanelContainer ();
		//enableCamera ();
	}
}
