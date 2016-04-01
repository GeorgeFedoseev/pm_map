using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class TTDayScript : MonoBehaviour {

	public Text dayTitle;
	public Transform timesContainer;


	void Awake(){
		clear ();

		dayTitle.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, 0);
	}

	private void clear(){
		foreach(Transform t in timesContainer){
			Destroy (t.gameObject);
		}
	}

	public void addTime(string time, List<Pair> pairs){
		var t = (Instantiate (Resources.Load("Prefabs/UI/schedule/time_row")) as GameObject).GetComponent<TTTimeScript>();		
		t.transform.SetParent (timesContainer);
		t.transform.localScale = Vector3.one;

		t.time.text = time;
		foreach(var p in pairs){
			t.addPair (p);
		}
	}


	public void updateLayout(){
		var app = AppScript.getSharedInstance ();
		dayTitle.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, 0);
		timesContainer.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, -30);

		var sd = timesContainer.GetComponent<RectTransform> ().sizeDelta;
		sd.x = 0;
		timesContainer.GetComponent<RectTransform> ().sizeDelta = sd;


		foreach (var t in timesContainer.GetComponentsInChildren<TTTimeScript>()) {
			t.updateLayout ();
		}

		var sumHeight = 0f;
		foreach(Transform t in timesContainer){
			t.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, -sumHeight+50f);
			Debug.LogWarning ("sumHeight: "+sumHeight);
			sumHeight += t.GetComponent<RectTransform> ().rect.height;
		}

		timesContainer.GetComponent<RectTransform> ().SetSizeWithCurrentAnchors (RectTransform.Axis.Vertical, sumHeight);


		GetComponent<LayoutElement> ().preferredHeight = sumHeight-20f;


		//GetComponent<LayoutElement> ().preferredWidth = Screen.width;


	}
}
