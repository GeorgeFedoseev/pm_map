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

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t1264131149;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.String
struct String_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2791941106;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Version
struct Version_t763695022;
// System.Uri
struct Uri_t1116831938;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpListenerContext1119969133.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Net.HttpListenerRequest::.ctor(System.Net.HttpListenerContext)
extern "C"  void HttpListenerRequest__ctor_m657808310 (HttpListenerRequest_t1264131149 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::.cctor()
extern "C"  void HttpListenerRequest__cctor_m3051050868 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::SetRequestLine(System.String)
extern "C"  void HttpListenerRequest_SetRequestLine_m2504697622 (HttpListenerRequest_t1264131149 * __this, String_t* ___req0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::CreateQueryString(System.String)
extern "C"  void HttpListenerRequest_CreateQueryString_m1416761070 (HttpListenerRequest_t1264131149 * __this, String_t* ___query0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::FinishInitialization()
extern "C"  void HttpListenerRequest_FinishInitialization_m3789342238 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::Unquote(System.String)
extern "C"  String_t* HttpListenerRequest_Unquote_m2735301035 (Il2CppObject * __this /* static, unused */, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::AddHeader(System.String)
extern "C"  void HttpListenerRequest_AddHeader_m122889885 (HttpListenerRequest_t1264131149 * __this, String_t* ___header0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::FlushInput()
extern "C"  bool HttpListenerRequest_FlushInput_m3611663495 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_HasEntityBody()
extern "C"  bool HttpListenerRequest_get_HasEntityBody_m1543928535 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_Headers()
extern "C"  NameValueCollection_t2791941106 * HttpListenerRequest_get_Headers_m2606027260 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_HttpMethod()
extern "C"  String_t* HttpListenerRequest_get_HttpMethod_m3279085120 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpListenerRequest::get_InputStream()
extern "C"  Stream_t1561764144 * HttpListenerRequest_get_InputStream_m2143746 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsSecureConnection()
extern "C"  bool HttpListenerRequest_get_IsSecureConnection_m1387676521 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpListenerRequest::get_LocalEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpListenerRequest_get_LocalEndPoint_m193597671 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpListenerRequest::get_ProtocolVersion()
extern "C"  Version_t763695022 * HttpListenerRequest_get_ProtocolVersion_m4199372360 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_QueryString()
extern "C"  NameValueCollection_t2791941106 * HttpListenerRequest_get_QueryString_m2779414063 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpListenerRequest::get_Url()
extern "C"  Uri_t1116831938 * HttpListenerRequest_get_Url_m3787620459 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserHostAddress()
extern "C"  String_t* HttpListenerRequest_get_UserHostAddress_m1388032748 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserHostName()
extern "C"  String_t* HttpListenerRequest_get_UserHostName_m3525444917 (HttpListenerRequest_t1264131149 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
