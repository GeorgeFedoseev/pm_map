using UnityEngine;
using System.Collections;
using UnityEngine.UI;

using MaterialUI;
using System.Collections.Generic;
using System;

public class TTGroupSelectSript : TTChoosePageScript {
	List<Link> groupLinks;
	string year_link;



	public override void Init(){
		year_link = ConfigStorage.getSting ("tt_study_year_link");
		base.Init ();
	}

	protected override void load(){		
		groupLinks = TimetableParser.getGroups (year_link);
		var groups = new List<string> ();
		foreach (var l in groupLinks) {
			groups.Add (l.name);
		}

		Loom.QueueOnMainThread(()=>{
			showReadyToSelect();
			selectionBox.listItems = groups.ToArray ();
			selectionBox.Setup ();
			selectionBox.ItemPicked += OnSelect;
		});
	}

	protected override void OnSelect (int id){		
		Loom.QueueOnMainThread (() => {
			ConfigStorage.set ("tt_study_group", selectionBox.listItems [id]);
			ConfigStorage.set ("tt_study_group_link", groupLinks [id].url);
			try {
				var timetable_link = TimetableParser.getPrimaryTimetableLink (groupLinks [id].url);
				ConfigStorage.set ("tt_study_timetable_link", timetable_link);
				canGoNext ();	
			} catch (Exception e) {			
				selectionBox.ItemPicked = null;
			}

			base.OnSelect (id);
		}, 0.6f);
	}
}
