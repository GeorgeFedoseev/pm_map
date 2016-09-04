using UnityEngine;
using System.Collections;

public class TutorialScript : MonoBehaviour {

	AppScript app;

	// Use this for initialization
	void Start () {
		app = AppScript.getSharedInstance ();

		// hide tutorial if:
		// - searched something
		// - opened timetable
		// - tried everything
		// - already done tutorial

		if (app.timetableManager.hasTimetable ()) {
			CompletedTutorial ();
		}

		if (ConfigStorage.getBool ("completed_tutorial") || app.timetableManager.hasTimetable ()) {
			HideTutorial ();
		} else {
			ShowTutorial ();
		}


		app.OnFacilityFocus += (f) => {
			HideTutorial();
			CompletedTutorial();
		};

		app.OnShowSearchResults += (query) => {
			HideTutorial();
			CompletedTutorial();
		};

		app.OnOpenTimetable += () => {
			HideTutorial();
			CompletedTutorial();
		};

	}


	void CompletedTutorial(){
		ConfigStorage.set ("completed_tutorial", true);
	}

	void ShowTutorial(){
		gameObject.SetActive (true);
	}


	void HideTutorial(){
		gameObject.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
