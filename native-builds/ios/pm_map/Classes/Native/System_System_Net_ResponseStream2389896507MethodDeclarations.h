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

// System.Net.ResponseStream
struct ResponseStream_t2389896507;
// System.IO.Stream
struct Stream_t1561764144;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2165724119;
// System.IO.MemoryStream
struct MemoryStream_t418716369;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "System_System_Net_HttpListenerResponse2165724119.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void System.Net.ResponseStream::.ctor(System.IO.Stream,System.Net.HttpListenerResponse,System.Boolean)
extern "C"  void ResponseStream__ctor_m3309710286 (ResponseStream_t2389896507 * __this, Stream_t1561764144 * ___stream0, HttpListenerResponse_t2165724119 * ___response1, bool ___ignore_errors2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::.cctor()
extern "C"  void ResponseStream__cctor_m1727334644 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanRead()
extern "C"  bool ResponseStream_get_CanRead_m3736899434 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanSeek()
extern "C"  bool ResponseStream_get_CanSeek_m3765654476 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ResponseStream::get_CanWrite()
extern "C"  bool ResponseStream_get_CanWrite_m402418989 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::get_Length()
extern "C"  int64_t ResponseStream_get_Length_m706405417 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::get_Position()
extern "C"  int64_t ResponseStream_get_Position_m472274220 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::set_Position(System.Int64)
extern "C"  void ResponseStream_set_Position_m4171862147 (ResponseStream_t2389896507 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Close()
extern "C"  void ResponseStream_Close_m3860341487 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.MemoryStream System.Net.ResponseStream::GetHeaders(System.Boolean)
extern "C"  MemoryStream_t418716369 * ResponseStream_GetHeaders_m1173170557 (ResponseStream_t2389896507 * __this, bool ___closing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Flush()
extern "C"  void ResponseStream_Flush_m2233429243 (ResponseStream_t2389896507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.ResponseStream::GetChunkSizeBytes(System.Int32,System.Boolean)
extern "C"  ByteU5BU5D_t4260760469* ResponseStream_GetChunkSizeBytes_m1496840376 (Il2CppObject * __this /* static, unused */, int32_t ___size0, bool ___final1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::InternalWrite(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_InternalWrite_m2466133552 (ResponseStream_t2389896507 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void ResponseStream_Write_m162353171 (ResponseStream_t2389896507 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ResponseStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseStream_BeginWrite_m1163566310 (ResponseStream_t2389896507 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::EndWrite(System.IAsyncResult)
extern "C"  void ResponseStream_EndWrite_m2049650548 (ResponseStream_t2389896507 * __this, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ResponseStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ResponseStream_Read_m1560988824 (ResponseStream_t2389896507 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ResponseStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ResponseStream_BeginRead_m234871107 (ResponseStream_t2389896507 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ResponseStream::EndRead(System.IAsyncResult)
extern "C"  int32_t ResponseStream_EndRead_m4168816747 (ResponseStream_t2389896507 * __this, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.ResponseStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t ResponseStream_Seek_m77075995 (ResponseStream_t2389896507 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ResponseStream::SetLength(System.Int64)
extern "C"  void ResponseStream_SetLength_m325425713 (ResponseStream_t2389896507 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
