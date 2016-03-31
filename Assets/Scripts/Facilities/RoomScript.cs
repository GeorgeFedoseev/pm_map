using UnityEngine;
using System.Collections;

public class RoomScript : FacilityScript {
	public string room;
	[TextArea()]
	public string description;
	[TextArea()]
	public string aliases;


	private TextMesh roomNumber;

	void Awake(){
		_name = room;
		_description = description;
		_room = room;
		_aliases = aliases;

		if(_description == "")
			_description = "Кабинет";

		// add room number
		roomNumber = (Instantiate(Resources.Load("Prefabs/room_number")) as GameObject).GetComponent<TextMesh>();
		roomNumber.transform.SetParent (transform);
		roomNumber.transform.position = getCenter () + 2*Vector3.up;
		roomNumber.transform.localScale = new Vector3 (-0.2f, 0.2f, 0.2f);
		roomNumber.transform.localRotation = Quaternion.Euler(new Vector3 (-90, 0, 0));

		roomNumber.text = room;

	}

	void LateUpdate(){
		
	}




}
