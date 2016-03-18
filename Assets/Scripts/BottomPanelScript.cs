using UnityEngine;
using System.Collections;

public class BottomPanelScript : MonoBehaviour {

	AppScript app;
	RectTransform rect;

	float maxWidth = 400f;

	void Awake(){
		app = AppScript.getSharedInstance ();
		rect = GetComponent<RectTransform> ();
	}

	// Use this for initialization
	void Start () {
		
	}

	void OnEnable(){
		
	}

	void OnRectTransformDimensionsChange(){
		//UpdateLayout();
	}
	
	// Update is called once per frame
	void Update () {
		UpdateLayout ();
	}

	void UpdateLayout(){
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

		rect.anchoredPosition = Vector2.zero;

		//Debug.LogWarning ("Size: "+size);
	}
}
