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
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t3950887807;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
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
// UnityEngine.UI.ILayoutController
struct ILayoutController_t1965410709;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1796391381;
// TMPro.TextMeshProFont[]
struct TextMeshProFontU5BU5D_t1470155469;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t943818363;
// TMPro.InlineGraphicManager
struct InlineGraphicManager_t3583857972;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "UnityEngine_UI_UnityEngine_UI_Graphic836799438.h"
#include "AssemblyU2DCSharp_TMPro_FontStyles3228051751.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_TMPro_VertexGradient2166651658.h"
#include "AssemblyU2DCSharp_TMPro_TextAlignmentOptions3798547742.h"
#include "AssemblyU2DCSharp_TMPro_TextOverflowModes832755779.h"
#include "AssemblyU2DCSharp_TMPro_TextureMappingOptions707307789.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProUGUI_TextInputS2344459371.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "AssemblyU2DCSharp_TMPro_WordWrapState4047764895.h"
#include "AssemblyU2DCSharp_TMPro_Extents2060714539.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"
#include "UnityEngine_UnityEngine_Matrix4x41651859333.h"
#include "AssemblyU2DCSharp_TMPro_TextRenderFlags2400171206.h"
#include "AssemblyU2DCSharp_TMPro_TMP_LinkInfo2467896998.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProUGUI_AutoLayout2755773234.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_t3603375195  : public Graphic_t836799438
{
public:
	// System.String TMPro.TextMeshProUGUI::m_text
	String_t* ___m_text_19;
	// TMPro.TextMeshProFont TMPro.TextMeshProUGUI::m_fontAsset
	TextMeshProFont_t3602967588 * ___m_fontAsset_20;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_fontMaterial
	Material_t3870600107 * ___m_fontMaterial_21;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_sharedMaterial
	Material_t3870600107 * ___m_sharedMaterial_22;
	// TMPro.FontStyles TMPro.TextMeshProUGUI::m_fontStyle
	int32_t ___m_fontStyle_23;
	// TMPro.FontStyles TMPro.TextMeshProUGUI::m_style
	int32_t ___m_style_24;
	// System.Boolean TMPro.TextMeshProUGUI::m_isOverlay
	bool ___m_isOverlay_25;
	// UnityEngine.Color32 TMPro.TextMeshProUGUI::m_fontColor32
	Color32_t598853688  ___m_fontColor32_26;
	// UnityEngine.Color TMPro.TextMeshProUGUI::m_fontColor
	Color_t4194546905  ___m_fontColor_27;
	// System.Boolean TMPro.TextMeshProUGUI::m_enableVertexGradient
	bool ___m_enableVertexGradient_28;
	// TMPro.VertexGradient TMPro.TextMeshProUGUI::m_fontColorGradient
	VertexGradient_t2166651658  ___m_fontColorGradient_29;
	// UnityEngine.Color32 TMPro.TextMeshProUGUI::m_faceColor
	Color32_t598853688  ___m_faceColor_30;
	// UnityEngine.Color32 TMPro.TextMeshProUGUI::m_outlineColor
	Color32_t598853688  ___m_outlineColor_31;
	// System.Single TMPro.TextMeshProUGUI::m_outlineWidth
	float ___m_outlineWidth_32;
	// System.Single TMPro.TextMeshProUGUI::m_fontSize
	float ___m_fontSize_33;
	// System.Single TMPro.TextMeshProUGUI::m_fontSizeMin
	float ___m_fontSizeMin_34;
	// System.Single TMPro.TextMeshProUGUI::m_fontSizeMax
	float ___m_fontSizeMax_35;
	// System.Single TMPro.TextMeshProUGUI::m_fontSizeBase
	float ___m_fontSizeBase_36;
	// System.Single TMPro.TextMeshProUGUI::m_lineSpacingMax
	float ___m_lineSpacingMax_37;
	// System.Single TMPro.TextMeshProUGUI::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_38;
	// System.Single TMPro.TextMeshProUGUI::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_39;
	// System.Single TMPro.TextMeshProUGUI::m_currentFontSize
	float ___m_currentFontSize_40;
	// System.Single TMPro.TextMeshProUGUI::m_characterSpacing
	float ___m_characterSpacing_41;
	// System.Single TMPro.TextMeshProUGUI::m_cSpacing
	float ___m_cSpacing_42;
	// System.Single TMPro.TextMeshProUGUI::m_monoSpacing
	float ___m_monoSpacing_43;
	// System.Single TMPro.TextMeshProUGUI::m_lineSpacing
	float ___m_lineSpacing_44;
	// System.Single TMPro.TextMeshProUGUI::m_lineSpacingDelta
	float ___m_lineSpacingDelta_45;
	// System.Single TMPro.TextMeshProUGUI::m_lineHeight
	float ___m_lineHeight_46;
	// System.Single TMPro.TextMeshProUGUI::m_paragraphSpacing
	float ___m_paragraphSpacing_47;
	// TMPro.TextAlignmentOptions TMPro.TextMeshProUGUI::m_textAlignment
	int32_t ___m_textAlignment_48;
	// TMPro.TextAlignmentOptions TMPro.TextMeshProUGUI::m_lineJustification
	int32_t ___m_lineJustification_49;
	// System.Boolean TMPro.TextMeshProUGUI::m_enableKerning
	bool ___m_enableKerning_50;
	// System.Boolean TMPro.TextMeshProUGUI::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_51;
	// System.Boolean TMPro.TextMeshProUGUI::m_enableExtraPadding
	bool ___m_enableExtraPadding_52;
	// System.Boolean TMPro.TextMeshProUGUI::checkPaddingRequired
	bool ___checkPaddingRequired_53;
	// System.Boolean TMPro.TextMeshProUGUI::m_enableWordWrapping
	bool ___m_enableWordWrapping_54;
	// System.Boolean TMPro.TextMeshProUGUI::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_55;
	// System.Boolean TMPro.TextMeshProUGUI::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_56;
	// TMPro.TextOverflowModes TMPro.TextMeshProUGUI::m_overflowMode
	int32_t ___m_overflowMode_57;
	// System.Single TMPro.TextMeshProUGUI::m_wordWrappingRatios
	float ___m_wordWrappingRatios_58;
	// TMPro.TextureMappingOptions TMPro.TextMeshProUGUI::m_horizontalMapping
	int32_t ___m_horizontalMapping_59;
	// TMPro.TextureMappingOptions TMPro.TextMeshProUGUI::m_verticalMapping
	int32_t ___m_verticalMapping_60;
	// UnityEngine.Vector2 TMPro.TextMeshProUGUI::m_uvOffset
	Vector2_t4282066565  ___m_uvOffset_61;
	// System.Single TMPro.TextMeshProUGUI::m_uvLineOffset
	float ___m_uvLineOffset_62;
	// System.Boolean TMPro.TextMeshProUGUI::isInputParsingRequired
	bool ___isInputParsingRequired_63;
	// System.Boolean TMPro.TextMeshProUGUI::havePropertiesChanged
	bool ___havePropertiesChanged_64;
	// System.Boolean TMPro.TextMeshProUGUI::hasFontAssetChanged
	bool ___hasFontAssetChanged_65;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRichText
	bool ___m_isRichText_66;
	// TMPro.TextMeshProUGUI/TextInputSources TMPro.TextMeshProUGUI::m_inputSource
	int32_t ___m_inputSource_67;
	// System.String TMPro.TextMeshProUGUI::old_text
	String_t* ___old_text_68;
	// System.Single TMPro.TextMeshProUGUI::old_arg0
	float ___old_arg0_69;
	// System.Single TMPro.TextMeshProUGUI::old_arg1
	float ___old_arg1_70;
	// System.Single TMPro.TextMeshProUGUI::old_arg2
	float ___old_arg2_71;
	// System.Int32 TMPro.TextMeshProUGUI::m_fontIndex
	int32_t ___m_fontIndex_72;
	// System.Single TMPro.TextMeshProUGUI::m_fontScale
	float ___m_fontScale_73;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRecalculateScaleRequired
	bool ___m_isRecalculateScaleRequired_74;
	// UnityEngine.Vector3 TMPro.TextMeshProUGUI::m_previousLossyScale
	Vector3_t4282066566  ___m_previousLossyScale_75;
	// System.Single TMPro.TextMeshProUGUI::m_xAdvance
	float ___m_xAdvance_76;
	// System.Single TMPro.TextMeshProUGUI::m_maxXAdvance
	float ___m_maxXAdvance_77;
	// System.Single TMPro.TextMeshProUGUI::tag_LineIndent
	float ___tag_LineIndent_78;
	// System.Single TMPro.TextMeshProUGUI::tag_Indent
	float ___tag_Indent_79;
	// UnityEngine.Vector3 TMPro.TextMeshProUGUI::m_anchorOffset
	Vector3_t4282066566  ___m_anchorOffset_80;
	// TMPro.TMP_TextInfo TMPro.TextMeshProUGUI::m_textInfo
	TMP_TextInfo_t270066265 * ___m_textInfo_81;
	// System.Char[] TMPro.TextMeshProUGUI::m_htmlTag
	CharU5BU5D_t3324145743* ___m_htmlTag_82;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_uiRenderer
	CanvasRenderer_t3950887807 * ___m_uiRenderer_83;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2727140764 * ___m_canvas_84;
	// UnityEngine.RectTransform TMPro.TextMeshProUGUI::m_rectTransform
	RectTransform_t972643934 * ___m_rectTransform_85;
	// UnityEngine.Color32 TMPro.TextMeshProUGUI::m_htmlColor
	Color32_t598853688  ___m_htmlColor_86;
	// UnityEngine.Color32[] TMPro.TextMeshProUGUI::m_colorStack
	Color32U5BU5D_t2960766953* ___m_colorStack_87;
	// System.Int32 TMPro.TextMeshProUGUI::m_colorStackIndex
	int32_t ___m_colorStackIndex_88;
	// System.Single TMPro.TextMeshProUGUI::m_tabSpacing
	float ___m_tabSpacing_89;
	// System.Single TMPro.TextMeshProUGUI::m_spacing
	float ___m_spacing_90;
	// System.Single TMPro.TextMeshProUGUI::m_baselineOffset
	float ___m_baselineOffset_91;
	// System.Single TMPro.TextMeshProUGUI::m_padding
	float ___m_padding_92;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_alignmentPadding
	Vector4_t4282066567  ___m_alignmentPadding_93;
	// System.Boolean TMPro.TextMeshProUGUI::m_isUsingBold
	bool ___m_isUsingBold_94;
	// UnityEngine.Vector2 TMPro.TextMeshProUGUI::k_InfinityVector
	Vector2_t4282066565  ___k_InfinityVector_95;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_96;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_97;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_98;
	// System.Int32[] TMPro.TextMeshProUGUI::m_char_buffer
	Int32U5BU5D_t3230847821* ___m_char_buffer_99;
	// System.Char[] TMPro.TextMeshProUGUI::m_input_CharArray
	CharU5BU5D_t3324145743* ___m_input_CharArray_100;
	// System.Int32 TMPro.TextMeshProUGUI::m_charArray_Length
	int32_t ___m_charArray_Length_101;
	// System.Collections.Generic.List`1<System.Char> TMPro.TextMeshProUGUI::m_VisibleCharacters
	List_1_t4230808090 * ___m_VisibleCharacters_102;
	// System.Single[] TMPro.TextMeshProUGUI::k_Power
	SingleU5BU5D_t2316563989* ___k_Power_103;
	// TMPro.GlyphInfo TMPro.TextMeshProUGUI::m_cached_GlyphInfo
	GlyphInfo_t462937628 * ___m_cached_GlyphInfo_104;
	// TMPro.GlyphInfo TMPro.TextMeshProUGUI::m_cached_Underline_GlyphInfo
	GlyphInfo_t462937628 * ___m_cached_Underline_GlyphInfo_105;
	// TMPro.WordWrapState TMPro.TextMeshProUGUI::m_SavedWordWrapState
	WordWrapState_t4047764895  ___m_SavedWordWrapState_106;
	// TMPro.WordWrapState TMPro.TextMeshProUGUI::m_SavedLineState
	WordWrapState_t4047764895  ___m_SavedLineState_107;
	// System.Int32 TMPro.TextMeshProUGUI::m_characterCount
	int32_t ___m_characterCount_108;
	// System.Int32 TMPro.TextMeshProUGUI::m_visibleCharacterCount
	int32_t ___m_visibleCharacterCount_109;
	// System.Int32 TMPro.TextMeshProUGUI::m_visibleSpriteCount
	int32_t ___m_visibleSpriteCount_110;
	// System.Int32 TMPro.TextMeshProUGUI::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_111;
	// System.Int32 TMPro.TextMeshProUGUI::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_112;
	// System.Int32 TMPro.TextMeshProUGUI::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_113;
	// System.Int32 TMPro.TextMeshProUGUI::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_114;
	// System.Int32 TMPro.TextMeshProUGUI::m_lineNumber
	int32_t ___m_lineNumber_115;
	// System.Int32 TMPro.TextMeshProUGUI::m_pageNumber
	int32_t ___m_pageNumber_116;
	// System.Single TMPro.TextMeshProUGUI::m_maxAscender
	float ___m_maxAscender_117;
	// System.Single TMPro.TextMeshProUGUI::m_maxDescender
	float ___m_maxDescender_118;
	// System.Single TMPro.TextMeshProUGUI::m_maxFontScale
	float ___m_maxFontScale_119;
	// System.Single TMPro.TextMeshProUGUI::m_lineOffset
	float ___m_lineOffset_120;
	// TMPro.Extents TMPro.TextMeshProUGUI::m_meshExtents
	Extents_t2060714539  ___m_meshExtents_121;
	// System.Boolean TMPro.TextMeshProUGUI::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_122;
	// UnityEngine.UI.ILayoutController TMPro.TextMeshProUGUI::m_layoutController
	Il2CppObject * ___m_layoutController_123;
	// UnityEngine.UIVertex[] TMPro.TextMeshProUGUI::m_uiVertices
	UIVertexU5BU5D_t1796391381* ___m_uiVertices_124;
	// UnityEngine.Bounds TMPro.TextMeshProUGUI::m_bounds
	Bounds_t2711641849  ___m_bounds_125;
	// System.Boolean TMPro.TextMeshProUGUI::m_ignoreCulling
	bool ___m_ignoreCulling_126;
	// System.Boolean TMPro.TextMeshProUGUI::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TextMeshProUGUI::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Int32 TMPro.TextMeshProUGUI::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_129;
	// System.Int32 TMPro.TextMeshProUGUI::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_130;
	// System.Int32 TMPro.TextMeshProUGUI::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_131;
	// System.Int32 TMPro.TextMeshProUGUI::m_pageToDisplay
	int32_t ___m_pageToDisplay_132;
	// System.Boolean TMPro.TextMeshProUGUI::m_isNewPage
	bool ___m_isNewPage_133;
	// System.Boolean TMPro.TextMeshProUGUI::m_isTextTruncated
	bool ___m_isTextTruncated_134;
	// TMPro.TextMeshProFont[] TMPro.TextMeshProUGUI::m_fontAssetArray
	TextMeshProFontU5BU5D_t1470155469* ___m_fontAssetArray_135;
	// System.Collections.Generic.List`1<UnityEngine.Material> TMPro.TextMeshProUGUI::m_sharedMaterials
	List_1_t943818363 * ___m_sharedMaterials_136;
	// System.Int32 TMPro.TextMeshProUGUI::m_selectedFontAsset
	int32_t ___m_selectedFontAsset_137;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_138;
	// System.Boolean TMPro.TextMeshProUGUI::m_isStencilUpdateRequired
	bool ___m_isStencilUpdateRequired_139;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t3870600107 * ___m_baseMaterial_140;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_lastBaseMaterial
	Material_t3870600107 * ___m_lastBaseMaterial_141;
	// System.Boolean TMPro.TextMeshProUGUI::m_isNewBaseMaterial
	bool ___m_isNewBaseMaterial_142;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_maskingMaterial
	Material_t3870600107 * ___m_maskingMaterial_143;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_144;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_145;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t4282066567  ___m_maskOffset_146;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t1651859333  ___m_EnvMapMatrix_147;
	// TMPro.TextRenderFlags TMPro.TextMeshProUGUI::m_renderMode
	int32_t ___m_renderMode_148;
	// System.Boolean TMPro.TextMeshProUGUI::m_isParsingText
	bool ___m_isParsingText_149;
	// TMPro.TMP_LinkInfo TMPro.TextMeshProUGUI::tag_LinkInfo
	TMP_LinkInfo_t2467896998  ___tag_LinkInfo_150;
	// System.Int32[] TMPro.TextMeshProUGUI::m_styleStack
	Int32U5BU5D_t3230847821* ___m_styleStack_151;
	// System.Int32 TMPro.TextMeshProUGUI::m_styleStackIndex
	int32_t ___m_styleStackIndex_152;
	// System.Int32 TMPro.TextMeshProUGUI::m_spriteCount
	int32_t ___m_spriteCount_153;
	// System.Boolean TMPro.TextMeshProUGUI::m_isSprite
	bool ___m_isSprite_154;
	// System.Int32 TMPro.TextMeshProUGUI::m_spriteIndex
	int32_t ___m_spriteIndex_155;
	// TMPro.InlineGraphicManager TMPro.TextMeshProUGUI::m_inlineGraphics
	InlineGraphicManager_t3583857972 * ___m_inlineGraphics_156;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_margin
	Vector4_t4282066567  ___m_margin_157;
	// System.Single TMPro.TextMeshProUGUI::m_marginLeft
	float ___m_marginLeft_158;
	// System.Single TMPro.TextMeshProUGUI::m_marginRight
	float ___m_marginRight_159;
	// System.Single TMPro.TextMeshProUGUI::m_marginWidth
	float ___m_marginWidth_160;
	// System.Single TMPro.TextMeshProUGUI::m_marginHeight
	float ___m_marginHeight_161;
	// System.Boolean TMPro.TextMeshProUGUI::m_marginsHaveChanged
	bool ___m_marginsHaveChanged_162;
	// System.Boolean TMPro.TextMeshProUGUI::IsRectTransformDriven
	bool ___IsRectTransformDriven_163;
	// System.Single TMPro.TextMeshProUGUI::m_width
	float ___m_width_164;
	// System.Boolean TMPro.TextMeshProUGUI::m_rectTransformDimensionsChanged
	bool ___m_rectTransformDimensionsChanged_165;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_rectCorners
	Vector3U5BU5D_t215400611* ___m_rectCorners_166;
	// System.Boolean TMPro.TextMeshProUGUI::m_enableAutoSizing
	bool ___m_enableAutoSizing_167;
	// System.Single TMPro.TextMeshProUGUI::m_maxFontSize
	float ___m_maxFontSize_168;
	// System.Single TMPro.TextMeshProUGUI::m_minFontSize
	float ___m_minFontSize_169;
	// System.Boolean TMPro.TextMeshProUGUI::m_isAwake
	bool ___m_isAwake_170;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_171;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCount
	int32_t ___m_recursiveCount_172;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_173;
	// System.Single TMPro.TextMeshProUGUI::m_flexibleHeight
	float ___m_flexibleHeight_174;
	// System.Single TMPro.TextMeshProUGUI::m_flexibleWidth
	float ___m_flexibleWidth_175;
	// System.Single TMPro.TextMeshProUGUI::m_minHeight
	float ___m_minHeight_176;
	// System.Single TMPro.TextMeshProUGUI::m_minWidth
	float ___m_minWidth_177;
	// System.Single TMPro.TextMeshProUGUI::m_preferredWidth
	float ___m_preferredWidth_178;
	// System.Single TMPro.TextMeshProUGUI::m_preferredHeight
	float ___m_preferredHeight_179;
	// System.Single TMPro.TextMeshProUGUI::m_renderedWidth
	float ___m_renderedWidth_180;
	// System.Single TMPro.TextMeshProUGUI::m_renderedHeight
	float ___m_renderedHeight_181;
	// System.Int32 TMPro.TextMeshProUGUI::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_183;
	// System.Boolean TMPro.TextMeshProUGUI::m_isLayoutDirty
	bool ___m_isLayoutDirty_184;
	// TMPro.TextMeshProUGUI/AutoLayoutPhase TMPro.TextMeshProUGUI::m_LayoutPhase
	int32_t ___m_LayoutPhase_185;
	// TMPro.TextOverflowModes TMPro.TextMeshProUGUI::m_currentOverflowMode
	int32_t ___m_currentOverflowMode_186;
	// System.Boolean TMPro.TextMeshProUGUI::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_187;

public:
	inline static int32_t get_offset_of_m_text_19() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_text_19)); }
	inline String_t* get_m_text_19() const { return ___m_text_19; }
	inline String_t** get_address_of_m_text_19() { return &___m_text_19; }
	inline void set_m_text_19(String_t* value)
	{
		___m_text_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_19, value);
	}

	inline static int32_t get_offset_of_m_fontAsset_20() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontAsset_20)); }
	inline TextMeshProFont_t3602967588 * get_m_fontAsset_20() const { return ___m_fontAsset_20; }
	inline TextMeshProFont_t3602967588 ** get_address_of_m_fontAsset_20() { return &___m_fontAsset_20; }
	inline void set_m_fontAsset_20(TextMeshProFont_t3602967588 * value)
	{
		___m_fontAsset_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontAsset_20, value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_21() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontMaterial_21)); }
	inline Material_t3870600107 * get_m_fontMaterial_21() const { return ___m_fontMaterial_21; }
	inline Material_t3870600107 ** get_address_of_m_fontMaterial_21() { return &___m_fontMaterial_21; }
	inline void set_m_fontMaterial_21(Material_t3870600107 * value)
	{
		___m_fontMaterial_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontMaterial_21, value);
	}

	inline static int32_t get_offset_of_m_sharedMaterial_22() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_sharedMaterial_22)); }
	inline Material_t3870600107 * get_m_sharedMaterial_22() const { return ___m_sharedMaterial_22; }
	inline Material_t3870600107 ** get_address_of_m_sharedMaterial_22() { return &___m_sharedMaterial_22; }
	inline void set_m_sharedMaterial_22(Material_t3870600107 * value)
	{
		___m_sharedMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_sharedMaterial_22, value);
	}

	inline static int32_t get_offset_of_m_fontStyle_23() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontStyle_23)); }
	inline int32_t get_m_fontStyle_23() const { return ___m_fontStyle_23; }
	inline int32_t* get_address_of_m_fontStyle_23() { return &___m_fontStyle_23; }
	inline void set_m_fontStyle_23(int32_t value)
	{
		___m_fontStyle_23 = value;
	}

	inline static int32_t get_offset_of_m_style_24() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_style_24)); }
	inline int32_t get_m_style_24() const { return ___m_style_24; }
	inline int32_t* get_address_of_m_style_24() { return &___m_style_24; }
	inline void set_m_style_24(int32_t value)
	{
		___m_style_24 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_25() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isOverlay_25)); }
	inline bool get_m_isOverlay_25() const { return ___m_isOverlay_25; }
	inline bool* get_address_of_m_isOverlay_25() { return &___m_isOverlay_25; }
	inline void set_m_isOverlay_25(bool value)
	{
		___m_isOverlay_25 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_26() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontColor32_26)); }
	inline Color32_t598853688  get_m_fontColor32_26() const { return ___m_fontColor32_26; }
	inline Color32_t598853688 * get_address_of_m_fontColor32_26() { return &___m_fontColor32_26; }
	inline void set_m_fontColor32_26(Color32_t598853688  value)
	{
		___m_fontColor32_26 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_27() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontColor_27)); }
	inline Color_t4194546905  get_m_fontColor_27() const { return ___m_fontColor_27; }
	inline Color_t4194546905 * get_address_of_m_fontColor_27() { return &___m_fontColor_27; }
	inline void set_m_fontColor_27(Color_t4194546905  value)
	{
		___m_fontColor_27 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_28() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_enableVertexGradient_28)); }
	inline bool get_m_enableVertexGradient_28() const { return ___m_enableVertexGradient_28; }
	inline bool* get_address_of_m_enableVertexGradient_28() { return &___m_enableVertexGradient_28; }
	inline void set_m_enableVertexGradient_28(bool value)
	{
		___m_enableVertexGradient_28 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_29() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontColorGradient_29)); }
	inline VertexGradient_t2166651658  get_m_fontColorGradient_29() const { return ___m_fontColorGradient_29; }
	inline VertexGradient_t2166651658 * get_address_of_m_fontColorGradient_29() { return &___m_fontColorGradient_29; }
	inline void set_m_fontColorGradient_29(VertexGradient_t2166651658  value)
	{
		___m_fontColorGradient_29 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_30() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_faceColor_30)); }
	inline Color32_t598853688  get_m_faceColor_30() const { return ___m_faceColor_30; }
	inline Color32_t598853688 * get_address_of_m_faceColor_30() { return &___m_faceColor_30; }
	inline void set_m_faceColor_30(Color32_t598853688  value)
	{
		___m_faceColor_30 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_31() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_outlineColor_31)); }
	inline Color32_t598853688  get_m_outlineColor_31() const { return ___m_outlineColor_31; }
	inline Color32_t598853688 * get_address_of_m_outlineColor_31() { return &___m_outlineColor_31; }
	inline void set_m_outlineColor_31(Color32_t598853688  value)
	{
		___m_outlineColor_31 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_32() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_outlineWidth_32)); }
	inline float get_m_outlineWidth_32() const { return ___m_outlineWidth_32; }
	inline float* get_address_of_m_outlineWidth_32() { return &___m_outlineWidth_32; }
	inline void set_m_outlineWidth_32(float value)
	{
		___m_outlineWidth_32 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_33() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontSize_33)); }
	inline float get_m_fontSize_33() const { return ___m_fontSize_33; }
	inline float* get_address_of_m_fontSize_33() { return &___m_fontSize_33; }
	inline void set_m_fontSize_33(float value)
	{
		___m_fontSize_33 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_34() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontSizeMin_34)); }
	inline float get_m_fontSizeMin_34() const { return ___m_fontSizeMin_34; }
	inline float* get_address_of_m_fontSizeMin_34() { return &___m_fontSizeMin_34; }
	inline void set_m_fontSizeMin_34(float value)
	{
		___m_fontSizeMin_34 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_35() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontSizeMax_35)); }
	inline float get_m_fontSizeMax_35() const { return ___m_fontSizeMax_35; }
	inline float* get_address_of_m_fontSizeMax_35() { return &___m_fontSizeMax_35; }
	inline void set_m_fontSizeMax_35(float value)
	{
		___m_fontSizeMax_35 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_36() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontSizeBase_36)); }
	inline float get_m_fontSizeBase_36() const { return ___m_fontSizeBase_36; }
	inline float* get_address_of_m_fontSizeBase_36() { return &___m_fontSizeBase_36; }
	inline void set_m_fontSizeBase_36(float value)
	{
		___m_fontSizeBase_36 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_37() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineSpacingMax_37)); }
	inline float get_m_lineSpacingMax_37() const { return ___m_lineSpacingMax_37; }
	inline float* get_address_of_m_lineSpacingMax_37() { return &___m_lineSpacingMax_37; }
	inline void set_m_lineSpacingMax_37(float value)
	{
		___m_lineSpacingMax_37 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_38() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_charWidthMaxAdj_38)); }
	inline float get_m_charWidthMaxAdj_38() const { return ___m_charWidthMaxAdj_38; }
	inline float* get_address_of_m_charWidthMaxAdj_38() { return &___m_charWidthMaxAdj_38; }
	inline void set_m_charWidthMaxAdj_38(float value)
	{
		___m_charWidthMaxAdj_38 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_39() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_charWidthAdjDelta_39)); }
	inline float get_m_charWidthAdjDelta_39() const { return ___m_charWidthAdjDelta_39; }
	inline float* get_address_of_m_charWidthAdjDelta_39() { return &___m_charWidthAdjDelta_39; }
	inline void set_m_charWidthAdjDelta_39(float value)
	{
		___m_charWidthAdjDelta_39 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_40() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_currentFontSize_40)); }
	inline float get_m_currentFontSize_40() const { return ___m_currentFontSize_40; }
	inline float* get_address_of_m_currentFontSize_40() { return &___m_currentFontSize_40; }
	inline void set_m_currentFontSize_40(float value)
	{
		___m_currentFontSize_40 = value;
	}

	inline static int32_t get_offset_of_m_characterSpacing_41() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_characterSpacing_41)); }
	inline float get_m_characterSpacing_41() const { return ___m_characterSpacing_41; }
	inline float* get_address_of_m_characterSpacing_41() { return &___m_characterSpacing_41; }
	inline void set_m_characterSpacing_41(float value)
	{
		___m_characterSpacing_41 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_42() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_cSpacing_42)); }
	inline float get_m_cSpacing_42() const { return ___m_cSpacing_42; }
	inline float* get_address_of_m_cSpacing_42() { return &___m_cSpacing_42; }
	inline void set_m_cSpacing_42(float value)
	{
		___m_cSpacing_42 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_43() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_monoSpacing_43)); }
	inline float get_m_monoSpacing_43() const { return ___m_monoSpacing_43; }
	inline float* get_address_of_m_monoSpacing_43() { return &___m_monoSpacing_43; }
	inline void set_m_monoSpacing_43(float value)
	{
		___m_monoSpacing_43 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_44() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineSpacing_44)); }
	inline float get_m_lineSpacing_44() const { return ___m_lineSpacing_44; }
	inline float* get_address_of_m_lineSpacing_44() { return &___m_lineSpacing_44; }
	inline void set_m_lineSpacing_44(float value)
	{
		___m_lineSpacing_44 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_45() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineSpacingDelta_45)); }
	inline float get_m_lineSpacingDelta_45() const { return ___m_lineSpacingDelta_45; }
	inline float* get_address_of_m_lineSpacingDelta_45() { return &___m_lineSpacingDelta_45; }
	inline void set_m_lineSpacingDelta_45(float value)
	{
		___m_lineSpacingDelta_45 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_46() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineHeight_46)); }
	inline float get_m_lineHeight_46() const { return ___m_lineHeight_46; }
	inline float* get_address_of_m_lineHeight_46() { return &___m_lineHeight_46; }
	inline void set_m_lineHeight_46(float value)
	{
		___m_lineHeight_46 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_47() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_paragraphSpacing_47)); }
	inline float get_m_paragraphSpacing_47() const { return ___m_paragraphSpacing_47; }
	inline float* get_address_of_m_paragraphSpacing_47() { return &___m_paragraphSpacing_47; }
	inline void set_m_paragraphSpacing_47(float value)
	{
		___m_paragraphSpacing_47 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_48() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_textAlignment_48)); }
	inline int32_t get_m_textAlignment_48() const { return ___m_textAlignment_48; }
	inline int32_t* get_address_of_m_textAlignment_48() { return &___m_textAlignment_48; }
	inline void set_m_textAlignment_48(int32_t value)
	{
		___m_textAlignment_48 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_49() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineJustification_49)); }
	inline int32_t get_m_lineJustification_49() const { return ___m_lineJustification_49; }
	inline int32_t* get_address_of_m_lineJustification_49() { return &___m_lineJustification_49; }
	inline void set_m_lineJustification_49(int32_t value)
	{
		___m_lineJustification_49 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_50() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_enableKerning_50)); }
	inline bool get_m_enableKerning_50() const { return ___m_enableKerning_50; }
	inline bool* get_address_of_m_enableKerning_50() { return &___m_enableKerning_50; }
	inline void set_m_enableKerning_50(bool value)
	{
		___m_enableKerning_50 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_51() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_overrideHtmlColors_51)); }
	inline bool get_m_overrideHtmlColors_51() const { return ___m_overrideHtmlColors_51; }
	inline bool* get_address_of_m_overrideHtmlColors_51() { return &___m_overrideHtmlColors_51; }
	inline void set_m_overrideHtmlColors_51(bool value)
	{
		___m_overrideHtmlColors_51 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_52() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_enableExtraPadding_52)); }
	inline bool get_m_enableExtraPadding_52() const { return ___m_enableExtraPadding_52; }
	inline bool* get_address_of_m_enableExtraPadding_52() { return &___m_enableExtraPadding_52; }
	inline void set_m_enableExtraPadding_52(bool value)
	{
		___m_enableExtraPadding_52 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_53() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___checkPaddingRequired_53)); }
	inline bool get_checkPaddingRequired_53() const { return ___checkPaddingRequired_53; }
	inline bool* get_address_of_checkPaddingRequired_53() { return &___checkPaddingRequired_53; }
	inline void set_checkPaddingRequired_53(bool value)
	{
		___checkPaddingRequired_53 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_54() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_enableWordWrapping_54)); }
	inline bool get_m_enableWordWrapping_54() const { return ___m_enableWordWrapping_54; }
	inline bool* get_address_of_m_enableWordWrapping_54() { return &___m_enableWordWrapping_54; }
	inline void set_m_enableWordWrapping_54(bool value)
	{
		___m_enableWordWrapping_54 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_55() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isCharacterWrappingEnabled_55)); }
	inline bool get_m_isCharacterWrappingEnabled_55() const { return ___m_isCharacterWrappingEnabled_55; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_55() { return &___m_isCharacterWrappingEnabled_55; }
	inline void set_m_isCharacterWrappingEnabled_55(bool value)
	{
		___m_isCharacterWrappingEnabled_55 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_56() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isNonBreakingSpace_56)); }
	inline bool get_m_isNonBreakingSpace_56() const { return ___m_isNonBreakingSpace_56; }
	inline bool* get_address_of_m_isNonBreakingSpace_56() { return &___m_isNonBreakingSpace_56; }
	inline void set_m_isNonBreakingSpace_56(bool value)
	{
		___m_isNonBreakingSpace_56 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_57() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_overflowMode_57)); }
	inline int32_t get_m_overflowMode_57() const { return ___m_overflowMode_57; }
	inline int32_t* get_address_of_m_overflowMode_57() { return &___m_overflowMode_57; }
	inline void set_m_overflowMode_57(int32_t value)
	{
		___m_overflowMode_57 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_58() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_wordWrappingRatios_58)); }
	inline float get_m_wordWrappingRatios_58() const { return ___m_wordWrappingRatios_58; }
	inline float* get_address_of_m_wordWrappingRatios_58() { return &___m_wordWrappingRatios_58; }
	inline void set_m_wordWrappingRatios_58(float value)
	{
		___m_wordWrappingRatios_58 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_59() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_horizontalMapping_59)); }
	inline int32_t get_m_horizontalMapping_59() const { return ___m_horizontalMapping_59; }
	inline int32_t* get_address_of_m_horizontalMapping_59() { return &___m_horizontalMapping_59; }
	inline void set_m_horizontalMapping_59(int32_t value)
	{
		___m_horizontalMapping_59 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_60() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_verticalMapping_60)); }
	inline int32_t get_m_verticalMapping_60() const { return ___m_verticalMapping_60; }
	inline int32_t* get_address_of_m_verticalMapping_60() { return &___m_verticalMapping_60; }
	inline void set_m_verticalMapping_60(int32_t value)
	{
		___m_verticalMapping_60 = value;
	}

	inline static int32_t get_offset_of_m_uvOffset_61() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_uvOffset_61)); }
	inline Vector2_t4282066565  get_m_uvOffset_61() const { return ___m_uvOffset_61; }
	inline Vector2_t4282066565 * get_address_of_m_uvOffset_61() { return &___m_uvOffset_61; }
	inline void set_m_uvOffset_61(Vector2_t4282066565  value)
	{
		___m_uvOffset_61 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_62() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_uvLineOffset_62)); }
	inline float get_m_uvLineOffset_62() const { return ___m_uvLineOffset_62; }
	inline float* get_address_of_m_uvLineOffset_62() { return &___m_uvLineOffset_62; }
	inline void set_m_uvLineOffset_62(float value)
	{
		___m_uvLineOffset_62 = value;
	}

	inline static int32_t get_offset_of_isInputParsingRequired_63() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___isInputParsingRequired_63)); }
	inline bool get_isInputParsingRequired_63() const { return ___isInputParsingRequired_63; }
	inline bool* get_address_of_isInputParsingRequired_63() { return &___isInputParsingRequired_63; }
	inline void set_isInputParsingRequired_63(bool value)
	{
		___isInputParsingRequired_63 = value;
	}

	inline static int32_t get_offset_of_havePropertiesChanged_64() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___havePropertiesChanged_64)); }
	inline bool get_havePropertiesChanged_64() const { return ___havePropertiesChanged_64; }
	inline bool* get_address_of_havePropertiesChanged_64() { return &___havePropertiesChanged_64; }
	inline void set_havePropertiesChanged_64(bool value)
	{
		___havePropertiesChanged_64 = value;
	}

	inline static int32_t get_offset_of_hasFontAssetChanged_65() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___hasFontAssetChanged_65)); }
	inline bool get_hasFontAssetChanged_65() const { return ___hasFontAssetChanged_65; }
	inline bool* get_address_of_hasFontAssetChanged_65() { return &___hasFontAssetChanged_65; }
	inline void set_hasFontAssetChanged_65(bool value)
	{
		___hasFontAssetChanged_65 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_66() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isRichText_66)); }
	inline bool get_m_isRichText_66() const { return ___m_isRichText_66; }
	inline bool* get_address_of_m_isRichText_66() { return &___m_isRichText_66; }
	inline void set_m_isRichText_66(bool value)
	{
		___m_isRichText_66 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_67() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_inputSource_67)); }
	inline int32_t get_m_inputSource_67() const { return ___m_inputSource_67; }
	inline int32_t* get_address_of_m_inputSource_67() { return &___m_inputSource_67; }
	inline void set_m_inputSource_67(int32_t value)
	{
		___m_inputSource_67 = value;
	}

	inline static int32_t get_offset_of_old_text_68() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___old_text_68)); }
	inline String_t* get_old_text_68() const { return ___old_text_68; }
	inline String_t** get_address_of_old_text_68() { return &___old_text_68; }
	inline void set_old_text_68(String_t* value)
	{
		___old_text_68 = value;
		Il2CppCodeGenWriteBarrier(&___old_text_68, value);
	}

	inline static int32_t get_offset_of_old_arg0_69() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___old_arg0_69)); }
	inline float get_old_arg0_69() const { return ___old_arg0_69; }
	inline float* get_address_of_old_arg0_69() { return &___old_arg0_69; }
	inline void set_old_arg0_69(float value)
	{
		___old_arg0_69 = value;
	}

	inline static int32_t get_offset_of_old_arg1_70() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___old_arg1_70)); }
	inline float get_old_arg1_70() const { return ___old_arg1_70; }
	inline float* get_address_of_old_arg1_70() { return &___old_arg1_70; }
	inline void set_old_arg1_70(float value)
	{
		___old_arg1_70 = value;
	}

	inline static int32_t get_offset_of_old_arg2_71() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___old_arg2_71)); }
	inline float get_old_arg2_71() const { return ___old_arg2_71; }
	inline float* get_address_of_old_arg2_71() { return &___old_arg2_71; }
	inline void set_old_arg2_71(float value)
	{
		___old_arg2_71 = value;
	}

	inline static int32_t get_offset_of_m_fontIndex_72() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontIndex_72)); }
	inline int32_t get_m_fontIndex_72() const { return ___m_fontIndex_72; }
	inline int32_t* get_address_of_m_fontIndex_72() { return &___m_fontIndex_72; }
	inline void set_m_fontIndex_72(int32_t value)
	{
		___m_fontIndex_72 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_73() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontScale_73)); }
	inline float get_m_fontScale_73() const { return ___m_fontScale_73; }
	inline float* get_address_of_m_fontScale_73() { return &___m_fontScale_73; }
	inline void set_m_fontScale_73(float value)
	{
		___m_fontScale_73 = value;
	}

	inline static int32_t get_offset_of_m_isRecalculateScaleRequired_74() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isRecalculateScaleRequired_74)); }
	inline bool get_m_isRecalculateScaleRequired_74() const { return ___m_isRecalculateScaleRequired_74; }
	inline bool* get_address_of_m_isRecalculateScaleRequired_74() { return &___m_isRecalculateScaleRequired_74; }
	inline void set_m_isRecalculateScaleRequired_74(bool value)
	{
		___m_isRecalculateScaleRequired_74 = value;
	}

	inline static int32_t get_offset_of_m_previousLossyScale_75() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_previousLossyScale_75)); }
	inline Vector3_t4282066566  get_m_previousLossyScale_75() const { return ___m_previousLossyScale_75; }
	inline Vector3_t4282066566 * get_address_of_m_previousLossyScale_75() { return &___m_previousLossyScale_75; }
	inline void set_m_previousLossyScale_75(Vector3_t4282066566  value)
	{
		___m_previousLossyScale_75 = value;
	}

	inline static int32_t get_offset_of_m_xAdvance_76() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_xAdvance_76)); }
	inline float get_m_xAdvance_76() const { return ___m_xAdvance_76; }
	inline float* get_address_of_m_xAdvance_76() { return &___m_xAdvance_76; }
	inline void set_m_xAdvance_76(float value)
	{
		___m_xAdvance_76 = value;
	}

	inline static int32_t get_offset_of_m_maxXAdvance_77() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxXAdvance_77)); }
	inline float get_m_maxXAdvance_77() const { return ___m_maxXAdvance_77; }
	inline float* get_address_of_m_maxXAdvance_77() { return &___m_maxXAdvance_77; }
	inline void set_m_maxXAdvance_77(float value)
	{
		___m_maxXAdvance_77 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_78() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___tag_LineIndent_78)); }
	inline float get_tag_LineIndent_78() const { return ___tag_LineIndent_78; }
	inline float* get_address_of_tag_LineIndent_78() { return &___tag_LineIndent_78; }
	inline void set_tag_LineIndent_78(float value)
	{
		___tag_LineIndent_78 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_79() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___tag_Indent_79)); }
	inline float get_tag_Indent_79() const { return ___tag_Indent_79; }
	inline float* get_address_of_tag_Indent_79() { return &___tag_Indent_79; }
	inline void set_tag_Indent_79(float value)
	{
		___tag_Indent_79 = value;
	}

	inline static int32_t get_offset_of_m_anchorOffset_80() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_anchorOffset_80)); }
	inline Vector3_t4282066566  get_m_anchorOffset_80() const { return ___m_anchorOffset_80; }
	inline Vector3_t4282066566 * get_address_of_m_anchorOffset_80() { return &___m_anchorOffset_80; }
	inline void set_m_anchorOffset_80(Vector3_t4282066566  value)
	{
		___m_anchorOffset_80 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_81() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_textInfo_81)); }
	inline TMP_TextInfo_t270066265 * get_m_textInfo_81() const { return ___m_textInfo_81; }
	inline TMP_TextInfo_t270066265 ** get_address_of_m_textInfo_81() { return &___m_textInfo_81; }
	inline void set_m_textInfo_81(TMP_TextInfo_t270066265 * value)
	{
		___m_textInfo_81 = value;
		Il2CppCodeGenWriteBarrier(&___m_textInfo_81, value);
	}

	inline static int32_t get_offset_of_m_htmlTag_82() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_htmlTag_82)); }
	inline CharU5BU5D_t3324145743* get_m_htmlTag_82() const { return ___m_htmlTag_82; }
	inline CharU5BU5D_t3324145743** get_address_of_m_htmlTag_82() { return &___m_htmlTag_82; }
	inline void set_m_htmlTag_82(CharU5BU5D_t3324145743* value)
	{
		___m_htmlTag_82 = value;
		Il2CppCodeGenWriteBarrier(&___m_htmlTag_82, value);
	}

	inline static int32_t get_offset_of_m_uiRenderer_83() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_uiRenderer_83)); }
	inline CanvasRenderer_t3950887807 * get_m_uiRenderer_83() const { return ___m_uiRenderer_83; }
	inline CanvasRenderer_t3950887807 ** get_address_of_m_uiRenderer_83() { return &___m_uiRenderer_83; }
	inline void set_m_uiRenderer_83(CanvasRenderer_t3950887807 * value)
	{
		___m_uiRenderer_83 = value;
		Il2CppCodeGenWriteBarrier(&___m_uiRenderer_83, value);
	}

	inline static int32_t get_offset_of_m_canvas_84() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_canvas_84)); }
	inline Canvas_t2727140764 * get_m_canvas_84() const { return ___m_canvas_84; }
	inline Canvas_t2727140764 ** get_address_of_m_canvas_84() { return &___m_canvas_84; }
	inline void set_m_canvas_84(Canvas_t2727140764 * value)
	{
		___m_canvas_84 = value;
		Il2CppCodeGenWriteBarrier(&___m_canvas_84, value);
	}

	inline static int32_t get_offset_of_m_rectTransform_85() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_rectTransform_85)); }
	inline RectTransform_t972643934 * get_m_rectTransform_85() const { return ___m_rectTransform_85; }
	inline RectTransform_t972643934 ** get_address_of_m_rectTransform_85() { return &___m_rectTransform_85; }
	inline void set_m_rectTransform_85(RectTransform_t972643934 * value)
	{
		___m_rectTransform_85 = value;
		Il2CppCodeGenWriteBarrier(&___m_rectTransform_85, value);
	}

	inline static int32_t get_offset_of_m_htmlColor_86() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_htmlColor_86)); }
	inline Color32_t598853688  get_m_htmlColor_86() const { return ___m_htmlColor_86; }
	inline Color32_t598853688 * get_address_of_m_htmlColor_86() { return &___m_htmlColor_86; }
	inline void set_m_htmlColor_86(Color32_t598853688  value)
	{
		___m_htmlColor_86 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_87() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_colorStack_87)); }
	inline Color32U5BU5D_t2960766953* get_m_colorStack_87() const { return ___m_colorStack_87; }
	inline Color32U5BU5D_t2960766953** get_address_of_m_colorStack_87() { return &___m_colorStack_87; }
	inline void set_m_colorStack_87(Color32U5BU5D_t2960766953* value)
	{
		___m_colorStack_87 = value;
		Il2CppCodeGenWriteBarrier(&___m_colorStack_87, value);
	}

	inline static int32_t get_offset_of_m_colorStackIndex_88() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_colorStackIndex_88)); }
	inline int32_t get_m_colorStackIndex_88() const { return ___m_colorStackIndex_88; }
	inline int32_t* get_address_of_m_colorStackIndex_88() { return &___m_colorStackIndex_88; }
	inline void set_m_colorStackIndex_88(int32_t value)
	{
		___m_colorStackIndex_88 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_89() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_tabSpacing_89)); }
	inline float get_m_tabSpacing_89() const { return ___m_tabSpacing_89; }
	inline float* get_address_of_m_tabSpacing_89() { return &___m_tabSpacing_89; }
	inline void set_m_tabSpacing_89(float value)
	{
		___m_tabSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_spacing_90() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_spacing_90)); }
	inline float get_m_spacing_90() const { return ___m_spacing_90; }
	inline float* get_address_of_m_spacing_90() { return &___m_spacing_90; }
	inline void set_m_spacing_90(float value)
	{
		___m_spacing_90 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_91() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_baselineOffset_91)); }
	inline float get_m_baselineOffset_91() const { return ___m_baselineOffset_91; }
	inline float* get_address_of_m_baselineOffset_91() { return &___m_baselineOffset_91; }
	inline void set_m_baselineOffset_91(float value)
	{
		___m_baselineOffset_91 = value;
	}

	inline static int32_t get_offset_of_m_padding_92() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_padding_92)); }
	inline float get_m_padding_92() const { return ___m_padding_92; }
	inline float* get_address_of_m_padding_92() { return &___m_padding_92; }
	inline void set_m_padding_92(float value)
	{
		___m_padding_92 = value;
	}

	inline static int32_t get_offset_of_m_alignmentPadding_93() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_alignmentPadding_93)); }
	inline Vector4_t4282066567  get_m_alignmentPadding_93() const { return ___m_alignmentPadding_93; }
	inline Vector4_t4282066567 * get_address_of_m_alignmentPadding_93() { return &___m_alignmentPadding_93; }
	inline void set_m_alignmentPadding_93(Vector4_t4282066567  value)
	{
		___m_alignmentPadding_93 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_94() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isUsingBold_94)); }
	inline bool get_m_isUsingBold_94() const { return ___m_isUsingBold_94; }
	inline bool* get_address_of_m_isUsingBold_94() { return &___m_isUsingBold_94; }
	inline void set_m_isUsingBold_94(bool value)
	{
		___m_isUsingBold_94 = value;
	}

	inline static int32_t get_offset_of_k_InfinityVector_95() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___k_InfinityVector_95)); }
	inline Vector2_t4282066565  get_k_InfinityVector_95() const { return ___k_InfinityVector_95; }
	inline Vector2_t4282066565 * get_address_of_k_InfinityVector_95() { return &___k_InfinityVector_95; }
	inline void set_k_InfinityVector_95(Vector2_t4282066565  value)
	{
		___k_InfinityVector_95 = value;
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_96() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isFirstAllocation_96)); }
	inline bool get_m_isFirstAllocation_96() const { return ___m_isFirstAllocation_96; }
	inline bool* get_address_of_m_isFirstAllocation_96() { return &___m_isFirstAllocation_96; }
	inline void set_m_isFirstAllocation_96(bool value)
	{
		___m_isFirstAllocation_96 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_97() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_max_characters_97)); }
	inline int32_t get_m_max_characters_97() const { return ___m_max_characters_97; }
	inline int32_t* get_address_of_m_max_characters_97() { return &___m_max_characters_97; }
	inline void set_m_max_characters_97(int32_t value)
	{
		___m_max_characters_97 = value;
	}

	inline static int32_t get_offset_of_m_max_numberOfLines_98() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_max_numberOfLines_98)); }
	inline int32_t get_m_max_numberOfLines_98() const { return ___m_max_numberOfLines_98; }
	inline int32_t* get_address_of_m_max_numberOfLines_98() { return &___m_max_numberOfLines_98; }
	inline void set_m_max_numberOfLines_98(int32_t value)
	{
		___m_max_numberOfLines_98 = value;
	}

	inline static int32_t get_offset_of_m_char_buffer_99() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_char_buffer_99)); }
	inline Int32U5BU5D_t3230847821* get_m_char_buffer_99() const { return ___m_char_buffer_99; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_char_buffer_99() { return &___m_char_buffer_99; }
	inline void set_m_char_buffer_99(Int32U5BU5D_t3230847821* value)
	{
		___m_char_buffer_99 = value;
		Il2CppCodeGenWriteBarrier(&___m_char_buffer_99, value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_100() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_input_CharArray_100)); }
	inline CharU5BU5D_t3324145743* get_m_input_CharArray_100() const { return ___m_input_CharArray_100; }
	inline CharU5BU5D_t3324145743** get_address_of_m_input_CharArray_100() { return &___m_input_CharArray_100; }
	inline void set_m_input_CharArray_100(CharU5BU5D_t3324145743* value)
	{
		___m_input_CharArray_100 = value;
		Il2CppCodeGenWriteBarrier(&___m_input_CharArray_100, value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_101() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_charArray_Length_101)); }
	inline int32_t get_m_charArray_Length_101() const { return ___m_charArray_Length_101; }
	inline int32_t* get_address_of_m_charArray_Length_101() { return &___m_charArray_Length_101; }
	inline void set_m_charArray_Length_101(int32_t value)
	{
		___m_charArray_Length_101 = value;
	}

	inline static int32_t get_offset_of_m_VisibleCharacters_102() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_VisibleCharacters_102)); }
	inline List_1_t4230808090 * get_m_VisibleCharacters_102() const { return ___m_VisibleCharacters_102; }
	inline List_1_t4230808090 ** get_address_of_m_VisibleCharacters_102() { return &___m_VisibleCharacters_102; }
	inline void set_m_VisibleCharacters_102(List_1_t4230808090 * value)
	{
		___m_VisibleCharacters_102 = value;
		Il2CppCodeGenWriteBarrier(&___m_VisibleCharacters_102, value);
	}

	inline static int32_t get_offset_of_k_Power_103() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___k_Power_103)); }
	inline SingleU5BU5D_t2316563989* get_k_Power_103() const { return ___k_Power_103; }
	inline SingleU5BU5D_t2316563989** get_address_of_k_Power_103() { return &___k_Power_103; }
	inline void set_k_Power_103(SingleU5BU5D_t2316563989* value)
	{
		___k_Power_103 = value;
		Il2CppCodeGenWriteBarrier(&___k_Power_103, value);
	}

	inline static int32_t get_offset_of_m_cached_GlyphInfo_104() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_cached_GlyphInfo_104)); }
	inline GlyphInfo_t462937628 * get_m_cached_GlyphInfo_104() const { return ___m_cached_GlyphInfo_104; }
	inline GlyphInfo_t462937628 ** get_address_of_m_cached_GlyphInfo_104() { return &___m_cached_GlyphInfo_104; }
	inline void set_m_cached_GlyphInfo_104(GlyphInfo_t462937628 * value)
	{
		___m_cached_GlyphInfo_104 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_GlyphInfo_104, value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_GlyphInfo_105() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_cached_Underline_GlyphInfo_105)); }
	inline GlyphInfo_t462937628 * get_m_cached_Underline_GlyphInfo_105() const { return ___m_cached_Underline_GlyphInfo_105; }
	inline GlyphInfo_t462937628 ** get_address_of_m_cached_Underline_GlyphInfo_105() { return &___m_cached_Underline_GlyphInfo_105; }
	inline void set_m_cached_Underline_GlyphInfo_105(GlyphInfo_t462937628 * value)
	{
		___m_cached_Underline_GlyphInfo_105 = value;
		Il2CppCodeGenWriteBarrier(&___m_cached_Underline_GlyphInfo_105, value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_106() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_SavedWordWrapState_106)); }
	inline WordWrapState_t4047764895  get_m_SavedWordWrapState_106() const { return ___m_SavedWordWrapState_106; }
	inline WordWrapState_t4047764895 * get_address_of_m_SavedWordWrapState_106() { return &___m_SavedWordWrapState_106; }
	inline void set_m_SavedWordWrapState_106(WordWrapState_t4047764895  value)
	{
		___m_SavedWordWrapState_106 = value;
	}

	inline static int32_t get_offset_of_m_SavedLineState_107() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_SavedLineState_107)); }
	inline WordWrapState_t4047764895  get_m_SavedLineState_107() const { return ___m_SavedLineState_107; }
	inline WordWrapState_t4047764895 * get_address_of_m_SavedLineState_107() { return &___m_SavedLineState_107; }
	inline void set_m_SavedLineState_107(WordWrapState_t4047764895  value)
	{
		___m_SavedLineState_107 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_108() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_characterCount_108)); }
	inline int32_t get_m_characterCount_108() const { return ___m_characterCount_108; }
	inline int32_t* get_address_of_m_characterCount_108() { return &___m_characterCount_108; }
	inline void set_m_characterCount_108(int32_t value)
	{
		___m_characterCount_108 = value;
	}

	inline static int32_t get_offset_of_m_visibleCharacterCount_109() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_visibleCharacterCount_109)); }
	inline int32_t get_m_visibleCharacterCount_109() const { return ___m_visibleCharacterCount_109; }
	inline int32_t* get_address_of_m_visibleCharacterCount_109() { return &___m_visibleCharacterCount_109; }
	inline void set_m_visibleCharacterCount_109(int32_t value)
	{
		___m_visibleCharacterCount_109 = value;
	}

	inline static int32_t get_offset_of_m_visibleSpriteCount_110() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_visibleSpriteCount_110)); }
	inline int32_t get_m_visibleSpriteCount_110() const { return ___m_visibleSpriteCount_110; }
	inline int32_t* get_address_of_m_visibleSpriteCount_110() { return &___m_visibleSpriteCount_110; }
	inline void set_m_visibleSpriteCount_110(int32_t value)
	{
		___m_visibleSpriteCount_110 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_111() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_firstCharacterOfLine_111)); }
	inline int32_t get_m_firstCharacterOfLine_111() const { return ___m_firstCharacterOfLine_111; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_111() { return &___m_firstCharacterOfLine_111; }
	inline void set_m_firstCharacterOfLine_111(int32_t value)
	{
		___m_firstCharacterOfLine_111 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_112() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_firstVisibleCharacterOfLine_112)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_112() const { return ___m_firstVisibleCharacterOfLine_112; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_112() { return &___m_firstVisibleCharacterOfLine_112; }
	inline void set_m_firstVisibleCharacterOfLine_112(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_112 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_113() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lastCharacterOfLine_113)); }
	inline int32_t get_m_lastCharacterOfLine_113() const { return ___m_lastCharacterOfLine_113; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_113() { return &___m_lastCharacterOfLine_113; }
	inline void set_m_lastCharacterOfLine_113(int32_t value)
	{
		___m_lastCharacterOfLine_113 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_114() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lastVisibleCharacterOfLine_114)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_114() const { return ___m_lastVisibleCharacterOfLine_114; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_114() { return &___m_lastVisibleCharacterOfLine_114; }
	inline void set_m_lastVisibleCharacterOfLine_114(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_114 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_115() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineNumber_115)); }
	inline int32_t get_m_lineNumber_115() const { return ___m_lineNumber_115; }
	inline int32_t* get_address_of_m_lineNumber_115() { return &___m_lineNumber_115; }
	inline void set_m_lineNumber_115(int32_t value)
	{
		___m_lineNumber_115 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_116() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_pageNumber_116)); }
	inline int32_t get_m_pageNumber_116() const { return ___m_pageNumber_116; }
	inline int32_t* get_address_of_m_pageNumber_116() { return &___m_pageNumber_116; }
	inline void set_m_pageNumber_116(int32_t value)
	{
		___m_pageNumber_116 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_117() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxAscender_117)); }
	inline float get_m_maxAscender_117() const { return ___m_maxAscender_117; }
	inline float* get_address_of_m_maxAscender_117() { return &___m_maxAscender_117; }
	inline void set_m_maxAscender_117(float value)
	{
		___m_maxAscender_117 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_118() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxDescender_118)); }
	inline float get_m_maxDescender_118() const { return ___m_maxDescender_118; }
	inline float* get_address_of_m_maxDescender_118() { return &___m_maxDescender_118; }
	inline void set_m_maxDescender_118(float value)
	{
		___m_maxDescender_118 = value;
	}

	inline static int32_t get_offset_of_m_maxFontScale_119() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxFontScale_119)); }
	inline float get_m_maxFontScale_119() const { return ___m_maxFontScale_119; }
	inline float* get_address_of_m_maxFontScale_119() { return &___m_maxFontScale_119; }
	inline void set_m_maxFontScale_119(float value)
	{
		___m_maxFontScale_119 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_120() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lineOffset_120)); }
	inline float get_m_lineOffset_120() const { return ___m_lineOffset_120; }
	inline float* get_address_of_m_lineOffset_120() { return &___m_lineOffset_120; }
	inline void set_m_lineOffset_120(float value)
	{
		___m_lineOffset_120 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_121() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_meshExtents_121)); }
	inline Extents_t2060714539  get_m_meshExtents_121() const { return ___m_meshExtents_121; }
	inline Extents_t2060714539 * get_address_of_m_meshExtents_121() { return &___m_meshExtents_121; }
	inline void set_m_meshExtents_121(Extents_t2060714539  value)
	{
		___m_meshExtents_121 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_122() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isCalculateSizeRequired_122)); }
	inline bool get_m_isCalculateSizeRequired_122() const { return ___m_isCalculateSizeRequired_122; }
	inline bool* get_address_of_m_isCalculateSizeRequired_122() { return &___m_isCalculateSizeRequired_122; }
	inline void set_m_isCalculateSizeRequired_122(bool value)
	{
		___m_isCalculateSizeRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_layoutController_123() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_layoutController_123)); }
	inline Il2CppObject * get_m_layoutController_123() const { return ___m_layoutController_123; }
	inline Il2CppObject ** get_address_of_m_layoutController_123() { return &___m_layoutController_123; }
	inline void set_m_layoutController_123(Il2CppObject * value)
	{
		___m_layoutController_123 = value;
		Il2CppCodeGenWriteBarrier(&___m_layoutController_123, value);
	}

	inline static int32_t get_offset_of_m_uiVertices_124() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_uiVertices_124)); }
	inline UIVertexU5BU5D_t1796391381* get_m_uiVertices_124() const { return ___m_uiVertices_124; }
	inline UIVertexU5BU5D_t1796391381** get_address_of_m_uiVertices_124() { return &___m_uiVertices_124; }
	inline void set_m_uiVertices_124(UIVertexU5BU5D_t1796391381* value)
	{
		___m_uiVertices_124 = value;
		Il2CppCodeGenWriteBarrier(&___m_uiVertices_124, value);
	}

	inline static int32_t get_offset_of_m_bounds_125() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_bounds_125)); }
	inline Bounds_t2711641849  get_m_bounds_125() const { return ___m_bounds_125; }
	inline Bounds_t2711641849 * get_address_of_m_bounds_125() { return &___m_bounds_125; }
	inline void set_m_bounds_125(Bounds_t2711641849  value)
	{
		___m_bounds_125 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_126() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_ignoreCulling_126)); }
	inline bool get_m_ignoreCulling_126() const { return ___m_ignoreCulling_126; }
	inline bool* get_address_of_m_ignoreCulling_126() { return &___m_ignoreCulling_126; }
	inline void set_m_ignoreCulling_126(bool value)
	{
		___m_ignoreCulling_126 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_127() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isOrthographic_127)); }
	inline bool get_m_isOrthographic_127() const { return ___m_isOrthographic_127; }
	inline bool* get_address_of_m_isOrthographic_127() { return &___m_isOrthographic_127; }
	inline void set_m_isOrthographic_127(bool value)
	{
		___m_isOrthographic_127 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_128() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isCullingEnabled_128)); }
	inline bool get_m_isCullingEnabled_128() const { return ___m_isCullingEnabled_128; }
	inline bool* get_address_of_m_isCullingEnabled_128() { return &___m_isCullingEnabled_128; }
	inline void set_m_isCullingEnabled_128(bool value)
	{
		___m_isCullingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_129() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxVisibleCharacters_129)); }
	inline int32_t get_m_maxVisibleCharacters_129() const { return ___m_maxVisibleCharacters_129; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_129() { return &___m_maxVisibleCharacters_129; }
	inline void set_m_maxVisibleCharacters_129(int32_t value)
	{
		___m_maxVisibleCharacters_129 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_130() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxVisibleWords_130)); }
	inline int32_t get_m_maxVisibleWords_130() const { return ___m_maxVisibleWords_130; }
	inline int32_t* get_address_of_m_maxVisibleWords_130() { return &___m_maxVisibleWords_130; }
	inline void set_m_maxVisibleWords_130(int32_t value)
	{
		___m_maxVisibleWords_130 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_131() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxVisibleLines_131)); }
	inline int32_t get_m_maxVisibleLines_131() const { return ___m_maxVisibleLines_131; }
	inline int32_t* get_address_of_m_maxVisibleLines_131() { return &___m_maxVisibleLines_131; }
	inline void set_m_maxVisibleLines_131(int32_t value)
	{
		___m_maxVisibleLines_131 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_132() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_pageToDisplay_132)); }
	inline int32_t get_m_pageToDisplay_132() const { return ___m_pageToDisplay_132; }
	inline int32_t* get_address_of_m_pageToDisplay_132() { return &___m_pageToDisplay_132; }
	inline void set_m_pageToDisplay_132(int32_t value)
	{
		___m_pageToDisplay_132 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_133() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isNewPage_133)); }
	inline bool get_m_isNewPage_133() const { return ___m_isNewPage_133; }
	inline bool* get_address_of_m_isNewPage_133() { return &___m_isNewPage_133; }
	inline void set_m_isNewPage_133(bool value)
	{
		___m_isNewPage_133 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_134() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isTextTruncated_134)); }
	inline bool get_m_isTextTruncated_134() const { return ___m_isTextTruncated_134; }
	inline bool* get_address_of_m_isTextTruncated_134() { return &___m_isTextTruncated_134; }
	inline void set_m_isTextTruncated_134(bool value)
	{
		___m_isTextTruncated_134 = value;
	}

	inline static int32_t get_offset_of_m_fontAssetArray_135() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_fontAssetArray_135)); }
	inline TextMeshProFontU5BU5D_t1470155469* get_m_fontAssetArray_135() const { return ___m_fontAssetArray_135; }
	inline TextMeshProFontU5BU5D_t1470155469** get_address_of_m_fontAssetArray_135() { return &___m_fontAssetArray_135; }
	inline void set_m_fontAssetArray_135(TextMeshProFontU5BU5D_t1470155469* value)
	{
		___m_fontAssetArray_135 = value;
		Il2CppCodeGenWriteBarrier(&___m_fontAssetArray_135, value);
	}

	inline static int32_t get_offset_of_m_sharedMaterials_136() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_sharedMaterials_136)); }
	inline List_1_t943818363 * get_m_sharedMaterials_136() const { return ___m_sharedMaterials_136; }
	inline List_1_t943818363 ** get_address_of_m_sharedMaterials_136() { return &___m_sharedMaterials_136; }
	inline void set_m_sharedMaterials_136(List_1_t943818363 * value)
	{
		___m_sharedMaterials_136 = value;
		Il2CppCodeGenWriteBarrier(&___m_sharedMaterials_136, value);
	}

	inline static int32_t get_offset_of_m_selectedFontAsset_137() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_selectedFontAsset_137)); }
	inline int32_t get_m_selectedFontAsset_137() const { return ___m_selectedFontAsset_137; }
	inline int32_t* get_address_of_m_selectedFontAsset_137() { return &___m_selectedFontAsset_137; }
	inline void set_m_selectedFontAsset_137(int32_t value)
	{
		___m_selectedFontAsset_137 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_138() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isMaskingEnabled_138)); }
	inline bool get_m_isMaskingEnabled_138() const { return ___m_isMaskingEnabled_138; }
	inline bool* get_address_of_m_isMaskingEnabled_138() { return &___m_isMaskingEnabled_138; }
	inline void set_m_isMaskingEnabled_138(bool value)
	{
		___m_isMaskingEnabled_138 = value;
	}

	inline static int32_t get_offset_of_m_isStencilUpdateRequired_139() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isStencilUpdateRequired_139)); }
	inline bool get_m_isStencilUpdateRequired_139() const { return ___m_isStencilUpdateRequired_139; }
	inline bool* get_address_of_m_isStencilUpdateRequired_139() { return &___m_isStencilUpdateRequired_139; }
	inline void set_m_isStencilUpdateRequired_139(bool value)
	{
		___m_isStencilUpdateRequired_139 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_140() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_baseMaterial_140)); }
	inline Material_t3870600107 * get_m_baseMaterial_140() const { return ___m_baseMaterial_140; }
	inline Material_t3870600107 ** get_address_of_m_baseMaterial_140() { return &___m_baseMaterial_140; }
	inline void set_m_baseMaterial_140(Material_t3870600107 * value)
	{
		___m_baseMaterial_140 = value;
		Il2CppCodeGenWriteBarrier(&___m_baseMaterial_140, value);
	}

	inline static int32_t get_offset_of_m_lastBaseMaterial_141() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_lastBaseMaterial_141)); }
	inline Material_t3870600107 * get_m_lastBaseMaterial_141() const { return ___m_lastBaseMaterial_141; }
	inline Material_t3870600107 ** get_address_of_m_lastBaseMaterial_141() { return &___m_lastBaseMaterial_141; }
	inline void set_m_lastBaseMaterial_141(Material_t3870600107 * value)
	{
		___m_lastBaseMaterial_141 = value;
		Il2CppCodeGenWriteBarrier(&___m_lastBaseMaterial_141, value);
	}

	inline static int32_t get_offset_of_m_isNewBaseMaterial_142() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isNewBaseMaterial_142)); }
	inline bool get_m_isNewBaseMaterial_142() const { return ___m_isNewBaseMaterial_142; }
	inline bool* get_address_of_m_isNewBaseMaterial_142() { return &___m_isNewBaseMaterial_142; }
	inline void set_m_isNewBaseMaterial_142(bool value)
	{
		___m_isNewBaseMaterial_142 = value;
	}

	inline static int32_t get_offset_of_m_maskingMaterial_143() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maskingMaterial_143)); }
	inline Material_t3870600107 * get_m_maskingMaterial_143() const { return ___m_maskingMaterial_143; }
	inline Material_t3870600107 ** get_address_of_m_maskingMaterial_143() { return &___m_maskingMaterial_143; }
	inline void set_m_maskingMaterial_143(Material_t3870600107 * value)
	{
		___m_maskingMaterial_143 = value;
		Il2CppCodeGenWriteBarrier(&___m_maskingMaterial_143, value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_144() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isScrollRegionSet_144)); }
	inline bool get_m_isScrollRegionSet_144() const { return ___m_isScrollRegionSet_144; }
	inline bool* get_address_of_m_isScrollRegionSet_144() { return &___m_isScrollRegionSet_144; }
	inline void set_m_isScrollRegionSet_144(bool value)
	{
		___m_isScrollRegionSet_144 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_145() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_stencilID_145)); }
	inline int32_t get_m_stencilID_145() const { return ___m_stencilID_145; }
	inline int32_t* get_address_of_m_stencilID_145() { return &___m_stencilID_145; }
	inline void set_m_stencilID_145(int32_t value)
	{
		___m_stencilID_145 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_146() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maskOffset_146)); }
	inline Vector4_t4282066567  get_m_maskOffset_146() const { return ___m_maskOffset_146; }
	inline Vector4_t4282066567 * get_address_of_m_maskOffset_146() { return &___m_maskOffset_146; }
	inline void set_m_maskOffset_146(Vector4_t4282066567  value)
	{
		___m_maskOffset_146 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_147() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_EnvMapMatrix_147)); }
	inline Matrix4x4_t1651859333  get_m_EnvMapMatrix_147() const { return ___m_EnvMapMatrix_147; }
	inline Matrix4x4_t1651859333 * get_address_of_m_EnvMapMatrix_147() { return &___m_EnvMapMatrix_147; }
	inline void set_m_EnvMapMatrix_147(Matrix4x4_t1651859333  value)
	{
		___m_EnvMapMatrix_147 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_148() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_renderMode_148)); }
	inline int32_t get_m_renderMode_148() const { return ___m_renderMode_148; }
	inline int32_t* get_address_of_m_renderMode_148() { return &___m_renderMode_148; }
	inline void set_m_renderMode_148(int32_t value)
	{
		___m_renderMode_148 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_149() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isParsingText_149)); }
	inline bool get_m_isParsingText_149() const { return ___m_isParsingText_149; }
	inline bool* get_address_of_m_isParsingText_149() { return &___m_isParsingText_149; }
	inline void set_m_isParsingText_149(bool value)
	{
		___m_isParsingText_149 = value;
	}

	inline static int32_t get_offset_of_tag_LinkInfo_150() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___tag_LinkInfo_150)); }
	inline TMP_LinkInfo_t2467896998  get_tag_LinkInfo_150() const { return ___tag_LinkInfo_150; }
	inline TMP_LinkInfo_t2467896998 * get_address_of_tag_LinkInfo_150() { return &___tag_LinkInfo_150; }
	inline void set_tag_LinkInfo_150(TMP_LinkInfo_t2467896998  value)
	{
		___tag_LinkInfo_150 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_151() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_styleStack_151)); }
	inline Int32U5BU5D_t3230847821* get_m_styleStack_151() const { return ___m_styleStack_151; }
	inline Int32U5BU5D_t3230847821** get_address_of_m_styleStack_151() { return &___m_styleStack_151; }
	inline void set_m_styleStack_151(Int32U5BU5D_t3230847821* value)
	{
		___m_styleStack_151 = value;
		Il2CppCodeGenWriteBarrier(&___m_styleStack_151, value);
	}

	inline static int32_t get_offset_of_m_styleStackIndex_152() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_styleStackIndex_152)); }
	inline int32_t get_m_styleStackIndex_152() const { return ___m_styleStackIndex_152; }
	inline int32_t* get_address_of_m_styleStackIndex_152() { return &___m_styleStackIndex_152; }
	inline void set_m_styleStackIndex_152(int32_t value)
	{
		___m_styleStackIndex_152 = value;
	}

	inline static int32_t get_offset_of_m_spriteCount_153() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_spriteCount_153)); }
	inline int32_t get_m_spriteCount_153() const { return ___m_spriteCount_153; }
	inline int32_t* get_address_of_m_spriteCount_153() { return &___m_spriteCount_153; }
	inline void set_m_spriteCount_153(int32_t value)
	{
		___m_spriteCount_153 = value;
	}

	inline static int32_t get_offset_of_m_isSprite_154() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isSprite_154)); }
	inline bool get_m_isSprite_154() const { return ___m_isSprite_154; }
	inline bool* get_address_of_m_isSprite_154() { return &___m_isSprite_154; }
	inline void set_m_isSprite_154(bool value)
	{
		___m_isSprite_154 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_155() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_spriteIndex_155)); }
	inline int32_t get_m_spriteIndex_155() const { return ___m_spriteIndex_155; }
	inline int32_t* get_address_of_m_spriteIndex_155() { return &___m_spriteIndex_155; }
	inline void set_m_spriteIndex_155(int32_t value)
	{
		___m_spriteIndex_155 = value;
	}

	inline static int32_t get_offset_of_m_inlineGraphics_156() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_inlineGraphics_156)); }
	inline InlineGraphicManager_t3583857972 * get_m_inlineGraphics_156() const { return ___m_inlineGraphics_156; }
	inline InlineGraphicManager_t3583857972 ** get_address_of_m_inlineGraphics_156() { return &___m_inlineGraphics_156; }
	inline void set_m_inlineGraphics_156(InlineGraphicManager_t3583857972 * value)
	{
		___m_inlineGraphics_156 = value;
		Il2CppCodeGenWriteBarrier(&___m_inlineGraphics_156, value);
	}

	inline static int32_t get_offset_of_m_margin_157() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_margin_157)); }
	inline Vector4_t4282066567  get_m_margin_157() const { return ___m_margin_157; }
	inline Vector4_t4282066567 * get_address_of_m_margin_157() { return &___m_margin_157; }
	inline void set_m_margin_157(Vector4_t4282066567  value)
	{
		___m_margin_157 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_158() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_marginLeft_158)); }
	inline float get_m_marginLeft_158() const { return ___m_marginLeft_158; }
	inline float* get_address_of_m_marginLeft_158() { return &___m_marginLeft_158; }
	inline void set_m_marginLeft_158(float value)
	{
		___m_marginLeft_158 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_159() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_marginRight_159)); }
	inline float get_m_marginRight_159() const { return ___m_marginRight_159; }
	inline float* get_address_of_m_marginRight_159() { return &___m_marginRight_159; }
	inline void set_m_marginRight_159(float value)
	{
		___m_marginRight_159 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_160() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_marginWidth_160)); }
	inline float get_m_marginWidth_160() const { return ___m_marginWidth_160; }
	inline float* get_address_of_m_marginWidth_160() { return &___m_marginWidth_160; }
	inline void set_m_marginWidth_160(float value)
	{
		___m_marginWidth_160 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_161() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_marginHeight_161)); }
	inline float get_m_marginHeight_161() const { return ___m_marginHeight_161; }
	inline float* get_address_of_m_marginHeight_161() { return &___m_marginHeight_161; }
	inline void set_m_marginHeight_161(float value)
	{
		___m_marginHeight_161 = value;
	}

	inline static int32_t get_offset_of_m_marginsHaveChanged_162() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_marginsHaveChanged_162)); }
	inline bool get_m_marginsHaveChanged_162() const { return ___m_marginsHaveChanged_162; }
	inline bool* get_address_of_m_marginsHaveChanged_162() { return &___m_marginsHaveChanged_162; }
	inline void set_m_marginsHaveChanged_162(bool value)
	{
		___m_marginsHaveChanged_162 = value;
	}

	inline static int32_t get_offset_of_IsRectTransformDriven_163() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___IsRectTransformDriven_163)); }
	inline bool get_IsRectTransformDriven_163() const { return ___IsRectTransformDriven_163; }
	inline bool* get_address_of_IsRectTransformDriven_163() { return &___IsRectTransformDriven_163; }
	inline void set_IsRectTransformDriven_163(bool value)
	{
		___IsRectTransformDriven_163 = value;
	}

	inline static int32_t get_offset_of_m_width_164() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_width_164)); }
	inline float get_m_width_164() const { return ___m_width_164; }
	inline float* get_address_of_m_width_164() { return &___m_width_164; }
	inline void set_m_width_164(float value)
	{
		___m_width_164 = value;
	}

	inline static int32_t get_offset_of_m_rectTransformDimensionsChanged_165() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_rectTransformDimensionsChanged_165)); }
	inline bool get_m_rectTransformDimensionsChanged_165() const { return ___m_rectTransformDimensionsChanged_165; }
	inline bool* get_address_of_m_rectTransformDimensionsChanged_165() { return &___m_rectTransformDimensionsChanged_165; }
	inline void set_m_rectTransformDimensionsChanged_165(bool value)
	{
		___m_rectTransformDimensionsChanged_165 = value;
	}

	inline static int32_t get_offset_of_m_rectCorners_166() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_rectCorners_166)); }
	inline Vector3U5BU5D_t215400611* get_m_rectCorners_166() const { return ___m_rectCorners_166; }
	inline Vector3U5BU5D_t215400611** get_address_of_m_rectCorners_166() { return &___m_rectCorners_166; }
	inline void set_m_rectCorners_166(Vector3U5BU5D_t215400611* value)
	{
		___m_rectCorners_166 = value;
		Il2CppCodeGenWriteBarrier(&___m_rectCorners_166, value);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_167() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_enableAutoSizing_167)); }
	inline bool get_m_enableAutoSizing_167() const { return ___m_enableAutoSizing_167; }
	inline bool* get_address_of_m_enableAutoSizing_167() { return &___m_enableAutoSizing_167; }
	inline void set_m_enableAutoSizing_167(bool value)
	{
		___m_enableAutoSizing_167 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_168() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_maxFontSize_168)); }
	inline float get_m_maxFontSize_168() const { return ___m_maxFontSize_168; }
	inline float* get_address_of_m_maxFontSize_168() { return &___m_maxFontSize_168; }
	inline void set_m_maxFontSize_168(float value)
	{
		___m_maxFontSize_168 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_169() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_minFontSize_169)); }
	inline float get_m_minFontSize_169() const { return ___m_minFontSize_169; }
	inline float* get_address_of_m_minFontSize_169() { return &___m_minFontSize_169; }
	inline void set_m_minFontSize_169(float value)
	{
		___m_minFontSize_169 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_170() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isAwake_170)); }
	inline bool get_m_isAwake_170() const { return ___m_isAwake_170; }
	inline bool* get_address_of_m_isAwake_170() { return &___m_isAwake_170; }
	inline void set_m_isAwake_170(bool value)
	{
		___m_isAwake_170 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_171() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isRegisteredForEvents_171)); }
	inline bool get_m_isRegisteredForEvents_171() const { return ___m_isRegisteredForEvents_171; }
	inline bool* get_address_of_m_isRegisteredForEvents_171() { return &___m_isRegisteredForEvents_171; }
	inline void set_m_isRegisteredForEvents_171(bool value)
	{
		___m_isRegisteredForEvents_171 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_172() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_recursiveCount_172)); }
	inline int32_t get_m_recursiveCount_172() const { return ___m_recursiveCount_172; }
	inline int32_t* get_address_of_m_recursiveCount_172() { return &___m_recursiveCount_172; }
	inline void set_m_recursiveCount_172(int32_t value)
	{
		___m_recursiveCount_172 = value;
	}

	inline static int32_t get_offset_of_loopCountA_173() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___loopCountA_173)); }
	inline int32_t get_loopCountA_173() const { return ___loopCountA_173; }
	inline int32_t* get_address_of_loopCountA_173() { return &___loopCountA_173; }
	inline void set_loopCountA_173(int32_t value)
	{
		___loopCountA_173 = value;
	}

	inline static int32_t get_offset_of_m_flexibleHeight_174() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_flexibleHeight_174)); }
	inline float get_m_flexibleHeight_174() const { return ___m_flexibleHeight_174; }
	inline float* get_address_of_m_flexibleHeight_174() { return &___m_flexibleHeight_174; }
	inline void set_m_flexibleHeight_174(float value)
	{
		___m_flexibleHeight_174 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_175() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_flexibleWidth_175)); }
	inline float get_m_flexibleWidth_175() const { return ___m_flexibleWidth_175; }
	inline float* get_address_of_m_flexibleWidth_175() { return &___m_flexibleWidth_175; }
	inline void set_m_flexibleWidth_175(float value)
	{
		___m_flexibleWidth_175 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_176() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_minHeight_176)); }
	inline float get_m_minHeight_176() const { return ___m_minHeight_176; }
	inline float* get_address_of_m_minHeight_176() { return &___m_minHeight_176; }
	inline void set_m_minHeight_176(float value)
	{
		___m_minHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_177() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_minWidth_177)); }
	inline float get_m_minWidth_177() const { return ___m_minWidth_177; }
	inline float* get_address_of_m_minWidth_177() { return &___m_minWidth_177; }
	inline void set_m_minWidth_177(float value)
	{
		___m_minWidth_177 = value;
	}

	inline static int32_t get_offset_of_m_preferredWidth_178() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_preferredWidth_178)); }
	inline float get_m_preferredWidth_178() const { return ___m_preferredWidth_178; }
	inline float* get_address_of_m_preferredWidth_178() { return &___m_preferredWidth_178; }
	inline void set_m_preferredWidth_178(float value)
	{
		___m_preferredWidth_178 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_179() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_preferredHeight_179)); }
	inline float get_m_preferredHeight_179() const { return ___m_preferredHeight_179; }
	inline float* get_address_of_m_preferredHeight_179() { return &___m_preferredHeight_179; }
	inline void set_m_preferredHeight_179(float value)
	{
		___m_preferredHeight_179 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_180() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_renderedWidth_180)); }
	inline float get_m_renderedWidth_180() const { return ___m_renderedWidth_180; }
	inline float* get_address_of_m_renderedWidth_180() { return &___m_renderedWidth_180; }
	inline void set_m_renderedWidth_180(float value)
	{
		___m_renderedWidth_180 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_181() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_renderedHeight_181)); }
	inline float get_m_renderedHeight_181() const { return ___m_renderedHeight_181; }
	inline float* get_address_of_m_renderedHeight_181() { return &___m_renderedHeight_181; }
	inline void set_m_renderedHeight_181(float value)
	{
		___m_renderedHeight_181 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_182() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_layoutPriority_182)); }
	inline int32_t get_m_layoutPriority_182() const { return ___m_layoutPriority_182; }
	inline int32_t* get_address_of_m_layoutPriority_182() { return &___m_layoutPriority_182; }
	inline void set_m_layoutPriority_182(int32_t value)
	{
		___m_layoutPriority_182 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_183() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isRebuildingLayout_183)); }
	inline bool get_m_isRebuildingLayout_183() const { return ___m_isRebuildingLayout_183; }
	inline bool* get_address_of_m_isRebuildingLayout_183() { return &___m_isRebuildingLayout_183; }
	inline void set_m_isRebuildingLayout_183(bool value)
	{
		___m_isRebuildingLayout_183 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_184() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_isLayoutDirty_184)); }
	inline bool get_m_isLayoutDirty_184() const { return ___m_isLayoutDirty_184; }
	inline bool* get_address_of_m_isLayoutDirty_184() { return &___m_isLayoutDirty_184; }
	inline void set_m_isLayoutDirty_184(bool value)
	{
		___m_isLayoutDirty_184 = value;
	}

	inline static int32_t get_offset_of_m_LayoutPhase_185() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_LayoutPhase_185)); }
	inline int32_t get_m_LayoutPhase_185() const { return ___m_LayoutPhase_185; }
	inline int32_t* get_address_of_m_LayoutPhase_185() { return &___m_LayoutPhase_185; }
	inline void set_m_LayoutPhase_185(int32_t value)
	{
		___m_LayoutPhase_185 = value;
	}

	inline static int32_t get_offset_of_m_currentOverflowMode_186() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_currentOverflowMode_186)); }
	inline int32_t get_m_currentOverflowMode_186() const { return ___m_currentOverflowMode_186; }
	inline int32_t* get_address_of_m_currentOverflowMode_186() { return &___m_currentOverflowMode_186; }
	inline void set_m_currentOverflowMode_186(int32_t value)
	{
		___m_currentOverflowMode_186 = value;
	}

	inline static int32_t get_offset_of_m_currentAutoSizeMode_187() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_t3603375195, ___m_currentAutoSizeMode_187)); }
	inline bool get_m_currentAutoSizeMode_187() const { return ___m_currentAutoSizeMode_187; }
	inline bool* get_address_of_m_currentAutoSizeMode_187() { return &___m_currentAutoSizeMode_187; }
	inline void set_m_currentAutoSizeMode_187(bool value)
	{
		___m_currentAutoSizeMode_187 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
