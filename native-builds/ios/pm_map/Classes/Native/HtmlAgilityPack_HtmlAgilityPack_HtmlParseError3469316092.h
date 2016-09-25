#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlParseErrorCode2227801225.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlParseError
struct  HtmlParseError_t3469316092  : public Il2CppObject
{
public:
	// HtmlAgilityPack.HtmlParseErrorCode HtmlAgilityPack.HtmlParseError::_code
	int32_t ____code_0;
	// System.Int32 HtmlAgilityPack.HtmlParseError::_line
	int32_t ____line_1;
	// System.Int32 HtmlAgilityPack.HtmlParseError::_linePosition
	int32_t ____linePosition_2;
	// System.String HtmlAgilityPack.HtmlParseError::_reason
	String_t* ____reason_3;
	// System.String HtmlAgilityPack.HtmlParseError::_sourceText
	String_t* ____sourceText_4;
	// System.Int32 HtmlAgilityPack.HtmlParseError::_streamPosition
	int32_t ____streamPosition_5;

public:
	inline static int32_t get_offset_of__code_0() { return static_cast<int32_t>(offsetof(HtmlParseError_t3469316092, ____code_0)); }
	inline int32_t get__code_0() const { return ____code_0; }
	inline int32_t* get_address_of__code_0() { return &____code_0; }
	inline void set__code_0(int32_t value)
	{
		____code_0 = value;
	}

	inline static int32_t get_offset_of__line_1() { return static_cast<int32_t>(offsetof(HtmlParseError_t3469316092, ____line_1)); }
	inline int32_t get__line_1() const { return ____line_1; }
	inline int32_t* get_address_of__line_1() { return &____line_1; }
	inline void set__line_1(int32_t value)
	{
		____line_1 = value;
	}

	inline static int32_t get_offset_of__linePosition_2() { return static_cast<int32_t>(offsetof(HtmlParseError_t3469316092, ____linePosition_2)); }
	inline int32_t get__linePosition_2() const { return ____linePosition_2; }
	inline int32_t* get_address_of__linePosition_2() { return &____linePosition_2; }
	inline void set__linePosition_2(int32_t value)
	{
		____linePosition_2 = value;
	}

	inline static int32_t get_offset_of__reason_3() { return static_cast<int32_t>(offsetof(HtmlParseError_t3469316092, ____reason_3)); }
	inline String_t* get__reason_3() const { return ____reason_3; }
	inline String_t** get_address_of__reason_3() { return &____reason_3; }
	inline void set__reason_3(String_t* value)
	{
		____reason_3 = value;
		Il2CppCodeGenWriteBarrier(&____reason_3, value);
	}

	inline static int32_t get_offset_of__sourceText_4() { return static_cast<int32_t>(offsetof(HtmlParseError_t3469316092, ____sourceText_4)); }
	inline String_t* get__sourceText_4() const { return ____sourceText_4; }
	inline String_t** get_address_of__sourceText_4() { return &____sourceText_4; }
	inline void set__sourceText_4(String_t* value)
	{
		____sourceText_4 = value;
		Il2CppCodeGenWriteBarrier(&____sourceText_4, value);
	}

	inline static int32_t get_offset_of__streamPosition_5() { return static_cast<int32_t>(offsetof(HtmlParseError_t3469316092, ____streamPosition_5)); }
	inline int32_t get__streamPosition_5() const { return ____streamPosition_5; }
	inline int32_t* get_address_of__streamPosition_5() { return &____streamPosition_5; }
	inline void set__streamPosition_5(int32_t value)
	{
		____streamPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
