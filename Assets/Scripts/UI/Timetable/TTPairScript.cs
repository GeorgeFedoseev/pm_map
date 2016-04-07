using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TTPairScript : MonoBehaviour {

	public Text name, location;
	public string room;

	public void goToRoom(){
		var app = AppScript.getSharedInstance ();
		app.facilities.goToRoom (room);
		app.closeTimetable ();
	}
}
