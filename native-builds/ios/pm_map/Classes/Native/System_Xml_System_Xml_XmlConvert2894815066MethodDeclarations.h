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
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Globalization_DateTimeStyles1282965087.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "mscorlib_System_TimeSpan413522987.h"

// System.Void System.Xml.XmlConvert::.cctor()
extern "C"  void XmlConvert__cctor_m3007094654 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C"  String_t* XmlConvert_EncodeLocalName_m3492384786 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
extern "C"  bool XmlConvert_IsInvalid_m313614306 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, bool ___firstOnlyLetter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
extern "C"  String_t* XmlConvert_EncodeName_m3700952590 (Il2CppObject * __this /* static, unused */, String_t* ___name0, bool ___nmtoken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C"  String_t* XmlConvert_EncodeName_m948344207 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C"  bool XmlConvert_ToBoolean_m3758854944 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
extern "C"  uint8_t XmlConvert_ToByte_m1845524822 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String)
extern "C"  DateTime_t4283661327  XmlConvert_ToDateTime_m2208041136 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
extern "C"  DateTime_t4283661327  XmlConvert_ToDateTime_m1713731850 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t4054002952* ___formats1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
extern "C"  DateTime_t4283661327  XmlConvert_ToDateTime_m2432599501 (Il2CppObject * __this /* static, unused */, String_t* ___s0, StringU5BU5D_t4054002952* ___formats1, int32_t ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C"  Decimal_t1954350631  XmlConvert_ToDecimal_m3464816128 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C"  double XmlConvert_ToDouble_m1758308804 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
extern "C"  float XmlConvert_TryParseStringFloatConstants_m1229477373 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C"  bool XmlConvert_TryParseStringConstant_m3828131620 (Il2CppObject * __this /* static, unused */, String_t* ___format0, String_t* ___s1, int32_t ___start2, int32_t ___end3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
extern "C"  int16_t XmlConvert_ToInt16_m674493152 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C"  int32_t XmlConvert_ToInt32_m3773620768 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C"  int64_t XmlConvert_ToInt64_m778201600 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
extern "C"  int8_t XmlConvert_ToSByte_m29345728 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C"  float XmlConvert_ToSingle_m34142998 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Xml.XmlConvert::ToTimeSpan(System.String)
extern "C"  TimeSpan_t413522987  XmlConvert_ToTimeSpan_m83474552 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C"  uint16_t XmlConvert_ToUInt16_m1167065128 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C"  uint32_t XmlConvert_ToUInt32_m2021978420 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C"  uint64_t XmlConvert_ToUInt64_m2681755830 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C"  String_t* XmlConvert_VerifyName_m2269770316 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C"  String_t* XmlConvert_VerifyNCName_m2724758775 (Il2CppObject * __this /* static, unused */, String_t* ___ncname0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C"  ByteU5BU5D_t4260760469* XmlConvert_FromBinHexString_m923478344 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
extern "C"  int32_t XmlConvert_FromBinHexString_m1597652700 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___chars0, int32_t ___offset1, int32_t ___charLength2, ByteU5BU5D_t4260760469* ___buffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
