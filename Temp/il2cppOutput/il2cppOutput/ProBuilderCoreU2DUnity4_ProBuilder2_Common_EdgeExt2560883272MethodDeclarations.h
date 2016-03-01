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
struct List_1_t2882721146;
// ProBuilder2.Common.pb_Edge
struct pb_Edge_t2085762177;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3927813275;
// pb_Object
struct pb_Object_t3489221196;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>
struct List_1_t2882747930;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t3246820444;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t2958380348;
// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge2085762177.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"

// System.Boolean ProBuilder2.Common.EdgeExtensions::ContainsDuplicate(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>,ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  bool EdgeExtensions_ContainsDuplicate_m1434913668 (Object_t * __this /* static, unused */, List_1_t2882721146 * ___edges, pb_Edge_t2085762177 * ___edge, pb_IntArrayU5BU5D_t3927813275* ___sharedIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.EdgeExtensions::GetPerimeterEdges(pb_Object,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>)
extern "C"  List_1_t2882721146 * EdgeExtensions_GetPerimeterEdges_m753000098 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, List_1_t2882747930 * ___faces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.EdgeExtensions::GetPerimeterEdges(pb_Object,ProBuilder2.Common.pb_Face[])
extern "C"  pb_EdgeU5BU5D_t3246820444* EdgeExtensions_GetPerimeterEdges_m2334520054 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, pb_FaceU5BU5D_t2958380348* ___faces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.EdgeExtensions::GetPerimeterEdges(ProBuilder2.Common.pb_Face)
extern "C"  pb_EdgeU5BU5D_t3246820444* EdgeExtensions_GetPerimeterEdges_m3053333816 (Object_t * __this /* static, unused */, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.EdgeExtensions::GetUniqueEdges(pb_Object,ProBuilder2.Common.pb_Face[])
extern "C"  pb_EdgeU5BU5D_t3246820444* EdgeExtensions_GetUniqueEdges_m1829153220 (Object_t * __this /* static, unused */, pb_Object_t3489221196 * ___pb, pb_FaceU5BU5D_t2958380348* ___faces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.EdgeExtensions::Contains(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_Edge)
extern "C"  bool EdgeExtensions_Contains_m1482849547 (Object_t * __this /* static, unused */, pb_EdgeU5BU5D_t3246820444* ___edges, pb_Edge_t2085762177 * ___edge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.EdgeExtensions::Contains(ProBuilder2.Common.pb_Edge[],System.Int32,System.Int32)
extern "C"  bool EdgeExtensions_Contains_m1869794634 (Object_t * __this /* static, unused */, pb_EdgeU5BU5D_t3246820444* ___edges, int32_t ___x, int32_t ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.EdgeExtensions::IndexOf(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>,ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  int32_t EdgeExtensions_IndexOf_m3500299693 (Object_t * __this /* static, unused */, List_1_t2882721146 * ___edges, pb_Edge_t2085762177 * ___edge, pb_IntArrayU5BU5D_t3927813275* ___sharedIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.EdgeExtensions::IndexOf(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  int32_t EdgeExtensions_IndexOf_m2986093573 (Object_t * __this /* static, unused */, pb_EdgeU5BU5D_t3246820444* ___edges, pb_Edge_t2085762177 * ___edge, pb_IntArrayU5BU5D_t3927813275* ___sharedIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.EdgeExtensions::ToIntList(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  List_1_t3644373756 * EdgeExtensions_ToIntList_m944512929 (Object_t * __this /* static, unused */, List_1_t2882721146 * ___edges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.EdgeExtensions::AllTriangles(ProBuilder2.Common.pb_Edge[])
extern "C"  Int32U5BU5D_t1809983122* EdgeExtensions_AllTriangles_m1347577245 (Object_t * __this /* static, unused */, pb_EdgeU5BU5D_t3246820444* ___edges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.EdgeExtensions::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  List_1_t3644373756 * EdgeExtensions_AllTriangles_m108998983 (Object_t * __this /* static, unused */, List_1_t2882721146 * ___edges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
