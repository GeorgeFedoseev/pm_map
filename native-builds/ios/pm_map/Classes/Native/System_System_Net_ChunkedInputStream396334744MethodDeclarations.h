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

// System.Net.ChunkedInputStream
struct ChunkedInputStream_t396334744;
// System.Net.HttpListenerContext
struct HttpListenerContext_t1119969133;
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
#include "System_System_Net_HttpListenerContext1119969133.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void System.Net.ChunkedInputStream::.ctor(System.Net.HttpListenerContext,System.IO.Stream,System.Byte[],System.Int32,System.Int32)
extern "C"  void ChunkedInputStream__ctor_m974228007 (ChunkedInputStream_t396334744 * __this, HttpListenerContext_t1119969133 * ___context0, Stream_t1561764144 * ___stream1, ByteU5BU5D_t4260760469* ___buffer2, int32_t ___offset3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkedInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t ChunkedInputStream_Read_m1501527579 (ChunkedInputStream_t396334744 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.ChunkedInputStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ChunkedInputStream_BeginRead_m4122821062 (ChunkedInputStream_t396334744 * __this, ByteU5BU5D_t4260760469* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1369114871 * ___cback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkedInputStream::OnRead(System.IAsyncResult)
extern "C"  void ChunkedInputStream_OnRead_m1738191238 (ChunkedInputStream_t396334744 * __this, Il2CppObject * ___base_ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ChunkedInputStream::EndRead(System.IAsyncResult)
extern "C"  int32_t ChunkedInputStream_EndRead_m617776264 (ChunkedInputStream_t396334744 * __this, Il2CppObject * ___ares0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ChunkedInputStream::Close()
extern "C"  void ChunkedInputStream_Close_m1384011442 (ChunkedInputStream_t396334744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
