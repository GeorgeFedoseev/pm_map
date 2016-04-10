using UnityEngine;
using System.Collections;
using System.IO;

public class Constants {

	public static string getDBPath(string db_name, bool overwrite = true){
		var db_path = "";
		if (Application.platform == RuntimePlatform.IPhonePlayer) {
			var openPath = Application.dataPath + "/Raw/"+db_name;
			db_path = Application.persistentDataPath+"/"+db_name;
			File.Copy(openPath, db_path, overwrite);
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
