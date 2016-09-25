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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TMPro_Examples_CameraController_2960855304.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.CameraController
struct  CameraController_t2463013405  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform TMPro.Examples.CameraController::cameraTransform
	Transform_t1659122786 * ___cameraTransform_4;
	// UnityEngine.Transform TMPro.Examples.CameraController::dummyTarget
	Transform_t1659122786 * ___dummyTarget_5;
	// UnityEngine.Transform TMPro.Examples.CameraController::CameraTarget
	Transform_t1659122786 * ___CameraTarget_6;
	// System.Single TMPro.Examples.CameraController::FollowDistance
	float ___FollowDistance_7;
	// System.Single TMPro.Examples.CameraController::MaxFollowDistance
	float ___MaxFollowDistance_8;
	// System.Single TMPro.Examples.CameraController::MinFollowDistance
	float ___MinFollowDistance_9;
	// System.Single TMPro.Examples.CameraController::ElevationAngle
	float ___ElevationAngle_10;
	// System.Single TMPro.Examples.CameraController::MaxElevationAngle
	float ___MaxElevationAngle_11;
	// System.Single TMPro.Examples.CameraController::MinElevationAngle
	float ___MinElevationAngle_12;
	// System.Single TMPro.Examples.CameraController::OrbitalAngle
	float ___OrbitalAngle_13;
	// TMPro.Examples.CameraController/CameraModes TMPro.Examples.CameraController::CameraMode
	int32_t ___CameraMode_14;
	// System.Boolean TMPro.Examples.CameraController::MovementSmoothing
	bool ___MovementSmoothing_15;
	// System.Boolean TMPro.Examples.CameraController::RotationSmoothing
	bool ___RotationSmoothing_16;
	// System.Boolean TMPro.Examples.CameraController::previousSmoothing
	bool ___previousSmoothing_17;
	// System.Single TMPro.Examples.CameraController::MovementSmoothingValue
	float ___MovementSmoothingValue_18;
	// System.Single TMPro.Examples.CameraController::RotationSmoothingValue
	float ___RotationSmoothingValue_19;
	// System.Single TMPro.Examples.CameraController::MoveSensitivity
	float ___MoveSensitivity_20;
	// UnityEngine.Vector3 TMPro.Examples.CameraController::currentVelocity
	Vector3_t4282066566  ___currentVelocity_21;
	// UnityEngine.Vector3 TMPro.Examples.CameraController::desiredPosition
	Vector3_t4282066566  ___desiredPosition_22;
	// System.Single TMPro.Examples.CameraController::mouseX
	float ___mouseX_23;
	// System.Single TMPro.Examples.CameraController::mouseY
	float ___mouseY_24;
	// UnityEngine.Vector3 TMPro.Examples.CameraController::moveVector
	Vector3_t4282066566  ___moveVector_25;
	// System.Single TMPro.Examples.CameraController::mouseWheel
	float ___mouseWheel_26;
	// System.Single TMPro.Examples.CameraController::prev_ZoomDelta
	float ___prev_ZoomDelta_27;

public:
	inline static int32_t get_offset_of_cameraTransform_4() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___cameraTransform_4)); }
	inline Transform_t1659122786 * get_cameraTransform_4() const { return ___cameraTransform_4; }
	inline Transform_t1659122786 ** get_address_of_cameraTransform_4() { return &___cameraTransform_4; }
	inline void set_cameraTransform_4(Transform_t1659122786 * value)
	{
		___cameraTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_4, value);
	}

	inline static int32_t get_offset_of_dummyTarget_5() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___dummyTarget_5)); }
	inline Transform_t1659122786 * get_dummyTarget_5() const { return ___dummyTarget_5; }
	inline Transform_t1659122786 ** get_address_of_dummyTarget_5() { return &___dummyTarget_5; }
	inline void set_dummyTarget_5(Transform_t1659122786 * value)
	{
		___dummyTarget_5 = value;
		Il2CppCodeGenWriteBarrier(&___dummyTarget_5, value);
	}

	inline static int32_t get_offset_of_CameraTarget_6() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___CameraTarget_6)); }
	inline Transform_t1659122786 * get_CameraTarget_6() const { return ___CameraTarget_6; }
	inline Transform_t1659122786 ** get_address_of_CameraTarget_6() { return &___CameraTarget_6; }
	inline void set_CameraTarget_6(Transform_t1659122786 * value)
	{
		___CameraTarget_6 = value;
		Il2CppCodeGenWriteBarrier(&___CameraTarget_6, value);
	}

	inline static int32_t get_offset_of_FollowDistance_7() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___FollowDistance_7)); }
	inline float get_FollowDistance_7() const { return ___FollowDistance_7; }
	inline float* get_address_of_FollowDistance_7() { return &___FollowDistance_7; }
	inline void set_FollowDistance_7(float value)
	{
		___FollowDistance_7 = value;
	}

	inline static int32_t get_offset_of_MaxFollowDistance_8() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MaxFollowDistance_8)); }
	inline float get_MaxFollowDistance_8() const { return ___MaxFollowDistance_8; }
	inline float* get_address_of_MaxFollowDistance_8() { return &___MaxFollowDistance_8; }
	inline void set_MaxFollowDistance_8(float value)
	{
		___MaxFollowDistance_8 = value;
	}

	inline static int32_t get_offset_of_MinFollowDistance_9() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MinFollowDistance_9)); }
	inline float get_MinFollowDistance_9() const { return ___MinFollowDistance_9; }
	inline float* get_address_of_MinFollowDistance_9() { return &___MinFollowDistance_9; }
	inline void set_MinFollowDistance_9(float value)
	{
		___MinFollowDistance_9 = value;
	}

	inline static int32_t get_offset_of_ElevationAngle_10() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___ElevationAngle_10)); }
	inline float get_ElevationAngle_10() const { return ___ElevationAngle_10; }
	inline float* get_address_of_ElevationAngle_10() { return &___ElevationAngle_10; }
	inline void set_ElevationAngle_10(float value)
	{
		___ElevationAngle_10 = value;
	}

	inline static int32_t get_offset_of_MaxElevationAngle_11() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MaxElevationAngle_11)); }
	inline float get_MaxElevationAngle_11() const { return ___MaxElevationAngle_11; }
	inline float* get_address_of_MaxElevationAngle_11() { return &___MaxElevationAngle_11; }
	inline void set_MaxElevationAngle_11(float value)
	{
		___MaxElevationAngle_11 = value;
	}

	inline static int32_t get_offset_of_MinElevationAngle_12() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MinElevationAngle_12)); }
	inline float get_MinElevationAngle_12() const { return ___MinElevationAngle_12; }
	inline float* get_address_of_MinElevationAngle_12() { return &___MinElevationAngle_12; }
	inline void set_MinElevationAngle_12(float value)
	{
		___MinElevationAngle_12 = value;
	}

	inline static int32_t get_offset_of_OrbitalAngle_13() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___OrbitalAngle_13)); }
	inline float get_OrbitalAngle_13() const { return ___OrbitalAngle_13; }
	inline float* get_address_of_OrbitalAngle_13() { return &___OrbitalAngle_13; }
	inline void set_OrbitalAngle_13(float value)
	{
		___OrbitalAngle_13 = value;
	}

	inline static int32_t get_offset_of_CameraMode_14() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___CameraMode_14)); }
	inline int32_t get_CameraMode_14() const { return ___CameraMode_14; }
	inline int32_t* get_address_of_CameraMode_14() { return &___CameraMode_14; }
	inline void set_CameraMode_14(int32_t value)
	{
		___CameraMode_14 = value;
	}

	inline static int32_t get_offset_of_MovementSmoothing_15() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MovementSmoothing_15)); }
	inline bool get_MovementSmoothing_15() const { return ___MovementSmoothing_15; }
	inline bool* get_address_of_MovementSmoothing_15() { return &___MovementSmoothing_15; }
	inline void set_MovementSmoothing_15(bool value)
	{
		___MovementSmoothing_15 = value;
	}

	inline static int32_t get_offset_of_RotationSmoothing_16() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___RotationSmoothing_16)); }
	inline bool get_RotationSmoothing_16() const { return ___RotationSmoothing_16; }
	inline bool* get_address_of_RotationSmoothing_16() { return &___RotationSmoothing_16; }
	inline void set_RotationSmoothing_16(bool value)
	{
		___RotationSmoothing_16 = value;
	}

	inline static int32_t get_offset_of_previousSmoothing_17() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___previousSmoothing_17)); }
	inline bool get_previousSmoothing_17() const { return ___previousSmoothing_17; }
	inline bool* get_address_of_previousSmoothing_17() { return &___previousSmoothing_17; }
	inline void set_previousSmoothing_17(bool value)
	{
		___previousSmoothing_17 = value;
	}

	inline static int32_t get_offset_of_MovementSmoothingValue_18() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MovementSmoothingValue_18)); }
	inline float get_MovementSmoothingValue_18() const { return ___MovementSmoothingValue_18; }
	inline float* get_address_of_MovementSmoothingValue_18() { return &___MovementSmoothingValue_18; }
	inline void set_MovementSmoothingValue_18(float value)
	{
		___MovementSmoothingValue_18 = value;
	}

	inline static int32_t get_offset_of_RotationSmoothingValue_19() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___RotationSmoothingValue_19)); }
	inline float get_RotationSmoothingValue_19() const { return ___RotationSmoothingValue_19; }
	inline float* get_address_of_RotationSmoothingValue_19() { return &___RotationSmoothingValue_19; }
	inline void set_RotationSmoothingValue_19(float value)
	{
		___RotationSmoothingValue_19 = value;
	}

	inline static int32_t get_offset_of_MoveSensitivity_20() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___MoveSensitivity_20)); }
	inline float get_MoveSensitivity_20() const { return ___MoveSensitivity_20; }
	inline float* get_address_of_MoveSensitivity_20() { return &___MoveSensitivity_20; }
	inline void set_MoveSensitivity_20(float value)
	{
		___MoveSensitivity_20 = value;
	}

	inline static int32_t get_offset_of_currentVelocity_21() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___currentVelocity_21)); }
	inline Vector3_t4282066566  get_currentVelocity_21() const { return ___currentVelocity_21; }
	inline Vector3_t4282066566 * get_address_of_currentVelocity_21() { return &___currentVelocity_21; }
	inline void set_currentVelocity_21(Vector3_t4282066566  value)
	{
		___currentVelocity_21 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_22() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___desiredPosition_22)); }
	inline Vector3_t4282066566  get_desiredPosition_22() const { return ___desiredPosition_22; }
	inline Vector3_t4282066566 * get_address_of_desiredPosition_22() { return &___desiredPosition_22; }
	inline void set_desiredPosition_22(Vector3_t4282066566  value)
	{
		___desiredPosition_22 = value;
	}

	inline static int32_t get_offset_of_mouseX_23() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___mouseX_23)); }
	inline float get_mouseX_23() const { return ___mouseX_23; }
	inline float* get_address_of_mouseX_23() { return &___mouseX_23; }
	inline void set_mouseX_23(float value)
	{
		___mouseX_23 = value;
	}

	inline static int32_t get_offset_of_mouseY_24() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___mouseY_24)); }
	inline float get_mouseY_24() const { return ___mouseY_24; }
	inline float* get_address_of_mouseY_24() { return &___mouseY_24; }
	inline void set_mouseY_24(float value)
	{
		___mouseY_24 = value;
	}

	inline static int32_t get_offset_of_moveVector_25() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___moveVector_25)); }
	inline Vector3_t4282066566  get_moveVector_25() const { return ___moveVector_25; }
	inline Vector3_t4282066566 * get_address_of_moveVector_25() { return &___moveVector_25; }
	inline void set_moveVector_25(Vector3_t4282066566  value)
	{
		___moveVector_25 = value;
	}

	inline static int32_t get_offset_of_mouseWheel_26() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___mouseWheel_26)); }
	inline float get_mouseWheel_26() const { return ___mouseWheel_26; }
	inline float* get_address_of_mouseWheel_26() { return &___mouseWheel_26; }
	inline void set_mouseWheel_26(float value)
	{
		___mouseWheel_26 = value;
	}

	inline static int32_t get_offset_of_prev_ZoomDelta_27() { return static_cast<int32_t>(offsetof(CameraController_t2463013405, ___prev_ZoomDelta_27)); }
	inline float get_prev_ZoomDelta_27() const { return ___prev_ZoomDelta_27; }
	inline float* get_address_of_prev_ZoomDelta_27() { return &___prev_ZoomDelta_27; }
	inline void set_prev_ZoomDelta_27(float value)
	{
		___prev_ZoomDelta_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
