using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class CenterPanelPageScript : MonoBehaviour {	
	public CenterPanelScript centerPanel;

	Vector2 oldSize;
	LayoutElement layoutElem;

	AppScript app;

	void Awake(){
		app = AppScript.getSharedInstance ();
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
		centerPanel = GameObject.FindObjectOfType<CenterPanelScript> ();
		UpdateLayout();
	}

	public void UpdateLayout(){	
		//Debug.LogWarning ("Size: "+size);
	//	Debug.LogWarning ("UPDATE ROW LO Size Delta: "+sizeDelta);\

		if (layoutElem != null) {
			layoutElem.preferredWidth = app.scaleFactorRefCanvas.GetComponent<RectTransform>().rect.width;
		}


		//oldSize = centerPanel.rect.rect.size;
		//rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);

		//Debug.LogWarning ("Size: "+size);
	}
}
