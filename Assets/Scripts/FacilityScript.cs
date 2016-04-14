using UnityEngine;
using System.Collections;

public class FacilityScript : MonoBehaviour {

	AppScript app;

	[HideInInspector]
	public string _name;
	[HideInInspector]
	public string _description;
	[HideInInspector]
	public string _aliases;
	[HideInInspector]
	public string _room;

	public string _icon;

	// Use this for initialization
	void Start () {
		app = AppScript.getSharedInstance ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseUp(){
		//Debug.LogWarning ("On mouse Up");
		if (!app.cam.overUI && !app.cam.controlsInUse) {			
			app.facilities.focusFacility (this, false, true);

		}
			
	}

	public void highlight(){
		GetComponent<MeshRenderer> ().material.color = new Color(226f/255, 68f/255, 31f/255);
	}

	public void dehighlight(){
		GetComponent<MeshRenderer> ().material.color = new Color(204f/255f, 204f/255f, 204f/255f);
	}


	public Vector3 getCenter(){
		return transform.GetComponent<Renderer>().bounds.center;
	}

	public int getFloor(){
		int floor;
		if (int.TryParse (LayerMask.LayerToName (gameObject.layer).Substring (0, 1), out floor)) {
			return floor;
		} else {
			return 1;
		}
	}

	public float getSize(){
		return transform.GetComponent<Renderer> ().bounds.size.magnitude;
	}
}
