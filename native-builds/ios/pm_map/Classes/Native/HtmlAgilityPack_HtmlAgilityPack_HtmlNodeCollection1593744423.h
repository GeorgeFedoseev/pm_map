#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.Collections.Generic.List`1<HtmlAgilityPack.HtmlNode>
struct List_1_t2284602937;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlNodeCollection
struct  HtmlNodeCollection_t1593744423  : public Il2CppObject
{
public:
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNodeCollection::_parentnode
	HtmlNode_t916417385 * ____parentnode_0;
	// System.Collections.Generic.List`1<HtmlAgilityPack.HtmlNode> HtmlAgilityPack.HtmlNodeCollection::_items
	List_1_t2284602937 * ____items_1;

public:
	inline static int32_t get_offset_of__parentnode_0() { return static_cast<int32_t>(offsetof(HtmlNodeCollection_t1593744423, ____parentnode_0)); }
	inline HtmlNode_t916417385 * get__parentnode_0() const { return ____parentnode_0; }
	inline HtmlNode_t916417385 ** get_address_of__parentnode_0() { return &____parentnode_0; }
	inline void set__parentnode_0(HtmlNode_t916417385 * value)
	{
		____parentnode_0 = value;
		Il2CppCodeGenWriteBarrier(&____parentnode_0, value);
	}

	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(HtmlNodeCollection_t1593744423, ____items_1)); }
	inline List_1_t2284602937 * get__items_1() const { return ____items_1; }
	inline List_1_t2284602937 ** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1_t2284602937 * value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
