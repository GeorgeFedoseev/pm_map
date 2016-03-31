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

	public void highlight(){
		GetComponent<MeshRenderer> ().material.color = new Color(1f, 0.5f, 0.5f);
	}

	public void dehighlight(){
		GetComponent<MeshRenderer> ().material.color = new Color(1, 1, 1);
	}


	public Vector3 getCenter(){
		//return transform.GetComponent<Renderer>().bounds.center;
		return transform.position;
	}

	public float getSize(){
		return transform.GetComponent<Renderer> ().bounds.size.magnitude;
	}
}
