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

// pb_Object
struct pb_Object_t3489221196;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// pb_Object pb_Shape_Generator::CubeGenerator(UnityEngine.Vector3)
extern "C"  pb_Object_t3489221196 * pb_Shape_Generator_CubeGenerator_m4172400202 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___size0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Shape_Generator::CylinderGenerator(System.Int32,System.Single,System.Single,System.Int32)
extern "C"  pb_Object_t3489221196 * pb_Shape_Generator_CylinderGenerator_m949441454 (Il2CppObject * __this /* static, unused */, int32_t ___axisDivisions0, float ___radius1, float ___height2, int32_t ___heightCuts3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_Object pb_Shape_Generator::PipeGenerator(System.Single,System.Single,System.Single,System.Int32,System.Int32)
extern "C"  pb_Object_t3489221196 * pb_Shape_Generator_PipeGenerator_m1382649727 (Il2CppObject * __this /* static, unused */, float ___radius0, float ___height1, float ___thickness2, int32_t ___subdivAxis3, int32_t ___subdivHeight4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
