using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class AppScript : MonoBehaviour {

	private static AppScript sharedInstance;
	public static AppScript getSharedInstance(){
		return sharedInstance == null ? sharedInstance = Camera.main.gameObject.GetComponent<AppScript>() : sharedInstance;
	}

	public FacilitiesManager facilities;
	public TimetableManger timetableManager;

	public PoolSystem pool;

	public Canvas canvas;

	public CameraScript cam;
	[HideInInspector]
	public SearchBoxScript searchBox;
	[HideInInspector]
	public BottomPanelScript bottomPanel;


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

		Application.targetFrameRate = 60;
	}

	void Start () {
		facilities.initFacilities ();

		clearCenterPanelContainer ();
	}
	

	void Update () {
	
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
