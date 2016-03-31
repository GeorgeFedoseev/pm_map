using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class BottomPanelScript : MonoBehaviour {

	AppScript app;
	[HideInInspector]
	public RectTransform rect;


	// set in inspector
	public ScrollRect scrollRect;
	public RectTransform rowsContainer;
	public Text title;
	public Text pageCounter;



	float maxWidth = 400f;
	Vector2 targetSnapPosition;

	// panel dragging
	bool dragging = false;
	Vector2 drag_start_pos;
	float drag_start_panel_y;
	Vector2 targetFoldPosition;
	public float foldSpeed;
	bool doFold = false;
	bool foldHide = false;
	bool folded = true;

	Vector2 oldScreenSize;

	void Awake(){
		app = AppScript.getSharedInstance ();
		rect = GetComponent<RectTransform> ();
		scrollRect.onValueChanged.AddListener (OnScroll);
	}

	// Use this for initialization
	void Start () {
		
	}

	void OnEnable(){
		UpdateLayout ();
		OnScroll (Vector2.zero);
		fold (true);
	}

	// Update is called once per frame
	void Update () {
		if (doFold) {
			rect.anchoredPosition = Vector2.Lerp(rect.anchoredPosition, targetFoldPosition, foldSpeed * Time.deltaTime);
			if (Mathf.Approximately (rect.anchoredPosition.y, targetFoldPosition.y)) {
				doFold = false;
			}
		}

		app.openTimetableButton.anchoredPosition = new Vector2 (rect.offsetMin.x + 50f, rect.anchoredPosition.y+rect.sizeDelta.y+20f);
	}


	// METHODS

	public void showFacilities(List<FacilityScript> facilities, string title_text = "РЕЗУЛЬТАТЫ"){
		// clear old
		foreach (var r in rowsContainer.GetComponentsInChildren<BottomPanelRowScript>()) {
			app.pool.deactivate (r.gameObject);
		}

		// add new rows
		foreach(var f in facilities){
			var r = app.pool.spawn<BottomPanelRowScript> ("bottom_panel_row");
			r.title.text = f._name;
			r.desc.text = f._description;

			var _f = f;
			r.GetComponent<Button>().onClick.AddListener (() => {							
				Debug.LogWarning ("Clicked " + _f.name);	
				app.facilities.flyToFacility (_f);
			});

			r.transform.SetParent (rowsContainer);
			r.transform.localScale = Vector3.one;
		}

		title.text = title_text;


		UpdateSnapping ();
		scrollRect.horizontalNormalizedPosition = 0;
		unfold ();
	}



	// EVENTS
	public void OnTitleClick(){
		if (folded) {
			unfold ();
		} else {
			fold ();
		}
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


	public void fold(bool hide = false){
		targetFoldPosition = new Vector2 (0, hide?-200f:-160f);
		folded = true;
		doFold = true;
	}

	public void unfold(){
		if (hidden()) {
			show ();
		}

		targetFoldPosition = new Vector2 (0, 0f);
		folded = false;
		doFold = true;
	}

	public void OnDrag(BaseEventData e){
		doFold = false;

		e.Use ();

		if (!dragging) {
			//Debug.LogWarning ("Drag start");
			drag_start_pos = (Vector2)Input.mousePosition;
			drag_start_panel_y = rect.anchoredPosition.y;
		}

		var delta_pos = (Vector2)Input.mousePosition - drag_start_pos;
		delta_pos /= app.canvas.scaleFactor;

		var new_pos_y = drag_start_panel_y + delta_pos.y;

		if (new_pos_y < -160) {
			new_pos_y = -160;
		} else if (new_pos_y > 0) {
			new_pos_y = 0;
		}

		rect.anchoredPosition = new Vector2 (rect.anchoredPosition.x, new_pos_y);


		dragging = true;
	}

	public void OnEndDrag(){
		//Debug.LogWarning ("Drag end");
		dragging = false;

		var delta_pos = (Vector2)Input.mousePosition - drag_start_pos;
		if (delta_pos.y < 0) {			
			//Debug.LogWarning ("Fold down");
			targetFoldPosition = new Vector2 (0, -160f);
			folded = true;
		} else {
			//Debug.LogWarning ("Fold up");
			targetFoldPosition = new Vector2 (0, 0f);
			folded = false;
		}

		doFold = true;

	}


	void OnScroll(Vector2 scrollPos){
		//Debug.LogWarning ("Scroll vel: "+scrollRect.velocity.x);
		if(Mathf.Abs(scrollRect.velocity.x) < 1f){
			OnScrollStop ();
		}
	}

	void OnRectTransformDimensionsChange(){
		if(rect!=null)
			UpdateLayout();
	}


	void OnScrollStop(){
		// update page counter
		int closest_row = (int)Mathf.Floor((float)rowsContainer.childCount * scrollRect.horizontalNormalizedPosition);
		if (closest_row >= rowsContainer.childCount)
			closest_row = rowsContainer.childCount - 1;
		else if (closest_row < 0)
			closest_row = 0;

		pageCounter.text = (closest_row + 1) + " из " + rowsContainer.childCount;	
	}


	public void setTitle(string _title){
		title.text = _title;
	}


	void UpdateSnapping(){
		var snapper = scrollRect.GetComponent<ScrollRectSnap> ();
		snapper.screens = rowsContainer.childCount;
		snapper.initSnapper ();
		snapper.DragEnd ();
	}


	void UpdateLayout(){
		//Debug.LogWarning ("UPDATE BOTTOM PANEL LO");
		var sizeDelta = rect.sizeDelta;
		var size = rect.rect.size;
		var canvasSize = app.canvas.GetComponent<RectTransform> ().rect.size;
		if (canvasSize == oldScreenSize)
			return;

		UpdateSnapping ();

		//Debug.LogWarning ("UPDATE BOTTOM PANEL LO: "+size);
	//	Debug.LogWarning ("Size Delta: "+sizeDelta);

		if (canvasSize.x > 500f) {			
			rect.sizeDelta = new Vector2 (500f - canvasSize.x, rect.sizeDelta.y);
			//Debug.LogWarning ("Size Delta: "+rect.sizeDelta);
		} else if(size.x < canvasSize.x) {
			rect.sizeDelta = new Vector2 (20f, rect.sizeDelta.y);
		}

		rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);
		//Debug.LogWarning ("Size: "+size);

		oldScreenSize = canvasSize;
	}
}
