#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppScript
struct AppScript_t3488119340;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraScript
struct  CameraScript_t3510117488  : public MonoBehaviour_t667441552
{
public:
	// AppScript CameraScript::app
	AppScript_t3488119340 * ___app_2;
	// System.Single CameraScript::moveSpeed
	float ___moveSpeed_3;
	// System.Single CameraScript::rotatePhiSpeed
	float ___rotatePhiSpeed_4;
	// System.Single CameraScript::rotateThetaSpeed
	float ___rotateThetaSpeed_5;
	// System.Single CameraScript::zoomSpeed
	float ___zoomSpeed_6;
	// System.Single CameraScript::touchRotatePhiThreshold
	float ___touchRotatePhiThreshold_7;
	// System.Single CameraScript::touchZoomThreshold
	float ___touchZoomThreshold_8;
	// System.Single CameraScript::touchRotateThetaThreshold
	float ___touchRotateThetaThreshold_9;
	// System.Boolean CameraScript::controlsInUse
	bool ___controlsInUse_10;
	// UnityEngine.Vector2 CameraScript::touch1StartPos
	Vector2_t4282066565  ___touch1StartPos_11;
	// UnityEngine.Vector2 CameraScript::touch2StartPos
	Vector2_t4282066565  ___touch2StartPos_12;
	// System.Boolean CameraScript::firstTouchInMoveMode
	bool ___firstTouchInMoveMode_13;
	// System.Boolean CameraScript::canMove
	bool ___canMove_14;
	// System.Boolean CameraScript::firstTouchInRotateMode
	bool ___firstTouchInRotateMode_15;
	// UnityEngine.Vector3 CameraScript::worldInteractPoint
	Vector3_t4282066566  ___worldInteractPoint_16;
	// UnityEngine.Vector3 CameraScript::oldCamPos
	Vector3_t4282066566  ___oldCamPos_17;
	// UnityEngine.Quaternion CameraScript::oldCamRot
	Quaternion_t1553702882  ___oldCamRot_18;
	// System.Single CameraScript::minHeight
	float ___minHeight_19;
	// System.Single CameraScript::maxHeight
	float ___maxHeight_20;
	// System.Single CameraScript::minAngle
	float ___minAngle_21;
	// System.Single CameraScript::maxAngle
	float ___maxAngle_22;
	// System.Boolean CameraScript::touchRotatePhiZoomMode
	bool ___touchRotatePhiZoomMode_23;
	// System.Boolean CameraScript::touchRotateThetaMode
	bool ___touchRotateThetaMode_24;
	// System.Boolean CameraScript::flying
	bool ___flying_25;
	// UnityEngine.Vector3 CameraScript::targetObjectPosition
	Vector3_t4282066566  ___targetObjectPosition_26;
	// UnityEngine.Vector3 CameraScript::targetPosition
	Vector3_t4282066566  ___targetPosition_27;
	// UnityEngine.Quaternion CameraScript::targetRotation
	Quaternion_t1553702882  ___targetRotation_28;
	// System.Single CameraScript::lookHeight
	float ___lookHeight_29;
	// System.Single CameraScript::lookDistance
	float ___lookDistance_30;
	// System.Boolean CameraScript::overUI
	bool ___overUI_31;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}

	inline static int32_t get_offset_of_moveSpeed_3() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___moveSpeed_3)); }
	inline float get_moveSpeed_3() const { return ___moveSpeed_3; }
	inline float* get_address_of_moveSpeed_3() { return &___moveSpeed_3; }
	inline void set_moveSpeed_3(float value)
	{
		___moveSpeed_3 = value;
	}

	inline static int32_t get_offset_of_rotatePhiSpeed_4() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___rotatePhiSpeed_4)); }
	inline float get_rotatePhiSpeed_4() const { return ___rotatePhiSpeed_4; }
	inline float* get_address_of_rotatePhiSpeed_4() { return &___rotatePhiSpeed_4; }
	inline void set_rotatePhiSpeed_4(float value)
	{
		___rotatePhiSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rotateThetaSpeed_5() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___rotateThetaSpeed_5)); }
	inline float get_rotateThetaSpeed_5() const { return ___rotateThetaSpeed_5; }
	inline float* get_address_of_rotateThetaSpeed_5() { return &___rotateThetaSpeed_5; }
	inline void set_rotateThetaSpeed_5(float value)
	{
		___rotateThetaSpeed_5 = value;
	}

	inline static int32_t get_offset_of_zoomSpeed_6() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___zoomSpeed_6)); }
	inline float get_zoomSpeed_6() const { return ___zoomSpeed_6; }
	inline float* get_address_of_zoomSpeed_6() { return &___zoomSpeed_6; }
	inline void set_zoomSpeed_6(float value)
	{
		___zoomSpeed_6 = value;
	}

	inline static int32_t get_offset_of_touchRotatePhiThreshold_7() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touchRotatePhiThreshold_7)); }
	inline float get_touchRotatePhiThreshold_7() const { return ___touchRotatePhiThreshold_7; }
	inline float* get_address_of_touchRotatePhiThreshold_7() { return &___touchRotatePhiThreshold_7; }
	inline void set_touchRotatePhiThreshold_7(float value)
	{
		___touchRotatePhiThreshold_7 = value;
	}

	inline static int32_t get_offset_of_touchZoomThreshold_8() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touchZoomThreshold_8)); }
	inline float get_touchZoomThreshold_8() const { return ___touchZoomThreshold_8; }
	inline float* get_address_of_touchZoomThreshold_8() { return &___touchZoomThreshold_8; }
	inline void set_touchZoomThreshold_8(float value)
	{
		___touchZoomThreshold_8 = value;
	}

	inline static int32_t get_offset_of_touchRotateThetaThreshold_9() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touchRotateThetaThreshold_9)); }
	inline float get_touchRotateThetaThreshold_9() const { return ___touchRotateThetaThreshold_9; }
	inline float* get_address_of_touchRotateThetaThreshold_9() { return &___touchRotateThetaThreshold_9; }
	inline void set_touchRotateThetaThreshold_9(float value)
	{
		___touchRotateThetaThreshold_9 = value;
	}

	inline static int32_t get_offset_of_controlsInUse_10() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___controlsInUse_10)); }
	inline bool get_controlsInUse_10() const { return ___controlsInUse_10; }
	inline bool* get_address_of_controlsInUse_10() { return &___controlsInUse_10; }
	inline void set_controlsInUse_10(bool value)
	{
		___controlsInUse_10 = value;
	}

	inline static int32_t get_offset_of_touch1StartPos_11() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touch1StartPos_11)); }
	inline Vector2_t4282066565  get_touch1StartPos_11() const { return ___touch1StartPos_11; }
	inline Vector2_t4282066565 * get_address_of_touch1StartPos_11() { return &___touch1StartPos_11; }
	inline void set_touch1StartPos_11(Vector2_t4282066565  value)
	{
		___touch1StartPos_11 = value;
	}

	inline static int32_t get_offset_of_touch2StartPos_12() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touch2StartPos_12)); }
	inline Vector2_t4282066565  get_touch2StartPos_12() const { return ___touch2StartPos_12; }
	inline Vector2_t4282066565 * get_address_of_touch2StartPos_12() { return &___touch2StartPos_12; }
	inline void set_touch2StartPos_12(Vector2_t4282066565  value)
	{
		___touch2StartPos_12 = value;
	}

	inline static int32_t get_offset_of_firstTouchInMoveMode_13() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___firstTouchInMoveMode_13)); }
	inline bool get_firstTouchInMoveMode_13() const { return ___firstTouchInMoveMode_13; }
	inline bool* get_address_of_firstTouchInMoveMode_13() { return &___firstTouchInMoveMode_13; }
	inline void set_firstTouchInMoveMode_13(bool value)
	{
		___firstTouchInMoveMode_13 = value;
	}

	inline static int32_t get_offset_of_canMove_14() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___canMove_14)); }
	inline bool get_canMove_14() const { return ___canMove_14; }
	inline bool* get_address_of_canMove_14() { return &___canMove_14; }
	inline void set_canMove_14(bool value)
	{
		___canMove_14 = value;
	}

	inline static int32_t get_offset_of_firstTouchInRotateMode_15() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___firstTouchInRotateMode_15)); }
	inline bool get_firstTouchInRotateMode_15() const { return ___firstTouchInRotateMode_15; }
	inline bool* get_address_of_firstTouchInRotateMode_15() { return &___firstTouchInRotateMode_15; }
	inline void set_firstTouchInRotateMode_15(bool value)
	{
		___firstTouchInRotateMode_15 = value;
	}

	inline static int32_t get_offset_of_worldInteractPoint_16() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___worldInteractPoint_16)); }
	inline Vector3_t4282066566  get_worldInteractPoint_16() const { return ___worldInteractPoint_16; }
	inline Vector3_t4282066566 * get_address_of_worldInteractPoint_16() { return &___worldInteractPoint_16; }
	inline void set_worldInteractPoint_16(Vector3_t4282066566  value)
	{
		___worldInteractPoint_16 = value;
	}

	inline static int32_t get_offset_of_oldCamPos_17() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___oldCamPos_17)); }
	inline Vector3_t4282066566  get_oldCamPos_17() const { return ___oldCamPos_17; }
	inline Vector3_t4282066566 * get_address_of_oldCamPos_17() { return &___oldCamPos_17; }
	inline void set_oldCamPos_17(Vector3_t4282066566  value)
	{
		___oldCamPos_17 = value;
	}

	inline static int32_t get_offset_of_oldCamRot_18() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___oldCamRot_18)); }
	inline Quaternion_t1553702882  get_oldCamRot_18() const { return ___oldCamRot_18; }
	inline Quaternion_t1553702882 * get_address_of_oldCamRot_18() { return &___oldCamRot_18; }
	inline void set_oldCamRot_18(Quaternion_t1553702882  value)
	{
		___oldCamRot_18 = value;
	}

	inline static int32_t get_offset_of_minHeight_19() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___minHeight_19)); }
	inline float get_minHeight_19() const { return ___minHeight_19; }
	inline float* get_address_of_minHeight_19() { return &___minHeight_19; }
	inline void set_minHeight_19(float value)
	{
		___minHeight_19 = value;
	}

	inline static int32_t get_offset_of_maxHeight_20() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___maxHeight_20)); }
	inline float get_maxHeight_20() const { return ___maxHeight_20; }
	inline float* get_address_of_maxHeight_20() { return &___maxHeight_20; }
	inline void set_maxHeight_20(float value)
	{
		___maxHeight_20 = value;
	}

	inline static int32_t get_offset_of_minAngle_21() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___minAngle_21)); }
	inline float get_minAngle_21() const { return ___minAngle_21; }
	inline float* get_address_of_minAngle_21() { return &___minAngle_21; }
	inline void set_minAngle_21(float value)
	{
		___minAngle_21 = value;
	}

	inline static int32_t get_offset_of_maxAngle_22() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___maxAngle_22)); }
	inline float get_maxAngle_22() const { return ___maxAngle_22; }
	inline float* get_address_of_maxAngle_22() { return &___maxAngle_22; }
	inline void set_maxAngle_22(float value)
	{
		___maxAngle_22 = value;
	}

	inline static int32_t get_offset_of_touchRotatePhiZoomMode_23() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touchRotatePhiZoomMode_23)); }
	inline bool get_touchRotatePhiZoomMode_23() const { return ___touchRotatePhiZoomMode_23; }
	inline bool* get_address_of_touchRotatePhiZoomMode_23() { return &___touchRotatePhiZoomMode_23; }
	inline void set_touchRotatePhiZoomMode_23(bool value)
	{
		___touchRotatePhiZoomMode_23 = value;
	}

	inline static int32_t get_offset_of_touchRotateThetaMode_24() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___touchRotateThetaMode_24)); }
	inline bool get_touchRotateThetaMode_24() const { return ___touchRotateThetaMode_24; }
	inline bool* get_address_of_touchRotateThetaMode_24() { return &___touchRotateThetaMode_24; }
	inline void set_touchRotateThetaMode_24(bool value)
	{
		___touchRotateThetaMode_24 = value;
	}

	inline static int32_t get_offset_of_flying_25() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___flying_25)); }
	inline bool get_flying_25() const { return ___flying_25; }
	inline bool* get_address_of_flying_25() { return &___flying_25; }
	inline void set_flying_25(bool value)
	{
		___flying_25 = value;
	}

	inline static int32_t get_offset_of_targetObjectPosition_26() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___targetObjectPosition_26)); }
	inline Vector3_t4282066566  get_targetObjectPosition_26() const { return ___targetObjectPosition_26; }
	inline Vector3_t4282066566 * get_address_of_targetObjectPosition_26() { return &___targetObjectPosition_26; }
	inline void set_targetObjectPosition_26(Vector3_t4282066566  value)
	{
		___targetObjectPosition_26 = value;
	}

	inline static int32_t get_offset_of_targetPosition_27() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___targetPosition_27)); }
	inline Vector3_t4282066566  get_targetPosition_27() const { return ___targetPosition_27; }
	inline Vector3_t4282066566 * get_address_of_targetPosition_27() { return &___targetPosition_27; }
	inline void set_targetPosition_27(Vector3_t4282066566  value)
	{
		___targetPosition_27 = value;
	}

	inline static int32_t get_offset_of_targetRotation_28() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___targetRotation_28)); }
	inline Quaternion_t1553702882  get_targetRotation_28() const { return ___targetRotation_28; }
	inline Quaternion_t1553702882 * get_address_of_targetRotation_28() { return &___targetRotation_28; }
	inline void set_targetRotation_28(Quaternion_t1553702882  value)
	{
		___targetRotation_28 = value;
	}

	inline static int32_t get_offset_of_lookHeight_29() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___lookHeight_29)); }
	inline float get_lookHeight_29() const { return ___lookHeight_29; }
	inline float* get_address_of_lookHeight_29() { return &___lookHeight_29; }
	inline void set_lookHeight_29(float value)
	{
		___lookHeight_29 = value;
	}

	inline static int32_t get_offset_of_lookDistance_30() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___lookDistance_30)); }
	inline float get_lookDistance_30() const { return ___lookDistance_30; }
	inline float* get_address_of_lookDistance_30() { return &___lookDistance_30; }
	inline void set_lookDistance_30(float value)
	{
		___lookDistance_30 = value;
	}

	inline static int32_t get_offset_of_overUI_31() { return static_cast<int32_t>(offsetof(CameraScript_t3510117488, ___overUI_31)); }
	inline bool get_overUI_31() const { return ___overUI_31; }
	inline bool* get_address_of_overUI_31() { return &___overUI_31; }
	inline void set_overUI_31(bool value)
	{
		___overUI_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
