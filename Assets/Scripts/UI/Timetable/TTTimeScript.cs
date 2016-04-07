using UnityEngine;
using System.Collections;
using UnityEngine.UI;


public class TTTimeScript : MonoBehaviour {

	public Text timeTitle;
	public Transform pairsContainer;

	void Awake(){
		clear ();
	}

	private void clear(){
		foreach(Transform t in pairsContainer){
			Destroy (t.gameObject);
		}
	}

	public void addPair(Pair pair, bool lastPair = false){
		var p = (Instantiate (Resources.Load("Prefabs/UI/schedule/Pair")) as GameObject).GetComponent<TTPairScript>();		
		p.transform.SetParent (pairsContainer);
		p.transform.localScale = Vector3.one;

		p.pairTitle.text = pair.name;
		p.locationText.text = pair.room;

		if (lastPair)
			p.divider.SetActive (false);
	}

	public void updateLayout(){
		var sumHeight = timeTitle.rectTransform.rect.size.y;
		foreach(Transform t in pairsContainer){			
			sumHeight += t.GetComponent<LayoutElement> ().preferredHeight;
		}

		Debug.LogWarning ("sumHeight for Time: "+sumHeight);

		//Debug.LogWarning ("component is null: "+(GetComponent ("LayoutElement")==null));
		GetComponent<LayoutElement> ().preferredHeight = sumHeight;
	}
}
