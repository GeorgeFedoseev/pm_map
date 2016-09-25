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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct TlsClientHello_t1051859738;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientHello__ctor_m2687142424 (TlsClientHello_t1051859738 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::Update()
extern "C"  void TlsClientHello_Update_m3041580911 (TlsClientHello_t1051859738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsSsl3()
extern "C"  void TlsClientHello_ProcessAsSsl3_m1134200260 (TlsClientHello_t1051859738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsTls1()
extern "C"  void TlsClientHello_ProcessAsTls1_m1156571379 (TlsClientHello_t1051859738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::processProtocol(System.Int16)
extern "C"  void TlsClientHello_processProtocol_m4035204366 (TlsClientHello_t1051859738 * __this, int16_t ___protocol0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCipherSuite()
extern "C"  void TlsClientHello_selectCipherSuite_m2747560173 (TlsClientHello_t1051859738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCompressionMethod()
extern "C"  void TlsClientHello_selectCompressionMethod_m2836025703 (TlsClientHello_t1051859738 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
