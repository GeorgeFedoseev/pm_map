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
// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;
// TMPro.TextContainer
struct TextContainer_t2231787766;
// TMPro.TextMeshProFont
struct TextMeshProFont_t3602967588;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.Examples.SimpleScript
struct  SimpleScript_t3534037017  : public MonoBehaviour_t667441552
{
public:
	// TMPro.TextMeshPro TMPro.Examples.SimpleScript::m_textMeshPro
	TextMeshPro_t3198095413 * ___m_textMeshPro_3;
	// TMPro.TextContainer TMPro.Examples.SimpleScript::m_textContainer
	TextContainer_t2231787766 * ___m_textContainer_4;
	// TMPro.TextMeshProFont TMPro.Examples.SimpleScript::m_FontAsset
	TextMeshProFont_t3602967588 * ___m_FontAsset_5;
	// System.Single TMPro.Examples.SimpleScript::m_frame
	float ___m_frame_6;
	// System.Char[] TMPro.Examples.SimpleScript::m_chars
	CharU5BU5D_t3324145743* ___m_chars_7;

public:
	inline static int32_t get_offset_of_m_textMeshPro_3() { return static_cast<int32_t>(offsetof(SimpleScript_t3534037017, ___m_textMeshPro_3)); }
	inline TextMeshPro_t3198095413 * get_m_textMeshPro_3() const { return ___m_textMeshPro_3; }
	inline TextMeshPro_t3198095413 ** get_address_of_m_textMeshPro_3() { return &___m_textMeshPro_3; }
	inline void set_m_textMeshPro_3(TextMeshPro_t3198095413 * value)
	{
		___m_textMeshPro_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_textMeshPro_3, value);
	}

	inline static int32_t get_offset_of_m_textContainer_4() { return static_cast<int32_t>(offsetof(SimpleScript_t3534037017, ___m_textContainer_4)); }
	inline TextContainer_t2231787766 * get_m_textContainer_4() const { return ___m_textContainer_4; }
	inline TextContainer_t2231787766 ** get_address_of_m_textContainer_4() { return &___m_textContainer_4; }
	inline void set_m_textContainer_4(TextContainer_t2231787766 * value)
	{
		___m_textContainer_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_textContainer_4, value);
	}

	inline static int32_t get_offset_of_m_FontAsset_5() { return static_cast<int32_t>(offsetof(SimpleScript_t3534037017, ___m_FontAsset_5)); }
	inline TextMeshProFont_t3602967588 * get_m_FontAsset_5() const { return ___m_FontAsset_5; }
	inline TextMeshProFont_t3602967588 ** get_address_of_m_FontAsset_5() { return &___m_FontAsset_5; }
	inline void set_m_FontAsset_5(TextMeshProFont_t3602967588 * value)
	{
		___m_FontAsset_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontAsset_5, value);
	}

	inline static int32_t get_offset_of_m_frame_6() { return static_cast<int32_t>(offsetof(SimpleScript_t3534037017, ___m_frame_6)); }
	inline float get_m_frame_6() const { return ___m_frame_6; }
	inline float* get_address_of_m_frame_6() { return &___m_frame_6; }
	inline void set_m_frame_6(float value)
	{
		___m_frame_6 = value;
	}

	inline static int32_t get_offset_of_m_chars_7() { return static_cast<int32_t>(offsetof(SimpleScript_t3534037017, ___m_chars_7)); }
	inline CharU5BU5D_t3324145743* get_m_chars_7() const { return ___m_chars_7; }
	inline CharU5BU5D_t3324145743** get_address_of_m_chars_7() { return &___m_chars_7; }
	inline void set_m_chars_7(CharU5BU5D_t3324145743* value)
	{
		___m_chars_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_chars_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
