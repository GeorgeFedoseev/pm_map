#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// WebViewObject
struct WebViewObject_t388577432;
// System.String
struct String_t;
// System.Action`1<System.String>
struct Action_1_t403047693;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebViewObject388577432.h"
#include "AssemblyU2DCSharpU2Dfirstpass_WebViewObject388577432MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboard1858258760MethodDeclarations.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Action_1_gen403047693.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "mscorlib_System_IntPtr4010401971MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_Action_1_gen403047693MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WWW3134621005MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WebViewObject::.ctor()
extern "C"  void WebViewObject__ctor_m3534129567 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebViewObject::get_IsKeyboardVisible()
extern "C"  bool WebViewObject_get_IsKeyboardVisible_m3484961969 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	{
		bool L_0 = TouchScreenKeyboard_get_visible_m1414940916(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr WebViewObject::_CWebViewPlugin_Init(System.String,System.Boolean,System.Boolean)
extern "C"  IntPtr_t WebViewObject__CWebViewPlugin_Init_m749734699 (Il2CppObject * __this /* static, unused */, String_t* ___gameObject0, bool ___transparent1, bool ___enableWKWebView2, const MethodInfo* method)
{
	extern intptr_t DEFAULT_CALL _CWebViewPlugin_Init(char*, int32_t, int32_t);

	// Marshaling of parameter '___gameObject0' to native representation
	char* ____gameObject0_marshaled = NULL;
	____gameObject0_marshaled = il2cpp_codegen_marshal_string(___gameObject0);

	// Native function invocation
	intptr_t returnValue = _CWebViewPlugin_Init(____gameObject0_marshaled, ___transparent1, ___enableWKWebView2);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)returnValue));

	// Marshaling cleanup of parameter '___gameObject0' native representation
	il2cpp_codegen_marshal_free(____gameObject0_marshaled);
	____gameObject0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Int32 WebViewObject::_CWebViewPlugin_Destroy(System.IntPtr)
extern "C"  int32_t WebViewObject__CWebViewPlugin_Destroy_m985090846 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method)
{
	extern int32_t DEFAULT_CALL _CWebViewPlugin_Destroy(intptr_t);

	// Native function invocation
	int32_t returnValue = _CWebViewPlugin_Destroy(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()));

	return returnValue;
}
// System.Void WebViewObject::_CWebViewPlugin_SetMargins(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebViewObject__CWebViewPlugin_SetMargins_m3676410773 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, int32_t ___left1, int32_t ___top2, int32_t ___right3, int32_t ___bottom4, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_SetMargins(intptr_t, int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	_CWebViewPlugin_SetMargins(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()), ___left1, ___top2, ___right3, ___bottom4);

}
// System.Void WebViewObject::_CWebViewPlugin_SetVisibility(System.IntPtr,System.Boolean)
extern "C"  void WebViewObject__CWebViewPlugin_SetVisibility_m293485955 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, bool ___visibility1, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_SetVisibility(intptr_t, int32_t);

	// Native function invocation
	_CWebViewPlugin_SetVisibility(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()), ___visibility1);

}
// System.Void WebViewObject::_CWebViewPlugin_LoadURL(System.IntPtr,System.String)
extern "C"  void WebViewObject__CWebViewPlugin_LoadURL_m3437932609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, String_t* ___url1, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_LoadURL(intptr_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	_CWebViewPlugin_LoadURL(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()), ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
// System.Void WebViewObject::_CWebViewPlugin_LoadHTML(System.IntPtr,System.String,System.String)
extern "C"  void WebViewObject__CWebViewPlugin_LoadHTML_m2886420479 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, String_t* ___html1, String_t* ___baseUrl2, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_LoadHTML(intptr_t, char*, char*);

	// Marshaling of parameter '___html1' to native representation
	char* ____html1_marshaled = NULL;
	____html1_marshaled = il2cpp_codegen_marshal_string(___html1);

	// Marshaling of parameter '___baseUrl2' to native representation
	char* ____baseUrl2_marshaled = NULL;
	____baseUrl2_marshaled = il2cpp_codegen_marshal_string(___baseUrl2);

	// Native function invocation
	_CWebViewPlugin_LoadHTML(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()), ____html1_marshaled, ____baseUrl2_marshaled);

	// Marshaling cleanup of parameter '___html1' native representation
	il2cpp_codegen_marshal_free(____html1_marshaled);
	____html1_marshaled = NULL;

	// Marshaling cleanup of parameter '___baseUrl2' native representation
	il2cpp_codegen_marshal_free(____baseUrl2_marshaled);
	____baseUrl2_marshaled = NULL;

}
// System.Void WebViewObject::_CWebViewPlugin_EvaluateJS(System.IntPtr,System.String)
extern "C"  void WebViewObject__CWebViewPlugin_EvaluateJS_m572655442 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, String_t* ___url1, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_EvaluateJS(intptr_t, char*);

	// Marshaling of parameter '___url1' to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Native function invocation
	_CWebViewPlugin_EvaluateJS(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()), ____url1_marshaled);

	// Marshaling cleanup of parameter '___url1' native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

}
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoBack(System.IntPtr)
extern "C"  bool WebViewObject__CWebViewPlugin_CanGoBack_m1849314035 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method)
{
	extern int32_t DEFAULT_CALL _CWebViewPlugin_CanGoBack(intptr_t);

	// Native function invocation
	int32_t returnValue = _CWebViewPlugin_CanGoBack(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()));

	return returnValue;
}
// System.Boolean WebViewObject::_CWebViewPlugin_CanGoForward(System.IntPtr)
extern "C"  bool WebViewObject__CWebViewPlugin_CanGoForward_m2961389671 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method)
{
	extern int32_t DEFAULT_CALL _CWebViewPlugin_CanGoForward(intptr_t);

	// Native function invocation
	int32_t returnValue = _CWebViewPlugin_CanGoForward(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()));

	return returnValue;
}
// System.Void WebViewObject::_CWebViewPlugin_GoBack(System.IntPtr)
extern "C"  void WebViewObject__CWebViewPlugin_GoBack_m3058402857 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_GoBack(intptr_t);

	// Native function invocation
	_CWebViewPlugin_GoBack(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()));

}
// System.Void WebViewObject::_CWebViewPlugin_GoForward(System.IntPtr)
extern "C"  void WebViewObject__CWebViewPlugin_GoForward_m1035774321 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_GoForward(intptr_t);

	// Native function invocation
	_CWebViewPlugin_GoForward(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()));

}
// System.Void WebViewObject::_CWebViewPlugin_SetFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void WebViewObject__CWebViewPlugin_SetFrame_m1234085741 (Il2CppObject * __this /* static, unused */, IntPtr_t ___instance0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const MethodInfo* method)
{
	extern void DEFAULT_CALL _CWebViewPlugin_SetFrame(intptr_t, int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	_CWebViewPlugin_SetFrame(reinterpret_cast<intptr_t>(___instance0.get_m_value_0()), ___x1, ___y2, ___width3, ___height4);

}
// System.Void WebViewObject::Init(System.Action`1<System.String>,System.Boolean,System.String,System.Action`1<System.String>,System.Action`1<System.String>,System.Boolean)
extern "C"  void WebViewObject_Init_m1293431765 (WebViewObject_t388577432 * __this, Action_1_t403047693 * ___cb0, bool ___transparent1, String_t* ___ua2, Action_1_t403047693 * ___err3, Action_1_t403047693 * ___ld4, bool ___enableWKWebView5, const MethodInfo* method)
{
	{
		Action_1_t403047693 * L_0 = ___cb0;
		__this->set_onJS_2(L_0);
		Action_1_t403047693 * L_1 = ___err3;
		__this->set_onError_3(L_1);
		Action_1_t403047693 * L_2 = ___ld4;
		__this->set_onLoaded_4(L_2);
		String_t* L_3 = Object_get_name_m3709440845(__this, /*hidden argument*/NULL);
		bool L_4 = ___transparent1;
		bool L_5 = ___enableWKWebView5;
		IntPtr_t L_6 = WebViewObject__CWebViewPlugin_Init_m749734699(NULL /*static, unused*/, L_3, L_4, L_5, /*hidden argument*/NULL);
		__this->set_webView_6(L_6);
		return;
	}
}
// System.Void WebViewObject::OnDestroy()
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_OnDestroy_m852260632_MetadataUsageId;
extern "C"  void WebViewObject_OnDestroy_m852260632 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_OnDestroy_m852260632_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		WebViewObject__CWebViewPlugin_Destroy_m985090846(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IntPtr_t L_4 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		__this->set_webView_6(L_4);
		return;
	}
}
// System.Void WebViewObject::SetCenterPositionWithScale(UnityEngine.Vector2,UnityEngine.Vector2)
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_SetCenterPositionWithScale_m3707009509_MetadataUsageId;
extern "C"  void WebViewObject_SetCenterPositionWithScale_m3707009509 (WebViewObject_t388577432 * __this, Vector2_t4282066565  ___center0, Vector2_t4282066565  ___scale1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetCenterPositionWithScale_m3707009509_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		float L_4 = (&___center0)->get_x_1();
		float L_5 = (&___center0)->get_y_2();
		float L_6 = (&___scale1)->get_x_1();
		float L_7 = (&___scale1)->get_y_2();
		WebViewObject__CWebViewPlugin_SetFrame_m1234085741(NULL /*static, unused*/, L_3, (((int32_t)((int32_t)L_4))), (((int32_t)((int32_t)L_5))), (((int32_t)((int32_t)L_6))), (((int32_t)((int32_t)L_7))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebViewObject::SetMargins(System.Int32,System.Int32,System.Int32,System.Int32)
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_SetMargins_m3594992190_MetadataUsageId;
extern "C"  void WebViewObject_SetMargins_m3594992190 (WebViewObject_t388577432 * __this, int32_t ___left0, int32_t ___top1, int32_t ___right2, int32_t ___bottom3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetMargins_m3594992190_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		int32_t L_4 = ___left0;
		int32_t L_5 = ___top1;
		int32_t L_6 = ___right2;
		int32_t L_7 = ___bottom3;
		WebViewObject__CWebViewPlugin_SetMargins_m3676410773(NULL /*static, unused*/, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebViewObject::SetVisibility(System.Boolean)
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_SetVisibility_m1306909320_MetadataUsageId;
extern "C"  void WebViewObject_SetVisibility_m1306909320 (WebViewObject_t388577432 * __this, bool ___v0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_SetVisibility_m1306909320_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		bool L_4 = ___v0;
		WebViewObject__CWebViewPlugin_SetVisibility_m293485955(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = ___v0;
		__this->set_visibility_5(L_5);
		return;
	}
}
// System.Boolean WebViewObject::GetVisibility()
extern "C"  bool WebViewObject_GetVisibility_m2010902625 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_visibility_5();
		return L_0;
	}
}
// System.Void WebViewObject::LoadURL(System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_LoadURL_m619319452_MetadataUsageId;
extern "C"  void WebViewObject_LoadURL_m619319452 (WebViewObject_t388577432 * __this, String_t* ___url0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_LoadURL_m619319452_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IntPtr_t L_2 = __this->get_webView_6();
		IntPtr_t L_3 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_4 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		IntPtr_t L_5 = __this->get_webView_6();
		String_t* L_6 = ___url0;
		WebViewObject__CWebViewPlugin_LoadURL_m3437932609(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebViewObject::LoadHTML(System.String,System.String)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_LoadHTML_m3401411304_MetadataUsageId;
extern "C"  void WebViewObject_LoadHTML_m3401411304 (WebViewObject_t388577432 * __this, String_t* ___html0, String_t* ___baseUrl1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_LoadHTML_m3401411304_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___html0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		String_t* L_2 = ___baseUrl1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1256468773(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		___baseUrl1 = L_4;
	}

IL_001e:
	{
		IntPtr_t L_5 = __this->get_webView_6();
		IntPtr_t L_6 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_7 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		return;
	}

IL_0034:
	{
		IntPtr_t L_8 = __this->get_webView_6();
		String_t* L_9 = ___html0;
		String_t* L_10 = ___baseUrl1;
		WebViewObject__CWebViewPlugin_LoadHTML_m2886420479(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebViewObject::EvaluateJS(System.String)
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_EvaluateJS_m660540027_MetadataUsageId;
extern "C"  void WebViewObject_EvaluateJS_m660540027 (WebViewObject_t388577432 * __this, String_t* ___js0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_EvaluateJS_m660540027_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		String_t* L_4 = ___js0;
		WebViewObject__CWebViewPlugin_EvaluateJS_m572655442(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WebViewObject::CanGoBack()
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_CanGoBack_m1742702968_MetadataUsageId;
extern "C"  bool WebViewObject_CanGoBack_m1742702968 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CanGoBack_m1742702968_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		bool L_4 = WebViewObject__CWebViewPlugin_CanGoBack_m1849314035(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean WebViewObject::CanGoForward()
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_CanGoForward_m115219254_MetadataUsageId;
extern "C"  bool WebViewObject_CanGoForward_m115219254 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CanGoForward_m115219254_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		bool L_4 = WebViewObject__CWebViewPlugin_CanGoForward_m2961389671(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void WebViewObject::GoBack()
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_GoBack_m3419759860_MetadataUsageId;
extern "C"  void WebViewObject_GoBack_m3419759860 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_GoBack_m3419759860_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		WebViewObject__CWebViewPlugin_GoBack_m3058402857(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebViewObject::GoForward()
extern Il2CppClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t WebViewObject_GoForward_m2257501754_MetadataUsageId;
extern "C"  void WebViewObject_GoForward_m2257501754 (WebViewObject_t388577432 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_GoForward_m2257501754_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = __this->get_webView_6();
		IntPtr_t L_1 = ((IntPtr_t_StaticFields*)IntPtr_t_il2cpp_TypeInfo_var->static_fields)->get_Zero_1();
		bool L_2 = IntPtr_op_Equality_m72843924(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		IntPtr_t L_3 = __this->get_webView_6();
		WebViewObject__CWebViewPlugin_GoForward_m1035774321(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WebViewObject::CallOnError(System.String)
extern const MethodInfo* Action_1_Invoke_m518637026_MethodInfo_var;
extern const uint32_t WebViewObject_CallOnError_m3297299930_MetadataUsageId;
extern "C"  void WebViewObject_CallOnError_m3297299930 (WebViewObject_t388577432 * __this, String_t* ___error0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallOnError_m3297299930_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t403047693 * L_0 = __this->get_onError_3();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t403047693 * L_1 = __this->get_onError_3();
		String_t* L_2 = ___error0;
		NullCheck(L_1);
		Action_1_Invoke_m518637026(L_1, L_2, /*hidden argument*/Action_1_Invoke_m518637026_MethodInfo_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void WebViewObject::CallOnLoaded(System.String)
extern const MethodInfo* Action_1_Invoke_m518637026_MethodInfo_var;
extern const uint32_t WebViewObject_CallOnLoaded_m3423462363_MetadataUsageId;
extern "C"  void WebViewObject_CallOnLoaded_m3423462363 (WebViewObject_t388577432 * __this, String_t* ___url0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallOnLoaded_m3423462363_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t403047693 * L_0 = __this->get_onLoaded_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t403047693 * L_1 = __this->get_onLoaded_4();
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		Action_1_Invoke_m518637026(L_1, L_2, /*hidden argument*/Action_1_Invoke_m518637026_MethodInfo_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void WebViewObject::CallFromJS(System.String)
extern const MethodInfo* Action_1_Invoke_m518637026_MethodInfo_var;
extern const uint32_t WebViewObject_CallFromJS_m3571752908_MetadataUsageId;
extern "C"  void WebViewObject_CallFromJS_m3571752908 (WebViewObject_t388577432 * __this, String_t* ___message0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (WebViewObject_CallFromJS_m3571752908_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Action_1_t403047693 * L_0 = __this->get_onJS_2();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_1 = ___message0;
		String_t* L_2 = WWW_UnEscapeURL_m1534650378(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___message0 = L_2;
		Action_1_t403047693 * L_3 = __this->get_onJS_2();
		String_t* L_4 = ___message0;
		NullCheck(L_3);
		Action_1_Invoke_m518637026(L_3, L_4, /*hidden argument*/Action_1_Invoke_m518637026_MethodInfo_var);
	}

IL_001f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
