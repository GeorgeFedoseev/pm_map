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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate
struct TlsServerCertificate_t2642511719;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsServerCertificate__ctor_m4080051112 (TlsServerCertificate_t2642511719 * __this, Context_t658806145 * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::ProcessAsSsl3()
extern "C"  void TlsServerCertificate_ProcessAsSsl3_m2770661719 (TlsServerCertificate_t2642511719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::ProcessAsTls1()
extern "C"  void TlsServerCertificate_ProcessAsTls1_m2793032838 (TlsServerCertificate_t2642511719 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
