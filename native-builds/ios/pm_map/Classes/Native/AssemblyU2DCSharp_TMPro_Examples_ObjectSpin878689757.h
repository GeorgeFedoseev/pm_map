#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "AssemblyU2DCSharp_TMPro_Examples_ObjectSpin_MotionT501657267.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.ObjectSpin
struct  ObjectSpin_t878689757  : public MonoBehaviour_t667441552
{
public:
	// System.Single TMPro.Examples.ObjectSpin::SpinSpeed
	float ___SpinSpeed_2;
	// System.Int32 TMPro.Examples.ObjectSpin::RotationRange
	int32_t ___RotationRange_3;
	// UnityEngine.Transform TMPro.Examples.ObjectSpin::m_transform
	Transform_t1659122786 * ___m_transform_4;
	// System.Single TMPro.Examples.ObjectSpin::m_time
	float ___m_time_5;
	// UnityEngine.Vector3 TMPro.Examples.ObjectSpin::m_prevPOS
	Vector3_t4282066566  ___m_prevPOS_6;
	// UnityEngine.Vector3 TMPro.Examples.ObjectSpin::m_initial_Rotation
	Vector3_t4282066566  ___m_initial_Rotation_7;
	// UnityEngine.Vector3 TMPro.Examples.ObjectSpin::m_initial_Position
	Vector3_t4282066566  ___m_initial_Position_8;
	// UnityEngine.Color32 TMPro.Examples.ObjectSpin::m_lightColor
	Color32_t598853688  ___m_lightColor_9;
	// System.Int32 TMPro.Examples.ObjectSpin::frames
	int32_t ___frames_10;
	// TMPro.Examples.ObjectSpin/MotionType TMPro.Examples.ObjectSpin::Motion
	int32_t ___Motion_11;

public:
	inline static int32_t get_offset_of_SpinSpeed_2() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___SpinSpeed_2)); }
	inline float get_SpinSpeed_2() const { return ___SpinSpeed_2; }
	inline float* get_address_of_SpinSpeed_2() { return &___SpinSpeed_2; }
	inline void set_SpinSpeed_2(float value)
	{
		___SpinSpeed_2 = value;
	}

	inline static int32_t get_offset_of_RotationRange_3() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___RotationRange_3)); }
	inline int32_t get_RotationRange_3() const { return ___RotationRange_3; }
	inline int32_t* get_address_of_RotationRange_3() { return &___RotationRange_3; }
	inline void set_RotationRange_3(int32_t value)
	{
		___RotationRange_3 = value;
	}

	inline static int32_t get_offset_of_m_transform_4() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___m_transform_4)); }
	inline Transform_t1659122786 * get_m_transform_4() const { return ___m_transform_4; }
	inline Transform_t1659122786 ** get_address_of_m_transform_4() { return &___m_transform_4; }
	inline void set_m_transform_4(Transform_t1659122786 * value)
	{
		___m_transform_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_transform_4, value);
	}

	inline static int32_t get_offset_of_m_time_5() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___m_time_5)); }
	inline float get_m_time_5() const { return ___m_time_5; }
	inline float* get_address_of_m_time_5() { return &___m_time_5; }
	inline void set_m_time_5(float value)
	{
		___m_time_5 = value;
	}

	inline static int32_t get_offset_of_m_prevPOS_6() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___m_prevPOS_6)); }
	inline Vector3_t4282066566  get_m_prevPOS_6() const { return ___m_prevPOS_6; }
	inline Vector3_t4282066566 * get_address_of_m_prevPOS_6() { return &___m_prevPOS_6; }
	inline void set_m_prevPOS_6(Vector3_t4282066566  value)
	{
		___m_prevPOS_6 = value;
	}

	inline static int32_t get_offset_of_m_initial_Rotation_7() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___m_initial_Rotation_7)); }
	inline Vector3_t4282066566  get_m_initial_Rotation_7() const { return ___m_initial_Rotation_7; }
	inline Vector3_t4282066566 * get_address_of_m_initial_Rotation_7() { return &___m_initial_Rotation_7; }
	inline void set_m_initial_Rotation_7(Vector3_t4282066566  value)
	{
		___m_initial_Rotation_7 = value;
	}

	inline static int32_t get_offset_of_m_initial_Position_8() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___m_initial_Position_8)); }
	inline Vector3_t4282066566  get_m_initial_Position_8() const { return ___m_initial_Position_8; }
	inline Vector3_t4282066566 * get_address_of_m_initial_Position_8() { return &___m_initial_Position_8; }
	inline void set_m_initial_Position_8(Vector3_t4282066566  value)
	{
		___m_initial_Position_8 = value;
	}

	inline static int32_t get_offset_of_m_lightColor_9() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___m_lightColor_9)); }
	inline Color32_t598853688  get_m_lightColor_9() const { return ___m_lightColor_9; }
	inline Color32_t598853688 * get_address_of_m_lightColor_9() { return &___m_lightColor_9; }
	inline void set_m_lightColor_9(Color32_t598853688  value)
	{
		___m_lightColor_9 = value;
	}

	inline static int32_t get_offset_of_frames_10() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___frames_10)); }
	inline int32_t get_frames_10() const { return ___frames_10; }
	inline int32_t* get_address_of_frames_10() { return &___frames_10; }
	inline void set_frames_10(int32_t value)
	{
		___frames_10 = value;
	}

	inline static int32_t get_offset_of_Motion_11() { return static_cast<int32_t>(offsetof(ObjectSpin_t878689757, ___Motion_11)); }
	inline int32_t get_Motion_11() const { return ___Motion_11; }
	inline int32_t* get_address_of_Motion_11() { return &___Motion_11; }
	inline void set_Motion_11(int32_t value)
	{
		___Motion_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
