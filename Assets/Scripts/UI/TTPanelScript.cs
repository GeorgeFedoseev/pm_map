using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TTPanelScript : CenterPanelScript {

	public TTWeekScript currentWeek, nextWeek;

	void Start(){		
		UpdateContents ();
		switchWeek (true, false);
	}


	public void switchWeek(bool current, bool syncPos = true){		
		if (syncPos) {
			if (current) {
				currentWeek.scrollRect.verticalNormalizedPosition = nextWeek.scrollRect.verticalNormalizedPosition;
			} else {
				nextWeek.scrollRect.verticalNormalizedPosition = currentWeek.scrollRect.verticalNormalizedPosition;
			}
		}

		currentWeek.gameObject.SetActive (current);
		nextWeek.gameObject.SetActive (!current);
	}

	public void switchValueChanged(bool notCurrent){
		switchWeek (!notCurrent);
	}

	void UpdateContents(bool editMode = false){
		currentWeek.clear ();
		nextWeek.clear ();


		foreach(var d in app.timetableManager.currentWeek.days){
			currentWeek.addDay (d);
		}

		foreach(var d in app.timetableManager.nextWeek.days){
			nextWeek.addDay (d);
		}


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

		nextWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		nextWeek.GetComponent<LayoutElement> ().preferredHeight = GetComponent<RectTransform> ().rect.height;

		Loom.QueueOnMainThread (()=>{
			currentWeek.updateLayout ();
			nextWeek.updateLayout ();

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
			}, 0.5f);
		}, 0.5f);


	}


}
