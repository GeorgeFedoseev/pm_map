using UnityEngine;
using System.Collections;
using MaterialUI;
using UnityEngine.UI;
using System;

public class TTChoosePageScript : MonoBehaviour {

	public SelectionBoxConfig selectionBox;
	public Text loadingText;
	public Button nextButton;


	bool chosen = false;

	// Use this for initialization
	void Start () {
		
	}

	// Update is called once per frame
	void Update () {

	}

	public virtual void Init(){
		
		showLoading ();	
		Loom.RunAsync (()=>{
			try{
				load();	
			}catch(Exception e){
				showError("Ошибка загрузки");
			}
		});

	}

	protected void showLoading(){
		selectionBox.transform.parent.gameObject.SetActive (false);
		loadingText.gameObject.SetActive (true);

		Loom.QueueOnMainThread (()=>{
			nextButton.interactable = false;	
		});
	}

	protected void showError(string msg){
		Loom.QueueOnMainThread (()=>{
			selectionBox.gameObject.SetActive (false);
			loadingText.text = msg;
			loadingText.color = Color.red;	
		});
	}

	protected void showReadyToSelect(){
		selectionBox.transform.parent.gameObject.SetActive (true);
		loadingText.gameObject.SetActive (false);
		nextButton.interactable = false;
		
	}

	protected void canGoNext(){
		nextButton.interactable = true;
	}

	protected virtual void load(){	

	}

	protected virtual void OnSelect (int id){
		Debug.Log ("'" + selectionBox.listItems[id] + "' picked, ID: " + id);
		chosen = true;
		canGoNext ();
	}
}
