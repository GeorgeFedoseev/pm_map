using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEditor.Callbacks;

public class KeyboardBuildPostProcessor
{
	[PostProcessBuild]
	public static void OnPostProcessBuild(BuildTarget target, string pathToBuiltProject)
	{
		Debug.Log ("OnPostProcessBuild");
		if(target == BuildTarget.iOS)
		{
			string seed = "textField.clearButtonMode = UITextFieldViewModeWhileEditing;";
			string add = "textField.autocapitalizationType = UITextAutocapitalizationTypeNone;";



			Debug.Log (target.ToString());
			Debug.Log (pathToBuiltProject);
			Debug.Log ("Removing autouppercase on keyboard");
			string targetfile = pathToBuiltProject + "/Classes/UI/Keyboard.mm";
			string filecontents = System.IO.File.ReadAllText(targetfile);
			if(filecontents.Contains(seed))
			{
				Debug.Log ("Replacing");
				filecontents = filecontents.Replace(seed, seed + add);
			}
			else
			{
				Debug.Log ( "Seed not found in file: " + seed);
			}
			System.IO.File.WriteAllText(targetfile, filecontents);
		}
	}
}
