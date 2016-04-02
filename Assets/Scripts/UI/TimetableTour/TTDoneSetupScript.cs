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

		AppScript.getSharedInstance().timetableManager.getTimetable();

		loadingText.gameObject.SetActive (false);
		doneText.gameObject.SetActive (true);
		doneButton.interactable = true;
		AppScript.getSharedInstance().timetableManager.restoreTimetableFromDatabase();

	}

}
