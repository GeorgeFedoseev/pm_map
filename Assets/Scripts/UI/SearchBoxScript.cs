using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System.Collections.Generic;

public class SearchBoxScript : MonoBehaviour {

	AppScript app;

	public RectTransform dialog;
	public InputField input;
	public Transform suggestionRowsContainer;
	public Button clearButton;

	bool suggestionsOpened = false;
	float suggestionsAnimTime = 0.2f;

	void Awake(){
		app = AppScript.getSharedInstance ();
	}

	// Use this for initialization
	void Start () {		
		suggestionsOpened = true;
		searchInputChanged ();
		input.onEndEdit.AddListener (keyboardDoneEdit);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void keyboardDoneEdit(string str){		
		var query = str.Trim ();

		if (query.Length <= 1)
			return;

		if(Input.GetButtonDown("Submit")){
			Debug.LogWarning ("Search");
			showSearchResults (query);
		} else {
			Debug.LogWarning ("Canceled");
		}	
		

	}

	public void inputClick(){
		if (input.text != "") {
			showSuggestions ();
		}
	}

	public void clearInput(){
		input.text = "";
		searchInputChanged ();
		app.bottomPanel.fold (true);
		app.cam.stopFlying ();
		app.facilities.dehighlightAll ();
	}


	void showSearchResults(string query){
		var found_facilities = app.facilities.findFacilities (query);
		if (found_facilities.Count > 0) {
			app.bottomPanel.show ();
			app.bottomPanel.showFacilities (found_facilities, "РЕЗУЛЬТАТЫ ПОИСКА");
		}
		hideSuggestions();
	}

	public void searchInputChanged(){		
		clearButton.gameObject.SetActive (input.text.Length > 0);

		var query = input.text.Trim();

		if (query.Length >= 2) {		
			Debug.LogWarning ("q: " + query);

			// FIND SUGGESTIONS
			// clear old rows
			foreach (var r in suggestionRowsContainer.GetComponentsInChildren<SuggestionRowScript>()) {
				app.pool.deactivate (r.gameObject);			
			}

			var found_facilities = app.facilities.findFacilities (query);

			if (found_facilities.Count > 0) {
				// create new rows for query results

				foreach (var f in found_facilities) {
					var r = app.pool.spawn<SuggestionRowScript> ("suggestion_row");
					r.name.text = f._name;
					r.desc.text = f._description;

					var _f = f;
					Loom.QueueOnMainThread (() => {
						var sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/" + _f._icon);
						if (sprite == null)
							sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/default");
						r.icon.sprite = sprite;	
					});



					r.button.onClick.AddListener (() => {							
						Debug.LogWarning ("Clicked " + _f._name);	
						app.facilities.focusFacility (_f, true);

					});

					r.transform.SetParent (suggestionRowsContainer);
					r.transform.localScale = Vector3.one;
				}

				// update suggestions box height
				var h = 25f + found_facilities.Count * 48f;
				if (h > 350f)
					h = 350f;
				dialog.sizeDelta = new Vector2 (dialog.sizeDelta.x, h);

				if (!suggestionsOpened)
					showSuggestions ();
			} else {					
				if (suggestionsOpened)
					hideSuggestions ();
			}
		} else {
			if (suggestionsOpened)
				hideSuggestions ();
		}	

	}

	private void showSuggestions(){
		Loom.removeByName ("hide_dialog");
		dialog.gameObject.SetActive (true);
		iTween.ValueTo(gameObject, iTween.Hash("from", 0, "to", 1, "onupdate", "inputAnimation", "time", suggestionsAnimTime, "easetype", iTween.EaseType.easeInOutSine));
		suggestionsOpened = true;
	}

	private void hideSuggestions(){
		iTween.ValueTo(gameObject, iTween.Hash("from", 1, "to", 0, "onupdate", "inputAnimation", "time", suggestionsAnimTime, "easetype", iTween.EaseType.easeInOutSine));
		suggestionsOpened = false;

		Loom.QueueOnMainThread (()=>{
			dialog.gameObject.SetActive (false);
		}, suggestionsAnimTime, "hide_dialog");
	}

	private void inputAnimation(float progress){
		foreach (var cr in dialog.gameObject.GetComponentsInChildren<CanvasRenderer>()) {
			
			if (cr.gameObject.transform.name == "Shadow") {
				if(progress < 1)
					cr.SetAlpha (0);
				else
					cr.SetAlpha (1);
			} else {
				cr.SetAlpha (progress);
			}
		}

		var pos = dialog.anchoredPosition;
		pos.y = -45f * progress;
		dialog.anchoredPosition = pos;

	}


}
