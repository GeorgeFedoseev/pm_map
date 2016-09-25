#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MaterialUI.SelectionBoxConfig
struct SelectionBoxConfig_t1118549677;
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

// TTChoosePageScript
struct  TTChoosePageScript_t3515344977  : public MonoBehaviour_t667441552
{
public:
	// MaterialUI.SelectionBoxConfig TTChoosePageScript::selectionBox
	SelectionBoxConfig_t1118549677 * ___selectionBox_2;
	// UnityEngine.UI.Text TTChoosePageScript::loadingText
	Text_t9039225 * ___loadingText_3;
	// UnityEngine.UI.Button TTChoosePageScript::nextButton
	Button_t3896396478 * ___nextButton_4;
	// System.Boolean TTChoosePageScript::chosen
	bool ___chosen_5;

public:
	inline static int32_t get_offset_of_selectionBox_2() { return static_cast<int32_t>(offsetof(TTChoosePageScript_t3515344977, ___selectionBox_2)); }
	inline SelectionBoxConfig_t1118549677 * get_selectionBox_2() const { return ___selectionBox_2; }
	inline SelectionBoxConfig_t1118549677 ** get_address_of_selectionBox_2() { return &___selectionBox_2; }
	inline void set_selectionBox_2(SelectionBoxConfig_t1118549677 * value)
	{
		___selectionBox_2 = value;
		Il2CppCodeGenWriteBarrier(&___selectionBox_2, value);
	}

	inline static int32_t get_offset_of_loadingText_3() { return static_cast<int32_t>(offsetof(TTChoosePageScript_t3515344977, ___loadingText_3)); }
	inline Text_t9039225 * get_loadingText_3() const { return ___loadingText_3; }
	inline Text_t9039225 ** get_address_of_loadingText_3() { return &___loadingText_3; }
	inline void set_loadingText_3(Text_t9039225 * value)
	{
		___loadingText_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadingText_3, value);
	}

	inline static int32_t get_offset_of_nextButton_4() { return static_cast<int32_t>(offsetof(TTChoosePageScript_t3515344977, ___nextButton_4)); }
	inline Button_t3896396478 * get_nextButton_4() const { return ___nextButton_4; }
	inline Button_t3896396478 ** get_address_of_nextButton_4() { return &___nextButton_4; }
	inline void set_nextButton_4(Button_t3896396478 * value)
	{
		___nextButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___nextButton_4, value);
	}

	inline static int32_t get_offset_of_chosen_5() { return static_cast<int32_t>(offsetof(TTChoosePageScript_t3515344977, ___chosen_5)); }
	inline bool get_chosen_5() const { return ___chosen_5; }
	inline bool* get_address_of_chosen_5() { return &___chosen_5; }
	inline void set_chosen_5(bool value)
	{
		___chosen_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
