using UnityEngine;
using System.Collections;
using System.Net;

public static class Utils {

	public static bool CheckForInternetConnection(){
		try
		{
			using (var client = new WebClient())
			using (var stream = client.OpenRead("http://www.google.com"))
			{
				return true;
			}
		}
		catch
		{
			return false;
		}
	}
}


