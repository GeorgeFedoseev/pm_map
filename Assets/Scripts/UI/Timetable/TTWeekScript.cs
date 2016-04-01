using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TTWeekScript : MonoBehaviour {

	public Transform daysContainer;

	void Awake(){
		clear ();
	}

	private void clear(){
		foreach(Transform t in daysContainer){
			Destroy (t.gameObject);
		}
	}

	public void addDay(DayTimetable day){
		var d = (Instantiate (Resources.Load("Prefabs/UI/schedule/day_row")) as GameObject).GetComponent<TTDayScript>();		
		d.transform.SetParent (daysContainer);
		d.transform.localScale = Vector3.one;
		d.dayTitle.text = day.getTranslatedDay();

		var timePairDict = new Dictionary<string, List<Pair>> ();
		foreach (var p in day.pairs) {
			if (!timePairDict.ContainsKey (p.time)) {
				timePairDict [p.time] = new List<Pair> ();
			}
			timePairDict [p.time].Add (p);
		}

		foreach (var t in timePairDict) {
			d.addTime (t.Key, t.Value);
		}

	}

	public void updateLayout(){


		foreach (var t in daysContainer.GetComponentsInChildren<TTDayScript>()) {
			t.updateLayout ();
		}

		var sumHeight = 0f;
		foreach(Transform t in daysContainer){
			t.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, -sumHeight);
			sumHeight += t.GetComponent<RectTransform> ().rect.height;
		}

		GetComponent<RectTransform> ().SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, sumHeight);


		//GetComponent<RectTransform> ().SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, Screen.width);


	}
}
