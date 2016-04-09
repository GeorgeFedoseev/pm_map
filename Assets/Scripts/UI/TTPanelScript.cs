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

	bool _editMode = false;

	bool _currentWeek = true;

	float lastCurrentWeekScrollPos, lastNextWeekScrollPos;

	public void Prepare(){
		if (!firstLoadDone) {
			UpdateContents ();
		}
			
	}


	public void switchWeek(bool current, bool syncPos = true){		
		if (loading)
			return;


		
		if (syncPos && current != _currentWeek) {
			if (current) {
				currentWeek.scrollRect.verticalNormalizedPosition = nextWeek.scrollRect.verticalNormalizedPosition;
			} else {
				nextWeek.scrollRect.verticalNormalizedPosition = currentWeek.scrollRect.verticalNormalizedPosition;
			}
		} else {
			currentWeek.scrollRect.verticalNormalizedPosition = lastCurrentWeekScrollPos;
			nextWeek.scrollRect.verticalNormalizedPosition = lastNextWeekScrollPos;
		}


		currentWeek.gameObject.SetActive (current);
		nextWeek.gameObject.SetActive (!current);

		_currentWeek = current;
	}

	public void switchValueChanged(bool notCurrent){
		switchWeek (!notCurrent);
	}

	public void switchToMode(bool editMode){
		if (loading)
			return;

	

		_editMode = editMode;

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
		//Debug.LogWarning ("DOWNLOAD TIMETABLE");
		Alerts.AskYesNo("Загрузка расписания", "Текущее расписание сотрется и будет загружено новое с сайта.", ()=>{
			app.closeTimetable ();
			app.openTimtableTour ();
		}, null, "ОК", "ОТМЕНА");

	}

	public void UpdateContents(bool editMode = false){
		setLoading (true);

		lastCurrentWeekScrollPos = currentWeek.scrollRect.verticalNormalizedPosition;
		lastNextWeekScrollPos = nextWeek.scrollRect.verticalNormalizedPosition;

		Loom.QueueOnMainThread (()=>{
			currentWeek.gameObject.SetActive (true);
			nextWeek.gameObject.SetActive (true);

			currentWeek.clear ();
			nextWeek.clear ();


			editButton.gameObject.SetActive (!editMode);
			doneButton.gameObject.SetActive (editMode);
			downloadButton.gameObject.SetActive (editMode);


			Loom.QueueOnMainThread (()=>{
				foreach(var d in app.timetableManager.currentWeek.days){
					currentWeek.addDay (d, editMode);
				}

				foreach(var d in app.timetableManager.nextWeek.days){
					nextWeek.addDay (d, editMode);
				}


				UpdateLayout (editMode);

			});
		});

	}


	void UpdateLayout(bool editMode = false){
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
			currentWeek.UpdateLayout (editMode);
			nextWeek.UpdateLayout (editMode);

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


				switchWeek (_currentWeek, firstLoadDone);
				

				firstLoadDone = true;
			}, 0.5f);
		}, 0.5f);


	}


	protected override void OnRectTransformDimensionsChange(){
		if(firstLoadDone)
			UpdateLayout ();
	}


}
