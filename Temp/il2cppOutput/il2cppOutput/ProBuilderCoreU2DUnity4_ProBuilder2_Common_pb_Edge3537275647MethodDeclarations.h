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

// ProBuilder2.Common.pb_EdgeConnection
struct pb_EdgeConnection_t3537275647;
// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_t2882721146;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t3644373756;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_EdgeConnection>
struct List_1_t39267320;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face2085788961.h"
#include "mscorlib_System_Object837106420.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge3537275647.h"

// System.Void ProBuilder2.Common.pb_EdgeConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  void pb_EdgeConnection__ctor_m1857605481 (pb_EdgeConnection_t3537275647 * __this, pb_Face_t2085788961 * ___face, List_1_t2882721146 * ___edges, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeConnection::get_isValid()
extern "C"  bool pb_EdgeConnection_get_isValid_m280682702 (pb_EdgeConnection_t3537275647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeConnection::Equals(System.Object)
extern "C"  bool pb_EdgeConnection_Equals_m3653376376 (pb_EdgeConnection_t3537275647 * __this, Object_t * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeConnection::Equals(ProBuilder2.Common.pb_EdgeConnection)
extern "C"  bool pb_EdgeConnection_Equals_m4000829325 (pb_EdgeConnection_t3537275647 * __this, pb_EdgeConnection_t3537275647 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_EdgeConnection::op_Explicit(ProBuilder2.Common.pb_EdgeConnection)
extern "C"  pb_Face_t2085788961 * pb_EdgeConnection_op_Explicit_m674558928 (Object_t * __this /* static, unused */, pb_EdgeConnection_t3537275647 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_EdgeConnection::GetHashCode()
extern "C"  int32_t pb_EdgeConnection_GetHashCode_m1787104604 (pb_EdgeConnection_t3537275647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_EdgeConnection::ToString()
extern "C"  String_t* pb_EdgeConnection_ToString_m3911702518 (pb_EdgeConnection_t3537275647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_EdgeConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_EdgeConnection>)
extern "C"  List_1_t3644373756 * pb_EdgeConnection_AllTriangles_m77424750 (Object_t * __this /* static, unused */, List_1_t39267320 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
