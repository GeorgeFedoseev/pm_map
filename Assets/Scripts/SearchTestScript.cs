using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;

public class SearchTestScript : MonoBehaviour {


	public RectTransform dialog;
	public InputField input;

	bool dialogOpened = false;
	float dialogAnimTime = 0.2f;

	// Use this for initialization
	void Start () {		
		searchInputChanged ("");
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	public void searchInputChanged(string text){
		Debug.LogWarning ("text: "+input.text);

		if (input.text != "" && !dialogOpened) {
			Loom.removeByName ("hide_dialog");
			dialog.gameObject.SetActive (true);
			iTween.ValueTo(gameObject, iTween.Hash("from", 0, "to", 1, "onupdate", "inputAnimation", "time", dialogAnimTime, "easetype", iTween.EaseType.easeInOutSine));
			dialogOpened = true;
		} else if(input.text == "" && dialogOpened){			
			iTween.ValueTo(gameObject, iTween.Hash("from", 1, "to", 0, "onupdate", "inputAnimation", "time", dialogAnimTime, "easetype", iTween.EaseType.easeInOutSine));
			dialogOpened = false;

			Loom.QueueOnMainThread (()=>{
				dialog.gameObject.SetActive (false);
			}, dialogAnimTime, "hide_dialog");
		}
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
		pos.y = 10f - 58f * progress;
		dialog.anchoredPosition = pos;

	}


}
