using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class CenterPanelScript : MonoBehaviour {

	protected AppScript app;
	[HideInInspector]
	public RectTransform rect;


	// set in inspector
	public Text title;
	public ScrollRect scrollRect;
	public RectTransform pagesContainer;

	public Button backButton;



	Vector2 targetSnapPosition;


	protected virtual void Awake(){		
		app = AppScript.getSharedInstance ();
		rect = GetComponent<RectTransform> ();
		scrollRect.onValueChanged.AddListener (OnScroll);
	}

	// Use this for initialization
	void Start () {
		UpdateLayout ();
		changePage (0);
		OnScroll (Vector2.zero);
	}

	void OnEnable(){
		

	}

	// Update is called once per frame
	void Update () {	

	}

	public virtual void close(){
		app.closeTimetable ();
	}


	// METHODS

	public void nextPage(){
		changePage (getCurrentPage() + 1);
	}

	public void prevPage(){
		changePage (getCurrentPage() - 1);
	}

	private void changePage(int index){
		var pc = pageCount ();

		if (pc > 0) {
			if (index < 0 || index > pc - 1) {
				Debug.LogError ("Center panel page index out of bounds");
				return;
			}

			if (index == 0)
				backButton.gameObject.SetActive (false);
			else
				backButton.gameObject.SetActive (true);

			UpdateSnapping ().scrollToPage (index);
		}

	}

	private int getCurrentPage(){
		return UpdateSnapping ().getCurrentPage ();
	}

	private int pageCount(){
		return pagesContainer.GetComponentsInChildren<CenterPanelPageScript> ().Length;
	}


	public void loadPages(List<string> prefabNames){
		// clear old
		foreach (var r in pagesContainer.GetComponentsInChildren<CenterPanelPageScript>()) {
			app.pool.deactivate (r.gameObject);
		}

		// add new rows
		foreach(var p in prefabNames){
			var page = app.pool.spawn<CenterPanelPageScript> (p);
			/*var _f = f;
			r.button.onClick.AddListener (() => {							
				Debug.LogWarning ("Clicked " + _f.name);	
				app.facilities.flyToFacility (_f);
			});*/

			page.transform.SetParent (pagesContainer);
			page.transform.localScale = Vector3.one;
		}

		UpdateSnapping ();
		scrollRect.horizontalNormalizedPosition = 0;

		changePage (0);
	}



	public void hide(){
		gameObject.SetActive (false);
	}

	public void show(){
		gameObject.SetActive (true);
	}

	public bool hidden(){
		return !gameObject.activeInHierarchy;
	}

	void OnScroll(Vector2 scrollPos){
		//Debug.LogWarning ("Scroll vel: "+scrollRect.velocity.x);
		if(Mathf.Abs(scrollRect.velocity.x) < 1f){
			OnScrollStop ();
		}
	}

	protected virtual void OnRectTransformDimensionsChange(){
		if(rect!=null && app != null && app.centerPanelCanvas != null)
			UpdateLayout();		
	}


	void OnScrollStop(){
		// update page counter
		int closest_row = (int)Mathf.Floor((float)pagesContainer.childCount * scrollRect.horizontalNormalizedPosition);
		if (closest_row >= pagesContainer.childCount)
			closest_row = pagesContainer.childCount - 1;
		else if (closest_row < 0)
			closest_row = 0;
	}


	public void setTitle(string _title){
		title.text = _title;
	}


	ScrollRectSnap UpdateSnapping(){
		var snapper = scrollRect.GetComponent<ScrollRectSnap> ();
		snapper.screens = pagesContainer.childCount;
		snapper.initSnapper ();
		snapper.DragEnd ();
		return snapper;
	}


	void UpdateLayout(){
		//Debug.LogWarning ("UPDATE BOTTOM PANEL LO");
		var sizeDelta = rect.sizeDelta;
		var size = rect.rect.size;
		var canvasSize = app.centerPanelCanvas.GetComponent<RectTransform> ().rect.size;


		UpdateSnapping ();

		//Debug.LogWarning ("UPDATE BOTTOM PANEL LO: "+size);
	//	Debug.LogWarning ("Size Delta: "+sizeDelta);
		/*
		if (canvasSize.x > 500f) {			
			rect.sizeDelta = new Vector2 (500f - canvasSize.x, rect.sizeDelta.y);
			//Debug.LogWarning ("Size Delta: "+rect.sizeDelta);
		} else if(size.x < canvasSize.x) {
			rect.sizeDelta = new Vector2 (20f, rect.sizeDelta.y);
		}

		rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);
		//Debug.LogWarning ("Size: "+size);

		oldScreenSize = canvasSize;*/
	}
}
