using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
using MaterialUI;

public class EditPairDialogScript : MonoBehaviour {

	public Text title;

	public InputField startTime, endTime, name, location, lecturer;
	public Button okButton, cancelButton;
	public Text okButtonTitle, cancelButtonTitle;

	public Text wrongInput;


	public SelectionBoxConfig selectionBox;
	public DayOfWeek selectedDayOfWeek = DayOfWeek.Sunday;


	void Start(){
		selectionBox.Setup ();
		selectionBox.ItemPicked += OnSelect;
	}

	protected void OnSelect (int id){		
		if (id == 6) {
			selectedDayOfWeek = DayOfWeek.Sunday;
		} else {
			selectedDayOfWeek = (DayOfWeek)(id+1);
		}


		Debug.LogWarning ("DOF SELECTED: "+selectedDayOfWeek);
	}

}
