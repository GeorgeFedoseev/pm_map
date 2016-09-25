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

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void MaterialUI.RippleControl::Initialize()
extern "C"  void RippleControl_Initialize_m2422880691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,UnityEngine.Color)
extern "C"  GameObject_t3674682005 * RippleControl_MakeRipple_m419672381 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___position0, Transform_t1659122786 * ___parent1, int32_t ___size2, Color_t4194546905  ___color3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color)
extern "C"  GameObject_t3674682005 * RippleControl_MakeRipple_m3433316780 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___position0, Transform_t1659122786 * ___parent1, int32_t ___size2, float ___animSpeed3, float ___startAlpha4, float ___endAlpha5, Color_t4194546905  ___color6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject MaterialUI.RippleControl::MakeRipple(UnityEngine.Vector3,UnityEngine.Transform,System.Int32,System.Single,System.Single,System.Single,UnityEngine.Color,UnityEngine.Vector3)
extern "C"  GameObject_t3674682005 * RippleControl_MakeRipple_m1875646783 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___position0, Transform_t1659122786 * ___parent1, int32_t ___size2, float ___animSpeed3, float ___startAlpha4, float ___endAlpha5, Color_t4194546905  ___color6, Vector3_t4282066566  ___endPosition7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
