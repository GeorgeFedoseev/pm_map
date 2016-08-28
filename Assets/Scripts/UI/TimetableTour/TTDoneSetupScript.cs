using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System.Collections.Generic;

public class TTDoneSetupScript : MonoBehaviour {

	public Transform loadingText;
	public Transform doneText;

	public Button doneButton;

	public void Init(){		
		loadingText.gameObject.SetActive (true);
		doneText.gameObject.SetActive (false);
		doneButton.interactable = false;

		if (AppScript.getSharedInstance ().timetableManager.initTimetable ()) {
			loadingText.gameObject.SetActive (false);
			doneText.gameObject.SetActive (true);
			doneButton.interactable = true;	
		}else{
			var tour = FindObjectOfType<TTTourPanelScript> ();
			tour.nextPage ();
			tour.backButton.interactable = false;
		}


	}

}
