using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System;

public class TTProgramSelectSript : TTChoosePageScript {

	string level;


	public override void Init(){
		level = ConfigStorage.getSting ("tt_study_level");
		base.Init ();
	}

	protected override void load(){		
		var studyLevels = TimetableParser.getLevelPrograms (level);
		Loom.QueueOnMainThread(()=>{
			showReadyToSelect();
			selectionBox.listItems = studyLevels.ToArray ();
			selectionBox.Setup ();
			selectionBox.ItemPicked += OnSelect;
		});
	}

	protected override void OnSelect (int id){
		Loom.QueueOnMainThread (() => {
			ConfigStorage.set ("tt_study_program", selectionBox.listItems [id]);
			base.OnSelect (id);
		}, 0.6f);
	}
}
