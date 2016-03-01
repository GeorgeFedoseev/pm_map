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

// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.Renderer::get_isPartOfStaticBatch()
extern "C"  bool Renderer_get_isPartOfStaticBatch_m795521425 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C"  void Renderer_set_enabled_m2514140131 (Renderer_t1092684080 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C"  Material_t1886596500 * Renderer_get_sharedMaterial_m835478880 (Renderer_t1092684080 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C"  void Renderer_set_sharedMaterials_m1255100914 (Renderer_t1092684080 * __this, MaterialU5BU5D_t3353847197* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
