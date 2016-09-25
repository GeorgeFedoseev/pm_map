#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TMPro.TextMeshPro
struct TextMeshPro_t3198095413;
// UnityEngine.Material
struct Material_t3870600107;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Char[]
struct CharU5BU5D_t3324145743;
// TMPro.TextMeshProFont
struct TextMeshProFont_t3602967588;
// TMPro.TextContainer
struct TextContainer_t2231787766;
// UnityEngine.Transform
struct Transform_t1659122786;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t270066265;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_MaskingTypes406604089.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Color32598853688.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_TMPro_WordWrapState4047764895.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_TMPro_TextMeshProFont3602967588.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "AssemblyU2DCSharp_TMPro_VertexGradient2166651658.h"
#include "AssemblyU2DCSharp_TMPro_FontStyles3228051751.h"
#include "AssemblyU2DCSharp_TMPro_TextOverflowModes832755779.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"
#include "AssemblyU2DCSharp_TMPro_TMP_Compatibility_AnchorPo2956782356.h"
#include "AssemblyU2DCSharp_TMPro_TextAlignmentOptions3798547742.h"
#include "AssemblyU2DCSharp_TMPro_TextureMappingOptions707307789.h"
#include "AssemblyU2DCSharp_TMPro_TextRenderFlags2400171206.h"

// System.Void TMPro.TextMeshPro::.ctor()
extern "C"  void TextMeshPro__ctor_m2011347858 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::Awake()
extern "C"  void TextMeshPro_Awake_m2248953077 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnEnable()
extern "C"  void TextMeshPro_OnEnable_m3046869684 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnDisable()
extern "C"  void TextMeshPro_OnDisable_m404616953 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnDestroy()
extern "C"  void TextMeshPro_OnDestroy_m2582149003 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::LoadFontAsset()
extern "C"  void TextMeshPro_LoadFontAsset_m2189413515 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ScheduleUpdate()
extern "C"  void TextMeshPro_ScheduleUpdate_m242104434 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateEnvMapMatrix()
extern "C"  void TextMeshPro_UpdateEnvMapMatrix_m4174700715 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMask(TMPro.MaskingTypes)
extern "C"  void TextMeshPro_SetMask_m618966337 (TextMeshPro_t3198095413 * __this, int32_t ___maskType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMaskCoordinates(UnityEngine.Vector4)
extern "C"  void TextMeshPro_SetMaskCoordinates_m1380246649 (TextMeshPro_t3198095413 * __this, Vector4_t4282066567  ___coords0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMaskCoordinates(UnityEngine.Vector4,System.Single,System.Single)
extern "C"  void TextMeshPro_SetMaskCoordinates_m948667907 (TextMeshPro_t3198095413 * __this, Vector4_t4282066567  ___coords0, float ___softX1, float ___softY2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::EnableMasking()
extern "C"  void TextMeshPro_EnableMasking_m529666915 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::DisableMasking()
extern "C"  void TextMeshPro_DisableMasking_m2521363488 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateMask()
extern "C"  void TextMeshPro_UpdateMask_m1102021831 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMeshArrays(System.Int32)
extern "C"  void TextMeshPro_SetMeshArrays_m1056196298 (TextMeshPro_t3198095413 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetFontMaterial(UnityEngine.Material)
extern "C"  void TextMeshPro_SetFontMaterial_m852725482 (TextMeshPro_t3198095413 * __this, Material_t3870600107 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetSharedFontMaterial(UnityEngine.Material)
extern "C"  void TextMeshPro_SetSharedFontMaterial_m1127564655 (TextMeshPro_t3198095413 * __this, Material_t3870600107 * ___mat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetOutlineThickness(System.Single)
extern "C"  void TextMeshPro_SetOutlineThickness_m3504332007 (TextMeshPro_t3198095413 * __this, float ___thickness0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetFaceColor(UnityEngine.Color32)
extern "C"  void TextMeshPro_SetFaceColor_m1001364081 (TextMeshPro_t3198095413 * __this, Color32_t598853688  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetOutlineColor(UnityEngine.Color32)
extern "C"  void TextMeshPro_SetOutlineColor_m1334851220 (TextMeshPro_t3198095413 * __this, Color32_t598853688  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::CreateMaterialInstance()
extern "C"  void TextMeshPro_CreateMaterialInstance_m2782688042 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetShaderType()
extern "C"  void TextMeshPro_SetShaderType_m3401931825 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetCulling()
extern "C"  void TextMeshPro_SetCulling_m3230402976 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetPerspectiveCorrection()
extern "C"  void TextMeshPro_SetPerspectiveCorrection_m1865332330 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::AddIntToCharArray(System.Int32,System.Int32&,System.Int32)
extern "C"  void TextMeshPro_AddIntToCharArray_m4123995719 (TextMeshPro_t3198095413 * __this, int32_t ___number0, int32_t* ___index1, int32_t ___precision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::AddFloatToCharArray(System.Single,System.Int32&,System.Int32)
extern "C"  void TextMeshPro_AddFloatToCharArray_m2778637812 (TextMeshPro_t3198095413 * __this, float ___number0, int32_t* ___index1, int32_t ___precision2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::StringToCharArray(System.String,System.Int32[]&)
extern "C"  void TextMeshPro_StringToCharArray_m3922279570 (TextMeshPro_t3198095413 * __this, String_t* ___text0, Int32U5BU5D_t3230847821** ___chars1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetTextArrayToCharArray(System.Char[],System.Int32[]&)
extern "C"  void TextMeshPro_SetTextArrayToCharArray_m3914942756 (TextMeshPro_t3198095413 * __this, CharU5BU5D_t3324145743* ___charArray0, Int32U5BU5D_t3230847821** ___charBuffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::GetArraySizes(System.Int32[])
extern "C"  int32_t TextMeshPro_GetArraySizes_m3933015964 (TextMeshPro_t3198095413 * __this, Int32U5BU5D_t3230847821* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::SetArraySizes(System.Int32[])
extern "C"  int32_t TextMeshPro_SetArraySizes_m3660301736 (TextMeshPro_t3198095413 * __this, Int32U5BU5D_t3230847821* ___chars0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ParseInputText()
extern "C"  void TextMeshPro_ParseInputText_m6815702 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnDidApplyAnimationProperties()
extern "C"  void TextMeshPro_OnDidApplyAnimationProperties_m4109330745 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnPreRenderObject()
extern "C"  void TextMeshPro_OnPreRenderObject_m12255945 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::OnWillRenderObject()
extern "C"  void TextMeshPro_OnWillRenderObject_m121647512 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::GenerateTextMesh()
extern "C"  void TextMeshPro_GenerateTextMesh_m1243980673 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::DrawUnderlineMesh(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32&,System.Single,System.Single,System.Single,UnityEngine.Color32)
extern "C"  void TextMeshPro_DrawUnderlineMesh_m2616077836 (TextMeshPro_t3198095413 * __this, Vector3_t4282066566  ___start0, Vector3_t4282066566  ___end1, int32_t* ___index2, float ___startScale3, float ___endScale4, float ___maxScale5, Color32_t598853688  ___underlineColor6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateSDFScale(System.Single,System.Single)
extern "C"  void TextMeshPro_UpdateSDFScale_m3803923104 (TextMeshPro_t3198095413 * __this, float ___prevScale0, float ___newScale1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ResizeMeshBuffers(System.Int32)
extern "C"  void TextMeshPro_ResizeMeshBuffers_m319222835 (TextMeshPro_t3198095413 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::AdjustLineOffset(System.Int32,System.Int32,System.Single)
extern "C"  void TextMeshPro_AdjustLineOffset_m4097432451 (TextMeshPro_t3198095413 * __this, int32_t ___startIndex0, int32_t ___endIndex1, float ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SaveWordWrappingState(TMPro.WordWrapState&,System.Int32,System.Int32)
extern "C"  void TextMeshPro_SaveWordWrappingState_m758315483 (TextMeshPro_t3198095413 * __this, WordWrapState_t4047764895 * ___state0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::RestoreWordWrappingState(TMPro.WordWrapState&)
extern "C"  int32_t TextMeshPro_RestoreWordWrappingState_m477668094 (TextMeshPro_t3198095413 * __this, WordWrapState_t4047764895 * ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TMPro.TextMeshPro::PackUV(System.Single,System.Single,System.Single)
extern "C"  Vector2_t4282066565  TextMeshPro_PackUV_m2659830372 (TextMeshPro_t3198095413 * __this, float ___x0, float ___y1, float ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ResizeLineExtents(System.Int32)
extern "C"  void TextMeshPro_ResizeLineExtents_m1759516770 (TextMeshPro_t3198095413 * __this, int32_t ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::HexToInt(System.Char)
extern "C"  int32_t TextMeshPro_HexToInt_m2307643456 (TextMeshPro_t3198095413 * __this, Il2CppChar ___hex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 TMPro.TextMeshPro::HexCharsToColor(System.Char[],System.Int32)
extern "C"  Color32_t598853688  TextMeshPro_HexCharsToColor_m2166147258 (TextMeshPro_t3198095413 * __this, CharU5BU5D_t3324145743* ___hexChars0, int32_t ___tagCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::ConvertToFloat(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  float TextMeshPro_ConvertToFloat_m105001008 (TextMeshPro_t3198095413 * __this, CharU5BU5D_t3324145743* ___chars0, int32_t ___startIndex1, int32_t ___endIndex2, int32_t ___decimalPointIndex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::ValidateHtmlTag(System.Int32[],System.Int32,System.Int32&)
extern "C"  bool TextMeshPro_ValidateHtmlTag_m3563544352 (TextMeshPro_t3198095413 * __this, Int32U5BU5D_t3230847821* ___chars0, int32_t ___startIndex1, int32_t* ___endIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TMPro.TextMeshPro::get_text()
extern "C"  String_t* TextMeshPro_get_text_m1176766085 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_text(System.String)
extern "C"  void TextMeshPro_set_text_m3053775174 (TextMeshPro_t3198095413 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextMeshProFont TMPro.TextMeshPro::get_font()
extern "C"  TextMeshProFont_t3602967588 * TextMeshPro_get_font_m1123929951 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_font(TMPro.TextMeshProFont)
extern "C"  void TextMeshPro_set_font_m3394763948 (TextMeshPro_t3198095413 * __this, TextMeshProFont_t3602967588 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TextMeshPro::get_fontMaterial()
extern "C"  Material_t3870600107 * TextMeshPro_get_fontMaterial_m575758514 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_fontMaterial(UnityEngine.Material)
extern "C"  void TextMeshPro_set_fontMaterial_m2227663559 (TextMeshPro_t3198095413 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.TextMeshPro::get_fontSharedMaterial()
extern "C"  Material_t3870600107 * TextMeshPro_get_fontSharedMaterial_m3684536183 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_fontSharedMaterial(UnityEngine.Material)
extern "C"  void TextMeshPro_set_fontSharedMaterial_m1372216012 (TextMeshPro_t3198095413 * __this, Material_t3870600107 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_isOverlay()
extern "C"  bool TextMeshPro_get_isOverlay_m1602411105 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_isOverlay(System.Boolean)
extern "C"  void TextMeshPro_set_isOverlay_m1260900720 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TMPro.TextMeshPro::get_color()
extern "C"  Color_t4194546905  TextMeshPro_get_color_m4116398609 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_color(UnityEngine.Color)
extern "C"  void TextMeshPro_set_color_m891407312 (TextMeshPro_t3198095413 * __this, Color_t4194546905  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.VertexGradient TMPro.TextMeshPro::get_colorGradient()
extern "C"  VertexGradient_t2166651658  TextMeshPro_get_colorGradient_m1773445449 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_colorGradient(TMPro.VertexGradient)
extern "C"  void TextMeshPro_set_colorGradient_m950780888 (TextMeshPro_t3198095413 * __this, VertexGradient_t2166651658  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_enableVertexGradient()
extern "C"  bool TextMeshPro_get_enableVertexGradient_m1481936190 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_enableVertexGradient(System.Boolean)
extern "C"  void TextMeshPro_set_enableVertexGradient_m4133435357 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 TMPro.TextMeshPro::get_faceColor()
extern "C"  Color32_t598853688  TextMeshPro_get_faceColor_m2450333685 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_faceColor(UnityEngine.Color32)
extern "C"  void TextMeshPro_set_faceColor_m2906780878 (TextMeshPro_t3198095413 * __this, Color32_t598853688  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 TMPro.TextMeshPro::get_outlineColor()
extern "C"  Color32_t598853688  TextMeshPro_get_outlineColor_m202932436 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_outlineColor(UnityEngine.Color32)
extern "C"  void TextMeshPro_set_outlineColor_m3318866711 (TextMeshPro_t3198095413 * __this, Color32_t598853688  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_outlineWidth()
extern "C"  float TextMeshPro_get_outlineWidth_m2557020723 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_outlineWidth(System.Single)
extern "C"  void TextMeshPro_set_outlineWidth_m3697210264 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_fontSize()
extern "C"  float TextMeshPro_get_fontSize_m2536124543 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_fontSize(System.Single)
extern "C"  void TextMeshPro_set_fontSize_m989726924 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_fontScale()
extern "C"  float TextMeshPro_get_fontScale_m1115853742 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.FontStyles TMPro.TextMeshPro::get_fontStyle()
extern "C"  int32_t TextMeshPro_get_fontStyle_m2992617019 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_fontStyle(TMPro.FontStyles)
extern "C"  void TextMeshPro_set_fontStyle_m136056330 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_characterSpacing()
extern "C"  float TextMeshPro_get_characterSpacing_m930635753 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_characterSpacing(System.Single)
extern "C"  void TextMeshPro_set_characterSpacing_m3248780706 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_richText()
extern "C"  bool TextMeshPro_get_richText_m189924496 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_richText(System.Boolean)
extern "C"  void TextMeshPro_set_richText_m334738351 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_lineLength()
extern "C"  float TextMeshPro_get_lineLength_m3073350025 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_lineLength(System.Single)
extern "C"  void TextMeshPro_set_lineLength_m2855129090 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextOverflowModes TMPro.TextMeshPro::get_OverflowMode()
extern "C"  int32_t TextMeshPro_get_OverflowMode_m1541962516 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_OverflowMode(TMPro.TextOverflowModes)
extern "C"  void TextMeshPro_set_OverflowMode_m4206866391 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds TMPro.TextMeshPro::get_bounds()
extern "C"  Bounds_t2711641849  TextMeshPro_get_bounds_m4128021343 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_lineSpacing()
extern "C"  float TextMeshPro_get_lineSpacing_m4231253410 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_lineSpacing(System.Single)
extern "C"  void TextMeshPro_set_lineSpacing_m3146854921 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_paragraphSpacing()
extern "C"  float TextMeshPro_get_paragraphSpacing_m2399113028 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_paragraphSpacing(System.Single)
extern "C"  void TextMeshPro_set_paragraphSpacing_m525881895 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_Compatibility/AnchorPositions TMPro.TextMeshPro::get_anchor()
extern "C"  int32_t TextMeshPro_get_anchor_m3294984817 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextAlignmentOptions TMPro.TextMeshPro::get_alignment()
extern "C"  int32_t TextMeshPro_get_alignment_m892432293 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_alignment(TMPro.TextAlignmentOptions)
extern "C"  void TextMeshPro_set_alignment_m2418199988 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_enableKerning()
extern "C"  bool TextMeshPro_get_enableKerning_m1686716644 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_enableKerning(System.Boolean)
extern "C"  void TextMeshPro_set_enableKerning_m1741400755 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_overrideColorTags()
extern "C"  bool TextMeshPro_get_overrideColorTags_m1477720523 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_overrideColorTags(System.Boolean)
extern "C"  void TextMeshPro_set_overrideColorTags_m3721926490 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_extraPadding()
extern "C"  bool TextMeshPro_get_extraPadding_m744320328 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_extraPadding(System.Boolean)
extern "C"  void TextMeshPro_set_extraPadding_m4021970535 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_enableWordWrapping()
extern "C"  bool TextMeshPro_get_enableWordWrapping_m4016638960 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_enableWordWrapping(System.Boolean)
extern "C"  void TextMeshPro_set_enableWordWrapping_m764502287 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextureMappingOptions TMPro.TextMeshPro::get_horizontalMapping()
extern "C"  int32_t TextMeshPro_get_horizontalMapping_m1337166931 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_horizontalMapping(TMPro.TextureMappingOptions)
extern "C"  void TextMeshPro_set_horizontalMapping_m2206751268 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextureMappingOptions TMPro.TextMeshPro::get_verticalMapping()
extern "C"  int32_t TextMeshPro_get_verticalMapping_m2299141953 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_verticalMapping(TMPro.TextureMappingOptions)
extern "C"  void TextMeshPro_set_verticalMapping_m2857807862 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_ignoreVisibility()
extern "C"  bool TextMeshPro_get_ignoreVisibility_m2440633899 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_ignoreVisibility(System.Boolean)
extern "C"  void TextMeshPro_set_ignoreVisibility_m2432186890 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_isOrthographic()
extern "C"  bool TextMeshPro_get_isOrthographic_m1439551009 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_isOrthographic(System.Boolean)
extern "C"  void TextMeshPro_set_isOrthographic_m3820883328 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_enableCulling()
extern "C"  bool TextMeshPro_get_enableCulling_m4289298952 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_enableCulling(System.Boolean)
extern "C"  void TextMeshPro_set_enableCulling_m1673600215 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_sortingLayerID()
extern "C"  int32_t TextMeshPro_get_sortingLayerID_m3608055701 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_sortingLayerID(System.Int32)
extern "C"  void TextMeshPro_set_sortingLayerID_m2018344104 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_sortingOrder()
extern "C"  int32_t TextMeshPro_get_sortingOrder_m1462059575 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_sortingOrder(System.Int32)
extern "C"  void TextMeshPro_set_sortingOrder_m2590651594 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_hasChanged()
extern "C"  bool TextMeshPro_get_hasChanged_m2580784481 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_hasChanged(System.Boolean)
extern "C"  void TextMeshPro_set_hasChanged_m2592622784 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextRenderFlags TMPro.TextMeshPro::get_renderMode()
extern "C"  int32_t TextMeshPro_get_renderMode_m2054284619 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_renderMode(TMPro.TextRenderFlags)
extern "C"  void TextMeshPro_set_renderMode_m428349312 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TextContainer TMPro.TextMeshPro::get_textContainer()
extern "C"  TextContainer_t2231787766 * TextMeshPro_get_textContainer_m1000409748 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform TMPro.TextMeshPro::get_transform()
extern "C"  Transform_t1659122786 * TextMeshPro_get_transform_m2498742193 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_maxVisibleCharacters()
extern "C"  int32_t TextMeshPro_get_maxVisibleCharacters_m1967252997 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_maxVisibleCharacters(System.Int32)
extern "C"  void TextMeshPro_set_maxVisibleCharacters_m2335093144 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_maxVisibleLines()
extern "C"  int32_t TextMeshPro_get_maxVisibleLines_m3424755430 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_maxVisibleLines(System.Int32)
extern "C"  void TextMeshPro_set_maxVisibleLines_m3451593781 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshPro::get_pageToDisplay()
extern "C"  int32_t TextMeshPro_get_pageToDisplay_m3247205613 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_pageToDisplay(System.Int32)
extern "C"  void TextMeshPro_set_pageToDisplay_m305940284 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_preferredWidth()
extern "C"  float TextMeshPro_get_preferredWidth_m294774164 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.TextMeshPro::get_enableAutoSizing()
extern "C"  bool TextMeshPro_get_enableAutoSizing_m751851927 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_enableAutoSizing(System.Boolean)
extern "C"  void TextMeshPro_set_enableAutoSizing_m2182940790 (TextMeshPro_t3198095413 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_fontSizeMin()
extern "C"  float TextMeshPro_get_fontSizeMin_m952740469 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_fontSizeMin(System.Single)
extern "C"  void TextMeshPro_set_fontSizeMin_m472777750 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.TextMeshPro::get_fontSizeMax()
extern "C"  float TextMeshPro_get_fontSizeMax_m952511751 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_fontSizeMax(System.Single)
extern "C"  void TextMeshPro_set_fontSizeMax_m1720827588 (TextMeshPro_t3198095413 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.MaskingTypes TMPro.TextMeshPro::get_maskType()
extern "C"  int32_t TextMeshPro_get_maskType_m1679664769 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::set_maskType(TMPro.MaskingTypes)
extern "C"  void TextMeshPro_set_maskType_m1183758008 (TextMeshPro_t3198095413 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMask(TMPro.MaskingTypes,UnityEngine.Vector4)
extern "C"  void TextMeshPro_SetMask_m1806690419 (TextMeshPro_t3198095413 * __this, int32_t ___type0, Vector4_t4282066567  ___maskCoords1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetMask(TMPro.MaskingTypes,UnityEngine.Vector4,System.Single,System.Single)
extern "C"  void TextMeshPro_SetMask_m2603167485 (TextMeshPro_t3198095413 * __this, int32_t ___type0, Vector4_t4282066567  ___maskCoords1, float ___softnessX2, float ___softnessY3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextInfo TMPro.TextMeshPro::get_textInfo()
extern "C"  TMP_TextInfo_t270066265 * TextMeshPro_get_textInfo_m2581137814 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh TMPro.TextMeshPro::get_mesh()
extern "C"  Mesh_t4241756145 * TextMeshPro_get_mesh_m1577852047 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateMeshPadding()
extern "C"  void TextMeshPro_UpdateMeshPadding_m2802464843 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::ForceMeshUpdate()
extern "C"  void TextMeshPro_ForceMeshUpdate_m2284048401 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::UpdateFontAsset()
extern "C"  void TextMeshPro_UpdateFontAsset_m3247811848 (TextMeshPro_t3198095413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.TMP_TextInfo TMPro.TextMeshPro::GetTextInfo(System.String)
extern "C"  TMP_TextInfo_t270066265 * TextMeshPro_GetTextInfo_m3686552705 (TextMeshPro_t3198095413 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetText(System.String,System.Single)
extern "C"  void TextMeshPro_SetText_m2884703528 (TextMeshPro_t3198095413 * __this, String_t* ___text0, float ___arg01, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetText(System.String,System.Single,System.Single)
extern "C"  void TextMeshPro_SetText_m2041281037 (TextMeshPro_t3198095413 * __this, String_t* ___text0, float ___arg01, float ___arg12, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetText(System.String,System.Single,System.Single,System.Single)
extern "C"  void TextMeshPro_SetText_m3500993074 (TextMeshPro_t3198095413 * __this, String_t* ___text0, float ___arg01, float ___arg12, float ___arg23, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshPro::SetCharArray(System.Char[])
extern "C"  void TextMeshPro_SetCharArray_m95412488 (TextMeshPro_t3198095413 * __this, CharU5BU5D_t3324145743* ___charArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
