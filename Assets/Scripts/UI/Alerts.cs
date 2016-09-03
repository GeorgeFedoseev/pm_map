using UnityEngine;
using System.Collections;
using UnityEngine.Events;
using System;

using MaterialUI;
using UnityEngine.UI;

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

	public static void AskYesNo(string title, string text, UnityAction yesAction, UnityAction noAction = null, string yesTitle = "ДА", string noTitle = "НЕТ", bool redYes = false){
		hideAll ();
		current.overlay.SetActive (true);

		current.yesNoDialog.title.text = title;
		current.yesNoDialog.text.text = text;
		current.yesNoDialog.yesTitle.text = yesTitle;
		current.yesNoDialog.noTitle.text = noTitle;

		current.yesNoDialog.gameObject.SetActive (true);

		current.yesNoDialog.yesButton.onClick.RemoveAllListeners();
		current.yesNoDialog.noButton.onClick.RemoveAllListeners();

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


		Loom.QueueOnMainThread (()=>{
			current.yesNoDialog.yesButton.GetComponent<Image> ().color = redYes ? new Color (255f/255f, 32f/255f, 0f/255f) : new Color (225f/255f, 225f/255f, 225f/255f);
			current.yesNoDialog.yesTitle.color = redYes ? Color.white : new Color (32f/255f, 32f/255f, 32f/255f);	
		});




	}


	public static void editPair(string title, Pair pair, Action<Pair, Pair> yesAction, string okButtonTitle = "СОХРАНИТЬ", string cancelButtonTitle = "ОТМЕНА"){
		hideAll ();

		current.overlay.gameObject.SetActive (true);
		current.editPairDialog.gameObject.SetActive (true);

		current.editPairDialog.wrongInput.text = "заполните все поля со *";


		current.editPairDialog.selectedDayOfWeek = pair.day.DayOfWeek;

		//current.editPairDialog.selectionBox.Setup ();
		//current.editPairDialog.selectionBox.ContractList ();
		Loom.QueueOnMainThread(()=>{
			current.editPairDialog.selectionBox.Select((int)pair.day.DayOfWeek - 1);	
		}, 0.1f);




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

			current.editPairDialog.okButtonTitle.text = okButtonTitle;
			current.editPairDialog.cancelButtonTitle.text = cancelButtonTitle;
		});

		current.editPairDialog.okButton.onClick.RemoveAllListeners ();
		current.editPairDialog.cancelButton.onClick.RemoveAllListeners ();

		current.editPairDialog.cancelButton.onClick.AddListener (()=>{hideAll();});

		current.editPairDialog.okButton.onClick.AddListener (()=>{
			// first validate
			current.editPairDialog.wrongInput.text = "";

			if(current.editPairDialog.name.text.Length < 3){
				current.editPairDialog.wrongInput.text = "плохое нзвание пары";
				return;
			}

			var provider = System.Globalization.CultureInfo.GetCultureInfo("ru-RU");
			var dateTimeStyle = System.Globalization.DateTimeStyles.AssumeLocal;
			DateTime tryParseDateTimeResult;

			if(!DateTime.TryParseExact(current.editPairDialog.startTime.text, "HH:mm", provider, dateTimeStyle, out tryParseDateTimeResult)){
				current.editPairDialog.wrongInput.text = "неверный формат начального времени, пример: 09:30";
				return;
			}

			if(!DateTime.TryParseExact(current.editPairDialog.endTime.text, "HH:mm", provider, dateTimeStyle, out tryParseDateTimeResult)){
				current.editPairDialog.wrongInput.text = "неверный формат конечного времени, пример: 09:30";
				return;
			}

			if(current.editPairDialog.location.text.Length == 0){
				current.editPairDialog.wrongInput.text = "введите место или кабинет";
				return;
			}

			var weekStartDay = pair.day.AddDays(-(int)(pair.day.DayOfWeek-1)).Date;



			var newPair = new Pair(
				weekStartDay.AddDays ((int)current.editPairDialog.selectedDayOfWeek - 1).Date,
				current.editPairDialog.name.text,
				current.editPairDialog.startTime.text + "–" + current.editPairDialog.endTime.text,
				current.editPairDialog.location.text,
				current.editPairDialog.lecturer.text,
				_edited:true,
				_deleted:false,
				_initial_hash:pair.initial_hash
			);


			// location
			var app = AppScript.getSharedInstance();
			if(newPair.room == "" || newPair.room == null){
				if(app.facilities.hasRoom(newPair.location.Trim())){
					newPair.room = newPair.location.Trim();	
					//Debug.LogWarning("ROOM "+newPair.room+" EXISTS");
				}
			}

			yesAction(pair, newPair);

			hideAll();
		});		
	}

	public static void addPair(string title, WeekTimetable week, Action<Pair> yesAction, string okButtonTitle = "ДОБАВИТЬ", string cancelButtonTitle = "ОТМЕНА"){
		hideAll ();

		current.overlay.gameObject.SetActive (true);
		current.editPairDialog.gameObject.SetActive (true);

		current.editPairDialog.wrongInput.text = "заполните все поля со *";


		current.editPairDialog.selectedDayOfWeek = DayOfWeek.Sunday;
		current.editPairDialog.selectionBox.Setup ();


		Loom.QueueOnMainThread (()=>{
			current.editPairDialog.title.text = title;

			current.editPairDialog.startTime.text = "";
			current.editPairDialog.startTime.GetComponent<InputFieldConfig>().Refresh();


			current.editPairDialog.endTime.text = "";
			current.editPairDialog.endTime.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.name.text = "";
			current.editPairDialog.name.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.location.text = "";
			current.editPairDialog.location.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.lecturer.text = "";
			current.editPairDialog.lecturer.GetComponent<InputFieldConfig>().Refresh();

			current.editPairDialog.okButtonTitle.text = okButtonTitle;
			current.editPairDialog.cancelButtonTitle.text = cancelButtonTitle;
		});

		current.editPairDialog.okButton.onClick.RemoveAllListeners ();
		current.editPairDialog.cancelButton.onClick.RemoveAllListeners ();

		current.editPairDialog.cancelButton.onClick.AddListener (()=>{hideAll();});

		current.editPairDialog.okButton.onClick.AddListener (()=>{
			// first validate
			current.editPairDialog.wrongInput.text = "";

			if(current.editPairDialog.selectedDayOfWeek == DayOfWeek.Sunday){
				current.editPairDialog.wrongInput.text = "выберите день недели";
				return;
			}


			var provider = System.Globalization.CultureInfo.GetCultureInfo("ru-RU");
			var dateTimeStyle = System.Globalization.DateTimeStyles.AssumeLocal;
			DateTime tryParseDateTimeResult;

			if(!DateTime.TryParseExact(current.editPairDialog.startTime.text, "HH:mm", provider, dateTimeStyle, out tryParseDateTimeResult)){
				current.editPairDialog.wrongInput.text = "неверный формат начального времени, пример: 09:30";
				return;
			}

			if(!DateTime.TryParseExact(current.editPairDialog.endTime.text, "HH:mm", provider, dateTimeStyle, out tryParseDateTimeResult)){
				current.editPairDialog.wrongInput.text = "неверный формат конечного времени, пример: 09:30";
				return;
			}

			if(current.editPairDialog.name.text.Length < 3){
				current.editPairDialog.wrongInput.text = "плохое нзвание пары";
				return;
			}

			if(current.editPairDialog.location.text.Length == 0){
				current.editPairDialog.wrongInput.text = "введите место или кабинет";
				return;
			}

			Debug.LogWarning("week̉̉ "+week+"  is nulL: "+(week == null?"YES":"NO"));
			Debug.LogWarning("weekStartDay "+week.weekStartDay+"  is nulL: "+(week.weekStartDay == null?"YES":"NO"));
			Debug.LogWarning("selected day "+current.editPairDialog.selectedDayOfWeek+" is nulL: "+(current.editPairDialog.selectedDayOfWeek == null?"YES":"NO"));


			var name_t = current.editPairDialog.name.text.Trim();
			var time_t = current.editPairDialog.startTime.text + "–" + current.editPairDialog.endTime.text.Trim();
			var location_t = current.editPairDialog.location.text.Trim();
			var lecturer_t = current.editPairDialog.lecturer.text.Trim();
			var newPair = new Pair(
				week.weekStartDay.AddDays ((int)current.editPairDialog.selectedDayOfWeek - 1).Date, // day
				name_t,
				time_t,
				location_t,
				lecturer_t,
				true,
				false,
				TimetableParser.CalculateMD5Hash((week.weekType == WeekType.Odd?"1":"0")+name_t+time_t+location_t+lecturer_t)
			);

			// location
			var app = AppScript.getSharedInstance();
			if(newPair.room == "" || newPair.room == null){
				if(app.facilities.hasRoom(newPair.location.Trim())){
					newPair.room = newPair.location.Trim();	
				}else{
					Debug.LogWarning("BBB");
				}
			}else{
				Debug.LogWarning("AAA");
			}

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
