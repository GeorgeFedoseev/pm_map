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

#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNode916417385.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlTextNode
struct  HtmlTextNode_t2407265078  : public HtmlNode_t916417385
{
public:
	// System.String HtmlAgilityPack.HtmlTextNode::_text
	String_t* ____text_29;

public:
	inline static int32_t get_offset_of__text_29() { return static_cast<int32_t>(offsetof(HtmlTextNode_t2407265078, ____text_29)); }
	inline String_t* get__text_29() const { return ____text_29; }
	inline String_t** get_address_of__text_29() { return &____text_29; }
	inline void set__text_29(String_t* value)
	{
		____text_29 = value;
		Il2CppCodeGenWriteBarrier(&____text_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
