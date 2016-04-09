using UnityEngine;
using System.Collections;
using UnityEngine.Events;

public class Alerts : MonoBehaviour {

	private static Alerts current;

	// inspector
	public GameObject overlay;

	public YesNoDialogScript yesNoDialog;

	void Awake(){
		current = this;
		hideAll ();
	}

	public static void hideAll(){
		current.overlay.SetActive (false);

		current.yesNoDialog.gameObject.SetActive (false);
	}

	public static void AskYesNo(string title, string text, UnityAction yesAction, UnityAction noAction = null, string yesTitle = "ДА", string noTitle = "НЕТ"){
		hideAll ();
		current.overlay.SetActive (true);

		current.yesNoDialog.title.text = title;
		current.yesNoDialog.text.text = text;
		current.yesNoDialog.yesTitle.text = yesTitle;
		current.yesNoDialog.noTitle.text = noTitle;

		current.yesNoDialog.gameObject.SetActive (true);
	}


	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
