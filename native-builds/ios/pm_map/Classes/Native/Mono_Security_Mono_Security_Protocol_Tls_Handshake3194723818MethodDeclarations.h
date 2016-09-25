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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange
struct TlsClientKeyExchange_t3194723818;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientKeyExchange__ctor_m1632380296 (TlsClientKeyExchange_t3194723818 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsSsl3()
extern "C"  void TlsClientKeyExchange_ProcessAsSsl3_m1435521332 (TlsClientKeyExchange_t3194723818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsTls1()
extern "C"  void TlsClientKeyExchange_ProcessAsTls1_m1457892451 (TlsClientKeyExchange_t3194723818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
