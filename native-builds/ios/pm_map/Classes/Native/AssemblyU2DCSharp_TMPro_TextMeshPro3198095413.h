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
// TMPro.TextMeshProFont
struct TextMeshProFont_t3602967588;
// UnityEngine.Material
struct Material_t3870600107;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t270066265;
// System.Char[]
struct CharU5BU5D_t3324145743;
// UnityEngine.Renderer
struct Renderer_t3076687687;
// UnityEngine.MeshFilter
struct MeshFilter_t3839065225;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t4230808090;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// TMPro.GlyphInfo
struct GlyphInfo_t462937628;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// TMPro.TextMeshProFont[]
struct TextMeshProFontU5BU5D_t1470155469;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t943818363;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t1322387783;
// TMPro.TextContainer
struct TextContainer_t2231787766;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TMPro_FontStyles3228051751.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_TMPro_VertexGradient2166651658.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Compatibility_AnchorPo2956782356.h"
#include "AssemblyU2DCSharp_TMPro_TextAlignmentOptions3798547742.h"
#include "AssemblyU2DCSharp_TMPro_TextOverflowModes832755779.h"
#include "AssemblyU2DCSharp_TMPro_TextureMappingOptions707307789.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshPro_TextInputSourc3147014097.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "AssemblyU2DCSharp_TMPro_WordWrapState4047764895.h"
#include "AssemblyU2DCSharp_TMPro_Extents2060714539.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"
#include "AssemblyU2DCSharp_TMPro_MaskingTypes406604089.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "AssemblyU2DCSharp_TMPro_TextRenderFlags2400171206.h"
#include "AssemblyU2DCSharp_TMPro_TMP_LinkInfo2467896998.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshPro
struct  TextMeshPro_t3198095413  : public MonoBehaviour_t667441552
{
public:
	// System.String TMPro.TextMeshPro::m_text
	String_t* ___m_text_2;
	// TMPro.TextMeshProFont TMPro.TextMeshPro::m_fontAsset
	TextMeshProFont_t3602967588 * ___m_fontAsset_3;
	// UnityEngine.Material TMPro.TextMeshPro::m_fontMaterial
	Material_t3870600107 * ___m_fontMaterial_4;
	// UnityEngine.Material TMPro.TextMeshPro::m_sharedMaterial
	Material_t3870600107 * ___m_sharedMaterial_5;
	// TMPro.FontStyles TMPro.TextMeshPro::m_fontStyle
	int32_t ___m_fontStyle_6;
	// TMPro.FontStyles TMPro.TextMeshPro::m_style
	int32_t ___m_style_7;
	// System.Boolean TMPro.TextMeshPro::m_isOverlay
	bool ___m_isOverlay_8;
	// UnityEngine.Color32 TMPro.TextMeshPro::m_fontColor32
	Color32_t598853688  ___m_fontColor32_9;
	// UnityEngine.Color TMPro.TextMeshPro::m_fontColor
	Color_t4194546905  ___m_fontColor_10;
	// TMPro.VertexGradient TMPro.TextMeshPro::m_fontColorGradient
	VertexGradient_t2166651658  ___m_fontColorGradient_11;
	// System.Boolean TMPro.TextMeshPro::m_enableVertexGradient
	bool ___m_enableVertexGradient_12;
	// UnityEngine.Color32 TMPro.TextMeshPro::m_faceColor
	Color32_t598853688  ___m_faceColor_13;
	// UnityEngine.Color32 TMPro.TextMeshPro::m_outlineColor
	Color32_t598853688  ___m_outlineColor_14;
	// System.Single TMPro.TextMeshPro::m_outlineWidth
	float ___m_outlineWidth_15;
	// System.Single TMPro.TextMeshPro::m_fontSize
	float ___m_fontSize_16;
	// System.Single TMPro.TextMeshPro::m_fontSizeMin
	float ___m_fontSizeMin_17;
	// System.Single TMPro.TextMeshPro::m_fontSizeMax
	float ___m_fontSizeMax_18;
	// System.Single TMPro.TextMeshPro::m_fontSizeBase
	float ___m_fontSizeBase_19;
	// System.Single TMPro.TextMeshPro::m_charSpacingMax
	float ___m_charSpacingMax_20;
	// System.Single TMPro.TextMeshPro::m_lineSpacingMax
	float ___m_lineSpacingMax_21;
	// System.Single TMPro.TextMeshPro::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_22;
	// System.Single TMPro.TextMeshPro::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_23;
	// System.Single TMPro.TextMeshPro::m_currentFontSize
	float ___m_currentFontSize_24;
	// System.Single TMPro.TextMeshPro::m_characterSpacing
	float ___m_characterSpacing_25;
	// System.Single TMPro.TextMeshPro::m_cSpacing
	float ___m_cSpacing_26;
	// System.Single TMPro.TextMeshPro::m_monoSpacing
	float ___m_monoSpacing_27;
	// System.Single TMPro.TextMeshPro::m_lineSpacing
	float ___m_lineSpacing_28;
	// System.Single TMPro.TextMeshPro::m_lineSpacingDelta
	float ___m_lineSpacingDelta_29;
	// System.Single TMPro.TextMeshPro::m_lineHeight
	float ___m_lineHeight_30;
	// System.Single TMPro.TextMeshPro::m_paragraphSpacing
	float ___m_paragraphSpacing_31;
	// System.Single TMPro.TextMeshPro::m_lineLength
	float ___m_lineLength_32;
	// TMPro.TMP_Compatibility/AnchorPositions TMPro.TextMeshPro::m_anchor
	int32_t ___m_anchor_33;
	// TMPro.TextAlignmentOptions TMPro.TextMeshPro::m_textAlignment
	int32_t ___m_textAlignment_34;
	// TMPro.TextAlignmentOptions TMPro.TextMeshPro::m_lineJustification
	int32_t ___m_lineJustification_35;
	// System.Boolean TMPro.TextMeshPro::m_enableKerning
	bool ___m_enableKerning_36;
	// System.Boolean TMPro.TextMeshPro::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_37;
	// System.Boolean TMPro.TextMeshPro::m_enableExtraPadding
	bool ___m_enableExtraPadding_38;
	// System.Boolean TMPro.TextMeshPro::checkPaddingRequired
	bool ___checkPaddingRequired_39;
	// System.Boolean TMPro.TextMeshPro::m_enableWordWrapping
	bool ___m_enableWordWrapping_40;
	// System.Boolean TMPro.TextMeshPro::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_41;
	// System.Boolean TMPro.TextMeshPro::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_42;
	// TMPro.TextOverflowModes TMPro.TextMeshPro::m_overflowMode
	int32_t ___m_overflowMode_43;
	// System.Single TMPro.TextMeshPro::m_wordWrappingRatios
	float ___m_wordWrappingRatios_44;
	// TMPro.TextureMappingOptions TMPro.TextMeshPro::m_horizontalMapping
	int32_t ___m_horizontalMapping_45;
	// TMPro.TextureMappingOptions TMPro.TextMeshPro::m_verticalMapping
	int32_t ___m_verticalMapping_46;
	// UnityEngine.Vector2 TMPro.TextMeshPro::m_uvOffset
	Vector2_t4282066565  ___m_uvOffset_47;
	// System.Single TMPro.TextMeshPro::m_uvLineOffset
	float ___m_uvLineOffset_48;
	// System.Boolean TMPro.TextMeshPro::isInputParsingRequired
	bool ___isInputParsingRequired_49;
	// System.Boolean TMPro.TextMeshPro::havePropertiesChanged
	bool ___havePropertiesChanged_50;
	// System.Boolean TMPro.TextMeshPro::hasFontAssetChanged
	bool ___hasFontAssetChanged_51;
	// System.Boolean TMPro.TextMeshPro::m_isRichText
	bool ___m_isRichText_52;
	// TMPro.TextMeshPro/TextInputSources TMPro.TextMeshPro::m_inputSource
	int32_t ___m_inputSource_53;
	// System.String TMPro.TextMeshPro::old_text
	String_t* ___old_text_54;
	// System.Single TMPro.TextMeshPro::old_arg0
	float ___old_arg0_55;
	// System.Single TMPro.TextMeshPro::old_arg1
	float ___old_arg1_56;
	// System.Single TMPro.TextMeshPro::old_arg2
	float ___old_arg2_57;
	// System.Int32 TMPro.TextMeshPro::m_fontIndex
	int32_t ___m_fontIndex_58;
	// System.Single TMPro.TextMeshPro::m_fontScale
	float ___m_fontScale_59;
	// System.Boolean TMPro.TextMeshPro::m_isRecalculateScaleRequired
	bool ___m_isRecalculateScaleRequired_60;
	// UnityEngine.Vector3 TMPro.TextMeshPro::m_previousLossyScale
	Vector3_t4282066566  ___m_previousLossyScale_61;
	// System.Single TMPro.TextMeshPro::m_xAdvance
	float ___m_xAdvance_62;
	// System.Single TMPro.TextMeshPro::m_maxXAdvance
	float ___m_maxXAdvance_63;
	// System.Single TMPro.TextMeshPro::tag_LineIndent
	float ___tag_LineIndent_64;
	// System.Single TMPro.TextMeshPro::tag_Indent
	float ___tag_Indent_65;
	// UnityEngine.Vector3 TMPro.TextMeshPro::m_anchorOffset
	Vector3_t4282066566  ___m_anchorOffset_66;
	// TMPro.TMP_TextInfo TMPro.TextMeshPro::m_textInfo
	TMP_TextInfo_t270066265 * ___m_textInfo_67;
	// System.Char[] TMPro.TextMeshPro::m_htmlTag
	CharU5BU5D_t3324145743* ___m_htmlTag_68;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t3076687687 * ___m_renderer_69;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t3839065225 * ___m_meshFilter_70;
	// UnityEngine.Mesh TMPro.TextMeshPro::m_mesh
	Mesh_t4241756145 * ___m_mesh_71;
	// UnityEngine.Transform TMPro.TextMeshPro::m_transform
	Transform_t1659122786 * ___m_transform_72;
	// UnityEngine.Color32 TMPro.TextMeshPro::m_htmlColor
	Color32_t598853688  ___m_htmlColor_73;
	// UnityEngine.Color32[] TMPro.TextMeshPro::m_colorStack
	Color32U5BU5D_t2960766953* ___m_colorStack_74;
	// System.Int32 TMPro.TextMeshPro::m_colorStackIndex
	int32_t ___m_colorStackIndex_75;
	// System.Single TMPro.TextMeshPro::m_tabSpacing
	float ___m_tabSpacing_76;
	// System.Single TMPro.TextMeshPro::m_spacing
	float ___m_spacing_77;
	// System.Single TMPro.TextMeshPro::m_baselineOffset
	float ___m_baselineOffset_78;
	// System.Single TMPro.TextMeshPro::m_padding
	float ___m_padding_79;
	// UnityEngine.Vector4 TMPro.TextMeshPro::m_alignmentPadding
	Vector4_t4282066567  ___m_alignmentPadding_80;
	// System.Boolean TMPro.TextMeshPro::m_isUsingBold
	bool ___m_isUsingBold_81;
	// UnityEngine.Vector2 TMPro.TextMeshPro::k_InfinityVector
	Vector2_t4282066565  ___k_InfinityVector_82;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_83;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_84;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_85;
	// System.Int32[] TMPro.TextMeshPro::m_char_buffer
	Int32U5BU5D_t3230847821* ___m_char_buffer_86;
	// System.Char[] TMPro.TextMeshPro::m_input_CharArray
	CharU5BU5D_t3324145743* ___m_input_CharArray_87;
	// System.Int32 TMPro.TextMeshPro::m_charArray_Length
	int32_t ___m_charArray_Length_88;
	// System.Collections.Generic.List`1<System.Char> TMPro.TextMeshPro::m_VisibleCharacters
	List_1_t4230808090 * ___m_VisibleCharacters_89;
	// System.Single[] TMPro.TextMeshPro::k_Power
	SingleU5BU5D_t2316563989* ___k_Power_90;
	// TMPro.GlyphInfo TMPro.TextMeshPro::m_cached_GlyphInfo
	GlyphInfo_t462937628 * ___m_cached_GlyphInfo_91;
	// TMPro.GlyphInfo TMPro.TextMeshPro::m_cached_Underline_GlyphInfo
	GlyphInfo_t462937628 * ___m_cached_Underline_GlyphInfo_92;
	// TMPro.WordWrapState TMPro.TextMeshPro::m_SavedWordWrapState
	WordWrapState_t4047764895  ___m_SavedWordWrapState_93;
	// TMPro.WordWrapState TMPro.TextMeshPro::m_SavedLineState
	WordWrapState_t4047764895  ___m_SavedLineState_94;
	// System.Int32 TMPro.TextMeshPro::m_characterCount
	int32_t ___m_characterCount_95;
	// System.Int32 TMPro.TextMeshPro::m_visibleCharacterCount
	int32_t ___m_visibleCharacterCount_96;
	// System.Int32 TMPro.TextMeshPro::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_97;
	// System.Int32 TMPro.TextMeshPro::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_98;
	// System.Int32 TMPro.TextMeshPro::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_99;
	// System.Int32 TMPro.TextMeshPro::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_100;
	// System.Int32 TMPro.TextMeshPro::m_lineNumber
	int32_t ___m_lineNumber_101;
	// System.Int32 TMPro.TextMeshPro::m_pageNumber
	int32_t ___m_pageNumber_102;
	// System.Single TMPro.TextMeshPro::m_maxAscender
	float ___m_maxAscender_103;
	// System.Single TMPro.TextMeshPro::m_maxDescender
	float ___m_maxDescender_104;
	// System.Single TMPro.TextMeshPro::m_maxFontScale
	float ___m_maxFontScale_105;
	// System.Single TMPro.TextMeshPro::m_lineOffset
	float ___m_lineOffset_106;
	// TMPro.Extents TMPro.TextMeshPro::m_meshExtents
	Extents_t2060714539  ___m_meshExtents_107;
	// System.Single TMPro.TextMeshPro::m_preferredWidth
	float ___m_preferredWidth_108;
	// System.Single TMPro.TextMeshPro::m_preferredHeight
	float ___m_preferredHeight_109;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_vertices
	Vector3U5BU5D_t215400611* ___m_vertices_110;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_normals
	Vector3U5BU5D_t215400611* ___m_normals_111;
	// UnityEngine.Vector4[] TMPro.TextMeshPro::m_tangents
	Vector4U5BU5D_t701588350* ___m_tangents_112;
	// UnityEngine.Vector2[] TMPro.TextMeshPro::m_uvs
	Vector2U5BU5D_t4024180168* ___m_uvs_113;
	// UnityEngine.Vector2[] TMPro.TextMeshPro::m_uv2s
	Vector2U5BU5D_t4024180168* ___m_uv2s_114;
	// UnityEngine.Color32[] TMPro.TextMeshPro::m_vertColors
	Color32U5BU5D_t2960766953* ___m_vertColors_115;
	// System.Int32[] TMPro.TextMeshPro::m_triangles
	Int32U5BU5D_t3230847821* ___m_triangles_116;
	// UnityEngine.Bounds TMPro.TextMeshPro::m_default_bounds
	Bounds_t2711641849  ___m_default_bounds_117;
	// System.Boolean TMPro.TextMeshPro::m_ignoreCulling
	bool ___m_ignoreCulling_118;
	// System.Boolean TMPro.TextMeshPro::m_isOrthographic
	bool ___m_isOrthographic_119;
	// System.Boolean TMPro.TextMeshPro::m_isCullingEnabled
	bool ___m_isCullingEnabled_120;
	// System.Int32 TMPro.TextMeshPro::m_sortingLayerID
	int32_t ___m_sortingLayerID_121;
	// System.Int32 TMPro.TextMeshPro::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_122;
	// System.Int32 TMPro.TextMeshPro::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_123;
	// System.Int32 TMPro.TextMeshPro::m_pageToDisplay
	int32_t ___m_pageToDisplay_124;
	// System.Boolean TMPro.TextMeshPro::m_isNewPage
	bool ___m_isNewPage_125;
	// System.Boolean TMPro.TextMeshPro::m_isTextTruncated
	bool ___m_isTextTruncated_126;
	// TMPro.TextMeshProFont[] TMPro.TextMeshPro::m_fontAssetArray
	TextMeshProFontU5BU5D_t1470155469* ___m_fontAssetArray_127;
	// System.Collections.Generic.List`1<UnityEngine.Material> TMPro.TextMeshPro::m_sharedMaterials
	List_1_t943818363 * ___m_sharedMaterials_128;
	// System.Int32 TMPro.TextMeshPro::m_selectedFontAsset
	int32_t ___m_selectedFontAsset_129;
	// UnityEngine.MaterialPropertyBlock TMPro.TextMeshPro::m_maskingPropertyBlock
	MaterialPropertyBlock_t1322387783 * ___m_maskingPropertyBlock_130;
	// System.Boolean TMPro.TextMeshPro::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_131;
	// System.Boolean TMPro.TextMeshPro::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_132;
	// System.Boolean TMPro.TextMeshPro::m_isMaterialBlockSet
	bool ___m_isMaterialBlockSet_133;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_134;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_t1651859333  ___m_EnvMapMatrix_135;
	// TMPro.TextRenderFlags TMPro.TextMeshPro::m_renderMode
	int32_t ___m_renderMode_136;
	// System.Boolean TMPro.TextMeshPro::m_isParsingText
	bool ___m_isParsingText_137;
	// TMPro.TMP_LinkInfo TMPro.TextMeshPro::tag_LinkInfo
	TMP_LinkInfo_t2467896998  ___tag_LinkInfo_138;
	// System.Int32[] TMPro.TextMeshPro::m_styleStack
	Int32U5BU5D_t3230847821* ___m_styleStack_139;
	// System.Int32 TMPro.TextMeshPro::m_styleStackIndex
	int32_t ___m_styleStackIndex_140;
	// TMPro.TextContainer TMPro.TextMeshPro::m_textContainer
	TextContainer_t2231787766 * ___m_textContainer_141;
	// System.Single TMPro.TextMeshPro::m_marginLeft
	float ___m_marginLeft_142;
	// System.Single TMPro.TextMeshPro::m_marginRight
	float ___m_marginRight_143;
	// System.Single TMPro.TextMeshPro::m_marginWidth
	float ___m_marginWidth_144;
	// System.Single TMPro.TextMeshPro::m_width
	float ___m_width_145;
	// System.Boolean TMPro.TextMeshPro::m_enableAutoSizing
	bool ___m_enableAutoSizing_146;
	// System.Single TMPro.TextMeshPro::m_maxFontSize
	float ___m_maxFontSize_147;
	// System.Single TMPro.TextMeshPro::m_minFontSize
	float ___m_minFontSize_148;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_149;
	// System.Boolean TMPro.TextMeshPro::isDebugOutputDone
	bool ___isDebugOutputDone_150;
	// System.Int32 TMPro.TextMeshPro::m_recursiveCount
	int32_t ___m_recursiveCount_151;
	// System.Int32 TMPro.TextMeshPro::loopCountA
	int32_t ___loopCountA_152;

public:
	inline static int32_t get_offset_of_m_text_2() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_text_2)); }
	inline String_t* get_m_text_2() const { return ___m_text_2; }
	inline String_t** get_address_of_m_text_2() { return &___m_text_2; }
	inline void set_m_text_2(String_t* value)
	{
		___m_text_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_2, value);
	}

	inline static int32_t get_offset_of_m_fontAsset_3() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontAsset_3)); }
	inline TextMeshProFont_t3602967588 * get_m_fontAsset_3() const { return ___m_fontAsset_3; }
	inline TextMeshProFont_t3602967588 ** get_address_of_m_fontAsset_3() { return &___m_fontAsset_3; }
	inline void set_m_fontAsset_3(TextMeshProFont_t3602967588 * value)
	{
		___m_fontAsset_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontAsset_3, value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_4() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontMaterial_4)); }
	inline Material_t3870600107 * get_m_fontMaterial_4() const { return ___m_fontMaterial_4; }
	inline Material_t3870600107 ** get_address_of_m_fontMaterial_4() { return &___m_fontMaterial_4; }
	inline void set_m_fontMaterial_4(Material_t3870600107 * value)
	{
		___m_fontMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontMaterial_4, value);
	}

	inline static int32_t get_offset_of_m_sharedMaterial_5() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_sharedMaterial_5)); }
	inline Material_t3870600107 * get_m_sharedMaterial_5() const { return ___m_sharedMaterial_5; }
	inline Material_t3870600107 ** get_address_of_m_sharedMaterial_5() { return &___m_sharedMaterial_5; }
	inline void set_m_sharedMaterial_5(Material_t3870600107 * value)
	{
		___m_sharedMaterial_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_sharedMaterial_5, value);
	}

	inline static int32_t get_offset_of_m_fontStyle_6() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontStyle_6)); }
	inline int32_t get_m_fontStyle_6() const { return ___m_fontStyle_6; }
	inline int32_t* get_address_of_m_fontStyle_6() { return &___m_fontStyle_6; }
	inline void set_m_fontStyle_6(int32_t value)
	{
		___m_fontStyle_6 = value;
	}

	inline static int32_t get_offset_of_m_style_7() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_style_7)); }
	inline int32_t get_m_style_7() const { return ___m_style_7; }
	inline int32_t* get_address_of_m_style_7() { return &___m_style_7; }
	inline void set_m_style_7(int32_t value)
	{
		___m_style_7 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_8() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isOverlay_8)); }
	inline bool get_m_isOverlay_8() const { return ___m_isOverlay_8; }
	inline bool* get_address_of_m_isOverlay_8() { return &___m_isOverlay_8; }
	inline void set_m_isOverlay_8(bool value)
	{
		___m_isOverlay_8 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_9() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontColor32_9)); }
	inline Color32_t598853688  get_m_fontColor32_9() const { return ___m_fontColor32_9; }
	inline Color32_t598853688 * get_address_of_m_fontColor32_9() { return &___m_fontColor32_9; }
	inline void set_m_fontColor32_9(Color32_t598853688  value)
	{
		___m_fontColor32_9 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_10() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontColor_10)); }
	inline Color_t4194546905  get_m_fontColor_10() const { return ___m_fontColor_10; }
	inline Color_t4194546905 * get_address_of_m_fontColor_10() { return &___m_fontColor_10; }
	inline void set_m_fontColor_10(Color_t4194546905  value)
	{
		___m_fontColor_10 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_11() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontColorGradient_11)); }
	inline VertexGradient_t2166651658  get_m_fontColorGradient_11() const { return ___m_fontColorGradient_11; }
	inline VertexGradient_t2166651658 * get_address_of_m_fontColorGradient_11() { return &___m_fontColorGradient_11; }
	inline void set_m_fontColorGradient_11(VertexGradient_t2166651658  value)
	{
		___m_fontColorGradient_11 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_12() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_enableVertexGradient_12)); }
	inline bool get_m_enableVertexGradient_12() const { return ___m_enableVertexGradient_12; }
	inline bool* get_address_of_m_enableVertexGradient_12() { return &___m_enableVertexGradient_12; }
	inline void set_m_enableVertexGradient_12(bool value)
	{
		___m_enableVertexGradient_12 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_13() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_faceColor_13)); }
	inline Color32_t598853688  get_m_faceColor_13() const { return ___m_faceColor_13; }
	inline Color32_t598853688 * get_address_of_m_faceColor_13() { return &___m_faceColor_13; }
	inline void set_m_faceColor_13(Color32_t598853688  value)
	{
		___m_faceColor_13 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_14() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_outlineColor_14)); }
	inline Color32_t598853688  get_m_outlineColor_14() const { return ___m_outlineColor_14; }
	inline Color32_t598853688 * get_address_of_m_outlineColor_14() { return &___m_outlineColor_14; }
	inline void set_m_outlineColor_14(Color32_t598853688  value)
	{
		___m_outlineColor_14 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_15() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_outlineWidth_15)); }
	inline float get_m_outlineWidth_15() const { return ___m_outlineWidth_15; }
	inline float* get_address_of_m_outlineWidth_15() { return &___m_outlineWidth_15; }
	inline void set_m_outlineWidth_15(float value)
	{
		___m_outlineWidth_15 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_16() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontSize_16)); }
	inline float get_m_fontSize_16() const { return ___m_fontSize_16; }
	inline float* get_address_of_m_fontSize_16() { return &___m_fontSize_16; }
	inline void set_m_fontSize_16(float value)
	{
		___m_fontSize_16 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_17() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontSizeMin_17)); }
	inline float get_m_fontSizeMin_17() const { return ___m_fontSizeMin_17; }
	inline float* get_address_of_m_fontSizeMin_17() { return &___m_fontSizeMin_17; }
	inline void set_m_fontSizeMin_17(float value)
	{
		___m_fontSizeMin_17 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_18() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontSizeMax_18)); }
	inline float get_m_fontSizeMax_18() const { return ___m_fontSizeMax_18; }
	inline float* get_address_of_m_fontSizeMax_18() { return &___m_fontSizeMax_18; }
	inline void set_m_fontSizeMax_18(float value)
	{
		___m_fontSizeMax_18 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_19() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontSizeBase_19)); }
	inline float get_m_fontSizeBase_19() const { return ___m_fontSizeBase_19; }
	inline float* get_address_of_m_fontSizeBase_19() { return &___m_fontSizeBase_19; }
	inline void set_m_fontSizeBase_19(float value)
	{
		___m_fontSizeBase_19 = value;
	}

	inline static int32_t get_offset_of_m_charSpacingMax_20() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_charSpacingMax_20)); }
	inline float get_m_charSpacingMax_20() const { return ___m_charSpacingMax_20; }
	inline float* get_address_of_m_charSpacingMax_20() { return &___m_charSpacingMax_20; }
	inline void set_m_charSpacingMax_20(float value)
	{
		___m_charSpacingMax_20 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_21() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineSpacingMax_21)); }
	inline float get_m_lineSpacingMax_21() const { return ___m_lineSpacingMax_21; }
	inline float* get_address_of_m_lineSpacingMax_21() { return &___m_lineSpacingMax_21; }
	inline void set_m_lineSpacingMax_21(float value)
	{
		___m_lineSpacingMax_21 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_22() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_charWidthMaxAdj_22)); }
	inline float get_m_charWidthMaxAdj_22() const { return ___m_charWidthMaxAdj_22; }
	inline float* get_address_of_m_charWidthMaxAdj_22() { return &___m_charWidthMaxAdj_22; }
	inline void set_m_charWidthMaxAdj_22(float value)
	{
		___m_charWidthMaxAdj_22 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_23() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_charWidthAdjDelta_23)); }
	inline float get_m_charWidthAdjDelta_23() const { return ___m_charWidthAdjDelta_23; }
	inline float* get_address_of_m_charWidthAdjDelta_23() { return &___m_charWidthAdjDelta_23; }
	inline void set_m_charWidthAdjDelta_23(float value)
	{
		___m_charWidthAdjDelta_23 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_24() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_currentFontSize_24)); }
	inline float get_m_currentFontSize_24() const { return ___m_currentFontSize_24; }
	inline float* get_address_of_m_currentFontSize_24() { return &___m_currentFontSize_24; }
	inline void set_m_currentFontSize_24(float value)
	{
		___m_currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_m_characterSpacing_25() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_characterSpacing_25)); }
	inline float get_m_characterSpacing_25() const { return ___m_characterSpacing_25; }
	inline float* get_address_of_m_characterSpacing_25() { return &___m_characterSpacing_25; }
	inline void set_m_characterSpacing_25(float value)
	{
		___m_characterSpacing_25 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_26() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_cSpacing_26)); }
	inline float get_m_cSpacing_26() const { return ___m_cSpacing_26; }
	inline float* get_address_of_m_cSpacing_26() { return &___m_cSpacing_26; }
	inline void set_m_cSpacing_26(float value)
	{
		___m_cSpacing_26 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_27() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_monoSpacing_27)); }
	inline float get_m_monoSpacing_27() const { return ___m_monoSpacing_27; }
	inline float* get_address_of_m_monoSpacing_27() { return &___m_monoSpacing_27; }
	inline void set_m_monoSpacing_27(float value)
	{
		___m_monoSpacing_27 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_28() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineSpacing_28)); }
	inline float get_m_lineSpacing_28() const { return ___m_lineSpacing_28; }
	inline float* get_address_of_m_lineSpacing_28() { return &___m_lineSpacing_28; }
	inline void set_m_lineSpacing_28(float value)
	{
		___m_lineSpacing_28 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_29() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineSpacingDelta_29)); }
	inline float get_m_lineSpacingDelta_29() const { return ___m_lineSpacingDelta_29; }
	inline float* get_address_of_m_lineSpacingDelta_29() { return &___m_lineSpacingDelta_29; }
	inline void set_m_lineSpacingDelta_29(float value)
	{
		___m_lineSpacingDelta_29 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_30() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineHeight_30)); }
	inline float get_m_lineHeight_30() const { return ___m_lineHeight_30; }
	inline float* get_address_of_m_lineHeight_30() { return &___m_lineHeight_30; }
	inline void set_m_lineHeight_30(float value)
	{
		___m_lineHeight_30 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_31() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_paragraphSpacing_31)); }
	inline float get_m_paragraphSpacing_31() const { return ___m_paragraphSpacing_31; }
	inline float* get_address_of_m_paragraphSpacing_31() { return &___m_paragraphSpacing_31; }
	inline void set_m_paragraphSpacing_31(float value)
	{
		___m_paragraphSpacing_31 = value;
	}

	inline static int32_t get_offset_of_m_lineLength_32() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineLength_32)); }
	inline float get_m_lineLength_32() const { return ___m_lineLength_32; }
	inline float* get_address_of_m_lineLength_32() { return &___m_lineLength_32; }
	inline void set_m_lineLength_32(float value)
	{
		___m_lineLength_32 = value;
	}

	inline static int32_t get_offset_of_m_anchor_33() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_anchor_33)); }
	inline int32_t get_m_anchor_33() const { return ___m_anchor_33; }
	inline int32_t* get_address_of_m_anchor_33() { return &___m_anchor_33; }
	inline void set_m_anchor_33(int32_t value)
	{
		___m_anchor_33 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_34() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_textAlignment_34)); }
	inline int32_t get_m_textAlignment_34() const { return ___m_textAlignment_34; }
	inline int32_t* get_address_of_m_textAlignment_34() { return &___m_textAlignment_34; }
	inline void set_m_textAlignment_34(int32_t value)
	{
		___m_textAlignment_34 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_35() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineJustification_35)); }
	inline int32_t get_m_lineJustification_35() const { return ___m_lineJustification_35; }
	inline int32_t* get_address_of_m_lineJustification_35() { return &___m_lineJustification_35; }
	inline void set_m_lineJustification_35(int32_t value)
	{
		___m_lineJustification_35 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_36() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_enableKerning_36)); }
	inline bool get_m_enableKerning_36() const { return ___m_enableKerning_36; }
	inline bool* get_address_of_m_enableKerning_36() { return &___m_enableKerning_36; }
	inline void set_m_enableKerning_36(bool value)
	{
		___m_enableKerning_36 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_37() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_overrideHtmlColors_37)); }
	inline bool get_m_overrideHtmlColors_37() const { return ___m_overrideHtmlColors_37; }
	inline bool* get_address_of_m_overrideHtmlColors_37() { return &___m_overrideHtmlColors_37; }
	inline void set_m_overrideHtmlColors_37(bool value)
	{
		___m_overrideHtmlColors_37 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_38() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_enableExtraPadding_38)); }
	inline bool get_m_enableExtraPadding_38() const { return ___m_enableExtraPadding_38; }
	inline bool* get_address_of_m_enableExtraPadding_38() { return &___m_enableExtraPadding_38; }
	inline void set_m_enableExtraPadding_38(bool value)
	{
		___m_enableExtraPadding_38 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_39() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___checkPaddingRequired_39)); }
	inline bool get_checkPaddingRequired_39() const { return ___checkPaddingRequired_39; }
	inline bool* get_address_of_checkPaddingRequired_39() { return &___checkPaddingRequired_39; }
	inline void set_checkPaddingRequired_39(bool value)
	{
		___checkPaddingRequired_39 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_40() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_enableWordWrapping_40)); }
	inline bool get_m_enableWordWrapping_40() const { return ___m_enableWordWrapping_40; }
	inline bool* get_address_of_m_enableWordWrapping_40() { return &___m_enableWordWrapping_40; }
	inline void set_m_enableWordWrapping_40(bool value)
	{
		___m_enableWordWrapping_40 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_41() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isCharacterWrappingEnabled_41)); }
	inline bool get_m_isCharacterWrappingEnabled_41() const { return ___m_isCharacterWrappingEnabled_41; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_41() { return &___m_isCharacterWrappingEnabled_41; }
	inline void set_m_isCharacterWrappingEnabled_41(bool value)
	{
		___m_isCharacterWrappingEnabled_41 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_42() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isNonBreakingSpace_42)); }
	inline bool get_m_isNonBreakingSpace_42() const { return ___m_isNonBreakingSpace_42; }
	inline bool* get_address_of_m_isNonBreakingSpace_42() { return &___m_isNonBreakingSpace_42; }
	inline void set_m_isNonBreakingSpace_42(bool value)
	{
		___m_isNonBreakingSpace_42 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_43() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_overflowMode_43)); }
	inline int32_t get_m_overflowMode_43() const { return ___m_overflowMode_43; }
	inline int32_t* get_address_of_m_overflowMode_43() { return &___m_overflowMode_43; }
	inline void set_m_overflowMode_43(int32_t value)
	{
		___m_overflowMode_43 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_44() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_wordWrappingRatios_44)); }
	inline float get_m_wordWrappingRatios_44() const { return ___m_wordWrappingRatios_44; }
	inline float* get_address_of_m_wordWrappingRatios_44() { return &___m_wordWrappingRatios_44; }
	inline void set_m_wordWrappingRatios_44(float value)
	{
		___m_wordWrappingRatios_44 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_45() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_horizontalMapping_45)); }
	inline int32_t get_m_horizontalMapping_45() const { return ___m_horizontalMapping_45; }
	inline int32_t* get_address_of_m_horizontalMapping_45() { return &___m_horizontalMapping_45; }
	inline void set_m_horizontalMapping_45(int32_t value)
	{
		___m_horizontalMapping_45 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_46() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_verticalMapping_46)); }
	inline int32_t get_m_verticalMapping_46() const { return ___m_verticalMapping_46; }
	inline int32_t* get_address_of_m_verticalMapping_46() { return &___m_verticalMapping_46; }
	inline void set_m_verticalMapping_46(int32_t value)
	{
		___m_verticalMapping_46 = value;
	}

	inline static int32_t get_offset_of_m_uvOffset_47() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_uvOffset_47)); }
	inline Vector2_t4282066565  get_m_uvOffset_47() const { return ___m_uvOffset_47; }
	inline Vector2_t4282066565 * get_address_of_m_uvOffset_47() { return &___m_uvOffset_47; }
	inline void set_m_uvOffset_47(Vector2_t4282066565  value)
	{
		___m_uvOffset_47 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_48() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_uvLineOffset_48)); }
	inline float get_m_uvLineOffset_48() const { return ___m_uvLineOffset_48; }
	inline float* get_address_of_m_uvLineOffset_48() { return &___m_uvLineOffset_48; }
	inline void set_m_uvLineOffset_48(float value)
	{
		___m_uvLineOffset_48 = value;
	}

	inline static int32_t get_offset_of_isInputParsingRequired_49() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___isInputParsingRequired_49)); }
	inline bool get_isInputParsingRequired_49() const { return ___isInputParsingRequired_49; }
	inline bool* get_address_of_isInputParsingRequired_49() { return &___isInputParsingRequired_49; }
	inline void set_isInputParsingRequired_49(bool value)
	{
		___isInputParsingRequired_49 = value;
	}

	inline static int32_t get_offset_of_havePropertiesChanged_50() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___havePropertiesChanged_50)); }
	inline bool get_havePropertiesChanged_50() const { return ___havePropertiesChanged_50; }
	inline bool* get_address_of_havePropertiesChanged_50() { return &___havePropertiesChanged_50; }
	inline void set_havePropertiesChanged_50(bool value)
	{
		___havePropertiesChanged_50 = value;
	}

	inline static int32_t get_offset_of_hasFontAssetChanged_51() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___hasFontAssetChanged_51)); }
	inline bool get_hasFontAssetChanged_51() const { return ___hasFontAssetChanged_51; }
	inline bool* get_address_of_hasFontAssetChanged_51() { return &___hasFontAssetChanged_51; }
	inline void set_hasFontAssetChanged_51(bool value)
	{
		___hasFontAssetChanged_51 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_52() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isRichText_52)); }
	inline bool get_m_isRichText_52() const { return ___m_isRichText_52; }
	inline bool* get_address_of_m_isRichText_52() { return &___m_isRichText_52; }
	inline void set_m_isRichText_52(bool value)
	{
		___m_isRichText_52 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_53() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_inputSource_53)); }
	inline int32_t get_m_inputSource_53() const { return ___m_inputSource_53; }
	inline int32_t* get_address_of_m_inputSource_53() { return &___m_inputSource_53; }
	inline void set_m_inputSource_53(int32_t value)
	{
		___m_inputSource_53 = value;
	}

	inline static int32_t get_offset_of_old_text_54() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___old_text_54)); }
	inline String_t* get_old_text_54() const { return ___old_text_54; }
	inline String_t** get_address_of_old_text_54() { return &___old_text_54; }
	inline void set_old_text_54(String_t* value)
	{
		___old_text_54 = value;
		Il2CppCodeGenWriteBarrier(&___old_text_54, value);
	}

	inline static int32_t get_offset_of_old_arg0_55() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___old_arg0_55)); }
	inline float get_old_arg0_55() const { return ___old_arg0_55; }
	inline float* get_address_of_old_arg0_55() { return &___old_arg0_55; }
	inline void set_old_arg0_55(float value)
	{
		___old_arg0_55 = value;
	}

	inline static int32_t get_offset_of_old_arg1_56() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___old_arg1_56)); }
	inline float get_old_arg1_56() const { return ___old_arg1_56; }
	inline float* get_address_of_old_arg1_56() { return &___old_arg1_56; }
	inline void set_old_arg1_56(float value)
	{
		___old_arg1_56 = value;
	}

	inline static int32_t get_offset_of_old_arg2_57() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___old_arg2_57)); }
	inline float get_old_arg2_57() const { return ___old_arg2_57; }
	inline float* get_address_of_old_arg2_57() { return &___old_arg2_57; }
	inline void set_old_arg2_57(float value)
	{
		___old_arg2_57 = value;
	}

	inline static int32_t get_offset_of_m_fontIndex_58() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontIndex_58)); }
	inline int32_t get_m_fontIndex_58() const { return ___m_fontIndex_58; }
	inline int32_t* get_address_of_m_fontIndex_58() { return &___m_fontIndex_58; }
	inline void set_m_fontIndex_58(int32_t value)
	{
		___m_fontIndex_58 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_59() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontScale_59)); }
	inline float get_m_fontScale_59() const { return ___m_fontScale_59; }
	inline float* get_address_of_m_fontScale_59() { return &___m_fontScale_59; }
	inline void set_m_fontScale_59(float value)
	{
		___m_fontScale_59 = value;
	}

	inline static int32_t get_offset_of_m_isRecalculateScaleRequired_60() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isRecalculateScaleRequired_60)); }
	inline bool get_m_isRecalculateScaleRequired_60() const { return ___m_isRecalculateScaleRequired_60; }
	inline bool* get_address_of_m_isRecalculateScaleRequired_60() { return &___m_isRecalculateScaleRequired_60; }
	inline void set_m_isRecalculateScaleRequired_60(bool value)
	{
		___m_isRecalculateScaleRequired_60 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScale_61() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_previousLossyScale_61)); }
	inline Vector3_t4282066566  get_m_previousLossyScale_61() const { return ___m_previousLossyScale_61; }
	inline Vector3_t4282066566 * get_address_of_m_previousLossyScale_61() { return &___m_previousLossyScale_61; }
	inline void set_m_previousLossyScale_61(Vector3_t4282066566  value)
	{
		___m_previousLossyScale_61 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_62() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_xAdvance_62)); }
	inline float get_m_xAdvance_62() const { return ___m_xAdvance_62; }
	inline float* get_address_of_m_xAdvance_62() { return &___m_xAdvance_62; }
	inline void set_m_xAdvance_62(float value)
	{
		___m_xAdvance_62 = value;
	}

	inline static int32_t get_offset_of_m_maxXAdvance_63() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxXAdvance_63)); }
	inline float get_m_maxXAdvance_63() const { return ___m_maxXAdvance_63; }
	inline float* get_address_of_m_maxXAdvance_63() { return &___m_maxXAdvance_63; }
	inline void set_m_maxXAdvance_63(float value)
	{
		___m_maxXAdvance_63 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_64() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___tag_LineIndent_64)); }
	inline float get_tag_LineIndent_64() const { return ___tag_LineIndent_64; }
	inline float* get_address_of_tag_LineIndent_64() { return &___tag_LineIndent_64; }
	inline void set_tag_LineIndent_64(float value)
	{
		___tag_LineIndent_64 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_65() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___tag_Indent_65)); }
	inline float get_tag_Indent_65() const { return ___tag_Indent_65; }
	inline float* get_address_of_tag_Indent_65() { return &___tag_Indent_65; }
	inline void set_tag_Indent_65(float value)
	{
		___tag_Indent_65 = value;
	}

	inline static int32_t get_offset_of_m_anchorOffset_66() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_anchorOffset_66)); }
	inline Vector3_t4282066566  get_m_anchorOffset_66() const { return ___m_anchorOffset_66; }
	inline Vector3_t4282066566 * get_address_of_m_anchorOffset_66() { return &___m_anchorOffset_66; }
	inline void set_m_anchorOffset_66(Vector3_t4282066566  value)
	{
		___m_anchorOffset_66 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_67() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_textInfo_67)); }
	inline TMP_TextInfo_t270066265 * get_m_textInfo_67() const { return ___m_textInfo_67; }
	inline TMP_TextInfo_t270066265 ** get_address_of_m_textInfo_67() { return &___m_textInfo_67; }
	inline void set_m_textInfo_67(TMP_TextInfo_t270066265 * value)
	{
		___m_textInfo_67 = value;
		Il2CppCodeGenWriteBarrier(&___m_textInfo_67, value);
	}

	inline static int32_t get_offset_of_m_htmlTag_68() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_htmlTag_68)); }
	inline CharU5BU5D_t3324145743* get_m_htmlTag_68() const { return ___m_htmlTag_68; }
	inline CharU5BU5D_t3324145743** get_address_of_m_htmlTag_68() { return &___m_htmlTag_68; }
	inline void set_m_htmlTag_68(CharU5BU5D_t3324145743* value)
	{
		___m_htmlTag_68 = value;
		Il2CppCodeGenWriteBarrier(&___m_htmlTag_68, value);
	}

	inline static int32_t get_offset_of_m_renderer_69() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_renderer_69)); }
	inline Renderer_t3076687687 * get_m_renderer_69() const { return ___m_renderer_69; }
	inline Renderer_t3076687687 ** get_address_of_m_renderer_69() { return &___m_renderer_69; }
	inline void set_m_renderer_69(Renderer_t3076687687 * value)
	{
		___m_renderer_69 = value;
		Il2CppCodeGenWriteBarrier(&___m_renderer_69, value);
	}

	inline static int32_t get_offset_of_m_meshFilter_70() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_meshFilter_70)); }
	inline MeshFilter_t3839065225 * get_m_meshFilter_70() const { return ___m_meshFilter_70; }
	inline MeshFilter_t3839065225 ** get_address_of_m_meshFilter_70() { return &___m_meshFilter_70; }
	inline void set_m_meshFilter_70(MeshFilter_t3839065225 * value)
	{
		___m_meshFilter_70 = value;
		Il2CppCodeGenWriteBarrier(&___m_meshFilter_70, value);
	}

	inline static int32_t get_offset_of_m_mesh_71() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_mesh_71)); }
	inline Mesh_t4241756145 * get_m_mesh_71() const { return ___m_mesh_71; }
	inline Mesh_t4241756145 ** get_address_of_m_mesh_71() { return &___m_mesh_71; }
	inline void set_m_mesh_71(Mesh_t4241756145 * value)
	{
		___m_mesh_71 = value;
		Il2CppCodeGenWriteBarrier(&___m_mesh_71, value);
	}

	inline static int32_t get_offset_of_m_transform_72() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_transform_72)); }
	inline Transform_t1659122786 * get_m_transform_72() const { return ___m_transform_72; }
	inline Transform_t1659122786 ** get_address_of_m_transform_72() { return &___m_transform_72; }
	inline void set_m_transform_72(Transform_t1659122786 * value)
	{
		___m_transform_72 = value;
		Il2CppCodeGenWriteBarrier(&___m_transform_72, value);
	}

	inline static int32_t get_offset_of_m_htmlColor_73() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_htmlColor_73)); }
	inline Color32_t598853688  get_m_htmlColor_73() const { return ___m_htmlColor_73; }
	inline Color32_t598853688 * get_address_of_m_htmlColor_73() { return &___m_htmlColor_73; }
	inline void set_m_htmlColor_73(Color32_t598853688  value)
	{
		___m_htmlColor_73 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_74() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_colorStack_74)); }
	inline Color32U5BU5D_t2960766953* get_m_colorStack_74() const { return ___m_colorStack_74; }
	inline Color32U5BU5D_t2960766953** get_address_of_m_colorStack_74() { return &___m_colorStack_74; }
	inline void set_m_colorStack_74(Color32U5BU5D_t2960766953* value)
	{
		___m_colorStack_74 = value;
		Il2CppCodeGenWriteBarrier(&___m_colorStack_74, value);
	}

	inline static int32_t get_offset_of_m_colorStackIndex_75() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_colorStackIndex_75)); }
	inline int32_t get_m_colorStackIndex_75() const { return ___m_colorStackIndex_75; }
	inline int32_t* get_address_of_m_colorStackIndex_75() { return &___m_colorStackIndex_75; }
	inline void set_m_colorStackIndex_75(int32_t value)
	{
		___m_colorStackIndex_75 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_76() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_tabSpacing_76)); }
	inline float get_m_tabSpacing_76() const { return ___m_tabSpacing_76; }
	inline float* get_address_of_m_tabSpacing_76() { return &___m_tabSpacing_76; }
	inline void set_m_tabSpacing_76(float value)
	{
		___m_tabSpacing_76 = value;
	}

	inline static int32_t get_offset_of_m_spacing_77() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_spacing_77)); }
	inline float get_m_spacing_77() const { return ___m_spacing_77; }
	inline float* get_address_of_m_spacing_77() { return &___m_spacing_77; }
	inline void set_m_spacing_77(float value)
	{
		___m_spacing_77 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_78() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_baselineOffset_78)); }
	inline float get_m_baselineOffset_78() const { return ___m_baselineOffset_78; }
	inline float* get_address_of_m_baselineOffset_78() { return &___m_baselineOffset_78; }
	inline void set_m_baselineOffset_78(float value)
	{
		___m_baselineOffset_78 = value;
	}

	inline static int32_t get_offset_of_m_padding_79() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_padding_79)); }
	inline float get_m_padding_79() const { return ___m_padding_79; }
	inline float* get_address_of_m_padding_79() { return &___m_padding_79; }
	inline void set_m_padding_79(float value)
	{
		___m_padding_79 = value;
	}

	inline static int32_t get_offset_of_m_alignmentPadding_80() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_alignmentPadding_80)); }
	inline Vector4_t4282066567  get_m_alignmentPadding_80() const { return ___m_alignmentPadding_80; }
	inline Vector4_t4282066567 * get_address_of_m_alignmentPadding_80() { return &___m_alignmentPadding_80; }
	inline void set_m_alignmentPadding_80(Vector4_t4282066567  value)
	{
		___m_alignmentPadding_80 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_81() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isUsingBold_81)); }
	inline bool get_m_isUsingBold_81() const { return ___m_isUsingBold_81; }
	inline bool* get_address_of_m_isUsingBold_81() { return &___m_isUsingBold_81; }
	inline void set_m_isUsingBold_81(bool value)
	{
		___m_isUsingBold_81 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVector_82() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___k_InfinityVector_82)); }
	inline Vector2_t4282066565  get_k_InfinityVector_82() const { return ___k_InfinityVector_82; }
	inline Vector2_t4282066565 * get_address_of_k_InfinityVector_82() { return &___k_InfinityVector_82; }
	inline void set_k_InfinityVector_82(Vector2_t4282066565  value)
	{
		___k_InfinityVector_82 = value;
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_83() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isFirstAllocation_83)); }
	inline bool get_m_isFirstAllocation_83() const { return ___m_isFirstAllocation_83; }
	inline bool* get_address_of_m_isFirstAllocation_83() { return &___m_isFirstAllocation_83; }
	inline void set_m_isFirstAllocation_83(bool value)
	{
		___m_isFirstAllocation_83 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_84() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_max_characters_84)); }
	inline int32_t get_m_max_characters_84() const { return ___m_max_characters_84; }
	inline int32_t* get_address_of_m_max_characters_84() { return &___m_max_characters_84; }
	inline void set_m_max_characters_84(int32_t value)
	{
		___m_max_characters_84 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_85() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_max_numberOfLines_85)); }
	inline int32_t get_m_max_numberOfLines_85() const { return ___m_max_numberOfLines_85; }
	inline int32_t* get_address_of_m_max_numberOfLines_85() { return &___m_max_numberOfLines_85; }
	inline void set_m_max_numberOfLines_85(int32_t value)
	{
		___m_max_numberOfLines_85 = value;
	}

	inline static int32_t get_offset_of_m_char_buffer_86() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_char_buffer_86)); }
	inline Int32U5BU5D_t3230847821* get_m_char_buffer_86() const { return ___m_char_buffer_86; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_char_buffer_86() { return &___m_char_buffer_86; }
	inline void set_m_char_buffer_86(Int32U5BU5D_t3230847821* value)
	{
		___m_char_buffer_86 = value;
		Il2CppCodeGenWriteBarrier(&___m_char_buffer_86, value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_87() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_input_CharArray_87)); }
	inline CharU5BU5D_t3324145743* get_m_input_CharArray_87() const { return ___m_input_CharArray_87; }
	inline CharU5BU5D_t3324145743** get_address_of_m_input_CharArray_87() { return &___m_input_CharArray_87; }
	inline void set_m_input_CharArray_87(CharU5BU5D_t3324145743* value)
	{
		___m_input_CharArray_87 = value;
		Il2CppCodeGenWriteBarrier(&___m_input_CharArray_87, value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_88() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_charArray_Length_88)); }
	inline int32_t get_m_charArray_Length_88() const { return ___m_charArray_Length_88; }
	inline int32_t* get_address_of_m_charArray_Length_88() { return &___m_charArray_Length_88; }
	inline void set_m_charArray_Length_88(int32_t value)
	{
		___m_charArray_Length_88 = value;
	}

	inline static int32_t get_offset_of_m_VisibleCharacters_89() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_VisibleCharacters_89)); }
	inline List_1_t4230808090 * get_m_VisibleCharacters_89() const { return ___m_VisibleCharacters_89; }
	inline List_1_t4230808090 ** get_address_of_m_VisibleCharacters_89() { return &___m_VisibleCharacters_89; }
	inline void set_m_VisibleCharacters_89(List_1_t4230808090 * value)
	{
		___m_VisibleCharacters_89 = value;
		Il2CppCodeGenWriteBarrier(&___m_VisibleCharacters_89, value);
	}

	inline static int32_t get_offset_of_k_Power_90() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___k_Power_90)); }
	inline SingleU5BU5D_t2316563989* get_k_Power_90() const { return ___k_Power_90; }
	inline SingleU5BU5D_t2316563989** get_address_of_k_Power_90() { return &___k_Power_90; }
	inline void set_k_Power_90(SingleU5BU5D_t2316563989* value)
	{
		___k_Power_90 = value;
		Il2CppCodeGenWriteBarrier(&___k_Power_90, value);
	}

	inline static int32_t get_offset_of_m_cached_GlyphInfo_91() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_cached_GlyphInfo_91)); }
	inline GlyphInfo_t462937628 * get_m_cached_GlyphInfo_91() const { return ___m_cached_GlyphInfo_91; }
	inline GlyphInfo_t462937628 ** get_address_of_m_cached_GlyphInfo_91() { return &___m_cached_GlyphInfo_91; }
	inline void set_m_cached_GlyphInfo_91(GlyphInfo_t462937628 * value)
	{
		___m_cached_GlyphInfo_91 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_GlyphInfo_91, value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_GlyphInfo_92() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_cached_Underline_GlyphInfo_92)); }
	inline GlyphInfo_t462937628 * get_m_cached_Underline_GlyphInfo_92() const { return ___m_cached_Underline_GlyphInfo_92; }
	inline GlyphInfo_t462937628 ** get_address_of_m_cached_Underline_GlyphInfo_92() { return &___m_cached_Underline_GlyphInfo_92; }
	inline void set_m_cached_Underline_GlyphInfo_92(GlyphInfo_t462937628 * value)
	{
		___m_cached_Underline_GlyphInfo_92 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_Underline_GlyphInfo_92, value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_93() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_SavedWordWrapState_93)); }
	inline WordWrapState_t4047764895  get_m_SavedWordWrapState_93() const { return ___m_SavedWordWrapState_93; }
	inline WordWrapState_t4047764895 * get_address_of_m_SavedWordWrapState_93() { return &___m_SavedWordWrapState_93; }
	inline void set_m_SavedWordWrapState_93(WordWrapState_t4047764895  value)
	{
		___m_SavedWordWrapState_93 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_94() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_SavedLineState_94)); }
	inline WordWrapState_t4047764895  get_m_SavedLineState_94() const { return ___m_SavedLineState_94; }
	inline WordWrapState_t4047764895 * get_address_of_m_SavedLineState_94() { return &___m_SavedLineState_94; }
	inline void set_m_SavedLineState_94(WordWrapState_t4047764895  value)
	{
		___m_SavedLineState_94 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_95() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_characterCount_95)); }
	inline int32_t get_m_characterCount_95() const { return ___m_characterCount_95; }
	inline int32_t* get_address_of_m_characterCount_95() { return &___m_characterCount_95; }
	inline void set_m_characterCount_95(int32_t value)
	{
		___m_characterCount_95 = value;
	}

	inline static int32_t get_offset_of_m_visibleCharacterCount_96() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_visibleCharacterCount_96)); }
	inline int32_t get_m_visibleCharacterCount_96() const { return ___m_visibleCharacterCount_96; }
	inline int32_t* get_address_of_m_visibleCharacterCount_96() { return &___m_visibleCharacterCount_96; }
	inline void set_m_visibleCharacterCount_96(int32_t value)
	{
		___m_visibleCharacterCount_96 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_97() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_firstCharacterOfLine_97)); }
	inline int32_t get_m_firstCharacterOfLine_97() const { return ___m_firstCharacterOfLine_97; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_97() { return &___m_firstCharacterOfLine_97; }
	inline void set_m_firstCharacterOfLine_97(int32_t value)
	{
		___m_firstCharacterOfLine_97 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_98() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_firstVisibleCharacterOfLine_98)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_98() const { return ___m_firstVisibleCharacterOfLine_98; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_98() { return &___m_firstVisibleCharacterOfLine_98; }
	inline void set_m_firstVisibleCharacterOfLine_98(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_98 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_99() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lastCharacterOfLine_99)); }
	inline int32_t get_m_lastCharacterOfLine_99() const { return ___m_lastCharacterOfLine_99; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_99() { return &___m_lastCharacterOfLine_99; }
	inline void set_m_lastCharacterOfLine_99(int32_t value)
	{
		___m_lastCharacterOfLine_99 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_100() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lastVisibleCharacterOfLine_100)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_100() const { return ___m_lastVisibleCharacterOfLine_100; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_100() { return &___m_lastVisibleCharacterOfLine_100; }
	inline void set_m_lastVisibleCharacterOfLine_100(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_100 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_101() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineNumber_101)); }
	inline int32_t get_m_lineNumber_101() const { return ___m_lineNumber_101; }
	inline int32_t* get_address_of_m_lineNumber_101() { return &___m_lineNumber_101; }
	inline void set_m_lineNumber_101(int32_t value)
	{
		___m_lineNumber_101 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_102() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_pageNumber_102)); }
	inline int32_t get_m_pageNumber_102() const { return ___m_pageNumber_102; }
	inline int32_t* get_address_of_m_pageNumber_102() { return &___m_pageNumber_102; }
	inline void set_m_pageNumber_102(int32_t value)
	{
		___m_pageNumber_102 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_103() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxAscender_103)); }
	inline float get_m_maxAscender_103() const { return ___m_maxAscender_103; }
	inline float* get_address_of_m_maxAscender_103() { return &___m_maxAscender_103; }
	inline void set_m_maxAscender_103(float value)
	{
		___m_maxAscender_103 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_104() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxDescender_104)); }
	inline float get_m_maxDescender_104() const { return ___m_maxDescender_104; }
	inline float* get_address_of_m_maxDescender_104() { return &___m_maxDescender_104; }
	inline void set_m_maxDescender_104(float value)
	{
		___m_maxDescender_104 = value;
	}

	inline static int32_t get_offset_of_m_maxFontScale_105() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxFontScale_105)); }
	inline float get_m_maxFontScale_105() const { return ___m_maxFontScale_105; }
	inline float* get_address_of_m_maxFontScale_105() { return &___m_maxFontScale_105; }
	inline void set_m_maxFontScale_105(float value)
	{
		___m_maxFontScale_105 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_106() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_lineOffset_106)); }
	inline float get_m_lineOffset_106() const { return ___m_lineOffset_106; }
	inline float* get_address_of_m_lineOffset_106() { return &___m_lineOffset_106; }
	inline void set_m_lineOffset_106(float value)
	{
		___m_lineOffset_106 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_107() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_meshExtents_107)); }
	inline Extents_t2060714539  get_m_meshExtents_107() const { return ___m_meshExtents_107; }
	inline Extents_t2060714539 * get_address_of_m_meshExtents_107() { return &___m_meshExtents_107; }
	inline void set_m_meshExtents_107(Extents_t2060714539  value)
	{
		___m_meshExtents_107 = value;
	}

	inline static int32_t get_offset_of_m_preferredWidth_108() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_preferredWidth_108)); }
	inline float get_m_preferredWidth_108() const { return ___m_preferredWidth_108; }
	inline float* get_address_of_m_preferredWidth_108() { return &___m_preferredWidth_108; }
	inline void set_m_preferredWidth_108(float value)
	{
		___m_preferredWidth_108 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_109() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_preferredHeight_109)); }
	inline float get_m_preferredHeight_109() const { return ___m_preferredHeight_109; }
	inline float* get_address_of_m_preferredHeight_109() { return &___m_preferredHeight_109; }
	inline void set_m_preferredHeight_109(float value)
	{
		___m_preferredHeight_109 = value;
	}

	inline static int32_t get_offset_of_m_vertices_110() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_vertices_110)); }
	inline Vector3U5BU5D_t215400611* get_m_vertices_110() const { return ___m_vertices_110; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_vertices_110() { return &___m_vertices_110; }
	inline void set_m_vertices_110(Vector3U5BU5D_t215400611* value)
	{
		___m_vertices_110 = value;
		Il2CppCodeGenWriteBarrier(&___m_vertices_110, value);
	}

	inline static int32_t get_offset_of_m_normals_111() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_normals_111)); }
	inline Vector3U5BU5D_t215400611* get_m_normals_111() const { return ___m_normals_111; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_normals_111() { return &___m_normals_111; }
	inline void set_m_normals_111(Vector3U5BU5D_t215400611* value)
	{
		___m_normals_111 = value;
		Il2CppCodeGenWriteBarrier(&___m_normals_111, value);
	}

	inline static int32_t get_offset_of_m_tangents_112() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_tangents_112)); }
	inline Vector4U5BU5D_t701588350* get_m_tangents_112() const { return ___m_tangents_112; }
	inline Vector4U5BU5D_t701588350** get_address_of_m_tangents_112() { return &___m_tangents_112; }
	inline void set_m_tangents_112(Vector4U5BU5D_t701588350* value)
	{
		___m_tangents_112 = value;
		Il2CppCodeGenWriteBarrier(&___m_tangents_112, value);
	}

	inline static int32_t get_offset_of_m_uvs_113() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_uvs_113)); }
	inline Vector2U5BU5D_t4024180168* get_m_uvs_113() const { return ___m_uvs_113; }
	inline Vector2U5BU5D_t4024180168** get_address_of_m_uvs_113() { return &___m_uvs_113; }
	inline void set_m_uvs_113(Vector2U5BU5D_t4024180168* value)
	{
		___m_uvs_113 = value;
		Il2CppCodeGenWriteBarrier(&___m_uvs_113, value);
	}

	inline static int32_t get_offset_of_m_uv2s_114() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_uv2s_114)); }
	inline Vector2U5BU5D_t4024180168* get_m_uv2s_114() const { return ___m_uv2s_114; }
	inline Vector2U5BU5D_t4024180168** get_address_of_m_uv2s_114() { return &___m_uv2s_114; }
	inline void set_m_uv2s_114(Vector2U5BU5D_t4024180168* value)
	{
		___m_uv2s_114 = value;
		Il2CppCodeGenWriteBarrier(&___m_uv2s_114, value);
	}

	inline static int32_t get_offset_of_m_vertColors_115() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_vertColors_115)); }
	inline Color32U5BU5D_t2960766953* get_m_vertColors_115() const { return ___m_vertColors_115; }
	inline Color32U5BU5D_t2960766953** get_address_of_m_vertColors_115() { return &___m_vertColors_115; }
	inline void set_m_vertColors_115(Color32U5BU5D_t2960766953* value)
	{
		___m_vertColors_115 = value;
		Il2CppCodeGenWriteBarrier(&___m_vertColors_115, value);
	}

	inline static int32_t get_offset_of_m_triangles_116() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_triangles_116)); }
	inline Int32U5BU5D_t3230847821* get_m_triangles_116() const { return ___m_triangles_116; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_triangles_116() { return &___m_triangles_116; }
	inline void set_m_triangles_116(Int32U5BU5D_t3230847821* value)
	{
		___m_triangles_116 = value;
		Il2CppCodeGenWriteBarrier(&___m_triangles_116, value);
	}

	inline static int32_t get_offset_of_m_default_bounds_117() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_default_bounds_117)); }
	inline Bounds_t2711641849  get_m_default_bounds_117() const { return ___m_default_bounds_117; }
	inline Bounds_t2711641849 * get_address_of_m_default_bounds_117() { return &___m_default_bounds_117; }
	inline void set_m_default_bounds_117(Bounds_t2711641849  value)
	{
		___m_default_bounds_117 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_118() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_ignoreCulling_118)); }
	inline bool get_m_ignoreCulling_118() const { return ___m_ignoreCulling_118; }
	inline bool* get_address_of_m_ignoreCulling_118() { return &___m_ignoreCulling_118; }
	inline void set_m_ignoreCulling_118(bool value)
	{
		___m_ignoreCulling_118 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_119() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isOrthographic_119)); }
	inline bool get_m_isOrthographic_119() const { return ___m_isOrthographic_119; }
	inline bool* get_address_of_m_isOrthographic_119() { return &___m_isOrthographic_119; }
	inline void set_m_isOrthographic_119(bool value)
	{
		___m_isOrthographic_119 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_120() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isCullingEnabled_120)); }
	inline bool get_m_isCullingEnabled_120() const { return ___m_isCullingEnabled_120; }
	inline bool* get_address_of_m_isCullingEnabled_120() { return &___m_isCullingEnabled_120; }
	inline void set_m_isCullingEnabled_120(bool value)
	{
		___m_isCullingEnabled_120 = value;
	}

	inline static int32_t get_offset_of_m_sortingLayerID_121() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_sortingLayerID_121)); }
	inline int32_t get_m_sortingLayerID_121() const { return ___m_sortingLayerID_121; }
	inline int32_t* get_address_of_m_sortingLayerID_121() { return &___m_sortingLayerID_121; }
	inline void set_m_sortingLayerID_121(int32_t value)
	{
		___m_sortingLayerID_121 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_122() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxVisibleCharacters_122)); }
	inline int32_t get_m_maxVisibleCharacters_122() const { return ___m_maxVisibleCharacters_122; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_122() { return &___m_maxVisibleCharacters_122; }
	inline void set_m_maxVisibleCharacters_122(int32_t value)
	{
		___m_maxVisibleCharacters_122 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_123() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxVisibleLines_123)); }
	inline int32_t get_m_maxVisibleLines_123() const { return ___m_maxVisibleLines_123; }
	inline int32_t* get_address_of_m_maxVisibleLines_123() { return &___m_maxVisibleLines_123; }
	inline void set_m_maxVisibleLines_123(int32_t value)
	{
		___m_maxVisibleLines_123 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_124() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_pageToDisplay_124)); }
	inline int32_t get_m_pageToDisplay_124() const { return ___m_pageToDisplay_124; }
	inline int32_t* get_address_of_m_pageToDisplay_124() { return &___m_pageToDisplay_124; }
	inline void set_m_pageToDisplay_124(int32_t value)
	{
		___m_pageToDisplay_124 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_125() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isNewPage_125)); }
	inline bool get_m_isNewPage_125() const { return ___m_isNewPage_125; }
	inline bool* get_address_of_m_isNewPage_125() { return &___m_isNewPage_125; }
	inline void set_m_isNewPage_125(bool value)
	{
		___m_isNewPage_125 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_126() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isTextTruncated_126)); }
	inline bool get_m_isTextTruncated_126() const { return ___m_isTextTruncated_126; }
	inline bool* get_address_of_m_isTextTruncated_126() { return &___m_isTextTruncated_126; }
	inline void set_m_isTextTruncated_126(bool value)
	{
		___m_isTextTruncated_126 = value;
	}

	inline static int32_t get_offset_of_m_fontAssetArray_127() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_fontAssetArray_127)); }
	inline TextMeshProFontU5BU5D_t1470155469* get_m_fontAssetArray_127() const { return ___m_fontAssetArray_127; }
	inline TextMeshProFontU5BU5D_t1470155469** get_address_of_m_fontAssetArray_127() { return &___m_fontAssetArray_127; }
	inline void set_m_fontAssetArray_127(TextMeshProFontU5BU5D_t1470155469* value)
	{
		___m_fontAssetArray_127 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontAssetArray_127, value);
	}

	inline static int32_t get_offset_of_m_sharedMaterials_128() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_sharedMaterials_128)); }
	inline List_1_t943818363 * get_m_sharedMaterials_128() const { return ___m_sharedMaterials_128; }
	inline List_1_t943818363 ** get_address_of_m_sharedMaterials_128() { return &___m_sharedMaterials_128; }
	inline void set_m_sharedMaterials_128(List_1_t943818363 * value)
	{
		___m_sharedMaterials_128 = value;
		Il2CppCodeGenWriteBarrier(&___m_sharedMaterials_128, value);
	}

	inline static int32_t get_offset_of_m_selectedFontAsset_129() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_selectedFontAsset_129)); }
	inline int32_t get_m_selectedFontAsset_129() const { return ___m_selectedFontAsset_129; }
	inline int32_t* get_address_of_m_selectedFontAsset_129() { return &___m_selectedFontAsset_129; }
	inline void set_m_selectedFontAsset_129(int32_t value)
	{
		___m_selectedFontAsset_129 = value;
	}

	inline static int32_t get_offset_of_m_maskingPropertyBlock_130() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maskingPropertyBlock_130)); }
	inline MaterialPropertyBlock_t1322387783 * get_m_maskingPropertyBlock_130() const { return ___m_maskingPropertyBlock_130; }
	inline MaterialPropertyBlock_t1322387783 ** get_address_of_m_maskingPropertyBlock_130() { return &___m_maskingPropertyBlock_130; }
	inline void set_m_maskingPropertyBlock_130(MaterialPropertyBlock_t1322387783 * value)
	{
		___m_maskingPropertyBlock_130 = value;
		Il2CppCodeGenWriteBarrier(&___m_maskingPropertyBlock_130, value);
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_131() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isMaskingEnabled_131)); }
	inline bool get_m_isMaskingEnabled_131() const { return ___m_isMaskingEnabled_131; }
	inline bool* get_address_of_m_isMaskingEnabled_131() { return &___m_isMaskingEnabled_131; }
	inline void set_m_isMaskingEnabled_131(bool value)
	{
		___m_isMaskingEnabled_131 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_132() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___isMaskUpdateRequired_132)); }
	inline bool get_isMaskUpdateRequired_132() const { return ___isMaskUpdateRequired_132; }
	inline bool* get_address_of_isMaskUpdateRequired_132() { return &___isMaskUpdateRequired_132; }
	inline void set_isMaskUpdateRequired_132(bool value)
	{
		___isMaskUpdateRequired_132 = value;
	}

	inline static int32_t get_offset_of_m_isMaterialBlockSet_133() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isMaterialBlockSet_133)); }
	inline bool get_m_isMaterialBlockSet_133() const { return ___m_isMaterialBlockSet_133; }
	inline bool* get_address_of_m_isMaterialBlockSet_133() { return &___m_isMaterialBlockSet_133; }
	inline void set_m_isMaterialBlockSet_133(bool value)
	{
		___m_isMaterialBlockSet_133 = value;
	}

	inline static int32_t get_offset_of_m_maskType_134() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maskType_134)); }
	inline int32_t get_m_maskType_134() const { return ___m_maskType_134; }
	inline int32_t* get_address_of_m_maskType_134() { return &___m_maskType_134; }
	inline void set_m_maskType_134(int32_t value)
	{
		___m_maskType_134 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_135() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_EnvMapMatrix_135)); }
	inline Matrix4x4_t1651859333  get_m_EnvMapMatrix_135() const { return ___m_EnvMapMatrix_135; }
	inline Matrix4x4_t1651859333 * get_address_of_m_EnvMapMatrix_135() { return &___m_EnvMapMatrix_135; }
	inline void set_m_EnvMapMatrix_135(Matrix4x4_t1651859333  value)
	{
		___m_EnvMapMatrix_135 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_136() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_renderMode_136)); }
	inline int32_t get_m_renderMode_136() const { return ___m_renderMode_136; }
	inline int32_t* get_address_of_m_renderMode_136() { return &___m_renderMode_136; }
	inline void set_m_renderMode_136(int32_t value)
	{
		___m_renderMode_136 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_137() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isParsingText_137)); }
	inline bool get_m_isParsingText_137() const { return ___m_isParsingText_137; }
	inline bool* get_address_of_m_isParsingText_137() { return &___m_isParsingText_137; }
	inline void set_m_isParsingText_137(bool value)
	{
		___m_isParsingText_137 = value;
	}

	inline static int32_t get_offset_of_tag_LinkInfo_138() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___tag_LinkInfo_138)); }
	inline TMP_LinkInfo_t2467896998  get_tag_LinkInfo_138() const { return ___tag_LinkInfo_138; }
	inline TMP_LinkInfo_t2467896998 * get_address_of_tag_LinkInfo_138() { return &___tag_LinkInfo_138; }
	inline void set_tag_LinkInfo_138(TMP_LinkInfo_t2467896998  value)
	{
		___tag_LinkInfo_138 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_139() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_styleStack_139)); }
	inline Int32U5BU5D_t3230847821* get_m_styleStack_139() const { return ___m_styleStack_139; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_styleStack_139() { return &___m_styleStack_139; }
	inline void set_m_styleStack_139(Int32U5BU5D_t3230847821* value)
	{
		___m_styleStack_139 = value;
		Il2CppCodeGenWriteBarrier(&___m_styleStack_139, value);
	}

	inline static int32_t get_offset_of_m_styleStackIndex_140() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_styleStackIndex_140)); }
	inline int32_t get_m_styleStackIndex_140() const { return ___m_styleStackIndex_140; }
	inline int32_t* get_address_of_m_styleStackIndex_140() { return &___m_styleStackIndex_140; }
	inline void set_m_styleStackIndex_140(int32_t value)
	{
		___m_styleStackIndex_140 = value;
	}

	inline static int32_t get_offset_of_m_textContainer_141() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_textContainer_141)); }
	inline TextContainer_t2231787766 * get_m_textContainer_141() const { return ___m_textContainer_141; }
	inline TextContainer_t2231787766 ** get_address_of_m_textContainer_141() { return &___m_textContainer_141; }
	inline void set_m_textContainer_141(TextContainer_t2231787766 * value)
	{
		___m_textContainer_141 = value;
		Il2CppCodeGenWriteBarrier(&___m_textContainer_141, value);
	}

	inline static int32_t get_offset_of_m_marginLeft_142() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_marginLeft_142)); }
	inline float get_m_marginLeft_142() const { return ___m_marginLeft_142; }
	inline float* get_address_of_m_marginLeft_142() { return &___m_marginLeft_142; }
	inline void set_m_marginLeft_142(float value)
	{
		___m_marginLeft_142 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_143() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_marginRight_143)); }
	inline float get_m_marginRight_143() const { return ___m_marginRight_143; }
	inline float* get_address_of_m_marginRight_143() { return &___m_marginRight_143; }
	inline void set_m_marginRight_143(float value)
	{
		___m_marginRight_143 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_144() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_marginWidth_144)); }
	inline float get_m_marginWidth_144() const { return ___m_marginWidth_144; }
	inline float* get_address_of_m_marginWidth_144() { return &___m_marginWidth_144; }
	inline void set_m_marginWidth_144(float value)
	{
		___m_marginWidth_144 = value;
	}

	inline static int32_t get_offset_of_m_width_145() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_width_145)); }
	inline float get_m_width_145() const { return ___m_width_145; }
	inline float* get_address_of_m_width_145() { return &___m_width_145; }
	inline void set_m_width_145(float value)
	{
		___m_width_145 = value;
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_146() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_enableAutoSizing_146)); }
	inline bool get_m_enableAutoSizing_146() const { return ___m_enableAutoSizing_146; }
	inline bool* get_address_of_m_enableAutoSizing_146() { return &___m_enableAutoSizing_146; }
	inline void set_m_enableAutoSizing_146(bool value)
	{
		___m_enableAutoSizing_146 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_147() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_maxFontSize_147)); }
	inline float get_m_maxFontSize_147() const { return ___m_maxFontSize_147; }
	inline float* get_address_of_m_maxFontSize_147() { return &___m_maxFontSize_147; }
	inline void set_m_maxFontSize_147(float value)
	{
		___m_maxFontSize_147 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_148() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_minFontSize_148)); }
	inline float get_m_minFontSize_148() const { return ___m_minFontSize_148; }
	inline float* get_address_of_m_minFontSize_148() { return &___m_minFontSize_148; }
	inline void set_m_minFontSize_148(float value)
	{
		___m_minFontSize_148 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_149() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_isRegisteredForEvents_149)); }
	inline bool get_m_isRegisteredForEvents_149() const { return ___m_isRegisteredForEvents_149; }
	inline bool* get_address_of_m_isRegisteredForEvents_149() { return &___m_isRegisteredForEvents_149; }
	inline void set_m_isRegisteredForEvents_149(bool value)
	{
		___m_isRegisteredForEvents_149 = value;
	}

	inline static int32_t get_offset_of_isDebugOutputDone_150() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___isDebugOutputDone_150)); }
	inline bool get_isDebugOutputDone_150() const { return ___isDebugOutputDone_150; }
	inline bool* get_address_of_isDebugOutputDone_150() { return &___isDebugOutputDone_150; }
	inline void set_isDebugOutputDone_150(bool value)
	{
		___isDebugOutputDone_150 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_151() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___m_recursiveCount_151)); }
	inline int32_t get_m_recursiveCount_151() const { return ___m_recursiveCount_151; }
	inline int32_t* get_address_of_m_recursiveCount_151() { return &___m_recursiveCount_151; }
	inline void set_m_recursiveCount_151(int32_t value)
	{
		___m_recursiveCount_151 = value;
	}

	inline static int32_t get_offset_of_loopCountA_152() { return static_cast<int32_t>(offsetof(TextMeshPro_t3198095413, ___loopCountA_152)); }
	inline int32_t get_loopCountA_152() const { return ___loopCountA_152; }
	inline int32_t* get_address_of_loopCountA_152() { return &___loopCountA_152; }
	inline void set_loopCountA_152(int32_t value)
	{
		___loopCountA_152 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
