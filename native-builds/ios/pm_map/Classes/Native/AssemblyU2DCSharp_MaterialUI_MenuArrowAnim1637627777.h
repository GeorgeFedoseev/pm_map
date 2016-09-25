#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.MenuArrowAnim
struct  MenuArrowAnim_t1637627777  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MaterialUI.MenuArrowAnim::state
	int32_t ___state_2;
	// System.Single MaterialUI.MenuArrowAnim::animStartTime
	float ___animStartTime_3;
	// System.Single MaterialUI.MenuArrowAnim::animDeltaTime
	float ___animDeltaTime_4;
	// System.Single MaterialUI.MenuArrowAnim::animationDuration
	float ___animationDuration_5;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::thisTransform
	RectTransform_t972643934 * ___thisTransform_6;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::topTransform
	RectTransform_t972643934 * ___topTransform_7;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::middleTransform
	RectTransform_t972643934 * ___middleTransform_8;
	// UnityEngine.RectTransform MaterialUI.MenuArrowAnim::bottomTransform
	RectTransform_t972643934 * ___bottomTransform_9;
	// UnityEngine.Vector2 MaterialUI.MenuArrowAnim::tempVector2
	Vector2_t4282066565  ___tempVector2_10;
	// UnityEngine.Vector3 MaterialUI.MenuArrowAnim::tempVector3
	Vector3_t4282066566  ___tempVector3_11;
	// UnityEngine.Quaternion MaterialUI.MenuArrowAnim::tempQuaternion
	Quaternion_t1553702882  ___tempQuaternion_12;
	// System.Boolean MaterialUI.MenuArrowAnim::isArrow
	bool ___isArrow_13;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_animStartTime_3() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___animStartTime_3)); }
	inline float get_animStartTime_3() const { return ___animStartTime_3; }
	inline float* get_address_of_animStartTime_3() { return &___animStartTime_3; }
	inline void set_animStartTime_3(float value)
	{
		___animStartTime_3 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_4() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___animDeltaTime_4)); }
	inline float get_animDeltaTime_4() const { return ___animDeltaTime_4; }
	inline float* get_address_of_animDeltaTime_4() { return &___animDeltaTime_4; }
	inline void set_animDeltaTime_4(float value)
	{
		___animDeltaTime_4 = value;
	}

	inline static int32_t get_offset_of_animationDuration_5() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___animationDuration_5)); }
	inline float get_animationDuration_5() const { return ___animationDuration_5; }
	inline float* get_address_of_animationDuration_5() { return &___animationDuration_5; }
	inline void set_animationDuration_5(float value)
	{
		___animationDuration_5 = value;
	}

	inline static int32_t get_offset_of_thisTransform_6() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___thisTransform_6)); }
	inline RectTransform_t972643934 * get_thisTransform_6() const { return ___thisTransform_6; }
	inline RectTransform_t972643934 ** get_address_of_thisTransform_6() { return &___thisTransform_6; }
	inline void set_thisTransform_6(RectTransform_t972643934 * value)
	{
		___thisTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_6, value);
	}

	inline static int32_t get_offset_of_topTransform_7() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___topTransform_7)); }
	inline RectTransform_t972643934 * get_topTransform_7() const { return ___topTransform_7; }
	inline RectTransform_t972643934 ** get_address_of_topTransform_7() { return &___topTransform_7; }
	inline void set_topTransform_7(RectTransform_t972643934 * value)
	{
		___topTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___topTransform_7, value);
	}

	inline static int32_t get_offset_of_middleTransform_8() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___middleTransform_8)); }
	inline RectTransform_t972643934 * get_middleTransform_8() const { return ___middleTransform_8; }
	inline RectTransform_t972643934 ** get_address_of_middleTransform_8() { return &___middleTransform_8; }
	inline void set_middleTransform_8(RectTransform_t972643934 * value)
	{
		___middleTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___middleTransform_8, value);
	}

	inline static int32_t get_offset_of_bottomTransform_9() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___bottomTransform_9)); }
	inline RectTransform_t972643934 * get_bottomTransform_9() const { return ___bottomTransform_9; }
	inline RectTransform_t972643934 ** get_address_of_bottomTransform_9() { return &___bottomTransform_9; }
	inline void set_bottomTransform_9(RectTransform_t972643934 * value)
	{
		___bottomTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___bottomTransform_9, value);
	}

	inline static int32_t get_offset_of_tempVector2_10() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___tempVector2_10)); }
	inline Vector2_t4282066565  get_tempVector2_10() const { return ___tempVector2_10; }
	inline Vector2_t4282066565 * get_address_of_tempVector2_10() { return &___tempVector2_10; }
	inline void set_tempVector2_10(Vector2_t4282066565  value)
	{
		___tempVector2_10 = value;
	}

	inline static int32_t get_offset_of_tempVector3_11() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___tempVector3_11)); }
	inline Vector3_t4282066566  get_tempVector3_11() const { return ___tempVector3_11; }
	inline Vector3_t4282066566 * get_address_of_tempVector3_11() { return &___tempVector3_11; }
	inline void set_tempVector3_11(Vector3_t4282066566  value)
	{
		___tempVector3_11 = value;
	}

	inline static int32_t get_offset_of_tempQuaternion_12() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___tempQuaternion_12)); }
	inline Quaternion_t1553702882  get_tempQuaternion_12() const { return ___tempQuaternion_12; }
	inline Quaternion_t1553702882 * get_address_of_tempQuaternion_12() { return &___tempQuaternion_12; }
	inline void set_tempQuaternion_12(Quaternion_t1553702882  value)
	{
		___tempQuaternion_12 = value;
	}

	inline static int32_t get_offset_of_isArrow_13() { return static_cast<int32_t>(offsetof(MenuArrowAnim_t1637627777, ___isArrow_13)); }
	inline bool get_isArrow_13() const { return ___isArrow_13; }
	inline bool* get_address_of_isArrow_13() { return &___isArrow_13; }
	inline void set_isArrow_13(bool value)
	{
		___isArrow_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
