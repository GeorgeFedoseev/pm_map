using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using TMPro;
using SPBUTimetable;

public class TTPairScript : MonoBehaviour {
	public Pair _pair;

	public TextMeshProUGUI pairTitle, lecturerName, locationText;

	public GameObject locationButtonContainer;
	public Button locationButton;
	public TextMeshProUGUI locationButtonLabel;

	public GameObject divider;
	public GameObject nowCircle;

	// EDITABLE
	public Button editButton, deleteButton;


	public void updateCurrentPair(){
		if (nowCircle != null) {
			if (_pair != null) {
				var enableNowCircle = _pair.now ();
				nowCircle.SetActive (enableNowCircle);
				nowCircle.GetComponent<ImageBlinkScript> ().enabled = enableNowCircle;
			}
		}
	}


}
