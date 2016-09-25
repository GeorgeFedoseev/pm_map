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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct TlsClientCertificate_t124657119;
// Mono.Security.Protocol.Tls.Context
struct Context_t658806145;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context658806145.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate1623369439.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsClientCertificate__ctor_m3823740723 (TlsClientCertificate_t124657119 * __this, Context_t658806145 * ___context0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::Update()
extern "C"  void TlsClientCertificate_Update_m116448180 (TlsClientCertificate_t124657119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsSsl3()
extern "C"  void TlsClientCertificate_ProcessAsSsl3_m1872304607 (TlsClientCertificate_t124657119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsTls1()
extern "C"  void TlsClientCertificate_ProcessAsTls1_m1894675726 (TlsClientCertificate_t124657119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsClientCertificate_checkCertificateUsage_m1115050287 (TlsClientCertificate_t124657119 * __this, X509Certificate_t1623369440 * ___cert0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsClientCertificate_validateCertificates_m1563954323 (TlsClientCertificate_t124657119 * __this, X509CertificateCollection_t4135795358 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
