using UnityEngine;
using System.Collections;

public class RoomScript : FacilityScript {
	public string room;
	[TextArea()]
	public string description;
	[TextArea()]
	public string aliases;

	void Awake(){
		_name = room;
		_description = description;
		_room = room;
		_aliases = aliases;

	}


}
