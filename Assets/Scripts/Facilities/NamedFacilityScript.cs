using UnityEngine;
using System.Collections;

public class NamedFacilityScript : FacilityScript {
	public string name;
	[TextArea()]
	public string description;
	[TextArea()]
	public string aliases;

	void Awake(){
		_name = name;
		_description = description;
		_room = null;
		_aliases = aliases;
	}

}
