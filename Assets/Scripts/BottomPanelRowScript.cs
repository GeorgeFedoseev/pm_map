using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BottomPanelRowScript : MonoBehaviour {


	RectTransform rect;
	BottomPanelScript bottomPanel;

	void Awake(){		
		rect = GetComponent<RectTransform> ();

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
		//Debug.LogWarning ("Size: "+size);
	//	Debug.LogWarning ("UPDATE ROW LO Size Delta: "+sizeDelta);
		GetComponent<LayoutElement> ().preferredWidth = bottomPanel.rect.rect.size.x;

		//rect.anchoredPosition = new Vector2(0, rect.anchoredPosition.y);

		//Debug.LogWarning ("Size: "+size);
	}
}
