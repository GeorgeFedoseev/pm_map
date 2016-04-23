using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class TTWeekScript : MonoBehaviour {

	public WeekTimetable _week;
	public Transform daysContainer;
	public ScrollRect scrollRect;

	void Awake(){
		scrollRect = GetComponent<ScrollRect> ();
		clear ();
	}

	public void clear(){
		foreach(Transform t in daysContainer){
			Destroy (t.gameObject);
		}
	}

	public void addDay(DayTimetable day, bool editMode = false){
		var d = (Instantiate (Resources.Load("Prefabs/UI/schedule/Day")) as GameObject).GetComponent<TTDayScript>();		
		d._day = day;
		d.transform.SetParent (daysContainer, false);
		d.transform.localScale = Vector3.one;
		d.transform.localScale = Vector3.one;
		d.transform.localRotation = Quaternion.identity;

		d.dayTitle.text = day.getTranslatedDay();
		d.date.text = day.day.ToString ("d MMM", System.Globalization.CultureInfo.GetCultureInfo("ru-RU"));

		var shadow = Instantiate (Resources.Load("Prefabs/UI/schedule/UnderShadow")) as GameObject;		
		shadow.transform.SetParent (daysContainer);
		shadow.transform.localScale = Vector3.one;


		var timePairDict = new Dictionary<string, List<Pair>> ();
		foreach (var p in day.pairs) {
			if (!timePairDict.ContainsKey (p.time)) {
				timePairDict [p.time] = new List<Pair> ();
			}
			timePairDict [p.time].Add (p);
		}

		var i = 0;
		foreach (var t in timePairDict) {
			var lastTime = i==timePairDict.Count-1;
			d.addTime (t.Key, t.Value, lastTime, editMode);
			i++;
		}
	}

	public void addAddPairButton(){
		var add_pair_button = (Instantiate (Resources.Load("Prefabs/UI/schedule/Add_pair")) as GameObject).GetComponent<TTAddPairButtonScript>();		
		add_pair_button.transform.SetParent (daysContainer);
		add_pair_button.transform.localScale = Vector3.one;
		add_pair_button.week = _week;
	}

	public void UpdateLayout(bool editMode = false){

		foreach (var t in daysContainer.GetComponentsInChildren<TTDayScript>()) {
			t.UpdateLayout ();
		}

		var sumHeight = 0f;
		foreach(Transform t in daysContainer){			
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
			var day = t.GetComponent<TTDayScript> ();
		}
//		Debug.LogWarning ("sumHeight for Week : "+sumHeight);

		//GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
