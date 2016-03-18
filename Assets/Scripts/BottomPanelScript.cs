using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BottomPanelScript : MonoBehaviour {

	AppScript app;
	[HideInInspector]
	public RectTransform rect;


	// set in inspector
	public ScrollRect scrollRect;
	public RectTransform rowsContainer;
	public Text title;
	public Text pageCounter;



	float maxWidth = 400f;
	bool dragging = false;
	Vector2 targetSnapPosition;

	void Awake(){
		app = AppScript.getSharedInstance ();
		rect = GetComponent<RectTransform> ();
		scrollRect.onValueChanged.AddListener (OnScroll);
	}

	// Use this for initialization
	void Start () {
		
	}

	void OnEnable(){
		UpdateSnapping ();
		OnScroll (Vector2.zero);
	}

	// Update is called once per frame
	void Update () {
		
	}

	void OnScroll(Vector2 scrollPos){
		//Debug.LogWarning ("Scroll: "+scrollPos.x);
		int closest_row = (int)Mathf.Floor((float)rowsContainer.childCount * scrollRect.horizontalNormalizedPosition);
		if (closest_row >= rowsContainer.childCount)
			closest_row = rowsContainer.childCount - 1;
		else if (closest_row < 0)
			closest_row = 0;

		pageCounter.text = (closest_row + 1) + " из " + rowsContainer.childCount;
	}

	void OnRectTransformDimensionsChange(){
		if(rect!=null)
			UpdateLayout();
	}


	public void setTitle(string _title){
		title.text = _title;
	}


	void UpdateSnapping(){
		var snapper = scrollRect.GetComponent<ScrollRectSnap> ();
		snapper.screens = rowsContainer.childCount;
		snapper.initSnapper ();
	}


	void UpdateLayout(){
		Debug.LogWarning ("UPDATE BOTTOM PANEL LO");
		var sizeDelta = rect.sizeDelta;
		var size = rect.rect.size;
		var canvasSize = app.canvas.GetComponent<RectTransform> ().rect.size;
		Debug.LogWarning ("Size: "+size);
		Debug.LogWarning ("Size Delta: "+sizeDelta);

		if (canvasSize.x > 500f) {			
			rect.sizeDelta = new Vector2 (500f - canvasSize.x, rect.sizeDelta.y);
			Debug.LogWarning ("Size Delta: "+rect.sizeDelta);
		} else if(size.x < canvasSize.x) {
			rect.sizeDelta = new Vector2 (20f, rect.sizeDelta.y);
		}

		rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);
		//Debug.LogWarning ("Size: "+size);
	}
}
