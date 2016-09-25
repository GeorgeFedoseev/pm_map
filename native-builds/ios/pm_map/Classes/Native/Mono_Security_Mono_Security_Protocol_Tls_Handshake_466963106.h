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

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2623608376.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello
struct  TlsServerHello_t466963106  : public HandshakeMessage_t2623608376
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::unixTime
	int32_t ___unixTime_10;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::random
	ByteU5BU5D_t4260760469* ___random_11;

public:
	inline static int32_t get_offset_of_unixTime_10() { return static_cast<int32_t>(offsetof(TlsServerHello_t466963106, ___unixTime_10)); }
	inline int32_t get_unixTime_10() const { return ___unixTime_10; }
	inline int32_t* get_address_of_unixTime_10() { return &___unixTime_10; }
	inline void set_unixTime_10(int32_t value)
	{
		___unixTime_10 = value;
	}

	inline static int32_t get_offset_of_random_11() { return static_cast<int32_t>(offsetof(TlsServerHello_t466963106, ___random_11)); }
	inline ByteU5BU5D_t4260760469* get_random_11() const { return ___random_11; }
	inline ByteU5BU5D_t4260760469** get_address_of_random_11() { return &___random_11; }
	inline void set_random_11(ByteU5BU5D_t4260760469* value)
	{
		___random_11 = value;
		Il2CppCodeGenWriteBarrier(&___random_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
