using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System.Collections.Generic;

public class SearchBoxScript : MonoBehaviour {

	AppScript app;

	public RectTransform dialog;
	public SubmitInputField input;
	public Transform suggestionRowsContainer;
	public Button clearButton;

	bool suggestionsOpened = false;
	float suggestionsAnimTime = 0.2f;

	TouchScreenKeyboard kb;

	SearchResults3d searchResults3d;


	void Awake(){
		app = AppScript.getSharedInstance ();

		searchResults3d = gameObject.AddComponent<SearchResults3d> ();
	}

	// Use this for initialization
	void Start () {		
		suggestionsOpened = true;
		searchInputChanged ("");
		input.onKeyboardDone.AddListener (keyboardDone);
		input.onKeyboardCancel.AddListener (keyboardCancel);
		input.onValueChanged.AddListener (searchInputChanged);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void keyboardDone(){		
		var query = input.text.Trim ();

		//Debug.LogWarning ("DONE EDIT");

		if (query.Length <= 1)
			return;


		showSearchResults (query);
		hideSuggestions ();
	}

	void keyboardCancel(){
		hideSuggestions ();
	}

	public void inputClick(){
		
		if (input.text != "") {
			showSuggestions ();
		}
	}

	public void clearInput(){
		input.text = "";
		searchInputChanged ("");
		app.bottomPanel.fold (true);
		app.cam.stopFlying ();
		app.facilities.dehighlightAll ();
		updateClearButton ();
		searchResults3d.Clear ();
	}


	void showSearchResults(string query){
		var found_facilities = app.facilities.findFacilities (query);
		if (found_facilities.Count > 0) {
			if (found_facilities.Count > 1) {
				app.bottomPanel.showFacilities (found_facilities, "РЕЗУЛЬТАТЫ ПОИСКА", true, true);
				// search arrows on 3d map
				searchResults3d.SetSearchResults(found_facilities);
				searchResults3d.DeselectAll ();
				// camera fit all facilities
				// if no search results caught on camera
				bool anyVisible = false;
				foreach (var f in found_facilities) {
					var vp_p = Camera.main.WorldToViewportPoint (f.getCenter());
					if (f.gameObject.activeInHierarchy && vp_p.x > 0 && vp_p.x < 1 && vp_p.y > 0 && vp_p.y < 1 && vp_p.z > 0) {
						anyVisible = true;
						break;
					}
				}

				if (!anyVisible) {
					// switch to most common floor
					int[] floorScores = new int[4] {0, 0, 0, 0};

					int maxScore = -1;
					int mostCommonFloor = -1;
					foreach (var f in found_facilities) {
						var floor = f.getFloor ();
						floorScores [floor]++;
						if (floorScores [floor] > maxScore) {
							maxScore = floorScores [floor];
							mostCommonFloor = floor;
						}
					}

					app.switchToFloor (mostCommonFloor);

					app.cam.FitFacilities(found_facilities);

				}

				Loom.QueueOnMainThread (() => {
					searchResults3d.SelectFacilityArrow (found_facilities[0]);	
				}, 1f);
			} else {
				// only one facility - focus it
				app.facilities.focusFacility(found_facilities[0]);
			}

		}

		hideSuggestions();
	}

	public void searchInputChanged(string str){		
	//	Debug.LogWarning ("INPUT CHANGED");
		updateClearButton();

		var query = input.text.Trim();

		Loom.removeByName ("find_suggestions");
		Loom.QueueOnMainThread (()=>{
			findSuggestions (query);	
		}, 0.1f, "find_suggestions");
	}

	public void updateClearButton(){
		if(app != null)
			clearButton.gameObject.SetActive (input.text.Length > 0 || (!app.bottomPanel.hidden && !app.bottomPanel.orangeMode));
	}

	private void findSuggestions(string query){
		
		if (query.Length >= 2) {

			// FIND SUGGESTIONS
			// clear old rows
			foreach (var r in suggestionRowsContainer.GetComponentsInChildren<SuggestionRowScript>()) {
				app.pool.deactivate (r.gameObject);			
			}

			Loom.RunAsync (()=>{
				var found_facilities = app.facilities.findFacilities (query);

				Loom.QueueOnMainThread(()=>{
					if (found_facilities.Count > 0) {
						// create new rows for query results

						foreach (var f in found_facilities) {
							var r = app.pool.spawn<SuggestionRowScript> ("suggestion_row");

							r.name.text = f._name;
							r.desc.text = f._description;

							var _f = f;
							//Loom.QueueOnMainThread (() => {
							var sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/" + _f._icon);
							if (sprite == null)
								sprite = Resources.Load<Sprite> ("Prefabs/UI/icons/default");
							r.icon.sprite = sprite;	
							//});


							// suggestion click
							r.button.onClick.AddListener (() => {
								Debug.LogWarning ("Clicked " + _f._name);	
								app.facilities.focusFacility (_f, true, true);
								hideSuggestions();
							});

							r.transform.SetParent (suggestionRowsContainer, false);
							r.transform.localScale = Vector3.one;
							r.transform.localRotation = Quaternion.identity;
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

						dialog.sizeDelta = new Vector2 (dialog.sizeDelta.x, 0);
					}
				});

			});

		} else {
			if (suggestionsOpened)
				hideSuggestions ();

			dialog.sizeDelta = new Vector2 (dialog.sizeDelta.x, 0);
		}	
	}

	private void showSuggestions(){
		if (suggestionsOpened)
			return;
		Loom.removeByName ("hide_dialog");
		dialog.gameObject.SetActive (true);
		iTween.Stop(gameObject);
		iTween.ValueTo(gameObject, iTween.Hash("from", 0, "to", 1, "onupdate", "inputAnimation", "time", suggestionsAnimTime, "easetype", iTween.EaseType.easeInOutSine));
		suggestionsOpened = true;
	}

	private void hideSuggestions(){
		iTween.Stop(gameObject);
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
