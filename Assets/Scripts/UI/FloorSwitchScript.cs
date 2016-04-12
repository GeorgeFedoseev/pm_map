using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class FloorSwitchScript : MonoBehaviour {

	AppScript app;

	float imageAlpha = 50f;
	float textAlpha = 180f;


	void Awake(){
		app = AppScript.getSharedInstance ();
	}


	public void switchToFloor(int floor){

		for(int i = 1; i <= 4; i++){
			if (i == floor) {
				setButtonActive (i);
			} else {
				setButtonDefault (i);
			}
		}

		app.switchToFloor (floor);

	}

	private void setButtonActive(int i){
		getImage (i).color = new Color (219f / 255f, 56f / 255f, 18f / 255f,imageAlpha+10f / 255f);
		getText(i).color = new Color (255f / 255f, 255f / 255f, 255f / 255f, textAlpha+10f / 255f);
	}

	private void setButtonDefault(int i){
		getImage (i).color = new Color (255f / 255f, 255f / 255f, 255f / 255f, imageAlpha / 255f);
		//getText(i).color = new Color (0f / 255f, 0f / 255f, 0f / 255f, 21f / 255f);
		getText(i).color = new Color (255f / 255f, 255f / 255f, 255f / 255f, textAlpha / 255f);
	}

	private Button getButton(int i){
		return transform.GetChild (i-1).GetComponent<Button>();
	}

	private Image getImage(int i){
		return transform.GetChild (i-1).GetComponent<Image>();
	}

	private Text getText(int i){
		return transform.GetChild (i-1).GetComponentInChildren<Text>();
	}
}
