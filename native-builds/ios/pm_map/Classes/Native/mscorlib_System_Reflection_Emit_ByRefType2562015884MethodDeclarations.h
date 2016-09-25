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

// System.Reflection.Emit.ByRefType
struct ByRefType_t2562015884;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Reflection.Emit.ByRefType::.ctor(System.Type)
extern "C"  void ByRefType__ctor_m2862936166 (ByRefType_t2562015884 * __this, Type_t * ___elementType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ByRefType::IsByRefImpl()
extern "C"  bool ByRefType_IsByRefImpl_m1928017281 (ByRefType_t2562015884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::get_BaseType()
extern "C"  Type_t * ByRefType_get_BaseType_m1370407999 (ByRefType_t2562015884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ByRefType::FormatName(System.String)
extern "C"  String_t* ByRefType_FormatName_m1652232140 (ByRefType_t2562015884 * __this, String_t* ___elementName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ByRefType::MakeByRefType()
extern "C"  Type_t * ByRefType_MakeByRefType_m1268406335 (ByRefType_t2562015884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
