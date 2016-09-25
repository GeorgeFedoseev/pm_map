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

// System.String
struct String_t;
// ProBuilder2.Common.pb_Edge/pb_Range
struct pb_Range_t3520127022;
struct pb_Range_t3520127022_marshaled_pinvoke;
struct pb_Range_t3520127022_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "ProBuilderCoreU2DUnity4_ProBuilder2_Common_pb_Edge3520127022.h"

// System.Void ProBuilder2.Common.pb_Edge/pb_Range::.ctor(System.Int32,System.Int32)
extern "C"  void pb_Range__ctor_m495676730 (pb_Range_t3520127022 * __this, int32_t ___min0, int32_t ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ProBuilder2.Common.pb_Edge/pb_Range::Contains(System.Int32)
extern "C"  bool pb_Range_Contains_m2758638034 (pb_Range_t3520127022 * __this, int32_t ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ProBuilder2.Common.pb_Edge/pb_Range::ToString()
extern "C"  String_t* pb_Range_ToString_m921549697 (pb_Range_t3520127022 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct pb_Range_t3520127022;
struct pb_Range_t3520127022_marshaled_pinvoke;

extern "C" void pb_Range_t3520127022_marshal_pinvoke(const pb_Range_t3520127022& unmarshaled, pb_Range_t3520127022_marshaled_pinvoke& marshaled);
extern "C" void pb_Range_t3520127022_marshal_pinvoke_back(const pb_Range_t3520127022_marshaled_pinvoke& marshaled, pb_Range_t3520127022& unmarshaled);
extern "C" void pb_Range_t3520127022_marshal_pinvoke_cleanup(pb_Range_t3520127022_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct pb_Range_t3520127022;
struct pb_Range_t3520127022_marshaled_com;

extern "C" void pb_Range_t3520127022_marshal_com(const pb_Range_t3520127022& unmarshaled, pb_Range_t3520127022_marshaled_com& marshaled);
extern "C" void pb_Range_t3520127022_marshal_com_back(const pb_Range_t3520127022_marshaled_com& marshaled, pb_Range_t3520127022& unmarshaled);
extern "C" void pb_Range_t3520127022_marshal_com_cleanup(pb_Range_t3520127022_marshaled_com& marshaled);
