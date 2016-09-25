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
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t2688989516;
// TMPro.TMP_WordInfo
struct TMP_WordInfo_t1302080950;
struct TMP_WordInfo_t1302080950_marshaled_pinvoke;
struct TMP_WordInfo_t1302080950_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TMPro_TMP_WordInfo1302080950.h"

// System.String TMPro.TMP_WordInfo::GetWord(TMPro.TMP_CharacterInfo[])
extern "C"  String_t* TMP_WordInfo_GetWord_m16038943 (TMP_WordInfo_t1302080950 * __this, TMP_CharacterInfoU5BU5D_t2688989516* ___charInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TMP_WordInfo_t1302080950;
struct TMP_WordInfo_t1302080950_marshaled_pinvoke;

extern "C" void TMP_WordInfo_t1302080950_marshal_pinvoke(const TMP_WordInfo_t1302080950& unmarshaled, TMP_WordInfo_t1302080950_marshaled_pinvoke& marshaled);
extern "C" void TMP_WordInfo_t1302080950_marshal_pinvoke_back(const TMP_WordInfo_t1302080950_marshaled_pinvoke& marshaled, TMP_WordInfo_t1302080950& unmarshaled);
extern "C" void TMP_WordInfo_t1302080950_marshal_pinvoke_cleanup(TMP_WordInfo_t1302080950_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TMP_WordInfo_t1302080950;
struct TMP_WordInfo_t1302080950_marshaled_com;

extern "C" void TMP_WordInfo_t1302080950_marshal_com(const TMP_WordInfo_t1302080950& unmarshaled, TMP_WordInfo_t1302080950_marshaled_com& marshaled);
extern "C" void TMP_WordInfo_t1302080950_marshal_com_back(const TMP_WordInfo_t1302080950_marshaled_com& marshaled, TMP_WordInfo_t1302080950& unmarshaled);
extern "C" void TMP_WordInfo_t1302080950_marshal_com_cleanup(TMP_WordInfo_t1302080950_marshaled_com& marshaled);
