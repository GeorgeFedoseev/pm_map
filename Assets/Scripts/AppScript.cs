using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System;


public class AppScript : MonoBehaviour {

	public static bool DEBUG = false;
	#if UNITY_EDITOR
	public static bool CLEAN_EVERYTHING_ON_START = true;
	public static bool UPDATE_FACILITIES_DB_ON_START = true;
	#else
	public static bool CLEAN_EVERYTHING_ON_START = false;
	public static bool UPDATE_FACILITIES_DB_ON_START = false;
	#endif


	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}


	// inspector
	public Transform building;

	public FacilitiesManager facilities;
	public TimetableManger timetableManager;

	public int currentFloor = -1;


	// Events
	public Action OnUpdateTimeBasedElements = () => {
		//Debug.LogWarning("Update time-based");
	};
	public Action<int> OnFloorSwitch = (_) => {};
	public Action<FacilityScript> OnFacilityFocus = (_) => {};
	public Action<FacilityScript> OnSearchResultSelect = (_) => {};
	public Action</*query*/string> OnShowSearchResults = (_) => {};
	public Action OnOpenTimetable = () => {};

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

	#if UNITY_ANDROID
	static int getSDKInt() {
		using (var version = new AndroidJavaClass("android.os.Build$VERSION")) {
			return version.GetStatic<int>("SDK_INT");
		}
	}
	#endif

	void Awake(){



		/*DEBUG*/
		if (CLEAN_EVERYTHING_ON_START) {
			PlayerPrefs.DeleteAll ();
		}

		#if UNITY_ANDROID && !UNITY_EDITOR
		// enable Status Bar on Android
		if(getSDKInt() >= 20){
			ApplicationChrome.statusBarState = ApplicationChrome.States.VisibleOverContent;
			//ApplicationChrome.navigationBarState = ApplicationChrome.States.Hidden;
			ApplicationChrome.statusBarColor = 0xD73C17FF;
			//Screen.fullScreen = false;	
		}else{
			ApplicationChrome.statusBarState = ApplicationChrome.States.Visible;
			//ApplicationChrome.navigationBarState = ApplicationChrome.States.Hidden;
			ApplicationChrome.statusBarColor = 0xD73C17FF;
		}

		#endif

		_savedSkybox = RenderSettings.skybox;

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




		clearCenterPanelContainer ();
	}

	void Start () {
		facilities.initFacilities ();
		floorSwitcher.switchToFloor (2);
		ready = true;


		if (timetableManager.hasTimetable ()) {
			openTimetable ();
		}


		// update time based elements every 3 sec
		InvokeRepeating("UpdateTimeBasedElements", 0, 3f);

		ProcessDeepLinking ();
	}
	

	void Update () {
		

	}

	Material _savedSkybox;
	public void disableCamera(){
		cam.enabled = false;	
		cam.GetComponent<Camera>().cullingMask = (1 << LayerMask.NameToLayer("Nothing"));
		_savedSkybox = RenderSettings.skybox;
		RenderSettings.skybox = null;
		building.gameObject.SetActive (false);
	}

	public void enableCamera(){
		//Debug.LogWarning ("Enabled camera");
		cam.enabled = true;
		cam.GetComponent<Camera>().cullingMask = -1;
		RenderSettings.skybox = _savedSkybox;
		building.gameObject.SetActive (true);
	}

	public void switchToFloor(int floor){
		if (currentFloor == floor)
			return;
		
		facilities.switchToFloor (floor);
		OnFloorSwitch (floor);

		currentFloor = floor;
	}


	// CENTER PANEL
	private void clearCenterPanelContainer(){		
		foreach(Transform t in centerPanelContainer){
			DestroyImmediate (t.gameObject);
		}

		hudCanvas.gameObject.SetActive (true);
		enableCamera ();
	}

	public void disableAllInCentralPanelContainer(){
		hudCanvas.gameObject.SetActive (true);
		enableCamera ();

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
		OnOpenTimetable ();
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
		Debug.LogWarning ("Open timetable tour");
		loadCenterPanel ("LoadTimetableCenterPanel");
		hudCanvas.gameObject.SetActive (false);
	}



	public void closeTimetable(){
		Debug.LogWarning ("Close Panel");
		disableAllInCentralPanelContainer ();
	}

	void UpdateTimeBasedElements(){
		OnUpdateTimeBasedElements ();
	}

	void OnApplicationPause(bool pause) {
		if (!pause && ready) {
			OnUpdateTimeBasedElements ();
			ProcessDeepLinking ();
		}
	}


	void ProcessDeepLinking(){
		Facebook.Unity.FB.GetAppLink ((result) => {
			Alerts.InfoOk("Deep Link", result.Url);
		});
	}
}
