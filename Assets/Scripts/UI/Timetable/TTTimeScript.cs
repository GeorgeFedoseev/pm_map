using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using TMPro;
using SPBUTimetable;

public class TTTimeScript : MonoBehaviour {
	AppScript app;

	public TextMeshProUGUI timeTitle;
	public Transform pairsContainer;

	void Awake(){
		app = AppScript.getSharedInstance ();
		clear ();
	}

	private void clear(){
		foreach(Transform t in pairsContainer){
			Destroy (t.gameObject);
		}
	}

	public void addPair(Pair pair, bool lastPair = false, bool editMode = false){
		var p = (Instantiate (Resources.Load("Prefabs/UI/schedule/Pair"+(editMode?"_editable":""))) as GameObject).GetComponent<TTPairScript>();		
		p._pair = pair;

		p.transform.SetParent (pairsContainer, false);
		p.transform.localScale = Vector3.one;
		p.transform.localScale = Vector3.one;
		p.transform.localRotation = Quaternion.identity;

		p.pairTitle.text = pair.name;
		p.lecturerName.text = pair.lecturer;

		var hasThisRoom = app.facilities.hasRoom (pair.room);


		p.locationText.text = hasThisRoom?pair.room:pair.location;

		if (lastPair)
			p.divider.SetActive (false);

		if (!editMode) {
			if (pair.now ()) {
				p.nowCircle.SetActive (true);
			} else {
				p.nowCircle.SetActive (false);			
			}
		}



		//static bool _first_room_jump = true;
		// actions
		if (!editMode && hasThisRoom ) {
			p.locationText.gameObject.SetActive (false);
			p.locationButtonContainer.gameObject.SetActive (true);

			// setup button
			p.locationButtonLabel.text = pair.room;
			p.locationButton.onClick.AddListener (() => {
				app.closeTimetable();
				/*if(_first_room_jump){*/
					Loom.QueueOnMainThread(() => {
						app.facilities.goToRoom(pair.room);
					});	
				/*}else{
					
				}*/


			});
		} else {
			p.locationText.gameObject.SetActive (true);
			p.locationText.text = hasThisRoom?pair.room:pair.location;

			if (editMode) {
				p.editButton.onClick.AddListener (()=>{
					Alerts.editPair("Редактировать пару", pair,
						(Pair oldPair, Pair newPair) => {
							Debug.LogWarning("UPDATE PAIR");
							Loom.QueueOnMainThread(()=>{
								app.timetableManager.updatePair(oldPair, newPair);
								Loom.QueueOnMainThread(()=>{
									app.timetablePanel.UpdateContents(true);
								});
							});



					});
				});


				var _pair_el = p;
				p.deleteButton.onClick.AddListener (()=>{		
					Alerts.AskYesNo("Удаление пары", "Вы уверены, что хотите удалить пару?", ()=>{		
						//app.timetablePanel.setLoading(true);

						Loom.QueueOnMainThread(() => {
							var start1 = Time.realtimeSinceStartup;
							app.timetableManager.setPairDeleted(pair);
							Debug.Log("db actions time: "+(Time.realtimeSinceStartup-start1));

							//var start2 = Time.realtimeSinceStartup;
							app.timetablePanel.UpdateContents(true, true);
							//Debug.Log("ui actions time: "+(Time.realtimeSinceStartup-start1));

							DeletePairFromTime(_pair_el);
							//var week = _pair_el.GetComponentInParent<TTWeekScript>();
							//week.ReloadDay(_pair_el.GetComponentInParent<TTDayScript>(), true);
						}, 0.2f);
					}, null, "УДАЛИТЬ", "ОТМЕНА", true);
				});


			} else {
				p.locationButtonContainer.gameObject.SetActive (false);
			}

		}
	}

	void DeletePairFromTime(TTPairScript p){
		app.timetablePanel.EnableLayout (true);
		Loom.QueueOnMainThread (() => {
			// delete pair element
			var container = p.transform.parent;
			var time_el = container.GetComponentInParent<TTTimeScript> ();
			var times_container = time_el.transform.parent;

			// if no pairs left for this time, than delete time element
			if (container.childCount == 1) {
				container.GetComponentInParent<TTTimeScript> ().gameObject.SetActive(false);

				Loom.QueueOnMainThread (() => {
					if(time_el != null)
						Destroy (time_el.gameObject);	
				});

				// check if times left for this day

				if (times_container.childCount == 1) {
					// delete day
					var day_el = times_container.GetComponentInParent<TTDayScript>();
					Destroy (day_el.gameObject);
				}

			} else {
				p.gameObject.SetActive(false);
				Loom.QueueOnMainThread (() => {
					Destroy (p.gameObject);	
				});

			}
			container.GetComponentInParent<TTDayScript> ().UpdateLayout();

			Loom.QueueOnMainThread(() => {
				app.timetablePanel.EnableLayout (false);
			});
		});




	}

	public void UpdateLayout(){
		var sumHeight = timeTitle.GetComponent<RectTransform>().rect.size.y;
		foreach(Transform t in pairsContainer){	
			if (t.gameObject.activeInHierarchy) {
				sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
			}

		}

//		Debug.LogWarning ("sumHeight for Time: "+sumHeight);

		//Debug.LogWarning ("component is null: "+(GetComponent ("LayoutElement")==null));
		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
