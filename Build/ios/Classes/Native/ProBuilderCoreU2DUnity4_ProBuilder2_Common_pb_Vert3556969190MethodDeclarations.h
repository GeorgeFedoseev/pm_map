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
struct pb_VertexConnection_t3556969190;
// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// ProBuilder2.Common.pb_IntArray[]
struct pb_IntArrayU5BU5D_t3927813275;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>
struct List_1_t58960863;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"
#include "mscorlib_System_Object837106420.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Vert3556969190.h"

// System.Void ProBuilder2.Common.pb_VertexConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<System.Int32>)
extern "C"  void pb_VertexConnection__ctor_m174483520 (pb_VertexConnection_t3556969190 * __this, pb_Face_t2085788961 * ___face, List_1_t3644373756 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_VertexConnection::get_isValid()
extern "C"  bool pb_VertexConnection_get_isValid_m3497325319 (pb_VertexConnection_t3556969190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_VertexConnection ProBuilder2.Common.pb_VertexConnection::Distinct(ProBuilder2.Common.pb_IntArray[])
extern "C"  pb_VertexConnection_t3556969190 * pb_VertexConnection_Distinct_m2025408051 (pb_VertexConnection_t3556969190 * __this, pb_IntArrayU5BU5D_t3927813275* ___sharedIndices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(System.Object)
extern "C"  bool pb_VertexConnection_Equals_m310829745 (pb_VertexConnection_t3556969190 * __this, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_VertexConnection::Equals(ProBuilder2.Common.pb_VertexConnection)
extern "C"  bool pb_VertexConnection_Equals_m1787796077 (pb_VertexConnection_t3556969190 * __this, pb_VertexConnection_t3556969190 * ___vc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_VertexConnection::op_Implicit(ProBuilder2.Common.pb_VertexConnection)
extern "C"  pb_Face_t2085788961 * pb_VertexConnection_op_Implicit_m3363162419 (Object_t * __this /* static, unused */, pb_VertexConnection_t3556969190 * ___vc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_VertexConnection::GetHashCode()
extern "C"  int32_t pb_VertexConnection_GetHashCode_m3176345109 (pb_VertexConnection_t3556969190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_VertexConnection::ToString()
extern "C"  String_t* pb_VertexConnection_ToString_m1809371421 (pb_VertexConnection_t3556969190 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_VertexConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_VertexConnection>)
extern "C"  List_1_t3644373756 * pb_VertexConnection_AllTriangles_m2219891150 (Object_t * __this /* static, unused */, List_1_t58960863 * ___vcs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
