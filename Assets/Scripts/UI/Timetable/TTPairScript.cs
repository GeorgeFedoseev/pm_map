using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using TMPro;

public class TTPairScript : MonoBehaviour {
	public Pair _pair;

	public TextMeshProUGUI pairTitle, locationText;

	public GameObject locationButtonContainer;
	public Button locationButton;
	public Text locationButtonLabel;

	public GameObject divider;
	public GameObject nowCircle;

	// EDITABLE
	public Button editButton, deleteButton;


	public void updateCurrentPair(){
		if (nowCircle != null) {
			var enableNowCircle = _pair.now ();
			nowCircle.SetActive (enableNowCircle);
			nowCircle.GetComponent<ImageBlinkScript> ().enabled = enableNowCircle;
		}
	}


}
