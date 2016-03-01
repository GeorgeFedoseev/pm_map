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

// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// UnityEngine.Material
struct Material_t1886596500;
// pb_UV
struct pb_UV_t106447886;
// ProBuilder2.Common.pb_EdgeConnection
struct pb_EdgeConnection_t3537275647;
// ProBuilder2.Common.pb_VertexConnection
struct pb_VertexConnection_t3556969190;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t3246820444;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t2958380348;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>
struct List_1_t2882747930;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "ProBuilderCoreU2DUnity4_pb_UV106447886.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"

// System.Void ProBuilder2.Common.pb_Face::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void pb_Face_GetObjectData_m2890644281 (pb_Face_t2085788961 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void pb_Face__ctor_m414846940 (pb_Face_t2085788961 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::.ctor(System.Int32[])
extern "C"  void pb_Face__ctor_m2838294026 (pb_Face_t2085788961 * __this, Int32U5BU5D_t1809983122* ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::.ctor(System.Int32[],UnityEngine.Material,pb_UV,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void pb_Face__ctor_m3187171298 (pb_Face_t2085788961 * __this, Int32U5BU5D_t1809983122* ___i, Material_t1886596500 * ___m, pb_UV_t106447886 * ___u, int32_t ___smoothingGroup, int32_t ___textureGroup, int32_t ___elementGroup, bool ___manualUV, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::.ctor(ProBuilder2.Common.pb_Face)
extern "C"  void pb_Face__ctor_m1773530986 (pb_Face_t2085788961 * __this, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_EdgeConnection ProBuilder2.Common.pb_Face::op_Explicit(ProBuilder2.Common.pb_Face)
extern "C"  pb_EdgeConnection_t3537275647 * pb_Face_op_Explicit_m2569500522 (Object_t * __this /* static, unused */, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_VertexConnection ProBuilder2.Common.pb_Face::op_Explicit(ProBuilder2.Common.pb_Face)
extern "C"  pb_VertexConnection_t3556969190 * pb_Face_op_Explicit_m2525170577 (Object_t * __this /* static, unused */, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::get_indices()
extern "C"  Int32U5BU5D_t1809983122* pb_Face_get_indices_m3163554601 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::get_distinctIndices()
extern "C"  Int32U5BU5D_t1809983122* pb_Face_get_distinctIndices_m1475100301 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::get_edges()
extern "C"  pb_EdgeU5BU5D_t3246820444* pb_Face_get_edges_m2652032250 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Face::get_smoothingGroup()
extern "C"  int32_t pb_Face_get_smoothingGroup_m1811224365 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// pb_UV ProBuilder2.Common.pb_Face::get_uv()
extern "C"  pb_UV_t106447886 * pb_Face_get_uv_m372461208 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ProBuilder2.Common.pb_Face::get_material()
extern "C"  Material_t1886596500 * pb_Face_get_material_m4052961274 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material ProBuilder2.Common.pb_Face::get_mat()
extern "C"  Material_t1886596500 * pb_Face_get_mat_m2858472335 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::SetUV(pb_UV)
extern "C"  void pb_Face_SetUV_m1868666344 (pb_Face_t2085788961 * __this, pb_UV_t106447886 * ___u, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::SetMaterial(UnityEngine.Material)
extern "C"  void pb_Face_SetMaterial_m300716932 (pb_Face_t2085788961 * __this, Material_t1886596500 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::SetSmoothingGroup(System.Int32)
extern "C"  void pb_Face_SetSmoothingGroup_m1908009911 (pb_Face_t2085788961 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Face::isValid()
extern "C"  bool pb_Face_isValid_m4091764757 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder2.Common.pb_Face::GetDistinctVertices(UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t3227571696* pb_Face_GetDistinctVertices_m4040322123 (pb_Face_t2085788961 * __this, Vector3U5BU5D_t3227571696* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::GetTriangle(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* pb_Face_GetTriangle_m3323661978 (pb_Face_t2085788961 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::GetEdges()
extern "C"  pb_EdgeU5BU5D_t3246820444* pb_Face_GetEdges_m1422679349 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::SetIndices(System.Int32[])
extern "C"  void pb_Face_SetIndices_m1420975645 (pb_Face_t2085788961 * __this, Int32U5BU5D_t1809983122* ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::ShiftIndices(System.Int32)
extern "C"  void pb_Face_ShiftIndices_m1186438303 (pb_Face_t2085788961 * __this, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Face::SmallestIndexValue()
extern "C"  int32_t pb_Face_SmallestIndexValue_m2442179991 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::ShiftIndicesToZero()
extern "C"  void pb_Face_ShiftIndicesToZero_m1665518001 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::ReverseIndices()
extern "C"  void pb_Face_ReverseIndices_m2982305774 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Face::RebuildCaches()
extern "C"  void pb_Face_RebuildCaches_m1343433829 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Face::CacheEdges()
extern "C"  pb_EdgeU5BU5D_t3246820444* pb_Face_CacheEdges_m1280794249 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::CacheDistinctIndices()
extern "C"  Int32U5BU5D_t1809983122* pb_Face_CacheDistinctIndices_m2086886752 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Face::Contains(System.Int32[])
extern "C"  bool pb_Face_Contains_m550841549 (pb_Face_t2085788961 * __this, Int32U5BU5D_t1809983122* ___triangle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Face::Equals(ProBuilder2.Common.pb_Face)
extern "C"  bool pb_Face_Equals_m1173582541 (pb_Face_t2085788961 * __this, pb_Face_t2085788961 * ___face, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::AllTriangles(ProBuilder2.Common.pb_Face[])
extern "C"  Int32U5BU5D_t1809983122* pb_Face_AllTriangles_m1840324270 (Object_t * __this /* static, unused */, pb_FaceU5BU5D_t2958380348* ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>)
extern "C"  Int32U5BU5D_t1809983122* pb_Face_AllTriangles_m2404663394 (Object_t * __this /* static, unused */, List_1_t2882747930 * ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Face::AllTrianglesDistinct(ProBuilder2.Common.pb_Face[])
extern "C"  Int32U5BU5D_t1809983122* pb_Face_AllTrianglesDistinct_m3649018058 (Object_t * __this /* static, unused */, pb_FaceU5BU5D_t2958380348* ___q, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_Face::AllTrianglesDistinct(System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>)
extern "C"  List_1_t3644373756 * pb_Face_AllTrianglesDistinct_m529248850 (Object_t * __this /* static, unused */, List_1_t2882747930 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Face::ToString()
extern "C"  String_t* pb_Face_ToString_m3138661464 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Face::ToStringDetailed()
extern "C"  String_t* pb_Face_ToStringDetailed_m1884531240 (pb_Face_t2085788961 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
