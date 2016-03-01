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

// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1917318876;
// UnityEngine.WaitForFixedUpdate
struct WaitForFixedUpdate_t896427542;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240;
struct WaitForSeconds_t1291133240_marshaled;
// UnityEngine.WheelCollider
struct WheelCollider_t331071644;
// UnityEngine.WrapperlessIcall
struct WrapperlessIcall_t4003675496;
// UnityEngine.WritableAttribute
struct WritableAttribute_t1716006665;
// UnityEngine.YieldInstruction
struct YieldInstruction_t3557331758;
struct YieldInstruction_t3557331758_marshaled;
// UnityEngineInternal.GenericStack
struct GenericStack_t2344941421;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t471424957;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Single958209021.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_UnityString963216403MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_Single958209021MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "UnityEngine_UnityEngine_Mathf1597001355MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Vector33525329789MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector43525329790MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForEndOfFrame1917318876.h"
#include "UnityEngine_UnityEngine_WaitForEndOfFrame1917318876MethodDeclarations.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForFixedUpdate896427542.h"
#include "UnityEngine_UnityEngine_WaitForFixedUpdate896427542MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240.h"
#include "UnityEngine_UnityEngine_WaitForSeconds1291133240MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WheelCollider331071644.h"
#include "UnityEngine_UnityEngine_WheelCollider331071644MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WrapperlessIcall4003675496.h"
#include "UnityEngine_UnityEngine_WrapperlessIcall4003675496MethodDeclarations.h"
#include "mscorlib_System_Attribute498693649MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WritableAttribute1716006665.h"
#include "UnityEngine_UnityEngine_WritableAttribute1716006665MethodDeclarations.h"
#include "UnityEngine_UnityEngine_YieldInstruction3557331758.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_GenericStack2344941421.h"
#include "UnityEngine_UnityEngineInternal_GenericStack2344941421MethodDeclarations.h"
#include "mscorlib_System_Collections_Stack1623036922MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919.h"
#include "UnityEngine_UnityEngineInternal_MathfInternal681132919MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAt471424957MethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844.h"
#include "mscorlib_System_Enum2778772662MethodDeclarations.h"
#include "mscorlib_System_Enum2778772662.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules435505844MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m1517109030 (Vector2_t3525329788 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  Vector2_Scale_m1743563745 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t3525329788  L_4 = {0};
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Vector2::Normalize()
extern "C"  void Vector2_Normalize_m195575125 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector2_get_magnitude_m1987058139(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = V_0;
		Vector2_t3525329788  L_3 = Vector2_op_Division_m747627697(NULL /*static, unused*/, (*(Vector2_t3525329788 *)__this), L_2, /*hidden argument*/NULL);
		(*(Vector2_t3525329788 *)__this) = L_3;
		goto IL_0034;
	}

IL_0029:
	{
		Vector2_t3525329788  L_4 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		(*(Vector2_t3525329788 *)__this) = L_4;
	}

IL_0034:
	{
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
extern "C"  Vector2_t3525329788  Vector2_get_normalized_m123128511 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	Vector2_t3525329788  V_0 = {0};
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___y_2);
		Vector2__ctor_m1517109030((&V_0), L_0, L_1, /*hidden argument*/NULL);
		Vector2_Normalize_m195575125((&V_0), /*hidden argument*/NULL);
		Vector2_t3525329788  L_2 = V_0;
		return L_2;
	}
}
// System.String UnityEngine.Vector2::ToString()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t958209021_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3928503634;
extern const uint32_t Vector2_ToString_m3859776067_MetadataUsageId;
extern "C"  String_t* Vector2_ToString_m3859776067 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_ToString_m3859776067_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t11523773* L_0 = ((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)2));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t11523773* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		String_t* L_8 = UnityString_Format_m427603113(NULL /*static, unused*/, _stringLiteral3928503634, L_4, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C"  int32_t Vector2_GetHashCode_m128434585 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m65342520(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m65342520(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern TypeInfo* Vector2_t3525329788_il2cpp_TypeInfo_var;
extern const uint32_t Vector2_Equals_m3404198849_MetadataUsageId;
extern "C"  bool Vector2_Equals_m3404198849 (Vector2_t3525329788 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Equals_m3404198849_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t3525329788  V_0 = {0};
	int32_t G_B5_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector2_t3525329788_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector2_t3525329788 *)((Vector2_t3525329788 *)UnBox (L_1, Vector2_t3525329788_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m2110115959(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m2110115959(L_5, L_6, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_7));
		goto IL_0040;
	}

IL_003f:
	{
		G_B5_0 = 0;
	}

IL_0040:
	{
		return (bool)G_B5_0;
	}
}
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Dot_m2437602225 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___lhs, Vector2_t3525329788  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// System.Single UnityEngine.Vector2::get_magnitude()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector2_get_magnitude_m1987058139_MetadataUsageId;
extern "C"  float Vector2_get_magnitude_m1987058139 (Vector2_t3525329788 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_get_magnitude_m1987058139_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_4 = sqrtf(((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3)))));
		return L_4;
	}
}
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector2_Angle_m3950144551_MetadataUsageId;
extern "C"  float Vector2_Angle_m3950144551 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___from, Vector2_t3525329788  ___to, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector2_Angle_m3950144551_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t3525329788  L_0 = Vector2_get_normalized_m123128511((&___from), /*hidden argument*/NULL);
		Vector2_t3525329788  L_1 = Vector2_get_normalized_m123128511((&___to), /*hidden argument*/NULL);
		float L_2 = Vector2_Dot_m2437602225(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, L_2, (-1.0f), (1.0f), /*hidden argument*/NULL);
		float L_4 = acosf(L_3);
		return ((float)((float)L_4*(float)(57.29578f)));
	}
}
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  float Vector2_Distance_m340609291 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method)
{
	Vector2_t3525329788  V_0 = {0};
	{
		Vector2_t3525329788  L_0 = ___a;
		Vector2_t3525329788  L_1 = ___b;
		Vector2_t3525329788  L_2 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = Vector2_get_magnitude_m1987058139((&V_0), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C"  float Vector2_SqrMagnitude_m4007443280 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		return ((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))));
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t3525329788  Vector2_get_zero_m199872368 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t3525329788  L_0 = {0};
		Vector2__ctor_m1517109030(&L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C"  Vector2_t3525329788  Vector2_get_up_m1197831267 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector2_t3525329788  L_0 = {0};
		Vector2__ctor_m1517109030(&L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  Vector2_op_Addition_m1173049553 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t3525329788  L_4 = {0};
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  Vector2_op_Subtraction_m2097149401 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, Vector2_t3525329788  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		Vector2_t3525329788  L_4 = {0};
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  Vector2_op_Multiply_m1738245082 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t3525329788  L_4 = {0};
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  Vector2_op_Multiply_m4063148634 (Object_t * __this /* static, unused */, float ___d, Vector2_t3525329788  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t3525329788  L_4 = {0};
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t3525329788  Vector2_op_Division_m747627697 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		Vector2_t3525329788  L_4 = {0};
		Vector2__ctor_m1517109030(&L_4, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool Vector2_op_Equality_m1927481448 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___lhs, Vector2_t3525329788  ___rhs, const MethodInfo* method)
{
	{
		Vector2_t3525329788  L_0 = ___lhs;
		Vector2_t3525329788  L_1 = ___rhs;
		Vector2_t3525329788  L_2 = Vector2_op_Subtraction_m2097149401(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector2_SqrMagnitude_m4007443280(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t3525329788  Vector2_op_Implicit_m4083860659 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector2_t3525329788  L_2 = {0};
		Vector2__ctor_m1517109030(&L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3525329789  Vector2_op_Implicit_m482286037 (Object_t * __this /* static, unused */, Vector2_t3525329788  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_1);
		float L_1 = ((&___v)->___y_2);
		Vector3_t3525329789  L_2 = {0};
		Vector3__ctor_m2926210380(&L_2, L_0, L_1, (0.0f), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2926210380 (Vector3_t3525329789 * __this, float ___x, float ___y, float ___z, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		float L_2 = ___z;
		__this->___z_3 = L_2;
		return;
	}
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1846874791 (Vector3_t3525329789 * __this, float ___x, float ___y, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_1 = L_0;
		float L_1 = ___y;
		__this->___y_2 = L_1;
		__this->___z_3 = (0.0f);
		return;
	}
}
// System.Void UnityEngine.Vector3::Internal_OrthoNormalize2(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Vector3_Internal_OrthoNormalize2_m46566864 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___a, Vector3_t3525329789 * ___b, const MethodInfo* method)
{
	{
		Vector3_t3525329789 * L_0 = ___a;
		Vector3_t3525329789 * L_1 = ___b;
		Vector3_INTERNAL_CALL_Internal_OrthoNormalize2_m1970869553(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Vector3::INTERNAL_CALL_Internal_OrthoNormalize2(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Vector3_INTERNAL_CALL_Internal_OrthoNormalize2_m1970869553 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___a, Vector3_t3525329789 * ___b, const MethodInfo* method)
{
	typedef void (*Vector3_INTERNAL_CALL_Internal_OrthoNormalize2_m1970869553_ftn) (Vector3_t3525329789 *, Vector3_t3525329789 *);
	static Vector3_INTERNAL_CALL_Internal_OrthoNormalize2_m1970869553_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Vector3_INTERNAL_CALL_Internal_OrthoNormalize2_m1970869553_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Vector3::INTERNAL_CALL_Internal_OrthoNormalize2(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___a, ___b);
}
// System.Void UnityEngine.Vector3::OrthoNormalize(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C"  void Vector3_OrthoNormalize_m1810797014 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___normal, Vector3_t3525329789 * ___tangent, const MethodInfo* method)
{
	{
		Vector3_t3525329789 * L_0 = ___normal;
		Vector3_t3525329789 * L_1 = ___tangent;
		Vector3_Internal_OrthoNormalize2_m46566864(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Scale_m3746402337 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t3525329789  L_6 = {0};
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Cross_m2894122475 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___y_2);
		float L_1 = ((&___rhs)->___z_3);
		float L_2 = ((&___lhs)->___z_3);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___x_1);
		float L_6 = ((&___lhs)->___x_1);
		float L_7 = ((&___rhs)->___z_3);
		float L_8 = ((&___lhs)->___x_1);
		float L_9 = ((&___rhs)->___y_2);
		float L_10 = ((&___lhs)->___y_2);
		float L_11 = ((&___rhs)->___x_1);
		Vector3_t3525329789  L_12 = {0};
		Vector3__ctor_m2926210380(&L_12, ((float)((float)((float)((float)L_0*(float)L_1))-(float)((float)((float)L_2*(float)L_3)))), ((float)((float)((float)((float)L_4*(float)L_5))-(float)((float)((float)L_6*(float)L_7)))), ((float)((float)((float)((float)L_8*(float)L_9))-(float)((float)((float)L_10*(float)L_11)))), /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Int32 UnityEngine.Vector3::GetHashCode()
extern "C"  int32_t Vector3_GetHashCode_m3912867704 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_1);
		int32_t L_1 = Single_GetHashCode_m65342520(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_2);
		int32_t L_3 = Single_GetHashCode_m65342520(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_3);
		int32_t L_5 = Single_GetHashCode_m65342520(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))));
	}
}
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
extern TypeInfo* Vector3_t3525329789_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_Equals_m3337192096_MetadataUsageId;
extern "C"  bool Vector3_Equals_m3337192096 (Vector3_t3525329789 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Equals_m3337192096_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0 = {0};
	int32_t G_B6_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector3_t3525329789_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector3_t3525329789 *)((Vector3_t3525329789 *)UnBox (L_1, Vector3_t3525329789_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_1);
		float L_3 = ((&V_0)->___x_1);
		bool L_4 = Single_Equals_m2110115959(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		float* L_5 = &(__this->___y_2);
		float L_6 = ((&V_0)->___y_2);
		bool L_7 = Single_Equals_m2110115959(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		float* L_8 = &(__this->___z_3);
		float L_9 = ((&V_0)->___z_3);
		bool L_10 = Single_Equals_m2110115959(L_8, L_9, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)(L_10));
		goto IL_0057;
	}

IL_0056:
	{
		G_B6_0 = 0;
	}

IL_0057:
	{
		return (bool)G_B6_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_Normalize_m3047997355 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___value, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		Vector3_t3525329789  L_0 = ___value;
		float L_1 = Vector3_Magnitude_m995314358(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.0E-05f)))))
		{
			goto IL_001a;
		}
	}
	{
		Vector3_t3525329789  L_3 = ___value;
		float L_4 = V_0;
		Vector3_t3525329789  L_5 = Vector3_op_Division_m4277988370(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001a:
	{
		Vector3_t3525329789  L_6 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m3984983796 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Vector3_Magnitude_m995314358(NULL /*static, unused*/, (*(Vector3_t3525329789 *)__this), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.0E-05f)))))
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = V_0;
		Vector3_t3525329789  L_3 = Vector3_op_Division_m4277988370(NULL /*static, unused*/, (*(Vector3_t3525329789 *)__this), L_2, /*hidden argument*/NULL);
		(*(Vector3_t3525329789 *)__this) = L_3;
		goto IL_0039;
	}

IL_002e:
	{
		Vector3_t3525329789  L_4 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		(*(Vector3_t3525329789 *)__this) = L_4;
	}

IL_0039:
	{
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3525329789  Vector3_get_normalized_m2650940353 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = Vector3_Normalize_m3047997355(NULL /*static, unused*/, (*(Vector3_t3525329789 *)__this), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityEngine.Vector3::ToString()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t958209021_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1732534255;
extern const uint32_t Vector3_ToString_m3566373060_MetadataUsageId;
extern "C"  String_t* Vector3_ToString_m3566373060 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_ToString_m3566373060_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t11523773* L_0 = ((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)3));
		float L_1 = (__this->___x_1);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t11523773* L_4 = L_0;
		float L_5 = (__this->___y_2);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t11523773* L_8 = L_4;
		float L_9 = (__this->___z_3);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		String_t* L_12 = UnityString_Format_m427603113(NULL /*static, unused*/, _stringLiteral1732534255, L_8, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Dot_m2370485424 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method)
{
	{
		float L_0 = ((&___lhs)->___x_1);
		float L_1 = ((&___rhs)->___x_1);
		float L_2 = ((&___lhs)->___y_2);
		float L_3 = ((&___rhs)->___y_2);
		float L_4 = ((&___lhs)->___z_3);
		float L_5 = ((&___rhs)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_Distance_m3366690344_MetadataUsageId;
extern "C"  float Vector3_Distance_m3366690344 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Distance_m3366690344_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t3525329789  V_0 = {0};
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3__ctor_m2926210380((&V_0), ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		float L_6 = ((&V_0)->___x_1);
		float L_7 = ((&V_0)->___x_1);
		float L_8 = ((&V_0)->___y_2);
		float L_9 = ((&V_0)->___y_2);
		float L_10 = ((&V_0)->___z_3);
		float L_11 = ((&V_0)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_12 = sqrtf(((float)((float)((float)((float)((float)((float)L_6*(float)L_7))+(float)((float)((float)L_8*(float)L_9))))+(float)((float)((float)L_10*(float)L_11)))));
		return L_12;
	}
}
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_Magnitude_m995314358_MetadataUsageId;
extern "C"  float Vector3_Magnitude_m995314358 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Magnitude_m995314358_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::get_magnitude()
extern TypeInfo* Mathf_t1597001355_il2cpp_TypeInfo_var;
extern const uint32_t Vector3_get_magnitude_m989985786_MetadataUsageId;
extern "C"  float Vector3_get_magnitude_m989985786 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector3_get_magnitude_m989985786_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t1597001355_il2cpp_TypeInfo_var);
		float L_6 = sqrtf(((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5)))));
		return L_6;
	}
}
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
extern "C"  float Vector3_SqrMagnitude_m1662776270 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___a)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___a)->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C"  float Vector3_get_sqrMagnitude_m1207423764 (Vector3_t3525329789 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___x_1);
		float L_1 = (__this->___x_1);
		float L_2 = (__this->___y_2);
		float L_3 = (__this->___y_2);
		float L_4 = (__this->___z_3);
		float L_5 = (__this->___z_3);
		return ((float)((float)((float)((float)((float)((float)L_0*(float)L_1))+(float)((float)((float)L_2*(float)L_3))))+(float)((float)((float)L_4*(float)L_5))));
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3525329789  Vector3_get_zero_m2017759730 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = {0};
		Vector3__ctor_m2926210380(&L_0, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3525329789  Vector3_get_one_m886467710 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = {0};
		Vector3__ctor_m2926210380(&L_0, (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3525329789  Vector3_get_forward_m1039372701 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = {0};
		Vector3__ctor_m2926210380(&L_0, (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3525329789  Vector3_get_up_m4046647141 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = {0};
		Vector3__ctor_m2926210380(&L_0, (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
extern "C"  Vector3_t3525329789  Vector3_get_left_m1616598929 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = {0};
		Vector3__ctor_m2926210380(&L_0, (-1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3525329789  Vector3_get_right_m4015137012 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = {0};
		Vector3__ctor_m2926210380(&L_0, (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Addition_m695438225 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t3525329789  L_6 = {0};
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_Subtraction_m2842958165 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, Vector3_t3525329789  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___b)->___x_1);
		float L_2 = ((&___a)->___y_2);
		float L_3 = ((&___b)->___y_2);
		float L_4 = ((&___a)->___z_3);
		float L_5 = ((&___b)->___z_3);
		Vector3_t3525329789  L_6 = {0};
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0-(float)L_1)), ((float)((float)L_2-(float)L_3)), ((float)((float)L_4-(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  Vector3_op_UnaryNegation_m3293197314 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ((&___a)->___y_2);
		float L_2 = ((&___a)->___z_3);
		Vector3_t3525329789  L_3 = {0};
		Vector3__ctor_m2926210380(&L_3, ((-L_0)), ((-L_1)), ((-L_2)), /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Multiply_m973638459 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t3525329789  L_6 = {0};
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0*(float)L_1)), ((float)((float)L_2*(float)L_3)), ((float)((float)L_4*(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3525329789  Vector3_op_Division_m4277988370 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_1);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_2);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_3);
		float L_5 = ___d;
		Vector3_t3525329789  L_6 = {0};
		Vector3__ctor_m2926210380(&L_6, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Equality_m582817895 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___lhs, Vector3_t3525329789  ___rhs, const MethodInfo* method)
{
	{
		Vector3_t3525329789  L_0 = ___lhs;
		Vector3_t3525329789  L_1 = ___rhs;
		Vector3_t3525329789  L_2 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_SqrMagnitude_m1662776270(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return (bool)((((float)L_3) < ((float)(9.99999944E-11f)))? 1 : 0);
	}
}
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m2441427762 (Vector4_t3525329790 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method)
{
	{
		float L_0 = ___x;
		__this->___x_0 = L_0;
		float L_1 = ___y;
		__this->___y_1 = L_1;
		float L_2 = ___z;
		__this->___z_2 = L_2;
		float L_3 = ___w;
		__this->___w_3 = L_3;
		return;
	}
}
// System.Int32 UnityEngine.Vector4::GetHashCode()
extern "C"  int32_t Vector4_GetHashCode_m3402333527 (Vector4_t3525329790 * __this, const MethodInfo* method)
{
	{
		float* L_0 = &(__this->___x_0);
		int32_t L_1 = Single_GetHashCode_m65342520(L_0, /*hidden argument*/NULL);
		float* L_2 = &(__this->___y_1);
		int32_t L_3 = Single_GetHashCode_m65342520(L_2, /*hidden argument*/NULL);
		float* L_4 = &(__this->___z_2);
		int32_t L_5 = Single_GetHashCode_m65342520(L_4, /*hidden argument*/NULL);
		float* L_6 = &(__this->___w_3);
		int32_t L_7 = Single_GetHashCode_m65342520(L_6, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1^(int32_t)((int32_t)((int32_t)L_3<<(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_5>>(int32_t)2))))^(int32_t)((int32_t)((int32_t)L_7>>(int32_t)1))));
	}
}
// System.Boolean UnityEngine.Vector4::Equals(System.Object)
extern TypeInfo* Vector4_t3525329790_il2cpp_TypeInfo_var;
extern const uint32_t Vector4_Equals_m3270185343_MetadataUsageId;
extern "C"  bool Vector4_Equals_m3270185343 (Vector4_t3525329790 * __this, Object_t * ___other, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector4_Equals_m3270185343_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector4_t3525329790  V_0 = {0};
	int32_t G_B7_0 = 0;
	{
		Object_t * L_0 = ___other;
		if (((Object_t *)IsInstSealed(L_0, Vector4_t3525329790_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		Object_t * L_1 = ___other;
		V_0 = ((*(Vector4_t3525329790 *)((Vector4_t3525329790 *)UnBox (L_1, Vector4_t3525329790_il2cpp_TypeInfo_var))));
		float* L_2 = &(__this->___x_0);
		float L_3 = ((&V_0)->___x_0);
		bool L_4 = Single_Equals_m2110115959(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		float* L_5 = &(__this->___y_1);
		float L_6 = ((&V_0)->___y_1);
		bool L_7 = Single_Equals_m2110115959(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006d;
		}
	}
	{
		float* L_8 = &(__this->___z_2);
		float L_9 = ((&V_0)->___z_2);
		bool L_10 = Single_Equals_m2110115959(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		float* L_11 = &(__this->___w_3);
		float L_12 = ((&V_0)->___w_3);
		bool L_13 = Single_Equals_m2110115959(L_11, L_12, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_13));
		goto IL_006e;
	}

IL_006d:
	{
		G_B7_0 = 0;
	}

IL_006e:
	{
		return (bool)G_B7_0;
	}
}
// System.String UnityEngine.Vector4::ToString()
extern TypeInfo* ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var;
extern TypeInfo* Single_t958209021_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral843281963;
extern const uint32_t Vector4_ToString_m3272970053_MetadataUsageId;
extern "C"  String_t* Vector4_ToString_m3272970053 (Vector4_t3525329790 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Vector4_ToString_m3272970053_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ObjectU5BU5D_t11523773* L_0 = ((ObjectU5BU5D_t11523773*)SZArrayNew(ObjectU5BU5D_t11523773_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = (__this->___x_0);
		float L_2 = L_1;
		Object_t * L_3 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, L_3);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_0, 0, sizeof(Object_t *))) = (Object_t *)L_3;
		ObjectU5BU5D_t11523773* L_4 = L_0;
		float L_5 = (__this->___y_1);
		float L_6 = L_5;
		Object_t * L_7 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		ArrayElementTypeCheck (L_4, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 1, sizeof(Object_t *))) = (Object_t *)L_7;
		ObjectU5BU5D_t11523773* L_8 = L_4;
		float L_9 = (__this->___z_2);
		float L_10 = L_9;
		Object_t * L_11 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		ArrayElementTypeCheck (L_8, L_11);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_8, 2, sizeof(Object_t *))) = (Object_t *)L_11;
		ObjectU5BU5D_t11523773* L_12 = L_8;
		float L_13 = (__this->___w_3);
		float L_14 = L_13;
		Object_t * L_15 = Box(Single_t958209021_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 3);
		ArrayElementTypeCheck (L_12, L_15);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_12, 3, sizeof(Object_t *))) = (Object_t *)L_15;
		String_t* L_16 = UnityString_Format_m427603113(NULL /*static, unused*/, _stringLiteral843281963, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
extern "C"  Vector4_t3525329790  Vector4_get_zero_m3835647092 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		Vector4_t3525329790  L_0 = {0};
		Vector4__ctor_m2441427762(&L_0, (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  Vector4_t3525329790  Vector4_op_Addition_m217826897 (Object_t * __this /* static, unused */, Vector4_t3525329790  ___a, Vector4_t3525329790  ___b, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ((&___b)->___x_0);
		float L_2 = ((&___a)->___y_1);
		float L_3 = ((&___b)->___y_1);
		float L_4 = ((&___a)->___z_2);
		float L_5 = ((&___b)->___z_2);
		float L_6 = ((&___a)->___w_3);
		float L_7 = ((&___b)->___w_3);
		Vector4_t3525329790  L_8 = {0};
		Vector4__ctor_m2441427762(&L_8, ((float)((float)L_0+(float)L_1)), ((float)((float)L_2+(float)L_3)), ((float)((float)L_4+(float)L_5)), ((float)((float)L_6+(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
extern "C"  Vector4_t3525329790  Vector4_op_Division_m3513381747 (Object_t * __this /* static, unused */, Vector4_t3525329790  ___a, float ___d, const MethodInfo* method)
{
	{
		float L_0 = ((&___a)->___x_0);
		float L_1 = ___d;
		float L_2 = ((&___a)->___y_1);
		float L_3 = ___d;
		float L_4 = ((&___a)->___z_2);
		float L_5 = ___d;
		float L_6 = ((&___a)->___w_3);
		float L_7 = ___d;
		Vector4_t3525329790  L_8 = {0};
		Vector4__ctor_m2441427762(&L_8, ((float)((float)L_0/(float)L_1)), ((float)((float)L_2/(float)L_3)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_6/(float)L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
extern "C"  Vector3_t3525329789  Vector4_op_Implicit_m3933247893 (Object_t * __this /* static, unused */, Vector4_t3525329790  ___v, const MethodInfo* method)
{
	{
		float L_0 = ((&___v)->___x_0);
		float L_1 = ((&___v)->___y_1);
		float L_2 = ((&___v)->___z_2);
		Vector3_t3525329789  L_3 = {0};
		Vector3__ctor_m2926210380(&L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m4124201226 (WaitForEndOfFrame_t1917318876 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WaitForFixedUpdate::.ctor()
extern "C"  void WaitForFixedUpdate__ctor_m2916734308 (WaitForFixedUpdate_t896427542 * __this, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m3184996201 (WaitForSeconds_t1291133240 * __this, float ___seconds, const MethodInfo* method)
{
	{
		YieldInstruction__ctor_m539393484(__this, /*hidden argument*/NULL);
		float L_0 = ___seconds;
		__this->___m_Seconds_0 = L_0;
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal(const WaitForSeconds_t1291133240& unmarshaled, WaitForSeconds_t1291133240_marshaled& marshaled)
{
	marshaled.___m_Seconds_0 = unmarshaled.___m_Seconds_0;
}
extern "C" void WaitForSeconds_t1291133240_marshal_back(const WaitForSeconds_t1291133240_marshaled& marshaled, WaitForSeconds_t1291133240& unmarshaled)
{
	unmarshaled.___m_Seconds_0 = marshaled.___m_Seconds_0;
}
// Conversion method for clean up from marshalling of: UnityEngine.WaitForSeconds
extern "C" void WaitForSeconds_t1291133240_marshal_cleanup(WaitForSeconds_t1291133240_marshaled& marshaled)
{
}
// System.Void UnityEngine.WheelCollider::set_center(UnityEngine.Vector3)
extern "C"  void WheelCollider_set_center_m1484253997 (WheelCollider_t331071644 * __this, Vector3_t3525329789  ___value, const MethodInfo* method)
{
	{
		WheelCollider_INTERNAL_set_center_m535970031(__this, (&___value), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WheelCollider::INTERNAL_set_center(UnityEngine.Vector3&)
extern "C"  void WheelCollider_INTERNAL_set_center_m535970031 (WheelCollider_t331071644 * __this, Vector3_t3525329789 * ___value, const MethodInfo* method)
{
	typedef void (*WheelCollider_INTERNAL_set_center_m535970031_ftn) (WheelCollider_t331071644 *, Vector3_t3525329789 *);
	static WheelCollider_INTERNAL_set_center_m535970031_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_INTERNAL_set_center_m535970031_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::INTERNAL_set_center(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WheelCollider::set_radius(System.Single)
extern "C"  void WheelCollider_set_radius_m48892450 (WheelCollider_t331071644 * __this, float ___value, const MethodInfo* method)
{
	typedef void (*WheelCollider_set_radius_m48892450_ftn) (WheelCollider_t331071644 *, float);
	static WheelCollider_set_radius_m48892450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WheelCollider_set_radius_m48892450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.WheelCollider::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value);
}
// System.Void UnityEngine.WrapperlessIcall::.ctor()
extern "C"  void WrapperlessIcall__ctor_m1888400594 (WrapperlessIcall_t4003675496 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.WritableAttribute::.ctor()
extern "C"  void WritableAttribute__ctor_m2205809533 (WritableAttribute_t1716006665 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C"  void YieldInstruction__ctor_m539393484 (YieldInstruction_t3557331758 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal(const YieldInstruction_t3557331758& unmarshaled, YieldInstruction_t3557331758_marshaled& marshaled)
{
}
extern "C" void YieldInstruction_t3557331758_marshal_back(const YieldInstruction_t3557331758_marshaled& marshaled, YieldInstruction_t3557331758& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: UnityEngine.YieldInstruction
extern "C" void YieldInstruction_t3557331758_marshal_cleanup(YieldInstruction_t3557331758_marshaled& marshaled)
{
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C"  void GenericStack__ctor_m2328546233 (GenericStack_t2344941421 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1821673314(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.MathfInternal::.cctor()
extern TypeInfo* MathfInternal_t681132919_il2cpp_TypeInfo_var;
extern const uint32_t MathfInternal__cctor_m2600550988_MetadataUsageId;
extern "C"  void MathfInternal__cctor_m2600550988 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (MathfInternal__cctor_m2600550988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->___FloatMinNormal_0 = (1.17549435E-38f);
		il2cpp_codegen_memory_barrier();
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->___FloatMinDenormal_1 = (1.401298E-45f);
		((MathfInternal_t681132919_StaticFields*)MathfInternal_t681132919_il2cpp_TypeInfo_var->static_fields)->___IsFlushToZeroEnabled_2 = (bool)1;
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t435505844_il2cpp_TypeInfo_var;
extern const uint32_t TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId;
extern "C"  void TypeInferenceRuleAttribute__ctor_m1168575159 (TypeInferenceRuleAttribute_t471424957 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TypeInferenceRuleAttribute__ctor_m1168575159_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t435505844_il2cpp_TypeInfo_var, &L_1);
		NullCheck((Enum_t2778772662 *)L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, (Enum_t2778772662 *)L_2);
		TypeInferenceRuleAttribute__ctor_m2173394041(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C"  void TypeInferenceRuleAttribute__ctor_m2173394041 (TypeInferenceRuleAttribute_t471424957 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m2985353781(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C"  String_t* TypeInferenceRuleAttribute_ToString_m318752778 (TypeInferenceRuleAttribute_t471424957 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
