using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ImageBlinkScript : MonoBehaviour {

	public float time = 1f;

	Color color;
	Image image;

	// Use this for initialization
	void OnEnable () {
		image = GetComponent<Image> ();
		color = image.color;
		iTween.Stop (gameObject);
		iTween.ValueTo (gameObject, iTween.Hash(
			"from", 0,
			"to", 1,
			"onupdate", "alphaUpdate",
			"looptype", "pingPong",
			"time", time
		));
	}

	void OnDisable(){
		iTween.Stop (gameObject);
	}

	void alphaUpdate(float a){
		color.a = a;
		image.color = color;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
