#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TMPro.FaceInfo
struct FaceInfo_t3469866561;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<TMPro.GlyphInfo>
struct List_1_t1831123180;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.GlyphInfo>
struct Dictionary_2_t460200867;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair>
struct Dictionary_2_t1902096943;
// TMPro.KerningTable
struct KerningTable_t618956984;
// TMPro.KerningPair
struct KerningPair_t1904833704;
// TMPro.LineBreakingTable
struct LineBreakingTable_t1570184089;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Func`2<TMPro.GlyphInfo,System.Int32>
struct Func_2_t3253257213;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"
#include "AssemblyU2DCSharp_TMPro_FontCreationSetting3395101892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshProFont
struct  TextMeshProFont_t3602967588  : public ScriptableObject_t2970544072
{
public:
	// TMPro.FaceInfo TMPro.TextMeshProFont::m_fontInfo
	FaceInfo_t3469866561 * ___m_fontInfo_2;
	// System.Int32 TMPro.TextMeshProFont::fontHashCode
	int32_t ___fontHashCode_3;
	// UnityEngine.Texture2D TMPro.TextMeshProFont::atlas
	Texture2D_t3884108195 * ___atlas_4;
	// UnityEngine.Material TMPro.TextMeshProFont::material
	Material_t3870600107 * ___material_5;
	// System.Int32 TMPro.TextMeshProFont::materialHashCode
	int32_t ___materialHashCode_6;
	// System.Collections.Generic.List`1<TMPro.GlyphInfo> TMPro.TextMeshProFont::m_glyphInfoList
	List_1_t1831123180 * ___m_glyphInfoList_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.GlyphInfo> TMPro.TextMeshProFont::m_characterDictionary
	Dictionary_2_t460200867 * ___m_characterDictionary_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair> TMPro.TextMeshProFont::m_kerningDictionary
	Dictionary_2_t1902096943 * ___m_kerningDictionary_9;
	// TMPro.KerningTable TMPro.TextMeshProFont::m_kerningInfo
	KerningTable_t618956984 * ___m_kerningInfo_10;
	// TMPro.KerningPair TMPro.TextMeshProFont::m_kerningPair
	KerningPair_t1904833704 * ___m_kerningPair_11;
	// TMPro.LineBreakingTable TMPro.TextMeshProFont::m_lineBreakingInfo
	LineBreakingTable_t1570184089 * ___m_lineBreakingInfo_12;
	// TMPro.FontCreationSetting TMPro.TextMeshProFont::fontCreationSettings
	FontCreationSetting_t3395101892  ___fontCreationSettings_13;
	// System.Boolean TMPro.TextMeshProFont::propertiesChanged
	bool ___propertiesChanged_14;
	// System.Int32[] TMPro.TextMeshProFont::m_characterSet
	Int32U5BU5D_t3230847821* ___m_characterSet_15;
	// System.Single TMPro.TextMeshProFont::NormalStyle
	float ___NormalStyle_16;
	// System.Single TMPro.TextMeshProFont::BoldStyle
	float ___BoldStyle_17;
	// System.Byte TMPro.TextMeshProFont::ItalicStyle
	uint8_t ___ItalicStyle_18;
	// System.Byte TMPro.TextMeshProFont::TabSize
	uint8_t ___TabSize_19;
	// System.Byte TMPro.TextMeshProFont::m_oldTabSize
	uint8_t ___m_oldTabSize_20;

public:
	inline static int32_t get_offset_of_m_fontInfo_2() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_fontInfo_2)); }
	inline FaceInfo_t3469866561 * get_m_fontInfo_2() const { return ___m_fontInfo_2; }
	inline FaceInfo_t3469866561 ** get_address_of_m_fontInfo_2() { return &___m_fontInfo_2; }
	inline void set_m_fontInfo_2(FaceInfo_t3469866561 * value)
	{
		___m_fontInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontInfo_2, value);
	}

	inline static int32_t get_offset_of_fontHashCode_3() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___fontHashCode_3)); }
	inline int32_t get_fontHashCode_3() const { return ___fontHashCode_3; }
	inline int32_t* get_address_of_fontHashCode_3() { return &___fontHashCode_3; }
	inline void set_fontHashCode_3(int32_t value)
	{
		___fontHashCode_3 = value;
	}

	inline static int32_t get_offset_of_atlas_4() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___atlas_4)); }
	inline Texture2D_t3884108195 * get_atlas_4() const { return ___atlas_4; }
	inline Texture2D_t3884108195 ** get_address_of_atlas_4() { return &___atlas_4; }
	inline void set_atlas_4(Texture2D_t3884108195 * value)
	{
		___atlas_4 = value;
		Il2CppCodeGenWriteBarrier(&___atlas_4, value);
	}

	inline static int32_t get_offset_of_material_5() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___material_5)); }
	inline Material_t3870600107 * get_material_5() const { return ___material_5; }
	inline Material_t3870600107 ** get_address_of_material_5() { return &___material_5; }
	inline void set_material_5(Material_t3870600107 * value)
	{
		___material_5 = value;
		Il2CppCodeGenWriteBarrier(&___material_5, value);
	}

	inline static int32_t get_offset_of_materialHashCode_6() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___materialHashCode_6)); }
	inline int32_t get_materialHashCode_6() const { return ___materialHashCode_6; }
	inline int32_t* get_address_of_materialHashCode_6() { return &___materialHashCode_6; }
	inline void set_materialHashCode_6(int32_t value)
	{
		___materialHashCode_6 = value;
	}

	inline static int32_t get_offset_of_m_glyphInfoList_7() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_glyphInfoList_7)); }
	inline List_1_t1831123180 * get_m_glyphInfoList_7() const { return ___m_glyphInfoList_7; }
	inline List_1_t1831123180 ** get_address_of_m_glyphInfoList_7() { return &___m_glyphInfoList_7; }
	inline void set_m_glyphInfoList_7(List_1_t1831123180 * value)
	{
		___m_glyphInfoList_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_glyphInfoList_7, value);
	}

	inline static int32_t get_offset_of_m_characterDictionary_8() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_characterDictionary_8)); }
	inline Dictionary_2_t460200867 * get_m_characterDictionary_8() const { return ___m_characterDictionary_8; }
	inline Dictionary_2_t460200867 ** get_address_of_m_characterDictionary_8() { return &___m_characterDictionary_8; }
	inline void set_m_characterDictionary_8(Dictionary_2_t460200867 * value)
	{
		___m_characterDictionary_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_characterDictionary_8, value);
	}

	inline static int32_t get_offset_of_m_kerningDictionary_9() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_kerningDictionary_9)); }
	inline Dictionary_2_t1902096943 * get_m_kerningDictionary_9() const { return ___m_kerningDictionary_9; }
	inline Dictionary_2_t1902096943 ** get_address_of_m_kerningDictionary_9() { return &___m_kerningDictionary_9; }
	inline void set_m_kerningDictionary_9(Dictionary_2_t1902096943 * value)
	{
		___m_kerningDictionary_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_kerningDictionary_9, value);
	}

	inline static int32_t get_offset_of_m_kerningInfo_10() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_kerningInfo_10)); }
	inline KerningTable_t618956984 * get_m_kerningInfo_10() const { return ___m_kerningInfo_10; }
	inline KerningTable_t618956984 ** get_address_of_m_kerningInfo_10() { return &___m_kerningInfo_10; }
	inline void set_m_kerningInfo_10(KerningTable_t618956984 * value)
	{
		___m_kerningInfo_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_kerningInfo_10, value);
	}

	inline static int32_t get_offset_of_m_kerningPair_11() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_kerningPair_11)); }
	inline KerningPair_t1904833704 * get_m_kerningPair_11() const { return ___m_kerningPair_11; }
	inline KerningPair_t1904833704 ** get_address_of_m_kerningPair_11() { return &___m_kerningPair_11; }
	inline void set_m_kerningPair_11(KerningPair_t1904833704 * value)
	{
		___m_kerningPair_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_kerningPair_11, value);
	}

	inline static int32_t get_offset_of_m_lineBreakingInfo_12() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_lineBreakingInfo_12)); }
	inline LineBreakingTable_t1570184089 * get_m_lineBreakingInfo_12() const { return ___m_lineBreakingInfo_12; }
	inline LineBreakingTable_t1570184089 ** get_address_of_m_lineBreakingInfo_12() { return &___m_lineBreakingInfo_12; }
	inline void set_m_lineBreakingInfo_12(LineBreakingTable_t1570184089 * value)
	{
		___m_lineBreakingInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_lineBreakingInfo_12, value);
	}

	inline static int32_t get_offset_of_fontCreationSettings_13() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___fontCreationSettings_13)); }
	inline FontCreationSetting_t3395101892  get_fontCreationSettings_13() const { return ___fontCreationSettings_13; }
	inline FontCreationSetting_t3395101892 * get_address_of_fontCreationSettings_13() { return &___fontCreationSettings_13; }
	inline void set_fontCreationSettings_13(FontCreationSetting_t3395101892  value)
	{
		___fontCreationSettings_13 = value;
	}

	inline static int32_t get_offset_of_propertiesChanged_14() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___propertiesChanged_14)); }
	inline bool get_propertiesChanged_14() const { return ___propertiesChanged_14; }
	inline bool* get_address_of_propertiesChanged_14() { return &___propertiesChanged_14; }
	inline void set_propertiesChanged_14(bool value)
	{
		___propertiesChanged_14 = value;
	}

	inline static int32_t get_offset_of_m_characterSet_15() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_characterSet_15)); }
	inline Int32U5BU5D_t3230847821* get_m_characterSet_15() const { return ___m_characterSet_15; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_characterSet_15() { return &___m_characterSet_15; }
	inline void set_m_characterSet_15(Int32U5BU5D_t3230847821* value)
	{
		___m_characterSet_15 = value;
		Il2CppCodeGenWriteBarrier(&___m_characterSet_15, value);
	}

	inline static int32_t get_offset_of_NormalStyle_16() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___NormalStyle_16)); }
	inline float get_NormalStyle_16() const { return ___NormalStyle_16; }
	inline float* get_address_of_NormalStyle_16() { return &___NormalStyle_16; }
	inline void set_NormalStyle_16(float value)
	{
		___NormalStyle_16 = value;
	}

	inline static int32_t get_offset_of_BoldStyle_17() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___BoldStyle_17)); }
	inline float get_BoldStyle_17() const { return ___BoldStyle_17; }
	inline float* get_address_of_BoldStyle_17() { return &___BoldStyle_17; }
	inline void set_BoldStyle_17(float value)
	{
		___BoldStyle_17 = value;
	}

	inline static int32_t get_offset_of_ItalicStyle_18() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___ItalicStyle_18)); }
	inline uint8_t get_ItalicStyle_18() const { return ___ItalicStyle_18; }
	inline uint8_t* get_address_of_ItalicStyle_18() { return &___ItalicStyle_18; }
	inline void set_ItalicStyle_18(uint8_t value)
	{
		___ItalicStyle_18 = value;
	}

	inline static int32_t get_offset_of_TabSize_19() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___TabSize_19)); }
	inline uint8_t get_TabSize_19() const { return ___TabSize_19; }
	inline uint8_t* get_address_of_TabSize_19() { return &___TabSize_19; }
	inline void set_TabSize_19(uint8_t value)
	{
		___TabSize_19 = value;
	}

	inline static int32_t get_offset_of_m_oldTabSize_20() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588, ___m_oldTabSize_20)); }
	inline uint8_t get_m_oldTabSize_20() const { return ___m_oldTabSize_20; }
	inline uint8_t* get_address_of_m_oldTabSize_20() { return &___m_oldTabSize_20; }
	inline void set_m_oldTabSize_20(uint8_t value)
	{
		___m_oldTabSize_20 = value;
	}
};

struct TextMeshProFont_t3602967588_StaticFields
{
public:
	// System.Func`2<TMPro.GlyphInfo,System.Int32> TMPro.TextMeshProFont::<>f__am$cache13
	Func_2_t3253257213 * ___U3CU3Ef__amU24cache13_21;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_21() { return static_cast<int32_t>(offsetof(TextMeshProFont_t3602967588_StaticFields, ___U3CU3Ef__amU24cache13_21)); }
	inline Func_2_t3253257213 * get_U3CU3Ef__amU24cache13_21() const { return ___U3CU3Ef__amU24cache13_21; }
	inline Func_2_t3253257213 ** get_address_of_U3CU3Ef__amU24cache13_21() { return &___U3CU3Ef__amU24cache13_21; }
	inline void set_U3CU3Ef__amU24cache13_21(Func_2_t3253257213 * value)
	{
		___U3CU3Ef__amU24cache13_21 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
