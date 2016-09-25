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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone
struct TlsServerHelloDone_t3853443396;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerHelloDone__ctor_m3160308459 (TlsServerHelloDone_t3853443396 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::ProcessAsSsl3()
extern "C"  void TlsServerHelloDone_ProcessAsSsl3_m1340331610 (TlsServerHelloDone_t3853443396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::ProcessAsTls1()
extern "C"  void TlsServerHelloDone_ProcessAsTls1_m1362702729 (TlsServerHelloDone_t3853443396 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
