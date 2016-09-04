using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System.Collections.Generic;
using System;


using SPBUTimetable;

public class TTYearSelectSript : TTChoosePageScript {
	

	string level, program;
	List<Link> yearLinks;


	public override void Init(){
		level = ConfigStorage.getSting ("tt_study_level");
		program = ConfigStorage.getSting ("tt_study_program");

		base.Init ();
	}


	protected override void load(){		
		yearLinks = TimetableParser.getProgramYears (level, program);
		var studyYears = new List<string> ();
		foreach (var l in yearLinks) {
			studyYears.Add (l.name);
		}
		Loom.QueueOnMainThread(()=>{
			showReadyToSelect();
			selectionBox.listItems = studyYears.ToArray ();
			selectionBox.Setup ();
			selectionBox.ItemPicked += OnSelect;
		});
	}

	protected override void OnSelect (int id){		
		Loom.QueueOnMainThread (() => {
			ConfigStorage.set ("tt_study_year", selectionBox.listItems [id]);
			ConfigStorage.set ("tt_study_year_link", yearLinks [id].url);
			base.OnSelect (id);
		}, 0.6f);
	}
}
