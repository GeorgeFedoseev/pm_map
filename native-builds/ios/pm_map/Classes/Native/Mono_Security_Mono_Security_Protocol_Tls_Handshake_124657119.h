#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct  TlsClientCertificate_t124657119  : public HandshakeMessage_t2623608376
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::clientCertificates
	X509CertificateCollection_t4135795358 * ___clientCertificates_10;

public:
	inline static int32_t get_offset_of_clientCertificates_10() { return static_cast<int32_t>(offsetof(TlsClientCertificate_t124657119, ___clientCertificates_10)); }
	inline X509CertificateCollection_t4135795358 * get_clientCertificates_10() const { return ___clientCertificates_10; }
	inline X509CertificateCollection_t4135795358 ** get_address_of_clientCertificates_10() { return &___clientCertificates_10; }
	inline void set_clientCertificates_10(X509CertificateCollection_t4135795358 * value)
	{
		___clientCertificates_10 = value;
		Il2CppCodeGenWriteBarrier(&___clientCertificates_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
