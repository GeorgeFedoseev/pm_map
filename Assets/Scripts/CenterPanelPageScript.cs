using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CenterPanelPageScript : MonoBehaviour {
	RectTransform rect;
	public CenterPanelScript centerPanel;

	Vector2 oldSize;
	LayoutElement layoutElem;

	void Awake(){		
		rect = GetComponent<RectTransform> ();
		layoutElem = GetComponent<LayoutElement> ();
	}

	// Use this for initialization
	void Start () {
		centerPanel = GameObject.FindObjectOfType<CenterPanelScript> ();
		UpdateLayout ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnRectTransformDimensionsChange(){
		if(centerPanel!=null)
			UpdateLayout();
	}

	public void UpdateLayout(){
		var sizeDelta = rect.sizeDelta;
		var size = rect.rect.size;

		if (centerPanel.rect.rect.size == oldSize)
			return;
		
		//Debug.LogWarning ("Size: "+size);
	//	Debug.LogWarning ("UPDATE ROW LO Size Delta: "+sizeDelta);
		layoutElem.preferredWidth = centerPanel.rect.rect.size.x;

		oldSize = centerPanel.rect.rect.size;
		//rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);

		//Debug.LogWarning ("Size: "+size);
	}
}
