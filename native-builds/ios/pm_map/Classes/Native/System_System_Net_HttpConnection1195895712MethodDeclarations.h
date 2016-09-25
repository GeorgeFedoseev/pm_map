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

// System.Net.HttpConnection
struct HttpConnection_t1195895712;
// System.Net.Sockets.Socket
struct Socket_t2157335841;
// System.Net.EndPointListener
struct EndPointListener_t293255011;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t160474609;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.String
struct String_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2123960758;
// System.Net.ListenerPrefix
struct ListenerPrefix_t3256917632;
// System.Net.RequestStream
struct RequestStream_t1980644777;
// System.Net.ResponseStream
struct ResponseStream_t2389896507;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket2157335841.h"
#include "System_System_Net_EndPointListener293255011.h"
#include "System_System_Security_Cryptography_X509Certificate160474609.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_ListenerPrefix3256917632.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"

// System.Void System.Net.HttpConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPointListener,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void HttpConnection__ctor_m157586737 (HttpConnection_t1195895712 * __this, Socket_t2157335841 * ___sock0, EndPointListener_t293255011 * ___epl1, bool ___secure2, X509Certificate2_t160474609 * ___cert3, AsymmetricAlgorithm_t1241690687 * ___key4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Net.HttpConnection::OnPVKSelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t1241690687 * HttpConnection_OnPVKSelection_m1647070585 (HttpConnection_t1195895712 * __this, X509Certificate_t3076817455 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Init()
extern "C"  void HttpConnection_Init_m3236084416 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpConnection::get_ChunkedUses()
extern "C"  int32_t HttpConnection_get_ChunkedUses_m472196017 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpConnection::get_LocalEndPoint()
extern "C"  IPEndPoint_t2123960758 * HttpConnection_get_LocalEndPoint_m790454736 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpConnection::get_IsSecure()
extern "C"  bool HttpConnection_get_IsSecure_m59340900 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::set_Prefix(System.Net.ListenerPrefix)
extern "C"  void HttpConnection_set_Prefix_m701818109 (HttpConnection_t1195895712 * __this, ListenerPrefix_t3256917632 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::BeginReadRequest()
extern "C"  void HttpConnection_BeginReadRequest_m876041952 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.RequestStream System.Net.HttpConnection::GetRequestStream(System.Boolean,System.Int64)
extern "C"  RequestStream_t1980644777 * HttpConnection_GetRequestStream_m801369976 (HttpConnection_t1195895712 * __this, bool ___chunked0, int64_t ___contentlength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ResponseStream System.Net.HttpConnection::GetResponseStream()
extern "C"  ResponseStream_t2389896507 * HttpConnection_GetResponseStream_m3454325227 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::OnRead(System.IAsyncResult)
extern "C"  void HttpConnection_OnRead_m383546622 (HttpConnection_t1195895712 * __this, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpConnection::ProcessInput(System.IO.MemoryStream)
extern "C"  bool HttpConnection_ProcessInput_m2249002187 (HttpConnection_t1195895712 * __this, MemoryStream_t418716369 * ___ms0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpConnection::ReadLine(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C"  String_t* HttpConnection_ReadLine_m3415320711 (HttpConnection_t1195895712 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___len2, int32_t* ___used3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::SendError(System.String,System.Int32)
extern "C"  void HttpConnection_SendError_m1549063079 (HttpConnection_t1195895712 * __this, String_t* ___msg0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::SendError()
extern "C"  void HttpConnection_SendError_m1277326610 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Unbind()
extern "C"  void HttpConnection_Unbind_m3846236870 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Close()
extern "C"  void HttpConnection_Close_m452625962 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::CloseSocket()
extern "C"  void HttpConnection_CloseSocket_m1091417661 (HttpConnection_t1195895712 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Close(System.Boolean)
extern "C"  void HttpConnection_Close_m4152240673 (HttpConnection_t1195895712 * __this, bool ___force_close0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
