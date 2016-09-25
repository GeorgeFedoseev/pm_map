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

// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Net.HttpConnection
struct HttpConnection_t1195895712;
// System.String
struct String_t;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t1264131149;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2165724119;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1899242073;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpConnection1195895712.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_AuthenticationSchemes4187235472.h"

// System.Void System.Net.HttpListenerContext::.ctor(System.Net.HttpConnection)
extern "C"  void HttpListenerContext__ctor_m3161078947 (HttpListenerContext_t1119969133 * __this, HttpConnection_t1195895712 * ___cnc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerContext::get_ErrorStatus()
extern "C"  int32_t HttpListenerContext_get_ErrorStatus_m2096688152 (HttpListenerContext_t1119969133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerContext::set_ErrorStatus(System.Int32)
extern "C"  void HttpListenerContext_set_ErrorStatus_m1770675621 (HttpListenerContext_t1119969133 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerContext::get_ErrorMessage()
extern "C"  String_t* HttpListenerContext_get_ErrorMessage_m4173388726 (HttpListenerContext_t1119969133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerContext::set_ErrorMessage(System.String)
extern "C"  void HttpListenerContext_set_ErrorMessage_m1669536987 (HttpListenerContext_t1119969133 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerContext::get_HaveError()
extern "C"  bool HttpListenerContext_get_HaveError_m1593519640 (HttpListenerContext_t1119969133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpConnection System.Net.HttpListenerContext::get_Connection()
extern "C"  HttpConnection_t1195895712 * HttpListenerContext_get_Connection_m3177166255 (HttpListenerContext_t1119969133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
extern "C"  HttpListenerRequest_t1264131149 * HttpListenerContext_get_Request_m378171681 (HttpListenerContext_t1119969133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
extern "C"  HttpListenerResponse_t2165724119 * HttpListenerContext_get_Response_m1061412283 (HttpListenerContext_t1119969133 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerContext::ParseAuthentication(System.Net.AuthenticationSchemes)
extern "C"  void HttpListenerContext_ParseAuthentication_m2556551100 (HttpListenerContext_t1119969133 * __this, int32_t ___expectedSchemes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::ParseBasicAuthentication(System.String)
extern "C"  Il2CppObject * HttpListenerContext_ParseBasicAuthentication_m2292684281 (HttpListenerContext_t1119969133 * __this, String_t* ___authData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
