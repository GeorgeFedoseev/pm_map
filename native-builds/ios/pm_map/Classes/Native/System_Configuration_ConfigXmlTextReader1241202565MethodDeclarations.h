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

// ConfigXmlTextReader
struct ConfigXmlTextReader_t1241202565;
// System.IO.Stream
struct Stream_t1561764144;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t2148718976;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_TextReader2148718976.h"

// System.Void ConfigXmlTextReader::.ctor(System.IO.Stream,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m1105518992 (ConfigXmlTextReader_t1241202565 * __this, Stream_t1561764144 * ___s0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ConfigXmlTextReader::.ctor(System.IO.TextReader,System.String)
extern "C"  void ConfigXmlTextReader__ctor_m2641532224 (ConfigXmlTextReader_t1241202565 * __this, TextReader_t2148718976 * ___input0, String_t* ___fileName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ConfigXmlTextReader::get_Filename()
extern "C"  String_t* ConfigXmlTextReader_get_Filename_m527049076 (ConfigXmlTextReader_t1241202565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
