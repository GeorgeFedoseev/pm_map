using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TTPanelScript : CenterPanelScript {
	
	public TTWeekScript currentWeek, nextWeek;

	public Button editButton, doneButton, downloadButton;

	public Toggle switchWeekToggle;
	public GameObject loadingOverlay;

	bool loading = false;

	bool firstLoadDone = false;

	void Start(){		
		UpdateContents ();
	}


	public void switchWeek(bool current, bool syncPos = true){		
		if (loading)
			return;
		
		if (syncPos) {
			if (current) {
				currentWeek.scrollRect.verticalNormalizedPosition = nextWeek.scrollRect.verticalNormalizedPosition;
			} else {
				nextWeek.scrollRect.verticalNormalizedPosition = currentWeek.scrollRect.verticalNormalizedPosition;
			}
		}

		currentWeek.gameObject.SetActive (current);
		nextWeek.gameObject.SetActive (!current);
	}

	public void switchValueChanged(bool notCurrent){
		switchWeek (!notCurrent);
	}

	public void switchToMode(bool editMode){
		if (loading)
			return;

		if (editMode) {
			title.text = "Расписание (ред.)";
		} else {
			title.text = "Расписание";
		}
		
		UpdateContents (editMode);		
	}


	void setLoading(bool _loading){
		loading = _loading;

		loadingOverlay.SetActive (_loading);

		switchWeekToggle.interactable = !_loading;

		editButton.interactable = !_loading;
		doneButton.interactable = !_loading;

	}

	public void downloadTimnetableClicked(){
		Debug.LogWarning ("DOWNLOAD TIMETABLE");
		app.closeTimetable ();
		app.openTimtableTour ();
	}

	void UpdateContents(bool editMode = false){
		setLoading (true);

		currentWeek.gameObject.SetActive (true);
		nextWeek.gameObject.SetActive (true);

		currentWeek.clear ();
		nextWeek.clear ();


		editButton.gameObject.SetActive (!editMode);
		doneButton.gameObject.SetActive (editMode);

		downloadButton.gameObject.SetActive (editMode);
		 


		foreach(var d in app.timetableManager.currentWeek.days){
			currentWeek.addDay (d);
		}

		foreach(var d in app.timetableManager.nextWeek.days){
			nextWeek.addDay (d);
		}


		UpdateLayout ();
		switchWeek (true, false);
	}


	void UpdateLayout(){
		foreach (var c in GetComponentsInChildren<LayoutElement>()) {
			c.enabled = true;
		}

		foreach (var c in GetComponentsInChildren<VerticalLayoutGroup>()) {
			c.enabled = true;
		}

		foreach (var c in GetComponentsInChildren<ContentSizeFitter>()) {
			c.enabled = true;
		}

		currentWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		currentWeek.GetComponent<LayoutElement> ().preferredHeight = GetComponent<RectTransform> ().rect.height;

		nextWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		nextWeek.GetComponent<LayoutElement> ().preferredHeight = GetComponent<RectTransform> ().rect.height;

		Loom.QueueOnMainThread (()=>{
			currentWeek.updateLayout ();
			nextWeek.updateLayout ();

			Loom.QueueOnMainThread (()=>{
				foreach (var c in GetComponentsInChildren<LayoutElement>()) {
					c.enabled = false;
				}

				foreach (var c in GetComponentsInChildren<VerticalLayoutGroup>()) {
					c.enabled = false;
				}

				foreach (var c in GetComponentsInChildren<ContentSizeFitter>()) {
					c.enabled = false;
				}

				setLoading(false);
				firstLoadDone = true;
			}, 0.5f);
		}, 0.5f);


	}


	protected override void OnRectTransformDimensionsChange(){
		if(firstLoadDone)
			UpdateLayout ();
	}


}
