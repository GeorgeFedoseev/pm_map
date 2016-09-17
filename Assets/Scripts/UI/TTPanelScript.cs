using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;

using SPBUTimetable;

public class TTPanelScript : CenterPanelScript {
	
	public TTWeekScript currentWeek, nextWeek;

	public GameObject no_pairs_label_currentWeek, no_pairs_label_nextWeek;

	public Button editButton, doneButton, downloadButton, undoButton, updateTimetableButton;

	public Toggle switchWeekToggle;
	public GameObject loadingOverlay;

	bool loading = false;

	public bool firstLoadDone = false;

	bool _editMode = false;

	bool _currentWeek = true;

	float lastCurrentWeekScrollPos, lastNextWeekScrollPos;


	bool _subscribed_to_time_updates = false;
	void OnEnable(){
		if (app.ready) {
			Prepare ();
		}

		if (!_subscribed_to_time_updates) {
			app.OnUpdateTimeBasedElements += _time_based_update;
			_subscribed_to_time_updates = true;
		}

	}


	void _time_based_update(){
		if (app.timetableManager.hasTimetable()) {				
			updateCurrentPair();
		}	
	}

	void OnDestroy(){
		app.OnUpdateTimeBasedElements -= _time_based_update;
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
			title.text = "Расписание";
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


		
		if (syncPos/* && current != _currentWeek*/) {
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


	public void setLoading(bool _loading){
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


	public void updateTimetableClicked(){
		//Debug.LogWarning ("DOWNLOAD TIMETABLE");
		Alerts.AskYesNo("Обновление расписания", "Расписание будет загружено из Интернета, Ваши изменения будут сохранены", ()=> {
			setLoading (true);
			Loom.QueueOnMainThread(() => {
				app.timetableManager.initTimetable(true, preserveEdits:true);	
				app.timetablePanel.UpdateContents();	
			}, 0.1f);
		}, null, "ОК", "ОТМЕНА");

	}

	public void downloadTimetableClicked(){
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

	public void TopBarClicked(){
		currentWeek.scrollRect.verticalNormalizedPosition = nextWeek.scrollRect.verticalNormalizedPosition = 1;
	}


	public void EnableLayout(bool enable){
		foreach (var c in GetComponentsInChildren<LayoutElement>()) {
			c.enabled = enable;
		}

		foreach (var c in GetComponentsInChildren<VerticalLayoutGroup>()) {
			c.enabled = enable;
		}

		foreach (var c in GetComponentsInChildren<ContentSizeFitter>()) {
			c.enabled = enable;
		}
	}


	public void UpdateContents(bool editMode = false, bool only_controls = false){
		if (only_controls) {
			// controls set
			updateTimetableButton.gameObject.SetActive(!editMode);
			editButton.gameObject.SetActive (!editMode);
			doneButton.gameObject.SetActive (editMode);
			downloadButton.gameObject.SetActive (editMode);
			undoButton.gameObject.SetActive(editMode && app.timetableManager.historyHasPrevState());
			return;
		}


		//Debug.LogWarning ("Update contents of timetable");
		setLoading (true);

		lastCurrentWeekScrollPos = currentWeek.scrollRect.verticalNormalizedPosition;
		lastNextWeekScrollPos = nextWeek.scrollRect.verticalNormalizedPosition;

		Loom.QueueOnMainThread (()=>{
			currentWeek.gameObject.SetActive (true);
			nextWeek.gameObject.SetActive (true);

			currentWeek.clear ();
			nextWeek.clear ();


			// controls set
			updateTimetableButton.gameObject.SetActive(!editMode);
			editButton.gameObject.SetActive (!editMode);
			doneButton.gameObject.SetActive (editMode);
			downloadButton.gameObject.SetActive (editMode);
			undoButton.gameObject.SetActive(editMode && app.timetableManager.historyHasPrevState());


			//Debug.LogWarning("app is "+ (app==null?"NULL":"NOT NULL"));
			currentWeek._week = app.timetableManager.currentWeek;
			nextWeek._week = app.timetableManager.nextWeek;



			Loom.QueueOnMainThread (()=>{
				if(editMode){
					currentWeek.addAddPairButton();
					nextWeek.addAddPairButton();	
				}



				// DEBUG
			//	app.timetableManager.currentWeek.days = new System.Collections.Generic.List<DayTimetable>();
			//	app.timetableManager.nextWeek.days = new System.Collections.Generic.List<DayTimetable>();



				if(app.timetableManager.currentWeek.days.Count > 0){
					no_pairs_label_currentWeek.SetActive(false);
					foreach(var d in app.timetableManager.currentWeek.days){
						currentWeek.addDay (d, editMode);
					}	
				}else{
					// show "no pairs" label
					no_pairs_label_currentWeek.SetActive(true);
				}

				if(app.timetableManager.nextWeek.days.Count > 0){
					no_pairs_label_nextWeek.SetActive(false);
					foreach(var d in app.timetableManager.nextWeek.days){
						nextWeek.addDay (d, editMode);
					}
				}else{
					// show "no pairs" label
					no_pairs_label_nextWeek.SetActive(true);
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
		EnableLayout (true);
		//currentWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		//currentWeek.GetComponent<LayoutElement> ().preferredHeight = GetComponent<RectTransform> ().rect.height;

		//nextWeek.GetComponent<LayoutElement> ().preferredWidth = GetComponent<RectTransform> ().rect.width;
		//nextWeek.GetComponent<LayoutElement> ().preferredHeight = GetComponent<RectTransform> ().rect.height;

		Loom.QueueOnMainThread (()=>{
			currentWeek.UpdateLayout (editMode);
			nextWeek.UpdateLayout (editMode);

			Loom.QueueOnMainThread (()=>{
				EnableLayout(false);

				setLoading(false);


				switchWeek (_currentWeek, firstLoadDone && !editMode);


				// SCROLL TO CURRENT DAY
				if(!firstLoadDone && !editMode){
					firstLoadDone = true;

					Debug.LogWarning("Scroll to current week day");
					// scroll to current day
					var fullWeekHeight = currentWeek.daysContainer.GetComponent<RectTransform>().rect.size.y;
					float currentDayPos = 0;


					foreach(Transform d_t in currentWeek.daysContainer){
						var d = d_t.GetComponent<TTDayScript>();
						if(d != null && d._day.day == DateTime.Today){
							//Debug.LogWarning("DAY POS: "+(-d_t.GetComponent<RectTransform>().anchoredPosition.y));
							//Debug.LogWarning("DAY HEIGHT: "+d_t.GetComponent<RectTransform>().rect.size.y);
							currentDayPos = -d_t.GetComponent<RectTransform>().anchoredPosition.y - d_t.GetComponent<RectTransform>().rect.size.y/2 - 8f;
							//currentDayPos += currentWeek.daysContainer.GetComponent<RectTransform>().rect.size.y * currentDayPos/fullWeekHeight    /  2;
						}
					}

					//Loom.QueueOnMainThread(()=>{
					var rect = currentWeek.daysContainer.GetComponent<RectTransform>();
					var a_pos = rect.anchoredPosition;
					a_pos.y = currentDayPos;
					rect.anchoredPosition = a_pos;
						//Debug.LogWarning("ANCHORED POS: "+currentWeek.scrollRect.verticalNormalizedPosition);
					//}, 0.2f);
				}

				updateCurrentPair ();
			}, 0.1f);
		}, 0.1f);


	}

	/*
		float normalizePosition = scrollTransform.anchorMin.y - obj.anchoredPosition.y;
		normalizePosition += (float)obj.transform.GetSiblingIndex() / (float)scroll.content.transform.childCount;
		normalizePosition /= 1000f;
		normalizePosition = Mathf.Clamp01(1 - normalizePosition);
		scroll.verticalNormalizedPosition = normalizePosition;
*/

	/*void Update(){
		Debug.LogWarning("SCROLL POS: "+currentWeek.scrollRect.verticalNormalizedPosition);
	}*/


	protected override void OnRectTransformDimensionsChange(){
		if(firstLoadDone)
			UpdateLayout ();
	}

	


}
