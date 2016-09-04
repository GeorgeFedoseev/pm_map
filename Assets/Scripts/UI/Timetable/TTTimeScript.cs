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


		// actions
		if (!editMode && hasThisRoom ) {
			p.locationText.gameObject.SetActive (false);
			p.locationButtonContainer.gameObject.SetActive (true);

			// setup button
			p.locationButtonLabel.text = pair.room;
			p.locationButton.onClick.AddListener (() => {
				app.closeTimetable();
				app.facilities.goToRoom(pair.room);
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

				p.deleteButton.onClick.AddListener (()=>{		
					Alerts.AskYesNo("Удаление пары", "Вы уверены, что хотите удалить пару?", ()=>{		
						app.timetablePanel.setLoading(true);
						Loom.QueueOnMainThread(() => {							
							app.timetableManager.setPairDeleted(pair);
							app.timetablePanel.UpdateContents(true);
						}, 0.1f);
					}, null, "УДАЛИТЬ", "ОТМЕНА", true);
				});


			} else {
				p.locationButtonContainer.gameObject.SetActive (false);
			}

		}
	}

	public void UpdateLayout(){
		var sumHeight = timeTitle.GetComponent<RectTransform>().rect.size.y;
		foreach(Transform t in pairsContainer){			
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
		}

//		Debug.LogWarning ("sumHeight for Time: "+sumHeight);

		//Debug.LogWarning ("component is null: "+(GetComponent ("LayoutElement")==null));
		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
