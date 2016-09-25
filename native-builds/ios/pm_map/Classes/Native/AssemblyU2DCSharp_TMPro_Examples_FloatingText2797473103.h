#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;
// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// UnityEngine.NavMeshAgent
struct NavMeshAgent_t588466745;
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

// TMPro.Examples.FloatingText
struct  FloatingText_t2797473103  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject TMPro.Examples.FloatingText::m_floatingText
	GameObject_t3674682005 * ___m_floatingText_2;
	// TMPro.TextMeshPro TMPro.Examples.FloatingText::m_textMeshPro
	TextMeshPro_t3198095413 * ___m_textMeshPro_3;
	// UnityEngine.TextMesh TMPro.Examples.FloatingText::m_textMesh
	TextMesh_t2567681854 * ___m_textMesh_4;
	// UnityEngine.NavMeshAgent TMPro.Examples.FloatingText::m_navAgent
	NavMeshAgent_t588466745 * ___m_navAgent_5;
	// UnityEngine.Transform TMPro.Examples.FloatingText::m_transform
	Transform_t1659122786 * ___m_transform_6;
	// UnityEngine.Transform TMPro.Examples.FloatingText::m_floatingText_Transform
	Transform_t1659122786 * ___m_floatingText_Transform_7;
	// UnityEngine.Transform TMPro.Examples.FloatingText::m_cameraTransform
	Transform_t1659122786 * ___m_cameraTransform_8;
	// UnityEngine.Vector3 TMPro.Examples.FloatingText::lastPOS
	Vector3_t4282066566  ___lastPOS_9;
	// UnityEngine.Quaternion TMPro.Examples.FloatingText::lastRotation
	Quaternion_t1553702882  ___lastRotation_10;
	// System.Int32 TMPro.Examples.FloatingText::SpawnType
	int32_t ___SpawnType_11;

public:
	inline static int32_t get_offset_of_m_floatingText_2() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_floatingText_2)); }
	inline GameObject_t3674682005 * get_m_floatingText_2() const { return ___m_floatingText_2; }
	inline GameObject_t3674682005 ** get_address_of_m_floatingText_2() { return &___m_floatingText_2; }
	inline void set_m_floatingText_2(GameObject_t3674682005 * value)
	{
		___m_floatingText_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_floatingText_2, value);
	}

	inline static int32_t get_offset_of_m_textMeshPro_3() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_textMeshPro_3)); }
	inline TextMeshPro_t3198095413 * get_m_textMeshPro_3() const { return ___m_textMeshPro_3; }
	inline TextMeshPro_t3198095413 ** get_address_of_m_textMeshPro_3() { return &___m_textMeshPro_3; }
	inline void set_m_textMeshPro_3(TextMeshPro_t3198095413 * value)
	{
		___m_textMeshPro_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_3, value);
	}

	inline static int32_t get_offset_of_m_textMesh_4() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_textMesh_4)); }
	inline TextMesh_t2567681854 * get_m_textMesh_4() const { return ___m_textMesh_4; }
	inline TextMesh_t2567681854 ** get_address_of_m_textMesh_4() { return &___m_textMesh_4; }
	inline void set_m_textMesh_4(TextMesh_t2567681854 * value)
	{
		___m_textMesh_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMesh_4, value);
	}

	inline static int32_t get_offset_of_m_navAgent_5() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_navAgent_5)); }
	inline NavMeshAgent_t588466745 * get_m_navAgent_5() const { return ___m_navAgent_5; }
	inline NavMeshAgent_t588466745 ** get_address_of_m_navAgent_5() { return &___m_navAgent_5; }
	inline void set_m_navAgent_5(NavMeshAgent_t588466745 * value)
	{
		___m_navAgent_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_navAgent_5, value);
	}

	inline static int32_t get_offset_of_m_transform_6() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_transform_6)); }
	inline Transform_t1659122786 * get_m_transform_6() const { return ___m_transform_6; }
	inline Transform_t1659122786 ** get_address_of_m_transform_6() { return &___m_transform_6; }
	inline void set_m_transform_6(Transform_t1659122786 * value)
	{
		___m_transform_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_transform_6, value);
	}

	inline static int32_t get_offset_of_m_floatingText_Transform_7() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_floatingText_Transform_7)); }
	inline Transform_t1659122786 * get_m_floatingText_Transform_7() const { return ___m_floatingText_Transform_7; }
	inline Transform_t1659122786 ** get_address_of_m_floatingText_Transform_7() { return &___m_floatingText_Transform_7; }
	inline void set_m_floatingText_Transform_7(Transform_t1659122786 * value)
	{
		___m_floatingText_Transform_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_floatingText_Transform_7, value);
	}

	inline static int32_t get_offset_of_m_cameraTransform_8() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___m_cameraTransform_8)); }
	inline Transform_t1659122786 * get_m_cameraTransform_8() const { return ___m_cameraTransform_8; }
	inline Transform_t1659122786 ** get_address_of_m_cameraTransform_8() { return &___m_cameraTransform_8; }
	inline void set_m_cameraTransform_8(Transform_t1659122786 * value)
	{
		___m_cameraTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_cameraTransform_8, value);
	}

	inline static int32_t get_offset_of_lastPOS_9() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___lastPOS_9)); }
	inline Vector3_t4282066566  get_lastPOS_9() const { return ___lastPOS_9; }
	inline Vector3_t4282066566 * get_address_of_lastPOS_9() { return &___lastPOS_9; }
	inline void set_lastPOS_9(Vector3_t4282066566  value)
	{
		___lastPOS_9 = value;
	}

	inline static int32_t get_offset_of_lastRotation_10() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___lastRotation_10)); }
	inline Quaternion_t1553702882  get_lastRotation_10() const { return ___lastRotation_10; }
	inline Quaternion_t1553702882 * get_address_of_lastRotation_10() { return &___lastRotation_10; }
	inline void set_lastRotation_10(Quaternion_t1553702882  value)
	{
		___lastRotation_10 = value;
	}

	inline static int32_t get_offset_of_SpawnType_11() { return static_cast<int32_t>(offsetof(FloatingText_t2797473103, ___SpawnType_11)); }
	inline int32_t get_SpawnType_11() const { return ___SpawnType_11; }
	inline int32_t* get_address_of_SpawnType_11() { return &___SpawnType_11; }
	inline void set_SpawnType_11(int32_t value)
	{
		___SpawnType_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
