using UnityEngine;
using System.Collections;
using UnityEditor;
using UnityEditor.Callbacks;
using System.Collections.Generic;
using PlistCS;

public class AddURLSchemeIOS  {
	
	[PostProcessBuild]
	public static void OnPostProcessBuild(BuildTarget buildTarget, string pathToBuiltProject) {


		if (buildTarget == BuildTarget.iOS) {
			Debug.Log ("Add URL SCHEME TO IOS");

			// Get plist
			string plistPath = pathToBuiltProject + "/Info.plist";

			// read plist
			Dictionary<string, object> dict;
			dict = (Dictionary<string, object>)Plist.readPlist(plistPath);

			// update plist
			dict["CFBundleURLTypes"] = new List<object> {
				new Dictionary<string,object> {
					{ "CFBundleURLName", "com.george.pmmap.url_scheme" },
					{ "CFBundleURLSchemes", new List<object> { "pmmap" } }
				}
			};

			// write plist
			Plist.writeXml(dict, plistPath);
		}

	}
}
