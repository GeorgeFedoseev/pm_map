#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Component
struct Component_t3501516275;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// UnityEngine.Material
struct Material_t3870600107;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_MaterialUI_AnimType2264732311.h"
#include "AssemblyU2DCSharp_MaterialUI_ValType3365577761.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.EZStruct
struct  EZStruct_t3748314742 
{
public:
	// System.String MaterialUI.EZStruct::animName
	String_t* ___animName_0;
	// System.String MaterialUI.EZStruct::animTag
	String_t* ___animTag_1;
	// UnityEngine.GameObject MaterialUI.EZStruct::targetGameObject
	GameObject_t3674682005 * ___targetGameObject_2;
	// System.String MaterialUI.EZStruct::targetComponent
	String_t* ___targetComponent_3;
	// System.String MaterialUI.EZStruct::targetVariable
	String_t* ___targetVariable_4;
	// UnityEngine.Component MaterialUI.EZStruct::RealComponent
	Component_t3501516275 * ___RealComponent_5;
	// System.Reflection.FieldInfo MaterialUI.EZStruct::realField
	FieldInfo_t * ___realField_6;
	// System.Reflection.PropertyInfo MaterialUI.EZStruct::realProperty
	PropertyInfo_t * ___realProperty_7;
	// MaterialUI.AnimType MaterialUI.EZStruct::animationType
	int32_t ___animationType_8;
	// System.String MaterialUI.EZStruct::variableType
	String_t* ___variableType_9;
	// MaterialUI.ValType MaterialUI.EZStruct::valueType
	int32_t ___valueType_10;
	// System.Single MaterialUI.EZStruct::duration
	float ___duration_11;
	// System.Boolean MaterialUI.EZStruct::isField
	bool ___isField_12;
	// System.Int32 MaterialUI.EZStruct::initialInt
	int32_t ___initialInt_13;
	// System.Int32 MaterialUI.EZStruct::targetInt
	int32_t ___targetInt_14;
	// System.Single MaterialUI.EZStruct::initialFloat
	float ___initialFloat_15;
	// System.Single MaterialUI.EZStruct::targetFloat
	float ___targetFloat_16;
	// UnityEngine.Vector2 MaterialUI.EZStruct::initialVector2
	Vector2_t4282066565  ___initialVector2_17;
	// UnityEngine.Vector2 MaterialUI.EZStruct::targetVector2
	Vector2_t4282066565  ___targetVector2_18;
	// UnityEngine.Vector3 MaterialUI.EZStruct::initialVector3
	Vector3_t4282066566  ___initialVector3_19;
	// UnityEngine.Vector3 MaterialUI.EZStruct::targetVector3
	Vector3_t4282066566  ___targetVector3_20;
	// UnityEngine.Vector4 MaterialUI.EZStruct::initialVector4
	Vector4_t4282066567  ___initialVector4_21;
	// UnityEngine.Vector4 MaterialUI.EZStruct::targetVector4
	Vector4_t4282066567  ___targetVector4_22;
	// UnityEngine.Rect MaterialUI.EZStruct::initialRect
	Rect_t4241904616  ___initialRect_23;
	// UnityEngine.Rect MaterialUI.EZStruct::targetRect
	Rect_t4241904616  ___targetRect_24;
	// UnityEngine.Color MaterialUI.EZStruct::initialColor
	Color_t4194546905  ___initialColor_25;
	// UnityEngine.Color MaterialUI.EZStruct::targetColor
	Color_t4194546905  ___targetColor_26;
	// UnityEngine.Material MaterialUI.EZStruct::initialMaterial
	Material_t3870600107 * ___initialMaterial_27;
	// UnityEngine.Material MaterialUI.EZStruct::targetMaterial
	Material_t3870600107 * ___targetMaterial_28;
	// System.Boolean MaterialUI.EZStruct::modifyParameter1
	bool ___modifyParameter1_29;
	// System.Boolean MaterialUI.EZStruct::modifyParameter2
	bool ___modifyParameter2_30;
	// System.Boolean MaterialUI.EZStruct::modifyParameter3
	bool ___modifyParameter3_31;
	// System.Boolean MaterialUI.EZStruct::modifyParameter4
	bool ___modifyParameter4_32;
	// System.Single MaterialUI.EZStruct::animStartTime
	float ___animStartTime_33;
	// System.Single MaterialUI.EZStruct::animDeltaTime
	float ___animDeltaTime_34;
	// System.Single MaterialUI.EZStruct::animationDuration
	float ___animationDuration_35;
	// System.Boolean MaterialUI.EZStruct::methodOnEnd
	bool ___methodOnEnd_36;
	// UnityEngine.GameObject MaterialUI.EZStruct::methodTargetGameObject
	GameObject_t3674682005 * ___methodTargetGameObject_37;
	// System.String MaterialUI.EZStruct::methodTargetComponent
	String_t* ___methodTargetComponent_38;
	// System.String MaterialUI.EZStruct::methodTargetMethod
	String_t* ___methodTargetMethod_39;
	// UnityEngine.Component MaterialUI.EZStruct::methodRealComponent
	Component_t3501516275 * ___methodRealComponent_40;
	// System.Reflection.MethodInfo MaterialUI.EZStruct::methodRealMethod
	MethodInfo_t * ___methodRealMethod_41;
	// System.String MaterialUI.EZStruct::methodParam
	String_t* ___methodParam_42;
	// System.Boolean MaterialUI.EZStruct::called
	bool ___called_43;
	// System.Single MaterialUI.EZStruct::delay
	float ___delay_44;
	// System.Single MaterialUI.EZStruct::delayValue
	float ___delayValue_45;

public:
	inline static int32_t get_offset_of_animName_0() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___animName_0)); }
	inline String_t* get_animName_0() const { return ___animName_0; }
	inline String_t** get_address_of_animName_0() { return &___animName_0; }
	inline void set_animName_0(String_t* value)
	{
		___animName_0 = value;
		Il2CppCodeGenWriteBarrier(&___animName_0, value);
	}

	inline static int32_t get_offset_of_animTag_1() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___animTag_1)); }
	inline String_t* get_animTag_1() const { return ___animTag_1; }
	inline String_t** get_address_of_animTag_1() { return &___animTag_1; }
	inline void set_animTag_1(String_t* value)
	{
		___animTag_1 = value;
		Il2CppCodeGenWriteBarrier(&___animTag_1, value);
	}

	inline static int32_t get_offset_of_targetGameObject_2() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetGameObject_2)); }
	inline GameObject_t3674682005 * get_targetGameObject_2() const { return ___targetGameObject_2; }
	inline GameObject_t3674682005 ** get_address_of_targetGameObject_2() { return &___targetGameObject_2; }
	inline void set_targetGameObject_2(GameObject_t3674682005 * value)
	{
		___targetGameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetGameObject_2, value);
	}

	inline static int32_t get_offset_of_targetComponent_3() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetComponent_3)); }
	inline String_t* get_targetComponent_3() const { return ___targetComponent_3; }
	inline String_t** get_address_of_targetComponent_3() { return &___targetComponent_3; }
	inline void set_targetComponent_3(String_t* value)
	{
		___targetComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetComponent_3, value);
	}

	inline static int32_t get_offset_of_targetVariable_4() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetVariable_4)); }
	inline String_t* get_targetVariable_4() const { return ___targetVariable_4; }
	inline String_t** get_address_of_targetVariable_4() { return &___targetVariable_4; }
	inline void set_targetVariable_4(String_t* value)
	{
		___targetVariable_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetVariable_4, value);
	}

	inline static int32_t get_offset_of_RealComponent_5() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___RealComponent_5)); }
	inline Component_t3501516275 * get_RealComponent_5() const { return ___RealComponent_5; }
	inline Component_t3501516275 ** get_address_of_RealComponent_5() { return &___RealComponent_5; }
	inline void set_RealComponent_5(Component_t3501516275 * value)
	{
		___RealComponent_5 = value;
		Il2CppCodeGenWriteBarrier(&___RealComponent_5, value);
	}

	inline static int32_t get_offset_of_realField_6() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___realField_6)); }
	inline FieldInfo_t * get_realField_6() const { return ___realField_6; }
	inline FieldInfo_t ** get_address_of_realField_6() { return &___realField_6; }
	inline void set_realField_6(FieldInfo_t * value)
	{
		___realField_6 = value;
		Il2CppCodeGenWriteBarrier(&___realField_6, value);
	}

	inline static int32_t get_offset_of_realProperty_7() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___realProperty_7)); }
	inline PropertyInfo_t * get_realProperty_7() const { return ___realProperty_7; }
	inline PropertyInfo_t ** get_address_of_realProperty_7() { return &___realProperty_7; }
	inline void set_realProperty_7(PropertyInfo_t * value)
	{
		___realProperty_7 = value;
		Il2CppCodeGenWriteBarrier(&___realProperty_7, value);
	}

	inline static int32_t get_offset_of_animationType_8() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___animationType_8)); }
	inline int32_t get_animationType_8() const { return ___animationType_8; }
	inline int32_t* get_address_of_animationType_8() { return &___animationType_8; }
	inline void set_animationType_8(int32_t value)
	{
		___animationType_8 = value;
	}

	inline static int32_t get_offset_of_variableType_9() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___variableType_9)); }
	inline String_t* get_variableType_9() const { return ___variableType_9; }
	inline String_t** get_address_of_variableType_9() { return &___variableType_9; }
	inline void set_variableType_9(String_t* value)
	{
		___variableType_9 = value;
		Il2CppCodeGenWriteBarrier(&___variableType_9, value);
	}

	inline static int32_t get_offset_of_valueType_10() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___valueType_10)); }
	inline int32_t get_valueType_10() const { return ___valueType_10; }
	inline int32_t* get_address_of_valueType_10() { return &___valueType_10; }
	inline void set_valueType_10(int32_t value)
	{
		___valueType_10 = value;
	}

	inline static int32_t get_offset_of_duration_11() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___duration_11)); }
	inline float get_duration_11() const { return ___duration_11; }
	inline float* get_address_of_duration_11() { return &___duration_11; }
	inline void set_duration_11(float value)
	{
		___duration_11 = value;
	}

	inline static int32_t get_offset_of_isField_12() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___isField_12)); }
	inline bool get_isField_12() const { return ___isField_12; }
	inline bool* get_address_of_isField_12() { return &___isField_12; }
	inline void set_isField_12(bool value)
	{
		___isField_12 = value;
	}

	inline static int32_t get_offset_of_initialInt_13() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialInt_13)); }
	inline int32_t get_initialInt_13() const { return ___initialInt_13; }
	inline int32_t* get_address_of_initialInt_13() { return &___initialInt_13; }
	inline void set_initialInt_13(int32_t value)
	{
		___initialInt_13 = value;
	}

	inline static int32_t get_offset_of_targetInt_14() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetInt_14)); }
	inline int32_t get_targetInt_14() const { return ___targetInt_14; }
	inline int32_t* get_address_of_targetInt_14() { return &___targetInt_14; }
	inline void set_targetInt_14(int32_t value)
	{
		___targetInt_14 = value;
	}

	inline static int32_t get_offset_of_initialFloat_15() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialFloat_15)); }
	inline float get_initialFloat_15() const { return ___initialFloat_15; }
	inline float* get_address_of_initialFloat_15() { return &___initialFloat_15; }
	inline void set_initialFloat_15(float value)
	{
		___initialFloat_15 = value;
	}

	inline static int32_t get_offset_of_targetFloat_16() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetFloat_16)); }
	inline float get_targetFloat_16() const { return ___targetFloat_16; }
	inline float* get_address_of_targetFloat_16() { return &___targetFloat_16; }
	inline void set_targetFloat_16(float value)
	{
		___targetFloat_16 = value;
	}

	inline static int32_t get_offset_of_initialVector2_17() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialVector2_17)); }
	inline Vector2_t4282066565  get_initialVector2_17() const { return ___initialVector2_17; }
	inline Vector2_t4282066565 * get_address_of_initialVector2_17() { return &___initialVector2_17; }
	inline void set_initialVector2_17(Vector2_t4282066565  value)
	{
		___initialVector2_17 = value;
	}

	inline static int32_t get_offset_of_targetVector2_18() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetVector2_18)); }
	inline Vector2_t4282066565  get_targetVector2_18() const { return ___targetVector2_18; }
	inline Vector2_t4282066565 * get_address_of_targetVector2_18() { return &___targetVector2_18; }
	inline void set_targetVector2_18(Vector2_t4282066565  value)
	{
		___targetVector2_18 = value;
	}

	inline static int32_t get_offset_of_initialVector3_19() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialVector3_19)); }
	inline Vector3_t4282066566  get_initialVector3_19() const { return ___initialVector3_19; }
	inline Vector3_t4282066566 * get_address_of_initialVector3_19() { return &___initialVector3_19; }
	inline void set_initialVector3_19(Vector3_t4282066566  value)
	{
		___initialVector3_19 = value;
	}

	inline static int32_t get_offset_of_targetVector3_20() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetVector3_20)); }
	inline Vector3_t4282066566  get_targetVector3_20() const { return ___targetVector3_20; }
	inline Vector3_t4282066566 * get_address_of_targetVector3_20() { return &___targetVector3_20; }
	inline void set_targetVector3_20(Vector3_t4282066566  value)
	{
		___targetVector3_20 = value;
	}

	inline static int32_t get_offset_of_initialVector4_21() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialVector4_21)); }
	inline Vector4_t4282066567  get_initialVector4_21() const { return ___initialVector4_21; }
	inline Vector4_t4282066567 * get_address_of_initialVector4_21() { return &___initialVector4_21; }
	inline void set_initialVector4_21(Vector4_t4282066567  value)
	{
		___initialVector4_21 = value;
	}

	inline static int32_t get_offset_of_targetVector4_22() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetVector4_22)); }
	inline Vector4_t4282066567  get_targetVector4_22() const { return ___targetVector4_22; }
	inline Vector4_t4282066567 * get_address_of_targetVector4_22() { return &___targetVector4_22; }
	inline void set_targetVector4_22(Vector4_t4282066567  value)
	{
		___targetVector4_22 = value;
	}

	inline static int32_t get_offset_of_initialRect_23() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialRect_23)); }
	inline Rect_t4241904616  get_initialRect_23() const { return ___initialRect_23; }
	inline Rect_t4241904616 * get_address_of_initialRect_23() { return &___initialRect_23; }
	inline void set_initialRect_23(Rect_t4241904616  value)
	{
		___initialRect_23 = value;
	}

	inline static int32_t get_offset_of_targetRect_24() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetRect_24)); }
	inline Rect_t4241904616  get_targetRect_24() const { return ___targetRect_24; }
	inline Rect_t4241904616 * get_address_of_targetRect_24() { return &___targetRect_24; }
	inline void set_targetRect_24(Rect_t4241904616  value)
	{
		___targetRect_24 = value;
	}

	inline static int32_t get_offset_of_initialColor_25() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialColor_25)); }
	inline Color_t4194546905  get_initialColor_25() const { return ___initialColor_25; }
	inline Color_t4194546905 * get_address_of_initialColor_25() { return &___initialColor_25; }
	inline void set_initialColor_25(Color_t4194546905  value)
	{
		___initialColor_25 = value;
	}

	inline static int32_t get_offset_of_targetColor_26() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetColor_26)); }
	inline Color_t4194546905  get_targetColor_26() const { return ___targetColor_26; }
	inline Color_t4194546905 * get_address_of_targetColor_26() { return &___targetColor_26; }
	inline void set_targetColor_26(Color_t4194546905  value)
	{
		___targetColor_26 = value;
	}

	inline static int32_t get_offset_of_initialMaterial_27() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___initialMaterial_27)); }
	inline Material_t3870600107 * get_initialMaterial_27() const { return ___initialMaterial_27; }
	inline Material_t3870600107 ** get_address_of_initialMaterial_27() { return &___initialMaterial_27; }
	inline void set_initialMaterial_27(Material_t3870600107 * value)
	{
		___initialMaterial_27 = value;
		Il2CppCodeGenWriteBarrier(&___initialMaterial_27, value);
	}

	inline static int32_t get_offset_of_targetMaterial_28() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___targetMaterial_28)); }
	inline Material_t3870600107 * get_targetMaterial_28() const { return ___targetMaterial_28; }
	inline Material_t3870600107 ** get_address_of_targetMaterial_28() { return &___targetMaterial_28; }
	inline void set_targetMaterial_28(Material_t3870600107 * value)
	{
		___targetMaterial_28 = value;
		Il2CppCodeGenWriteBarrier(&___targetMaterial_28, value);
	}

	inline static int32_t get_offset_of_modifyParameter1_29() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___modifyParameter1_29)); }
	inline bool get_modifyParameter1_29() const { return ___modifyParameter1_29; }
	inline bool* get_address_of_modifyParameter1_29() { return &___modifyParameter1_29; }
	inline void set_modifyParameter1_29(bool value)
	{
		___modifyParameter1_29 = value;
	}

	inline static int32_t get_offset_of_modifyParameter2_30() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___modifyParameter2_30)); }
	inline bool get_modifyParameter2_30() const { return ___modifyParameter2_30; }
	inline bool* get_address_of_modifyParameter2_30() { return &___modifyParameter2_30; }
	inline void set_modifyParameter2_30(bool value)
	{
		___modifyParameter2_30 = value;
	}

	inline static int32_t get_offset_of_modifyParameter3_31() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___modifyParameter3_31)); }
	inline bool get_modifyParameter3_31() const { return ___modifyParameter3_31; }
	inline bool* get_address_of_modifyParameter3_31() { return &___modifyParameter3_31; }
	inline void set_modifyParameter3_31(bool value)
	{
		___modifyParameter3_31 = value;
	}

	inline static int32_t get_offset_of_modifyParameter4_32() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___modifyParameter4_32)); }
	inline bool get_modifyParameter4_32() const { return ___modifyParameter4_32; }
	inline bool* get_address_of_modifyParameter4_32() { return &___modifyParameter4_32; }
	inline void set_modifyParameter4_32(bool value)
	{
		___modifyParameter4_32 = value;
	}

	inline static int32_t get_offset_of_animStartTime_33() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___animStartTime_33)); }
	inline float get_animStartTime_33() const { return ___animStartTime_33; }
	inline float* get_address_of_animStartTime_33() { return &___animStartTime_33; }
	inline void set_animStartTime_33(float value)
	{
		___animStartTime_33 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_34() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___animDeltaTime_34)); }
	inline float get_animDeltaTime_34() const { return ___animDeltaTime_34; }
	inline float* get_address_of_animDeltaTime_34() { return &___animDeltaTime_34; }
	inline void set_animDeltaTime_34(float value)
	{
		___animDeltaTime_34 = value;
	}

	inline static int32_t get_offset_of_animationDuration_35() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___animationDuration_35)); }
	inline float get_animationDuration_35() const { return ___animationDuration_35; }
	inline float* get_address_of_animationDuration_35() { return &___animationDuration_35; }
	inline void set_animationDuration_35(float value)
	{
		___animationDuration_35 = value;
	}

	inline static int32_t get_offset_of_methodOnEnd_36() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodOnEnd_36)); }
	inline bool get_methodOnEnd_36() const { return ___methodOnEnd_36; }
	inline bool* get_address_of_methodOnEnd_36() { return &___methodOnEnd_36; }
	inline void set_methodOnEnd_36(bool value)
	{
		___methodOnEnd_36 = value;
	}

	inline static int32_t get_offset_of_methodTargetGameObject_37() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodTargetGameObject_37)); }
	inline GameObject_t3674682005 * get_methodTargetGameObject_37() const { return ___methodTargetGameObject_37; }
	inline GameObject_t3674682005 ** get_address_of_methodTargetGameObject_37() { return &___methodTargetGameObject_37; }
	inline void set_methodTargetGameObject_37(GameObject_t3674682005 * value)
	{
		___methodTargetGameObject_37 = value;
		Il2CppCodeGenWriteBarrier(&___methodTargetGameObject_37, value);
	}

	inline static int32_t get_offset_of_methodTargetComponent_38() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodTargetComponent_38)); }
	inline String_t* get_methodTargetComponent_38() const { return ___methodTargetComponent_38; }
	inline String_t** get_address_of_methodTargetComponent_38() { return &___methodTargetComponent_38; }
	inline void set_methodTargetComponent_38(String_t* value)
	{
		___methodTargetComponent_38 = value;
		Il2CppCodeGenWriteBarrier(&___methodTargetComponent_38, value);
	}

	inline static int32_t get_offset_of_methodTargetMethod_39() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodTargetMethod_39)); }
	inline String_t* get_methodTargetMethod_39() const { return ___methodTargetMethod_39; }
	inline String_t** get_address_of_methodTargetMethod_39() { return &___methodTargetMethod_39; }
	inline void set_methodTargetMethod_39(String_t* value)
	{
		___methodTargetMethod_39 = value;
		Il2CppCodeGenWriteBarrier(&___methodTargetMethod_39, value);
	}

	inline static int32_t get_offset_of_methodRealComponent_40() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodRealComponent_40)); }
	inline Component_t3501516275 * get_methodRealComponent_40() const { return ___methodRealComponent_40; }
	inline Component_t3501516275 ** get_address_of_methodRealComponent_40() { return &___methodRealComponent_40; }
	inline void set_methodRealComponent_40(Component_t3501516275 * value)
	{
		___methodRealComponent_40 = value;
		Il2CppCodeGenWriteBarrier(&___methodRealComponent_40, value);
	}

	inline static int32_t get_offset_of_methodRealMethod_41() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodRealMethod_41)); }
	inline MethodInfo_t * get_methodRealMethod_41() const { return ___methodRealMethod_41; }
	inline MethodInfo_t ** get_address_of_methodRealMethod_41() { return &___methodRealMethod_41; }
	inline void set_methodRealMethod_41(MethodInfo_t * value)
	{
		___methodRealMethod_41 = value;
		Il2CppCodeGenWriteBarrier(&___methodRealMethod_41, value);
	}

	inline static int32_t get_offset_of_methodParam_42() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___methodParam_42)); }
	inline String_t* get_methodParam_42() const { return ___methodParam_42; }
	inline String_t** get_address_of_methodParam_42() { return &___methodParam_42; }
	inline void set_methodParam_42(String_t* value)
	{
		___methodParam_42 = value;
		Il2CppCodeGenWriteBarrier(&___methodParam_42, value);
	}

	inline static int32_t get_offset_of_called_43() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___called_43)); }
	inline bool get_called_43() const { return ___called_43; }
	inline bool* get_address_of_called_43() { return &___called_43; }
	inline void set_called_43(bool value)
	{
		___called_43 = value;
	}

	inline static int32_t get_offset_of_delay_44() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___delay_44)); }
	inline float get_delay_44() const { return ___delay_44; }
	inline float* get_address_of_delay_44() { return &___delay_44; }
	inline void set_delay_44(float value)
	{
		___delay_44 = value;
	}

	inline static int32_t get_offset_of_delayValue_45() { return static_cast<int32_t>(offsetof(EZStruct_t3748314742, ___delayValue_45)); }
	inline float get_delayValue_45() const { return ___delayValue_45; }
	inline float* get_address_of_delayValue_45() { return &___delayValue_45; }
	inline void set_delayValue_45(float value)
	{
		___delayValue_45 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: MaterialUI.EZStruct
struct EZStruct_t3748314742_marshaled_pinvoke
{
	char* ___animName_0;
	char* ___animTag_1;
	GameObject_t3674682005 * ___targetGameObject_2;
	char* ___targetComponent_3;
	char* ___targetVariable_4;
	Component_t3501516275 * ___RealComponent_5;
	FieldInfo_t * ___realField_6;
	PropertyInfo_t * ___realProperty_7;
	int32_t ___animationType_8;
	char* ___variableType_9;
	int32_t ___valueType_10;
	float ___duration_11;
	int32_t ___isField_12;
	int32_t ___initialInt_13;
	int32_t ___targetInt_14;
	float ___initialFloat_15;
	float ___targetFloat_16;
	Vector2_t4282066565_marshaled_pinvoke ___initialVector2_17;
	Vector2_t4282066565_marshaled_pinvoke ___targetVector2_18;
	Vector3_t4282066566_marshaled_pinvoke ___initialVector3_19;
	Vector3_t4282066566_marshaled_pinvoke ___targetVector3_20;
	Vector4_t4282066567_marshaled_pinvoke ___initialVector4_21;
	Vector4_t4282066567_marshaled_pinvoke ___targetVector4_22;
	Rect_t4241904616_marshaled_pinvoke ___initialRect_23;
	Rect_t4241904616_marshaled_pinvoke ___targetRect_24;
	Color_t4194546905_marshaled_pinvoke ___initialColor_25;
	Color_t4194546905_marshaled_pinvoke ___targetColor_26;
	Material_t3870600107 * ___initialMaterial_27;
	Material_t3870600107 * ___targetMaterial_28;
	int32_t ___modifyParameter1_29;
	int32_t ___modifyParameter2_30;
	int32_t ___modifyParameter3_31;
	int32_t ___modifyParameter4_32;
	float ___animStartTime_33;
	float ___animDeltaTime_34;
	float ___animationDuration_35;
	int32_t ___methodOnEnd_36;
	GameObject_t3674682005 * ___methodTargetGameObject_37;
	char* ___methodTargetComponent_38;
	char* ___methodTargetMethod_39;
	Component_t3501516275 * ___methodRealComponent_40;
	MethodInfo_t * ___methodRealMethod_41;
	char* ___methodParam_42;
	int32_t ___called_43;
	float ___delay_44;
	float ___delayValue_45;
};
// Native definition for marshalling of: MaterialUI.EZStruct
struct EZStruct_t3748314742_marshaled_com
{
	Il2CppChar* ___animName_0;
	Il2CppChar* ___animTag_1;
	GameObject_t3674682005 * ___targetGameObject_2;
	Il2CppChar* ___targetComponent_3;
	Il2CppChar* ___targetVariable_4;
	Component_t3501516275 * ___RealComponent_5;
	FieldInfo_t * ___realField_6;
	PropertyInfo_t * ___realProperty_7;
	int32_t ___animationType_8;
	Il2CppChar* ___variableType_9;
	int32_t ___valueType_10;
	float ___duration_11;
	int32_t ___isField_12;
	int32_t ___initialInt_13;
	int32_t ___targetInt_14;
	float ___initialFloat_15;
	float ___targetFloat_16;
	Vector2_t4282066565_marshaled_com ___initialVector2_17;
	Vector2_t4282066565_marshaled_com ___targetVector2_18;
	Vector3_t4282066566_marshaled_com ___initialVector3_19;
	Vector3_t4282066566_marshaled_com ___targetVector3_20;
	Vector4_t4282066567_marshaled_com ___initialVector4_21;
	Vector4_t4282066567_marshaled_com ___targetVector4_22;
	Rect_t4241904616_marshaled_com ___initialRect_23;
	Rect_t4241904616_marshaled_com ___targetRect_24;
	Color_t4194546905_marshaled_com ___initialColor_25;
	Color_t4194546905_marshaled_com ___targetColor_26;
	Material_t3870600107 * ___initialMaterial_27;
	Material_t3870600107 * ___targetMaterial_28;
	int32_t ___modifyParameter1_29;
	int32_t ___modifyParameter2_30;
	int32_t ___modifyParameter3_31;
	int32_t ___modifyParameter4_32;
	float ___animStartTime_33;
	float ___animDeltaTime_34;
	float ___animationDuration_35;
	int32_t ___methodOnEnd_36;
	GameObject_t3674682005 * ___methodTargetGameObject_37;
	Il2CppChar* ___methodTargetComponent_38;
	Il2CppChar* ___methodTargetMethod_39;
	Component_t3501516275 * ___methodRealComponent_40;
	MethodInfo_t * ___methodRealMethod_41;
	Il2CppChar* ___methodParam_42;
	int32_t ___called_43;
	float ___delay_44;
	float ___delayValue_45;
};
