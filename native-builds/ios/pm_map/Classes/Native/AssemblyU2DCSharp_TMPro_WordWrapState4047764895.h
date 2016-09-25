#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t270066265;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_TMPro_FontStyles3228051751.h"
#include "AssemblyU2DCSharp_TMPro_TMP_LineInfo2462355872.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "AssemblyU2DCSharp_TMPro_Extents2060714539.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.WordWrapState
struct  WordWrapState_t4047764895 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_4;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_7;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_8;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_9;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_10;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_11;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_12;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_13;
	// System.Single TMPro.WordWrapState::maxFontScale
	float ___maxFontScale_14;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_15;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_16;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_17;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_18;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_19;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_20;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_21;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t270066265 * ___textInfo_22;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_t2462355872  ___lineInfo_23;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t598853688  ___vertexColor_24;
	// System.Int32 TMPro.WordWrapState::colorStackIndex
	int32_t ___colorStackIndex_25;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_t2060714539  ___meshExtents_26;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_4() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___firstCharacterIndex_4)); }
	inline int32_t get_firstCharacterIndex_4() const { return ___firstCharacterIndex_4; }
	inline int32_t* get_address_of_firstCharacterIndex_4() { return &___firstCharacterIndex_4; }
	inline void set_firstCharacterIndex_4(int32_t value)
	{
		___firstCharacterIndex_4 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___firstVisibleCharacterIndex_5)); }
	inline int32_t get_firstVisibleCharacterIndex_5() const { return ___firstVisibleCharacterIndex_5; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_5() { return &___firstVisibleCharacterIndex_5; }
	inline void set_firstVisibleCharacterIndex_5(int32_t value)
	{
		___firstVisibleCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___lastCharacterIndex_6)); }
	inline int32_t get_lastCharacterIndex_6() const { return ___lastCharacterIndex_6; }
	inline int32_t* get_address_of_lastCharacterIndex_6() { return &___lastCharacterIndex_6; }
	inline void set_lastCharacterIndex_6(int32_t value)
	{
		___lastCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___lastVisibleCharIndex_7)); }
	inline int32_t get_lastVisibleCharIndex_7() const { return ___lastVisibleCharIndex_7; }
	inline int32_t* get_address_of_lastVisibleCharIndex_7() { return &___lastVisibleCharIndex_7; }
	inline void set_lastVisibleCharIndex_7(int32_t value)
	{
		___lastVisibleCharIndex_7 = value;
	}

	inline static int32_t get_offset_of_lineNumber_8() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___lineNumber_8)); }
	inline int32_t get_lineNumber_8() const { return ___lineNumber_8; }
	inline int32_t* get_address_of_lineNumber_8() { return &___lineNumber_8; }
	inline void set_lineNumber_8(int32_t value)
	{
		___lineNumber_8 = value;
	}

	inline static int32_t get_offset_of_maxAscender_9() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___maxAscender_9)); }
	inline float get_maxAscender_9() const { return ___maxAscender_9; }
	inline float* get_address_of_maxAscender_9() { return &___maxAscender_9; }
	inline void set_maxAscender_9(float value)
	{
		___maxAscender_9 = value;
	}

	inline static int32_t get_offset_of_maxDescender_10() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___maxDescender_10)); }
	inline float get_maxDescender_10() const { return ___maxDescender_10; }
	inline float* get_address_of_maxDescender_10() { return &___maxDescender_10; }
	inline void set_maxDescender_10(float value)
	{
		___maxDescender_10 = value;
	}

	inline static int32_t get_offset_of_xAdvance_11() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___xAdvance_11)); }
	inline float get_xAdvance_11() const { return ___xAdvance_11; }
	inline float* get_address_of_xAdvance_11() { return &___xAdvance_11; }
	inline void set_xAdvance_11(float value)
	{
		___xAdvance_11 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_12() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___preferredWidth_12)); }
	inline float get_preferredWidth_12() const { return ___preferredWidth_12; }
	inline float* get_address_of_preferredWidth_12() { return &___preferredWidth_12; }
	inline void set_preferredWidth_12(float value)
	{
		___preferredWidth_12 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_13() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___preferredHeight_13)); }
	inline float get_preferredHeight_13() const { return ___preferredHeight_13; }
	inline float* get_address_of_preferredHeight_13() { return &___preferredHeight_13; }
	inline void set_preferredHeight_13(float value)
	{
		___preferredHeight_13 = value;
	}

	inline static int32_t get_offset_of_maxFontScale_14() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___maxFontScale_14)); }
	inline float get_maxFontScale_14() const { return ___maxFontScale_14; }
	inline float* get_address_of_maxFontScale_14() { return &___maxFontScale_14; }
	inline void set_maxFontScale_14(float value)
	{
		___maxFontScale_14 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_15() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___previousLineScale_15)); }
	inline float get_previousLineScale_15() const { return ___previousLineScale_15; }
	inline float* get_address_of_previousLineScale_15() { return &___previousLineScale_15; }
	inline void set_previousLineScale_15(float value)
	{
		___previousLineScale_15 = value;
	}

	inline static int32_t get_offset_of_wordCount_16() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___wordCount_16)); }
	inline int32_t get_wordCount_16() const { return ___wordCount_16; }
	inline int32_t* get_address_of_wordCount_16() { return &___wordCount_16; }
	inline void set_wordCount_16(int32_t value)
	{
		___wordCount_16 = value;
	}

	inline static int32_t get_offset_of_fontStyle_17() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___fontStyle_17)); }
	inline int32_t get_fontStyle_17() const { return ___fontStyle_17; }
	inline int32_t* get_address_of_fontStyle_17() { return &___fontStyle_17; }
	inline void set_fontStyle_17(int32_t value)
	{
		___fontStyle_17 = value;
	}

	inline static int32_t get_offset_of_fontScale_18() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___fontScale_18)); }
	inline float get_fontScale_18() const { return ___fontScale_18; }
	inline float* get_address_of_fontScale_18() { return &___fontScale_18; }
	inline void set_fontScale_18(float value)
	{
		___fontScale_18 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_19() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___currentFontSize_19)); }
	inline float get_currentFontSize_19() const { return ___currentFontSize_19; }
	inline float* get_address_of_currentFontSize_19() { return &___currentFontSize_19; }
	inline void set_currentFontSize_19(float value)
	{
		___currentFontSize_19 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_20() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___baselineOffset_20)); }
	inline float get_baselineOffset_20() const { return ___baselineOffset_20; }
	inline float* get_address_of_baselineOffset_20() { return &___baselineOffset_20; }
	inline void set_baselineOffset_20(float value)
	{
		___baselineOffset_20 = value;
	}

	inline static int32_t get_offset_of_lineOffset_21() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___lineOffset_21)); }
	inline float get_lineOffset_21() const { return ___lineOffset_21; }
	inline float* get_address_of_lineOffset_21() { return &___lineOffset_21; }
	inline void set_lineOffset_21(float value)
	{
		___lineOffset_21 = value;
	}

	inline static int32_t get_offset_of_textInfo_22() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___textInfo_22)); }
	inline TMP_TextInfo_t270066265 * get_textInfo_22() const { return ___textInfo_22; }
	inline TMP_TextInfo_t270066265 ** get_address_of_textInfo_22() { return &___textInfo_22; }
	inline void set_textInfo_22(TMP_TextInfo_t270066265 * value)
	{
		___textInfo_22 = value;
		Il2CppCodeGenWriteBarrier(&___textInfo_22, value);
	}

	inline static int32_t get_offset_of_lineInfo_23() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___lineInfo_23)); }
	inline TMP_LineInfo_t2462355872  get_lineInfo_23() const { return ___lineInfo_23; }
	inline TMP_LineInfo_t2462355872 * get_address_of_lineInfo_23() { return &___lineInfo_23; }
	inline void set_lineInfo_23(TMP_LineInfo_t2462355872  value)
	{
		___lineInfo_23 = value;
	}

	inline static int32_t get_offset_of_vertexColor_24() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___vertexColor_24)); }
	inline Color32_t598853688  get_vertexColor_24() const { return ___vertexColor_24; }
	inline Color32_t598853688 * get_address_of_vertexColor_24() { return &___vertexColor_24; }
	inline void set_vertexColor_24(Color32_t598853688  value)
	{
		___vertexColor_24 = value;
	}

	inline static int32_t get_offset_of_colorStackIndex_25() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___colorStackIndex_25)); }
	inline int32_t get_colorStackIndex_25() const { return ___colorStackIndex_25; }
	inline int32_t* get_address_of_colorStackIndex_25() { return &___colorStackIndex_25; }
	inline void set_colorStackIndex_25(int32_t value)
	{
		___colorStackIndex_25 = value;
	}

	inline static int32_t get_offset_of_meshExtents_26() { return static_cast<int32_t>(offsetof(WordWrapState_t4047764895, ___meshExtents_26)); }
	inline Extents_t2060714539  get_meshExtents_26() const { return ___meshExtents_26; }
	inline Extents_t2060714539 * get_address_of_meshExtents_26() { return &___meshExtents_26; }
	inline void set_meshExtents_26(Extents_t2060714539  value)
	{
		___meshExtents_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TMPro.WordWrapState
struct WordWrapState_t4047764895_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___firstCharacterIndex_4;
	int32_t ___firstVisibleCharacterIndex_5;
	int32_t ___lastCharacterIndex_6;
	int32_t ___lastVisibleCharIndex_7;
	int32_t ___lineNumber_8;
	float ___maxAscender_9;
	float ___maxDescender_10;
	float ___xAdvance_11;
	float ___preferredWidth_12;
	float ___preferredHeight_13;
	float ___maxFontScale_14;
	float ___previousLineScale_15;
	int32_t ___wordCount_16;
	int32_t ___fontStyle_17;
	float ___fontScale_18;
	float ___currentFontSize_19;
	float ___baselineOffset_20;
	float ___lineOffset_21;
	TMP_TextInfo_t270066265 * ___textInfo_22;
	TMP_LineInfo_t2462355872_marshaled_pinvoke ___lineInfo_23;
	Color32_t598853688_marshaled_pinvoke ___vertexColor_24;
	int32_t ___colorStackIndex_25;
	Extents_t2060714539_marshaled_pinvoke ___meshExtents_26;
};
// Native definition for marshalling of: TMPro.WordWrapState
struct WordWrapState_t4047764895_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___firstCharacterIndex_4;
	int32_t ___firstVisibleCharacterIndex_5;
	int32_t ___lastCharacterIndex_6;
	int32_t ___lastVisibleCharIndex_7;
	int32_t ___lineNumber_8;
	float ___maxAscender_9;
	float ___maxDescender_10;
	float ___xAdvance_11;
	float ___preferredWidth_12;
	float ___preferredHeight_13;
	float ___maxFontScale_14;
	float ___previousLineScale_15;
	int32_t ___wordCount_16;
	int32_t ___fontStyle_17;
	float ___fontScale_18;
	float ___currentFontSize_19;
	float ___baselineOffset_20;
	float ___lineOffset_21;
	TMP_TextInfo_t270066265 * ___textInfo_22;
	TMP_LineInfo_t2462355872_marshaled_com ___lineInfo_23;
	Color32_t598853688_marshaled_com ___vertexColor_24;
	int32_t ___colorStackIndex_25;
	Extents_t2060714539_marshaled_com ___meshExtents_26;
};
