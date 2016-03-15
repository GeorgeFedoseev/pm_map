using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SuggestionRowScript : MonoBehaviour {

	public Image icon;
	public Text name, desc;
	[HideInInspector]
	public Button button;

	void Awake(){
		button = GetComponent<Button> ();
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
