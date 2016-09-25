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

// ProBuilder2.Common.pb_IntArray
struct pb_IntArray_t226981141;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.String
struct String_t;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_IntAr226981141.h"

// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_IntArray::ToList()
extern "C"  List_1_t2522024052 * pb_IntArray_ToList_m1085187569 (pb_IntArray_t226981141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArray::.ctor(System.Int32[])
extern "C"  void pb_IntArray__ctor_m3338683293 (pb_IntArray_t226981141 * __this, Int32U5BU5D_t3230847821* ___intArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArray::.ctor(ProBuilder2.Common.pb_IntArray)
extern "C"  void pb_IntArray__ctor_m3529640016 (pb_IntArray_t226981141 * __this, pb_IntArray_t226981141 * ___intArray0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArray::get_Item(System.Int32)
extern "C"  int32_t pb_IntArray_get_Item_m2765021395 (pb_IntArray_t226981141 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArray::set_Item(System.Int32,System.Int32)
extern "C"  void pb_IntArray_set_Item_m3927067648 (pb_IntArray_t226981141 * __this, int32_t ___i0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArray::get_Length()
extern "C"  int32_t pb_IntArray_get_Length_m1235739157 (pb_IntArray_t226981141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_IntArray::op_Implicit(ProBuilder2.Common.pb_IntArray)
extern "C"  Int32U5BU5D_t3230847821* pb_IntArray_op_Implicit_m2466734467 (Il2CppObject * __this /* static, unused */, pb_IntArray_t226981141 * ___intArr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray ProBuilder2.Common.pb_IntArray::op_Explicit(System.Int32[])
extern "C"  pb_IntArray_t226981141 * pb_IntArray_op_Explicit_m1517743756 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___arr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_IntArray::ToString()
extern "C"  String_t* pb_IntArray_ToString_m3277835045 (pb_IntArray_t226981141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_IntArray::IsEmpty()
extern "C"  bool pb_IntArray_IsEmpty_m3243608601 (pb_IntArray_t226981141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArray::RemoveEmptyOrNull(ProBuilder2.Common.pb_IntArray[]&)
extern "C"  void pb_IntArray_RemoveEmptyOrNull_m1902434765 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
