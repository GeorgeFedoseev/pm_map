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
struct Int32U5BU5DU5BU5D_t1820556512;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_t3890209604;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "codegen/il2cpp-codegen.h"

// System.Int32[][] ProBuilder2.Common.pb_IntArrayUtility::ToArray(ProBuilder2.Common.pb_IntArray[])
extern "C"  Int32U5BU5DU5BU5D_t1820556512* pb_IntArrayUtility_ToArray_m3988163380 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] ProBuilder2.Common.pb_IntArrayUtility::ToPbIntArray(System.Int32[][])
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_IntArrayUtility_ToPbIntArray_m3889266397 (Il2CppObject * __this /* static, unused */, Int32U5BU5DU5BU5D_t1820556512* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] ProBuilder2.Common.pb_IntArrayUtility::ToPbIntArray(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>)
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_IntArrayUtility_ToPbIntArray_m1497991909 (Il2CppObject * __this /* static, unused */, List_1_t3890209604 * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> ProBuilder2.Common.pb_IntArrayUtility::ToList(ProBuilder2.Common.pb_IntArray[])
extern "C"  List_1_t3890209604 * pb_IntArrayUtility_ToList_m3644486269 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_IntArrayUtility::ToFormattedString(ProBuilder2.Common.pb_IntArray[])
extern "C"  String_t* pb_IntArrayUtility_ToFormattedString_m3314363935 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___arr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::IndexOf(System.Int32[],System.Int32,ProBuilder2.Common.pb_IntArray[])
extern "C"  int32_t pb_IntArrayUtility_IndexOf_m1253278049 (Il2CppObject * __this /* static, unused */, Int32U5BU5D_t3230847821* ___array0, int32_t ___val1, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::IndexOf(ProBuilder2.Common.pb_IntArray[],System.Int32)
extern "C"  int32_t pb_IntArrayUtility_IndexOf_m1056638548 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___intArray0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_IntArrayUtility::AllIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Int32[])
extern "C"  Int32U5BU5D_t3230847821* pb_IntArrayUtility_AllIndicesWithValues_m3522225629 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___pbIntArr0, Int32U5BU5D_t3230847821* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_IntArrayUtility::AllIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t2522024052 * pb_IntArrayUtility_AllIndicesWithValues_m2260716191 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___pbIntArr0, List_1_t2522024052 * ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Int32[])
extern "C"  Int32U5BU5D_t3230847821* pb_IntArrayUtility_UniqueIndicesWithValues_m1617414591 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___pbIntArr0, Int32U5BU5D_t3230847821* ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_IntArrayUtility::UniqueIndicesWithValues(ProBuilder2.Common.pb_IntArray[],System.Collections.Generic.List`1<System.Int32>)
extern "C"  List_1_t2522024052 * pb_IntArrayUtility_UniqueIndicesWithValues_m400341093 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016* ___pbIntArr0, List_1_t2522024052 * ___values1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_IntArray[] ProBuilder2.Common.pb_IntArrayUtility::ExtractSharedIndices(UnityEngine.Vector3[])
extern "C"  pb_IntArrayU5BU5D_t3984225016* pb_IntArrayUtility_ExtractSharedIndices_m3755370557 (Il2CppObject * __this /* static, unused */, Vector3U5BU5D_t215400611* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::MergeSharedIndices(ProBuilder2.Common.pb_IntArray[]&,System.Int32[])
extern "C"  int32_t pb_IntArrayUtility_MergeSharedIndices_m3488356507 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___sharedIndices0, Int32U5BU5D_t3230847821* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArrayUtility::MergeSharedIndices(ProBuilder2.Common.pb_IntArray[]&,System.Int32,System.Int32)
extern "C"  void pb_IntArrayUtility_MergeSharedIndices_m1878273322 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___sharedIndices0, int32_t ___a1, int32_t ___b2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::AddValueAtIndex(ProBuilder2.Common.pb_IntArray[]&,System.Int32,System.Int32)
extern "C"  int32_t pb_IntArrayUtility_AddValueAtIndex_m1957100803 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___sharedIndices0, int32_t ___sharedIndex1, int32_t ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_IntArrayUtility::AddRangeAtIndex(ProBuilder2.Common.pb_IntArray[]&,System.Int32,System.Int32[])
extern "C"  int32_t pb_IntArrayUtility_AddRangeAtIndex_m2250624557 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___sharedIndices0, int32_t ___sharedIndex1, Int32U5BU5D_t3230847821* ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArrayUtility::RemoveValues(ProBuilder2.Common.pb_IntArray[]&,System.Int32[])
extern "C"  void pb_IntArrayUtility_RemoveValues_m4015687559 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___sharedIndices0, Int32U5BU5D_t3230847821* ___remove1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_IntArrayUtility::RemoveValuesAndShift(ProBuilder2.Common.pb_IntArray[]&,System.Int32[])
extern "C"  void pb_IntArrayUtility_RemoveValuesAndShift_m3896710866 (Il2CppObject * __this /* static, unused */, pb_IntArrayU5BU5D_t3984225016** ___sharedIndices0, Int32U5BU5D_t3230847821* ___remove1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
