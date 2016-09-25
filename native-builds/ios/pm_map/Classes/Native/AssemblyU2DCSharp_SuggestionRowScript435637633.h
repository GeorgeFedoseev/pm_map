#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
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

// SuggestionRowScript
struct  SuggestionRowScript_t435637633  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Image SuggestionRowScript::icon
	Image_t538875265 * ___icon_2;
	// UnityEngine.UI.Text SuggestionRowScript::name
	Text_t9039225 * ___name_3;
	// UnityEngine.UI.Text SuggestionRowScript::desc
	Text_t9039225 * ___desc_4;
	// UnityEngine.UI.Button SuggestionRowScript::button
	Button_t3896396478 * ___button_5;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(SuggestionRowScript_t435637633, ___icon_2)); }
	inline Image_t538875265 * get_icon_2() const { return ___icon_2; }
	inline Image_t538875265 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Image_t538875265 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier(&___icon_2, value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(SuggestionRowScript_t435637633, ___name_3)); }
	inline Text_t9039225 * get_name_3() const { return ___name_3; }
	inline Text_t9039225 ** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(Text_t9039225 * value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_desc_4() { return static_cast<int32_t>(offsetof(SuggestionRowScript_t435637633, ___desc_4)); }
	inline Text_t9039225 * get_desc_4() const { return ___desc_4; }
	inline Text_t9039225 ** get_address_of_desc_4() { return &___desc_4; }
	inline void set_desc_4(Text_t9039225 * value)
	{
		___desc_4 = value;
		Il2CppCodeGenWriteBarrier(&___desc_4, value);
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(SuggestionRowScript_t435637633, ___button_5)); }
	inline Button_t3896396478 * get_button_5() const { return ___button_5; }
	inline Button_t3896396478 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(Button_t3896396478 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier(&___button_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
