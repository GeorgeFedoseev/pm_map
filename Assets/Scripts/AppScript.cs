using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class AppScript : MonoBehaviour {

	public static bool DEBUG = false;
	public static bool CLEAN_EVERYTHING_ON_START = false;
	//public static bool UPDATE_FACILITIES_DB_ON_START = false;

	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}


	// inspector
	public Transform building;

	public FacilitiesManager facilities;
	public TimetableManger timetableManager;

	[HideInInspector]
	public Canvas scaleFactorRefCanvas;
	[HideInInspector]
	public PoolSystem pool;
	[HideInInspector]
	public Canvas hudCanvas;
	[HideInInspector]
	public Transform centerPanel;
	[HideInInspector]
	public Canvas alertsCanvas;
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

	public bool ready = false;

	void Awake(){

		//TouchScreenKeyboard.hideInput = true;

		/*#if UNITY_ANDROID
			Screen.fullScreen = false;
		#endif*/

		if (DEBUG) {
			var fps_displ = FindObjectOfType<FPSDisplay> ();
			if (fps_displ != null)
				fps_displ.enabled = true;
		}

		Application.targetFrameRate = 60;

		Debug.LogWarning ("App start");

		scaleFactorRefCanvas = GameObject.Find ("ScaleFactorRefCanvas").GetComponent<Canvas>();
		hudCanvas = GameObject.Find ("HUDCanvas").GetComponent<Canvas>();
		centerPanel = GameObject.Find ("CenterPanel").GetComponent<Transform>();
		alertsCanvas = GameObject.Find ("AlertsCanvas").GetComponent<Canvas>();

		cam = GetComponent<CameraScript> ();

		searchBox = GameObject.FindObjectOfType<SearchBoxScript> ();
		Debug.LogWarning ("serachbox is "+(searchBox==null?"null":"not null"));
		floorSwitcher = GameObject.FindObjectOfType <FloorSwitchScript> ();
		bottomPanel = GameObject.FindObjectOfType<BottomPanelScript> ();
		pool = GameObject.FindObjectOfType<PoolSystem> ();

		centerPanelContainer = GameObject.Find ("CenterPanelContainer").transform;
		if (centerPanelContainer == null)
			Debug.LogError ("cant find center panel container");

		openTimetableButton = GameObject.Find ("OpenTimetableButton").GetComponent<RectTransform> ();


		facilities = new FacilitiesManager ();
		timetableManager = new TimetableManger ();


		/*DEBUG*/
		if (CLEAN_EVERYTHING_ON_START) {
			PlayerPrefs.DeleteAll ();
		}

		clearCenterPanelContainer ();
	}

	void Start () {
		facilities.initFacilities ();
		floorSwitcher.switchToFloor (2);
		ready = true;
	}
	

	void Update () {
		

	}

	public void disableCamera(){
		cam.enabled = false;	
		cam.GetComponent<Camera>().cullingMask = (1 << LayerMask.NameToLayer("Nothing"));
	}

	public void enableCamera(){
		cam.enabled = true;
		cam.GetComponent<Camera>().cullingMask = -1;
	}

	public void switchToFloor(int floor){
		facilities.switchToFloor (floor);
	}


	// CENTER PANEL
	private void clearCenterPanelContainer(){		
		foreach(Transform t in centerPanelContainer){
			Destroy (t.gameObject);
		}

		hudCanvas.gameObject.SetActive (true);
	}

	public void disableAllInCentralPanelContainer(){
		hudCanvas.gameObject.SetActive (true);

		foreach(Transform t in centerPanelContainer){
			t.gameObject.SetActive (false);
		}
	}

	private GameObject loadCenterPanel(string name){
		clearCenterPanelContainer ();



		var go = Instantiate (Resources.Load("Prefabs/UI/CenterPanels/"+name)) as GameObject;
		go.transform.SetParent (centerPanelContainer, false);
		go.transform.localScale = Vector3.one;
		go.transform.localRotation = Quaternion.identity;

		var rect = go.GetComponent<Transform> ();
		rect.transform.localScale = Vector3.one;




		return go;
	}


	// TIMETABLE
	public void openTimetable(){
		Loom.QueueOnMainThread (()=>{
			hudCanvas.gameObject.SetActive (false);	
			disableCamera();
		});


		foreach (Transform t in centerPanelContainer) {
			if (t.gameObject.GetComponent<TTPanelScript> () != null) {
				t.gameObject.SetActive (true);
				return;
			}
		}

		if (timetableManager.hasTimetable ()) {
			timetablePanel = loadCenterPanel ("TimetableCenterPanel").GetComponent<TTPanelScript> ();
			//timetablePanel.Prepare ();
		} else {
			// tour for getting timetable link
			openTimetableTour();
		}

		//disableCamera ();
	}



	public void openTimetableTour(){
		loadCenterPanel ("LoadTimetableCenterPanel");
		hudCanvas.gameObject.SetActive (false);
	}



	public void closeTimetable(){
		Debug.LogWarning ("Close Panel");
		disableAllInCentralPanelContainer ();
		enableCamera ();
	}
}
