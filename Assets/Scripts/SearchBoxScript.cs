using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;

public class SearchBoxScript : MonoBehaviour {


	public RectTransform dialog;
	public InputField input;

	public Transform suggestionRowsContainer;

	bool dialogOpened = false;
	float dialogAnimTime = 0.2f;

	// Use this for initialization
	void Start () {		
		dialogOpened = true;
		searchInputChanged ();

	}
	
	// Update is called once per frame
	void Update () {
	
	}


	public void searchInputChanged(){
		var app = AppScript.getSharedInstance ();
		//Debug.LogWarning ("text: "+input.text);
		var query = input.text;

		// HIDE/SHOW
		if (query == "" && dialogOpened) {	
			//Debug.LogWarning ("Hide search");
			hideSuggestions ();
		} else {
			// SEARCH SUGGESTIONS
			if (query != ""){
				Debug.LogWarning ("q: "+query);
				// FIND SUGGESTIONS
				// clear old rows
				foreach(var r in suggestionRowsContainer.GetComponentsInChildren<SuggestionRowScript>()){
					app.pool.deactivate (r.gameObject);			
				}

				var found_facilities = app.facilities.findFacilities (query);

				if (found_facilities.Count > 0) {
					// create new rows for query results

					foreach (var f in found_facilities) {
						var r = app.pool.spawn<SuggestionRowScript> ("suggestion_row");
						r.name.text = f.name;
						r.desc.text = f.description;
						r.transform.SetParent (suggestionRowsContainer);
					}

					// update suggestions box height
					var h = 25f + found_facilities.Count * 48f;
					if (h > 350f)
						h = 350f;
					dialog.sizeDelta = new Vector2 (dialog.sizeDelta.x, h);

					if(!dialogOpened)
						showSuggestions ();
				} else {
					if(dialogOpened)
						hideSuggestions ();
				}
			}
		}
	}

	private void showSuggestions(){
		Loom.removeByName ("hide_dialog");
		dialog.gameObject.SetActive (true);
		iTween.ValueTo(gameObject, iTween.Hash("from", 0, "to", 1, "onupdate", "inputAnimation", "time", dialogAnimTime, "easetype", iTween.EaseType.easeInOutSine));
		dialogOpened = true;
	}

	private void hideSuggestions(){
		iTween.ValueTo(gameObject, iTween.Hash("from", 1, "to", 0, "onupdate", "inputAnimation", "time", dialogAnimTime, "easetype", iTween.EaseType.easeInOutSine));
		dialogOpened = false;

		Loom.QueueOnMainThread (()=>{
			dialog.gameObject.SetActive (false);
		}, dialogAnimTime, "hide_dialog");
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
