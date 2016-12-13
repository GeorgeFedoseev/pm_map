#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// WebViewObject
struct WebViewObject_t388577432;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t403047693;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void WebViewObject::.ctor()
extern "C"  void WebViewObject__ctor_m3534129567 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebViewObject::get_IsKeyboardVisible()
extern "C"  bool WebViewObject_get_IsKeyboardVisible_m3484961969 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr WebViewObject::_CWebViewPlugin_Init(System.String,System.Boolean,System.Boolean)
extern "C"  IntPtr_t WebViewObject__CWebViewPlugin_Init_m749734699 (Il2CppObject * __this /* static, unused */, String_t* ___gameObject0, bool ___transparent1, bool ___enableWKWebView2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 WebViewObject::_CWebViewPlugin_Destroy(System.IntPtr)
extern "C"  int32_t WebViewObject__CWebViewPlugin_Destroy_m985090846 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_SetMargins(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebViewObject__CWebViewPlugin_SetMargins_m3676410773 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, int32_t ___left1, int32_t ___top2, int32_t ___right3, int32_t ___bottom4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_SetVisibility(System.IntPtr,System.Boolean)
extern "C"  void WebViewObject__CWebViewPlugin_SetVisibility_m293485955 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, bool ___visibility1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_LoadURL(System.IntPtr,System.String)
extern "C"  void WebViewObject__CWebViewPlugin_LoadURL_m3437932609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, String_t* ___url1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_LoadHTML(System.IntPtr,System.String,System.String)
extern "C"  void WebViewObject__CWebViewPlugin_LoadHTML_m2886420479 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, String_t* ___html1, String_t* ___baseUrl2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_EvaluateJS(System.IntPtr,System.String)
extern "C"  void WebViewObject__CWebViewPlugin_EvaluateJS_m572655442 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, String_t* ___url1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoBack(System.IntPtr)
extern "C"  bool WebViewObject__CWebViewPlugin_CanGoBack_m1849314035 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoForward(System.IntPtr)
extern "C"  bool WebViewObject__CWebViewPlugin_CanGoForward_m2961389671 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_GoBack(System.IntPtr)
extern "C"  void WebViewObject__CWebViewPlugin_GoBack_m3058402857 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_GoForward(System.IntPtr)
extern "C"  void WebViewObject__CWebViewPlugin_GoForward_m1035774321 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::_CWebViewPlugin_SetFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebViewObject__CWebViewPlugin_SetFrame_m1234085741 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::Init(System.Action`1<System.String>,System.Boolean,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Boolean)
extern "C"  void WebViewObject_Init_m1293431765 (WebViewObject_t388577432 * __this, Action_1_t403047693 * ___cb0, bool ___transparent1, String_t* ___ua2, Action_1_t403047693 * ___err3, Action_1_t403047693 * ___ld4, bool ___enableWKWebView5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::OnDestroy()
extern "C"  void WebViewObject_OnDestroy_m852260632 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::SetCenterPositionWithScale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void WebViewObject_SetCenterPositionWithScale_m3707009509 (WebViewObject_t388577432 * __this, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___scale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebViewObject_SetMargins_m3594992190 (WebViewObject_t388577432 * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::SetVisibility(System.Boolean)
extern "C"  void WebViewObject_SetVisibility_m1306909320 (WebViewObject_t388577432 * __this, bool ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebViewObject::GetVisibility()
extern "C"  bool WebViewObject_GetVisibility_m2010902625 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::LoadURL(System.String)
extern "C"  void WebViewObject_LoadURL_m619319452 (WebViewObject_t388577432 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::LoadHTML(System.String,System.String)
extern "C"  void WebViewObject_LoadHTML_m3401411304 (WebViewObject_t388577432 * __this, String_t* ___html0, String_t* ___baseUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::EvaluateJS(System.String)
extern "C"  void WebViewObject_EvaluateJS_m660540027 (WebViewObject_t388577432 * __this, String_t* ___js0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebViewObject::CanGoBack()
extern "C"  bool WebViewObject_CanGoBack_m1742702968 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean WebViewObject::CanGoForward()
extern "C"  bool WebViewObject_CanGoForward_m115219254 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::GoBack()
extern "C"  void WebViewObject_GoBack_m3419759860 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::GoForward()
extern "C"  void WebViewObject_GoForward_m2257501754 (WebViewObject_t388577432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::CallOnError(System.String)
extern "C"  void WebViewObject_CallOnError_m3297299930 (WebViewObject_t388577432 * __this, String_t* ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::CallOnLoaded(System.String)
extern "C"  void WebViewObject_CallOnLoaded_m3423462363 (WebViewObject_t388577432 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WebViewObject::CallFromJS(System.String)
extern "C"  void WebViewObject_CallFromJS_m3571752908 (WebViewObject_t388577432 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
