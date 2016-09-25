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
// HtmlAgilityPack.HtmlDocument
struct HtmlDocument_t4272798594;
// HtmlAgilityPack.HtmlNameTable
struct HtmlNameTable_t3191042974;

#include "System_Xml_System_Xml_XPath_XPathNavigator1075073278.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlNodeNavigator
struct  HtmlNodeNavigator_t4069455120  : public XPathNavigator_t1075073278
{
public:
	// System.Int32 HtmlAgilityPack.HtmlNodeNavigator::_attindex
	int32_t ____attindex_2;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNodeNavigator::_currentnode
	HtmlNode_t916417385 * ____currentnode_3;
	// HtmlAgilityPack.HtmlDocument HtmlAgilityPack.HtmlNodeNavigator::_doc
	HtmlDocument_t4272798594 * ____doc_4;
	// HtmlAgilityPack.HtmlNameTable HtmlAgilityPack.HtmlNodeNavigator::_nametable
	HtmlNameTable_t3191042974 * ____nametable_5;

public:
	inline static int32_t get_offset_of__attindex_2() { return static_cast<int32_t>(offsetof(HtmlNodeNavigator_t4069455120, ____attindex_2)); }
	inline int32_t get__attindex_2() const { return ____attindex_2; }
	inline int32_t* get_address_of__attindex_2() { return &____attindex_2; }
	inline void set__attindex_2(int32_t value)
	{
		____attindex_2 = value;
	}

	inline static int32_t get_offset_of__currentnode_3() { return static_cast<int32_t>(offsetof(HtmlNodeNavigator_t4069455120, ____currentnode_3)); }
	inline HtmlNode_t916417385 * get__currentnode_3() const { return ____currentnode_3; }
	inline HtmlNode_t916417385 ** get_address_of__currentnode_3() { return &____currentnode_3; }
	inline void set__currentnode_3(HtmlNode_t916417385 * value)
	{
		____currentnode_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentnode_3, value);
	}

	inline static int32_t get_offset_of__doc_4() { return static_cast<int32_t>(offsetof(HtmlNodeNavigator_t4069455120, ____doc_4)); }
	inline HtmlDocument_t4272798594 * get__doc_4() const { return ____doc_4; }
	inline HtmlDocument_t4272798594 ** get_address_of__doc_4() { return &____doc_4; }
	inline void set__doc_4(HtmlDocument_t4272798594 * value)
	{
		____doc_4 = value;
		Il2CppCodeGenWriteBarrier(&____doc_4, value);
	}

	inline static int32_t get_offset_of__nametable_5() { return static_cast<int32_t>(offsetof(HtmlNodeNavigator_t4069455120, ____nametable_5)); }
	inline HtmlNameTable_t3191042974 * get__nametable_5() const { return ____nametable_5; }
	inline HtmlNameTable_t3191042974 ** get_address_of__nametable_5() { return &____nametable_5; }
	inline void set__nametable_5(HtmlNameTable_t3191042974 * value)
	{
		____nametable_5 = value;
		Il2CppCodeGenWriteBarrier(&____nametable_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
