using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using System;

using MaterialUI;

public class Alerts : MonoBehaviour {

	private static Alerts current;

	// inspector
	public GameObject overlay;

	public YesNoDialogScript yesNoDialog;
	public EditPairDialogScript editPairDialog;

	void Awake(){
		current = this;
		hideAll ();
	}


	public static void hideAll(){
		current.overlay.SetActive (false);

		current.yesNoDialog.gameObject.SetActive (false);
		current.editPairDialog.gameObject.SetActive (false);
	}

	public static void AskYesNo(string title, string text, UnityAction yesAction, UnityAction noAction = null, string yesTitle = "ДА", string noTitle = "НЕТ"){
		hideAll ();
		current.overlay.SetActive (true);

		current.yesNoDialog.title.text = title;
		current.yesNoDialog.text.text = text;
		current.yesNoDialog.yesTitle.text = yesTitle;
		current.yesNoDialog.noTitle.text = noTitle;

		current.yesNoDialog.gameObject.SetActive (true);

		current.yesNoDialog.yesButton.onClick.AddListener (yesAction);
		current.yesNoDialog.yesButton.onClick.AddListener (() => {
			hideAll ();
		});

		if (noAction != null) {
			current.yesNoDialog.noButton.onClick.AddListener (noAction);	
		}
		current.yesNoDialog.noButton.onClick.AddListener (() => {
			hideAll ();
		});

	}


	public static void editPair(string title, Pair pair, Action<Pair> yesAction){
		hideAll ();

		current.overlay.gameObject.SetActive (true);
		current.editPairDialog.gameObject.SetActive (true);



		Loom.QueueOnMainThread (()=>{
			current.editPairDialog.title.text = title;


			current.editPairDialog.startTime.text = pair.startTime.ToString("HH:mm");
			current.editPairDialog.startTime.GetComponent<InputFieldConfig>().Refresh();


			current.editPairDialog.endTime.text = pair.endTime.ToString("HH:mm");
			current.editPairDialog.endTime.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.name.text = pair.name;
			current.editPairDialog.name.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.location.text = pair.location;
			current.editPairDialog.location.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.lecturer.text = pair.lecturer;
			current.editPairDialog.lecturer.GetComponent<InputFieldConfig>().Refresh();
		});

		current.editPairDialog.cancelButton.onClick.AddListener (()=>{hideAll();});
		current.editPairDialog.okButton.onClick.AddListener (()=>{
			var newPair = new Pair(
				pair.day,
				current.editPairDialog.name.text,
				current.editPairDialog.startTime.text + "-" + current.editPairDialog.endTime.text,
				current.editPairDialog.location.text,
				current.editPairDialog.lecturer.text
			);

			yesAction(newPair);

			hideAll();
		});

		
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
