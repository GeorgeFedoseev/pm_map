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

// ProBuilder2.Common.pb_VertexConnection
struct pb_VertexConnection_t580978957;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3984225016;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct List_1_t1949164509;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"
#include "mscorlib_System_Object4170816371.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Verte580978957.h"

// System.Void ProBuilder2.Common.pb_VertexConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void pb_VertexConnection__ctor_m174483520 (pb_VertexConnection_t580978957 * __this, pb_Face_t882335176 * ___face0, List_1_t2522024052 * ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_VertexConnection::get_isValid()
extern "C"  bool pb_VertexConnection_get_isValid_m3497325319 (pb_VertexConnection_t580978957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_VertexConnection ProBuilder2.Common.pb_VertexConnection::Distinct(ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_VertexConnection_t580978957 * pb_VertexConnection_Distinct_m2025408051 (pb_VertexConnection_t580978957 * __this, pb_IntArrayU5BU5D_t3984225016* ___sharedIndices0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(System.Object)
extern "C"  bool pb_VertexConnection_Equals_m310829745 (pb_VertexConnection_t580978957 * __this, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(ProBuilder2.Common.pb_VertexConnection)
extern "C"  bool pb_VertexConnection_Equals_m1787796077 (pb_VertexConnection_t580978957 * __this, pb_VertexConnection_t580978957 * ___vc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::op_Implicit(ProBuilder2.Common.pb_VertexConnection)
extern "C"  pb_Face_t882335176 * pb_VertexConnection_op_Implicit_m3363162419 (Il2CppObject * __this /* static, unused */, pb_VertexConnection_t580978957 * ___vc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_VertexConnection::GetHashCode()
extern "C"  int32_t pb_VertexConnection_GetHashCode_m3176345109 (pb_VertexConnection_t580978957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_VertexConnection::ToString()
extern "C"  String_t* pb_VertexConnection_ToString_m1809371421 (pb_VertexConnection_t580978957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>)
extern "C"  List_1_t2522024052 * pb_VertexConnection_AllTriangles_m2219891150 (Il2CppObject * __this /* static, unused */, List_1_t1949164509 * ___vcs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
