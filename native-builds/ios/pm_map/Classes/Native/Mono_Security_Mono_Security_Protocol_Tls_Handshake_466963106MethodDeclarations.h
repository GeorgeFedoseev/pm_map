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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello
struct TlsServerHello_t466963106;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerHello__ctor_m1585890637 (TlsServerHello_t466963106 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::Update()
extern "C"  void TlsServerHello_Update_m3640540407 (TlsServerHello_t466963106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsSsl3()
extern "C"  void TlsServerHello_ProcessAsSsl3_m651908924 (TlsServerHello_t466963106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsTls1()
extern "C"  void TlsServerHello_ProcessAsTls1_m674280043 (TlsServerHello_t466963106 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
