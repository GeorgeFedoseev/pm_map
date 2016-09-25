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

// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2165724119;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpListenerResponse2165724119.h"
#include "mscorlib_System_String7231557.h"

// System.Void ResponseExtension::WriteString(System.Net.HttpListenerResponse,System.String,System.String)
extern "C"  void ResponseExtension_WriteString_m3292035842 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t2165724119 * ___response0, String_t* ___input1, String_t* ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResponseExtension::WriteBytes(System.Net.HttpListenerResponse,System.Byte[])
extern "C"  void ResponseExtension_WriteBytes_m1522574885 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t2165724119 * ___response0, ByteU5BU5D_t4260760469* ___bytes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ResponseExtension::WriteFile(System.Net.HttpListenerResponse,System.String,System.String,System.Boolean)
extern "C"  void ResponseExtension_WriteFile_m3019063142 (Il2CppObject * __this /* static, unused */, HttpListenerResponse_t2165724119 * ___response0, String_t* ___path1, String_t* ___type2, bool ___download3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
