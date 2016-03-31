using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

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
	public BottomPanelScript bottomPanel;
	[HideInInspector]
	public RectTransform openTimetableButton;
	[HideInInspector]
	private Transform centerPanelContainer;

	void Awake(){
		canvas = GameObject.FindObjectOfType<Canvas> ();
		cam = GetComponent<CameraScript> ();

		facilities = new FacilitiesManager ();
		timetableManager = new TimetableManger ();

		pool = GameObject.FindObjectOfType<PoolSystem> ();

		searchBox = GameObject.FindObjectOfType<SearchBoxScript> ();
		bottomPanel = GameObject.FindObjectOfType<BottomPanelScript> ();

		centerPanelContainer = GameObject.Find ("CenterPanelContainer").transform;
		if (centerPanelContainer == null)
			Debug.LogError ("cant find center panel container");

		openTimetableButton = GameObject.Find ("OpenTimetableButton").GetComponent<RectTransform> ();

		Application.targetFrameRate = 60;
	}

	void Start () {
		facilities.initFacilities ();

		clearCenterPanelContainer ();

		switchToFloor (1);
	}
	

	void Update () {
	
	}

	public void switchToFloor(int floor){
		int i = 0;
		foreach(Transform fl in building){
			if (i + 1 > floor) {
				fl.gameObject.SetActive (false);
			} else {
				fl.gameObject.SetActive (true);
			}
			i++;
		}
	}


	private void clearCenterPanelContainer(){		
		foreach(Transform t in centerPanelContainer){
			Destroy (t.gameObject);
		}
	}

	private void loadCenterPanel(string name){
		clearCenterPanelContainer ();

		var go = Instantiate (Resources.Load("Prefabs/UI/CenterPanels/"+name)) as GameObject;
		go.transform.SetParent (centerPanelContainer);
		var rect = go.GetComponent<RectTransform> ();
		rect.transform.localScale = Vector3.one;
		rect.sizeDelta = Vector2.zero;
		rect.anchoredPosition = Vector2.zero;
	}

	public void openTimetable(){
		if (timetableManager.hasTimetable ()) {
			loadCenterPanel ("TimetableCenterPanel");
		} else {
			// tour for getting timetable link
			loadCenterPanel ("LoadTimetableCenterPanel");
			Debug.LogWarning ("Hello!");
		}

	}
}
