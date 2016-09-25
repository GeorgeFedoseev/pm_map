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

// pb_Object
struct pb_Object_t3489221196;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "ProBuilderMeshOpsU2DUnity4_U3CModuleU3E86524790.h"
#include "ProBuilderMeshOpsU2DUnity4_U3CModuleU3E86524790MethodDeclarations.h"
#include "ProBuilderMeshOpsU2DUnity4_pb_Shape_Generator631154472.h"
#include "ProBuilderMeshOpsU2DUnity4_pb_Shape_Generator631154472MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Boolean476798718.h"
#include "ProBuilderCoreU2DUnity4_pb_Constant2408774513.h"
#include "ProBuilderCoreU2DUnity4_pb_Constant2408774513MethodDeclarations.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Single4291918972.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176MethodDeclarations.h"
#include "ProBuilderCore-Unity4_ArrayTypes.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Math_pb_Math1931716191MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1355284822MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1355284822.h"
#include "ProBuilderMeshOpsU2DUnity4_ProBuilder2_Common_pb_Obj30747319.h"
#include "ProBuilderMeshOpsU2DUnity4_ProBuilder2_Common_pb_Obj30747319MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_IntAr633431909MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mesh4241756145MethodDeclarations.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_IntAr226981141.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// pb_Object pb_Shape_Generator::CubeGenerator(UnityEngine.Vector3)
extern Il2CppClass* pb_Constant_t2408774513_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2111573;
extern const uint32_t pb_Shape_Generator_CubeGenerator_m4172400202_MetadataUsageId;
extern "C"  pb_Object_t3489221196 * pb_Shape_Generator_CubeGenerator_m4172400202 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (pb_Shape_Generator_CubeGenerator_m4172400202_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t215400611* V_0 = NULL;
	int32_t V_1 = 0;
	pb_Object_t3489221196 * V_2 = NULL;
	pb_Object_t3489221196 * V_3 = NULL;
	bool V_4 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(pb_Constant_t2408774513_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3230847821* L_0 = ((pb_Constant_t2408774513_StaticFields*)pb_Constant_t2408774513_il2cpp_TypeInfo_var->static_fields)->get_TRIANGLES_CUBE_69();
		NullCheck(L_0);
		V_0 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))));
		V_1 = 0;
		goto IL_003e;
	}

IL_0012:
	{
		Vector3U5BU5D_t215400611* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(pb_Constant_t2408774513_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t215400611* L_3 = ((pb_Constant_t2408774513_StaticFields*)pb_Constant_t2408774513_il2cpp_TypeInfo_var->static_fields)->get_VERTICES_CUBE_68();
		Int32U5BU5D_t3230847821* L_4 = ((pb_Constant_t2408774513_StaticFields*)pb_Constant_t2408774513_il2cpp_TypeInfo_var->static_fields)->get_TRIANGLES_CUBE_69();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_7);
		Vector3_t4282066566  L_8 = ___size0;
		Vector3_t4282066566  L_9 = Vector3_Scale_m3746402337(NULL /*static, unused*/, (*(Vector3_t4282066566 *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))), L_8, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)))) = L_9;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(pb_Constant_t2408774513_il2cpp_TypeInfo_var);
		Int32U5BU5D_t3230847821* L_12 = ((pb_Constant_t2408774513_StaticFields*)pb_Constant_t2408774513_il2cpp_TypeInfo_var->static_fields)->get_TRIANGLES_CUBE_69();
		NullCheck(L_12);
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_12)->max_length))))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_0012;
		}
	}
	{
		Vector3U5BU5D_t215400611* L_14 = V_0;
		pb_Object_t3489221196 * L_15 = pb_Object_CreateInstanceWithPoints_m2145483950(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		pb_Object_t3489221196 * L_16 = V_2;
		NullCheck(L_16);
		pb_Object_SetName_m3278806185(L_16, _stringLiteral2111573, /*hidden argument*/NULL);
		pb_Object_t3489221196 * L_17 = V_2;
		V_3 = L_17;
		goto IL_0065;
	}

IL_0065:
	{
		pb_Object_t3489221196 * L_18 = V_3;
		return L_18;
	}
}
// pb_Object pb_Shape_Generator::CylinderGenerator(System.Int32,System.Single,System.Single,System.Int32)
extern Il2CppClass* Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppClass* pb_FaceU5BU5D_t1009109529_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var;
extern Il2CppClass* pb_Face_t882335176_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4010232822;
extern const uint32_t pb_Shape_Generator_CylinderGenerator_m949441454_MetadataUsageId;
extern "C"  pb_Object_t3489221196 * pb_Shape_Generator_CylinderGenerator_m949441454 (Il2CppObject * __this /* static, unused */, int32_t ___axisDivisions0, float ___radius1, float ___height2, int32_t ___heightCuts3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (pb_Shape_Generator_CylinderGenerator_m949441454_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3U5BU5D_t215400611* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	Vector3U5BU5D_t215400611* V_7 = NULL;
	pb_FaceU5BU5D_t1009109529* V_8 = NULL;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	pb_Object_t3489221196 * V_21 = NULL;
	pb_Object_t3489221196 * V_22 = NULL;
	bool V_23 = false;
	Int32U5BU5D_t3230847821* V_24 = NULL;
	{
		int32_t L_0 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)((int32_t)((int32_t)L_0%(int32_t)2))) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_23;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = ___axisDivisions0;
		___axisDivisions0 = ((int32_t)((int32_t)L_2+(int32_t)1));
	}

IL_0012:
	{
		int32_t L_3 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)((int32_t)64)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_23;
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		___axisDivisions0 = ((int32_t)64);
	}

IL_0024:
	{
		int32_t L_5 = ___axisDivisions0;
		V_0 = ((float)((float)(360.0f)/(float)(((float)((float)L_5)))));
		float L_6 = ___height2;
		int32_t L_7 = ___heightCuts3;
		V_1 = ((float)((float)L_6/(float)(((float)((float)((int32_t)((int32_t)L_7+(int32_t)1)))))));
		int32_t L_8 = ___axisDivisions0;
		V_2 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)L_8));
		V_3 = 0;
		goto IL_0081;
	}

IL_003f:
	{
		float L_9 = V_0;
		int32_t L_10 = V_3;
		V_4 = ((float)((float)((float)((float)L_9*(float)(((float)((float)L_10)))))*(float)(0.0174532924f)));
		float L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_12 = cosf(L_11);
		float L_13 = ___radius1;
		V_5 = ((float)((float)L_12*(float)L_13));
		float L_14 = V_4;
		float L_15 = sinf(L_14);
		float L_16 = ___radius1;
		V_6 = ((float)((float)L_15*(float)L_16));
		Vector3U5BU5D_t215400611* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		float L_19 = V_5;
		float L_20 = V_6;
		Vector3_t4282066566  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m2926210380(&L_21, L_19, (0.0f), L_20, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))) = L_21;
		int32_t L_22 = V_3;
		V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0081:
	{
		int32_t L_23 = V_3;
		int32_t L_24 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_23;
		if (L_25)
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_26 = ___axisDivisions0;
		int32_t L_27 = ___heightCuts3;
		int32_t L_28 = ___axisDivisions0;
		V_7 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_26*(int32_t)((int32_t)((int32_t)L_27+(int32_t)1))))*(int32_t)4))+(int32_t)((int32_t)((int32_t)L_28*(int32_t)6))))));
		int32_t L_29 = ___axisDivisions0;
		int32_t L_30 = ___heightCuts3;
		int32_t L_31 = ___axisDivisions0;
		V_8 = ((pb_FaceU5BU5D_t1009109529*)SZArrayNew(pb_FaceU5BU5D_t1009109529_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_29*(int32_t)((int32_t)((int32_t)L_30+(int32_t)1))))+(int32_t)((int32_t)((int32_t)L_31*(int32_t)2))))));
		V_9 = 0;
		V_3 = 0;
		goto IL_022a;
	}

IL_00b7:
	{
		int32_t L_32 = V_3;
		float L_33 = V_1;
		V_10 = ((float)((float)(((float)((float)L_32)))*(float)L_33));
		int32_t L_34 = V_3;
		float L_35 = V_1;
		V_11 = ((float)((float)(((float)((float)((int32_t)((int32_t)L_34+(int32_t)1)))))*(float)L_35));
		V_12 = 0;
		goto IL_0217;
	}

IL_00ce:
	{
		Vector3U5BU5D_t215400611* L_36 = V_7;
		int32_t L_37 = V_9;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, L_37);
		Vector3U5BU5D_t215400611* L_38 = V_2;
		int32_t L_39 = V_12;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, L_39);
		float L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->get_x_1();
		float L_41 = V_10;
		Vector3U5BU5D_t215400611* L_42 = V_2;
		int32_t L_43 = V_12;
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, L_43);
		float L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->get_z_3();
		Vector3_t4282066566  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector3__ctor_m2926210380(&L_45, L_40, L_41, L_44, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))) = L_45;
		Vector3U5BU5D_t215400611* L_46 = V_7;
		int32_t L_47 = V_9;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, ((int32_t)((int32_t)L_47+(int32_t)1)));
		Vector3U5BU5D_t215400611* L_48 = V_2;
		int32_t L_49 = V_12;
		NullCheck(L_48);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_48, L_49);
		float L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->get_x_1();
		float L_51 = V_11;
		Vector3U5BU5D_t215400611* L_52 = V_2;
		int32_t L_53 = V_12;
		NullCheck(L_52);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_52, L_53);
		float L_54 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53)))->get_z_3();
		Vector3_t4282066566  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m2926210380(&L_55, L_50, L_51, L_54, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_47+(int32_t)1)))))) = L_55;
		int32_t L_56 = V_12;
		int32_t L_57 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_56) == ((int32_t)((int32_t)((int32_t)L_57-(int32_t)1))))? 1 : 0);
		bool L_58 = V_23;
		if (L_58)
		{
			goto IL_01aa;
		}
	}
	{
		Vector3U5BU5D_t215400611* L_59 = V_7;
		int32_t L_60 = V_9;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, ((int32_t)((int32_t)L_60+(int32_t)2)));
		Vector3U5BU5D_t215400611* L_61 = V_2;
		int32_t L_62 = V_12;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, ((int32_t)((int32_t)L_62+(int32_t)1)));
		float L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_62+(int32_t)1)))))->get_x_1();
		float L_64 = V_10;
		Vector3U5BU5D_t215400611* L_65 = V_2;
		int32_t L_66 = V_12;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, ((int32_t)((int32_t)L_66+(int32_t)1)));
		float L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_66+(int32_t)1)))))->get_z_3();
		Vector3_t4282066566  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Vector3__ctor_m2926210380(&L_68, L_63, L_64, L_67, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_60+(int32_t)2)))))) = L_68;
		Vector3U5BU5D_t215400611* L_69 = V_7;
		int32_t L_70 = V_9;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, ((int32_t)((int32_t)L_70+(int32_t)3)));
		Vector3U5BU5D_t215400611* L_71 = V_2;
		int32_t L_72 = V_12;
		NullCheck(L_71);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_71, ((int32_t)((int32_t)L_72+(int32_t)1)));
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_72+(int32_t)1)))))->get_x_1();
		float L_74 = V_11;
		Vector3U5BU5D_t215400611* L_75 = V_2;
		int32_t L_76 = V_12;
		NullCheck(L_75);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_75, ((int32_t)((int32_t)L_76+(int32_t)1)));
		float L_77 = ((L_75)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_76+(int32_t)1)))))->get_z_3();
		Vector3_t4282066566  L_78;
		memset(&L_78, 0, sizeof(L_78));
		Vector3__ctor_m2926210380(&L_78, L_73, L_74, L_77, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_70+(int32_t)3)))))) = L_78;
		goto IL_020a;
	}

IL_01aa:
	{
		Vector3U5BU5D_t215400611* L_79 = V_7;
		int32_t L_80 = V_9;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, ((int32_t)((int32_t)L_80+(int32_t)2)));
		Vector3U5BU5D_t215400611* L_81 = V_2;
		NullCheck(L_81);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_81, 0);
		float L_82 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_1();
		float L_83 = V_10;
		Vector3U5BU5D_t215400611* L_84 = V_2;
		NullCheck(L_84);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_84, 0);
		float L_85 = ((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_z_3();
		Vector3_t4282066566  L_86;
		memset(&L_86, 0, sizeof(L_86));
		Vector3__ctor_m2926210380(&L_86, L_82, L_83, L_85, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_80+(int32_t)2)))))) = L_86;
		Vector3U5BU5D_t215400611* L_87 = V_7;
		int32_t L_88 = V_9;
		NullCheck(L_87);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_87, ((int32_t)((int32_t)L_88+(int32_t)3)));
		Vector3U5BU5D_t215400611* L_89 = V_2;
		NullCheck(L_89);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_89, 0);
		float L_90 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_1();
		float L_91 = V_11;
		Vector3U5BU5D_t215400611* L_92 = V_2;
		NullCheck(L_92);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_92, 0);
		float L_93 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_z_3();
		Vector3_t4282066566  L_94;
		memset(&L_94, 0, sizeof(L_94));
		Vector3__ctor_m2926210380(&L_94, L_90, L_91, L_93, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_88+(int32_t)3)))))) = L_94;
	}

IL_020a:
	{
		int32_t L_95 = V_9;
		V_9 = ((int32_t)((int32_t)L_95+(int32_t)4));
		int32_t L_96 = V_12;
		V_12 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_0217:
	{
		int32_t L_97 = V_12;
		int32_t L_98 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_97) < ((int32_t)L_98))? 1 : 0);
		bool L_99 = V_23;
		if (L_99)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_100 = V_3;
		V_3 = ((int32_t)((int32_t)L_100+(int32_t)1));
	}

IL_022a:
	{
		int32_t L_101 = V_3;
		int32_t L_102 = ___heightCuts3;
		V_23 = (bool)((((int32_t)L_101) < ((int32_t)((int32_t)((int32_t)L_102+(int32_t)1))))? 1 : 0);
		bool L_103 = V_23;
		if (L_103)
		{
			goto IL_00b7;
		}
	}
	{
		V_13 = 0;
		V_3 = 0;
		goto IL_02bd;
	}

IL_0240:
	{
		V_12 = 0;
		goto IL_02ab;
	}

IL_0246:
	{
		int32_t L_104 = V_3;
		int32_t L_105 = ___axisDivisions0;
		int32_t L_106 = V_12;
		V_14 = ((int32_t)((int32_t)((int32_t)((int32_t)L_104*(int32_t)((int32_t)((int32_t)L_105*(int32_t)4))))+(int32_t)L_106));
		int32_t L_107 = V_14;
		V_15 = L_107;
		int32_t L_108 = V_14;
		V_16 = ((int32_t)((int32_t)L_108+(int32_t)1));
		int32_t L_109 = V_14;
		V_17 = ((int32_t)((int32_t)L_109+(int32_t)2));
		int32_t L_110 = V_14;
		V_18 = ((int32_t)((int32_t)L_110+(int32_t)3));
		pb_FaceU5BU5D_t1009109529* L_111 = V_8;
		int32_t L_112 = V_13;
		int32_t L_113 = L_112;
		V_13 = ((int32_t)((int32_t)L_113+(int32_t)1));
		V_24 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)6));
		Int32U5BU5D_t3230847821* L_114 = V_24;
		int32_t L_115 = V_15;
		NullCheck(L_114);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_114, 0);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_115);
		Int32U5BU5D_t3230847821* L_116 = V_24;
		int32_t L_117 = V_16;
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, 1);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_117);
		Int32U5BU5D_t3230847821* L_118 = V_24;
		int32_t L_119 = V_17;
		NullCheck(L_118);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_118, 2);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_119);
		Int32U5BU5D_t3230847821* L_120 = V_24;
		int32_t L_121 = V_16;
		NullCheck(L_120);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_120, 3);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_121);
		Int32U5BU5D_t3230847821* L_122 = V_24;
		int32_t L_123 = V_18;
		NullCheck(L_122);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_122, 4);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_123);
		Int32U5BU5D_t3230847821* L_124 = V_24;
		int32_t L_125 = V_17;
		NullCheck(L_124);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_124, 5);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_125);
		Int32U5BU5D_t3230847821* L_126 = V_24;
		pb_Face_t882335176 * L_127 = (pb_Face_t882335176 *)il2cpp_codegen_object_new(pb_Face_t882335176_il2cpp_TypeInfo_var);
		pb_Face__ctor_m2838294026(L_127, L_126, /*hidden argument*/NULL);
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, L_113);
		ArrayElementTypeCheck (L_111, L_127);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (pb_Face_t882335176 *)L_127);
		int32_t L_128 = V_12;
		V_12 = ((int32_t)((int32_t)L_128+(int32_t)4));
	}

IL_02ab:
	{
		int32_t L_129 = V_12;
		int32_t L_130 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_129) < ((int32_t)((int32_t)((int32_t)L_130*(int32_t)4))))? 1 : 0);
		bool L_131 = V_23;
		if (L_131)
		{
			goto IL_0246;
		}
	}
	{
		int32_t L_132 = V_3;
		V_3 = ((int32_t)((int32_t)L_132+(int32_t)1));
	}

IL_02bd:
	{
		int32_t L_133 = V_3;
		int32_t L_134 = ___heightCuts3;
		V_23 = (bool)((((int32_t)L_133) < ((int32_t)((int32_t)((int32_t)L_134+(int32_t)1))))? 1 : 0);
		bool L_135 = V_23;
		if (L_135)
		{
			goto IL_0240;
		}
	}
	{
		int32_t L_136 = ___axisDivisions0;
		int32_t L_137 = ___heightCuts3;
		V_19 = ((int32_t)((int32_t)((int32_t)((int32_t)L_136*(int32_t)((int32_t)((int32_t)L_137+(int32_t)1))))*(int32_t)4));
		int32_t L_138 = ___axisDivisions0;
		int32_t L_139 = ___heightCuts3;
		V_20 = ((int32_t)((int32_t)L_138*(int32_t)((int32_t)((int32_t)L_139+(int32_t)1))));
		V_12 = 0;
		goto IL_04d3;
	}

IL_02e4:
	{
		Vector3U5BU5D_t215400611* L_140 = V_7;
		int32_t L_141 = V_19;
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, L_141);
		Vector3U5BU5D_t215400611* L_142 = V_2;
		int32_t L_143 = V_12;
		NullCheck(L_142);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_142, L_143);
		float L_144 = ((L_142)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_143)))->get_x_1();
		Vector3U5BU5D_t215400611* L_145 = V_2;
		int32_t L_146 = V_12;
		NullCheck(L_145);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_145, L_146);
		float L_147 = ((L_145)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_146)))->get_z_3();
		Vector3_t4282066566  L_148;
		memset(&L_148, 0, sizeof(L_148));
		Vector3__ctor_m2926210380(&L_148, L_144, (0.0f), L_147, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_141)))) = L_148;
		Vector3U5BU5D_t215400611* L_149 = V_7;
		int32_t L_150 = V_19;
		NullCheck(L_149);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_149, ((int32_t)((int32_t)L_150+(int32_t)1)));
		Vector3_t4282066566  L_151 = Vector3_get_zero_m2017759730(NULL /*static, unused*/, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_149)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_150+(int32_t)1)))))) = L_151;
		int32_t L_152 = V_12;
		int32_t L_153 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_152) == ((int32_t)((int32_t)((int32_t)L_153-(int32_t)1))))? 1 : 0);
		bool L_154 = V_23;
		if (L_154)
		{
			goto IL_0373;
		}
	}
	{
		Vector3U5BU5D_t215400611* L_155 = V_7;
		int32_t L_156 = V_19;
		NullCheck(L_155);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_155, ((int32_t)((int32_t)L_156+(int32_t)2)));
		Vector3U5BU5D_t215400611* L_157 = V_2;
		int32_t L_158 = V_12;
		NullCheck(L_157);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_157, ((int32_t)((int32_t)L_158+(int32_t)1)));
		float L_159 = ((L_157)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_158+(int32_t)1)))))->get_x_1();
		Vector3U5BU5D_t215400611* L_160 = V_2;
		int32_t L_161 = V_12;
		NullCheck(L_160);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_160, ((int32_t)((int32_t)L_161+(int32_t)1)));
		float L_162 = ((L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_161+(int32_t)1)))))->get_z_3();
		Vector3_t4282066566  L_163;
		memset(&L_163, 0, sizeof(L_163));
		Vector3__ctor_m2926210380(&L_163, L_159, (0.0f), L_162, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_155)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_156+(int32_t)2)))))) = L_163;
		goto IL_03a5;
	}

IL_0373:
	{
		Vector3U5BU5D_t215400611* L_164 = V_7;
		int32_t L_165 = V_19;
		NullCheck(L_164);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_164, ((int32_t)((int32_t)L_165+(int32_t)2)));
		Vector3U5BU5D_t215400611* L_166 = V_2;
		NullCheck(L_166);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_166, 0);
		float L_167 = ((L_166)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_1();
		Vector3U5BU5D_t215400611* L_168 = V_2;
		NullCheck(L_168);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_168, 0);
		float L_169 = ((L_168)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_z_3();
		Vector3_t4282066566  L_170;
		memset(&L_170, 0, sizeof(L_170));
		Vector3__ctor_m2926210380(&L_170, L_167, (0.0f), L_169, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_164)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_165+(int32_t)2)))))) = L_170;
	}

IL_03a5:
	{
		pb_FaceU5BU5D_t1009109529* L_171 = V_8;
		int32_t L_172 = V_20;
		int32_t L_173 = V_12;
		V_24 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)3));
		Int32U5BU5D_t3230847821* L_174 = V_24;
		int32_t L_175 = V_19;
		NullCheck(L_174);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_174, 0);
		(L_174)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)((int32_t)L_175+(int32_t)2)));
		Int32U5BU5D_t3230847821* L_176 = V_24;
		int32_t L_177 = V_19;
		NullCheck(L_176);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_176, 1);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int32_t)L_177+(int32_t)1)));
		Int32U5BU5D_t3230847821* L_178 = V_24;
		int32_t L_179 = V_19;
		NullCheck(L_178);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_178, 2);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_179);
		Int32U5BU5D_t3230847821* L_180 = V_24;
		pb_Face_t882335176 * L_181 = (pb_Face_t882335176 *)il2cpp_codegen_object_new(pb_Face_t882335176_il2cpp_TypeInfo_var);
		pb_Face__ctor_m2838294026(L_181, L_180, /*hidden argument*/NULL);
		NullCheck(L_171);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_171, ((int32_t)((int32_t)L_172+(int32_t)L_173)));
		ArrayElementTypeCheck (L_171, L_181);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_172+(int32_t)L_173))), (pb_Face_t882335176 *)L_181);
		int32_t L_182 = V_19;
		V_19 = ((int32_t)((int32_t)L_182+(int32_t)3));
		Vector3U5BU5D_t215400611* L_183 = V_7;
		int32_t L_184 = V_19;
		NullCheck(L_183);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_183, L_184);
		Vector3U5BU5D_t215400611* L_185 = V_2;
		int32_t L_186 = V_12;
		NullCheck(L_185);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_185, L_186);
		float L_187 = ((L_185)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_186)))->get_x_1();
		float L_188 = ___height2;
		Vector3U5BU5D_t215400611* L_189 = V_2;
		int32_t L_190 = V_12;
		NullCheck(L_189);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_189, L_190);
		float L_191 = ((L_189)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_190)))->get_z_3();
		Vector3_t4282066566  L_192;
		memset(&L_192, 0, sizeof(L_192));
		Vector3__ctor_m2926210380(&L_192, L_187, L_188, L_191, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_183)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_184)))) = L_192;
		Vector3U5BU5D_t215400611* L_193 = V_7;
		int32_t L_194 = V_19;
		NullCheck(L_193);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_193, ((int32_t)((int32_t)L_194+(int32_t)1)));
		float L_195 = ___height2;
		Vector3_t4282066566  L_196;
		memset(&L_196, 0, sizeof(L_196));
		Vector3__ctor_m2926210380(&L_196, (0.0f), L_195, (0.0f), /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_194+(int32_t)1)))))) = L_196;
		int32_t L_197 = V_12;
		int32_t L_198 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_197) == ((int32_t)((int32_t)((int32_t)L_198-(int32_t)1))))? 1 : 0);
		bool L_199 = V_23;
		if (L_199)
		{
			goto IL_0469;
		}
	}
	{
		Vector3U5BU5D_t215400611* L_200 = V_7;
		int32_t L_201 = V_19;
		NullCheck(L_200);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_200, ((int32_t)((int32_t)L_201+(int32_t)2)));
		Vector3U5BU5D_t215400611* L_202 = V_2;
		int32_t L_203 = V_12;
		NullCheck(L_202);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_202, ((int32_t)((int32_t)L_203+(int32_t)1)));
		float L_204 = ((L_202)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_203+(int32_t)1)))))->get_x_1();
		float L_205 = ___height2;
		Vector3U5BU5D_t215400611* L_206 = V_2;
		int32_t L_207 = V_12;
		NullCheck(L_206);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_206, ((int32_t)((int32_t)L_207+(int32_t)1)));
		float L_208 = ((L_206)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_207+(int32_t)1)))))->get_z_3();
		Vector3_t4282066566  L_209;
		memset(&L_209, 0, sizeof(L_209));
		Vector3__ctor_m2926210380(&L_209, L_204, L_205, L_208, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_200)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_201+(int32_t)2)))))) = L_209;
		goto IL_0497;
	}

IL_0469:
	{
		Vector3U5BU5D_t215400611* L_210 = V_7;
		int32_t L_211 = V_19;
		NullCheck(L_210);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_210, ((int32_t)((int32_t)L_211+(int32_t)2)));
		Vector3U5BU5D_t215400611* L_212 = V_2;
		NullCheck(L_212);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_212, 0);
		float L_213 = ((L_212)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_x_1();
		float L_214 = ___height2;
		Vector3U5BU5D_t215400611* L_215 = V_2;
		NullCheck(L_215);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_215, 0);
		float L_216 = ((L_215)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->get_z_3();
		Vector3_t4282066566  L_217;
		memset(&L_217, 0, sizeof(L_217));
		Vector3__ctor_m2926210380(&L_217, L_213, L_214, L_216, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_210)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_211+(int32_t)2)))))) = L_217;
	}

IL_0497:
	{
		pb_FaceU5BU5D_t1009109529* L_218 = V_8;
		int32_t L_219 = V_20;
		int32_t L_220 = V_12;
		int32_t L_221 = ___axisDivisions0;
		V_24 = ((Int32U5BU5D_t3230847821*)SZArrayNew(Int32U5BU5D_t3230847821_il2cpp_TypeInfo_var, (uint32_t)3));
		Int32U5BU5D_t3230847821* L_222 = V_24;
		int32_t L_223 = V_19;
		NullCheck(L_222);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_222, 0);
		(L_222)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_223);
		Int32U5BU5D_t3230847821* L_224 = V_24;
		int32_t L_225 = V_19;
		NullCheck(L_224);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_224, 1);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)((int32_t)L_225+(int32_t)1)));
		Int32U5BU5D_t3230847821* L_226 = V_24;
		int32_t L_227 = V_19;
		NullCheck(L_226);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_226, 2);
		(L_226)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)((int32_t)L_227+(int32_t)2)));
		Int32U5BU5D_t3230847821* L_228 = V_24;
		pb_Face_t882335176 * L_229 = (pb_Face_t882335176 *)il2cpp_codegen_object_new(pb_Face_t882335176_il2cpp_TypeInfo_var);
		pb_Face__ctor_m2838294026(L_229, L_228, /*hidden argument*/NULL);
		NullCheck(L_218);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_218, ((int32_t)((int32_t)L_219+(int32_t)((int32_t)((int32_t)L_220+(int32_t)L_221)))));
		ArrayElementTypeCheck (L_218, L_229);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_219+(int32_t)((int32_t)((int32_t)L_220+(int32_t)L_221))))), (pb_Face_t882335176 *)L_229);
		int32_t L_230 = V_19;
		V_19 = ((int32_t)((int32_t)L_230+(int32_t)3));
		int32_t L_231 = V_12;
		V_12 = ((int32_t)((int32_t)L_231+(int32_t)1));
	}

IL_04d3:
	{
		int32_t L_232 = V_12;
		int32_t L_233 = ___axisDivisions0;
		V_23 = (bool)((((int32_t)L_232) < ((int32_t)L_233))? 1 : 0);
		bool L_234 = V_23;
		if (L_234)
		{
			goto IL_02e4;
		}
	}
	{
		Vector3U5BU5D_t215400611* L_235 = V_7;
		pb_FaceU5BU5D_t1009109529* L_236 = V_8;
		pb_Object_t3489221196 * L_237 = pb_Object_CreateInstanceWithVerticesFaces_m187637813(NULL /*static, unused*/, L_235, L_236, /*hidden argument*/NULL);
		V_21 = L_237;
		pb_Object_t3489221196 * L_238 = V_21;
		NullCheck(L_238);
		pb_Object_SetName_m3278806185(L_238, _stringLiteral4010232822, /*hidden argument*/NULL);
		pb_Object_t3489221196 * L_239 = V_21;
		V_22 = L_239;
		goto IL_04ff;
	}

IL_04ff:
	{
		pb_Object_t3489221196 * L_240 = V_22;
		return L_240;
	}
}
// pb_Object pb_Shape_Generator::PipeGenerator(System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern Il2CppClass* Vector2U5BU5D_t4024180168_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1355284822_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m4250921089_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m304324443_MethodInfo_var;
extern const MethodInfo* List_1_ToArray_m813680311_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2487758;
extern const uint32_t pb_Shape_Generator_PipeGenerator_m1382649727_MetadataUsageId;
extern "C"  pb_Object_t3489221196 * pb_Shape_Generator_PipeGenerator_m1382649727 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___height1, float ___thickness2, int32_t ___subdivAxis3, int32_t ___subdivHeight4, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (pb_Shape_Generator_PipeGenerator_m1382649727_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2U5BU5D_t4024180168* V_0 = NULL;
	Vector2U5BU5D_t4024180168* V_1 = NULL;
	int32_t V_2 = 0;
	List_1_t1355284822 * V_3 = NULL;
	Vector2_t4282066565  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector2_t4282066565  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t4282066565  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t4282066565  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	Vector3U5BU5D_t215400611* V_11 = NULL;
	Vector3U5BU5D_t215400611* V_12 = NULL;
	Vector3U5BU5D_t215400611* V_13 = NULL;
	Vector3U5BU5D_t215400611* V_14 = NULL;
	pb_Object_t3489221196 * V_15 = NULL;
	pb_Object_t3489221196 * V_16 = NULL;
	bool V_17 = false;
	Vector3U5BU5D_t215400611* V_18 = NULL;
	Vector2_t4282066565  G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	Vector2_t4282066565  G_B11_0;
	memset(&G_B11_0, 0, sizeof(G_B11_0));
	Vector2_t4282066565  G_B19_0;
	memset(&G_B19_0, 0, sizeof(G_B19_0));
	Vector2_t4282066565  G_B22_0;
	memset(&G_B22_0, 0, sizeof(G_B22_0));
	{
		int32_t L_0 = ___subdivAxis3;
		V_0 = ((Vector2U5BU5D_t4024180168*)SZArrayNew(Vector2U5BU5D_t4024180168_il2cpp_TypeInfo_var, (uint32_t)L_0));
		int32_t L_1 = ___subdivAxis3;
		V_1 = ((Vector2U5BU5D_t4024180168*)SZArrayNew(Vector2U5BU5D_t4024180168_il2cpp_TypeInfo_var, (uint32_t)L_1));
		V_2 = 0;
		goto IL_005f;
	}

IL_0013:
	{
		Vector2U5BU5D_t4024180168* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		float L_4 = ___radius0;
		int32_t L_5 = V_2;
		int32_t L_6 = ___subdivAxis3;
		Vector2_t4282066565  L_7 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_8 = pb_Math_PointInCircumference_m2349024030(NULL /*static, unused*/, L_4, ((float)((float)(((float)((float)L_5)))*(float)((float)((float)(360.0f)/(float)(((float)((float)L_6))))))), L_7, /*hidden argument*/NULL);
		(*(Vector2_t4282066565 *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)))) = L_8;
		Vector2U5BU5D_t4024180168* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		float L_11 = ___radius0;
		float L_12 = ___thickness2;
		int32_t L_13 = V_2;
		int32_t L_14 = ___subdivAxis3;
		Vector2_t4282066565  L_15 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t4282066565  L_16 = pb_Math_PointInCircumference_m2349024030(NULL /*static, unused*/, ((float)((float)L_11-(float)L_12)), ((float)((float)(((float)((float)L_13)))*(float)((float)((float)(360.0f)/(float)(((float)((float)L_14))))))), L_15, /*hidden argument*/NULL);
		(*(Vector2_t4282066565 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))) = L_16;
		int32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_005f:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = ___subdivAxis3;
		V_17 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_17;
		if (L_20)
		{
			goto IL_0013;
		}
	}
	{
		List_1_t1355284822 * L_21 = (List_1_t1355284822 *)il2cpp_codegen_object_new(List_1_t1355284822_il2cpp_TypeInfo_var);
		List_1__ctor_m4250921089(L_21, /*hidden argument*/List_1__ctor_m4250921089_MethodInfo_var);
		V_3 = L_21;
		int32_t L_22 = ___subdivHeight4;
		___subdivHeight4 = ((int32_t)((int32_t)L_22+(int32_t)1));
		V_2 = 0;
		goto IL_025c;
	}

IL_007c:
	{
		int32_t L_23 = V_2;
		float L_24 = ___height1;
		int32_t L_25 = ___subdivHeight4;
		V_8 = ((float)((float)(((float)((float)L_23)))*(float)((float)((float)L_24/(float)(((float)((float)L_25)))))));
		int32_t L_26 = V_2;
		float L_27 = ___height1;
		int32_t L_28 = ___subdivHeight4;
		V_9 = ((float)((float)(((float)((float)((int32_t)((int32_t)L_26+(int32_t)1)))))*(float)((float)((float)L_27/(float)(((float)((float)L_28)))))));
		V_10 = 0;
		goto IL_0249;
	}

IL_009b:
	{
		Vector2U5BU5D_t4024180168* L_29 = V_0;
		int32_t L_30 = V_10;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, L_30);
		V_4 = (*(Vector2_t4282066565 *)((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))));
		int32_t L_31 = V_10;
		int32_t L_32 = ___subdivAxis3;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)L_32-(int32_t)1)))))
		{
			goto IL_00c0;
		}
	}
	{
		Vector2U5BU5D_t4024180168* L_33 = V_0;
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 0);
		G_B8_0 = (*(Vector2_t4282066565 *)((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		goto IL_00cf;
	}

IL_00c0:
	{
		Vector2U5BU5D_t4024180168* L_34 = V_0;
		int32_t L_35 = V_10;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, ((int32_t)((int32_t)L_35+(int32_t)1)));
		G_B8_0 = (*(Vector2_t4282066565 *)((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_35+(int32_t)1))))));
	}

IL_00cf:
	{
		V_5 = G_B8_0;
		V_18 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)4));
		Vector3U5BU5D_t215400611* L_36 = V_18;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		float L_37 = (&V_5)->get_x_1();
		float L_38 = V_8;
		float L_39 = (&V_5)->get_y_2();
		Vector3_t4282066566  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Vector3__ctor_m2926210380(&L_40, L_37, L_38, L_39, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))) = L_40;
		Vector3U5BU5D_t215400611* L_41 = V_18;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 1);
		float L_42 = (&V_4)->get_x_1();
		float L_43 = V_8;
		float L_44 = (&V_4)->get_y_2();
		Vector3_t4282066566  L_45;
		memset(&L_45, 0, sizeof(L_45));
		Vector3__ctor_m2926210380(&L_45, L_42, L_43, L_44, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))) = L_45;
		Vector3U5BU5D_t215400611* L_46 = V_18;
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 2);
		float L_47 = (&V_5)->get_x_1();
		float L_48 = V_9;
		float L_49 = (&V_5)->get_y_2();
		Vector3_t4282066566  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector3__ctor_m2926210380(&L_50, L_47, L_48, L_49, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))) = L_50;
		Vector3U5BU5D_t215400611* L_51 = V_18;
		NullCheck(L_51);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_51, 3);
		float L_52 = (&V_4)->get_x_1();
		float L_53 = V_9;
		float L_54 = (&V_4)->get_y_2();
		Vector3_t4282066566  L_55;
		memset(&L_55, 0, sizeof(L_55));
		Vector3__ctor_m2926210380(&L_55, L_52, L_53, L_54, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))) = L_55;
		Vector3U5BU5D_t215400611* L_56 = V_18;
		V_11 = L_56;
		Vector2U5BU5D_t4024180168* L_57 = V_1;
		int32_t L_58 = V_10;
		NullCheck(L_57);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_57, L_58);
		V_4 = (*(Vector2_t4282066565 *)((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58))));
		int32_t L_59 = V_10;
		int32_t L_60 = ___subdivAxis3;
		if ((((int32_t)L_59) < ((int32_t)((int32_t)((int32_t)L_60-(int32_t)1)))))
		{
			goto IL_018a;
		}
	}
	{
		Vector2U5BU5D_t4024180168* L_61 = V_1;
		NullCheck(L_61);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_61, 0);
		G_B11_0 = (*(Vector2_t4282066565 *)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		goto IL_0199;
	}

IL_018a:
	{
		Vector2U5BU5D_t4024180168* L_62 = V_1;
		int32_t L_63 = V_10;
		NullCheck(L_62);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_62, ((int32_t)((int32_t)L_63+(int32_t)1)));
		G_B11_0 = (*(Vector2_t4282066565 *)((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_63+(int32_t)1))))));
	}

IL_0199:
	{
		V_5 = G_B11_0;
		V_18 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)4));
		Vector3U5BU5D_t215400611* L_64 = V_18;
		NullCheck(L_64);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_64, 0);
		float L_65 = (&V_4)->get_x_1();
		float L_66 = V_8;
		float L_67 = (&V_4)->get_y_2();
		Vector3_t4282066566  L_68;
		memset(&L_68, 0, sizeof(L_68));
		Vector3__ctor_m2926210380(&L_68, L_65, L_66, L_67, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_64)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))) = L_68;
		Vector3U5BU5D_t215400611* L_69 = V_18;
		NullCheck(L_69);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_69, 1);
		float L_70 = (&V_5)->get_x_1();
		float L_71 = V_8;
		float L_72 = (&V_5)->get_y_2();
		Vector3_t4282066566  L_73;
		memset(&L_73, 0, sizeof(L_73));
		Vector3__ctor_m2926210380(&L_73, L_70, L_71, L_72, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))) = L_73;
		Vector3U5BU5D_t215400611* L_74 = V_18;
		NullCheck(L_74);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_74, 2);
		float L_75 = (&V_4)->get_x_1();
		float L_76 = V_9;
		float L_77 = (&V_4)->get_y_2();
		Vector3_t4282066566  L_78;
		memset(&L_78, 0, sizeof(L_78));
		Vector3__ctor_m2926210380(&L_78, L_75, L_76, L_77, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))) = L_78;
		Vector3U5BU5D_t215400611* L_79 = V_18;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, 3);
		float L_80 = (&V_5)->get_x_1();
		float L_81 = V_9;
		float L_82 = (&V_5)->get_y_2();
		Vector3_t4282066566  L_83;
		memset(&L_83, 0, sizeof(L_83));
		Vector3__ctor_m2926210380(&L_83, L_80, L_81, L_82, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))) = L_83;
		Vector3U5BU5D_t215400611* L_84 = V_18;
		V_12 = L_84;
		List_1_t1355284822 * L_85 = V_3;
		Vector3U5BU5D_t215400611* L_86 = V_11;
		NullCheck(L_85);
		List_1_AddRange_m304324443(L_85, (Il2CppObject*)(Il2CppObject*)L_86, /*hidden argument*/List_1_AddRange_m304324443_MethodInfo_var);
		List_1_t1355284822 * L_87 = V_3;
		Vector3U5BU5D_t215400611* L_88 = V_12;
		NullCheck(L_87);
		List_1_AddRange_m304324443(L_87, (Il2CppObject*)(Il2CppObject*)L_88, /*hidden argument*/List_1_AddRange_m304324443_MethodInfo_var);
		int32_t L_89 = V_10;
		V_10 = ((int32_t)((int32_t)L_89+(int32_t)1));
	}

IL_0249:
	{
		int32_t L_90 = V_10;
		int32_t L_91 = ___subdivAxis3;
		V_17 = (bool)((((int32_t)L_90) < ((int32_t)L_91))? 1 : 0);
		bool L_92 = V_17;
		if (L_92)
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_93 = V_2;
		V_2 = ((int32_t)((int32_t)L_93+(int32_t)1));
	}

IL_025c:
	{
		int32_t L_94 = V_2;
		int32_t L_95 = ___subdivHeight4;
		V_17 = (bool)((((int32_t)L_94) < ((int32_t)L_95))? 1 : 0);
		bool L_96 = V_17;
		if (L_96)
		{
			goto IL_007c;
		}
	}
	{
		V_2 = 0;
		goto IL_041f;
	}

IL_0271:
	{
		Vector2U5BU5D_t4024180168* L_97 = V_0;
		int32_t L_98 = V_2;
		NullCheck(L_97);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_97, L_98);
		V_4 = (*(Vector2_t4282066565 *)((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98))));
		int32_t L_99 = V_2;
		int32_t L_100 = ___subdivAxis3;
		if ((((int32_t)L_99) < ((int32_t)((int32_t)((int32_t)L_100-(int32_t)1)))))
		{
			goto IL_0294;
		}
	}
	{
		Vector2U5BU5D_t4024180168* L_101 = V_0;
		NullCheck(L_101);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_101, 0);
		G_B19_0 = (*(Vector2_t4282066565 *)((L_101)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		goto IL_02a2;
	}

IL_0294:
	{
		Vector2U5BU5D_t4024180168* L_102 = V_0;
		int32_t L_103 = V_2;
		NullCheck(L_102);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_102, ((int32_t)((int32_t)L_103+(int32_t)1)));
		G_B19_0 = (*(Vector2_t4282066565 *)((L_102)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_103+(int32_t)1))))));
	}

IL_02a2:
	{
		V_5 = G_B19_0;
		Vector2U5BU5D_t4024180168* L_104 = V_1;
		int32_t L_105 = V_2;
		NullCheck(L_104);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_104, L_105);
		V_6 = (*(Vector2_t4282066565 *)((L_104)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_105))));
		int32_t L_106 = V_2;
		int32_t L_107 = ___subdivAxis3;
		if ((((int32_t)L_106) < ((int32_t)((int32_t)((int32_t)L_107-(int32_t)1)))))
		{
			goto IL_02c7;
		}
	}
	{
		Vector2U5BU5D_t4024180168* L_108 = V_1;
		NullCheck(L_108);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_108, 0);
		G_B22_0 = (*(Vector2_t4282066565 *)((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
		goto IL_02d5;
	}

IL_02c7:
	{
		Vector2U5BU5D_t4024180168* L_109 = V_1;
		int32_t L_110 = V_2;
		NullCheck(L_109);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_109, ((int32_t)((int32_t)L_110+(int32_t)1)));
		G_B22_0 = (*(Vector2_t4282066565 *)((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_110+(int32_t)1))))));
	}

IL_02d5:
	{
		V_7 = G_B22_0;
		V_18 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)4));
		Vector3U5BU5D_t215400611* L_111 = V_18;
		NullCheck(L_111);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_111, 0);
		float L_112 = (&V_5)->get_x_1();
		float L_113 = ___height1;
		float L_114 = (&V_5)->get_y_2();
		Vector3_t4282066566  L_115;
		memset(&L_115, 0, sizeof(L_115));
		Vector3__ctor_m2926210380(&L_115, L_112, L_113, L_114, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))) = L_115;
		Vector3U5BU5D_t215400611* L_116 = V_18;
		NullCheck(L_116);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_116, 1);
		float L_117 = (&V_4)->get_x_1();
		float L_118 = ___height1;
		float L_119 = (&V_4)->get_y_2();
		Vector3_t4282066566  L_120;
		memset(&L_120, 0, sizeof(L_120));
		Vector3__ctor_m2926210380(&L_120, L_117, L_118, L_119, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_116)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))) = L_120;
		Vector3U5BU5D_t215400611* L_121 = V_18;
		NullCheck(L_121);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_121, 2);
		float L_122 = (&V_7)->get_x_1();
		float L_123 = ___height1;
		float L_124 = (&V_7)->get_y_2();
		Vector3_t4282066566  L_125;
		memset(&L_125, 0, sizeof(L_125));
		Vector3__ctor_m2926210380(&L_125, L_122, L_123, L_124, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))) = L_125;
		Vector3U5BU5D_t215400611* L_126 = V_18;
		NullCheck(L_126);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_126, 3);
		float L_127 = (&V_6)->get_x_1();
		float L_128 = ___height1;
		float L_129 = (&V_6)->get_y_2();
		Vector3_t4282066566  L_130;
		memset(&L_130, 0, sizeof(L_130));
		Vector3__ctor_m2926210380(&L_130, L_127, L_128, L_129, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_126)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))) = L_130;
		Vector3U5BU5D_t215400611* L_131 = V_18;
		V_13 = L_131;
		V_18 = ((Vector3U5BU5D_t215400611*)SZArrayNew(Vector3U5BU5D_t215400611_il2cpp_TypeInfo_var, (uint32_t)4));
		Vector3U5BU5D_t215400611* L_132 = V_18;
		NullCheck(L_132);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_132, 0);
		float L_133 = (&V_4)->get_x_1();
		float L_134 = (&V_4)->get_y_2();
		Vector3_t4282066566  L_135;
		memset(&L_135, 0, sizeof(L_135));
		Vector3__ctor_m2926210380(&L_135, L_133, (0.0f), L_134, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))) = L_135;
		Vector3U5BU5D_t215400611* L_136 = V_18;
		NullCheck(L_136);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_136, 1);
		float L_137 = (&V_5)->get_x_1();
		float L_138 = (&V_5)->get_y_2();
		Vector3_t4282066566  L_139;
		memset(&L_139, 0, sizeof(L_139));
		Vector3__ctor_m2926210380(&L_139, L_137, (0.0f), L_138, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_136)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))) = L_139;
		Vector3U5BU5D_t215400611* L_140 = V_18;
		NullCheck(L_140);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_140, 2);
		float L_141 = (&V_6)->get_x_1();
		float L_142 = (&V_6)->get_y_2();
		Vector3_t4282066566  L_143;
		memset(&L_143, 0, sizeof(L_143));
		Vector3__ctor_m2926210380(&L_143, L_141, (0.0f), L_142, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))) = L_143;
		Vector3U5BU5D_t215400611* L_144 = V_18;
		NullCheck(L_144);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_144, 3);
		float L_145 = (&V_7)->get_x_1();
		float L_146 = (&V_7)->get_y_2();
		Vector3_t4282066566  L_147;
		memset(&L_147, 0, sizeof(L_147));
		Vector3__ctor_m2926210380(&L_147, L_145, (0.0f), L_146, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))) = L_147;
		Vector3U5BU5D_t215400611* L_148 = V_18;
		V_14 = L_148;
		List_1_t1355284822 * L_149 = V_3;
		Vector3U5BU5D_t215400611* L_150 = V_14;
		NullCheck(L_149);
		List_1_AddRange_m304324443(L_149, (Il2CppObject*)(Il2CppObject*)L_150, /*hidden argument*/List_1_AddRange_m304324443_MethodInfo_var);
		List_1_t1355284822 * L_151 = V_3;
		Vector3U5BU5D_t215400611* L_152 = V_13;
		NullCheck(L_151);
		List_1_AddRange_m304324443(L_151, (Il2CppObject*)(Il2CppObject*)L_152, /*hidden argument*/List_1_AddRange_m304324443_MethodInfo_var);
		int32_t L_153 = V_2;
		V_2 = ((int32_t)((int32_t)L_153+(int32_t)1));
	}

IL_041f:
	{
		int32_t L_154 = V_2;
		int32_t L_155 = ___subdivAxis3;
		V_17 = (bool)((((int32_t)L_154) < ((int32_t)L_155))? 1 : 0);
		bool L_156 = V_17;
		if (L_156)
		{
			goto IL_0271;
		}
	}
	{
		List_1_t1355284822 * L_157 = V_3;
		NullCheck(L_157);
		Vector3U5BU5D_t215400611* L_158 = List_1_ToArray_m813680311(L_157, /*hidden argument*/List_1_ToArray_m813680311_MethodInfo_var);
		pb_Object_t3489221196 * L_159 = pb_Object_CreateInstanceWithPoints_m2145483950(NULL /*static, unused*/, L_158, /*hidden argument*/NULL);
		V_15 = L_159;
		pb_Object_t3489221196 * L_160 = V_15;
		NullCheck(L_160);
		pb_Object_SetName_m3278806185(L_160, _stringLiteral2487758, /*hidden argument*/NULL);
		pb_Object_t3489221196 * L_161 = V_15;
		V_16 = L_161;
		goto IL_044c;
	}

IL_044c:
	{
		pb_Object_t3489221196 * L_162 = V_16;
		return L_162;
	}
}
// UnityEngine.Vector3[] ProBuilder2.Common.pb_Object_Utility::VerticesInWorldSpace(pb_Object,System.Int32[])
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2526034383;
extern const uint32_t pb_Object_Utility_VerticesInWorldSpace_m1830969243_MetadataUsageId;
extern "C"  Vector3U5BU5D_t215400611* pb_Object_Utility_VerticesInWorldSpace_m1830969243 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, Int32U5BU5D_t3230847821* ___indices1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (pb_Object_Utility_VerticesInWorldSpace_m1830969243_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3U5BU5D_t215400611* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_t215400611* V_2 = NULL;
	bool V_3 = false;
	{
		Int32U5BU5D_t3230847821* L_0 = ___indices1;
		V_3 = (bool)((((int32_t)((((Il2CppObject*)(Int32U5BU5D_t3230847821*)L_0) == ((Il2CppObject*)(Il2CppObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3123317694(NULL /*static, unused*/, _stringLiteral2526034383, /*hidden argument*/NULL);
	}

IL_0017:
	{
		pb_Object_t3489221196 * L_2 = ___pb0;
		Int32U5BU5D_t3230847821* L_3 = ___indices1;
		NullCheck(L_2);
		Vector3U5BU5D_t215400611* L_4 = pb_Object_GetVertices_m2116471394(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		goto IL_004a;
	}

IL_0023:
	{
		Vector3U5BU5D_t215400611* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		pb_Object_t3489221196 * L_7 = ___pb0;
		NullCheck(L_7);
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(L_7, /*hidden argument*/NULL);
		Vector3U5BU5D_t215400611* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		NullCheck(L_8);
		Vector3_t4282066566  L_11 = Transform_TransformPoint_m437395512(L_8, (*(Vector3_t4282066566 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))), /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))) = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_004a:
	{
		int32_t L_13 = V_1;
		Vector3U5BU5D_t215400611* L_14 = V_0;
		NullCheck(L_14);
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length))))))? 1 : 0);
		bool L_15 = V_3;
		if (L_15)
		{
			goto IL_0023;
		}
	}
	{
		Vector3U5BU5D_t215400611* L_16 = V_0;
		V_2 = L_16;
		goto IL_0058;
	}

IL_0058:
	{
		Vector3U5BU5D_t215400611* L_17 = V_2;
		return L_17;
	}
}
// System.Void ProBuilder2.Common.pb_Object_Utility::TranslateVertices(pb_Object,System.Int32[],UnityEngine.Vector3)
extern "C"  void pb_Object_Utility_TranslateVertices_m3995296169 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, Int32U5BU5D_t3230847821* ___selectedTriangles1, Vector3_t4282066566  ___offset2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	Int32U5BU5D_t3230847821* V_1 = NULL;
	Vector3U5BU5D_t215400611* V_2 = NULL;
	bool V_3 = false;
	{
		V_0 = 0;
		pb_Object_t3489221196 * L_0 = ___pb0;
		NullCheck(L_0);
		pb_IntArrayU5BU5D_t3984225016* L_1 = pb_Object_get_sharedIndices_m1068468516(L_0, /*hidden argument*/NULL);
		Int32U5BU5D_t3230847821* L_2 = ___selectedTriangles1;
		Int32U5BU5D_t3230847821* L_3 = pb_IntArrayUtility_AllIndicesWithValues_m3522225629(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		pb_Object_t3489221196 * L_4 = ___pb0;
		NullCheck(L_4);
		Vector3U5BU5D_t215400611* L_5 = pb_Object_get_vertices_m3642473152(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		V_0 = 0;
		goto IL_0039;
	}

IL_001b:
	{
		Vector3U5BU5D_t215400611* L_6 = V_2;
		Int32U5BU5D_t3230847821* L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_10);
		Vector3_t4282066566 * L_11 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		Vector3_t4282066566  L_12 = ___offset2;
		Vector3_t4282066566  L_13 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, (*(Vector3_t4282066566 *)L_11), L_12, /*hidden argument*/NULL);
		(*(Vector3_t4282066566 *)L_11) = L_13;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_15 = V_0;
		Int32U5BU5D_t3230847821* L_16 = V_1;
		NullCheck(L_16);
		V_3 = (bool)((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length))))))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_001b;
		}
	}
	{
		pb_Object_t3489221196 * L_18 = ___pb0;
		Vector3U5BU5D_t215400611* L_19 = V_2;
		NullCheck(L_18);
		pb_Object_SetVertices_m3032772784(L_18, L_19, /*hidden argument*/NULL);
		pb_Object_t3489221196 * L_20 = ___pb0;
		NullCheck(L_20);
		Mesh_t4241756145 * L_21 = pb_Object_get_msh_m1647262144(L_20, /*hidden argument*/NULL);
		Vector3U5BU5D_t215400611* L_22 = V_2;
		NullCheck(L_21);
		Mesh_set_vertices_m2628866109(L_21, L_22, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ProBuilder2.Common.pb_Object_Utility::FaceWithTriangle(pb_Object,System.Int32[],ProBuilder2.Common.pb_Face&)
extern "C"  bool pb_Object_Utility_FaceWithTriangle_m2565389813 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, Int32U5BU5D_t3230847821* ___tri1, pb_Face_t882335176 ** ___face2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0005:
	{
		pb_Object_t3489221196 * L_0 = ___pb0;
		NullCheck(L_0);
		pb_FaceU5BU5D_t1009109529* L_1 = pb_Object_get_faces_m3078514949(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		pb_Face_t882335176 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		Int32U5BU5D_t3230847821* L_5 = ___tri1;
		NullCheck(L_4);
		bool L_6 = pb_Face_Contains_m550841549(L_4, L_5, /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		pb_Face_t882335176 ** L_8 = ___face2;
		pb_Object_t3489221196 * L_9 = ___pb0;
		NullCheck(L_9);
		pb_FaceU5BU5D_t1009109529* L_10 = pb_Object_get_faces_m3078514949(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, L_11);
		int32_t L_12 = L_11;
		pb_Face_t882335176 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		*((Il2CppObject **)(L_8)) = (Il2CppObject *)L_13;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_8), (Il2CppObject *)L_13);
		V_1 = (bool)1;
		goto IL_0045;
	}

IL_002a:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_15 = V_0;
		pb_Object_t3489221196 * L_16 = ___pb0;
		NullCheck(L_16);
		pb_FaceU5BU5D_t1009109529* L_17 = pb_Object_get_faces_m3078514949(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		V_2 = (bool)((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_17)->max_length))))))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0005;
		}
	}
	{
		pb_Face_t882335176 ** L_19 = ___face2;
		*((Il2CppObject **)(L_19)) = (Il2CppObject *)NULL;
		Il2CppCodeGenWriteBarrier((Il2CppObject **)(L_19), (Il2CppObject *)NULL);
		V_1 = (bool)0;
		goto IL_0045;
	}

IL_0045:
	{
		bool L_20 = V_1;
		return L_20;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
