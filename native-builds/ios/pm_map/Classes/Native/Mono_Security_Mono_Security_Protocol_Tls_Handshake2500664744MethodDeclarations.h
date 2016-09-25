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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t2500664744;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerCertificateRequest__ctor_m3366239805 (TlsServerCertificateRequest_t2500664744 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C"  void TlsServerCertificateRequest_ProcessAsSsl3_m2353437740 (TlsServerCertificateRequest_t2500664744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsTls1()
extern "C"  void TlsServerCertificateRequest_ProcessAsTls1_m2375808859 (TlsServerCertificateRequest_t2500664744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
