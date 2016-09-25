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

// System.Net.RequestStream
struct RequestStream_t1980644777;
// System.IO.Stream
struct Stream_t1561764144;
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
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_SeekOrigin4120335598.h"

// System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void RequestStream__ctor_m870094199 (RequestStream_t1980644777 * __this, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::.ctor(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Int64)
extern "C"  void RequestStream__ctor_m4114181185 (RequestStream_t1980644777 * __this, Stream_t1561764144 * ___stream0, ByteU5BU5D_t4260760469* ___buffer1, int32_t ___offset2, int32_t ___length3, int64_t ___contentlength4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.RequestStream::get_CanRead()
extern "C"  bool RequestStream_get_CanRead_m3676787426 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.RequestStream::get_CanSeek()
extern "C"  bool RequestStream_get_CanSeek_m3705542468 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.RequestStream::get_CanWrite()
extern "C"  bool RequestStream_get_CanWrite_m2833914037 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.RequestStream::get_Length()
extern "C"  int64_t RequestStream_get_Length_m1131320327 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.RequestStream::get_Position()
extern "C"  int64_t RequestStream_get_Position_m793609610 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::set_Position(System.Int64)
extern "C"  void RequestStream_set_Position_m3942748063 (RequestStream_t1980644777 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::Close()
extern "C"  void RequestStream_Close_m3966443859 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::Flush()
extern "C"  void RequestStream_Flush_m2339531615 (RequestStream_t1980644777 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.RequestStream::FillFromBuffer(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RequestStream_FillFromBuffer_m1808546341 (RequestStream_t1980644777 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___off1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.RequestStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t RequestStream_Read_m2771831196 (RequestStream_t1980644777 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.RequestStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RequestStream_BeginRead_m257165087 (RequestStream_t1980644777 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.RequestStream::EndRead(System.IAsyncResult)
extern "C"  int32_t RequestStream_EndRead_m2628117223 (RequestStream_t1980644777 * __this, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.RequestStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t RequestStream_Seek_m1756588925 (RequestStream_t1980644777 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::SetLength(System.Int64)
extern "C"  void RequestStream_SetLength_m1113018517 (RequestStream_t1980644777 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void RequestStream_Write_m667593007 (RequestStream_t1980644777 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.RequestStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RequestStream_BeginWrite_m1854679690 (RequestStream_t1980644777 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.RequestStream::EndWrite(System.IAsyncResult)
extern "C"  void RequestStream_EndWrite_m1215007448 (RequestStream_t1980644777 * __this, Il2CppObject * ___async_result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
