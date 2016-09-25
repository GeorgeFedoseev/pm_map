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
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.NavDrawerConfig
struct  NavDrawerConfig_t210535804  : public MonoBehaviour_t667441552
{
public:
	// System.Single MaterialUI.NavDrawerConfig::maxPosition
	float ___maxPosition_2;
	// System.Single MaterialUI.NavDrawerConfig::minPosition
	float ___minPosition_3;
	// UnityEngine.RectTransform MaterialUI.NavDrawerConfig::thisRectTransform
	RectTransform_t972643934 * ___thisRectTransform_4;
	// UnityEngine.UI.Image MaterialUI.NavDrawerConfig::backgroundImage
	Image_t538875265 * ___backgroundImage_5;
	// UnityEngine.RectTransform MaterialUI.NavDrawerConfig::backgroundRectTransform
	RectTransform_t972643934 * ___backgroundRectTransform_6;
	// UnityEngine.CanvasGroup MaterialUI.NavDrawerConfig::backgroundCanvasGroup
	CanvasGroup_t3702418109 * ___backgroundCanvasGroup_7;
	// UnityEngine.UI.Image MaterialUI.NavDrawerConfig::ShadowImage
	Image_t538875265 * ___ShadowImage_8;
	// UnityEngine.CanvasGroup MaterialUI.NavDrawerConfig::shadowCanvasGroup
	CanvasGroup_t3702418109 * ___shadowCanvasGroup_9;
	// System.Boolean MaterialUI.NavDrawerConfig::darkenBackground
	bool ___darkenBackground_10;
	// System.Boolean MaterialUI.NavDrawerConfig::tapBackgroundToClose
	bool ___tapBackgroundToClose_11;
	// System.Byte MaterialUI.NavDrawerConfig::state
	uint8_t ___state_12;
	// System.Single MaterialUI.NavDrawerConfig::animStartTime
	float ___animStartTime_13;
	// System.Single MaterialUI.NavDrawerConfig::animDeltaTime
	float ___animDeltaTime_14;
	// System.Single MaterialUI.NavDrawerConfig::animationDuration
	float ___animationDuration_15;
	// UnityEngine.Vector2 MaterialUI.NavDrawerConfig::currentPos
	Vector2_t4282066565  ___currentPos_16;
	// System.Single MaterialUI.NavDrawerConfig::currentBackgroundAlpha
	float ___currentBackgroundAlpha_17;
	// System.Single MaterialUI.NavDrawerConfig::currentShadowAlpha
	float ___currentShadowAlpha_18;
	// UnityEngine.Vector2 MaterialUI.NavDrawerConfig::tempVector2
	Vector2_t4282066565  ___tempVector2_19;
	// System.Single MaterialUI.NavDrawerConfig::positionCompensation
	float ___positionCompensation_20;
	// System.Boolean MaterialUI.NavDrawerConfig::enableDrag
	bool ___enableDrag_21;

public:
	inline static int32_t get_offset_of_maxPosition_2() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___maxPosition_2)); }
	inline float get_maxPosition_2() const { return ___maxPosition_2; }
	inline float* get_address_of_maxPosition_2() { return &___maxPosition_2; }
	inline void set_maxPosition_2(float value)
	{
		___maxPosition_2 = value;
	}

	inline static int32_t get_offset_of_minPosition_3() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___minPosition_3)); }
	inline float get_minPosition_3() const { return ___minPosition_3; }
	inline float* get_address_of_minPosition_3() { return &___minPosition_3; }
	inline void set_minPosition_3(float value)
	{
		___minPosition_3 = value;
	}

	inline static int32_t get_offset_of_thisRectTransform_4() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___thisRectTransform_4)); }
	inline RectTransform_t972643934 * get_thisRectTransform_4() const { return ___thisRectTransform_4; }
	inline RectTransform_t972643934 ** get_address_of_thisRectTransform_4() { return &___thisRectTransform_4; }
	inline void set_thisRectTransform_4(RectTransform_t972643934 * value)
	{
		___thisRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisRectTransform_4, value);
	}

	inline static int32_t get_offset_of_backgroundImage_5() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___backgroundImage_5)); }
	inline Image_t538875265 * get_backgroundImage_5() const { return ___backgroundImage_5; }
	inline Image_t538875265 ** get_address_of_backgroundImage_5() { return &___backgroundImage_5; }
	inline void set_backgroundImage_5(Image_t538875265 * value)
	{
		___backgroundImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundImage_5, value);
	}

	inline static int32_t get_offset_of_backgroundRectTransform_6() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___backgroundRectTransform_6)); }
	inline RectTransform_t972643934 * get_backgroundRectTransform_6() const { return ___backgroundRectTransform_6; }
	inline RectTransform_t972643934 ** get_address_of_backgroundRectTransform_6() { return &___backgroundRectTransform_6; }
	inline void set_backgroundRectTransform_6(RectTransform_t972643934 * value)
	{
		___backgroundRectTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundRectTransform_6, value);
	}

	inline static int32_t get_offset_of_backgroundCanvasGroup_7() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___backgroundCanvasGroup_7)); }
	inline CanvasGroup_t3702418109 * get_backgroundCanvasGroup_7() const { return ___backgroundCanvasGroup_7; }
	inline CanvasGroup_t3702418109 ** get_address_of_backgroundCanvasGroup_7() { return &___backgroundCanvasGroup_7; }
	inline void set_backgroundCanvasGroup_7(CanvasGroup_t3702418109 * value)
	{
		___backgroundCanvasGroup_7 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundCanvasGroup_7, value);
	}

	inline static int32_t get_offset_of_ShadowImage_8() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___ShadowImage_8)); }
	inline Image_t538875265 * get_ShadowImage_8() const { return ___ShadowImage_8; }
	inline Image_t538875265 ** get_address_of_ShadowImage_8() { return &___ShadowImage_8; }
	inline void set_ShadowImage_8(Image_t538875265 * value)
	{
		___ShadowImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___ShadowImage_8, value);
	}

	inline static int32_t get_offset_of_shadowCanvasGroup_9() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___shadowCanvasGroup_9)); }
	inline CanvasGroup_t3702418109 * get_shadowCanvasGroup_9() const { return ___shadowCanvasGroup_9; }
	inline CanvasGroup_t3702418109 ** get_address_of_shadowCanvasGroup_9() { return &___shadowCanvasGroup_9; }
	inline void set_shadowCanvasGroup_9(CanvasGroup_t3702418109 * value)
	{
		___shadowCanvasGroup_9 = value;
		Il2CppCodeGenWriteBarrier(&___shadowCanvasGroup_9, value);
	}

	inline static int32_t get_offset_of_darkenBackground_10() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___darkenBackground_10)); }
	inline bool get_darkenBackground_10() const { return ___darkenBackground_10; }
	inline bool* get_address_of_darkenBackground_10() { return &___darkenBackground_10; }
	inline void set_darkenBackground_10(bool value)
	{
		___darkenBackground_10 = value;
	}

	inline static int32_t get_offset_of_tapBackgroundToClose_11() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___tapBackgroundToClose_11)); }
	inline bool get_tapBackgroundToClose_11() const { return ___tapBackgroundToClose_11; }
	inline bool* get_address_of_tapBackgroundToClose_11() { return &___tapBackgroundToClose_11; }
	inline void set_tapBackgroundToClose_11(bool value)
	{
		___tapBackgroundToClose_11 = value;
	}

	inline static int32_t get_offset_of_state_12() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___state_12)); }
	inline uint8_t get_state_12() const { return ___state_12; }
	inline uint8_t* get_address_of_state_12() { return &___state_12; }
	inline void set_state_12(uint8_t value)
	{
		___state_12 = value;
	}

	inline static int32_t get_offset_of_animStartTime_13() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___animStartTime_13)); }
	inline float get_animStartTime_13() const { return ___animStartTime_13; }
	inline float* get_address_of_animStartTime_13() { return &___animStartTime_13; }
	inline void set_animStartTime_13(float value)
	{
		___animStartTime_13 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_14() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___animDeltaTime_14)); }
	inline float get_animDeltaTime_14() const { return ___animDeltaTime_14; }
	inline float* get_address_of_animDeltaTime_14() { return &___animDeltaTime_14; }
	inline void set_animDeltaTime_14(float value)
	{
		___animDeltaTime_14 = value;
	}

	inline static int32_t get_offset_of_animationDuration_15() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___animationDuration_15)); }
	inline float get_animationDuration_15() const { return ___animationDuration_15; }
	inline float* get_address_of_animationDuration_15() { return &___animationDuration_15; }
	inline void set_animationDuration_15(float value)
	{
		___animationDuration_15 = value;
	}

	inline static int32_t get_offset_of_currentPos_16() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___currentPos_16)); }
	inline Vector2_t4282066565  get_currentPos_16() const { return ___currentPos_16; }
	inline Vector2_t4282066565 * get_address_of_currentPos_16() { return &___currentPos_16; }
	inline void set_currentPos_16(Vector2_t4282066565  value)
	{
		___currentPos_16 = value;
	}

	inline static int32_t get_offset_of_currentBackgroundAlpha_17() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___currentBackgroundAlpha_17)); }
	inline float get_currentBackgroundAlpha_17() const { return ___currentBackgroundAlpha_17; }
	inline float* get_address_of_currentBackgroundAlpha_17() { return &___currentBackgroundAlpha_17; }
	inline void set_currentBackgroundAlpha_17(float value)
	{
		___currentBackgroundAlpha_17 = value;
	}

	inline static int32_t get_offset_of_currentShadowAlpha_18() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___currentShadowAlpha_18)); }
	inline float get_currentShadowAlpha_18() const { return ___currentShadowAlpha_18; }
	inline float* get_address_of_currentShadowAlpha_18() { return &___currentShadowAlpha_18; }
	inline void set_currentShadowAlpha_18(float value)
	{
		___currentShadowAlpha_18 = value;
	}

	inline static int32_t get_offset_of_tempVector2_19() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___tempVector2_19)); }
	inline Vector2_t4282066565  get_tempVector2_19() const { return ___tempVector2_19; }
	inline Vector2_t4282066565 * get_address_of_tempVector2_19() { return &___tempVector2_19; }
	inline void set_tempVector2_19(Vector2_t4282066565  value)
	{
		___tempVector2_19 = value;
	}

	inline static int32_t get_offset_of_positionCompensation_20() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___positionCompensation_20)); }
	inline float get_positionCompensation_20() const { return ___positionCompensation_20; }
	inline float* get_address_of_positionCompensation_20() { return &___positionCompensation_20; }
	inline void set_positionCompensation_20(float value)
	{
		___positionCompensation_20 = value;
	}

	inline static int32_t get_offset_of_enableDrag_21() { return static_cast<int32_t>(offsetof(NavDrawerConfig_t210535804, ___enableDrag_21)); }
	inline bool get_enableDrag_21() const { return ___enableDrag_21; }
	inline bool* get_address_of_enableDrag_21() { return &___enableDrag_21; }
	inline void set_enableDrag_21(bool value)
	{
		___enableDrag_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
