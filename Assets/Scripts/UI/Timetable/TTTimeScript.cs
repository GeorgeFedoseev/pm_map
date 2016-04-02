using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class TTTimeScript : MonoBehaviour {

	public Text time;
	public Transform pairsContainer;

	void Awake(){
		clear ();
	}

	private void clear(){
		foreach(Transform t in pairsContainer){
			Destroy (t.gameObject);
		}
	}

	public void addPair(Pair pair){
		var p = (Instantiate (Resources.Load("Prefabs/UI/schedule/pair_row")) as GameObject).GetComponent<TTPairScript>();		
		p.transform.SetParent (pairsContainer);
		p.transform.localScale = Vector3.one;

		p.name.text = pair.name;
		p.location.text = "["+pair.room+"]";
		p.room = pair.room;
	}

	public void updateLayout(){
//		foreach (var t in pairsContainer.GetComponentsInChildren<TTPairScript>()) {
//			t.updateLayout ();
//		}

		time.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, 0);
		pairsContainer.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, -30);

		time.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, 0);

		var sd = pairsContainer.GetComponent<RectTransform> ().sizeDelta;
		sd.x = 0;
		pairsContainer.GetComponent<RectTransform> ().sizeDelta = sd;

		var sd2 = GetComponent<RectTransform> ().sizeDelta;
		sd2.x = 0;
		GetComponent<RectTransform> ().sizeDelta = sd2;

		var sumHeight = 0f;
		foreach(Transform t in pairsContainer){
			t.GetComponent<RectTransform> ().anchoredPosition = new Vector2 (0, -sumHeight+50);
			sumHeight += t.GetComponent<RectTransform> ().rect.height;
		}

		GetComponent<RectTransform> ().SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, sumHeight);
		//GetComponent<RectTransform> ().SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, Screen.width);


	}
}
