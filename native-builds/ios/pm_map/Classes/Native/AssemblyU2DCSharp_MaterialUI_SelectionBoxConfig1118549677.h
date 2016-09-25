#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.ShadowConfig
struct ShadowConfig_t3345927342;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// MaterialUI.RippleConfig
struct RippleConfig_t2823880126;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// MaterialUI.SelectionBoxConfig/PickItem
struct PickItem_t1900684047;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_MaterialUI_SelectionBoxConfig_Hi2232208447.h"
#include "AssemblyU2DCSharp_MaterialUI_SelectionBoxConfig_Po2332071657.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MaterialUI.SelectionBoxConfig
struct  SelectionBoxConfig_t1118549677  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean MaterialUI.SelectionBoxConfig::rippleEnabled
	bool ___rippleEnabled_2;
	// System.Int32 MaterialUI.SelectionBoxConfig::rippleSize
	int32_t ___rippleSize_3;
	// System.Single MaterialUI.SelectionBoxConfig::rippleSpeed
	float ___rippleSpeed_4;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::rippleColor
	Color_t4194546905  ___rippleColor_5;
	// System.Single MaterialUI.SelectionBoxConfig::rippleStartAlpha
	float ___rippleStartAlpha_6;
	// System.Single MaterialUI.SelectionBoxConfig::rippleEndAlpha
	float ___rippleEndAlpha_7;
	// MaterialUI.SelectionBoxConfig/HighlightActive MaterialUI.SelectionBoxConfig::highlightWhen
	int32_t ___highlightWhen_8;
	// System.Boolean MaterialUI.SelectionBoxConfig::moveTowardCenter
	bool ___moveTowardCenter_9;
	// System.Boolean MaterialUI.SelectionBoxConfig::toggleMask
	bool ___toggleMask_10;
	// System.Boolean MaterialUI.SelectionBoxConfig::highlightLastSelected
	bool ___highlightLastSelected_11;
	// System.Single MaterialUI.SelectionBoxConfig::animationDuration
	float ___animationDuration_12;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::expandedListColor
	Color_t4194546905  ___expandedListColor_13;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::contractedListColor
	Color_t4194546905  ___contractedListColor_14;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::currentColor
	Color_t4194546905  ___currentColor_15;
	// System.Int32 MaterialUI.SelectionBoxConfig::expandedListShadowLevel
	int32_t ___expandedListShadowLevel_16;
	// MaterialUI.ShadowConfig MaterialUI.SelectionBoxConfig::shadowConfig
	ShadowConfig_t3345927342 * ___shadowConfig_17;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedNormalShadow
	int32_t ___contractedNormalShadow_18;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedHoverShadow
	int32_t ___contractedHoverShadow_19;
	// System.String[] MaterialUI.SelectionBoxConfig::listItems
	StringU5BU5D_t4054002952* ___listItems_20;
	// System.String MaterialUI.SelectionBoxConfig::defaultText
	String_t* ___defaultText_21;
	// System.Boolean MaterialUI.SelectionBoxConfig::autoMaxItemHeight
	bool ___autoMaxItemHeight_22;
	// System.Single MaterialUI.SelectionBoxConfig::percentageOfScreenHeight
	float ___percentageOfScreenHeight_23;
	// System.Int32 MaterialUI.SelectionBoxConfig::manualMaxItemHeight
	int32_t ___manualMaxItemHeight_24;
	// System.Single MaterialUI.SelectionBoxConfig::itemHeight
	float ___itemHeight_25;
	// System.Int32 MaterialUI.SelectionBoxConfig::currentSelection
	int32_t ___currentSelection_26;
	// MaterialUI.SelectionBoxConfig/PopDirection MaterialUI.SelectionBoxConfig::expandDirection
	int32_t ___expandDirection_27;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listLayer
	GameObject_t3674682005 * ___listLayer_28;
	// UnityEngine.UI.Text MaterialUI.SelectionBoxConfig::selectedText
	Text_t9039225 * ___selectedText_29;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::cancelLayer
	Image_t538875265 * ___cancelLayer_30;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::scrollbar
	Image_t538875265 * ___scrollbar_31;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::icon
	Image_t538875265 * ___icon_32;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::textLine
	Image_t538875265 * ___textLine_33;
	// System.Single MaterialUI.SelectionBoxConfig::textLineAlpha
	float ___textLineAlpha_34;
	// UnityEngine.GameObject[] MaterialUI.SelectionBoxConfig::listItemObjects
	GameObjectU5BU5D_t2662109048* ___listItemObjects_35;
	// System.Single MaterialUI.SelectionBoxConfig::listheight
	float ___listheight_36;
	// System.Single MaterialUI.SelectionBoxConfig::listLayerHeight
	float ___listLayerHeight_37;
	// System.Single MaterialUI.SelectionBoxConfig::listPos
	float ___listPos_38;
	// System.Boolean MaterialUI.SelectionBoxConfig::hasShadows
	bool ___hasShadows_39;
	// System.Int32 MaterialUI.SelectionBoxConfig::contractedShadowLevel
	int32_t ___contractedShadowLevel_40;
	// MaterialUI.RippleConfig MaterialUI.SelectionBoxConfig::rippleConfig
	RippleConfig_t2823880126 * ___rippleConfig_41;
	// UnityEngine.UI.Button MaterialUI.SelectionBoxConfig::thisButton
	Button_t3896396478 * ___thisButton_42;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listItemPrefab
	GameObject_t3674682005 * ___listItemPrefab_43;
	// UnityEngine.GameObject MaterialUI.SelectionBoxConfig::listItem
	GameObject_t3674682005 * ___listItem_44;
	// UnityEngine.CanvasGroup MaterialUI.SelectionBoxConfig::listCanvasGroup
	CanvasGroup_t3702418109 * ___listCanvasGroup_45;
	// UnityEngine.RectTransform MaterialUI.SelectionBoxConfig::thisRect
	RectTransform_t972643934 * ___thisRect_46;
	// UnityEngine.UI.Image MaterialUI.SelectionBoxConfig::thisImage
	Image_t538875265 * ___thisImage_47;
	// UnityEngine.CanvasGroup MaterialUI.SelectionBoxConfig::scrollbarCanvasGroup
	CanvasGroup_t3702418109 * ___scrollbarCanvasGroup_48;
	// System.Single MaterialUI.SelectionBoxConfig::originalHeight
	float ___originalHeight_49;
	// System.Single MaterialUI.SelectionBoxConfig::expandedPos
	float ___expandedPos_50;
	// System.Single MaterialUI.SelectionBoxConfig::originalPos
	float ___originalPos_51;
	// UnityEngine.Vector3 MaterialUI.SelectionBoxConfig::textPos
	Vector3_t4282066566  ___textPos_52;
	// UnityEngine.Vector3 MaterialUI.SelectionBoxConfig::iconPos
	Vector3_t4282066566  ___iconPos_53;
	// System.Single MaterialUI.SelectionBoxConfig::listCanvasAlpha
	float ___listCanvasAlpha_54;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::normalColor
	Color_t4194546905  ___normalColor_55;
	// UnityEngine.Color MaterialUI.SelectionBoxConfig::highlightColor
	Color_t4194546905  ___highlightColor_56;
	// System.Single MaterialUI.SelectionBoxConfig::animStartTime
	float ___animStartTime_57;
	// System.Single MaterialUI.SelectionBoxConfig::animDeltaTime
	float ___animDeltaTime_58;
	// System.Int32 MaterialUI.SelectionBoxConfig::state
	int32_t ___state_59;
	// System.Boolean MaterialUI.SelectionBoxConfig::scrollbarEnabled
	bool ___scrollbarEnabled_60;
	// MaterialUI.SelectionBoxConfig/PickItem MaterialUI.SelectionBoxConfig::ItemPicked
	PickItem_t1900684047 * ___ItemPicked_61;
	// UnityEngine.Transform MaterialUI.SelectionBoxConfig::parentTransform
	Transform_t1659122786 * ___parentTransform_62;
	// System.Boolean MaterialUI.SelectionBoxConfig::expanded
	bool ___expanded_63;

public:
	inline static int32_t get_offset_of_rippleEnabled_2() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleEnabled_2)); }
	inline bool get_rippleEnabled_2() const { return ___rippleEnabled_2; }
	inline bool* get_address_of_rippleEnabled_2() { return &___rippleEnabled_2; }
	inline void set_rippleEnabled_2(bool value)
	{
		___rippleEnabled_2 = value;
	}

	inline static int32_t get_offset_of_rippleSize_3() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleSize_3)); }
	inline int32_t get_rippleSize_3() const { return ___rippleSize_3; }
	inline int32_t* get_address_of_rippleSize_3() { return &___rippleSize_3; }
	inline void set_rippleSize_3(int32_t value)
	{
		___rippleSize_3 = value;
	}

	inline static int32_t get_offset_of_rippleSpeed_4() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleSpeed_4)); }
	inline float get_rippleSpeed_4() const { return ___rippleSpeed_4; }
	inline float* get_address_of_rippleSpeed_4() { return &___rippleSpeed_4; }
	inline void set_rippleSpeed_4(float value)
	{
		___rippleSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rippleColor_5() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleColor_5)); }
	inline Color_t4194546905  get_rippleColor_5() const { return ___rippleColor_5; }
	inline Color_t4194546905 * get_address_of_rippleColor_5() { return &___rippleColor_5; }
	inline void set_rippleColor_5(Color_t4194546905  value)
	{
		___rippleColor_5 = value;
	}

	inline static int32_t get_offset_of_rippleStartAlpha_6() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleStartAlpha_6)); }
	inline float get_rippleStartAlpha_6() const { return ___rippleStartAlpha_6; }
	inline float* get_address_of_rippleStartAlpha_6() { return &___rippleStartAlpha_6; }
	inline void set_rippleStartAlpha_6(float value)
	{
		___rippleStartAlpha_6 = value;
	}

	inline static int32_t get_offset_of_rippleEndAlpha_7() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleEndAlpha_7)); }
	inline float get_rippleEndAlpha_7() const { return ___rippleEndAlpha_7; }
	inline float* get_address_of_rippleEndAlpha_7() { return &___rippleEndAlpha_7; }
	inline void set_rippleEndAlpha_7(float value)
	{
		___rippleEndAlpha_7 = value;
	}

	inline static int32_t get_offset_of_highlightWhen_8() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___highlightWhen_8)); }
	inline int32_t get_highlightWhen_8() const { return ___highlightWhen_8; }
	inline int32_t* get_address_of_highlightWhen_8() { return &___highlightWhen_8; }
	inline void set_highlightWhen_8(int32_t value)
	{
		___highlightWhen_8 = value;
	}

	inline static int32_t get_offset_of_moveTowardCenter_9() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___moveTowardCenter_9)); }
	inline bool get_moveTowardCenter_9() const { return ___moveTowardCenter_9; }
	inline bool* get_address_of_moveTowardCenter_9() { return &___moveTowardCenter_9; }
	inline void set_moveTowardCenter_9(bool value)
	{
		___moveTowardCenter_9 = value;
	}

	inline static int32_t get_offset_of_toggleMask_10() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___toggleMask_10)); }
	inline bool get_toggleMask_10() const { return ___toggleMask_10; }
	inline bool* get_address_of_toggleMask_10() { return &___toggleMask_10; }
	inline void set_toggleMask_10(bool value)
	{
		___toggleMask_10 = value;
	}

	inline static int32_t get_offset_of_highlightLastSelected_11() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___highlightLastSelected_11)); }
	inline bool get_highlightLastSelected_11() const { return ___highlightLastSelected_11; }
	inline bool* get_address_of_highlightLastSelected_11() { return &___highlightLastSelected_11; }
	inline void set_highlightLastSelected_11(bool value)
	{
		___highlightLastSelected_11 = value;
	}

	inline static int32_t get_offset_of_animationDuration_12() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___animationDuration_12)); }
	inline float get_animationDuration_12() const { return ___animationDuration_12; }
	inline float* get_address_of_animationDuration_12() { return &___animationDuration_12; }
	inline void set_animationDuration_12(float value)
	{
		___animationDuration_12 = value;
	}

	inline static int32_t get_offset_of_expandedListColor_13() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___expandedListColor_13)); }
	inline Color_t4194546905  get_expandedListColor_13() const { return ___expandedListColor_13; }
	inline Color_t4194546905 * get_address_of_expandedListColor_13() { return &___expandedListColor_13; }
	inline void set_expandedListColor_13(Color_t4194546905  value)
	{
		___expandedListColor_13 = value;
	}

	inline static int32_t get_offset_of_contractedListColor_14() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___contractedListColor_14)); }
	inline Color_t4194546905  get_contractedListColor_14() const { return ___contractedListColor_14; }
	inline Color_t4194546905 * get_address_of_contractedListColor_14() { return &___contractedListColor_14; }
	inline void set_contractedListColor_14(Color_t4194546905  value)
	{
		___contractedListColor_14 = value;
	}

	inline static int32_t get_offset_of_currentColor_15() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___currentColor_15)); }
	inline Color_t4194546905  get_currentColor_15() const { return ___currentColor_15; }
	inline Color_t4194546905 * get_address_of_currentColor_15() { return &___currentColor_15; }
	inline void set_currentColor_15(Color_t4194546905  value)
	{
		___currentColor_15 = value;
	}

	inline static int32_t get_offset_of_expandedListShadowLevel_16() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___expandedListShadowLevel_16)); }
	inline int32_t get_expandedListShadowLevel_16() const { return ___expandedListShadowLevel_16; }
	inline int32_t* get_address_of_expandedListShadowLevel_16() { return &___expandedListShadowLevel_16; }
	inline void set_expandedListShadowLevel_16(int32_t value)
	{
		___expandedListShadowLevel_16 = value;
	}

	inline static int32_t get_offset_of_shadowConfig_17() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___shadowConfig_17)); }
	inline ShadowConfig_t3345927342 * get_shadowConfig_17() const { return ___shadowConfig_17; }
	inline ShadowConfig_t3345927342 ** get_address_of_shadowConfig_17() { return &___shadowConfig_17; }
	inline void set_shadowConfig_17(ShadowConfig_t3345927342 * value)
	{
		___shadowConfig_17 = value;
		Il2CppCodeGenWriteBarrier(&___shadowConfig_17, value);
	}

	inline static int32_t get_offset_of_contractedNormalShadow_18() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___contractedNormalShadow_18)); }
	inline int32_t get_contractedNormalShadow_18() const { return ___contractedNormalShadow_18; }
	inline int32_t* get_address_of_contractedNormalShadow_18() { return &___contractedNormalShadow_18; }
	inline void set_contractedNormalShadow_18(int32_t value)
	{
		___contractedNormalShadow_18 = value;
	}

	inline static int32_t get_offset_of_contractedHoverShadow_19() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___contractedHoverShadow_19)); }
	inline int32_t get_contractedHoverShadow_19() const { return ___contractedHoverShadow_19; }
	inline int32_t* get_address_of_contractedHoverShadow_19() { return &___contractedHoverShadow_19; }
	inline void set_contractedHoverShadow_19(int32_t value)
	{
		___contractedHoverShadow_19 = value;
	}

	inline static int32_t get_offset_of_listItems_20() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listItems_20)); }
	inline StringU5BU5D_t4054002952* get_listItems_20() const { return ___listItems_20; }
	inline StringU5BU5D_t4054002952** get_address_of_listItems_20() { return &___listItems_20; }
	inline void set_listItems_20(StringU5BU5D_t4054002952* value)
	{
		___listItems_20 = value;
		Il2CppCodeGenWriteBarrier(&___listItems_20, value);
	}

	inline static int32_t get_offset_of_defaultText_21() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___defaultText_21)); }
	inline String_t* get_defaultText_21() const { return ___defaultText_21; }
	inline String_t** get_address_of_defaultText_21() { return &___defaultText_21; }
	inline void set_defaultText_21(String_t* value)
	{
		___defaultText_21 = value;
		Il2CppCodeGenWriteBarrier(&___defaultText_21, value);
	}

	inline static int32_t get_offset_of_autoMaxItemHeight_22() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___autoMaxItemHeight_22)); }
	inline bool get_autoMaxItemHeight_22() const { return ___autoMaxItemHeight_22; }
	inline bool* get_address_of_autoMaxItemHeight_22() { return &___autoMaxItemHeight_22; }
	inline void set_autoMaxItemHeight_22(bool value)
	{
		___autoMaxItemHeight_22 = value;
	}

	inline static int32_t get_offset_of_percentageOfScreenHeight_23() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___percentageOfScreenHeight_23)); }
	inline float get_percentageOfScreenHeight_23() const { return ___percentageOfScreenHeight_23; }
	inline float* get_address_of_percentageOfScreenHeight_23() { return &___percentageOfScreenHeight_23; }
	inline void set_percentageOfScreenHeight_23(float value)
	{
		___percentageOfScreenHeight_23 = value;
	}

	inline static int32_t get_offset_of_manualMaxItemHeight_24() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___manualMaxItemHeight_24)); }
	inline int32_t get_manualMaxItemHeight_24() const { return ___manualMaxItemHeight_24; }
	inline int32_t* get_address_of_manualMaxItemHeight_24() { return &___manualMaxItemHeight_24; }
	inline void set_manualMaxItemHeight_24(int32_t value)
	{
		___manualMaxItemHeight_24 = value;
	}

	inline static int32_t get_offset_of_itemHeight_25() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___itemHeight_25)); }
	inline float get_itemHeight_25() const { return ___itemHeight_25; }
	inline float* get_address_of_itemHeight_25() { return &___itemHeight_25; }
	inline void set_itemHeight_25(float value)
	{
		___itemHeight_25 = value;
	}

	inline static int32_t get_offset_of_currentSelection_26() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___currentSelection_26)); }
	inline int32_t get_currentSelection_26() const { return ___currentSelection_26; }
	inline int32_t* get_address_of_currentSelection_26() { return &___currentSelection_26; }
	inline void set_currentSelection_26(int32_t value)
	{
		___currentSelection_26 = value;
	}

	inline static int32_t get_offset_of_expandDirection_27() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___expandDirection_27)); }
	inline int32_t get_expandDirection_27() const { return ___expandDirection_27; }
	inline int32_t* get_address_of_expandDirection_27() { return &___expandDirection_27; }
	inline void set_expandDirection_27(int32_t value)
	{
		___expandDirection_27 = value;
	}

	inline static int32_t get_offset_of_listLayer_28() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listLayer_28)); }
	inline GameObject_t3674682005 * get_listLayer_28() const { return ___listLayer_28; }
	inline GameObject_t3674682005 ** get_address_of_listLayer_28() { return &___listLayer_28; }
	inline void set_listLayer_28(GameObject_t3674682005 * value)
	{
		___listLayer_28 = value;
		Il2CppCodeGenWriteBarrier(&___listLayer_28, value);
	}

	inline static int32_t get_offset_of_selectedText_29() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___selectedText_29)); }
	inline Text_t9039225 * get_selectedText_29() const { return ___selectedText_29; }
	inline Text_t9039225 ** get_address_of_selectedText_29() { return &___selectedText_29; }
	inline void set_selectedText_29(Text_t9039225 * value)
	{
		___selectedText_29 = value;
		Il2CppCodeGenWriteBarrier(&___selectedText_29, value);
	}

	inline static int32_t get_offset_of_cancelLayer_30() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___cancelLayer_30)); }
	inline Image_t538875265 * get_cancelLayer_30() const { return ___cancelLayer_30; }
	inline Image_t538875265 ** get_address_of_cancelLayer_30() { return &___cancelLayer_30; }
	inline void set_cancelLayer_30(Image_t538875265 * value)
	{
		___cancelLayer_30 = value;
		Il2CppCodeGenWriteBarrier(&___cancelLayer_30, value);
	}

	inline static int32_t get_offset_of_scrollbar_31() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___scrollbar_31)); }
	inline Image_t538875265 * get_scrollbar_31() const { return ___scrollbar_31; }
	inline Image_t538875265 ** get_address_of_scrollbar_31() { return &___scrollbar_31; }
	inline void set_scrollbar_31(Image_t538875265 * value)
	{
		___scrollbar_31 = value;
		Il2CppCodeGenWriteBarrier(&___scrollbar_31, value);
	}

	inline static int32_t get_offset_of_icon_32() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___icon_32)); }
	inline Image_t538875265 * get_icon_32() const { return ___icon_32; }
	inline Image_t538875265 ** get_address_of_icon_32() { return &___icon_32; }
	inline void set_icon_32(Image_t538875265 * value)
	{
		___icon_32 = value;
		Il2CppCodeGenWriteBarrier(&___icon_32, value);
	}

	inline static int32_t get_offset_of_textLine_33() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___textLine_33)); }
	inline Image_t538875265 * get_textLine_33() const { return ___textLine_33; }
	inline Image_t538875265 ** get_address_of_textLine_33() { return &___textLine_33; }
	inline void set_textLine_33(Image_t538875265 * value)
	{
		___textLine_33 = value;
		Il2CppCodeGenWriteBarrier(&___textLine_33, value);
	}

	inline static int32_t get_offset_of_textLineAlpha_34() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___textLineAlpha_34)); }
	inline float get_textLineAlpha_34() const { return ___textLineAlpha_34; }
	inline float* get_address_of_textLineAlpha_34() { return &___textLineAlpha_34; }
	inline void set_textLineAlpha_34(float value)
	{
		___textLineAlpha_34 = value;
	}

	inline static int32_t get_offset_of_listItemObjects_35() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listItemObjects_35)); }
	inline GameObjectU5BU5D_t2662109048* get_listItemObjects_35() const { return ___listItemObjects_35; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_listItemObjects_35() { return &___listItemObjects_35; }
	inline void set_listItemObjects_35(GameObjectU5BU5D_t2662109048* value)
	{
		___listItemObjects_35 = value;
		Il2CppCodeGenWriteBarrier(&___listItemObjects_35, value);
	}

	inline static int32_t get_offset_of_listheight_36() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listheight_36)); }
	inline float get_listheight_36() const { return ___listheight_36; }
	inline float* get_address_of_listheight_36() { return &___listheight_36; }
	inline void set_listheight_36(float value)
	{
		___listheight_36 = value;
	}

	inline static int32_t get_offset_of_listLayerHeight_37() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listLayerHeight_37)); }
	inline float get_listLayerHeight_37() const { return ___listLayerHeight_37; }
	inline float* get_address_of_listLayerHeight_37() { return &___listLayerHeight_37; }
	inline void set_listLayerHeight_37(float value)
	{
		___listLayerHeight_37 = value;
	}

	inline static int32_t get_offset_of_listPos_38() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listPos_38)); }
	inline float get_listPos_38() const { return ___listPos_38; }
	inline float* get_address_of_listPos_38() { return &___listPos_38; }
	inline void set_listPos_38(float value)
	{
		___listPos_38 = value;
	}

	inline static int32_t get_offset_of_hasShadows_39() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___hasShadows_39)); }
	inline bool get_hasShadows_39() const { return ___hasShadows_39; }
	inline bool* get_address_of_hasShadows_39() { return &___hasShadows_39; }
	inline void set_hasShadows_39(bool value)
	{
		___hasShadows_39 = value;
	}

	inline static int32_t get_offset_of_contractedShadowLevel_40() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___contractedShadowLevel_40)); }
	inline int32_t get_contractedShadowLevel_40() const { return ___contractedShadowLevel_40; }
	inline int32_t* get_address_of_contractedShadowLevel_40() { return &___contractedShadowLevel_40; }
	inline void set_contractedShadowLevel_40(int32_t value)
	{
		___contractedShadowLevel_40 = value;
	}

	inline static int32_t get_offset_of_rippleConfig_41() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___rippleConfig_41)); }
	inline RippleConfig_t2823880126 * get_rippleConfig_41() const { return ___rippleConfig_41; }
	inline RippleConfig_t2823880126 ** get_address_of_rippleConfig_41() { return &___rippleConfig_41; }
	inline void set_rippleConfig_41(RippleConfig_t2823880126 * value)
	{
		___rippleConfig_41 = value;
		Il2CppCodeGenWriteBarrier(&___rippleConfig_41, value);
	}

	inline static int32_t get_offset_of_thisButton_42() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___thisButton_42)); }
	inline Button_t3896396478 * get_thisButton_42() const { return ___thisButton_42; }
	inline Button_t3896396478 ** get_address_of_thisButton_42() { return &___thisButton_42; }
	inline void set_thisButton_42(Button_t3896396478 * value)
	{
		___thisButton_42 = value;
		Il2CppCodeGenWriteBarrier(&___thisButton_42, value);
	}

	inline static int32_t get_offset_of_listItemPrefab_43() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listItemPrefab_43)); }
	inline GameObject_t3674682005 * get_listItemPrefab_43() const { return ___listItemPrefab_43; }
	inline GameObject_t3674682005 ** get_address_of_listItemPrefab_43() { return &___listItemPrefab_43; }
	inline void set_listItemPrefab_43(GameObject_t3674682005 * value)
	{
		___listItemPrefab_43 = value;
		Il2CppCodeGenWriteBarrier(&___listItemPrefab_43, value);
	}

	inline static int32_t get_offset_of_listItem_44() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listItem_44)); }
	inline GameObject_t3674682005 * get_listItem_44() const { return ___listItem_44; }
	inline GameObject_t3674682005 ** get_address_of_listItem_44() { return &___listItem_44; }
	inline void set_listItem_44(GameObject_t3674682005 * value)
	{
		___listItem_44 = value;
		Il2CppCodeGenWriteBarrier(&___listItem_44, value);
	}

	inline static int32_t get_offset_of_listCanvasGroup_45() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listCanvasGroup_45)); }
	inline CanvasGroup_t3702418109 * get_listCanvasGroup_45() const { return ___listCanvasGroup_45; }
	inline CanvasGroup_t3702418109 ** get_address_of_listCanvasGroup_45() { return &___listCanvasGroup_45; }
	inline void set_listCanvasGroup_45(CanvasGroup_t3702418109 * value)
	{
		___listCanvasGroup_45 = value;
		Il2CppCodeGenWriteBarrier(&___listCanvasGroup_45, value);
	}

	inline static int32_t get_offset_of_thisRect_46() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___thisRect_46)); }
	inline RectTransform_t972643934 * get_thisRect_46() const { return ___thisRect_46; }
	inline RectTransform_t972643934 ** get_address_of_thisRect_46() { return &___thisRect_46; }
	inline void set_thisRect_46(RectTransform_t972643934 * value)
	{
		___thisRect_46 = value;
		Il2CppCodeGenWriteBarrier(&___thisRect_46, value);
	}

	inline static int32_t get_offset_of_thisImage_47() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___thisImage_47)); }
	inline Image_t538875265 * get_thisImage_47() const { return ___thisImage_47; }
	inline Image_t538875265 ** get_address_of_thisImage_47() { return &___thisImage_47; }
	inline void set_thisImage_47(Image_t538875265 * value)
	{
		___thisImage_47 = value;
		Il2CppCodeGenWriteBarrier(&___thisImage_47, value);
	}

	inline static int32_t get_offset_of_scrollbarCanvasGroup_48() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___scrollbarCanvasGroup_48)); }
	inline CanvasGroup_t3702418109 * get_scrollbarCanvasGroup_48() const { return ___scrollbarCanvasGroup_48; }
	inline CanvasGroup_t3702418109 ** get_address_of_scrollbarCanvasGroup_48() { return &___scrollbarCanvasGroup_48; }
	inline void set_scrollbarCanvasGroup_48(CanvasGroup_t3702418109 * value)
	{
		___scrollbarCanvasGroup_48 = value;
		Il2CppCodeGenWriteBarrier(&___scrollbarCanvasGroup_48, value);
	}

	inline static int32_t get_offset_of_originalHeight_49() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___originalHeight_49)); }
	inline float get_originalHeight_49() const { return ___originalHeight_49; }
	inline float* get_address_of_originalHeight_49() { return &___originalHeight_49; }
	inline void set_originalHeight_49(float value)
	{
		___originalHeight_49 = value;
	}

	inline static int32_t get_offset_of_expandedPos_50() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___expandedPos_50)); }
	inline float get_expandedPos_50() const { return ___expandedPos_50; }
	inline float* get_address_of_expandedPos_50() { return &___expandedPos_50; }
	inline void set_expandedPos_50(float value)
	{
		___expandedPos_50 = value;
	}

	inline static int32_t get_offset_of_originalPos_51() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___originalPos_51)); }
	inline float get_originalPos_51() const { return ___originalPos_51; }
	inline float* get_address_of_originalPos_51() { return &___originalPos_51; }
	inline void set_originalPos_51(float value)
	{
		___originalPos_51 = value;
	}

	inline static int32_t get_offset_of_textPos_52() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___textPos_52)); }
	inline Vector3_t4282066566  get_textPos_52() const { return ___textPos_52; }
	inline Vector3_t4282066566 * get_address_of_textPos_52() { return &___textPos_52; }
	inline void set_textPos_52(Vector3_t4282066566  value)
	{
		___textPos_52 = value;
	}

	inline static int32_t get_offset_of_iconPos_53() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___iconPos_53)); }
	inline Vector3_t4282066566  get_iconPos_53() const { return ___iconPos_53; }
	inline Vector3_t4282066566 * get_address_of_iconPos_53() { return &___iconPos_53; }
	inline void set_iconPos_53(Vector3_t4282066566  value)
	{
		___iconPos_53 = value;
	}

	inline static int32_t get_offset_of_listCanvasAlpha_54() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___listCanvasAlpha_54)); }
	inline float get_listCanvasAlpha_54() const { return ___listCanvasAlpha_54; }
	inline float* get_address_of_listCanvasAlpha_54() { return &___listCanvasAlpha_54; }
	inline void set_listCanvasAlpha_54(float value)
	{
		___listCanvasAlpha_54 = value;
	}

	inline static int32_t get_offset_of_normalColor_55() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___normalColor_55)); }
	inline Color_t4194546905  get_normalColor_55() const { return ___normalColor_55; }
	inline Color_t4194546905 * get_address_of_normalColor_55() { return &___normalColor_55; }
	inline void set_normalColor_55(Color_t4194546905  value)
	{
		___normalColor_55 = value;
	}

	inline static int32_t get_offset_of_highlightColor_56() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___highlightColor_56)); }
	inline Color_t4194546905  get_highlightColor_56() const { return ___highlightColor_56; }
	inline Color_t4194546905 * get_address_of_highlightColor_56() { return &___highlightColor_56; }
	inline void set_highlightColor_56(Color_t4194546905  value)
	{
		___highlightColor_56 = value;
	}

	inline static int32_t get_offset_of_animStartTime_57() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___animStartTime_57)); }
	inline float get_animStartTime_57() const { return ___animStartTime_57; }
	inline float* get_address_of_animStartTime_57() { return &___animStartTime_57; }
	inline void set_animStartTime_57(float value)
	{
		___animStartTime_57 = value;
	}

	inline static int32_t get_offset_of_animDeltaTime_58() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___animDeltaTime_58)); }
	inline float get_animDeltaTime_58() const { return ___animDeltaTime_58; }
	inline float* get_address_of_animDeltaTime_58() { return &___animDeltaTime_58; }
	inline void set_animDeltaTime_58(float value)
	{
		___animDeltaTime_58 = value;
	}

	inline static int32_t get_offset_of_state_59() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___state_59)); }
	inline int32_t get_state_59() const { return ___state_59; }
	inline int32_t* get_address_of_state_59() { return &___state_59; }
	inline void set_state_59(int32_t value)
	{
		___state_59 = value;
	}

	inline static int32_t get_offset_of_scrollbarEnabled_60() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___scrollbarEnabled_60)); }
	inline bool get_scrollbarEnabled_60() const { return ___scrollbarEnabled_60; }
	inline bool* get_address_of_scrollbarEnabled_60() { return &___scrollbarEnabled_60; }
	inline void set_scrollbarEnabled_60(bool value)
	{
		___scrollbarEnabled_60 = value;
	}

	inline static int32_t get_offset_of_ItemPicked_61() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___ItemPicked_61)); }
	inline PickItem_t1900684047 * get_ItemPicked_61() const { return ___ItemPicked_61; }
	inline PickItem_t1900684047 ** get_address_of_ItemPicked_61() { return &___ItemPicked_61; }
	inline void set_ItemPicked_61(PickItem_t1900684047 * value)
	{
		___ItemPicked_61 = value;
		Il2CppCodeGenWriteBarrier(&___ItemPicked_61, value);
	}

	inline static int32_t get_offset_of_parentTransform_62() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___parentTransform_62)); }
	inline Transform_t1659122786 * get_parentTransform_62() const { return ___parentTransform_62; }
	inline Transform_t1659122786 ** get_address_of_parentTransform_62() { return &___parentTransform_62; }
	inline void set_parentTransform_62(Transform_t1659122786 * value)
	{
		___parentTransform_62 = value;
		Il2CppCodeGenWriteBarrier(&___parentTransform_62, value);
	}

	inline static int32_t get_offset_of_expanded_63() { return static_cast<int32_t>(offsetof(SelectionBoxConfig_t1118549677, ___expanded_63)); }
	inline bool get_expanded_63() const { return ___expanded_63; }
	inline bool* get_address_of_expanded_63() { return &___expanded_63; }
	inline void set_expanded_63(bool value)
	{
		___expanded_63 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
