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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange
struct TlsServerKeyExchange_t1417611122;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "mscorlib_System_Security_Cryptography_RSA2466814310.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerKeyExchange__ctor_m887859901 (TlsServerKeyExchange_t1417611122 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::Update()
extern "C"  void TlsServerKeyExchange_Update_m3859097991 (TlsServerKeyExchange_t1417611122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsSsl3()
extern "C"  void TlsServerKeyExchange_ProcessAsSsl3_m2333878444 (TlsServerKeyExchange_t1417611122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsTls1()
extern "C"  void TlsServerKeyExchange_ProcessAsTls1_m2356249563 (TlsServerKeyExchange_t1417611122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::createSignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* TlsServerKeyExchange_createSignature_m403185708 (TlsServerKeyExchange_t1417611122 * __this, RSA_t2466814310 * ___rsa0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
