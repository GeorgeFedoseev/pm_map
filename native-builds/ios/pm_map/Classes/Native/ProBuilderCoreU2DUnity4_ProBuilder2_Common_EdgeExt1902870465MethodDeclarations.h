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

// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_t2250493944;
// ProBuilder2.Common.pb_Edge
struct pb_Edge_t882308392;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;
// pb_Object
struct pb_Object_t3489221196;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>
struct List_1_t2250520728;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t1297549625;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t1009109529;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge882308392.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"

// System.Boolean ProBuilder2.Common.EdgeExtensions::ContainsDuplicate(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>,ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  bool EdgeExtensions_ContainsDuplicate_m1434913668 (Il2CppObject * __this /* static, unused */, List_1_t2250493944 * ___edges0, pb_Edge_t882308392 * ___edge1, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.EdgeExtensions::GetPerimeterEdges(pb_Object,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>)
extern "C"  List_1_t2250493944 * EdgeExtensions_GetPerimeterEdges_m753000098 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, List_1_t2250520728 * ___faces1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.EdgeExtensions::GetPerimeterEdges(pb_Object,ProBuilder2.Common.pb_Face[])
extern "C"  pb_EdgeU5BU5D_t1297549625* EdgeExtensions_GetPerimeterEdges_m2334520054 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, pb_FaceU5BU5D_t1009109529* ___faces1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.EdgeExtensions::GetPerimeterEdges(ProBuilder2.Common.pb_Face)
extern "C"  pb_EdgeU5BU5D_t1297549625* EdgeExtensions_GetPerimeterEdges_m3053333816 (Il2CppObject * __this /* static, unused */, pb_Face_t882335176 * ___face0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.EdgeExtensions::GetUniqueEdges(pb_Object,ProBuilder2.Common.pb_Face[])
extern "C"  pb_EdgeU5BU5D_t1297549625* EdgeExtensions_GetUniqueEdges_m1829153220 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, pb_FaceU5BU5D_t1009109529* ___faces1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.EdgeExtensions::Contains(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_Edge)
extern "C"  bool EdgeExtensions_Contains_m1482849547 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, pb_Edge_t882308392 * ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.EdgeExtensions::Contains(ProBuilder2.Common.pb_Edge[],System.Int32,System.Int32)
extern "C"  bool EdgeExtensions_Contains_m1869794634 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, int32_t ___x1, int32_t ___y2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.EdgeExtensions::IndexOf(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>,ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  int32_t EdgeExtensions_IndexOf_m3500299693 (Il2CppObject * __this /* static, unused */, List_1_t2250493944 * ___edges0, pb_Edge_t882308392 * ___edge1, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.EdgeExtensions::IndexOf(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  int32_t EdgeExtensions_IndexOf_m2986093573 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, pb_Edge_t882308392 * ___edge1, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.EdgeExtensions::ToIntList(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  List_1_t2522024052 * EdgeExtensions_ToIntList_m944512929 (Il2CppObject * __this /* static, unused */, List_1_t2250493944 * ___edges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.EdgeExtensions::AllTriangles(ProBuilder2.Common.pb_Edge[])
extern "C"  Int32U5BU5D_t3230847821* EdgeExtensions_AllTriangles_m1347577245 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.EdgeExtensions::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  List_1_t2522024052 * EdgeExtensions_AllTriangles_m108998983 (Il2CppObject * __this /* static, unused */, List_1_t2250493944 * ___edges0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
