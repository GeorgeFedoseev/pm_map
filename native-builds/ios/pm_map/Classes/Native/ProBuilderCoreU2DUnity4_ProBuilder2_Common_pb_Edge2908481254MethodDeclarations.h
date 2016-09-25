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
struct pb_EdgeConnection_t2908481254;
// ProBuilder2.Common.pb_Face
struct pb_Face_t882335176;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_t2250493944;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_EdgeConnection>
struct List_1_t4276666806;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Face882335176.h"
#include "mscorlib_System_Object4170816371.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge2908481254.h"

// System.Void ProBuilder2.Common.pb_EdgeConnection::.ctor(ProBuilder2.Common.pb_Face,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>)
extern "C"  void pb_EdgeConnection__ctor_m1857605481 (pb_EdgeConnection_t2908481254 * __this, pb_Face_t882335176 * ___face0, List_1_t2250493944 * ___edges1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeConnection::get_isValid()
extern "C"  bool pb_EdgeConnection_get_isValid_m280682702 (pb_EdgeConnection_t2908481254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeConnection::Equals(System.Object)
extern "C"  bool pb_EdgeConnection_Equals_m3653376376 (pb_EdgeConnection_t2908481254 * __this, Il2CppObject * ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_EdgeConnection::Equals(ProBuilder2.Common.pb_EdgeConnection)
extern "C"  bool pb_EdgeConnection_Equals_m4000829325 (pb_EdgeConnection_t2908481254 * __this, pb_EdgeConnection_t2908481254 * ___fc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_EdgeConnection::op_Explicit(ProBuilder2.Common.pb_EdgeConnection)
extern "C"  pb_Face_t882335176 * pb_EdgeConnection_op_Explicit_m674558928 (Il2CppObject * __this /* static, unused */, pb_EdgeConnection_t2908481254 * ___fc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ProBuilder2.Common.pb_EdgeConnection::GetHashCode()
extern "C"  int32_t pb_EdgeConnection_GetHashCode_m1787104604 (pb_EdgeConnection_t2908481254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_EdgeConnection::ToString()
extern "C"  String_t* pb_EdgeConnection_ToString_m3911702518 (pb_EdgeConnection_t2908481254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> ProBuilder2.Common.pb_EdgeConnection::AllTriangles(System.Collections.Generic.List`1<ProBuilder2.Common.pb_EdgeConnection>)
extern "C"  List_1_t2522024052 * pb_EdgeConnection_AllTriangles_m77424750 (Il2CppObject * __this /* static, unused */, List_1_t4276666806 * ___ec0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
