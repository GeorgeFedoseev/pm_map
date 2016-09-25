#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381;
struct UIVertex_t4244065212_marshaled_pinvoke;
struct UIVertex_t4244065212_marshaled_com;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_TMPro_TMP_CharacterType3969016029.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Vertex3965162754.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "AssemblyU2DCSharp_TMPro_FontStyles3228051751.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TMP_CharacterInfo
struct  TMP_CharacterInfo_t3968677457 
{
public:
	// TMPro.TMP_CharacterType TMPro.TMP_CharacterInfo::type
	int32_t ___type_0;
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_1;
	// System.Int16 TMPro.TMP_CharacterInfo::lineNumber
	int16_t ___lineNumber_2;
	// System.Int16 TMPro.TMP_CharacterInfo::pageNumber
	int16_t ___pageNumber_3;
	// System.Int16 TMPro.TMP_CharacterInfo::index
	int16_t ___index_4;
	// UnityEngine.UIVertex[] TMPro.TMP_CharacterInfo::uiVertices
	UIVertexU5BU5D_t1796391381* ___uiVertices_5;
	// System.Int16 TMPro.TMP_CharacterInfo::vertexIndex
	int16_t ___vertexIndex_6;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t3965162754  ___vertex_TL_7;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t3965162754  ___vertex_BL_8;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t3965162754  ___vertex_TR_9;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t3965162754  ___vertex_BR_10;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t4282066566  ___topLeft_11;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t4282066566  ___bottomLeft_12;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t4282066566  ___topRight_13;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t4282066566  ___bottomRight_14;
	// System.Single TMPro.TMP_CharacterInfo::topLine
	float ___topLine_15;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_16;
	// System.Single TMPro.TMP_CharacterInfo::bottomLine
	float ___bottomLine_17;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_18;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_19;
	// System.Single TMPro.TMP_CharacterInfo::padding
	float ___padding_20;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_21;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t598853688  ___color_22;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_23;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_24;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_character_1() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___character_1)); }
	inline Il2CppChar get_character_1() const { return ___character_1; }
	inline Il2CppChar* get_address_of_character_1() { return &___character_1; }
	inline void set_character_1(Il2CppChar value)
	{
		___character_1 = value;
	}

	inline static int32_t get_offset_of_lineNumber_2() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___lineNumber_2)); }
	inline int16_t get_lineNumber_2() const { return ___lineNumber_2; }
	inline int16_t* get_address_of_lineNumber_2() { return &___lineNumber_2; }
	inline void set_lineNumber_2(int16_t value)
	{
		___lineNumber_2 = value;
	}

	inline static int32_t get_offset_of_pageNumber_3() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___pageNumber_3)); }
	inline int16_t get_pageNumber_3() const { return ___pageNumber_3; }
	inline int16_t* get_address_of_pageNumber_3() { return &___pageNumber_3; }
	inline void set_pageNumber_3(int16_t value)
	{
		___pageNumber_3 = value;
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___index_4)); }
	inline int16_t get_index_4() const { return ___index_4; }
	inline int16_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int16_t value)
	{
		___index_4 = value;
	}

	inline static int32_t get_offset_of_uiVertices_5() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___uiVertices_5)); }
	inline UIVertexU5BU5D_t1796391381* get_uiVertices_5() const { return ___uiVertices_5; }
	inline UIVertexU5BU5D_t1796391381** get_address_of_uiVertices_5() { return &___uiVertices_5; }
	inline void set_uiVertices_5(UIVertexU5BU5D_t1796391381* value)
	{
		___uiVertices_5 = value;
		Il2CppCodeGenWriteBarrier(&___uiVertices_5, value);
	}

	inline static int32_t get_offset_of_vertexIndex_6() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___vertexIndex_6)); }
	inline int16_t get_vertexIndex_6() const { return ___vertexIndex_6; }
	inline int16_t* get_address_of_vertexIndex_6() { return &___vertexIndex_6; }
	inline void set_vertexIndex_6(int16_t value)
	{
		___vertexIndex_6 = value;
	}

	inline static int32_t get_offset_of_vertex_TL_7() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___vertex_TL_7)); }
	inline TMP_Vertex_t3965162754  get_vertex_TL_7() const { return ___vertex_TL_7; }
	inline TMP_Vertex_t3965162754 * get_address_of_vertex_TL_7() { return &___vertex_TL_7; }
	inline void set_vertex_TL_7(TMP_Vertex_t3965162754  value)
	{
		___vertex_TL_7 = value;
	}

	inline static int32_t get_offset_of_vertex_BL_8() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___vertex_BL_8)); }
	inline TMP_Vertex_t3965162754  get_vertex_BL_8() const { return ___vertex_BL_8; }
	inline TMP_Vertex_t3965162754 * get_address_of_vertex_BL_8() { return &___vertex_BL_8; }
	inline void set_vertex_BL_8(TMP_Vertex_t3965162754  value)
	{
		___vertex_BL_8 = value;
	}

	inline static int32_t get_offset_of_vertex_TR_9() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___vertex_TR_9)); }
	inline TMP_Vertex_t3965162754  get_vertex_TR_9() const { return ___vertex_TR_9; }
	inline TMP_Vertex_t3965162754 * get_address_of_vertex_TR_9() { return &___vertex_TR_9; }
	inline void set_vertex_TR_9(TMP_Vertex_t3965162754  value)
	{
		___vertex_TR_9 = value;
	}

	inline static int32_t get_offset_of_vertex_BR_10() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___vertex_BR_10)); }
	inline TMP_Vertex_t3965162754  get_vertex_BR_10() const { return ___vertex_BR_10; }
	inline TMP_Vertex_t3965162754 * get_address_of_vertex_BR_10() { return &___vertex_BR_10; }
	inline void set_vertex_BR_10(TMP_Vertex_t3965162754  value)
	{
		___vertex_BR_10 = value;
	}

	inline static int32_t get_offset_of_topLeft_11() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___topLeft_11)); }
	inline Vector3_t4282066566  get_topLeft_11() const { return ___topLeft_11; }
	inline Vector3_t4282066566 * get_address_of_topLeft_11() { return &___topLeft_11; }
	inline void set_topLeft_11(Vector3_t4282066566  value)
	{
		___topLeft_11 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_12() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___bottomLeft_12)); }
	inline Vector3_t4282066566  get_bottomLeft_12() const { return ___bottomLeft_12; }
	inline Vector3_t4282066566 * get_address_of_bottomLeft_12() { return &___bottomLeft_12; }
	inline void set_bottomLeft_12(Vector3_t4282066566  value)
	{
		___bottomLeft_12 = value;
	}

	inline static int32_t get_offset_of_topRight_13() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___topRight_13)); }
	inline Vector3_t4282066566  get_topRight_13() const { return ___topRight_13; }
	inline Vector3_t4282066566 * get_address_of_topRight_13() { return &___topRight_13; }
	inline void set_topRight_13(Vector3_t4282066566  value)
	{
		___topRight_13 = value;
	}

	inline static int32_t get_offset_of_bottomRight_14() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___bottomRight_14)); }
	inline Vector3_t4282066566  get_bottomRight_14() const { return ___bottomRight_14; }
	inline Vector3_t4282066566 * get_address_of_bottomRight_14() { return &___bottomRight_14; }
	inline void set_bottomRight_14(Vector3_t4282066566  value)
	{
		___bottomRight_14 = value;
	}

	inline static int32_t get_offset_of_topLine_15() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___topLine_15)); }
	inline float get_topLine_15() const { return ___topLine_15; }
	inline float* get_address_of_topLine_15() { return &___topLine_15; }
	inline void set_topLine_15(float value)
	{
		___topLine_15 = value;
	}

	inline static int32_t get_offset_of_baseLine_16() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___baseLine_16)); }
	inline float get_baseLine_16() const { return ___baseLine_16; }
	inline float* get_address_of_baseLine_16() { return &___baseLine_16; }
	inline void set_baseLine_16(float value)
	{
		___baseLine_16 = value;
	}

	inline static int32_t get_offset_of_bottomLine_17() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___bottomLine_17)); }
	inline float get_bottomLine_17() const { return ___bottomLine_17; }
	inline float* get_address_of_bottomLine_17() { return &___bottomLine_17; }
	inline void set_bottomLine_17(float value)
	{
		___bottomLine_17 = value;
	}

	inline static int32_t get_offset_of_xAdvance_18() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___xAdvance_18)); }
	inline float get_xAdvance_18() const { return ___xAdvance_18; }
	inline float* get_address_of_xAdvance_18() { return &___xAdvance_18; }
	inline void set_xAdvance_18(float value)
	{
		___xAdvance_18 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_19() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___aspectRatio_19)); }
	inline float get_aspectRatio_19() const { return ___aspectRatio_19; }
	inline float* get_address_of_aspectRatio_19() { return &___aspectRatio_19; }
	inline void set_aspectRatio_19(float value)
	{
		___aspectRatio_19 = value;
	}

	inline static int32_t get_offset_of_padding_20() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___padding_20)); }
	inline float get_padding_20() const { return ___padding_20; }
	inline float* get_address_of_padding_20() { return &___padding_20; }
	inline void set_padding_20(float value)
	{
		___padding_20 = value;
	}

	inline static int32_t get_offset_of_scale_21() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___scale_21)); }
	inline float get_scale_21() const { return ___scale_21; }
	inline float* get_address_of_scale_21() { return &___scale_21; }
	inline void set_scale_21(float value)
	{
		___scale_21 = value;
	}

	inline static int32_t get_offset_of_color_22() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___color_22)); }
	inline Color32_t598853688  get_color_22() const { return ___color_22; }
	inline Color32_t598853688 * get_address_of_color_22() { return &___color_22; }
	inline void set_color_22(Color32_t598853688  value)
	{
		___color_22 = value;
	}

	inline static int32_t get_offset_of_style_23() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___style_23)); }
	inline int32_t get_style_23() const { return ___style_23; }
	inline int32_t* get_address_of_style_23() { return &___style_23; }
	inline void set_style_23(int32_t value)
	{
		___style_23 = value;
	}

	inline static int32_t get_offset_of_isVisible_24() { return static_cast<int32_t>(offsetof(TMP_CharacterInfo_t3968677457, ___isVisible_24)); }
	inline bool get_isVisible_24() const { return ___isVisible_24; }
	inline bool* get_address_of_isVisible_24() { return &___isVisible_24; }
	inline void set_isVisible_24(bool value)
	{
		___isVisible_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t3968677457_marshaled_pinvoke
{
	int32_t ___type_0;
	char ___character_1;
	int16_t ___lineNumber_2;
	int16_t ___pageNumber_3;
	int16_t ___index_4;
	UIVertex_t4244065212_marshaled_pinvoke* ___uiVertices_5;
	int16_t ___vertexIndex_6;
	TMP_Vertex_t3965162754_marshaled_pinvoke ___vertex_TL_7;
	TMP_Vertex_t3965162754_marshaled_pinvoke ___vertex_BL_8;
	TMP_Vertex_t3965162754_marshaled_pinvoke ___vertex_TR_9;
	TMP_Vertex_t3965162754_marshaled_pinvoke ___vertex_BR_10;
	Vector3_t4282066566_marshaled_pinvoke ___topLeft_11;
	Vector3_t4282066566_marshaled_pinvoke ___bottomLeft_12;
	Vector3_t4282066566_marshaled_pinvoke ___topRight_13;
	Vector3_t4282066566_marshaled_pinvoke ___bottomRight_14;
	float ___topLine_15;
	float ___baseLine_16;
	float ___bottomLine_17;
	float ___xAdvance_18;
	float ___aspectRatio_19;
	float ___padding_20;
	float ___scale_21;
	Color32_t598853688_marshaled_pinvoke ___color_22;
	int32_t ___style_23;
	int32_t ___isVisible_24;
};
// Native definition for marshalling of: TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t3968677457_marshaled_com
{
	int32_t ___type_0;
	char ___character_1;
	int16_t ___lineNumber_2;
	int16_t ___pageNumber_3;
	int16_t ___index_4;
	UIVertex_t4244065212_marshaled_com* ___uiVertices_5;
	int16_t ___vertexIndex_6;
	TMP_Vertex_t3965162754_marshaled_com ___vertex_TL_7;
	TMP_Vertex_t3965162754_marshaled_com ___vertex_BL_8;
	TMP_Vertex_t3965162754_marshaled_com ___vertex_TR_9;
	TMP_Vertex_t3965162754_marshaled_com ___vertex_BR_10;
	Vector3_t4282066566_marshaled_com ___topLeft_11;
	Vector3_t4282066566_marshaled_com ___bottomLeft_12;
	Vector3_t4282066566_marshaled_com ___topRight_13;
	Vector3_t4282066566_marshaled_com ___bottomRight_14;
	float ___topLine_15;
	float ___baseLine_16;
	float ___bottomLine_17;
	float ___xAdvance_18;
	float ___aspectRatio_19;
	float ___padding_20;
	float ___scale_21;
	Color32_t598853688_marshaled_com ___color_22;
	int32_t ___style_23;
	int32_t ___isVisible_24;
};
