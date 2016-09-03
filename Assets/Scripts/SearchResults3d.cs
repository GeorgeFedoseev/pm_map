using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SearchResults3d : MonoBehaviour {


	List<FacilityScript> searchResults = new List<FacilityScript> ();
	List<ArrowPointerScript> arrowPointers = new List<ArrowPointerScript>();

	Dictionary<FacilityScript, ArrowPointerScript> dict = new Dictionary<FacilityScript, ArrowPointerScript>();

	AppScript app;

	// Use this for initialization
	void Start () {
		app = AppScript.getSharedInstance ();

		app.OnFloorSwitch += (floor) => {
			if(searchResults.Count > 0){
				//Loom.QueueOnMainThread(() => {
					UpdateArrows();	
				//}, 0.2f);

			}
		};

		app.OnSearchResultSelect += (f) => {
			SelectFacilityArrow(f);
		};

		app.bottomPanel.OnSnapToFacility += (f) => {
			SelectFacilityArrow(f);
		};
	}


	public void SetSearchResults(List<FacilityScript> _searchResults){
		searchResults = _searchResults;
		UpdateArrows ();
	}

	public void Clear(){
		ClearAllArrows ();
		searchResults.Clear ();
	}


	void ClearAllArrows(){
		foreach(var a in arrowPointers){
			app.pool.deactivate (a.gameObject);	
		}
	}

	public void DeselectAll(){
		foreach (var a in arrowPointers) {
			a.SetDefault ();
		}	
	}

	public void SelectFacilityArrow(FacilityScript f){
		DeselectAll ();
		if (dict.ContainsKey (f)) {
			dict [f].SetActive ();
		} else {
			Debug.LogError ("Not found facility in dict");
		}

	}

	void UpdateArrows(){
		ClearAllArrows ();
		dict.Clear ();

		Loom.QueueOnMainThread (() => {
			foreach (var f in searchResults) {
				// check facility is visible
				//var vp_p = Camera.main.WorldToViewportPoint (f.getCenter());
				//	if (vp_p.x > 0 && vp_p.x < 1 && vp_p.y > 0 && vp_p.y < 1 && vp_p.z > 0) {
				RaycastHit hit;

				// show arrow only if facility visible from top (apropriate floor selected)
				var rayDirection = Vector3.down;
				int buildingLayer = 1 << 9 | 1 << 10 | 1 << 11 | 1 << 12 | 1 << 13 | 1 << 14;
				if (Physics.Raycast (f.getCenter() + Vector3.up * 100f, rayDirection, out hit, Mathf.Infinity, buildingLayer)) {
					if (hit.transform == f.transform) {
						// show arrow
						var arrow = app.pool.spawn<ArrowPointerScript> ("ArrowPointer");
						arrow.SetDefault();
						var scaleMltplr = 0.05f * f.getSize ();
						if (scaleMltplr < 0.3f)
							scaleMltplr = 0.3f;
						arrow.transform.localScale = scaleMltplr*Vector3.one;


						arrow.bounceAmount = 0;
						var targetPosition = hit.point + Vector3.up * 0.2f;
						arrowPointers.Add (arrow);
						arrow.transform.position = targetPosition + Vector3.up * 10f;
						iTween.MoveTo (arrow.gameObject, iTween.Hash (
							"position", targetPosition,
							"islocal", false,
							"time", 0.5f,
							"easeType", iTween.EaseType.easeOutBounce
						));


						Loom.QueueOnMainThread (() => {
							arrow.bounceAmount = 1f;
							arrow.bounceTime = 0.5f;
						}, Random.Range(0, 2f));

						dict.Add (f, arrow);
					}
				}

			}
		}, 0.5f);

	}


	
	// Update is called once per frame
	void Update () {
	
	}
}
