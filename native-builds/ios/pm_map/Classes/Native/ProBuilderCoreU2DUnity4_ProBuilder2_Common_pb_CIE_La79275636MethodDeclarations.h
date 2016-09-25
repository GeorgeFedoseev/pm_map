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

// ProBuilder2.Common.pb_CIE_Lab_Color
struct pb_CIE_Lab_Color_t79275636;
// ProBuilder2.Common.pb_XYZ_Color
struct pb_XYZ_Color_t2499037984;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_XYZ_2499037984.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void ProBuilder2.Common.pb_CIE_Lab_Color::.ctor(System.Single,System.Single,System.Single)
extern "C"  void pb_CIE_Lab_Color__ctor_m759958104 (pb_CIE_Lab_Color_t79275636 * __this, float ___L0, float ___a1, float ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_CIE_Lab_Color ProBuilder2.Common.pb_CIE_Lab_Color::FromXYZ(ProBuilder2.Common.pb_XYZ_Color)
extern "C"  pb_CIE_Lab_Color_t79275636 * pb_CIE_Lab_Color_FromXYZ_m2569249865 (Il2CppObject * __this /* static, unused */, pb_XYZ_Color_t2499037984 * ___xyz0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_CIE_Lab_Color ProBuilder2.Common.pb_CIE_Lab_Color::FromRGB(UnityEngine.Color)
extern "C"  pb_CIE_Lab_Color_t79275636 * pb_CIE_Lab_Color_FromRGB_m2372864722 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_CIE_Lab_Color::ToString()
extern "C"  String_t* pb_CIE_Lab_Color_ToString_m2271707856 (pb_CIE_Lab_Color_t79275636 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
