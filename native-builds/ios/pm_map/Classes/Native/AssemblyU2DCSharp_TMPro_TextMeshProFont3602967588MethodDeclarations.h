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

// TMPro.TextMeshProFont
struct TextMeshProFont_t3602967588;
// TMPro.FaceInfo
struct FaceInfo_t3469866561;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.GlyphInfo>
struct Dictionary_2_t460200867;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair>
struct Dictionary_2_t1902096943;
// TMPro.KerningTable
struct KerningTable_t618956984;
// TMPro.LineBreakingTable
struct LineBreakingTable_t1570184089;
// TMPro.GlyphInfo[]
struct GlyphInfoU5BU5D_t2899360245;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Char>
struct Dictionary_2_t2859885777;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;
// TMPro.GlyphInfo
struct GlyphInfo_t462937628;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_FaceInfo3469866561.h"
#include "AssemblyU2DCSharp_TMPro_KerningTable618956984.h"
#include "UnityEngine_UnityEngine_TextAsset3836129977.h"
#include "AssemblyU2DCSharp_TMPro_GlyphInfo462937628.h"

// System.Void TMPro.TextMeshProFont::.ctor()
extern "C"  void TextMeshProFont__ctor_m2227906691 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.FaceInfo TMPro.TextMeshProFont::get_fontInfo()
extern "C"  FaceInfo_t3469866561 * TextMeshProFont_get_fontInfo_m337497231 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.GlyphInfo> TMPro.TextMeshProFont::get_characterDictionary()
extern "C"  Dictionary_2_t460200867 * TextMeshProFont_get_characterDictionary_m3207494964 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.KerningPair> TMPro.TextMeshProFont::get_kerningDictionary()
extern "C"  Dictionary_2_t1902096943 * TextMeshProFont_get_kerningDictionary_m2977675107 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.KerningTable TMPro.TextMeshProFont::get_kerningInfo()
extern "C"  KerningTable_t618956984 * TextMeshProFont_get_kerningInfo_m402176627 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TMPro.LineBreakingTable TMPro.TextMeshProFont::get_lineBreakingInfo()
extern "C"  LineBreakingTable_t1570184089 * TextMeshProFont_get_lineBreakingInfo_m565744857 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::OnEnable()
extern "C"  void TextMeshProFont_OnEnable_m3510184995 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::OnDisable()
extern "C"  void TextMeshProFont_OnDisable_m1882489706 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::OnValidate()
extern "C"  void TextMeshProFont_OnValidate_m4097993526 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::AddFaceInfo(TMPro.FaceInfo)
extern "C"  void TextMeshProFont_AddFaceInfo_m244658344 (TextMeshProFont_t3602967588 * __this, FaceInfo_t3469866561 * ___faceInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::AddGlyphInfo(TMPro.GlyphInfo[])
extern "C"  void TextMeshProFont_AddGlyphInfo_m1377293046 (TextMeshProFont_t3602967588 * __this, GlyphInfoU5BU5D_t2899360245* ___glyphInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::AddKerningInfo(TMPro.KerningTable)
extern "C"  void TextMeshProFont_AddKerningInfo_m3880208222 (TextMeshProFont_t3602967588 * __this, KerningTable_t618956984 * ___kerningTable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.TextMeshProFont::ReadFontDefinition()
extern "C"  void TextMeshProFont_ReadFontDefinition_m1674952857 (TextMeshProFont_t3602967588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Char> TMPro.TextMeshProFont::GetCharacters(UnityEngine.TextAsset)
extern "C"  Dictionary_2_t2859885777 * TextMeshProFont_GetCharacters_m2221357651 (TextMeshProFont_t3602967588 * __this, TextAsset_t3836129977 * ___file0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.TextMeshProFont::<AddGlyphInfo>m__81(TMPro.GlyphInfo)
extern "C"  int32_t TextMeshProFont_U3CAddGlyphInfoU3Em__81_m3694430278 (Il2CppObject * __this /* static, unused */, GlyphInfo_t462937628 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
