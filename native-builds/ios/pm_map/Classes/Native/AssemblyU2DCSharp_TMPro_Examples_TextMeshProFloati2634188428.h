#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t4241557075;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;
// TMPro.TextContainer
struct TextContainer_t2231787766;
// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TextMeshProFloatingText
struct  TextMeshProFloatingText_t2634188428  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Font TMPro.Examples.TextMeshProFloatingText::TheFont
	Font_t4241557075 * ___TheFont_2;
	// UnityEngine.GameObject TMPro.Examples.TextMeshProFloatingText::m_floatingText
	GameObject_t3674682005 * ___m_floatingText_3;
	// TMPro.TextMeshPro TMPro.Examples.TextMeshProFloatingText::m_textMeshPro
	TextMeshPro_t3198095413 * ___m_textMeshPro_4;
	// TMPro.TextContainer TMPro.Examples.TextMeshProFloatingText::m_textContainer
	TextContainer_t2231787766 * ___m_textContainer_5;
	// UnityEngine.TextMesh TMPro.Examples.TextMeshProFloatingText::m_textMesh
	TextMesh_t2567681854 * ___m_textMesh_6;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_transform
	Transform_t1659122786 * ___m_transform_7;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_floatingText_Transform
	Transform_t1659122786 * ___m_floatingText_Transform_8;
	// UnityEngine.Transform TMPro.Examples.TextMeshProFloatingText::m_cameraTransform
	Transform_t1659122786 * ___m_cameraTransform_9;
	// UnityEngine.Vector3 TMPro.Examples.TextMeshProFloatingText::lastPOS
	Vector3_t4282066566  ___lastPOS_10;
	// UnityEngine.Quaternion TMPro.Examples.TextMeshProFloatingText::lastRotation
	Quaternion_t1553702882  ___lastRotation_11;
	// System.Int32 TMPro.Examples.TextMeshProFloatingText::SpawnType
	int32_t ___SpawnType_12;

public:
	inline static int32_t get_offset_of_TheFont_2() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___TheFont_2)); }
	inline Font_t4241557075 * get_TheFont_2() const { return ___TheFont_2; }
	inline Font_t4241557075 ** get_address_of_TheFont_2() { return &___TheFont_2; }
	inline void set_TheFont_2(Font_t4241557075 * value)
	{
		___TheFont_2 = value;
		Il2CppCodeGenWriteBarrier(&___TheFont_2, value);
	}

	inline static int32_t get_offset_of_m_floatingText_3() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_floatingText_3)); }
	inline GameObject_t3674682005 * get_m_floatingText_3() const { return ___m_floatingText_3; }
	inline GameObject_t3674682005 ** get_address_of_m_floatingText_3() { return &___m_floatingText_3; }
	inline void set_m_floatingText_3(GameObject_t3674682005 * value)
	{
		___m_floatingText_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_floatingText_3, value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_4() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_textMeshPro_4)); }
	inline TextMeshPro_t3198095413 * get_m_textMeshPro_4() const { return ___m_textMeshPro_4; }
	inline TextMeshPro_t3198095413 ** get_address_of_m_textMeshPro_4() { return &___m_textMeshPro_4; }
	inline void set_m_textMeshPro_4(TextMeshPro_t3198095413 * value)
	{
		___m_textMeshPro_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_4, value);
	}

	inline static int32_t get_offset_of_m_textContainer_5() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_textContainer_5)); }
	inline TextContainer_t2231787766 * get_m_textContainer_5() const { return ___m_textContainer_5; }
	inline TextContainer_t2231787766 ** get_address_of_m_textContainer_5() { return &___m_textContainer_5; }
	inline void set_m_textContainer_5(TextContainer_t2231787766 * value)
	{
		___m_textContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_textContainer_5, value);
	}

	inline static int32_t get_offset_of_m_textMesh_6() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_textMesh_6)); }
	inline TextMesh_t2567681854 * get_m_textMesh_6() const { return ___m_textMesh_6; }
	inline TextMesh_t2567681854 ** get_address_of_m_textMesh_6() { return &___m_textMesh_6; }
	inline void set_m_textMesh_6(TextMesh_t2567681854 * value)
	{
		___m_textMesh_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMesh_6, value);
	}

	inline static int32_t get_offset_of_m_transform_7() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_transform_7)); }
	inline Transform_t1659122786 * get_m_transform_7() const { return ___m_transform_7; }
	inline Transform_t1659122786 ** get_address_of_m_transform_7() { return &___m_transform_7; }
	inline void set_m_transform_7(Transform_t1659122786 * value)
	{
		___m_transform_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_transform_7, value);
	}

	inline static int32_t get_offset_of_m_floatingText_Transform_8() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_floatingText_Transform_8)); }
	inline Transform_t1659122786 * get_m_floatingText_Transform_8() const { return ___m_floatingText_Transform_8; }
	inline Transform_t1659122786 ** get_address_of_m_floatingText_Transform_8() { return &___m_floatingText_Transform_8; }
	inline void set_m_floatingText_Transform_8(Transform_t1659122786 * value)
	{
		___m_floatingText_Transform_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_floatingText_Transform_8, value);
	}

	inline static int32_t get_offset_of_m_cameraTransform_9() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___m_cameraTransform_9)); }
	inline Transform_t1659122786 * get_m_cameraTransform_9() const { return ___m_cameraTransform_9; }
	inline Transform_t1659122786 ** get_address_of_m_cameraTransform_9() { return &___m_cameraTransform_9; }
	inline void set_m_cameraTransform_9(Transform_t1659122786 * value)
	{
		___m_cameraTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_cameraTransform_9, value);
	}

	inline static int32_t get_offset_of_lastPOS_10() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___lastPOS_10)); }
	inline Vector3_t4282066566  get_lastPOS_10() const { return ___lastPOS_10; }
	inline Vector3_t4282066566 * get_address_of_lastPOS_10() { return &___lastPOS_10; }
	inline void set_lastPOS_10(Vector3_t4282066566  value)
	{
		___lastPOS_10 = value;
	}

	inline static int32_t get_offset_of_lastRotation_11() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___lastRotation_11)); }
	inline Quaternion_t1553702882  get_lastRotation_11() const { return ___lastRotation_11; }
	inline Quaternion_t1553702882 * get_address_of_lastRotation_11() { return &___lastRotation_11; }
	inline void set_lastRotation_11(Quaternion_t1553702882  value)
	{
		___lastRotation_11 = value;
	}

	inline static int32_t get_offset_of_SpawnType_12() { return static_cast<int32_t>(offsetof(TextMeshProFloatingText_t2634188428, ___SpawnType_12)); }
	inline int32_t get_SpawnType_12() const { return ___SpawnType_12; }
	inline int32_t* get_address_of_SpawnType_12() { return &___SpawnType_12; }
	inline void set_SpawnType_12(int32_t value)
	{
		___SpawnType_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
