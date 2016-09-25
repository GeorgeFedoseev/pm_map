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

// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3752917378;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_t2125183969;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN13752917377.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void Mono.Security.X509.X501::.cctor()
extern "C"  void X501__cctor_m2619822114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern "C"  String_t* X501_ToString_m1957208426 (Il2CppObject * __this /* static, unused */, ASN1_t3752917378 * ___seq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern "C"  String_t* X501_ToString_m1526231602 (Il2CppObject * __this /* static, unused */, ASN1_t3752917378 * ___seq0, bool ___reversed1, String_t* ___separator2, bool ___quotes3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern "C"  void X501_AppendEntry_m1741585464 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 * ___sb0, ASN1_t3752917378 * ___entry1, bool ___quotes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X520/AttributeTypeAndValue Mono.Security.X509.X501::GetAttributeFromOid(System.String)
extern "C"  AttributeTypeAndValue_t2125183969 * X501_GetAttributeFromOid_m971689933 (Il2CppObject * __this /* static, unused */, String_t* ___attributeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X501::IsOid(System.String)
extern "C"  bool X501_IsOid_m782825419 (Il2CppObject * __this /* static, unused */, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X520/AttributeTypeAndValue Mono.Security.X509.X501::ReadAttribute(System.String,System.Int32&)
extern "C"  AttributeTypeAndValue_t2125183969 * X501_ReadAttribute_m3461034038 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X501::IsHex(System.Char)
extern "C"  bool X501_IsHex_m3574430773 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ReadHex(System.String,System.Int32&)
extern "C"  String_t* X501_ReadHex_m2299509158 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X501::ReadEscaped(System.Text.StringBuilder,System.String,System.Int32)
extern "C"  int32_t X501_ReadEscaped_m2637833775 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 * ___sb0, String_t* ___value1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X501::ReadQuoted(System.Text.StringBuilder,System.String,System.Int32)
extern "C"  int32_t X501_ReadQuoted_m4215145120 (Il2CppObject * __this /* static, unused */, StringBuilder_t243639308 * ___sb0, String_t* ___value1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X501::ReadValue(System.String,System.Int32&)
extern "C"  String_t* X501_ReadValue_m3313239120 (Il2CppObject * __this /* static, unused */, String_t* ___value0, int32_t* ___pos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X501::FromString(System.String)
extern "C"  ASN1_t3752917378 * X501_FromString_m3477858893 (Il2CppObject * __this /* static, unused */, String_t* ___rdn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
