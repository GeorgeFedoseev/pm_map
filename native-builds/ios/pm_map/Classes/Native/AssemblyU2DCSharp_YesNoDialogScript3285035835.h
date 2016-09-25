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
// UnityEngine.UI.Button
struct Button_t3896396478;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YesNoDialogScript
struct  YesNoDialogScript_t3285035835  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text YesNoDialogScript::title
	Text_t9039225 * ___title_2;
	// UnityEngine.UI.Text YesNoDialogScript::text
	Text_t9039225 * ___text_3;
	// UnityEngine.UI.Text YesNoDialogScript::yesTitle
	Text_t9039225 * ___yesTitle_4;
	// UnityEngine.UI.Text YesNoDialogScript::noTitle
	Text_t9039225 * ___noTitle_5;
	// UnityEngine.UI.Button YesNoDialogScript::yesButton
	Button_t3896396478 * ___yesButton_6;
	// UnityEngine.UI.Button YesNoDialogScript::noButton
	Button_t3896396478 * ___noButton_7;

public:
	inline static int32_t get_offset_of_title_2() { return static_cast<int32_t>(offsetof(YesNoDialogScript_t3285035835, ___title_2)); }
	inline Text_t9039225 * get_title_2() const { return ___title_2; }
	inline Text_t9039225 ** get_address_of_title_2() { return &___title_2; }
	inline void set_title_2(Text_t9039225 * value)
	{
		___title_2 = value;
		Il2CppCodeGenWriteBarrier(&___title_2, value);
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(YesNoDialogScript_t3285035835, ___text_3)); }
	inline Text_t9039225 * get_text_3() const { return ___text_3; }
	inline Text_t9039225 ** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(Text_t9039225 * value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_yesTitle_4() { return static_cast<int32_t>(offsetof(YesNoDialogScript_t3285035835, ___yesTitle_4)); }
	inline Text_t9039225 * get_yesTitle_4() const { return ___yesTitle_4; }
	inline Text_t9039225 ** get_address_of_yesTitle_4() { return &___yesTitle_4; }
	inline void set_yesTitle_4(Text_t9039225 * value)
	{
		___yesTitle_4 = value;
		Il2CppCodeGenWriteBarrier(&___yesTitle_4, value);
	}

	inline static int32_t get_offset_of_noTitle_5() { return static_cast<int32_t>(offsetof(YesNoDialogScript_t3285035835, ___noTitle_5)); }
	inline Text_t9039225 * get_noTitle_5() const { return ___noTitle_5; }
	inline Text_t9039225 ** get_address_of_noTitle_5() { return &___noTitle_5; }
	inline void set_noTitle_5(Text_t9039225 * value)
	{
		___noTitle_5 = value;
		Il2CppCodeGenWriteBarrier(&___noTitle_5, value);
	}

	inline static int32_t get_offset_of_yesButton_6() { return static_cast<int32_t>(offsetof(YesNoDialogScript_t3285035835, ___yesButton_6)); }
	inline Button_t3896396478 * get_yesButton_6() const { return ___yesButton_6; }
	inline Button_t3896396478 ** get_address_of_yesButton_6() { return &___yesButton_6; }
	inline void set_yesButton_6(Button_t3896396478 * value)
	{
		___yesButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___yesButton_6, value);
	}

	inline static int32_t get_offset_of_noButton_7() { return static_cast<int32_t>(offsetof(YesNoDialogScript_t3285035835, ___noButton_7)); }
	inline Button_t3896396478 * get_noButton_7() const { return ___noButton_7; }
	inline Button_t3896396478 ** get_address_of_noButton_7() { return &___noButton_7; }
	inline void set_noButton_7(Button_t3896396478 * value)
	{
		___noButton_7 = value;
		Il2CppCodeGenWriteBarrier(&___noButton_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
