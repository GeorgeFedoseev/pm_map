using UnityEngine;
using System.Collections;



public class ArrowPointerScript : MonoBehaviour {
	
	public float rotationSpeed;



	bool needsUpdate = true;

	float _bounceTime = 1f;

	public float bounceTime {
		get { 
			return _bounceTime;
		}

		set { 
			_bounceTime = value;
			needsUpdate = true;
		}
	}

	float _bounceAmount = 1f;
	public float bounceAmount {
		get {
			return _bounceAmount;
		}

		set { 
			_bounceAmount = value;
			needsUpdate = true;
		}
	}



	GameObject bouncingPart;

	void Awake () {
		bouncingPart = transform.GetChild (0).gameObject;
	}


	public void SetDefault(){
		GetComponentInChildren<MeshRenderer> ().material.color = new Color (34f/255f, 158f/255f, 0f/255f);
	}

	public void SetActive(){
		GetComponentInChildren<MeshRenderer> ().material.color = new Color (51f/255f, 255f/255f, 0f/255f);
	}

	
	// Update is called once per frame
	void Update () {
		transform.Rotate (0, rotationSpeed*Time.deltaTime, 0);

		if (needsUpdate) {
			iTween.StopByName (bouncingPart, "bounce");
			bouncingPart.transform.localPosition = Vector3.zero;

			if (bounceAmount > 0) {
				iTween.MoveBy (bouncingPart, iTween.Hash(
					"y", _bounceAmount,
					"time", _bounceTime,
					"islocal", true,
					"loopType", "pingPong",
					"easeType", iTween.EaseType.linear,
					"name", "bounce"
				));
			}


			needsUpdate = false;
		}
	}
}
