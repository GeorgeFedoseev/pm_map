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

// System.Net.HttpListenerException
struct HttpListenerException_t3439113485;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"

// System.Void System.Net.HttpListenerException::.ctor()
extern "C"  void HttpListenerException__ctor_m326954073 (HttpListenerException_t3439113485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerException::.ctor(System.Int32,System.String)
extern "C"  void HttpListenerException__ctor_m3589241574 (HttpListenerException_t3439113485 * __this, int32_t ___errorCode0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HttpListenerException__ctor_m425580058 (HttpListenerException_t3439113485 * __this, SerializationInfo_t2185721892 * ___serializationInfo0, StreamingContext_t2761351129  ___streamingContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
