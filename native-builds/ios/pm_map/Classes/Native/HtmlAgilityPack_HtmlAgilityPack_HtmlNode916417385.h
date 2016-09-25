#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HtmlAgilityPack.HtmlAttributeCollection
struct HtmlAttributeCollection_t1994388853;
// HtmlAgilityPack.HtmlNodeCollection
struct HtmlNodeCollection_t1593744423;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.String
struct String_t;
// HtmlAgilityPack.HtmlDocument
struct HtmlDocument_t4272798594;
// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlElementFlag>
struct Dictionary_2_t2053159141;

#include "mscorlib_System_Object4170816371.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlNodeType239192771.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlNode
struct  HtmlNode_t916417385  : public Il2CppObject
{
public:
	// HtmlAgilityPack.HtmlAttributeCollection HtmlAgilityPack.HtmlNode::_attributes
	HtmlAttributeCollection_t1994388853 * ____attributes_0;
	// HtmlAgilityPack.HtmlNodeCollection HtmlAgilityPack.HtmlNode::_childnodes
	HtmlNodeCollection_t1593744423 * ____childnodes_1;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::_endnode
	HtmlNode_t916417385 * ____endnode_2;
	// System.Boolean HtmlAgilityPack.HtmlNode::_innerchanged
	bool ____innerchanged_3;
	// System.String HtmlAgilityPack.HtmlNode::_innerhtml
	String_t* ____innerhtml_4;
	// System.Int32 HtmlAgilityPack.HtmlNode::_innerlength
	int32_t ____innerlength_5;
	// System.Int32 HtmlAgilityPack.HtmlNode::_innerstartindex
	int32_t ____innerstartindex_6;
	// System.Int32 HtmlAgilityPack.HtmlNode::_line
	int32_t ____line_7;
	// System.Int32 HtmlAgilityPack.HtmlNode::_lineposition
	int32_t ____lineposition_8;
	// System.String HtmlAgilityPack.HtmlNode::_name
	String_t* ____name_9;
	// System.Int32 HtmlAgilityPack.HtmlNode::_namelength
	int32_t ____namelength_10;
	// System.Int32 HtmlAgilityPack.HtmlNode::_namestartindex
	int32_t ____namestartindex_11;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::_nextnode
	HtmlNode_t916417385 * ____nextnode_12;
	// HtmlAgilityPack.HtmlNodeType HtmlAgilityPack.HtmlNode::_nodetype
	int32_t ____nodetype_13;
	// System.Boolean HtmlAgilityPack.HtmlNode::_outerchanged
	bool ____outerchanged_14;
	// System.String HtmlAgilityPack.HtmlNode::_outerhtml
	String_t* ____outerhtml_15;
	// System.Int32 HtmlAgilityPack.HtmlNode::_outerlength
	int32_t ____outerlength_16;
	// System.Int32 HtmlAgilityPack.HtmlNode::_outerstartindex
	int32_t ____outerstartindex_17;
	// System.String HtmlAgilityPack.HtmlNode::_optimizedName
	String_t* ____optimizedName_18;
	// HtmlAgilityPack.HtmlDocument HtmlAgilityPack.HtmlNode::_ownerdocument
	HtmlDocument_t4272798594 * ____ownerdocument_19;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::_parentnode
	HtmlNode_t916417385 * ____parentnode_20;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::_prevnode
	HtmlNode_t916417385 * ____prevnode_21;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlNode::_prevwithsamename
	HtmlNode_t916417385 * ____prevwithsamename_22;
	// System.Boolean HtmlAgilityPack.HtmlNode::_starttag
	bool ____starttag_23;
	// System.Int32 HtmlAgilityPack.HtmlNode::_streamposition
	int32_t ____streamposition_24;

public:
	inline static int32_t get_offset_of__attributes_0() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____attributes_0)); }
	inline HtmlAttributeCollection_t1994388853 * get__attributes_0() const { return ____attributes_0; }
	inline HtmlAttributeCollection_t1994388853 ** get_address_of__attributes_0() { return &____attributes_0; }
	inline void set__attributes_0(HtmlAttributeCollection_t1994388853 * value)
	{
		____attributes_0 = value;
		Il2CppCodeGenWriteBarrier(&____attributes_0, value);
	}

	inline static int32_t get_offset_of__childnodes_1() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____childnodes_1)); }
	inline HtmlNodeCollection_t1593744423 * get__childnodes_1() const { return ____childnodes_1; }
	inline HtmlNodeCollection_t1593744423 ** get_address_of__childnodes_1() { return &____childnodes_1; }
	inline void set__childnodes_1(HtmlNodeCollection_t1593744423 * value)
	{
		____childnodes_1 = value;
		Il2CppCodeGenWriteBarrier(&____childnodes_1, value);
	}

	inline static int32_t get_offset_of__endnode_2() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____endnode_2)); }
	inline HtmlNode_t916417385 * get__endnode_2() const { return ____endnode_2; }
	inline HtmlNode_t916417385 ** get_address_of__endnode_2() { return &____endnode_2; }
	inline void set__endnode_2(HtmlNode_t916417385 * value)
	{
		____endnode_2 = value;
		Il2CppCodeGenWriteBarrier(&____endnode_2, value);
	}

	inline static int32_t get_offset_of__innerchanged_3() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____innerchanged_3)); }
	inline bool get__innerchanged_3() const { return ____innerchanged_3; }
	inline bool* get_address_of__innerchanged_3() { return &____innerchanged_3; }
	inline void set__innerchanged_3(bool value)
	{
		____innerchanged_3 = value;
	}

	inline static int32_t get_offset_of__innerhtml_4() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____innerhtml_4)); }
	inline String_t* get__innerhtml_4() const { return ____innerhtml_4; }
	inline String_t** get_address_of__innerhtml_4() { return &____innerhtml_4; }
	inline void set__innerhtml_4(String_t* value)
	{
		____innerhtml_4 = value;
		Il2CppCodeGenWriteBarrier(&____innerhtml_4, value);
	}

	inline static int32_t get_offset_of__innerlength_5() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____innerlength_5)); }
	inline int32_t get__innerlength_5() const { return ____innerlength_5; }
	inline int32_t* get_address_of__innerlength_5() { return &____innerlength_5; }
	inline void set__innerlength_5(int32_t value)
	{
		____innerlength_5 = value;
	}

	inline static int32_t get_offset_of__innerstartindex_6() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____innerstartindex_6)); }
	inline int32_t get__innerstartindex_6() const { return ____innerstartindex_6; }
	inline int32_t* get_address_of__innerstartindex_6() { return &____innerstartindex_6; }
	inline void set__innerstartindex_6(int32_t value)
	{
		____innerstartindex_6 = value;
	}

	inline static int32_t get_offset_of__line_7() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____line_7)); }
	inline int32_t get__line_7() const { return ____line_7; }
	inline int32_t* get_address_of__line_7() { return &____line_7; }
	inline void set__line_7(int32_t value)
	{
		____line_7 = value;
	}

	inline static int32_t get_offset_of__lineposition_8() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____lineposition_8)); }
	inline int32_t get__lineposition_8() const { return ____lineposition_8; }
	inline int32_t* get_address_of__lineposition_8() { return &____lineposition_8; }
	inline void set__lineposition_8(int32_t value)
	{
		____lineposition_8 = value;
	}

	inline static int32_t get_offset_of__name_9() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____name_9)); }
	inline String_t* get__name_9() const { return ____name_9; }
	inline String_t** get_address_of__name_9() { return &____name_9; }
	inline void set__name_9(String_t* value)
	{
		____name_9 = value;
		Il2CppCodeGenWriteBarrier(&____name_9, value);
	}

	inline static int32_t get_offset_of__namelength_10() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____namelength_10)); }
	inline int32_t get__namelength_10() const { return ____namelength_10; }
	inline int32_t* get_address_of__namelength_10() { return &____namelength_10; }
	inline void set__namelength_10(int32_t value)
	{
		____namelength_10 = value;
	}

	inline static int32_t get_offset_of__namestartindex_11() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____namestartindex_11)); }
	inline int32_t get__namestartindex_11() const { return ____namestartindex_11; }
	inline int32_t* get_address_of__namestartindex_11() { return &____namestartindex_11; }
	inline void set__namestartindex_11(int32_t value)
	{
		____namestartindex_11 = value;
	}

	inline static int32_t get_offset_of__nextnode_12() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____nextnode_12)); }
	inline HtmlNode_t916417385 * get__nextnode_12() const { return ____nextnode_12; }
	inline HtmlNode_t916417385 ** get_address_of__nextnode_12() { return &____nextnode_12; }
	inline void set__nextnode_12(HtmlNode_t916417385 * value)
	{
		____nextnode_12 = value;
		Il2CppCodeGenWriteBarrier(&____nextnode_12, value);
	}

	inline static int32_t get_offset_of__nodetype_13() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____nodetype_13)); }
	inline int32_t get__nodetype_13() const { return ____nodetype_13; }
	inline int32_t* get_address_of__nodetype_13() { return &____nodetype_13; }
	inline void set__nodetype_13(int32_t value)
	{
		____nodetype_13 = value;
	}

	inline static int32_t get_offset_of__outerchanged_14() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____outerchanged_14)); }
	inline bool get__outerchanged_14() const { return ____outerchanged_14; }
	inline bool* get_address_of__outerchanged_14() { return &____outerchanged_14; }
	inline void set__outerchanged_14(bool value)
	{
		____outerchanged_14 = value;
	}

	inline static int32_t get_offset_of__outerhtml_15() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____outerhtml_15)); }
	inline String_t* get__outerhtml_15() const { return ____outerhtml_15; }
	inline String_t** get_address_of__outerhtml_15() { return &____outerhtml_15; }
	inline void set__outerhtml_15(String_t* value)
	{
		____outerhtml_15 = value;
		Il2CppCodeGenWriteBarrier(&____outerhtml_15, value);
	}

	inline static int32_t get_offset_of__outerlength_16() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____outerlength_16)); }
	inline int32_t get__outerlength_16() const { return ____outerlength_16; }
	inline int32_t* get_address_of__outerlength_16() { return &____outerlength_16; }
	inline void set__outerlength_16(int32_t value)
	{
		____outerlength_16 = value;
	}

	inline static int32_t get_offset_of__outerstartindex_17() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____outerstartindex_17)); }
	inline int32_t get__outerstartindex_17() const { return ____outerstartindex_17; }
	inline int32_t* get_address_of__outerstartindex_17() { return &____outerstartindex_17; }
	inline void set__outerstartindex_17(int32_t value)
	{
		____outerstartindex_17 = value;
	}

	inline static int32_t get_offset_of__optimizedName_18() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____optimizedName_18)); }
	inline String_t* get__optimizedName_18() const { return ____optimizedName_18; }
	inline String_t** get_address_of__optimizedName_18() { return &____optimizedName_18; }
	inline void set__optimizedName_18(String_t* value)
	{
		____optimizedName_18 = value;
		Il2CppCodeGenWriteBarrier(&____optimizedName_18, value);
	}

	inline static int32_t get_offset_of__ownerdocument_19() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____ownerdocument_19)); }
	inline HtmlDocument_t4272798594 * get__ownerdocument_19() const { return ____ownerdocument_19; }
	inline HtmlDocument_t4272798594 ** get_address_of__ownerdocument_19() { return &____ownerdocument_19; }
	inline void set__ownerdocument_19(HtmlDocument_t4272798594 * value)
	{
		____ownerdocument_19 = value;
		Il2CppCodeGenWriteBarrier(&____ownerdocument_19, value);
	}

	inline static int32_t get_offset_of__parentnode_20() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____parentnode_20)); }
	inline HtmlNode_t916417385 * get__parentnode_20() const { return ____parentnode_20; }
	inline HtmlNode_t916417385 ** get_address_of__parentnode_20() { return &____parentnode_20; }
	inline void set__parentnode_20(HtmlNode_t916417385 * value)
	{
		____parentnode_20 = value;
		Il2CppCodeGenWriteBarrier(&____parentnode_20, value);
	}

	inline static int32_t get_offset_of__prevnode_21() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____prevnode_21)); }
	inline HtmlNode_t916417385 * get__prevnode_21() const { return ____prevnode_21; }
	inline HtmlNode_t916417385 ** get_address_of__prevnode_21() { return &____prevnode_21; }
	inline void set__prevnode_21(HtmlNode_t916417385 * value)
	{
		____prevnode_21 = value;
		Il2CppCodeGenWriteBarrier(&____prevnode_21, value);
	}

	inline static int32_t get_offset_of__prevwithsamename_22() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____prevwithsamename_22)); }
	inline HtmlNode_t916417385 * get__prevwithsamename_22() const { return ____prevwithsamename_22; }
	inline HtmlNode_t916417385 ** get_address_of__prevwithsamename_22() { return &____prevwithsamename_22; }
	inline void set__prevwithsamename_22(HtmlNode_t916417385 * value)
	{
		____prevwithsamename_22 = value;
		Il2CppCodeGenWriteBarrier(&____prevwithsamename_22, value);
	}

	inline static int32_t get_offset_of__starttag_23() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____starttag_23)); }
	inline bool get__starttag_23() const { return ____starttag_23; }
	inline bool* get_address_of__starttag_23() { return &____starttag_23; }
	inline void set__starttag_23(bool value)
	{
		____starttag_23 = value;
	}

	inline static int32_t get_offset_of__streamposition_24() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385, ____streamposition_24)); }
	inline int32_t get__streamposition_24() const { return ____streamposition_24; }
	inline int32_t* get_address_of__streamposition_24() { return &____streamposition_24; }
	inline void set__streamposition_24(int32_t value)
	{
		____streamposition_24 = value;
	}
};

struct HtmlNode_t916417385_StaticFields
{
public:
	// System.String HtmlAgilityPack.HtmlNode::HtmlNodeTypeNameComment
	String_t* ___HtmlNodeTypeNameComment_25;
	// System.String HtmlAgilityPack.HtmlNode::HtmlNodeTypeNameDocument
	String_t* ___HtmlNodeTypeNameDocument_26;
	// System.String HtmlAgilityPack.HtmlNode::HtmlNodeTypeNameText
	String_t* ___HtmlNodeTypeNameText_27;
	// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlElementFlag> HtmlAgilityPack.HtmlNode::ElementsFlags
	Dictionary_2_t2053159141 * ___ElementsFlags_28;

public:
	inline static int32_t get_offset_of_HtmlNodeTypeNameComment_25() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385_StaticFields, ___HtmlNodeTypeNameComment_25)); }
	inline String_t* get_HtmlNodeTypeNameComment_25() const { return ___HtmlNodeTypeNameComment_25; }
	inline String_t** get_address_of_HtmlNodeTypeNameComment_25() { return &___HtmlNodeTypeNameComment_25; }
	inline void set_HtmlNodeTypeNameComment_25(String_t* value)
	{
		___HtmlNodeTypeNameComment_25 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlNodeTypeNameComment_25, value);
	}

	inline static int32_t get_offset_of_HtmlNodeTypeNameDocument_26() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385_StaticFields, ___HtmlNodeTypeNameDocument_26)); }
	inline String_t* get_HtmlNodeTypeNameDocument_26() const { return ___HtmlNodeTypeNameDocument_26; }
	inline String_t** get_address_of_HtmlNodeTypeNameDocument_26() { return &___HtmlNodeTypeNameDocument_26; }
	inline void set_HtmlNodeTypeNameDocument_26(String_t* value)
	{
		___HtmlNodeTypeNameDocument_26 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlNodeTypeNameDocument_26, value);
	}

	inline static int32_t get_offset_of_HtmlNodeTypeNameText_27() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385_StaticFields, ___HtmlNodeTypeNameText_27)); }
	inline String_t* get_HtmlNodeTypeNameText_27() const { return ___HtmlNodeTypeNameText_27; }
	inline String_t** get_address_of_HtmlNodeTypeNameText_27() { return &___HtmlNodeTypeNameText_27; }
	inline void set_HtmlNodeTypeNameText_27(String_t* value)
	{
		___HtmlNodeTypeNameText_27 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlNodeTypeNameText_27, value);
	}

	inline static int32_t get_offset_of_ElementsFlags_28() { return static_cast<int32_t>(offsetof(HtmlNode_t916417385_StaticFields, ___ElementsFlags_28)); }
	inline Dictionary_2_t2053159141 * get_ElementsFlags_28() const { return ___ElementsFlags_28; }
	inline Dictionary_2_t2053159141 ** get_address_of_ElementsFlags_28() { return &___ElementsFlags_28; }
	inline void set_ElementsFlags_28(Dictionary_2_t2053159141 * value)
	{
		___ElementsFlags_28 = value;
		Il2CppCodeGenWriteBarrier(&___ElementsFlags_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
