using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEditor.Callbacks;

public class KeyboardBuildPostProcessor_ios_done
{
	[PostProcessBuild]
	public static void OnPostProcessBuild(BuildTarget target, string pathToBuiltProject)
	{
		Debug.Log ("OnPostProcessBuild");
		if(target == BuildTarget.iOS)
		{
			//string seed = "textField.clearButtonMode = UITextFieldViewModeWhileEditing;";
			//string add = "textField.autocapitalizationType = UITextAutocapitalizationTypeNone;";
			string seed = "textField.returnKeyType = _inputHidden ? UIReturnKeyDone : UIReturnKeyDefault;";
			string replaceWith = "textField.returnKeyType = UIReturnKeyDone;";



			Debug.Log (target.ToString());
			Debug.Log (pathToBuiltProject);
		
			string targetfile = pathToBuiltProject + "/Classes/UI/Keyboard.mm";
			string filecontents = System.IO.File.ReadAllText(targetfile);
			if(filecontents.Contains(seed))
			{
				Debug.Log ("Replacing");
				filecontents = filecontents.Replace(seed, replaceWith);
			}
			else
			{
				Debug.Log ( "Seed not found in file: " + seed);
			}
			System.IO.File.WriteAllText(targetfile, filecontents);
		}
	}
}
