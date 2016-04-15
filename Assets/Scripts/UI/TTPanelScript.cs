using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TTPanelScript : CenterPanelScript {
	
	public TTWeekScript currentWeek, nextWeek;

	public Button editButton, doneButton, downloadButton, undoButton;

	public Toggle switchWeekToggle;
	public GameObject loadingOverlay;

	bool loading = false;

	bool firstLoadDone = false;

	bool _editMode = false;

	bool _currentWeek = true;

	float lastCurrentWeekScrollPos, lastNextWeekScrollPos;

	void OnEnable(){
		if (app.ready) {
			Prepare ();
		}
	}

	public void Prepare(){
		app = AppScript.getSharedInstance ();

		Debug.LogWarning ("Prepare timetable");

		if (!firstLoadDone) {
			UpdateContents ();
		} else {
			updateCurrentPair ();
		}
	}

	public override void close(){
		base.close ();

		if (_editMode) {
			Debug.LogWarning ("CLOSED IN EDIT MODE: PREPARE FOR THE NEXT OPEN");
			firstLoadDone = false;
			_editMode = false;
		}

	}


	public void updateCurrentPair(){
		foreach (var p in FindObjectsOfType<TTPairScript>()) {
			p.updateCurrentPair ();
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
		downloadButton.interactable = !_loading;
		undoButton.interactable = !_loading;
	}

	public void undoClicked(){
		app.timetableManager.undo ();
		UpdateContents (true);
	}

	public void downloadTimnetableClicked(){
		//Debug.LogWarning ("DOWNLOAD TIMETABLE");
		Alerts.AskYesNo("Загрузка расписания", "Текущее расписание будет заменено на новое, выбранное Вами. Продолжить?", ()=>{
			app.closeTimetable ();
			app.openTimetableTour ();
		}, null, "ОК", "ОТМЕНА");

	}

	public void addPairClicked(WeekTimetable week){
		if (!_editMode)
			return;
		Debug.LogWarning ("ADD PAIR");

		Alerts.addPair ("Добавить пару", week, (Pair newPair) => {
			Loom.QueueOnMainThread(()=>{
				app.timetableManager.addPair(newPair);
				Loom.QueueOnMainThread(()=>{
					app.timetablePanel.UpdateContents(true);
				});
			});
		});
	}

	public void UpdateContents(bool editMode = false){
		//Debug.LogWarning ("Update contents of timetable");
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
			undoButton.gameObject.SetActive(editMode && app.timetableManager.historyHasPrevState());


			Debug.LogWarning("app is "+ (app==null?"NULL":"NOT NULL"));
			currentWeek._week = app.timetableManager.currentWeek;
			nextWeek._week = app.timetableManager.nextWeek;



			Loom.QueueOnMainThread (()=>{
				if(editMode){
					currentWeek.addAddPairButton();
					nextWeek.addAddPairButton();	
				}


				foreach(var d in app.timetableManager.currentWeek.days){
					currentWeek.addDay (d, editMode);
				}

				foreach(var d in app.timetableManager.nextWeek.days){
					nextWeek.addDay (d, editMode);
				}

				if(editMode){
					currentWeek.addAddPairButton();
					nextWeek.addAddPairButton();	
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
				updateCurrentPair ();
			}, 0.5f);
		}, 0.5f);


	}


	protected override void OnRectTransformDimensionsChange(){
		if(firstLoadDone)
			UpdateLayout ();
	}


}
