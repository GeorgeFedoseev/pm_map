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

// Mono.Security.Protocol.Tls.ServerRecordProtocol
struct ServerRecordProtocol_t1063474890;
// System.IO.Stream
struct Stream_t1561764144;
// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t5810494;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t2623608376;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t89550253;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerContex5810494.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3359671455.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream89550253.h"

// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ServerContext)
extern "C"  void ServerRecordProtocol__ctor_m1260898093 (ServerRecordProtocol_t1063474890 * __this, Stream_t1561764144 * ___innerStream0, ServerContext_t5810494 * ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t2623608376 * ServerRecordProtocol_GetMessage_m840398079 (ServerRecordProtocol_t1063474890 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ServerRecordProtocol_ProcessHandshakeMessage_m419614084 (ServerRecordProtocol_t1063474890 * __this, TlsStream_t89550253 * ___handMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t2623608376 * ServerRecordProtocol_createClientHandshakeMessage_m1387195944 (ServerRecordProtocol_t1063474890 * __this, uint8_t ___type0, ByteU5BU5D_t4260760469* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t2623608376 * ServerRecordProtocol_createServerHandshakeMessage_m137632093 (ServerRecordProtocol_t1063474890 * __this, uint8_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
