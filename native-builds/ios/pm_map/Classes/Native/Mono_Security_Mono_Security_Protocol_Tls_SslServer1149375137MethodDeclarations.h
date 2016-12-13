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

// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t1149375137;
// System.IO.Stream
struct Stream_t1561764144;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3559239239;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t925859732;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP1707327472.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKe3559239239.h"
#include "mscorlib_System_AsyncCallback1369114871.h"
#include "mscorlib_System_Object4170816371.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"
#include "mscorlib_System_String7231557.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"

// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean)
extern "C"  void SslServerStream__ctor_m2883765690 (SslServerStream_t1149375137 * __this, Stream_t1561764144 * ___stream0, X509Certificate_t3076817455 * ___serverCertificate1, bool ___clientCertificateRequired2, bool ___ownsStream3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void SslServerStream__ctor_m2654280462 (SslServerStream_t1149375137 * __this, Stream_t1561764144 * ___stream0, X509Certificate_t3076817455 * ___serverCertificate1, bool ___clientCertificateRequired2, bool ___ownsStream3, int32_t ___securityProtocolType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void SslServerStream__ctor_m965370327 (SslServerStream_t1149375137 * __this, Stream_t1561764144 * ___stream0, X509Certificate_t3076817455 * ___serverCertificate1, bool ___clientCertificateRequired2, bool ___requestClientCertificate3, bool ___ownsStream4, int32_t ___securityProtocolType5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::get_PrivateKeyCertSelectionDelegate()
extern "C"  PrivateKeySelectionCallback_t3559239239 * SslServerStream_get_PrivateKeyCertSelectionDelegate_m2686957933 (SslServerStream_t1149375137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslServerStream_set_PrivateKeyCertSelectionDelegate_m344121970 (SslServerStream_t1149375137 * __this, PrivateKeySelectionCallback_t3559239239 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Finalize()
extern "C"  void SslServerStream_Finalize_m3597319539 (SslServerStream_t1149375137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Dispose(System.Boolean)
extern "C"  void SslServerStream_Dispose_m3223640451 (SslServerStream_t1149375137 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslServerStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslServerStream_OnBeginNegotiateHandshake_m2382282072 (SslServerStream_t1149375137 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C"  void SslServerStream_OnNegotiateHandshakeCallback_m486027601 (SslServerStream_t1149375137 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslServerStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3076817455 * SslServerStream_OnLocalCertificateSelection_m392350127 (SslServerStream_t1149375137 * __this, X509CertificateCollection_t3220522733 * ___clientCertificates0, X509Certificate_t3076817455 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t3220522733 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslServerStream_OnRemoteCertificateValidation_m3817259589 (SslServerStream_t1149375137 * __this, X509Certificate_t3076817455 * ___certificate0, Int32U5BU5D_t3230847821* ___errors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::get_HaveRemoteValidation2Callback()
extern "C"  bool SslServerStream_get_HaveRemoteValidation2Callback_m189097542 (SslServerStream_t1149375137 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t925859732 * SslServerStream_OnRemoteCertificateValidation2_m708619753 (SslServerStream_t1149375137 * __this, X509CertificateCollection_t4135795358 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::RaiseClientCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslServerStream_RaiseClientCertificateValidation_m3449461559 (SslServerStream_t1149375137 * __this, X509Certificate_t3076817455 * ___certificate0, Int32U5BU5D_t3230847821* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t1241690687 * SslServerStream_OnLocalPrivateKeySelection_m3807548716 (SslServerStream_t1149375137 * __this, X509Certificate_t3076817455 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t1241690687 * SslServerStream_RaisePrivateKeySelection_m2947390220 (SslServerStream_t1149375137 * __this, X509Certificate_t3076817455 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
