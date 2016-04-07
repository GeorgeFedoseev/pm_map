﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class TTTimeScript : MonoBehaviour {
	AppScript app;

	public Text timeTitle;
	public Transform pairsContainer;

	void Awake(){
		app = AppScript.getSharedInstance ();
		clear ();
	}

	private void clear(){
		foreach(Transform t in pairsContainer){
			Destroy (t.gameObject);
		}
	}

	public void addPair(Pair pair, bool lastPair = false){
		var p = (Instantiate (Resources.Load("Prefabs/UI/schedule/Pair")) as GameObject).GetComponent<TTPairScript>();		
		p._pair = pair;
		p.transform.SetParent (pairsContainer);
		p.transform.localScale = Vector3.one;

		p.pairTitle.text = pair.name;
		p.locationText.text = pair.room;

		if (lastPair)
			p.divider.SetActive (false);

		if (pair.now ()) {
			p.nowCircle.SetActive (true);
		} else {
			p.nowCircle.SetActive (false);			
		}

		// actions
		if (app.facilities.hasRoom (pair.room)) {
			p.locationText.gameObject.SetActive (false);
			p.locationButtonContainer.gameObject.SetActive (true);

			// setup button
			p.locationButtonLabel.text = pair.room;
			p.locationButton.onClick.AddListener (() => {
				app.closeTimetable();
				app.facilities.goToRoom(pair.room);
			});
		} else {
			p.locationText.gameObject.SetActive (true);
			p.locationButtonContainer.gameObject.SetActive (false);
		}
	}

	public void updateLayout(){
		var sumHeight = timeTitle.rectTransform.rect.size.y;
		foreach(Transform t in pairsContainer){			
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
		}

		Debug.LogWarning ("sumHeight for Time: "+sumHeight);

		//Debug.LogWarning ("component is null: "+(GetComponent ("LayoutElement")==null));
		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
