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

// ProBuilder2.Common.pb_Transform2D
struct pb_Transform2D_t1780565441;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void ProBuilder2.Common.pb_Transform2D::.ctor(UnityEngine.Vector2,System.Single,UnityEngine.Vector2)
extern "C"  void pb_Transform2D__ctor_m1980189571 (pb_Transform2D_t1780565441 * __this, Vector2_t4282066565  ___position0, float ___rotation1, Vector2_t4282066565  ___scale2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 ProBuilder2.Common.pb_Transform2D::TransformPoint(UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  pb_Transform2D_TransformPoint_m2146447965 (pb_Transform2D_t1780565441 * __this, Vector2_t4282066565  ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Transform2D::ToString()
extern "C"  String_t* pb_Transform2D_ToString_m3188719645 (pb_Transform2D_t1780565441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
