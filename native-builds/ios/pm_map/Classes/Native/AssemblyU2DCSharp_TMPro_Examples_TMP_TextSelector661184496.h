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
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.TMP_TextSelector
struct  TMP_TextSelector_t661184496  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform TMPro.Examples.TMP_TextSelector::TextPopup_Prefab_01
	RectTransform_t972643934 * ___TextPopup_Prefab_01_4;
	// UnityEngine.RectTransform TMPro.Examples.TMP_TextSelector::m_TextPopup_RectTransform
	RectTransform_t972643934 * ___m_TextPopup_RectTransform_5;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector::m_TextPopup_TMPComponent
	TextMeshProUGUI_t3603375195 * ___m_TextPopup_TMPComponent_6;
	// UnityEngine.Transform TMPro.Examples.TMP_TextSelector::m_WordLabelObject
	Transform_t1659122786 * ___m_WordLabelObject_7;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector::m_WordLabel_TMP_Component
	TextMeshProUGUI_t3603375195 * ___m_WordLabel_TMP_Component_8;
	// TMPro.TextMeshProUGUI TMPro.Examples.TMP_TextSelector::m_TextMeshPro
	TextMeshProUGUI_t3603375195 * ___m_TextMeshPro_9;
	// UnityEngine.Canvas TMPro.Examples.TMP_TextSelector::m_Canvas
	Canvas_t2727140764 * ___m_Canvas_10;
	// UnityEngine.Camera TMPro.Examples.TMP_TextSelector::m_Camera
	Camera_t2727095145 * ___m_Camera_11;
	// System.Boolean TMPro.Examples.TMP_TextSelector::isHoveringObject
	bool ___isHoveringObject_12;
	// System.Int32 TMPro.Examples.TMP_TextSelector::m_selectedWord
	int32_t ___m_selectedWord_13;
	// System.Int32 TMPro.Examples.TMP_TextSelector::m_selectedLink
	int32_t ___m_selectedLink_14;
	// System.Int32 TMPro.Examples.TMP_TextSelector::m_lastIndex
	int32_t ___m_lastIndex_15;

public:
	inline static int32_t get_offset_of_TextPopup_Prefab_01_4() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___TextPopup_Prefab_01_4)); }
	inline RectTransform_t972643934 * get_TextPopup_Prefab_01_4() const { return ___TextPopup_Prefab_01_4; }
	inline RectTransform_t972643934 ** get_address_of_TextPopup_Prefab_01_4() { return &___TextPopup_Prefab_01_4; }
	inline void set_TextPopup_Prefab_01_4(RectTransform_t972643934 * value)
	{
		___TextPopup_Prefab_01_4 = value;
		Il2CppCodeGenWriteBarrier(&___TextPopup_Prefab_01_4, value);
	}

	inline static int32_t get_offset_of_m_TextPopup_RectTransform_5() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_TextPopup_RectTransform_5)); }
	inline RectTransform_t972643934 * get_m_TextPopup_RectTransform_5() const { return ___m_TextPopup_RectTransform_5; }
	inline RectTransform_t972643934 ** get_address_of_m_TextPopup_RectTransform_5() { return &___m_TextPopup_RectTransform_5; }
	inline void set_m_TextPopup_RectTransform_5(RectTransform_t972643934 * value)
	{
		___m_TextPopup_RectTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextPopup_RectTransform_5, value);
	}

	inline static int32_t get_offset_of_m_TextPopup_TMPComponent_6() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_TextPopup_TMPComponent_6)); }
	inline TextMeshProUGUI_t3603375195 * get_m_TextPopup_TMPComponent_6() const { return ___m_TextPopup_TMPComponent_6; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_m_TextPopup_TMPComponent_6() { return &___m_TextPopup_TMPComponent_6; }
	inline void set_m_TextPopup_TMPComponent_6(TextMeshProUGUI_t3603375195 * value)
	{
		___m_TextPopup_TMPComponent_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextPopup_TMPComponent_6, value);
	}

	inline static int32_t get_offset_of_m_WordLabelObject_7() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_WordLabelObject_7)); }
	inline Transform_t1659122786 * get_m_WordLabelObject_7() const { return ___m_WordLabelObject_7; }
	inline Transform_t1659122786 ** get_address_of_m_WordLabelObject_7() { return &___m_WordLabelObject_7; }
	inline void set_m_WordLabelObject_7(Transform_t1659122786 * value)
	{
		___m_WordLabelObject_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_WordLabelObject_7, value);
	}

	inline static int32_t get_offset_of_m_WordLabel_TMP_Component_8() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_WordLabel_TMP_Component_8)); }
	inline TextMeshProUGUI_t3603375195 * get_m_WordLabel_TMP_Component_8() const { return ___m_WordLabel_TMP_Component_8; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_m_WordLabel_TMP_Component_8() { return &___m_WordLabel_TMP_Component_8; }
	inline void set_m_WordLabel_TMP_Component_8(TextMeshProUGUI_t3603375195 * value)
	{
		___m_WordLabel_TMP_Component_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_WordLabel_TMP_Component_8, value);
	}

	inline static int32_t get_offset_of_m_TextMeshPro_9() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_TextMeshPro_9)); }
	inline TextMeshProUGUI_t3603375195 * get_m_TextMeshPro_9() const { return ___m_TextMeshPro_9; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_m_TextMeshPro_9() { return &___m_TextMeshPro_9; }
	inline void set_m_TextMeshPro_9(TextMeshProUGUI_t3603375195 * value)
	{
		___m_TextMeshPro_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextMeshPro_9, value);
	}

	inline static int32_t get_offset_of_m_Canvas_10() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_Canvas_10)); }
	inline Canvas_t2727140764 * get_m_Canvas_10() const { return ___m_Canvas_10; }
	inline Canvas_t2727140764 ** get_address_of_m_Canvas_10() { return &___m_Canvas_10; }
	inline void set_m_Canvas_10(Canvas_t2727140764 * value)
	{
		___m_Canvas_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_10, value);
	}

	inline static int32_t get_offset_of_m_Camera_11() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_Camera_11)); }
	inline Camera_t2727095145 * get_m_Camera_11() const { return ___m_Camera_11; }
	inline Camera_t2727095145 ** get_address_of_m_Camera_11() { return &___m_Camera_11; }
	inline void set_m_Camera_11(Camera_t2727095145 * value)
	{
		___m_Camera_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Camera_11, value);
	}

	inline static int32_t get_offset_of_isHoveringObject_12() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___isHoveringObject_12)); }
	inline bool get_isHoveringObject_12() const { return ___isHoveringObject_12; }
	inline bool* get_address_of_isHoveringObject_12() { return &___isHoveringObject_12; }
	inline void set_isHoveringObject_12(bool value)
	{
		___isHoveringObject_12 = value;
	}

	inline static int32_t get_offset_of_m_selectedWord_13() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_selectedWord_13)); }
	inline int32_t get_m_selectedWord_13() const { return ___m_selectedWord_13; }
	inline int32_t* get_address_of_m_selectedWord_13() { return &___m_selectedWord_13; }
	inline void set_m_selectedWord_13(int32_t value)
	{
		___m_selectedWord_13 = value;
	}

	inline static int32_t get_offset_of_m_selectedLink_14() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_selectedLink_14)); }
	inline int32_t get_m_selectedLink_14() const { return ___m_selectedLink_14; }
	inline int32_t* get_address_of_m_selectedLink_14() { return &___m_selectedLink_14; }
	inline void set_m_selectedLink_14(int32_t value)
	{
		___m_selectedLink_14 = value;
	}

	inline static int32_t get_offset_of_m_lastIndex_15() { return static_cast<int32_t>(offsetof(TMP_TextSelector_t661184496, ___m_lastIndex_15)); }
	inline int32_t get_m_lastIndex_15() const { return ___m_lastIndex_15; }
	inline int32_t* get_address_of_m_lastIndex_15() { return &___m_lastIndex_15; }
	inline void set_m_lastIndex_15(int32_t value)
	{
		___m_lastIndex_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
