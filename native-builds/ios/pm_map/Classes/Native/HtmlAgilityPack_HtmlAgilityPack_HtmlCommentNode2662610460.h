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

// HtmlAgilityPack.HtmlCommentNode
struct  HtmlCommentNode_t2662610460  : public HtmlNode_t916417385
{
public:
	// System.String HtmlAgilityPack.HtmlCommentNode::_comment
	String_t* ____comment_29;

public:
	inline static int32_t get_offset_of__comment_29() { return static_cast<int32_t>(offsetof(HtmlCommentNode_t2662610460, ____comment_29)); }
	inline String_t* get__comment_29() const { return ____comment_29; }
	inline String_t** get_address_of__comment_29() { return &____comment_29; }
	inline void set__comment_29(String_t* value)
	{
		____comment_29 = value;
		Il2CppCodeGenWriteBarrier(&____comment_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
