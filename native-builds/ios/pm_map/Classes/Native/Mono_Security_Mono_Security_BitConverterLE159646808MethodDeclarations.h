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

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"

// System.Byte[] Mono.Security.BitConverterLE::GetUIntBytes(System.Byte*)
extern "C"  ByteU5BU5D_t4260760469* BitConverterLE_GetUIntBytes_m262034205 (Il2CppObject * __this /* static, unused */, uint8_t* ___bytes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.BitConverterLE::GetBytes(System.Int32)
extern "C"  ByteU5BU5D_t4260760469* BitConverterLE_GetBytes_m3530550987 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.BitConverterLE::UIntFromBytes(System.Byte*,System.Byte[],System.Int32)
extern "C"  void BitConverterLE_UIntFromBytes_m39848489 (Il2CppObject * __this /* static, unused */, uint8_t* ___dst0, ByteU5BU5D_t4260760469* ___src1, int32_t ___startIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.BitConverterLE::ToInt32(System.Byte[],System.Int32)
extern "C"  int32_t BitConverterLE_ToInt32_m156959552 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.BitConverterLE::ToUInt32(System.Byte[],System.Int32)
extern "C"  uint32_t BitConverterLE_ToUInt32_m1007369944 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
