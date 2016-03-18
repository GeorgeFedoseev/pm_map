using UnityEngine;
using System.Collections;

public class BottomPanelRowScript : MonoBehaviour {


	RectTransform rect;
	BottomPanelScript bottomPanel;

	void Awake(){		
		rect = GetComponent<RectTransform> ();
		bottomPanel = GameObject.FindObjectOfType<BottomPanelScript> ();
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnRectTransformDimensionsChange(){
		if(rect!=null)
			UpdateLayout();
	}

	void UpdateLayout(){
		var sizeDelta = rect.sizeDelta;
		var size = rect.rect.size;
		//Debug.LogWarning ("Size: "+size);
		Debug.LogWarning ("Size Delta: "+sizeDelta);

		//rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);

		//Debug.LogWarning ("Size: "+size);
	}
}
