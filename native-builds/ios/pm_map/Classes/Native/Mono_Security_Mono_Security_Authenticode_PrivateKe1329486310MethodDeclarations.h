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

// Mono.Security.Authenticode.PrivateKey
struct PrivateKey_t1329486310;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t2466814310;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.Authenticode.PrivateKey::.ctor(System.Byte[],System.String)
extern "C"  void PrivateKey__ctor_m1878461643 (PrivateKey_t1329486310 * __this, ByteU5BU5D_t4260760469* ___data0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::get_RSA()
extern "C"  RSA_t2466814310 * PrivateKey_get_RSA_m294435229 (PrivateKey_t1329486310 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.PrivateKey::DeriveKey(System.Byte[],System.String)
extern "C"  ByteU5BU5D_t4260760469* PrivateKey_DeriveKey_m695963595 (PrivateKey_t1329486310 * __this, ByteU5BU5D_t4260760469* ___salt0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.PrivateKey::Decode(System.Byte[],System.String)
extern "C"  bool PrivateKey_Decode_m1759097627 (PrivateKey_t1329486310 * __this, ByteU5BU5D_t4260760469* ___pvk0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Authenticode.PrivateKey Mono.Security.Authenticode.PrivateKey::CreateFromFile(System.String)
extern "C"  PrivateKey_t1329486310 * PrivateKey_CreateFromFile_m678330385 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Authenticode.PrivateKey Mono.Security.Authenticode.PrivateKey::CreateFromFile(System.String,System.String)
extern "C"  PrivateKey_t1329486310 * PrivateKey_CreateFromFile_m2796914801 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
