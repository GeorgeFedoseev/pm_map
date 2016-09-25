#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.LayoutGroup[]
struct LayoutGroupU5BU5D_t4103962202;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// MaterialUI.RippleAnim
struct RippleAnim_t1751562573;
// UnityEngine.UI.Mask
struct Mask_t8826680;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.Camera
struct Camera_t2727095145;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_MaterialUI_RippleConfig_Highligh2022429008.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.RippleConfig
struct  RippleConfig_t2823880126  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MaterialUI.RippleConfig::autoSize
	bool ___autoSize_2;
	// System.Single MaterialUI.RippleConfig::sizePercentage
	float ___sizePercentage_3;
	// System.Int32 MaterialUI.RippleConfig::rippleSize
	int32_t ___rippleSize_4;
	// System.Single MaterialUI.RippleConfig::rippleSpeed
	float ___rippleSpeed_5;
	// UnityEngine.Color MaterialUI.RippleConfig::rippleColor
	Color_t4194546905  ___rippleColor_6;
	// System.Single MaterialUI.RippleConfig::rippleStartAlpha
	float ___rippleStartAlpha_7;
	// System.Single MaterialUI.RippleConfig::rippleEndAlpha
	float ___rippleEndAlpha_8;
	// UnityEngine.UI.LayoutGroup[] MaterialUI.RippleConfig::groups
	LayoutGroupU5BU5D_t4103962202* ___groups_9;
	// System.Boolean[] MaterialUI.RippleConfig::groupBools
	BooleanU5BU5D_t3456302923* ___groupBools_10;
	// MaterialUI.RippleConfig/HighlightActive MaterialUI.RippleConfig::highlightWhen
	int32_t ___highlightWhen_11;
	// System.Boolean MaterialUI.RippleConfig::moveTowardCenter
	bool ___moveTowardCenter_12;
	// System.Boolean MaterialUI.RippleConfig::toggleMask
	bool ___toggleMask_13;
	// System.Boolean MaterialUI.RippleConfig::dontRippleOnScroll
	bool ___dontRippleOnScroll_14;
	// System.Single MaterialUI.RippleConfig::scrollDelayCheckTime
	float ___scrollDelayCheckTime_15;
	// System.Boolean MaterialUI.RippleConfig::hasLifted
	bool ___hasLifted_16;
	// UnityEngine.Vector2 MaterialUI.RippleConfig::mousePos
	Vector2_t4282066565  ___mousePos_17;
	// MaterialUI.RippleAnim MaterialUI.RippleConfig::currentRippleAnim
	RippleAnim_t1751562573 * ___currentRippleAnim_18;
	// UnityEngine.UI.Mask MaterialUI.RippleConfig::thisMask
	Mask_t8826680 * ___thisMask_19;
	// UnityEngine.Canvas MaterialUI.RippleConfig::theCanvas
	Canvas_t2727140764 * ___theCanvas_20;
	// UnityEngine.Camera MaterialUI.RippleConfig::theCamera
	Camera_t2727095145 * ___theCamera_21;
	// UnityEngine.UI.Image MaterialUI.RippleConfig::thisImage
	Image_t538875265 * ___thisImage_22;
	// System.Boolean MaterialUI.RippleConfig::worldSpace
	bool ___worldSpace_23;
	// UnityEngine.Color MaterialUI.RippleConfig::normalColor
	Color_t4194546905  ___normalColor_24;
	// UnityEngine.Color MaterialUI.RippleConfig::highlightColor
	Color_t4194546905  ___highlightColor_25;
	// UnityEngine.Color MaterialUI.RippleConfig::tempColor
	Color_t4194546905  ___tempColor_26;
	// UnityEngine.Color MaterialUI.RippleConfig::currentColor
	Color_t4194546905  ___currentColor_27;
	// System.Int32 MaterialUI.RippleConfig::state
	int32_t ___state_28;
	// System.Single MaterialUI.RippleConfig::animStartTime
	float ___animStartTime_29;
	// System.Single MaterialUI.RippleConfig::animDeltaTime
	float ___animDeltaTime_30;
	// System.Single MaterialUI.RippleConfig::animationDuration
	float ___animationDuration_31;
	// UnityEngine.Rect MaterialUI.RippleConfig::sizeReferenceRect
	Rect_t4241904616  ___sizeReferenceRect_32;

public:
	inline static int32_t get_offset_of_autoSize_2() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___autoSize_2)); }
	inline bool get_autoSize_2() const { return ___autoSize_2; }
	inline bool* get_address_of_autoSize_2() { return &___autoSize_2; }
	inline void set_autoSize_2(bool value)
	{
		___autoSize_2 = value;
	}

	inline static int32_t get_offset_of_sizePercentage_3() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___sizePercentage_3)); }
	inline float get_sizePercentage_3() const { return ___sizePercentage_3; }
	inline float* get_address_of_sizePercentage_3() { return &___sizePercentage_3; }
	inline void set_sizePercentage_3(float value)
	{
		___sizePercentage_3 = value;
	}

	inline static int32_t get_offset_of_rippleSize_4() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___rippleSize_4)); }
	inline int32_t get_rippleSize_4() const { return ___rippleSize_4; }
	inline int32_t* get_address_of_rippleSize_4() { return &___rippleSize_4; }
	inline void set_rippleSize_4(int32_t value)
	{
		___rippleSize_4 = value;
	}

	inline static int32_t get_offset_of_rippleSpeed_5() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___rippleSpeed_5)); }
	inline float get_rippleSpeed_5() const { return ___rippleSpeed_5; }
	inline float* get_address_of_rippleSpeed_5() { return &___rippleSpeed_5; }
	inline void set_rippleSpeed_5(float value)
	{
		___rippleSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rippleColor_6() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___rippleColor_6)); }
	inline Color_t4194546905  get_rippleColor_6() const { return ___rippleColor_6; }
	inline Color_t4194546905 * get_address_of_rippleColor_6() { return &___rippleColor_6; }
	inline void set_rippleColor_6(Color_t4194546905  value)
	{
		___rippleColor_6 = value;
	}

	inline static int32_t get_offset_of_rippleStartAlpha_7() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___rippleStartAlpha_7)); }
	inline float get_rippleStartAlpha_7() const { return ___rippleStartAlpha_7; }
	inline float* get_address_of_rippleStartAlpha_7() { return &___rippleStartAlpha_7; }
	inline void set_rippleStartAlpha_7(float value)
	{
		___rippleStartAlpha_7 = value;
	}

	inline static int32_t get_offset_of_rippleEndAlpha_8() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___rippleEndAlpha_8)); }
	inline float get_rippleEndAlpha_8() const { return ___rippleEndAlpha_8; }
	inline float* get_address_of_rippleEndAlpha_8() { return &___rippleEndAlpha_8; }
	inline void set_rippleEndAlpha_8(float value)
	{
		___rippleEndAlpha_8 = value;
	}

	inline static int32_t get_offset_of_groups_9() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___groups_9)); }
	inline LayoutGroupU5BU5D_t4103962202* get_groups_9() const { return ___groups_9; }
	inline LayoutGroupU5BU5D_t4103962202** get_address_of_groups_9() { return &___groups_9; }
	inline void set_groups_9(LayoutGroupU5BU5D_t4103962202* value)
	{
		___groups_9 = value;
		Il2CppCodeGenWriteBarrier(&___groups_9, value);
	}

	inline static int32_t get_offset_of_groupBools_10() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___groupBools_10)); }
	inline BooleanU5BU5D_t3456302923* get_groupBools_10() const { return ___groupBools_10; }
	inline BooleanU5BU5D_t3456302923** get_address_of_groupBools_10() { return &___groupBools_10; }
	inline void set_groupBools_10(BooleanU5BU5D_t3456302923* value)
	{
		___groupBools_10 = value;
		Il2CppCodeGenWriteBarrier(&___groupBools_10, value);
	}

	inline static int32_t get_offset_of_highlightWhen_11() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___highlightWhen_11)); }
	inline int32_t get_highlightWhen_11() const { return ___highlightWhen_11; }
	inline int32_t* get_address_of_highlightWhen_11() { return &___highlightWhen_11; }
	inline void set_highlightWhen_11(int32_t value)
	{
		___highlightWhen_11 = value;
	}

	inline static int32_t get_offset_of_moveTowardCenter_12() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___moveTowardCenter_12)); }
	inline bool get_moveTowardCenter_12() const { return ___moveTowardCenter_12; }
	inline bool* get_address_of_moveTowardCenter_12() { return &___moveTowardCenter_12; }
	inline void set_moveTowardCenter_12(bool value)
	{
		___moveTowardCenter_12 = value;
	}

	inline static int32_t get_offset_of_toggleMask_13() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___toggleMask_13)); }
	inline bool get_toggleMask_13() const { return ___toggleMask_13; }
	inline bool* get_address_of_toggleMask_13() { return &___toggleMask_13; }
	inline void set_toggleMask_13(bool value)
	{
		___toggleMask_13 = value;
	}

	inline static int32_t get_offset_of_dontRippleOnScroll_14() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___dontRippleOnScroll_14)); }
	inline bool get_dontRippleOnScroll_14() const { return ___dontRippleOnScroll_14; }
	inline bool* get_address_of_dontRippleOnScroll_14() { return &___dontRippleOnScroll_14; }
	inline void set_dontRippleOnScroll_14(bool value)
	{
		___dontRippleOnScroll_14 = value;
	}

	inline static int32_t get_offset_of_scrollDelayCheckTime_15() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___scrollDelayCheckTime_15)); }
	inline float get_scrollDelayCheckTime_15() const { return ___scrollDelayCheckTime_15; }
	inline float* get_address_of_scrollDelayCheckTime_15() { return &___scrollDelayCheckTime_15; }
	inline void set_scrollDelayCheckTime_15(float value)
	{
		___scrollDelayCheckTime_15 = value;
	}

	inline static int32_t get_offset_of_hasLifted_16() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___hasLifted_16)); }
	inline bool get_hasLifted_16() const { return ___hasLifted_16; }
	inline bool* get_address_of_hasLifted_16() { return &___hasLifted_16; }
	inline void set_hasLifted_16(bool value)
	{
		___hasLifted_16 = value;
	}

	inline static int32_t get_offset_of_mousePos_17() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___mousePos_17)); }
	inline Vector2_t4282066565  get_mousePos_17() const { return ___mousePos_17; }
	inline Vector2_t4282066565 * get_address_of_mousePos_17() { return &___mousePos_17; }
	inline void set_mousePos_17(Vector2_t4282066565  value)
	{
		___mousePos_17 = value;
	}

	inline static int32_t get_offset_of_currentRippleAnim_18() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___currentRippleAnim_18)); }
	inline RippleAnim_t1751562573 * get_currentRippleAnim_18() const { return ___currentRippleAnim_18; }
	inline RippleAnim_t1751562573 ** get_address_of_currentRippleAnim_18() { return &___currentRippleAnim_18; }
	inline void set_currentRippleAnim_18(RippleAnim_t1751562573 * value)
	{
		___currentRippleAnim_18 = value;
		Il2CppCodeGenWriteBarrier(&___currentRippleAnim_18, value);
	}

	inline static int32_t get_offset_of_thisMask_19() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___thisMask_19)); }
	inline Mask_t8826680 * get_thisMask_19() const { return ___thisMask_19; }
	inline Mask_t8826680 ** get_address_of_thisMask_19() { return &___thisMask_19; }
	inline void set_thisMask_19(Mask_t8826680 * value)
	{
		___thisMask_19 = value;
		Il2CppCodeGenWriteBarrier(&___thisMask_19, value);
	}

	inline static int32_t get_offset_of_theCanvas_20() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___theCanvas_20)); }
	inline Canvas_t2727140764 * get_theCanvas_20() const { return ___theCanvas_20; }
	inline Canvas_t2727140764 ** get_address_of_theCanvas_20() { return &___theCanvas_20; }
	inline void set_theCanvas_20(Canvas_t2727140764 * value)
	{
		___theCanvas_20 = value;
		Il2CppCodeGenWriteBarrier(&___theCanvas_20, value);
	}

	inline static int32_t get_offset_of_theCamera_21() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___theCamera_21)); }
	inline Camera_t2727095145 * get_theCamera_21() const { return ___theCamera_21; }
	inline Camera_t2727095145 ** get_address_of_theCamera_21() { return &___theCamera_21; }
	inline void set_theCamera_21(Camera_t2727095145 * value)
	{
		___theCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___theCamera_21, value);
	}

	inline static int32_t get_offset_of_thisImage_22() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___thisImage_22)); }
	inline Image_t538875265 * get_thisImage_22() const { return ___thisImage_22; }
	inline Image_t538875265 ** get_address_of_thisImage_22() { return &___thisImage_22; }
	inline void set_thisImage_22(Image_t538875265 * value)
	{
		___thisImage_22 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_22, value);
	}

	inline static int32_t get_offset_of_worldSpace_23() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___worldSpace_23)); }
	inline bool get_worldSpace_23() const { return ___worldSpace_23; }
	inline bool* get_address_of_worldSpace_23() { return &___worldSpace_23; }
	inline void set_worldSpace_23(bool value)
	{
		___worldSpace_23 = value;
	}

	inline static int32_t get_offset_of_normalColor_24() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___normalColor_24)); }
	inline Color_t4194546905  get_normalColor_24() const { return ___normalColor_24; }
	inline Color_t4194546905 * get_address_of_normalColor_24() { return &___normalColor_24; }
	inline void set_normalColor_24(Color_t4194546905  value)
	{
		___normalColor_24 = value;
	}

	inline static int32_t get_offset_of_highlightColor_25() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___highlightColor_25)); }
	inline Color_t4194546905  get_highlightColor_25() const { return ___highlightColor_25; }
	inline Color_t4194546905 * get_address_of_highlightColor_25() { return &___highlightColor_25; }
	inline void set_highlightColor_25(Color_t4194546905  value)
	{
		___highlightColor_25 = value;
	}

	inline static int32_t get_offset_of_tempColor_26() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___tempColor_26)); }
	inline Color_t4194546905  get_tempColor_26() const { return ___tempColor_26; }
	inline Color_t4194546905 * get_address_of_tempColor_26() { return &___tempColor_26; }
	inline void set_tempColor_26(Color_t4194546905  value)
	{
		___tempColor_26 = value;
	}

	inline static int32_t get_offset_of_currentColor_27() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___currentColor_27)); }
	inline Color_t4194546905  get_currentColor_27() const { return ___currentColor_27; }
	inline Color_t4194546905 * get_address_of_currentColor_27() { return &___currentColor_27; }
	inline void set_currentColor_27(Color_t4194546905  value)
	{
		___currentColor_27 = value;
	}

	inline static int32_t get_offset_of_state_28() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___state_28)); }
	inline int32_t get_state_28() const { return ___state_28; }
	inline int32_t* get_address_of_state_28() { return &___state_28; }
	inline void set_state_28(int32_t value)
	{
		___state_28 = value;
	}

	inline static int32_t get_offset_of_animStartTime_29() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___animStartTime_29)); }
	inline float get_animStartTime_29() const { return ___animStartTime_29; }
	inline float* get_address_of_animStartTime_29() { return &___animStartTime_29; }
	inline void set_animStartTime_29(float value)
	{
		___animStartTime_29 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_30() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___animDeltaTime_30)); }
	inline float get_animDeltaTime_30() const { return ___animDeltaTime_30; }
	inline float* get_address_of_animDeltaTime_30() { return &___animDeltaTime_30; }
	inline void set_animDeltaTime_30(float value)
	{
		___animDeltaTime_30 = value;
	}

	inline static int32_t get_offset_of_animationDuration_31() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___animationDuration_31)); }
	inline float get_animationDuration_31() const { return ___animationDuration_31; }
	inline float* get_address_of_animationDuration_31() { return &___animationDuration_31; }
	inline void set_animationDuration_31(float value)
	{
		___animationDuration_31 = value;
	}

	inline static int32_t get_offset_of_sizeReferenceRect_32() { return static_cast<int32_t>(offsetof(RippleConfig_t2823880126, ___sizeReferenceRect_32)); }
	inline Rect_t4241904616  get_sizeReferenceRect_32() const { return ___sizeReferenceRect_32; }
	inline Rect_t4241904616 * get_address_of_sizeReferenceRect_32() { return &___sizeReferenceRect_32; }
	inline void set_sizeReferenceRect_32(Rect_t4241904616  value)
	{
		___sizeReferenceRect_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
