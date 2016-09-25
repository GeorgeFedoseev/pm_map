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
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// MaterialUI.ScreenConfig
struct ScreenConfig_t3241700090;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_MaterialUI_ScreenConfig_Transitio988256829.h"
#include "AssemblyU2DCSharp_MaterialUI_ScreenConfig_SlideDir3095108828.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ScreenConfig
struct  ScreenConfig_t3241700090  : public MonoBehaviour_t667441552
{
public:
	// System.String MaterialUI.ScreenConfig::screenName
	String_t* ___screenName_2;
	// MaterialUI.ScreenConfig/TransitionType MaterialUI.ScreenConfig::transitionInType
	int32_t ___transitionInType_3;
	// MaterialUI.ScreenConfig/TransitionType MaterialUI.ScreenConfig::transitionOutType
	int32_t ___transitionOutType_4;
	// MaterialUI.ScreenConfig/SlideDirection MaterialUI.ScreenConfig::slideIn
	int32_t ___slideIn_5;
	// System.Single MaterialUI.ScreenConfig::slideInPercent
	float ___slideInPercent_6;
	// System.Boolean MaterialUI.ScreenConfig::scaleIn
	bool ___scaleIn_7;
	// System.Single MaterialUI.ScreenConfig::scaleInStartValue
	float ___scaleInStartValue_8;
	// System.Boolean MaterialUI.ScreenConfig::fadeIn
	bool ___fadeIn_9;
	// System.Single MaterialUI.ScreenConfig::fadeInStartValue
	float ___fadeInStartValue_10;
	// MaterialUI.ScreenConfig/SlideDirection MaterialUI.ScreenConfig::slideOut
	int32_t ___slideOut_11;
	// System.Single MaterialUI.ScreenConfig::slideOutPercent
	float ___slideOutPercent_12;
	// System.Boolean MaterialUI.ScreenConfig::scaleOut
	bool ___scaleOut_13;
	// System.Single MaterialUI.ScreenConfig::scaleOutEndValue
	float ___scaleOutEndValue_14;
	// System.Boolean MaterialUI.ScreenConfig::fadeOut
	bool ___fadeOut_15;
	// System.Single MaterialUI.ScreenConfig::fadeOutEndValue
	float ___fadeOutEndValue_16;
	// System.Int32 MaterialUI.ScreenConfig::state
	int32_t ___state_17;
	// System.Single MaterialUI.ScreenConfig::animStartTime
	float ___animStartTime_18;
	// System.Single MaterialUI.ScreenConfig::animDeltaTime
	float ___animDeltaTime_19;
	// System.Single MaterialUI.ScreenConfig::animationDuration
	float ___animationDuration_20;
	// UnityEngine.RectTransform MaterialUI.ScreenConfig::theRectTransform
	RectTransform_t972643934 * ___theRectTransform_21;
	// UnityEngine.CanvasGroup MaterialUI.ScreenConfig::theCanvasGroup
	CanvasGroup_t3702418109 * ___theCanvasGroup_22;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::slideInDirectionPosition
	Vector2_t4282066565  ___slideInDirectionPosition_23;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::slideOutDirectionPosition
	Vector2_t4282066565  ___slideOutDirectionPosition_24;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::screenDimensions
	Vector2_t4282066565  ___screenDimensions_25;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::tempVector2
	Vector2_t4282066565  ___tempVector2_26;
	// UnityEngine.Vector3 MaterialUI.ScreenConfig::tempVector3
	Vector3_t4282066566  ___tempVector3_27;
	// UnityEngine.GameObject MaterialUI.ScreenConfig::screenSpace
	GameObject_t3674682005 * ___screenSpace_28;
	// UnityEngine.RectTransform MaterialUI.ScreenConfig::currentRipple
	RectTransform_t972643934 * ___currentRipple_29;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::screenSpacePosition
	Vector2_t4282066565  ___screenSpacePosition_30;
	// System.Single MaterialUI.ScreenConfig::rippleSize
	float ___rippleSize_31;
	// UnityEngine.Vector2 MaterialUI.ScreenConfig::thisScreenSize
	Vector2_t4282066565  ___thisScreenSize_32;
	// MaterialUI.ScreenConfig MaterialUI.ScreenConfig::hideScreen
	ScreenConfig_t3241700090 * ___hideScreen_33;

public:
	inline static int32_t get_offset_of_screenName_2() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___screenName_2)); }
	inline String_t* get_screenName_2() const { return ___screenName_2; }
	inline String_t** get_address_of_screenName_2() { return &___screenName_2; }
	inline void set_screenName_2(String_t* value)
	{
		___screenName_2 = value;
		Il2CppCodeGenWriteBarrier(&___screenName_2, value);
	}

	inline static int32_t get_offset_of_transitionInType_3() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___transitionInType_3)); }
	inline int32_t get_transitionInType_3() const { return ___transitionInType_3; }
	inline int32_t* get_address_of_transitionInType_3() { return &___transitionInType_3; }
	inline void set_transitionInType_3(int32_t value)
	{
		___transitionInType_3 = value;
	}

	inline static int32_t get_offset_of_transitionOutType_4() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___transitionOutType_4)); }
	inline int32_t get_transitionOutType_4() const { return ___transitionOutType_4; }
	inline int32_t* get_address_of_transitionOutType_4() { return &___transitionOutType_4; }
	inline void set_transitionOutType_4(int32_t value)
	{
		___transitionOutType_4 = value;
	}

	inline static int32_t get_offset_of_slideIn_5() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___slideIn_5)); }
	inline int32_t get_slideIn_5() const { return ___slideIn_5; }
	inline int32_t* get_address_of_slideIn_5() { return &___slideIn_5; }
	inline void set_slideIn_5(int32_t value)
	{
		___slideIn_5 = value;
	}

	inline static int32_t get_offset_of_slideInPercent_6() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___slideInPercent_6)); }
	inline float get_slideInPercent_6() const { return ___slideInPercent_6; }
	inline float* get_address_of_slideInPercent_6() { return &___slideInPercent_6; }
	inline void set_slideInPercent_6(float value)
	{
		___slideInPercent_6 = value;
	}

	inline static int32_t get_offset_of_scaleIn_7() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___scaleIn_7)); }
	inline bool get_scaleIn_7() const { return ___scaleIn_7; }
	inline bool* get_address_of_scaleIn_7() { return &___scaleIn_7; }
	inline void set_scaleIn_7(bool value)
	{
		___scaleIn_7 = value;
	}

	inline static int32_t get_offset_of_scaleInStartValue_8() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___scaleInStartValue_8)); }
	inline float get_scaleInStartValue_8() const { return ___scaleInStartValue_8; }
	inline float* get_address_of_scaleInStartValue_8() { return &___scaleInStartValue_8; }
	inline void set_scaleInStartValue_8(float value)
	{
		___scaleInStartValue_8 = value;
	}

	inline static int32_t get_offset_of_fadeIn_9() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___fadeIn_9)); }
	inline bool get_fadeIn_9() const { return ___fadeIn_9; }
	inline bool* get_address_of_fadeIn_9() { return &___fadeIn_9; }
	inline void set_fadeIn_9(bool value)
	{
		___fadeIn_9 = value;
	}

	inline static int32_t get_offset_of_fadeInStartValue_10() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___fadeInStartValue_10)); }
	inline float get_fadeInStartValue_10() const { return ___fadeInStartValue_10; }
	inline float* get_address_of_fadeInStartValue_10() { return &___fadeInStartValue_10; }
	inline void set_fadeInStartValue_10(float value)
	{
		___fadeInStartValue_10 = value;
	}

	inline static int32_t get_offset_of_slideOut_11() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___slideOut_11)); }
	inline int32_t get_slideOut_11() const { return ___slideOut_11; }
	inline int32_t* get_address_of_slideOut_11() { return &___slideOut_11; }
	inline void set_slideOut_11(int32_t value)
	{
		___slideOut_11 = value;
	}

	inline static int32_t get_offset_of_slideOutPercent_12() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___slideOutPercent_12)); }
	inline float get_slideOutPercent_12() const { return ___slideOutPercent_12; }
	inline float* get_address_of_slideOutPercent_12() { return &___slideOutPercent_12; }
	inline void set_slideOutPercent_12(float value)
	{
		___slideOutPercent_12 = value;
	}

	inline static int32_t get_offset_of_scaleOut_13() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___scaleOut_13)); }
	inline bool get_scaleOut_13() const { return ___scaleOut_13; }
	inline bool* get_address_of_scaleOut_13() { return &___scaleOut_13; }
	inline void set_scaleOut_13(bool value)
	{
		___scaleOut_13 = value;
	}

	inline static int32_t get_offset_of_scaleOutEndValue_14() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___scaleOutEndValue_14)); }
	inline float get_scaleOutEndValue_14() const { return ___scaleOutEndValue_14; }
	inline float* get_address_of_scaleOutEndValue_14() { return &___scaleOutEndValue_14; }
	inline void set_scaleOutEndValue_14(float value)
	{
		___scaleOutEndValue_14 = value;
	}

	inline static int32_t get_offset_of_fadeOut_15() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___fadeOut_15)); }
	inline bool get_fadeOut_15() const { return ___fadeOut_15; }
	inline bool* get_address_of_fadeOut_15() { return &___fadeOut_15; }
	inline void set_fadeOut_15(bool value)
	{
		___fadeOut_15 = value;
	}

	inline static int32_t get_offset_of_fadeOutEndValue_16() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___fadeOutEndValue_16)); }
	inline float get_fadeOutEndValue_16() const { return ___fadeOutEndValue_16; }
	inline float* get_address_of_fadeOutEndValue_16() { return &___fadeOutEndValue_16; }
	inline void set_fadeOutEndValue_16(float value)
	{
		___fadeOutEndValue_16 = value;
	}

	inline static int32_t get_offset_of_state_17() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___state_17)); }
	inline int32_t get_state_17() const { return ___state_17; }
	inline int32_t* get_address_of_state_17() { return &___state_17; }
	inline void set_state_17(int32_t value)
	{
		___state_17 = value;
	}

	inline static int32_t get_offset_of_animStartTime_18() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___animStartTime_18)); }
	inline float get_animStartTime_18() const { return ___animStartTime_18; }
	inline float* get_address_of_animStartTime_18() { return &___animStartTime_18; }
	inline void set_animStartTime_18(float value)
	{
		___animStartTime_18 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_19() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___animDeltaTime_19)); }
	inline float get_animDeltaTime_19() const { return ___animDeltaTime_19; }
	inline float* get_address_of_animDeltaTime_19() { return &___animDeltaTime_19; }
	inline void set_animDeltaTime_19(float value)
	{
		___animDeltaTime_19 = value;
	}

	inline static int32_t get_offset_of_animationDuration_20() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___animationDuration_20)); }
	inline float get_animationDuration_20() const { return ___animationDuration_20; }
	inline float* get_address_of_animationDuration_20() { return &___animationDuration_20; }
	inline void set_animationDuration_20(float value)
	{
		___animationDuration_20 = value;
	}

	inline static int32_t get_offset_of_theRectTransform_21() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___theRectTransform_21)); }
	inline RectTransform_t972643934 * get_theRectTransform_21() const { return ___theRectTransform_21; }
	inline RectTransform_t972643934 ** get_address_of_theRectTransform_21() { return &___theRectTransform_21; }
	inline void set_theRectTransform_21(RectTransform_t972643934 * value)
	{
		___theRectTransform_21 = value;
		Il2CppCodeGenWriteBarrier(&___theRectTransform_21, value);
	}

	inline static int32_t get_offset_of_theCanvasGroup_22() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___theCanvasGroup_22)); }
	inline CanvasGroup_t3702418109 * get_theCanvasGroup_22() const { return ___theCanvasGroup_22; }
	inline CanvasGroup_t3702418109 ** get_address_of_theCanvasGroup_22() { return &___theCanvasGroup_22; }
	inline void set_theCanvasGroup_22(CanvasGroup_t3702418109 * value)
	{
		___theCanvasGroup_22 = value;
		Il2CppCodeGenWriteBarrier(&___theCanvasGroup_22, value);
	}

	inline static int32_t get_offset_of_slideInDirectionPosition_23() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___slideInDirectionPosition_23)); }
	inline Vector2_t4282066565  get_slideInDirectionPosition_23() const { return ___slideInDirectionPosition_23; }
	inline Vector2_t4282066565 * get_address_of_slideInDirectionPosition_23() { return &___slideInDirectionPosition_23; }
	inline void set_slideInDirectionPosition_23(Vector2_t4282066565  value)
	{
		___slideInDirectionPosition_23 = value;
	}

	inline static int32_t get_offset_of_slideOutDirectionPosition_24() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___slideOutDirectionPosition_24)); }
	inline Vector2_t4282066565  get_slideOutDirectionPosition_24() const { return ___slideOutDirectionPosition_24; }
	inline Vector2_t4282066565 * get_address_of_slideOutDirectionPosition_24() { return &___slideOutDirectionPosition_24; }
	inline void set_slideOutDirectionPosition_24(Vector2_t4282066565  value)
	{
		___slideOutDirectionPosition_24 = value;
	}

	inline static int32_t get_offset_of_screenDimensions_25() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___screenDimensions_25)); }
	inline Vector2_t4282066565  get_screenDimensions_25() const { return ___screenDimensions_25; }
	inline Vector2_t4282066565 * get_address_of_screenDimensions_25() { return &___screenDimensions_25; }
	inline void set_screenDimensions_25(Vector2_t4282066565  value)
	{
		___screenDimensions_25 = value;
	}

	inline static int32_t get_offset_of_tempVector2_26() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___tempVector2_26)); }
	inline Vector2_t4282066565  get_tempVector2_26() const { return ___tempVector2_26; }
	inline Vector2_t4282066565 * get_address_of_tempVector2_26() { return &___tempVector2_26; }
	inline void set_tempVector2_26(Vector2_t4282066565  value)
	{
		___tempVector2_26 = value;
	}

	inline static int32_t get_offset_of_tempVector3_27() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___tempVector3_27)); }
	inline Vector3_t4282066566  get_tempVector3_27() const { return ___tempVector3_27; }
	inline Vector3_t4282066566 * get_address_of_tempVector3_27() { return &___tempVector3_27; }
	inline void set_tempVector3_27(Vector3_t4282066566  value)
	{
		___tempVector3_27 = value;
	}

	inline static int32_t get_offset_of_screenSpace_28() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___screenSpace_28)); }
	inline GameObject_t3674682005 * get_screenSpace_28() const { return ___screenSpace_28; }
	inline GameObject_t3674682005 ** get_address_of_screenSpace_28() { return &___screenSpace_28; }
	inline void set_screenSpace_28(GameObject_t3674682005 * value)
	{
		___screenSpace_28 = value;
		Il2CppCodeGenWriteBarrier(&___screenSpace_28, value);
	}

	inline static int32_t get_offset_of_currentRipple_29() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___currentRipple_29)); }
	inline RectTransform_t972643934 * get_currentRipple_29() const { return ___currentRipple_29; }
	inline RectTransform_t972643934 ** get_address_of_currentRipple_29() { return &___currentRipple_29; }
	inline void set_currentRipple_29(RectTransform_t972643934 * value)
	{
		___currentRipple_29 = value;
		Il2CppCodeGenWriteBarrier(&___currentRipple_29, value);
	}

	inline static int32_t get_offset_of_screenSpacePosition_30() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___screenSpacePosition_30)); }
	inline Vector2_t4282066565  get_screenSpacePosition_30() const { return ___screenSpacePosition_30; }
	inline Vector2_t4282066565 * get_address_of_screenSpacePosition_30() { return &___screenSpacePosition_30; }
	inline void set_screenSpacePosition_30(Vector2_t4282066565  value)
	{
		___screenSpacePosition_30 = value;
	}

	inline static int32_t get_offset_of_rippleSize_31() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___rippleSize_31)); }
	inline float get_rippleSize_31() const { return ___rippleSize_31; }
	inline float* get_address_of_rippleSize_31() { return &___rippleSize_31; }
	inline void set_rippleSize_31(float value)
	{
		___rippleSize_31 = value;
	}

	inline static int32_t get_offset_of_thisScreenSize_32() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___thisScreenSize_32)); }
	inline Vector2_t4282066565  get_thisScreenSize_32() const { return ___thisScreenSize_32; }
	inline Vector2_t4282066565 * get_address_of_thisScreenSize_32() { return &___thisScreenSize_32; }
	inline void set_thisScreenSize_32(Vector2_t4282066565  value)
	{
		___thisScreenSize_32 = value;
	}

	inline static int32_t get_offset_of_hideScreen_33() { return static_cast<int32_t>(offsetof(ScreenConfig_t3241700090, ___hideScreen_33)); }
	inline ScreenConfig_t3241700090 * get_hideScreen_33() const { return ___hideScreen_33; }
	inline ScreenConfig_t3241700090 ** get_address_of_hideScreen_33() { return &___hideScreen_33; }
	inline void set_hideScreen_33(ScreenConfig_t3241700090 * value)
	{
		___hideScreen_33 = value;
		Il2CppCodeGenWriteBarrier(&___hideScreen_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
