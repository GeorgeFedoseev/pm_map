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

// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"

// System.Void TMPro.ShaderUtilities::.cctor()
extern "C"  void ShaderUtilities__cctor_m66797037 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ShaderUtilities::GetShaderPropertyIDs()
extern "C"  void ShaderUtilities_GetShaderPropertyIDs_m1021601388 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.ShaderUtilities::UpdateShaderRatios(UnityEngine.Material,System.Boolean)
extern "C"  void ShaderUtilities_UpdateShaderRatios_m761339873 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___mat0, bool ___isBold1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 TMPro.ShaderUtilities::GetFontExtent(UnityEngine.Material)
extern "C"  Vector4_t4282066567  ShaderUtilities_GetFontExtent_m1464552744 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___material0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TMPro.ShaderUtilities::IsMaskingEnabled(UnityEngine.Material)
extern "C"  bool ShaderUtilities_IsMaskingEnabled_m3268244647 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___material0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.ShaderUtilities::GetPadding(UnityEngine.Material,System.Boolean,System.Boolean)
extern "C"  float ShaderUtilities_GetPadding_m1866269973 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___material0, bool ___enableExtraPadding1, bool ___isBold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TMPro.ShaderUtilities::GetPadding(UnityEngine.Material[],System.Boolean,System.Boolean)
extern "C"  float ShaderUtilities_GetPadding_m560343667 (Il2CppObject * __this /* static, unused */, MaterialU5BU5D_t170856778* ___materials0, bool ___enableExtraPadding1, bool ___isBold2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
