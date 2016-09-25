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
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t1958609721;
// System.IO.Stream
struct Stream_t1561764144;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IO.MemoryStream
struct MemoryStream_t418716369;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_HttpListenerContext1119969133.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_MemoryStream418716369.h"

// System.Void System.Net.HttpListenerResponse::.ctor(System.Net.HttpListenerContext)
extern "C"  void HttpListenerResponse__ctor_m3672574682 (HttpListenerResponse_t2165724119 * __this, HttpListenerContext_t1119969133 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::System.IDisposable.Dispose()
extern "C"  void HttpListenerResponse_System_IDisposable_Dispose_m117353026 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerResponse::get_ForceCloseChunked()
extern "C"  bool HttpListenerResponse_get_ForceCloseChunked_m3197888583 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.HttpListenerResponse::get_ContentEncoding()
extern "C"  Encoding_t2012439129 * HttpListenerResponse_get_ContentEncoding_m3814425672 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_ContentLength64(System.Int64)
extern "C"  void HttpListenerResponse_set_ContentLength64_m3619769165 (HttpListenerResponse_t2165724119 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_ContentType(System.String)
extern "C"  void HttpListenerResponse_set_ContentType_m941632273 (HttpListenerResponse_t2165724119 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpListenerResponse::get_Headers()
extern "C"  WebHeaderCollection_t1958609721 * HttpListenerResponse_get_Headers_m744743016 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpListenerResponse::get_OutputStream()
extern "C"  Stream_t1561764144 * HttpListenerResponse_get_OutputStream_m3472117019 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerResponse::get_SendChunked()
extern "C"  bool HttpListenerResponse_get_SendChunked_m983497260 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_SendChunked(System.Boolean)
extern "C"  void HttpListenerResponse_set_SendChunked_m704945433 (HttpListenerResponse_t2165724119 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerResponse::get_StatusCode()
extern "C"  int32_t HttpListenerResponse_get_StatusCode_m378086911 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_StatusCode(System.Int32)
extern "C"  void HttpListenerResponse_set_StatusCode_m3923089268 (HttpListenerResponse_t2165724119 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerResponse::GetStatusDescription(System.Int32)
extern "C"  String_t* HttpListenerResponse_GetStatusDescription_m2443051689 (Il2CppObject * __this /* static, unused */, int32_t ___code0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::set_StatusDescription(System.String)
extern "C"  void HttpListenerResponse_set_StatusDescription_m2005716634 (HttpListenerResponse_t2165724119 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::AddHeader(System.String,System.String)
extern "C"  void HttpListenerResponse_AddHeader_m3127258485 (HttpListenerResponse_t2165724119 * __this, String_t* ___name0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Close(System.Boolean)
extern "C"  void HttpListenerResponse_Close_m2638037706 (HttpListenerResponse_t2165724119 * __this, bool ___force0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Close()
extern "C"  void HttpListenerResponse_Close_m4013034131 (HttpListenerResponse_t2165724119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::Close(System.Byte[],System.Boolean)
extern "C"  void HttpListenerResponse_Close_m4126075047 (HttpListenerResponse_t2165724119 * __this, ByteU5BU5D_t4260760469* ___responseEntity0, bool ___willBlock1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerResponse::SendHeaders(System.Boolean,System.IO.MemoryStream)
extern "C"  void HttpListenerResponse_SendHeaders_m1695644076 (HttpListenerResponse_t2165724119 * __this, bool ___closing0, MemoryStream_t418716369 * ___ms1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
