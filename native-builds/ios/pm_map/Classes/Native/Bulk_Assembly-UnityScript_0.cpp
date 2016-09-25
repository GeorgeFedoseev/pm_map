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

// AutoRotate
struct AutoRotate_t1577600010;
// HoriPivot
struct HoriPivot_t70108484;
// PinchZoom
struct PinchZoom_t1518303117;
// UnityEngine.Camera
struct Camera_t2727095145;
// System.Object
struct Il2CppObject;
// VertPivot
struct VertPivot_t602236273;
// VertPivot_Sphere
struct VertPivot_Sphere_t2264996475;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_AutoRotate1577600010.h"
#include "AssemblyU2DUnityScript_AutoRotate1577600010MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Space4209342076.h"
#include "AssemblyU2DUnityScript_HoriPivot70108484.h"
#include "AssemblyU2DUnityScript_HoriPivot70108484MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DUnityScript_PinchZoom1518303117.h"
#include "AssemblyU2DUnityScript_PinchZoom1518303117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch4210255029MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_TouchPhase1567063616.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "AssemblyU2DUnityScript_VertPivot602236273.h"
#include "AssemblyU2DUnityScript_VertPivot602236273MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI3134605553MethodDeclarations.h"
#include "mscorlib_System_Single4291918972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Screen3187157168MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Rect4241904616MethodDeclarations.h"
#include "AssemblyU2DUnityScript_VertPivot_Sphere2264996475.h"
#include "AssemblyU2DUnityScript_VertPivot_Sphere2264996475MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, method) ((  Camera_t2727095145 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AutoRotate::.ctor()
extern "C"  void AutoRotate__ctor_m2101786886 (AutoRotate_t1577600010 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_rotationSpeed_2((((float)((float)3))));
		return;
	}
}
// System.Void AutoRotate::Start()
extern "C"  void AutoRotate_Start_m1048924678 (AutoRotate_t1577600010 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AutoRotate::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const uint32_t AutoRotate_Update_m2457746119_MetadataUsageId;
extern "C"  void AutoRotate_Update_m2457746119 (AutoRotate_t1577600010 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (AutoRotate_Update_m2457746119_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_2 = __this->get_rotationSpeed_2();
		NullCheck(L_1);
		Transform_Rotate_m569346304(L_1, (((float)((float)0))), L_2, (((float)((float)0))), 0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void AutoRotate::Main()
extern "C"  void AutoRotate_Main_m260388599 (AutoRotate_t1577600010 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void HoriPivot::.ctor()
extern "C"  void HoriPivot__ctor_m1252395218 (HoriPivot_t70108484 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HoriPivot::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern const uint32_t HoriPivot_Update_m1896408187_MetadataUsageId;
extern "C"  void HoriPivot_Update_m1896408187 (HoriPivot_t70108484 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (HoriPivot_Update_m1896408187_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_00e0;
		}
	}
	{
		int32_t L_1 = __this->get_lastTouch_7();
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_00e0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_2 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_lastTouch_7(0);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		float L_4 = __this->get_holdTimer_5();
		__this->set_holdTimer_5(((float)((float)L_4+(float)(((float)((float)1))))));
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		float L_6 = __this->get_holdTimer_5();
		if ((((float)L_6) <= ((float)(((float)((float)3))))))
		{
			goto IL_008a;
		}
	}
	{
		float L_7 = __this->get_holdTimer_5();
		__this->set_holdTimer_5(((float)((float)L_7+(float)(((float)((float)1))))));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_8 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		__this->set_xAxis_6(L_8);
		float L_9 = __this->get_xAxis_6();
		__this->set_speed_4(L_9);
		goto IL_00ab;
	}

IL_008a:
	{
		float L_10 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_11 = __this->get_lerpSpeed_3();
		V_0 = ((float)((float)L_10*(float)L_11));
		float L_12 = __this->get_speed_4();
		float L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_14 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_12, (((float)((float)0))), L_13, /*hidden argument*/NULL);
		__this->set_speed_4(L_14);
	}

IL_00ab:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_15 = Input_GetMouseButtonUp_m2588144188(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00be;
		}
	}
	{
		__this->set_holdTimer_5((((float)((float)0))));
	}

IL_00be:
	{
		Transform_t1659122786 * L_16 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_17 = __this->get_speed_4();
		float L_18 = __this->get_rotationSpeed_2();
		NullCheck(L_16);
		Transform_Rotate_m569346304(L_16, (((float)((float)0))), ((float)((float)L_17*(float)L_18)), (((float)((float)0))), 0, /*hidden argument*/NULL);
		goto IL_00f3;
	}

IL_00e0:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_19 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastTouch_7(L_19);
		__this->set_speed_4((((float)((float)0))));
	}

IL_00f3:
	{
		return;
	}
}
// System.Void HoriPivot::Main()
extern "C"  void HoriPivot_Main_m3696672171 (HoriPivot_t70108484 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PinchZoom::.ctor()
extern "C"  void PinchZoom__ctor_m957208745 (PinchZoom_t1518303117 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_minPinchSpeed_2((5.0f));
		__this->set_minDistance_3((5.0f));
		__this->set_speed_9(3);
		__this->set_maxOut_10(((int32_t)40));
		__this->set_maxIn_11(((int32_t)15));
		__this->set_showGUI_12((bool)1);
		return;
	}
}
// System.Void PinchZoom::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2268470611;
extern const uint32_t PinchZoom_Update_m1335562116_MetadataUsageId;
extern "C"  void PinchZoom_Update_m1335562116 (PinchZoom_t1518303117 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PinchZoom_Update_m1335562116_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Touch_t4210255029  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Touch_t4210255029  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Touch_t4210255029  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Touch_t4210255029  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Touch_t4210255029  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Touch_t4210255029  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Touch_t4210255029  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Touch_t4210255029  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Touch_t4210255029  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector2_t4282066565  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Touch_t4210255029  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Touch_t4210255029  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_t4282066565  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Touch_t4210255029  V_13;
	memset(&V_13, 0, sizeof(V_13));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_01f6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Touch_t4210255029  L_1 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Touch_get_phase_m3314549414((&V_0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_01f6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Touch_t4210255029  L_3 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = Touch_get_phase_m3314549414((&V_1), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		Touch_t4210255029  L_5 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_2 = L_5;
		Vector2_t4282066565  L_6 = Touch_get_position_m1943849441((&V_2), /*hidden argument*/NULL);
		Touch_t4210255029  L_7 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_3 = L_7;
		Vector2_t4282066565  L_8 = Touch_get_position_m1943849441((&V_3), /*hidden argument*/NULL);
		Vector2_t4282066565  L_9 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		__this->set_currentDistance_6(L_9);
		Touch_t4210255029  L_10 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_4 = L_10;
		Vector2_t4282066565  L_11 = Touch_get_position_m1943849441((&V_4), /*hidden argument*/NULL);
		Touch_t4210255029  L_12 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_5 = L_12;
		Vector2_t4282066565  L_13 = Touch_get_deltaPosition_m3983677995((&V_5), /*hidden argument*/NULL);
		Vector2_t4282066565  L_14 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		Touch_t4210255029  L_15 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_6 = L_15;
		Vector2_t4282066565  L_16 = Touch_get_position_m1943849441((&V_6), /*hidden argument*/NULL);
		Touch_t4210255029  L_17 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_7 = L_17;
		Vector2_t4282066565  L_18 = Touch_get_deltaPosition_m3983677995((&V_7), /*hidden argument*/NULL);
		Vector2_t4282066565  L_19 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
		Vector2_t4282066565  L_20 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_14, L_19, /*hidden argument*/NULL);
		__this->set_previousDistance_5(L_20);
		Vector2_t4282066565 * L_21 = __this->get_address_of_currentDistance_6();
		float L_22 = Vector2_get_magnitude_m1987058139(L_21, /*hidden argument*/NULL);
		Vector2_t4282066565 * L_23 = __this->get_address_of_previousDistance_5();
		float L_24 = Vector2_get_magnitude_m1987058139(L_23, /*hidden argument*/NULL);
		__this->set_touchDelta_4(((float)((float)L_22-(float)L_24)));
		Touch_t4210255029  L_25 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_8 = L_25;
		Vector2_t4282066565  L_26 = Touch_get_deltaPosition_m3983677995((&V_8), /*hidden argument*/NULL);
		V_9 = L_26;
		float L_27 = Vector2_get_magnitude_m1987058139((&V_9), /*hidden argument*/NULL);
		Touch_t4210255029  L_28 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_10 = L_28;
		float L_29 = Touch_get_deltaTime_m2685662144((&V_10), /*hidden argument*/NULL);
		__this->set_speedTouch0_7(((float)((float)L_27/(float)L_29)));
		Touch_t4210255029  L_30 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_11 = L_30;
		Vector2_t4282066565  L_31 = Touch_get_deltaPosition_m3983677995((&V_11), /*hidden argument*/NULL);
		V_12 = L_31;
		float L_32 = Vector2_get_magnitude_m1987058139((&V_12), /*hidden argument*/NULL);
		Touch_t4210255029  L_33 = Input_GetTouch_m2282421092(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_13 = L_33;
		float L_34 = Touch_get_deltaTime_m2685662144((&V_13), /*hidden argument*/NULL);
		__this->set_speedTouch1_8(((float)((float)L_32/(float)L_34)));
		float L_35 = __this->get_touchDelta_4();
		float L_36 = __this->get_minDistance_3();
		if ((((float)((float)((float)L_35+(float)L_36))) > ((float)(((float)((float)5))))))
		{
			goto IL_018d;
		}
	}
	{
		float L_37 = __this->get_speedTouch0_7();
		float L_38 = __this->get_minPinchSpeed_2();
		if ((((float)L_37) <= ((float)L_38)))
		{
			goto IL_018d;
		}
	}
	{
		float L_39 = __this->get_speedTouch1_8();
		float L_40 = __this->get_minPinchSpeed_2();
		if ((((float)L_39) <= ((float)L_40)))
		{
			goto IL_018d;
		}
	}
	{
		Camera_t2727095145 * L_41 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		Camera_t2727095145 * L_42 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		NullCheck(L_42);
		float L_43 = Camera_get_fieldOfView_m65126887(L_42, /*hidden argument*/NULL);
		int32_t L_44 = __this->get_speed_9();
		int32_t L_45 = __this->get_maxIn_11();
		int32_t L_46 = __this->get_maxOut_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_47 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_43+(float)(((float)((float)((int32_t)((int32_t)1*(int32_t)L_44))))))), (((float)((float)L_45))), (((float)((float)L_46))), /*hidden argument*/NULL);
		NullCheck(L_41);
		Camera_set_fieldOfView_m809388684(L_41, L_47, /*hidden argument*/NULL);
	}

IL_018d:
	{
		float L_48 = __this->get_touchDelta_4();
		float L_49 = __this->get_minDistance_3();
		if ((((float)((float)((float)L_48+(float)L_49))) <= ((float)(((float)((float)5))))))
		{
			goto IL_01f6;
		}
	}
	{
		float L_50 = __this->get_speedTouch0_7();
		float L_51 = __this->get_minPinchSpeed_2();
		if ((((float)L_50) <= ((float)L_51)))
		{
			goto IL_01f6;
		}
	}
	{
		float L_52 = __this->get_speedTouch1_8();
		float L_53 = __this->get_minPinchSpeed_2();
		if ((((float)L_52) <= ((float)L_53)))
		{
			goto IL_01f6;
		}
	}
	{
		Camera_t2727095145 * L_54 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		Camera_t2727095145 * L_55 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		NullCheck(L_55);
		float L_56 = Camera_get_fieldOfView_m65126887(L_55, /*hidden argument*/NULL);
		int32_t L_57 = __this->get_speed_9();
		int32_t L_58 = __this->get_maxIn_11();
		int32_t L_59 = __this->get_maxOut_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_60 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_56-(float)(((float)((float)((int32_t)((int32_t)1*(int32_t)L_57))))))), (((float)((float)L_58))), (((float)((float)L_59))), /*hidden argument*/NULL);
		NullCheck(L_54);
		Camera_set_fieldOfView_m809388684(L_54, L_60, /*hidden argument*/NULL);
	}

IL_01f6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_61 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2268470611, /*hidden argument*/NULL);
		if ((((float)L_61) >= ((float)(((float)((float)0))))))
		{
			goto IL_023f;
		}
	}
	{
		Camera_t2727095145 * L_62 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		Camera_t2727095145 * L_63 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		NullCheck(L_63);
		float L_64 = Camera_get_fieldOfView_m65126887(L_63, /*hidden argument*/NULL);
		int32_t L_65 = __this->get_speed_9();
		int32_t L_66 = __this->get_maxIn_11();
		int32_t L_67 = __this->get_maxOut_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_68 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_64+(float)(((float)((float)((int32_t)((int32_t)1*(int32_t)L_65))))))), (((float)((float)L_66))), (((float)((float)L_67))), /*hidden argument*/NULL);
		NullCheck(L_62);
		Camera_set_fieldOfView_m809388684(L_62, L_68, /*hidden argument*/NULL);
		goto IL_0283;
	}

IL_023f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_69 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2268470611, /*hidden argument*/NULL);
		if ((((float)L_69) <= ((float)(((float)((float)0))))))
		{
			goto IL_0283;
		}
	}
	{
		Camera_t2727095145 * L_70 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		Camera_t2727095145 * L_71 = Component_GetComponent_TisCamera_t2727095145_m3804104198(__this, /*hidden argument*/Component_GetComponent_TisCamera_t2727095145_m3804104198_MethodInfo_var);
		NullCheck(L_71);
		float L_72 = Camera_get_fieldOfView_m65126887(L_71, /*hidden argument*/NULL);
		int32_t L_73 = __this->get_speed_9();
		int32_t L_74 = __this->get_maxIn_11();
		int32_t L_75 = __this->get_maxOut_10();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_76 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_72-(float)(((float)((float)((int32_t)((int32_t)1*(int32_t)L_73))))))), (((float)((float)L_74))), (((float)((float)L_75))), /*hidden argument*/NULL);
		NullCheck(L_70);
		Camera_set_fieldOfView_m809388684(L_70, L_76, /*hidden argument*/NULL);
	}

IL_0283:
	{
		return;
	}
}
// System.Void PinchZoom::Main()
extern "C"  void PinchZoom_Main_m777656052 (PinchZoom_t1518303117 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void VertPivot::.ctor()
extern "C"  void VertPivot__ctor_m3228257093 (VertPivot_t602236273 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_showGUI_9((bool)1);
		__this->set_minimumTilt_13((-30.0f));
		__this->set_maximumTilt_14((30.0f));
		return;
	}
}
// System.Void VertPivot::Start()
extern "C"  void VertPivot_Start_m2175394885 (VertPivot_t602236273 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t1553702882  L_1 = Transform_get_localRotation_m3343229381(L_0, /*hidden argument*/NULL);
		__this->set_originalRotation_16(L_1);
		Transform_t1659122786 * L_2 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t4282066566  L_3 = Transform_get_localEulerAngles_m3489183428(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		__this->set_originalXRot_17(L_4);
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t4282066566  L_6 = Transform_get_localEulerAngles_m3489183428(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_2();
		__this->set_originalYRot_18(L_7);
		return;
	}
}
// System.Void VertPivot::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718526;
extern const uint32_t VertPivot_Update_m3018584168_MetadataUsageId;
extern "C"  void VertPivot_Update_m3018584168 (VertPivot_t602236273 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VertPivot_Update_m3018584168_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Quaternion_t1553702882  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t4282066566  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t4282066566  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t4282066566  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_t4282066566  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t4282066566  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t4282066566  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_t4282066566  V_11;
	memset(&V_11, 0, sizeof(V_11));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_0 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_0221;
		}
	}
	{
		int32_t L_1 = __this->get_lastTouch_19();
		if ((((int32_t)L_1) >= ((int32_t)2)))
		{
			goto IL_0221;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_2 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_lastTouch_19(0);
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		float L_4 = __this->get_holdTimer_10();
		__this->set_holdTimer_10(((float)((float)L_4+(float)(((float)((float)1))))));
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_007c;
		}
	}
	{
		float L_6 = __this->get_holdTimer_10();
		if ((((float)L_6) <= ((float)(((float)((float)3))))))
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_7 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718526, /*hidden argument*/NULL);
		__this->set_yaxis_11(((-L_7)));
		float L_8 = __this->get_yaxis_11();
		__this->set_speed_12(L_8);
		goto IL_009d;
	}

IL_007c:
	{
		float L_9 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_lerpSpeed_8();
		V_0 = ((float)((float)L_9*(float)L_10));
		float L_11 = __this->get_speed_12();
		float L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_11, (((float)((float)0))), L_12, /*hidden argument*/NULL);
		__this->set_speed_12(L_13);
	}

IL_009d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetMouseButtonUp_m2588144188(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		__this->set_holdTimer_10((((float)((float)0))));
	}

IL_00b0:
	{
		Transform_t1659122786 * L_15 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t4282066566  L_16 = Transform_get_position_m2211398607(L_15, /*hidden argument*/NULL);
		V_5 = L_16;
		float L_17 = (&V_5)->get_y_2();
		float L_18 = __this->get_speed_12();
		float L_19 = __this->get_moveSpeed_6();
		float L_20 = __this->get_cameraBottomLimit_3();
		float L_21 = __this->get_cameraTopLimit_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_22 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_17+(float)((float)((float)L_18*(float)L_19)))), L_20, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		float L_23 = V_1;
		float L_24 = L_23;
		V_3 = L_24;
		Transform_t1659122786 * L_25 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t4282066566  L_26 = Transform_get_position_m2211398607(L_25, /*hidden argument*/NULL);
		Vector3_t4282066566  L_27 = L_26;
		V_4 = L_27;
		float L_28 = V_3;
		float L_29 = L_28;
		V_6 = L_29;
		(&V_4)->set_y_2(L_29);
		float L_30 = V_6;
		Transform_t1659122786 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_32 = V_4;
		Vector3_t4282066566  L_33 = L_32;
		V_7 = L_33;
		NullCheck(L_31);
		Transform_set_position_m3111394108(L_31, L_33, /*hidden argument*/NULL);
		Vector3_t4282066566  L_34 = V_7;
		Transform_t1659122786 * L_35 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Vector3_t4282066566  L_36 = Transform_get_position_m2211398607(L_35, /*hidden argument*/NULL);
		V_8 = L_36;
		float L_37 = (&V_8)->get_y_2();
		float L_38 = __this->get_thresholdTop_4();
		if ((((float)L_37) >= ((float)L_38)))
		{
			goto IL_0156;
		}
	}
	{
		Transform_t1659122786 * L_39 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t4282066566  L_40 = Transform_get_position_m2211398607(L_39, /*hidden argument*/NULL);
		V_9 = L_40;
		float L_41 = (&V_9)->get_y_2();
		float L_42 = __this->get_thresholdBottom_5();
		if ((((float)L_41) > ((float)L_42)))
		{
			goto IL_021c;
		}
	}

IL_0156:
	{
		float L_43 = __this->get_rotationY_15();
		float L_44 = __this->get_speed_12();
		float L_45 = __this->get_rotationSpeed_7();
		__this->set_rotationY_15(((float)((float)L_43+(float)((float)((float)((float)((float)L_44*(float)((-L_45))))*(float)(0.8f))))));
		Transform_t1659122786 * L_46 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t4282066566  L_47 = Transform_get_position_m2211398607(L_46, /*hidden argument*/NULL);
		V_10 = L_47;
		float L_48 = (&V_10)->get_y_2();
		float L_49 = __this->get_thresholdTop_4();
		if ((((float)L_48) <= ((float)L_49)))
		{
			goto IL_01b8;
		}
	}
	{
		float L_50 = __this->get_rotationY_15();
		float L_51 = __this->get_maximumTilt_14();
		float L_52 = VertPivot_ClampAngle_m2261655146(NULL /*static, unused*/, L_50, ((-L_51)), (1.0f), /*hidden argument*/NULL);
		__this->set_rotationY_15(L_52);
		goto IL_01f4;
	}

IL_01b8:
	{
		Transform_t1659122786 * L_53 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_t4282066566  L_54 = Transform_get_position_m2211398607(L_53, /*hidden argument*/NULL);
		V_11 = L_54;
		float L_55 = (&V_11)->get_y_2();
		float L_56 = __this->get_thresholdBottom_5();
		if ((((float)L_55) >= ((float)L_56)))
		{
			goto IL_01f4;
		}
	}
	{
		float L_57 = __this->get_rotationY_15();
		float L_58 = __this->get_minimumTilt_13();
		float L_59 = VertPivot_ClampAngle_m2261655146(NULL /*static, unused*/, L_57, (1.0f), ((-L_58)), /*hidden argument*/NULL);
		__this->set_rotationY_15(L_59);
	}

IL_01f4:
	{
		float L_60 = __this->get_rotationY_15();
		Vector3_t4282066566  L_61 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_62 = Quaternion_AngleAxis_m644124247(NULL /*static, unused*/, L_60, L_61, /*hidden argument*/NULL);
		V_2 = L_62;
		Transform_t1659122786 * L_63 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_64 = __this->get_originalRotation_16();
		Quaternion_t1553702882  L_65 = V_2;
		Quaternion_t1553702882  L_66 = Quaternion_op_Multiply_m3077481361(NULL /*static, unused*/, L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_set_localRotation_m3719981474(L_63, L_66, /*hidden argument*/NULL);
	}

IL_021c:
	{
		goto IL_0234;
	}

IL_0221:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		int32_t L_67 = Input_get_touchCount_m1430909390(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_lastTouch_19(L_67);
		__this->set_speed_12((((float)((float)0))));
	}

IL_0234:
	{
		return;
	}
}
// System.Single VertPivot::ClampAngle(System.Single,System.Single,System.Single)
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t VertPivot_ClampAngle_m2261655146_MetadataUsageId;
extern "C"  float VertPivot_ClampAngle_m2261655146 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VertPivot_ClampAngle_m2261655146_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___angle0;
		if ((((float)L_0) >= ((float)(((float)((float)((int32_t)-360)))))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = ___angle0;
		___angle0 = ((float)((float)L_1+(float)(((float)((float)((int32_t)360))))));
	}

IL_001a:
	{
		float L_2 = ___angle0;
		if ((((float)L_2) <= ((float)(((float)((float)((int32_t)360)))))))
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = ___angle0;
		___angle0 = ((float)((float)L_3-(float)(((float)((float)((int32_t)360))))));
	}

IL_0034:
	{
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void VertPivot::OnGUI()
extern Il2CppClass* GUI_t3134605553_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3425598933;
extern Il2CppCodeGenString* _stringLiteral2221;
extern Il2CppCodeGenString* _stringLiteral855088327;
extern Il2CppCodeGenString* _stringLiteral4193640212;
extern Il2CppCodeGenString* _stringLiteral588650850;
extern Il2CppCodeGenString* _stringLiteral3425171409;
extern Il2CppCodeGenString* _stringLiteral4229328736;
extern Il2CppCodeGenString* _stringLiteral2520183949;
extern const uint32_t VertPivot_OnGUI_m2723655743_MetadataUsageId;
extern "C"  void VertPivot_OnGUI_m2723655743 (VertPivot_t602236273 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VertPivot_OnGUI_m2723655743_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_showGUI_9();
		if (!L_0)
		{
			goto IL_02ed;
		}
	}
	{
		Rect_t4241904616  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Rect__ctor_m3291325233(&L_1, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_1, _stringLiteral3425598933, /*hidden argument*/NULL);
		Rect_t4241904616  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Rect__ctor_m3291325233(&L_2, (((float)((float)((int32_t)250)))), (((float)((float)((int32_t)30)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		float L_3 = __this->get_cameraTopLimit_2();
		float L_4 = GUI_HorizontalSlider_m3098503955(NULL /*static, unused*/, L_2, L_3, (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)150)))), /*hidden argument*/NULL);
		__this->set_cameraTopLimit_2(L_4);
		Rect_t4241904616  L_5;
		memset(&L_5, 0, sizeof(L_5));
		Rect__ctor_m3291325233(&L_5, (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		float* L_6 = __this->get_address_of_cameraTopLimit_2();
		String_t* L_7 = Single_ToString_m639595682(L_6, _stringLiteral2221, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		Rect_t4241904616  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Rect__ctor_m3291325233(&L_8, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_8, _stringLiteral855088327, /*hidden argument*/NULL);
		Rect_t4241904616  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Rect__ctor_m3291325233(&L_9, (((float)((float)((int32_t)250)))), (((float)((float)((int32_t)55)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		float L_10 = __this->get_cameraBottomLimit_3();
		float L_11 = GUI_HorizontalSlider_m3098503955(NULL /*static, unused*/, L_9, L_10, (((float)((float)0))), (((float)((float)((int32_t)-100)))), /*hidden argument*/NULL);
		__this->set_cameraBottomLimit_3(L_11);
		Rect_t4241904616  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Rect__ctor_m3291325233(&L_12, (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		float* L_13 = __this->get_address_of_cameraBottomLimit_3();
		String_t* L_14 = Single_ToString_m639595682(L_13, _stringLiteral2221, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		Rect_t4241904616  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Rect__ctor_m3291325233(&L_15, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_15, _stringLiteral4193640212, /*hidden argument*/NULL);
		Rect_t4241904616  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Rect__ctor_m3291325233(&L_16, (((float)((float)((int32_t)250)))), (((float)((float)((int32_t)80)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		float L_17 = __this->get_thresholdTop_4();
		float L_18 = GUI_HorizontalSlider_m3098503955(NULL /*static, unused*/, L_16, L_17, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)75)))), /*hidden argument*/NULL);
		__this->set_thresholdTop_4(L_18);
		Rect_t4241904616  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Rect__ctor_m3291325233(&L_19, (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		float* L_20 = __this->get_address_of_thresholdTop_4();
		String_t* L_21 = Single_ToString_m639595682(L_20, _stringLiteral2221, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_19, L_21, /*hidden argument*/NULL);
		Rect_t4241904616  L_22;
		memset(&L_22, 0, sizeof(L_22));
		Rect__ctor_m3291325233(&L_22, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_22, _stringLiteral588650850, /*hidden argument*/NULL);
		Rect_t4241904616  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Rect__ctor_m3291325233(&L_23, (((float)((float)((int32_t)250)))), (((float)((float)((int32_t)105)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		float L_24 = __this->get_thresholdBottom_5();
		float L_25 = GUI_HorizontalSlider_m3098503955(NULL /*static, unused*/, L_23, L_24, (((float)((float)((int32_t)-25)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		__this->set_thresholdBottom_5(L_25);
		Rect_t4241904616  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Rect__ctor_m3291325233(&L_26, (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		float* L_27 = __this->get_address_of_thresholdBottom_5();
		String_t* L_28 = Single_ToString_m639595682(L_27, _stringLiteral2221, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_26, L_28, /*hidden argument*/NULL);
		Rect_t4241904616  L_29;
		memset(&L_29, 0, sizeof(L_29));
		Rect__ctor_m3291325233(&L_29, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)125)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_29, _stringLiteral3425171409, /*hidden argument*/NULL);
		Rect_t4241904616  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Rect__ctor_m3291325233(&L_30, (((float)((float)((int32_t)250)))), (((float)((float)((int32_t)130)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		float L_31 = __this->get_moveSpeed_6();
		float L_32 = GUI_HorizontalSlider_m3098503955(NULL /*static, unused*/, L_30, L_31, (((float)((float)0))), (((float)((float)2))), /*hidden argument*/NULL);
		__this->set_moveSpeed_6(L_32);
		Rect_t4241904616  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Rect__ctor_m3291325233(&L_33, (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)125)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		float* L_34 = __this->get_address_of_moveSpeed_6();
		String_t* L_35 = Single_ToString_m639595682(L_34, _stringLiteral2221, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_33, L_35, /*hidden argument*/NULL);
		Rect_t4241904616  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Rect__ctor_m3291325233(&L_36, (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_36, _stringLiteral4229328736, /*hidden argument*/NULL);
		Rect_t4241904616  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Rect__ctor_m3291325233(&L_37, (((float)((float)((int32_t)250)))), (((float)((float)((int32_t)155)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)20)))), /*hidden argument*/NULL);
		float L_38 = __this->get_rotationSpeed_7();
		float L_39 = GUI_HorizontalSlider_m3098503955(NULL /*static, unused*/, L_37, L_38, (((float)((float)0))), (((float)((float)2))), /*hidden argument*/NULL);
		__this->set_rotationSpeed_7(L_39);
		Rect_t4241904616  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Rect__ctor_m3291325233(&L_40, (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		float* L_41 = __this->get_address_of_rotationSpeed_7();
		String_t* L_42 = Single_ToString_m639595682(L_41, _stringLiteral2221, /*hidden argument*/NULL);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		int32_t L_43 = Screen_get_width_m3080333084(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t4241904616  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Rect__ctor_m3291325233(&L_44, (((float)((float)((int32_t)((int32_t)L_43-(int32_t)((int32_t)100)))))), (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)50)))), /*hidden argument*/NULL);
		bool L_45 = GUI_Button_m885093907(NULL /*static, unused*/, L_44, _stringLiteral2520183949, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_02ed;
		}
	}
	{
		Application_LoadLevel_m1181471414(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
	}

IL_02ed:
	{
		return;
	}
}
// System.Void VertPivot::Main()
extern "C"  void VertPivot_Main_m712368344 (VertPivot_t602236273 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void VertPivot_Sphere::.ctor()
extern "C"  void VertPivot_Sphere__ctor_m2759762933 (VertPivot_Sphere_t2264996475 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_minimumTilt_13((-30.0f));
		__this->set_maximumTilt_14((30.0f));
		return;
	}
}
// System.Void VertPivot_Sphere::Start()
extern "C"  void VertPivot_Sphere_Start_m1706900725 (VertPivot_Sphere_t2264996475 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t1553702882  L_1 = Transform_get_localRotation_m3343229381(L_0, /*hidden argument*/NULL);
		__this->set_originalRotation_8(L_1);
		Transform_t1659122786 * L_2 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t4282066566  L_3 = Transform_get_localEulerAngles_m3489183428(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		__this->set_originalXRot_9(L_4);
		Transform_t1659122786 * L_5 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t4282066566  L_6 = Transform_get_localEulerAngles_m3489183428(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_2();
		__this->set_originalYRot_10(L_7);
		return;
	}
}
// System.Void VertPivot_Sphere::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2907718526;
extern Il2CppCodeGenString* _stringLiteral2907718525;
extern const uint32_t VertPivot_Sphere_Update_m1380167096_MetadataUsageId;
extern "C"  void VertPivot_Sphere_Update_m1380167096 (VertPivot_Sphere_t2264996475 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VertPivot_Sphere_Update_m1380167096_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Quaternion_t1553702882  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = __this->get_holdTimer_2();
		__this->set_holdTimer_2(((float)((float)L_1+(float)(((float)((float)1))))));
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButton_m4080958081(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		float L_3 = __this->get_holdTimer_2();
		if ((((float)L_3) <= ((float)(((float)((float)3))))))
		{
			goto IL_0070;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_4 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718526, /*hidden argument*/NULL);
		__this->set_yaxis_3(((-L_4)));
		float L_5 = __this->get_yaxis_3();
		__this->set_vertSpeed_5(L_5);
		float L_6 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2907718525, /*hidden argument*/NULL);
		__this->set_xAxis_4(L_6);
		float L_7 = __this->get_xAxis_4();
		__this->set_horiSpeed_6(L_7);
		goto IL_00a5;
	}

IL_0070:
	{
		float L_8 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_lerpSpeed_12();
		V_0 = ((float)((float)L_8*(float)L_9));
		float L_10 = __this->get_vertSpeed_5();
		float L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_10, (((float)((float)0))), L_11, /*hidden argument*/NULL);
		__this->set_vertSpeed_5(L_12);
		float L_13 = __this->get_horiSpeed_6();
		float L_14 = V_0;
		float L_15 = Mathf_Lerp_m3257777633(NULL /*static, unused*/, L_13, (((float)((float)0))), L_14, /*hidden argument*/NULL);
		__this->set_horiSpeed_6(L_15);
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetMouseButtonUp_m2588144188(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00b8;
		}
	}
	{
		__this->set_holdTimer_2((((float)((float)0))));
	}

IL_00b8:
	{
		float L_17 = __this->get_rotationY_7();
		float L_18 = __this->get_vertSpeed_5();
		float L_19 = __this->get_rotationSpeed_11();
		__this->set_rotationY_7(((float)((float)L_17+(float)((float)((float)((float)((float)L_18*(float)((-L_19))))*(float)(0.8f))))));
		float L_20 = __this->get_rotationY_7();
		float L_21 = __this->get_maximumTilt_14();
		float L_22 = __this->get_minimumTilt_13();
		float L_23 = VertPivot_Sphere_ClampAngle_m2361377154(NULL /*static, unused*/, L_20, ((-L_21)), ((-L_22)), /*hidden argument*/NULL);
		__this->set_rotationY_7(L_23);
		float L_24 = __this->get_rotationY_7();
		Vector3_t4282066566  L_25 = Vector3_get_left_m1616598929(NULL /*static, unused*/, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_26 = Quaternion_AngleAxis_m644124247(NULL /*static, unused*/, L_24, L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		Transform_t1659122786 * L_27 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_28 = __this->get_originalRotation_8();
		Quaternion_t1553702882  L_29 = V_1;
		Quaternion_t1553702882  L_30 = Quaternion_op_Multiply_m3077481361(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_set_localRotation_m3719981474(L_27, L_30, /*hidden argument*/NULL);
		Transform_t1659122786 * L_31 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_32 = __this->get_horiSpeed_6();
		float L_33 = __this->get_rotationSpeed_11();
		NullCheck(L_31);
		Transform_Rotate_m569346304(L_31, (((float)((float)0))), ((float)((float)L_32*(float)L_33)), (((float)((float)0))), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single VertPivot_Sphere::ClampAngle(System.Single,System.Single,System.Single)
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern const uint32_t VertPivot_Sphere_ClampAngle_m2361377154_MetadataUsageId;
extern "C"  float VertPivot_Sphere_ClampAngle_m2361377154 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___min1, float ___max2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (VertPivot_Sphere_ClampAngle_m2361377154_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ___angle0;
		if ((((float)L_0) >= ((float)(((float)((float)((int32_t)-360)))))))
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = ___angle0;
		___angle0 = ((float)((float)L_1+(float)(((float)((float)((int32_t)360))))));
	}

IL_001a:
	{
		float L_2 = ___angle0;
		if ((((float)L_2) <= ((float)(((float)((float)((int32_t)360)))))))
		{
			goto IL_0034;
		}
	}
	{
		float L_3 = ___angle0;
		___angle0 = ((float)((float)L_3-(float)(((float)((float)((int32_t)360))))));
	}

IL_0034:
	{
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_7 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void VertPivot_Sphere::Main()
extern "C"  void VertPivot_Sphere_Main_m3745296936 (VertPivot_Sphere_t2264996475 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
