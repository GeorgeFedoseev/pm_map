using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LoadSceneScript : MonoBehaviour {

	public Image image;

	public Text percents;
	
	private AsyncOperation async = null; // When assigned, load is in progress.


	void Start(){
		Debug.Log ("start level loading");
		Loom.QueueOnMainThread (() => {
			SyncLoadLevel ("mainScene");
		}, 5f);

		image.fillAmount = 0;

	}
	
	private void SyncLoadLevel(string levelName) {
		async = Application.LoadLevelAsync (levelName);
		Load ();
	}
	
	IEnumerator Load ()
	{
		yield return async;
	}
	
	void OnGUI() {
		if (async != null) {
			percents.text = (Mathf.RoundToInt(async.progress*100)).ToString()+"%";
			image.fillAmount = async.progress;
		}
			
	}

}
