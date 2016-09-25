#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlAttribute>
struct Dictionary_2_t2801403257;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.Collections.Generic.List`1<HtmlAgilityPack.HtmlAttribute>
struct List_1_t3349170439;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlAttributeCollection
struct  HtmlAttributeCollection_t1994388853  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlAttribute> HtmlAgilityPack.HtmlAttributeCollection::Hashitems
	Dictionary_2_t2801403257 * ___Hashitems_0;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlAttributeCollection::_ownernode
	HtmlNode_t916417385 * ____ownernode_1;
	// System.Collections.Generic.List`1<HtmlAgilityPack.HtmlAttribute> HtmlAgilityPack.HtmlAttributeCollection::items
	List_1_t3349170439 * ___items_2;

public:
	inline static int32_t get_offset_of_Hashitems_0() { return static_cast<int32_t>(offsetof(HtmlAttributeCollection_t1994388853, ___Hashitems_0)); }
	inline Dictionary_2_t2801403257 * get_Hashitems_0() const { return ___Hashitems_0; }
	inline Dictionary_2_t2801403257 ** get_address_of_Hashitems_0() { return &___Hashitems_0; }
	inline void set_Hashitems_0(Dictionary_2_t2801403257 * value)
	{
		___Hashitems_0 = value;
		Il2CppCodeGenWriteBarrier(&___Hashitems_0, value);
	}

	inline static int32_t get_offset_of__ownernode_1() { return static_cast<int32_t>(offsetof(HtmlAttributeCollection_t1994388853, ____ownernode_1)); }
	inline HtmlNode_t916417385 * get__ownernode_1() const { return ____ownernode_1; }
	inline HtmlNode_t916417385 ** get_address_of__ownernode_1() { return &____ownernode_1; }
	inline void set__ownernode_1(HtmlNode_t916417385 * value)
	{
		____ownernode_1 = value;
		Il2CppCodeGenWriteBarrier(&____ownernode_1, value);
	}

	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(HtmlAttributeCollection_t1994388853, ___items_2)); }
	inline List_1_t3349170439 * get_items_2() const { return ___items_2; }
	inline List_1_t3349170439 ** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(List_1_t3349170439 * value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier(&___items_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
