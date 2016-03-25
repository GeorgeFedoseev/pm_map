using UnityEngine;
using System.Collections;

public class ConfigStorage {

	public static void set(string key, int value){
		PlayerPrefs.SetInt (key, value);
		PlayerPrefs.Save ();
	}

	public static void set(string key, float value){
		PlayerPrefs.SetFloat (key, value);
		PlayerPrefs.Save ();
	}

	public static void set(string key, string value){
		PlayerPrefs.SetString (key, value);
		PlayerPrefs.Save ();
	}

	public static void set(string key, bool value){
		PlayerPrefs.SetInt (key, value?1:0);
		PlayerPrefs.Save ();
	}

	public static bool getBool(string key){
		return (PlayerPrefs.GetInt (key) != 0)?true:false;
	}

	public static int getInt(string key){
		return PlayerPrefs.GetInt (key);
	}

	public static float getFloat(string key){
		return PlayerPrefs.GetFloat (key);
	}

	public static string getSting(string key){
		return PlayerPrefs.GetString (key);
	}


	public static bool hasKey(string key){
		return PlayerPrefs.HasKey (key);
	}

}
