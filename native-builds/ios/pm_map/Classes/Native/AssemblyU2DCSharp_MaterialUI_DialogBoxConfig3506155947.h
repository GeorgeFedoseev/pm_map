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
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.DialogBoxConfig
struct  DialogBoxConfig_t3506155947  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MaterialUI.DialogBoxConfig::darkenBackground
	bool ___darkenBackground_2;
	// System.Boolean MaterialUI.DialogBoxConfig::canClickBackgroundToCancel
	bool ___canClickBackgroundToCancel_3;
	// System.Single MaterialUI.DialogBoxConfig::animationDuration
	float ___animationDuration_4;
	// UnityEngine.RectTransform MaterialUI.DialogBoxConfig::backgroundTransform
	RectTransform_t972643934 * ___backgroundTransform_5;
	// System.Int32 MaterialUI.DialogBoxConfig::state
	int32_t ___state_6;
	// System.Single MaterialUI.DialogBoxConfig::animStartTime
	float ___animStartTime_7;
	// System.Single MaterialUI.DialogBoxConfig::animDeltaTime
	float ___animDeltaTime_8;
	// UnityEngine.RectTransform MaterialUI.DialogBoxConfig::thisRectTransform
	RectTransform_t972643934 * ___thisRectTransform_9;
	// UnityEngine.CanvasGroup MaterialUI.DialogBoxConfig::backroundCanvasGroup
	CanvasGroup_t3702418109 * ___backroundCanvasGroup_10;
	// System.Single MaterialUI.DialogBoxConfig::currentBackgroundAlpha
	float ___currentBackgroundAlpha_11;
	// System.Single MaterialUI.DialogBoxConfig::currentPivotY
	float ___currentPivotY_12;
	// System.Single MaterialUI.DialogBoxConfig::currentAnchorMinY
	float ___currentAnchorMinY_13;
	// System.Single MaterialUI.DialogBoxConfig::currentAnchorMaxY
	float ___currentAnchorMaxY_14;
	// UnityEngine.Vector2 MaterialUI.DialogBoxConfig::tempVector2
	Vector2_t4282066565  ___tempVector2_15;

public:
	inline static int32_t get_offset_of_darkenBackground_2() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___darkenBackground_2)); }
	inline bool get_darkenBackground_2() const { return ___darkenBackground_2; }
	inline bool* get_address_of_darkenBackground_2() { return &___darkenBackground_2; }
	inline void set_darkenBackground_2(bool value)
	{
		___darkenBackground_2 = value;
	}

	inline static int32_t get_offset_of_canClickBackgroundToCancel_3() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___canClickBackgroundToCancel_3)); }
	inline bool get_canClickBackgroundToCancel_3() const { return ___canClickBackgroundToCancel_3; }
	inline bool* get_address_of_canClickBackgroundToCancel_3() { return &___canClickBackgroundToCancel_3; }
	inline void set_canClickBackgroundToCancel_3(bool value)
	{
		___canClickBackgroundToCancel_3 = value;
	}

	inline static int32_t get_offset_of_animationDuration_4() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___animationDuration_4)); }
	inline float get_animationDuration_4() const { return ___animationDuration_4; }
	inline float* get_address_of_animationDuration_4() { return &___animationDuration_4; }
	inline void set_animationDuration_4(float value)
	{
		___animationDuration_4 = value;
	}

	inline static int32_t get_offset_of_backgroundTransform_5() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___backgroundTransform_5)); }
	inline RectTransform_t972643934 * get_backgroundTransform_5() const { return ___backgroundTransform_5; }
	inline RectTransform_t972643934 ** get_address_of_backgroundTransform_5() { return &___backgroundTransform_5; }
	inline void set_backgroundTransform_5(RectTransform_t972643934 * value)
	{
		___backgroundTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundTransform_5, value);
	}

	inline static int32_t get_offset_of_state_6() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___state_6)); }
	inline int32_t get_state_6() const { return ___state_6; }
	inline int32_t* get_address_of_state_6() { return &___state_6; }
	inline void set_state_6(int32_t value)
	{
		___state_6 = value;
	}

	inline static int32_t get_offset_of_animStartTime_7() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___animStartTime_7)); }
	inline float get_animStartTime_7() const { return ___animStartTime_7; }
	inline float* get_address_of_animStartTime_7() { return &___animStartTime_7; }
	inline void set_animStartTime_7(float value)
	{
		___animStartTime_7 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_8() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___animDeltaTime_8)); }
	inline float get_animDeltaTime_8() const { return ___animDeltaTime_8; }
	inline float* get_address_of_animDeltaTime_8() { return &___animDeltaTime_8; }
	inline void set_animDeltaTime_8(float value)
	{
		___animDeltaTime_8 = value;
	}

	inline static int32_t get_offset_of_thisRectTransform_9() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___thisRectTransform_9)); }
	inline RectTransform_t972643934 * get_thisRectTransform_9() const { return ___thisRectTransform_9; }
	inline RectTransform_t972643934 ** get_address_of_thisRectTransform_9() { return &___thisRectTransform_9; }
	inline void set_thisRectTransform_9(RectTransform_t972643934 * value)
	{
		___thisRectTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___thisRectTransform_9, value);
	}

	inline static int32_t get_offset_of_backroundCanvasGroup_10() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___backroundCanvasGroup_10)); }
	inline CanvasGroup_t3702418109 * get_backroundCanvasGroup_10() const { return ___backroundCanvasGroup_10; }
	inline CanvasGroup_t3702418109 ** get_address_of_backroundCanvasGroup_10() { return &___backroundCanvasGroup_10; }
	inline void set_backroundCanvasGroup_10(CanvasGroup_t3702418109 * value)
	{
		___backroundCanvasGroup_10 = value;
		Il2CppCodeGenWriteBarrier(&___backroundCanvasGroup_10, value);
	}

	inline static int32_t get_offset_of_currentBackgroundAlpha_11() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___currentBackgroundAlpha_11)); }
	inline float get_currentBackgroundAlpha_11() const { return ___currentBackgroundAlpha_11; }
	inline float* get_address_of_currentBackgroundAlpha_11() { return &___currentBackgroundAlpha_11; }
	inline void set_currentBackgroundAlpha_11(float value)
	{
		___currentBackgroundAlpha_11 = value;
	}

	inline static int32_t get_offset_of_currentPivotY_12() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___currentPivotY_12)); }
	inline float get_currentPivotY_12() const { return ___currentPivotY_12; }
	inline float* get_address_of_currentPivotY_12() { return &___currentPivotY_12; }
	inline void set_currentPivotY_12(float value)
	{
		___currentPivotY_12 = value;
	}

	inline static int32_t get_offset_of_currentAnchorMinY_13() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___currentAnchorMinY_13)); }
	inline float get_currentAnchorMinY_13() const { return ___currentAnchorMinY_13; }
	inline float* get_address_of_currentAnchorMinY_13() { return &___currentAnchorMinY_13; }
	inline void set_currentAnchorMinY_13(float value)
	{
		___currentAnchorMinY_13 = value;
	}

	inline static int32_t get_offset_of_currentAnchorMaxY_14() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___currentAnchorMaxY_14)); }
	inline float get_currentAnchorMaxY_14() const { return ___currentAnchorMaxY_14; }
	inline float* get_address_of_currentAnchorMaxY_14() { return &___currentAnchorMaxY_14; }
	inline void set_currentAnchorMaxY_14(float value)
	{
		___currentAnchorMaxY_14 = value;
	}

	inline static int32_t get_offset_of_tempVector2_15() { return static_cast<int32_t>(offsetof(DialogBoxConfig_t3506155947, ___tempVector2_15)); }
	inline Vector2_t4282066565  get_tempVector2_15() const { return ___tempVector2_15; }
	inline Vector2_t4282066565 * get_address_of_tempVector2_15() { return &___tempVector2_15; }
	inline void set_tempVector2_15(Vector2_t4282066565  value)
	{
		___tempVector2_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
