﻿using UnityEngine;
using System.Collections;

using TMPro;

public class RoomScript : FacilityScript {
	public string room;
	[TextArea()]
	public string description;
	[TextArea()]
	public string info;
	[TextArea()]
	public string people;
	[TextArea()]
	public string aliases;

	public bool auditory = false;


	private TextMeshPro roomNumber;

	void Awake(){
		_name = room;
		_description = description;
		_info = info;
		_people = people;
		_room = room;
		_aliases = aliases;


		if (_icon == "") {
			if (auditory) {
				_icon = "auditory";
			} else {
				_icon = "room";
			}
		}


		if (_description == "") {
			if (auditory) {
				_description = "Аудитория";
			} else {
				_description = "Кабинет";
			}
		}
			

		// add room number
		roomNumber = (Instantiate(Resources.Load("Prefabs/room_number")) as GameObject).GetComponent<TextMeshPro>();
		roomNumber.transform.SetParent (transform);
		roomNumber.transform.position = getCenter () + (getHeight()/2 + 0.1f)*Vector3.up ;
		roomNumber.transform.localScale = new Vector3 (-0.2f, 0.2f, 0.2f);
		roomNumber.transform.rotation = Quaternion.Euler(new Vector3 (-90, 180, 0));

		roomNumber.text = room;


	}

	void LateUpdate(){		
		var vp_p = Camera.main.WorldToViewportPoint (getCenter());
		if (vp_p.x > 0 && vp_p.x < 1 && vp_p.y > 0 && vp_p.y < 1 && vp_p.z > 0) {
			RaycastHit hit;
			var rayDirection = roomNumber.transform.position - Camera.main.transform.position;
			if (Physics.Raycast (Camera.main.transform.position, rayDirection, out hit)) {
				if (hit.transform == transform) {
					roomNumber.gameObject.SetActive (true);
				} else {
					roomNumber.gameObject.SetActive (false);
				}
			}
		}else{
			roomNumber.gameObject.SetActive (false);
		}

	}




}
