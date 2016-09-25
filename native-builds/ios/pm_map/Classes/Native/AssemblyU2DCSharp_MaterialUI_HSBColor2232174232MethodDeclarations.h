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

// System.String
struct String_t;
// MaterialUI.HSBColor
struct HSBColor_t2232174232;
struct HSBColor_t2232174232_marshaled_pinvoke;
struct HSBColor_t2232174232_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_MaterialUI_HSBColor2232174232.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m1273165326 (HSBColor_t2232174232 * __this, float ___h0, float ___s1, float ___b2, float ___a3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.HSBColor::.ctor(System.Single,System.Single,System.Single)
extern "C"  void HSBColor__ctor_m2357933801 (HSBColor_t2232174232 * __this, float ___h0, float ___s1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.HSBColor::.ctor(UnityEngine.Color)
extern "C"  void HSBColor__ctor_m153540826 (HSBColor_t2232174232 * __this, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MaterialUI.HSBColor MaterialUI.HSBColor::FromColor(UnityEngine.Color)
extern "C"  HSBColor_t2232174232  HSBColor_FromColor_m788740879 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MaterialUI.HSBColor::ToColor(MaterialUI.HSBColor)
extern "C"  Color_t4194546905  HSBColor_ToColor_m1493225306 (Il2CppObject * __this /* static, unused */, HSBColor_t2232174232  ___hsbColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color MaterialUI.HSBColor::ToColor()
extern "C"  Color_t4194546905  HSBColor_ToColor_m361661273 (HSBColor_t2232174232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MaterialUI.HSBColor::ToString()
extern "C"  String_t* HSBColor_ToString_m3663091297 (HSBColor_t2232174232 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// MaterialUI.HSBColor MaterialUI.HSBColor::Lerp(MaterialUI.HSBColor,MaterialUI.HSBColor,System.Single)
extern "C"  HSBColor_t2232174232  HSBColor_Lerp_m1422196586 (Il2CppObject * __this /* static, unused */, HSBColor_t2232174232  ___a0, HSBColor_t2232174232  ___b1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MaterialUI.HSBColor::Test()
extern "C"  void HSBColor_Test_m3264440586 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct HSBColor_t2232174232;
struct HSBColor_t2232174232_marshaled_pinvoke;

extern "C" void HSBColor_t2232174232_marshal_pinvoke(const HSBColor_t2232174232& unmarshaled, HSBColor_t2232174232_marshaled_pinvoke& marshaled);
extern "C" void HSBColor_t2232174232_marshal_pinvoke_back(const HSBColor_t2232174232_marshaled_pinvoke& marshaled, HSBColor_t2232174232& unmarshaled);
extern "C" void HSBColor_t2232174232_marshal_pinvoke_cleanup(HSBColor_t2232174232_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct HSBColor_t2232174232;
struct HSBColor_t2232174232_marshaled_com;

extern "C" void HSBColor_t2232174232_marshal_com(const HSBColor_t2232174232& unmarshaled, HSBColor_t2232174232_marshaled_com& marshaled);
extern "C" void HSBColor_t2232174232_marshal_com_back(const HSBColor_t2232174232_marshaled_com& marshaled, HSBColor_t2232174232& unmarshaled);
extern "C" void HSBColor_t2232174232_marshal_com_cleanup(HSBColor_t2232174232_marshaled_com& marshaled);
