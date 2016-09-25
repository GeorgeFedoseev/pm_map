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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"

// System.Void TMPro.MaterialManager::.cctor()
extern "C"  void MaterialManager__cctor_m361996430 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.MaterialManager::GetStencilMaterial(UnityEngine.Material,System.Int32)
extern "C"  Material_t3870600107 * MaterialManager_GetStencilMaterial_m2836299170 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___baseMaterial0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.MaterialManager::GetBaseMaterial(UnityEngine.Material)
extern "C"  Material_t3870600107 * MaterialManager_GetBaseMaterial_m2737243052 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material TMPro.MaterialManager::SetStencil(UnityEngine.Material,System.Int32)
extern "C"  Material_t3870600107 * MaterialManager_SetStencil_m482027349 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___material0, int32_t ___stencilID1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialManager::AddMaskingMaterial(UnityEngine.Material,UnityEngine.Material,System.Int32)
extern "C"  void MaterialManager_AddMaskingMaterial_m2309932882 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___baseMaterial0, Material_t3870600107 * ___stencilMaterial1, int32_t ___stencilID2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialManager::RemoveStencilMaterial(UnityEngine.Material)
extern "C"  void MaterialManager_RemoveStencilMaterial_m3112573726 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialManager::ReleaseBaseMaterial(UnityEngine.Material)
extern "C"  void MaterialManager_ReleaseBaseMaterial_m367485182 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___baseMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialManager::ReleaseStencilMaterial(UnityEngine.Material)
extern "C"  void MaterialManager_ReleaseStencilMaterial_m3120298691 (Il2CppObject * __this /* static, unused */, Material_t3870600107 * ___stencilMaterial0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialManager::ClearMaterials()
extern "C"  void MaterialManager_ClearMaterials_m958049796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TMPro.MaterialManager::ListMaterials()
extern "C"  void MaterialManager_ListMaterials_m3391947211 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TMPro.MaterialManager::GetStencilID(UnityEngine.GameObject)
extern "C"  int32_t MaterialManager_GetStencilID_m504773488 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
