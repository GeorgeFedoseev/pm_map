using UnityEngine;
using System.Collections;

public class TTTourPanelScript : CenterPanelScript {

	public void openTimetable(){
		close ();
		AppScript.getSharedInstance ().openTimetable ();
	}
}
