using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TTPanelScript : CenterPanelScript {

	public TTWeekScript currentWeek, nextWeek;



	void Start(){		
		UpdateContents ();




	}

	void UpdateContents(){
		currentWeek.clear ();
		// pairs testing
		foreach(var d in app.timetableManager.currentWeek.days){
			//Debug.LogWarning (d.day.DayOfWeek.ToString());
			currentWeek.addDay (d);
		}




		/*foreach(var d in app.timetableManager.nextWeek.days){
			nextWeek.addDay (d);
		}
		*/

		UpdateLayout ();
	}


	void UpdateLayout(){
		foreach (var c in GetComponentsInChildren<LayoutElement>()) {
			c.enabled = true;
		}

		foreach (var c in GetComponentsInChildren<VerticalLayoutGroup>()) {
			c.enabled = true;
		}

		foreach (var c in GetComponentsInChildren<ContentSizeFitter>()) {
			c.enabled = true;
		}

		currentWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		currentWeek.GetComponent<LayoutElement> ().preferredHeight = GetComponent<RectTransform> ().rect.height;
		//nextWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;

		Loom.QueueOnMainThread (()=>{
			currentWeek.updateLayout ();
			//nextWeek.updateLayout ();

			Loom.QueueOnMainThread (()=>{
				foreach (var c in GetComponentsInChildren<LayoutElement>()) {
					c.enabled = false;
				}

				foreach (var c in GetComponentsInChildren<VerticalLayoutGroup>()) {
					c.enabled = false;
				}

				foreach (var c in GetComponentsInChildren<ContentSizeFitter>()) {
					c.enabled = false;
				}
			}, 1f);
		}, 1.5f);


	}


}
