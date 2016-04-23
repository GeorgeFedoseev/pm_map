using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEditor.Callbacks;

public class StatusbarBuildPostProcessor_ios
{
	[PostProcessBuild]
	public static void OnPostProcessBuild(BuildTarget target, string pathToBuiltProject)
	{
		/*Debug.Log ("OnPostProcessBuild");
		if(target == BuildTarget.iOS)
		{
			//string seed = "textField.clearButtonMode = UITextFieldViewModeWhileEditing;";
			//string add = "textField.autocapitalizationType = UITextAutocapitalizationTypeNone;";
			string seed = "return _PreferredStatusBarStyle;";
			string replaceWith = "UIView *statusBar = [[[UIApplication sharedApplication] valueForKey:@\"statusBarWindow\"] valueForKey:@\"statusBar\"];\n    \n    if ([statusBar respondsToSelector:@selector(setBackgroundColor:)]) {\n        statusBar.backgroundColor = [UIColor colorWithRed:216.0/255.0 green:60.0/255.0 blue:24.0/255.0\n                                                    alpha:1];\n    }\n\n\treturn _PreferredStatusBarStyle;";



			Debug.Log (target.ToString());
			Debug.Log (pathToBuiltProject);
		
			string targetfile = pathToBuiltProject + "/Classes/UI/UnityViewControllerBaseiOS.mm";
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
		}*/
	}
}
