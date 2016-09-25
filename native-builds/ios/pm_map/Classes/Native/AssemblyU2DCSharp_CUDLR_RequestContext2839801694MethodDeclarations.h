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

// CUDLR.RequestContext
struct RequestContext_t2839801694;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t1264131149;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2165724119;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpListenerContext1119969133.h"

// System.Void CUDLR.RequestContext::.ctor(System.Net.HttpListenerContext)
extern "C"  void RequestContext__ctor_m1759627490 (RequestContext_t2839801694 * __this, HttpListenerContext_t1119969133 * ___ctx0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerRequest CUDLR.RequestContext::get_Request()
extern "C"  HttpListenerRequest_t1264131149 * RequestContext_get_Request_m2308135311 (RequestContext_t2839801694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerResponse CUDLR.RequestContext::get_Response()
extern "C"  HttpListenerResponse_t2165724119 * RequestContext_get_Response_m3325555695 (RequestContext_t2839801694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
