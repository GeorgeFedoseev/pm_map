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

// System.Int32[][]
struct Int32U5BU5DU5BU5D_t158556903;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3927813275;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_t146365429;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "codegen/il2cpp-codegen.h"

// System.Int32[][] ProBuilder2.Common.pb_IntArrayUtility::ToArray(ProBuilder2.Common.pb_IntArray[])
extern "C"  Int32U5BU5DU5BU5D_t158556903* pb_IntArrayUtility_ToArray_m3988163380 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] ProBuilder2.Common.pb_IntArrayUtility::ToPbIntArray(System.Int32[][])
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_IntArrayUtility_ToPbIntArray_m3889266397 (Object_t * __this /* static, unused */, Int32U5BU5DU5BU5D_t158556903* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] ProBuilder2.Common.pb_IntArrayUtility::ToPbIntArray(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>)
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_IntArrayUtility_ToPbIntArray_m1497991909 (Object_t * __this /* static, unused */, List_1_t146365429 * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> ProBuilder2.Common.pb_IntArrayUtility::ToList(ProBuilder2.Common.pb_IntArray[])
extern "C"  List_1_t146365429 * pb_IntArrayUtility_ToList_m3644486269 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_IntArrayUtility::ToFormattedString(ProBuilder2.Common.pb_IntArray[])
extern "C"  String_t* pb_IntArrayUtility_ToFormattedString_m3314363935 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___arr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::IndexOf(System.Int32[],System.Int32,ProBuilder2.Common.pb_IntArray[])
extern "C"  int32_t pb_IntArrayUtility_IndexOf_m1253278049 (Object_t * __this /* static, unused */, Int32U5BU5D_t1809983122* ___array, int32_t ___val, pb_IntArrayU5BU5D_t3927813275* ___sharedIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::IndexOf(ProBuilder2.Common.pb_IntArray[],System.Int32)
extern "C"  int32_t pb_IntArrayUtility_IndexOf_m1056638548 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___intArray, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_IntArrayUtility::AllIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* pb_IntArrayUtility_AllIndicesWithValues_m3522225629 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___pbIntArr, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_IntArrayUtility::AllIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t3644373756 * pb_IntArrayUtility_AllIndicesWithValues_m2260716191 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___pbIntArr, List_1_t3644373756 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Int32[])
extern "C"  Int32U5BU5D_t1809983122* pb_IntArrayUtility_UniqueIndicesWithValues_m1617414591 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___pbIntArr, Int32U5BU5D_t1809983122* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t3644373756 * pb_IntArrayUtility_UniqueIndicesWithValues_m400341093 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275* ___pbIntArr, List_1_t3644373756 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] ProBuilder2.Common.pb_IntArrayUtility::ExtractSharedIndices(UnityEngine.Vector3[])
extern "C"  pb_IntArrayU5BU5D_t3927813275* pb_IntArrayUtility_ExtractSharedIndices_m3755370557 (Object_t * __this /* static, unused */, Vector3U5BU5D_t3227571696* ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::MergeSharedIndices(ProBuilder2.Common.pb_IntArray[]&,System.Int32[])
extern "C"  int32_t pb_IntArrayUtility_MergeSharedIndices_m3488356507 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275** ___sharedIndices, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArrayUtility::MergeSharedIndices(ProBuilder2.Common.pb_IntArray[]&,System.Int32,System.Int32)
extern "C"  void pb_IntArrayUtility_MergeSharedIndices_m1878273322 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275** ___sharedIndices, int32_t ___a, int32_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::AddValueAtIndex(ProBuilder2.Common.pb_IntArray[]&,System.Int32,System.Int32)
extern "C"  int32_t pb_IntArrayUtility_AddValueAtIndex_m1957100803 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275** ___sharedIndices, int32_t ___sharedIndex, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::AddRangeAtIndex(ProBuilder2.Common.pb_IntArray[]&,System.Int32,System.Int32[])
extern "C"  int32_t pb_IntArrayUtility_AddRangeAtIndex_m2250624557 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275** ___sharedIndices, int32_t ___sharedIndex, Int32U5BU5D_t1809983122* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArrayUtility::RemoveValues(ProBuilder2.Common.pb_IntArray[]&,System.Int32[])
extern "C"  void pb_IntArrayUtility_RemoveValues_m4015687559 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275** ___sharedIndices, Int32U5BU5D_t1809983122* ___remove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArrayUtility::RemoveValuesAndShift(ProBuilder2.Common.pb_IntArray[]&,System.Int32[])
extern "C"  void pb_IntArrayUtility_RemoveValuesAndShift_m3896710866 (Object_t * __this /* static, unused */, pb_IntArrayU5BU5D_t3927813275** ___sharedIndices, Int32U5BU5D_t1809983122* ___remove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
