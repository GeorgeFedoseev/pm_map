using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SearchResults3d : MonoBehaviour {


	List<FacilityScript> searchResults = new List<FacilityScript> ();
	List<ArrowPointerScript> arrowPointers = new List<ArrowPointerScript>();

	Dictionary<FacilityScript, ArrowPointerScript> dict = new Dictionary<FacilityScript, ArrowPointerScript>();

	AppScript app;

	FacilityScript _selectedFacility;

	//object dictLockObj = new object();

	// Use this for initialization
	void Start () {
		app = AppScript.getSharedInstance ();

		app.OnFloorSwitch += (floor) => {
			if(searchResults.Count > 0){
				//Loom.QueueOnMainThread(() => {
					UpdateArrows();	

				if(_selectedFacility)
					SelectFacilityArrow(_selectedFacility);
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
		_selectedFacility = f;
		//lock (dictLockObj) {
			Debug.LogWarning ("Select facility arrow");
			DeselectAll ();
			if (dict.ContainsKey (f)) {
				dict [f].SetActive ();
			} else {
				Debug.LogWarning ("Not found facility in dict");
			}
		//}
	}

	void UpdateArrows(){
		ClearAllArrows ();

		//lock (dictLockObj) {
			dict.Clear ();
		//}

		//Loom.QueueOnMainThread (() => {
			foreach (var f in searchResults) {
				//lock(dictLockObj){
					if(dict.ContainsKey(f))
						continue;	
				//}

				// check facility is visible
				//var vp_p = Camera.main.WorldToViewportPoint (f.getCenter());
				//	if (vp_p.x > 0 && vp_p.x < 1 && vp_p.y > 0 && vp_p.y < 1 && vp_p.z > 0) {
				RaycastHit hit;

				// show arrow only if facility visible from top (apropriate floor selected)
				var rayDirection = Vector3.down;
				int buildingLayer = 1 << 9 | 1 << 10 | 1 << 11 | 1 << 12 | 1 << 13 | 1 << 14;
				if (Physics.SphereCast (f.getCenter() + Vector3.up * 100f, 0.1f, rayDirection, out hit, Mathf.Infinity, buildingLayer)) {

					bool _showArrow = true;

					if(hit.transform != f.transform){
					//	Debug.LogWarning("MET other transform "+hit.transform.name+ " on layer "+LayerMask.LayerToName(hit.transform.gameObject.layer));
						//if(hit.transform.gameObject.activeInHierarchy && app.currentFloor != f.getFloor()){
							_showArrow = false;
							//Debug.LogWarning("DONT SHOW "+f._name);
					//	}else{
							
						//}
					}

					if (_showArrow) {
						//Debug.LogWarning("SPAWN ARROW for "+f._name);
						// show arrow
						var arrow = app.pool.spawn<ArrowPointerScript> ("ArrowPointer");
						arrow.SetDefault();
						var scaleMltplr = 0.05f * f.getSize ();
						if (scaleMltplr < 0.3f)
							scaleMltplr = 0.3f;
						arrow.transform.localScale = scaleMltplr*Vector3.one;


						arrow.bounceAmount = 0;
						var targetPosition = f.getCenter()+Vector3.up*f.getHeight()/2 + Vector3.up * 0.2f;
						arrowPointers.Add (arrow);


					iTween.Stop (arrow.gameObject);
					arrow.transform.position = targetPosition + Vector3.up * 2000f;
					Loom.QueueOnMainThread (() => {
						arrow.transform.position = targetPosition + Vector3.up * 20f;
						iTween.MoveTo (arrow.gameObject, iTween.Hash (
							"position", targetPosition,
							"islocal", false,
							"time", 0.5f,
							"easeType", iTween.EaseType.easeOutBounce
						));
					}, 0.5f);
						

						Loom.QueueOnMainThread (() => {
							arrow.bounceAmount = 1f;
							arrow.bounceTime = 0.5f;
						}, Random.Range(0.1f, 0.7f));

						//lock(dictLockObj){
							dict.Add (f, arrow);
						//}
					}
				}

			}
		//}, 0.7f);

	}


	
	// Update is called once per frame
	void Update () {
	
	}
}
