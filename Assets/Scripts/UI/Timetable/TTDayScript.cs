using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class TTDayScript : MonoBehaviour {

	public Text dayTitle;
	public Transform timesContainer;


	void Awake(){
		clear ();
	}

	private void clear(){
		foreach(Transform t in timesContainer){
			Destroy (t.gameObject);
		}
	}

	public void addTime(string time, List<Pair> pairs, bool lastTime = false){
		var t = (Instantiate (Resources.Load("Prefabs/UI/schedule/Time")) as GameObject).GetComponent<TTTimeScript>();		
		t.transform.SetParent (timesContainer);
		t.transform.localScale = Vector3.one;

		t.timeTitle.text = time;

		var i = 0;
		foreach(var p in pairs){
			var lastPair = i == pairs.Count - 1;
			t.addPair (p, lastTime && lastPair);
			i++;
		}
	}


	public void updateLayout(){
		
		foreach (var t in timesContainer.GetComponentsInChildren<TTTimeScript>()) {
			t.updateLayout ();
		}

		var sumHeight = dayTitle.rectTransform.rect.size.y + timesContainer.GetComponent<VerticalLayoutGroup> ().padding.bottom;

		foreach(Transform t in timesContainer){						
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
		}

		Debug.LogWarning ("sumHeight for Day : "+sumHeight);

		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
