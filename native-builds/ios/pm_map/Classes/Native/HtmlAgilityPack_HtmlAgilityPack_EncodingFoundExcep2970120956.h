#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.Encoding
struct Encoding_t2012439129;

#include "mscorlib_System_Exception3991598821.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.EncodingFoundException
struct  EncodingFoundException_t2970120956  : public Exception_t3991598821
{
public:
	// System.Text.Encoding HtmlAgilityPack.EncodingFoundException::_encoding
	Encoding_t2012439129 * ____encoding_11;

public:
	inline static int32_t get_offset_of__encoding_11() { return static_cast<int32_t>(offsetof(EncodingFoundException_t2970120956, ____encoding_11)); }
	inline Encoding_t2012439129 * get__encoding_11() const { return ____encoding_11; }
	inline Encoding_t2012439129 ** get_address_of__encoding_11() { return &____encoding_11; }
	inline void set__encoding_11(Encoding_t2012439129 * value)
	{
		____encoding_11 = value;
		Il2CppCodeGenWriteBarrier(&____encoding_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
