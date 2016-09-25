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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t646324024;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientCertificateVerify__ctor_m2321527866 (TlsClientCertificateVerify_t646324024 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C"  void TlsClientCertificateVerify_ProcessAsSsl3_m2618161638 (TlsClientCertificateVerify_t646324024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::ProcessAsTls1()
extern "C"  void TlsClientCertificateVerify_ProcessAsTls1_m2640532757 (TlsClientCertificateVerify_t646324024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
