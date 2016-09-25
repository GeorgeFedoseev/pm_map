#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Int16[]
struct Int16U5BU5D_t801762735;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct  TlsClientHello_t1051859738  : public HandshakeMessage_t2623608376
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::random
	ByteU5BU5D_t4260760469* ___random_10;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::sessionId
	ByteU5BU5D_t4260760469* ___sessionId_11;
	// System.Int16[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::cipherSuites
	Int16U5BU5D_t801762735* ___cipherSuites_12;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::compressionMethods
	ByteU5BU5D_t4260760469* ___compressionMethods_13;

public:
	inline static int32_t get_offset_of_random_10() { return static_cast<int32_t>(offsetof(TlsClientHello_t1051859738, ___random_10)); }
	inline ByteU5BU5D_t4260760469* get_random_10() const { return ___random_10; }
	inline ByteU5BU5D_t4260760469** get_address_of_random_10() { return &___random_10; }
	inline void set_random_10(ByteU5BU5D_t4260760469* value)
	{
		___random_10 = value;
		Il2CppCodeGenWriteBarrier(&___random_10, value);
	}

	inline static int32_t get_offset_of_sessionId_11() { return static_cast<int32_t>(offsetof(TlsClientHello_t1051859738, ___sessionId_11)); }
	inline ByteU5BU5D_t4260760469* get_sessionId_11() const { return ___sessionId_11; }
	inline ByteU5BU5D_t4260760469** get_address_of_sessionId_11() { return &___sessionId_11; }
	inline void set_sessionId_11(ByteU5BU5D_t4260760469* value)
	{
		___sessionId_11 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_11, value);
	}

	inline static int32_t get_offset_of_cipherSuites_12() { return static_cast<int32_t>(offsetof(TlsClientHello_t1051859738, ___cipherSuites_12)); }
	inline Int16U5BU5D_t801762735* get_cipherSuites_12() const { return ___cipherSuites_12; }
	inline Int16U5BU5D_t801762735** get_address_of_cipherSuites_12() { return &___cipherSuites_12; }
	inline void set_cipherSuites_12(Int16U5BU5D_t801762735* value)
	{
		___cipherSuites_12 = value;
		Il2CppCodeGenWriteBarrier(&___cipherSuites_12, value);
	}

	inline static int32_t get_offset_of_compressionMethods_13() { return static_cast<int32_t>(offsetof(TlsClientHello_t1051859738, ___compressionMethods_13)); }
	inline ByteU5BU5D_t4260760469* get_compressionMethods_13() const { return ___compressionMethods_13; }
	inline ByteU5BU5D_t4260760469** get_address_of_compressionMethods_13() { return &___compressionMethods_13; }
	inline void set_compressionMethods_13(ByteU5BU5D_t4260760469* value)
	{
		___compressionMethods_13 = value;
		Il2CppCodeGenWriteBarrier(&___compressionMethods_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
