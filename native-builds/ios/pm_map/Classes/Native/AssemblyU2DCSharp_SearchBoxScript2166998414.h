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
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// SubmitInputField
struct SubmitInputField_t2681522600;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.Button
struct Button_t3896396478;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t3603375195;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t1858258760;
// SearchResults3d
struct SearchResults3d_t3903482911;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchBoxScript
struct  SearchBoxScript_t2166998414  : public MonoBehaviour_t667441552
{
public:
	// AppScript SearchBoxScript::app
	AppScript_t3488119340 * ___app_2;
	// UnityEngine.RectTransform SearchBoxScript::dialog
	RectTransform_t972643934 * ___dialog_3;
	// SubmitInputField SearchBoxScript::input
	SubmitInputField_t2681522600 * ___input_4;
	// UnityEngine.Transform SearchBoxScript::suggestionRowsContainer
	Transform_t1659122786 * ___suggestionRowsContainer_5;
	// UnityEngine.UI.Button SearchBoxScript::clearButton
	Button_t3896396478 * ___clearButton_6;
	// TMPro.TextMeshProUGUI SearchBoxScript::placeholder
	TextMeshProUGUI_t3603375195 * ___placeholder_7;
	// System.Boolean SearchBoxScript::suggestionsOpened
	bool ___suggestionsOpened_8;
	// System.Single SearchBoxScript::suggestionsAnimTime
	float ___suggestionsAnimTime_9;
	// UnityEngine.TouchScreenKeyboard SearchBoxScript::kb
	TouchScreenKeyboard_t1858258760 * ___kb_10;
	// SearchResults3d SearchBoxScript::searchResults3d
	SearchResults3d_t3903482911 * ___searchResults3d_11;
	// System.Single SearchBoxScript::_placeholder_update_time
	float ____placeholder_update_time_12;
	// System.Collections.Generic.List`1<System.String> SearchBoxScript::placeholderValues
	List_1_t1375417109 * ___placeholderValues_13;
	// System.Int32 SearchBoxScript::lastRandomIndex
	int32_t ___lastRandomIndex_14;

public:
	inline static int32_t get_offset_of_app_2() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___app_2)); }
	inline AppScript_t3488119340 * get_app_2() const { return ___app_2; }
	inline AppScript_t3488119340 ** get_address_of_app_2() { return &___app_2; }
	inline void set_app_2(AppScript_t3488119340 * value)
	{
		___app_2 = value;
		Il2CppCodeGenWriteBarrier(&___app_2, value);
	}

	inline static int32_t get_offset_of_dialog_3() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___dialog_3)); }
	inline RectTransform_t972643934 * get_dialog_3() const { return ___dialog_3; }
	inline RectTransform_t972643934 ** get_address_of_dialog_3() { return &___dialog_3; }
	inline void set_dialog_3(RectTransform_t972643934 * value)
	{
		___dialog_3 = value;
		Il2CppCodeGenWriteBarrier(&___dialog_3, value);
	}

	inline static int32_t get_offset_of_input_4() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___input_4)); }
	inline SubmitInputField_t2681522600 * get_input_4() const { return ___input_4; }
	inline SubmitInputField_t2681522600 ** get_address_of_input_4() { return &___input_4; }
	inline void set_input_4(SubmitInputField_t2681522600 * value)
	{
		___input_4 = value;
		Il2CppCodeGenWriteBarrier(&___input_4, value);
	}

	inline static int32_t get_offset_of_suggestionRowsContainer_5() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___suggestionRowsContainer_5)); }
	inline Transform_t1659122786 * get_suggestionRowsContainer_5() const { return ___suggestionRowsContainer_5; }
	inline Transform_t1659122786 ** get_address_of_suggestionRowsContainer_5() { return &___suggestionRowsContainer_5; }
	inline void set_suggestionRowsContainer_5(Transform_t1659122786 * value)
	{
		___suggestionRowsContainer_5 = value;
		Il2CppCodeGenWriteBarrier(&___suggestionRowsContainer_5, value);
	}

	inline static int32_t get_offset_of_clearButton_6() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___clearButton_6)); }
	inline Button_t3896396478 * get_clearButton_6() const { return ___clearButton_6; }
	inline Button_t3896396478 ** get_address_of_clearButton_6() { return &___clearButton_6; }
	inline void set_clearButton_6(Button_t3896396478 * value)
	{
		___clearButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___clearButton_6, value);
	}

	inline static int32_t get_offset_of_placeholder_7() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___placeholder_7)); }
	inline TextMeshProUGUI_t3603375195 * get_placeholder_7() const { return ___placeholder_7; }
	inline TextMeshProUGUI_t3603375195 ** get_address_of_placeholder_7() { return &___placeholder_7; }
	inline void set_placeholder_7(TextMeshProUGUI_t3603375195 * value)
	{
		___placeholder_7 = value;
		Il2CppCodeGenWriteBarrier(&___placeholder_7, value);
	}

	inline static int32_t get_offset_of_suggestionsOpened_8() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___suggestionsOpened_8)); }
	inline bool get_suggestionsOpened_8() const { return ___suggestionsOpened_8; }
	inline bool* get_address_of_suggestionsOpened_8() { return &___suggestionsOpened_8; }
	inline void set_suggestionsOpened_8(bool value)
	{
		___suggestionsOpened_8 = value;
	}

	inline static int32_t get_offset_of_suggestionsAnimTime_9() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___suggestionsAnimTime_9)); }
	inline float get_suggestionsAnimTime_9() const { return ___suggestionsAnimTime_9; }
	inline float* get_address_of_suggestionsAnimTime_9() { return &___suggestionsAnimTime_9; }
	inline void set_suggestionsAnimTime_9(float value)
	{
		___suggestionsAnimTime_9 = value;
	}

	inline static int32_t get_offset_of_kb_10() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___kb_10)); }
	inline TouchScreenKeyboard_t1858258760 * get_kb_10() const { return ___kb_10; }
	inline TouchScreenKeyboard_t1858258760 ** get_address_of_kb_10() { return &___kb_10; }
	inline void set_kb_10(TouchScreenKeyboard_t1858258760 * value)
	{
		___kb_10 = value;
		Il2CppCodeGenWriteBarrier(&___kb_10, value);
	}

	inline static int32_t get_offset_of_searchResults3d_11() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___searchResults3d_11)); }
	inline SearchResults3d_t3903482911 * get_searchResults3d_11() const { return ___searchResults3d_11; }
	inline SearchResults3d_t3903482911 ** get_address_of_searchResults3d_11() { return &___searchResults3d_11; }
	inline void set_searchResults3d_11(SearchResults3d_t3903482911 * value)
	{
		___searchResults3d_11 = value;
		Il2CppCodeGenWriteBarrier(&___searchResults3d_11, value);
	}

	inline static int32_t get_offset_of__placeholder_update_time_12() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ____placeholder_update_time_12)); }
	inline float get__placeholder_update_time_12() const { return ____placeholder_update_time_12; }
	inline float* get_address_of__placeholder_update_time_12() { return &____placeholder_update_time_12; }
	inline void set__placeholder_update_time_12(float value)
	{
		____placeholder_update_time_12 = value;
	}

	inline static int32_t get_offset_of_placeholderValues_13() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___placeholderValues_13)); }
	inline List_1_t1375417109 * get_placeholderValues_13() const { return ___placeholderValues_13; }
	inline List_1_t1375417109 ** get_address_of_placeholderValues_13() { return &___placeholderValues_13; }
	inline void set_placeholderValues_13(List_1_t1375417109 * value)
	{
		___placeholderValues_13 = value;
		Il2CppCodeGenWriteBarrier(&___placeholderValues_13, value);
	}

	inline static int32_t get_offset_of_lastRandomIndex_14() { return static_cast<int32_t>(offsetof(SearchBoxScript_t2166998414, ___lastRandomIndex_14)); }
	inline int32_t get_lastRandomIndex_14() const { return ___lastRandomIndex_14; }
	inline int32_t* get_address_of_lastRandomIndex_14() { return &___lastRandomIndex_14; }
	inline void set_lastRandomIndex_14(int32_t value)
	{
		___lastRandomIndex_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
