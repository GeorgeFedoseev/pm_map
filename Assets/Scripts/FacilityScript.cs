using UnityEngine;
using System.Collections;

public class FacilityScript : MonoBehaviour {

	[HideInInspector]
	public string _name;
	[HideInInspector]
	public string _description;
	[HideInInspector]
	public string _aliases;
	[HideInInspector]
	public string _room;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public Vector3 getCenter(){
		return transform.GetComponent<Renderer>().bounds.center;
	}
}
