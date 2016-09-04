using UnityEngine;
using System.Collections;

public class FacilityScript : MonoBehaviour {

	AppScript app;

	[HideInInspector]
	public string _name;
	[HideInInspector]
	public string _description;
	[HideInInspector]
	public string _info;
	[HideInInspector]
	public string _people;
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
			app.cam.canMove = false;
			Loom.QueueOnMainThread (()=>{
				app.cam.canMove = true;
			}, 0.2f);

		}
			
	}

	public void highlight(){
		var materials = GetComponent<MeshRenderer> ().materials;
		materials[materials.GetLength(0)-1].color = new Color(226f/255, 68f/255, 31f/255);
	}

	public void dehighlight(){
		var materials = GetComponent<MeshRenderer> ().materials;
		materials[materials.GetLength(0)-1].color = new Color(204f/255f, 204f/255f, 204f/255f);
	}


	public Vector3 getCenter(){
		if (_name == "Столовая") { // dirty fix, for 3d arrow ;)
			return transform.GetComponent<Renderer>().bounds.center + Vector3.right*6f;
		}
		return transform.GetComponent<Renderer>().bounds.center;
	}

	public float getHeight(){
		return transform.GetComponent<Renderer>().bounds.size.y;
	}

	public int getFloor(){
		return GetGameObjectFloor (gameObject);
	}

	public float getSize(){
		return transform.GetComponent<Renderer> ().bounds.size.magnitude;
	}

	public static int GetGameObjectFloor(GameObject go){
		int floor;
		if (int.TryParse (LayerMask.LayerToName (go.layer).Substring (0, 1), out floor)) {
			return floor;
		} else {
			return 1;
		}
	}
}
