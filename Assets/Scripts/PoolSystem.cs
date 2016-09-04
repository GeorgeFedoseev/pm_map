using UnityEngine;
using System.Collections.Generic;

public class PoolSystem : MonoBehaviour {

	Dictionary<string, Dictionary<bool, List<GameObject>>> pool; // true - free, false - busy

	public PoolSystem(){
		pool = new Dictionary<string, Dictionary<bool, List<GameObject>>> (); 
	}

	object lockObj = new object();


	public T spawn<T>(string name){
		return spawn(name).GetComponent<T>();
	}

	public GameObject spawn(string name){
		if (!pool.ContainsKey (name)) {
			addKey (name);
		}

		// some comment

		
		return activateAny (name);
	}


	public void deactivate(GameObject go){

		lock (lockObj) {
			var name = go.name;
			name = name.Replace ("(Clone)", "").Trim ();

			//Debug.LogWarning ("NAME: "+name+" HAS: "+(pool.ContainsKey(name)?"TRUE":"FALSE"));
			if (!pool.ContainsKey (name)) {
				addKey (name);
			}
 

			putGameObjectToContainer (go);
			go.SetActive (false);


			pool [name] [false].Remove (go);
			if (!pool [name] [true].Contains (go)) {
				pool [name] [true].Add (go);
			}

		}
	}


	void addKey(string name){
		//Debug.LogWarning ("ADD: " + name);
		pool [name] = new Dictionary<bool, List<GameObject>> ();
			pool [name] [true] = new List<GameObject> ();
			pool [name] [false] = new List<GameObject> ();
	}


	GameObject activateAny (string name){
		lock (lockObj) {
			if (!hasFreeObjects (name)) {
				// instantiate 
				var new_go = InstantiatePrefab(name);
				pool [name] [false].Add (new_go);
				return new_go;
			}

			var go = pool [name] [true] [0];
			pool [name] [true].Remove (go);
			pool [name] [false].Add (go);
			go.SetActive (true);	

			Debug.Log ("Spawned "+name+" left: "+pool [name] [true].Count);
			return go;
		}
	}

	bool hasFreeObjects(string name){
		lock (lockObj) {
			return pool [name] [true].Count > 0;
		}
	}



	GameObject InstantiatePrefab(string name){
		var go = Instantiate (Resources.Load ("Prefabs/Poolable/" + name)) as GameObject;
		go.name = name;
		putGameObjectToContainer (go);
		return go;
	}

	void putGameObjectToContainer(GameObject go){
		go.transform.SetParent (transform);
	}

}
