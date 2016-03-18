using UnityEngine;
using UnityEditor;
[CustomEditor(typeof(MonoBehaviour))]
public class TestEditorScript : Editor {



	void OnSceneGUI() {
		

		Event e = Event.current;

		/*UnityEditor.Handles.color = Color.cyan;
		Vector3 leftPosition = new Vector3 (-3, 1, 1);
		Vector3 rightPosition = new Vector3 (3, 1, 1);
		UnityEditor.Handles.Label (leftPosition, "Left");
		UnityEditor.Handles.Label (rightPosition, "Right");*/


		Handles.color = Color.blue;

		Handles.BeginGUI(); 
		GUILayout.BeginArea(new Rect(Screen.width - 100, Screen.height - 80, 90,50));

		if (GUILayout.Button ("Say Hello!")) {
			Debug.LogWarning ("HEllo!");
		}

		GUILayout.EndArea();
		Handles.EndGUI();



		if (e.isMouse){
			//Debug.LogWarning ("Mouse");
			if (e.clickCount > 1 && e.alt) {

				Ray ray = HandleUtility.GUIPointToWorldRay (Event.current.mousePosition);
				//Ray ray = HandleUtility.GUIPointToWorldRay( ??? );

				// Object = layer 9
				int layerMask = 1 << 9;

				// Snap to the object
				RaycastHit hit;
				if (Physics.Raycast (ray.origin, ray.direction, out hit, Mathf.Infinity/*, layerMask*/))
				{
					Quaternion q = Quaternion.FromToRotation( Vector3.up, hit.normal );
					var cube = GameObject.CreatePrimitive (PrimitiveType.Cube);
					cube.transform.position = hit.point;
					cube.transform.rotation = q;
					Undo.RegisterCreatedObjectUndo (cube, "Create object");
					pb_Editor_Utility.ShowNotification("Spawn Cube");
				}

			}

		}


		if (GUI.changed)
			EditorUtility.SetDirty(target);
	}
}