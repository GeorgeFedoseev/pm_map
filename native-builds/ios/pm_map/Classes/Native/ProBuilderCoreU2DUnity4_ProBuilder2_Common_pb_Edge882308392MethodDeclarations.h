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

// ProBuilder2.Common.pb_Edge
struct pb_Edge_t882308392;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;
// ProBuilder2.Common.pb_Edge[]
struct pb_EdgeU5BU5D_t1297549625;
// pb_Object
struct pb_Object_t3489221196;
// ProBuilder2.Common.pb_Face[]
struct pb_FaceU5BU5D_t1009109529;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge882308392.h"
#include "mscorlib_System_Object4170816371.h"
#include "ProBuilderCoreU2DUnity4_pb_Object3489221196.h"

// System.Void ProBuilder2.Common.pb_Edge::.ctor(System.Int32,System.Int32)
extern "C"  void pb_Edge__ctor_m862546379 (pb_Edge_t882308392 * __this, int32_t ____x0, int32_t ____y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ProBuilder2.Common.pb_Edge::.ctor(ProBuilder2.Common.pb_Edge)
extern "C"  void pb_Edge__ctor_m322924714 (pb_Edge_t882308392 * __this, pb_Edge_t882308392 * ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::IsValid()
extern "C"  bool pb_Edge_IsValid_m1897893013 (pb_Edge_t882308392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Edge::ToString()
extern "C"  String_t* pb_Edge_ToString_m1854649272 (pb_Edge_t882308392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::Equals(ProBuilder2.Common.pb_Edge)
extern "C"  bool pb_Edge_Equals_m3474337485 (pb_Edge_t882308392 * __this, pb_Edge_t882308392 * ___edge0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::Equals(System.Object)
extern "C"  bool pb_Edge_Equals_m1831922870 (pb_Edge_t882308392 * __this, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_Edge::GetHashCode()
extern "C"  int32_t pb_Edge_GetHashCode_m3505739290 (pb_Edge_t882308392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ProBuilder2.Common.pb_Edge::ToArray()
extern "C"  Int32U5BU5D_t3230847821* pb_Edge_ToArray_m3683056009 (pb_Edge_t882308392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::Equals(ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  bool pb_Edge_Equals_m1882057433 (pb_Edge_t882308392 * __this, pb_Edge_t882308392 * ___b0, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::Contains(System.Int32)
extern "C"  bool pb_Edge_Contains_m323452111 (pb_Edge_t882308392 * __this, int32_t ___a0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::Contains(System.Int32,ProBuilder2.Common.pb_IntArray[])
extern "C"  bool pb_Edge_Contains_m1579017495 (pb_Edge_t882308392 * __this, int32_t ___a0, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Edge::GetUniversalEdges(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_EdgeU5BU5D_t1297549625* pb_Edge_GetUniversalEdges_m266477131 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_Edge::GetUniversalEdge(ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_Edge_t882308392 * pb_Edge_GetUniversalEdge_m310554190 (Il2CppObject * __this /* static, unused */, pb_Edge_t882308392 * ___edge0, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge ProBuilder2.Common.pb_Edge::GetLocalEdge(pb_Object,ProBuilder2.Common.pb_Edge)
extern "C"  pb_Edge_t882308392 * pb_Edge_GetLocalEdge_m4042545784 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, pb_Edge_t882308392 * ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::ValidateEdge(pb_Object,ProBuilder2.Common.pb_Edge,ProBuilder2.Common.pb_Edge&)
extern "C"  bool pb_Edge_ValidateEdge_m4123013912 (Il2CppObject * __this /* static, unused */, pb_Object_t3489221196 * ___pb0, pb_Edge_t882308392 * ___edge1, pb_Edge_t882308392 ** ___validEdge2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Edge::GetLocalEdges_Fast(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_EdgeU5BU5D_t1297549625* pb_Edge_GetLocalEdges_Fast_m1834166570 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Edge[] ProBuilder2.Common.pb_Edge::AllEdges(ProBuilder2.Common.pb_Face[])
extern "C"  pb_EdgeU5BU5D_t1297549625* pb_Edge_AllEdges_m3833010775 (Il2CppObject * __this /* static, unused */, pb_FaceU5BU5D_t1009109529* ___faces0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge::ContainsDuplicateFast(ProBuilder2.Common.pb_Edge[],ProBuilder2.Common.pb_Edge)
extern "C"  bool pb_Edge_ContainsDuplicateFast_m1304088157 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, pb_Edge_t882308392 * ___edge1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] ProBuilder2.Common.pb_Edge::VerticesWithEdges(ProBuilder2.Common.pb_Edge[],UnityEngine.Vector3[])
extern "C"  Vector3U5BU5D_t215400611* pb_Edge_VerticesWithEdges_m3763113078 (Il2CppObject * __this /* static, unused */, pb_EdgeU5BU5D_t1297549625* ___edges0, Vector3U5BU5D_t215400611* ___vertices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
