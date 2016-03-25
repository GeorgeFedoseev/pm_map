using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System;

public class TTLevelSelectSript : TTChoosePageScript {

	protected override void load(){		
		var studyLevels = TimetableParser.getStudyLevels ();
		
		Loom.QueueOnMainThread(()=>{
			showReadyToSelect();
			selectionBox.listItems = studyLevels.ToArray ();
			selectionBox.Setup ();
			selectionBox.ItemPicked += OnSelect;
		});
	}

	protected override void OnSelect (int id){		
		ConfigStorage.set ("tt_study_level", selectionBox.listItems[id]);
		base.OnSelect (id);
	}
}
