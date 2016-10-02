using UnityEngine;
using System.Collections;
using System.IO;
using System.Runtime.InteropServices;

public class Constants {

	#if UNITY_IOS

	[DllImport ("__Internal")]
	private static extern string _GetSharedFolderPathCharArray( string groupIdentifier );

	#endif

	public static string getDBPath(string db_name, bool overwrite = true){
		var db_path = "";
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			#if UNITY_IOS
			var openPath = Application.dataPath + "/Raw/"+db_name;

			var group_container_path = _GetSharedFolderPathCharArray ("groups.pm_map_container");
			//Directory.CreateDirectory(group_container_path+"/databases")

			db_path = _GetSharedFolderPathCharArray ("group.pm_map_container")+"/"+db_name;

			Debug.Log ("db_path is: "+db_path);

			if (!File.Exists (db_path)) {
				var db_path_old = Application.persistentDataPath+"/"+db_name;
				if (File.Exists (db_path_old)) {
					File.Copy (db_path_old, db_path, true);
				} else {
					File.Copy(openPath, db_path, true);
				}
			}
			#endif
		}else if(Application.platform == RuntimePlatform.Android){
			Debug.LogError ("CHECK ANDROID DB PATHS!!!");
			var openPath = "jar:file://" + Application.dataPath + "!/assets/"+db_name;
			WWW www = new WWW(openPath);
			while(!www .isDone) {} // тут очень внимательно, используйте корутины
			db_path = Application.persistentDataPath + "/"+db_name;
			File.WriteAllBytes(db_path, www.bytes);
		}else{
			db_path = Application.dataPath + "/StreamingAssets/"+db_name;
		}

		return db_path;
	}


    

}
