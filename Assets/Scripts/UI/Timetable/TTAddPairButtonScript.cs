using UnityEngine;
using System.Collections;

public class TTAddPairButtonScript : MonoBehaviour {

	public WeekTimetable week;

	public void addPair(){
		var app = AppScript.getSharedInstance ();
		if (week == null) {
			Debug.LogError ("WEEK IS NULL!!");
		}
		app.timetablePanel.addPairClicked (week);
	}
}
