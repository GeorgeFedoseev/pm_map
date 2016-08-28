using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class BottomPanelScript : MonoBehaviour {

	AppScript app;
	[HideInInspector]
	public RectTransform rect;


	// inspector
	public ScrollRect scrollRect;
	public RectTransform rowsContainer;
	public Text title;
	public Text pageCounter;



	public bool orangeMode;

	Vector2 targetSnapPosition;

	// panel dragging
	bool dragging = false;
	Vector2 drag_start_pos;
	float drag_start_panel_y;
	Vector2 targetFoldPosition;
	public float foldSpeed;
	bool doFold = false;
	public bool folded = true;
	public bool hidden = true;

	float halfFoldDistance = -110f;
	float fullFoldDistance = -150f;

	Vector2 oldScreenSize;

	void Awake(){
		app = AppScript.getSharedInstance ();
		rect = GetComponent<RectTransform> ();
		scrollRect.onValueChanged.AddListener (OnScroll);
	}

	// Use this for initialization
	void Start () {
		setOrangeMode(true);

		UpdateLayout ();
		OnScroll (Vector2.zero);
		fold (true);
	}


	// Update is called once per frame
	void Update () {
		if (doFold) {
			rect.anchoredPosition = Vector2.Lerp(rect.anchoredPosition, targetFoldPosition, foldSpeed * Time.deltaTime);

			if (Mathf.Abs (rect.anchoredPosition.y - targetFoldPosition.y) < 0.1f) {
				

				doFold = false;
				didFold ();
			}
		}

		if (app != null && app.openTimetableButton != null && rect != null) {
			app.openTimetableButton.anchoredPosition = new Vector2 (rect.offsetMin.x + 50f, rect.anchoredPosition.y+rect.sizeDelta.y+20f);
		}			
	}


	// METHODS

	private void didFold(){
		//Debug.LogWarning ("DID FOLD "+folded.ToString());
		//title.gameObject.SetActive (folded);


		updatePairAlert ();

		app.searchBox.updateClearButton ();
	}


	private void updatePairAlert(bool forceUpdate = false){
		if (!app.timetableManager.hasTimetable ()) {
			return;
		}

		if (hidden || forceUpdate) {
			// check for current pairs
			Pair p;
			if ((p = app.timetableManager.getCurrentPair ()) != null) {
				showPair (p);
			}else if((p = app.timetableManager.getSoonPair ()) != null){
				showPair (p, "СКОРО ПАРА");
			}
		}
	}


	public void setOrangeMode(bool _orangeMode){
		orangeMode = _orangeMode;

		foreach (var img in GetComponentsInChildren<Image> ()) {
			if (_orangeMode) {
				if (img.name != "Icon") {
					img.color = new Color (226f / 255, 68f / 255, 31f / 255);
				} else {
					img.color = new Color (255f / 255, 255f / 255, 255f / 255);
				}

			} else {
				if (img.name != "Icon") {
					img.color = new Color (255f / 255, 255f / 255, 255f / 255);
				} else {
					img.color = new Color (0 / 255, 0 / 255, 0 / 255, 160f / 255);
				}
			}
		}

		foreach (var text in GetComponentsInChildren<Text> ()) {
			if (_orangeMode) {
				text.color = new Color (255f / 255, 255f / 255, 255f / 255);
			} else {
				text.color = new Color (0f / 255,0f / 255, 0f / 255, 223f / 255);
			}
		}


	}

	public void showPair(Pair pair,  string title_text = "ИДЕТ ПАРА"){
		
		// clear old
		foreach (var row in rowsContainer.GetComponentsInChildren<BottomPanelRowScript>()) {
			app.pool.deactivate (row.gameObject);
		}

		var room = app.facilities.getRoom (pair.room);

		var r = app.pool.spawn<BottomPanelRowScript> ("bottom_panel_row");

		if (room != null) {
			r.title.text = room._name;
			Loom.QueueOnMainThread (()=>{
				var sprite = Resources.Load<Sprite>("Prefabs/UI/icons/"+room._icon);
				if(sprite == null)
					sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/default");
				r.icon.sprite = sprite;	
			});

			r.GetComponent<Button> ().onClick.RemoveAllListeners ();

			r.GetComponent<Button>().onClick.AddListener (() => {				
				app.facilities.focusFacility (room);
			});

		} else {
			r.title.text = pair.location;
			r.icon.sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/default");			 
		}

		r.desc.text = pair.name + " ("+pair.time+")";



		r.transform.SetParent (rowsContainer, false);
		r.transform.localScale = Vector3.one;
		r.transform.localPosition = Vector3.one;
		r.transform.localRotation = Quaternion.identity;
	

		title.text = title_text + ": " +pair.name;

		pageCounter.gameObject.SetActive (false);

		UpdateSnapping ();

		scrollRect.horizontalNormalizedPosition = 0;

		bool fullUnfold = false;
		if (orangeMode && !folded)
			fullUnfold = true;		
		unfold (fullUnfold);

		setOrangeMode (true);
		var snapper = scrollRect.GetComponent<ScrollRectSnap> ();
		snapper.scrollToPage (0);
	}

	public void showFacilities(List<FacilityScript> facilities, string title_text = "РЕЗУЛЬТАТЫ", bool switchFloorIfOnlyOne = false, bool doFocusingStuff = false){
		// clear old
		foreach (var r in rowsContainer.GetComponentsInChildren<BottomPanelRowScript>()) {
			app.pool.deactivate (r.gameObject);
		}

		// add new rows
		foreach(var f in facilities){
			var r = app.pool.spawn<BottomPanelRowScript> ("bottom_panel_row");
			r.title.text = f._name;
			r.desc.text = f._description + "\n" + f._info;
			var _f = f;

	
			Loom.QueueOnMainThread (()=>{
				var sprite = Resources.Load<Sprite>("Prefabs/UI/icons/"+_f._icon);
				if(sprite == null)
					sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/default");
				r.icon.sprite = sprite;	
			});


			r.GetComponent<Button> ().onClick.RemoveAllListeners ();
			r.GetComponent<Button>().onClick.AddListener (() => {							
				Debug.LogWarning ("Clicked " + _f.name);	
				app.facilities.focusFacility (_f);
			});

			r.transform.SetParent (rowsContainer);
			r.transform.localScale = Vector3.one;
		}

		title.text = title_text;

		if (facilities.Count > 1) {
			pageCounter.gameObject.SetActive (true);
		} else {
			pageCounter.gameObject.SetActive (false);

			if (doFocusingStuff) {
				app.facilities.focusFacility (facilities[0], true, false, switchFloorIfOnlyOne);							
			}

		}


		UpdateSnapping ();
		setOrangeMode (false);
		scrollRect.horizontalNormalizedPosition = 0;
		unfold ();
		var snapper = scrollRect.GetComponent<ScrollRectSnap> ();
		snapper.scrollToPage (0);
	}



	// EVENTS
	public void OnTitleClick(){
		if (folded) {
			unfold ();
		} else {
			fold ();
		}
	}

	public void fold(bool hide = false){
		targetFoldPosition = new Vector2 (0, hide?fullFoldDistance:halfFoldDistance);
		folded = true;
		doFold = true;
		updateHidden ();
	}

	public void unfold(bool full = true){
		targetFoldPosition = new Vector2 (0, full?0:halfFoldDistance);
		folded = !full;
		doFold = true;
		updateHidden ();
	}

	private void updateHidden(){
		if(targetFoldPosition.y == fullFoldDistance){
			hidden = true;
		}else{
			hidden = false;
		}

		app.searchBox.updateClearButton ();
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
		delta_pos /= app.scaleFactorRefCanvas.scaleFactor;

		var new_pos_y = drag_start_panel_y + delta_pos.y;

		if (new_pos_y < halfFoldDistance) {
			new_pos_y = halfFoldDistance;
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
			targetFoldPosition = new Vector2 (0, halfFoldDistance);
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
		var canvasSize = app.hudCanvas.GetComponent<RectTransform> ().rect.size;
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

	void OnApplicationPause(bool pause) {
		if (!pause && app.ready && app.timetableManager.hasTimetable()) {
			// returned from bg
			updatePairAlert(orangeMode);
		}
	}
}
