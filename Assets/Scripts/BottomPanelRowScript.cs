using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BottomPanelRowScript : MonoBehaviour {


	RectTransform rect;
	BottomPanelScript bottomPanel;

	Vector2 oldSize;
	LayoutElement layoutElem;

	void Awake(){		
		rect = GetComponent<RectTransform> ();
		layoutElem = GetComponent<LayoutElement> ();
	}

	// Use this for initialization
	void Start () {
		bottomPanel = GameObject.FindObjectOfType<BottomPanelScript> ();
		UpdateLayout ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnRectTransformDimensionsChange(){
		if(bottomPanel!=null)
			UpdateLayout();
	}

	public void UpdateLayout(){
		var sizeDelta = rect.sizeDelta;
		var size = rect.rect.size;

		if (bottomPanel.rect.rect.size == oldSize)
			return;
		
		//Debug.LogWarning ("Size: "+size);
	//	Debug.LogWarning ("UPDATE ROW LO Size Delta: "+sizeDelta);
		layoutElem.preferredWidth = bottomPanel.rect.rect.size.x-20f;

		oldSize = bottomPanel.rect.rect.size;
		//rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);

		//Debug.LogWarning ("Size: "+size);
	}
}
