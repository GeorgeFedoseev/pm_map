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

// ProBuilder2.Common.pb_HsvColor
struct pb_HsvColor_t2980699843;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_HsvC2980699843.h"

// System.Void ProBuilder2.Common.pb_HsvColor::.ctor(System.Single,System.Single,System.Single)
extern "C"  void pb_HsvColor__ctor_m2867075637 (pb_HsvColor_t2980699843 * __this, float ___h0, float ___s1, float ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_HsvColor::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void pb_HsvColor__ctor_m2895520858 (pb_HsvColor_t2980699843 * __this, float ___h0, float ___s1, float ___v2, float ___sv_modifier3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_HsvColor ProBuilder2.Common.pb_HsvColor::FromRGB(UnityEngine.Color)
extern "C"  pb_HsvColor_t2980699843 * pb_HsvColor_FromRGB_m3606880920 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_HsvColor::ToString()
extern "C"  String_t* pb_HsvColor_ToString_m523968467 (pb_HsvColor_t2980699843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ProBuilder2.Common.pb_HsvColor::SqrDistance(ProBuilder2.Common.pb_HsvColor)
extern "C"  float pb_HsvColor_SqrDistance_m3616374575 (pb_HsvColor_t2980699843 * __this, pb_HsvColor_t2980699843 * ___InColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
