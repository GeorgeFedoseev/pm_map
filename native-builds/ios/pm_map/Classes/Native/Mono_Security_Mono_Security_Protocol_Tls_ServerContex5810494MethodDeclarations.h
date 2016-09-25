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

// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t5810494;
// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t1149375137;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslServer1149375137.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP1707327472.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"

// System.Void Mono.Security.Protocol.Tls.ServerContext::.ctor(Mono.Security.Protocol.Tls.SslServerStream,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean)
extern "C"  void ServerContext__ctor_m1215606417 (ServerContext_t5810494 * __this, SslServerStream_t1149375137 * ___stream0, int32_t ___securityProtocolType1, X509Certificate_t3076817455 * ___serverCertificate2, bool ___clientCertificateRequired3, bool ___requestClientCertificate4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslServerStream Mono.Security.Protocol.Tls.ServerContext::get_SslStream()
extern "C"  SslServerStream_t1149375137 * ServerContext_get_SslStream_m4131783621 (ServerContext_t5810494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ServerContext::get_ClientCertificateRequired()
extern "C"  bool ServerContext_get_ClientCertificateRequired_m3563978180 (ServerContext_t5810494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ServerContext::get_RequestClientCertificate()
extern "C"  bool ServerContext_get_RequestClientCertificate_m2851511750 (ServerContext_t5810494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
