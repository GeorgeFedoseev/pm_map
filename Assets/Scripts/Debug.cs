#if DEBUG



#define VERBOSE
#endif



#if !UNITY_EDITOR && !VERBOSE
using UnityEngine;
using UnityEngine.Internal;
using System.Diagnostics;
using System.Runtime.InteropServices;


public static class Debug {


public static void LogInfo(string message, UnityEngine.Object obj = null) {
#if !UNITY_EDITOR && !VERBOSE
UnityEngine.Debug.Log(message, obj);
#endif
}


public static void Log(string message, UnityEngine.Object obj = null) {
#if !UNITY_EDITOR && !VERBOSE
UnityEngine.Debug.Log(message, obj);
#endif
}


public static void WriteLine(string message) {
#if !UNITY_EDITOR && !VERBOSE
UnityEngine.Debug.Log(message);
#endif
}


public static void LogWarning(string message, UnityEngine.Object obj = null) {
#if !UNITY_EDITOR && !VERBOSE
UnityEngine.Debug.LogWarning(message, obj);
#endif
}

public static void DrawLine (Vector3 start, Vector3 end, [DefaultValue ("")] Color color, [DefaultValue ("0.0f")] float duration, [DefaultValue ("true")] bool depthTest = true){
UnityEngine.Debug.DrawLine(start, end, color, duration, depthTest);
}

public static void LogError(string message, UnityEngine.Object obj = null) {
UnityEngine.Debug.LogError(message, obj);
}

public static void LogException(System.Exception e) {
UnityEngine.Debug.LogError(e.Message);
}
}


#endif
