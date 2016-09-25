#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.ToastAnim
struct  ToastAnim_t1009329086  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MaterialUI.ToastAnim::state
	int32_t ___state_2;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::onPos
	Vector2_t4282066565  ___onPos_3;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::offPos
	Vector2_t4282066565  ___offPos_4;
	// UnityEngine.UI.Text MaterialUI.ToastAnim::text
	Text_t9039225 * ___text_5;
	// UnityEngine.RectTransform MaterialUI.ToastAnim::thisRect
	RectTransform_t972643934 * ___thisRect_6;
	// UnityEngine.UI.Image MaterialUI.ToastAnim::panelImage
	Image_t538875265 * ___panelImage_7;
	// UnityEngine.UI.Image MaterialUI.ToastAnim::shadowImage
	Image_t538875265 * ___shadowImage_8;
	// UnityEngine.CanvasGroup MaterialUI.ToastAnim::canvasGroup
	CanvasGroup_t3702418109 * ___canvasGroup_9;
	// UnityEngine.Color MaterialUI.ToastAnim::tempColor
	Color_t4194546905  ___tempColor_10;
	// UnityEngine.Vector2 MaterialUI.ToastAnim::tempVec2
	Vector2_t4282066565  ___tempVec2_11;
	// UnityEngine.Vector3 MaterialUI.ToastAnim::tempVec3
	Vector3_t4282066566  ___tempVec3_12;
	// System.Single MaterialUI.ToastAnim::timeToWait
	float ___timeToWait_13;
	// System.Single MaterialUI.ToastAnim::animSpeed
	float ___animSpeed_14;

public:
	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___state_2)); }
	inline int32_t get_state_2() const { return ___state_2; }
	inline int32_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(int32_t value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_onPos_3() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___onPos_3)); }
	inline Vector2_t4282066565  get_onPos_3() const { return ___onPos_3; }
	inline Vector2_t4282066565 * get_address_of_onPos_3() { return &___onPos_3; }
	inline void set_onPos_3(Vector2_t4282066565  value)
	{
		___onPos_3 = value;
	}

	inline static int32_t get_offset_of_offPos_4() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___offPos_4)); }
	inline Vector2_t4282066565  get_offPos_4() const { return ___offPos_4; }
	inline Vector2_t4282066565 * get_address_of_offPos_4() { return &___offPos_4; }
	inline void set_offPos_4(Vector2_t4282066565  value)
	{
		___offPos_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___text_5)); }
	inline Text_t9039225 * get_text_5() const { return ___text_5; }
	inline Text_t9039225 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t9039225 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier(&___text_5, value);
	}

	inline static int32_t get_offset_of_thisRect_6() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___thisRect_6)); }
	inline RectTransform_t972643934 * get_thisRect_6() const { return ___thisRect_6; }
	inline RectTransform_t972643934 ** get_address_of_thisRect_6() { return &___thisRect_6; }
	inline void set_thisRect_6(RectTransform_t972643934 * value)
	{
		___thisRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___thisRect_6, value);
	}

	inline static int32_t get_offset_of_panelImage_7() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___panelImage_7)); }
	inline Image_t538875265 * get_panelImage_7() const { return ___panelImage_7; }
	inline Image_t538875265 ** get_address_of_panelImage_7() { return &___panelImage_7; }
	inline void set_panelImage_7(Image_t538875265 * value)
	{
		___panelImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___panelImage_7, value);
	}

	inline static int32_t get_offset_of_shadowImage_8() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___shadowImage_8)); }
	inline Image_t538875265 * get_shadowImage_8() const { return ___shadowImage_8; }
	inline Image_t538875265 ** get_address_of_shadowImage_8() { return &___shadowImage_8; }
	inline void set_shadowImage_8(Image_t538875265 * value)
	{
		___shadowImage_8 = value;
		Il2CppCodeGenWriteBarrier(&___shadowImage_8, value);
	}

	inline static int32_t get_offset_of_canvasGroup_9() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___canvasGroup_9)); }
	inline CanvasGroup_t3702418109 * get_canvasGroup_9() const { return ___canvasGroup_9; }
	inline CanvasGroup_t3702418109 ** get_address_of_canvasGroup_9() { return &___canvasGroup_9; }
	inline void set_canvasGroup_9(CanvasGroup_t3702418109 * value)
	{
		___canvasGroup_9 = value;
		Il2CppCodeGenWriteBarrier(&___canvasGroup_9, value);
	}

	inline static int32_t get_offset_of_tempColor_10() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___tempColor_10)); }
	inline Color_t4194546905  get_tempColor_10() const { return ___tempColor_10; }
	inline Color_t4194546905 * get_address_of_tempColor_10() { return &___tempColor_10; }
	inline void set_tempColor_10(Color_t4194546905  value)
	{
		___tempColor_10 = value;
	}

	inline static int32_t get_offset_of_tempVec2_11() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___tempVec2_11)); }
	inline Vector2_t4282066565  get_tempVec2_11() const { return ___tempVec2_11; }
	inline Vector2_t4282066565 * get_address_of_tempVec2_11() { return &___tempVec2_11; }
	inline void set_tempVec2_11(Vector2_t4282066565  value)
	{
		___tempVec2_11 = value;
	}

	inline static int32_t get_offset_of_tempVec3_12() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___tempVec3_12)); }
	inline Vector3_t4282066566  get_tempVec3_12() const { return ___tempVec3_12; }
	inline Vector3_t4282066566 * get_address_of_tempVec3_12() { return &___tempVec3_12; }
	inline void set_tempVec3_12(Vector3_t4282066566  value)
	{
		___tempVec3_12 = value;
	}

	inline static int32_t get_offset_of_timeToWait_13() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___timeToWait_13)); }
	inline float get_timeToWait_13() const { return ___timeToWait_13; }
	inline float* get_address_of_timeToWait_13() { return &___timeToWait_13; }
	inline void set_timeToWait_13(float value)
	{
		___timeToWait_13 = value;
	}

	inline static int32_t get_offset_of_animSpeed_14() { return static_cast<int32_t>(offsetof(ToastAnim_t1009329086, ___animSpeed_14)); }
	inline float get_animSpeed_14() const { return ___animSpeed_14; }
	inline float* get_address_of_animSpeed_14() { return &___animSpeed_14; }
	inline void set_animSpeed_14(float value)
	{
		___animSpeed_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
