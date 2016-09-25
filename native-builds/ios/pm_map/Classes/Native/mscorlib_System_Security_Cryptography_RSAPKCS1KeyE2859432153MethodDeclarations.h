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

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct RSAPKCS1KeyExchangeDeformatter_t2859432153;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1241690687;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl1241690687.h"

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter__ctor_m2275105934 (RSAPKCS1KeyExchangeDeformatter_t2859432153 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(System.Byte[])
extern "C"  ByteU5BU5D_t4260760469* RSAPKCS1KeyExchangeDeformatter_DecryptKeyExchange_m4170958030 (RSAPKCS1KeyExchangeDeformatter_t2859432153 * __this, ByteU5BU5D_t4260760469* ___rgbIn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter_SetKey_m1035857735 (RSAPKCS1KeyExchangeDeformatter_t2859432153 * __this, AsymmetricAlgorithm_t1241690687 * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
