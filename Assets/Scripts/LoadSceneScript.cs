using UnityEngine;
using System.Collections;
using UnityEngine.UI;


using TMPro;

public class LoadSceneScript : MonoBehaviour {

	public Image image;

	public TextMeshProUGUI percents, version;

	private AsyncOperation async = null; // When assigned, load is in progress.


	void Start(){
		Debug.Log ("start level loading");
		Loom.QueueOnMainThread (() => {
			SyncLoadLevel ("mainScene_winter");
		}, 0f);

		image.fillAmount = 0;

		version.text = "v"+Application.version;

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
