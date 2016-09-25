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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished
struct TlsServerFinished_t214731042;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerFinished__ctor_m691651651 (TlsServerFinished_t214731042 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.cctor()
extern "C"  void TlsServerFinished__cctor_m2169907169 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsSsl3()
extern "C"  void TlsServerFinished_ProcessAsSsl3_m2335972786 (TlsServerFinished_t214731042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsTls1()
extern "C"  void TlsServerFinished_ProcessAsTls1_m2358343905 (TlsServerFinished_t214731042 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
