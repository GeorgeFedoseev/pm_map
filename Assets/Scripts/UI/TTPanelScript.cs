using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TTPanelScript : CenterPanelScript {

	public TTWeekScript currentWeek, nextWeek;



	void Start(){		
		currentWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		//nextWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;

		// pairs testing
		foreach(var d in app.timetableManager.currentWeek.days){
			//Debug.LogWarning (d.day.DayOfWeek.ToString());
			currentWeek.addDay (d);
		}


		Loom.QueueOnMainThread (()=>{
			currentWeek.updateLayout ();	
		}, 1.5f);


		/*foreach(var d in app.timetableManager.nextWeek.days){
			nextWeek.addDay (d);
		}

		nextWeek.updateLayout ();*/

	}

}
