#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// HtmlAgilityPack.Crc32
struct Crc32_t1699861305;
// HtmlAgilityPack.HtmlAttribute
struct HtmlAttribute_t1980984887;
// HtmlAgilityPack.HtmlNode
struct HtmlNode_t916417385;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlNode>
struct Dictionary_2_t1736835755;
// System.Collections.Generic.Dictionary`2<System.Int32,HtmlAgilityPack.HtmlNode>
struct Dictionary_2_t913680624;
// System.Collections.Generic.List`1<HtmlAgilityPack.HtmlParseError>
struct List_1_t542534348;
// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"
#include "HtmlAgilityPack_HtmlAgilityPack_HtmlDocument_Parse1774196652.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlDocument
struct  HtmlDocument_t4272798594  : public Il2CppObject
{
public:
	// System.Int32 HtmlAgilityPack.HtmlDocument::_c
	int32_t ____c_0;
	// HtmlAgilityPack.Crc32 HtmlAgilityPack.HtmlDocument::_crc32
	Crc32_t1699861305 * ____crc32_1;
	// HtmlAgilityPack.HtmlAttribute HtmlAgilityPack.HtmlDocument::_currentattribute
	HtmlAttribute_t1980984887 * ____currentattribute_2;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::_currentnode
	HtmlNode_t916417385 * ____currentnode_3;
	// System.Text.Encoding HtmlAgilityPack.HtmlDocument::_declaredencoding
	Encoding_t2012439129 * ____declaredencoding_4;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::_documentnode
	HtmlNode_t916417385 * ____documentnode_5;
	// System.Boolean HtmlAgilityPack.HtmlDocument::_fullcomment
	bool ____fullcomment_6;
	// System.Int32 HtmlAgilityPack.HtmlDocument::_index
	int32_t ____index_7;
	// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlNode> HtmlAgilityPack.HtmlDocument::Lastnodes
	Dictionary_2_t1736835755 * ___Lastnodes_8;
	// HtmlAgilityPack.HtmlNode HtmlAgilityPack.HtmlDocument::_lastparentnode
	HtmlNode_t916417385 * ____lastparentnode_9;
	// System.Int32 HtmlAgilityPack.HtmlDocument::_line
	int32_t ____line_10;
	// System.Int32 HtmlAgilityPack.HtmlDocument::_lineposition
	int32_t ____lineposition_11;
	// System.Int32 HtmlAgilityPack.HtmlDocument::_maxlineposition
	int32_t ____maxlineposition_12;
	// System.Collections.Generic.Dictionary`2<System.String,HtmlAgilityPack.HtmlNode> HtmlAgilityPack.HtmlDocument::Nodesid
	Dictionary_2_t1736835755 * ___Nodesid_13;
	// HtmlAgilityPack.HtmlDocument/ParseState HtmlAgilityPack.HtmlDocument::_oldstate
	int32_t ____oldstate_14;
	// System.Boolean HtmlAgilityPack.HtmlDocument::_onlyDetectEncoding
	bool ____onlyDetectEncoding_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,HtmlAgilityPack.HtmlNode> HtmlAgilityPack.HtmlDocument::Openednodes
	Dictionary_2_t913680624 * ___Openednodes_16;
	// System.Collections.Generic.List`1<HtmlAgilityPack.HtmlParseError> HtmlAgilityPack.HtmlDocument::_parseerrors
	List_1_t542534348 * ____parseerrors_17;
	// System.String HtmlAgilityPack.HtmlDocument::_remainder
	String_t* ____remainder_18;
	// System.Int32 HtmlAgilityPack.HtmlDocument::_remainderOffset
	int32_t ____remainderOffset_19;
	// HtmlAgilityPack.HtmlDocument/ParseState HtmlAgilityPack.HtmlDocument::_state
	int32_t ____state_20;
	// System.Text.Encoding HtmlAgilityPack.HtmlDocument::_streamencoding
	Encoding_t2012439129 * ____streamencoding_21;
	// System.String HtmlAgilityPack.HtmlDocument::Text
	String_t* ___Text_22;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionAddDebuggingAttributes
	bool ___OptionAddDebuggingAttributes_23;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionAutoCloseOnEnd
	bool ___OptionAutoCloseOnEnd_24;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionCheckSyntax
	bool ___OptionCheckSyntax_25;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionComputeChecksum
	bool ___OptionComputeChecksum_26;
	// System.Text.Encoding HtmlAgilityPack.HtmlDocument::OptionDefaultStreamEncoding
	Encoding_t2012439129 * ___OptionDefaultStreamEncoding_27;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionExtractErrorSourceText
	bool ___OptionExtractErrorSourceText_28;
	// System.Int32 HtmlAgilityPack.HtmlDocument::OptionExtractErrorSourceTextMaxLength
	int32_t ___OptionExtractErrorSourceTextMaxLength_29;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionFixNestedTags
	bool ___OptionFixNestedTags_30;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionOutputAsXml
	bool ___OptionOutputAsXml_31;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionOutputOptimizeAttributeValues
	bool ___OptionOutputOptimizeAttributeValues_32;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionOutputOriginalCase
	bool ___OptionOutputOriginalCase_33;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionOutputUpperCase
	bool ___OptionOutputUpperCase_34;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionReadEncoding
	bool ___OptionReadEncoding_35;
	// System.String HtmlAgilityPack.HtmlDocument::OptionStopperNodeName
	String_t* ___OptionStopperNodeName_36;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionUseIdAttribute
	bool ___OptionUseIdAttribute_37;
	// System.Boolean HtmlAgilityPack.HtmlDocument::OptionWriteEmptyNodes
	bool ___OptionWriteEmptyNodes_38;

public:
	inline static int32_t get_offset_of__c_0() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____c_0)); }
	inline int32_t get__c_0() const { return ____c_0; }
	inline int32_t* get_address_of__c_0() { return &____c_0; }
	inline void set__c_0(int32_t value)
	{
		____c_0 = value;
	}

	inline static int32_t get_offset_of__crc32_1() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____crc32_1)); }
	inline Crc32_t1699861305 * get__crc32_1() const { return ____crc32_1; }
	inline Crc32_t1699861305 ** get_address_of__crc32_1() { return &____crc32_1; }
	inline void set__crc32_1(Crc32_t1699861305 * value)
	{
		____crc32_1 = value;
		Il2CppCodeGenWriteBarrier(&____crc32_1, value);
	}

	inline static int32_t get_offset_of__currentattribute_2() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____currentattribute_2)); }
	inline HtmlAttribute_t1980984887 * get__currentattribute_2() const { return ____currentattribute_2; }
	inline HtmlAttribute_t1980984887 ** get_address_of__currentattribute_2() { return &____currentattribute_2; }
	inline void set__currentattribute_2(HtmlAttribute_t1980984887 * value)
	{
		____currentattribute_2 = value;
		Il2CppCodeGenWriteBarrier(&____currentattribute_2, value);
	}

	inline static int32_t get_offset_of__currentnode_3() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____currentnode_3)); }
	inline HtmlNode_t916417385 * get__currentnode_3() const { return ____currentnode_3; }
	inline HtmlNode_t916417385 ** get_address_of__currentnode_3() { return &____currentnode_3; }
	inline void set__currentnode_3(HtmlNode_t916417385 * value)
	{
		____currentnode_3 = value;
		Il2CppCodeGenWriteBarrier(&____currentnode_3, value);
	}

	inline static int32_t get_offset_of__declaredencoding_4() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____declaredencoding_4)); }
	inline Encoding_t2012439129 * get__declaredencoding_4() const { return ____declaredencoding_4; }
	inline Encoding_t2012439129 ** get_address_of__declaredencoding_4() { return &____declaredencoding_4; }
	inline void set__declaredencoding_4(Encoding_t2012439129 * value)
	{
		____declaredencoding_4 = value;
		Il2CppCodeGenWriteBarrier(&____declaredencoding_4, value);
	}

	inline static int32_t get_offset_of__documentnode_5() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____documentnode_5)); }
	inline HtmlNode_t916417385 * get__documentnode_5() const { return ____documentnode_5; }
	inline HtmlNode_t916417385 ** get_address_of__documentnode_5() { return &____documentnode_5; }
	inline void set__documentnode_5(HtmlNode_t916417385 * value)
	{
		____documentnode_5 = value;
		Il2CppCodeGenWriteBarrier(&____documentnode_5, value);
	}

	inline static int32_t get_offset_of__fullcomment_6() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____fullcomment_6)); }
	inline bool get__fullcomment_6() const { return ____fullcomment_6; }
	inline bool* get_address_of__fullcomment_6() { return &____fullcomment_6; }
	inline void set__fullcomment_6(bool value)
	{
		____fullcomment_6 = value;
	}

	inline static int32_t get_offset_of__index_7() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____index_7)); }
	inline int32_t get__index_7() const { return ____index_7; }
	inline int32_t* get_address_of__index_7() { return &____index_7; }
	inline void set__index_7(int32_t value)
	{
		____index_7 = value;
	}

	inline static int32_t get_offset_of_Lastnodes_8() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___Lastnodes_8)); }
	inline Dictionary_2_t1736835755 * get_Lastnodes_8() const { return ___Lastnodes_8; }
	inline Dictionary_2_t1736835755 ** get_address_of_Lastnodes_8() { return &___Lastnodes_8; }
	inline void set_Lastnodes_8(Dictionary_2_t1736835755 * value)
	{
		___Lastnodes_8 = value;
		Il2CppCodeGenWriteBarrier(&___Lastnodes_8, value);
	}

	inline static int32_t get_offset_of__lastparentnode_9() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____lastparentnode_9)); }
	inline HtmlNode_t916417385 * get__lastparentnode_9() const { return ____lastparentnode_9; }
	inline HtmlNode_t916417385 ** get_address_of__lastparentnode_9() { return &____lastparentnode_9; }
	inline void set__lastparentnode_9(HtmlNode_t916417385 * value)
	{
		____lastparentnode_9 = value;
		Il2CppCodeGenWriteBarrier(&____lastparentnode_9, value);
	}

	inline static int32_t get_offset_of__line_10() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____line_10)); }
	inline int32_t get__line_10() const { return ____line_10; }
	inline int32_t* get_address_of__line_10() { return &____line_10; }
	inline void set__line_10(int32_t value)
	{
		____line_10 = value;
	}

	inline static int32_t get_offset_of__lineposition_11() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____lineposition_11)); }
	inline int32_t get__lineposition_11() const { return ____lineposition_11; }
	inline int32_t* get_address_of__lineposition_11() { return &____lineposition_11; }
	inline void set__lineposition_11(int32_t value)
	{
		____lineposition_11 = value;
	}

	inline static int32_t get_offset_of__maxlineposition_12() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____maxlineposition_12)); }
	inline int32_t get__maxlineposition_12() const { return ____maxlineposition_12; }
	inline int32_t* get_address_of__maxlineposition_12() { return &____maxlineposition_12; }
	inline void set__maxlineposition_12(int32_t value)
	{
		____maxlineposition_12 = value;
	}

	inline static int32_t get_offset_of_Nodesid_13() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___Nodesid_13)); }
	inline Dictionary_2_t1736835755 * get_Nodesid_13() const { return ___Nodesid_13; }
	inline Dictionary_2_t1736835755 ** get_address_of_Nodesid_13() { return &___Nodesid_13; }
	inline void set_Nodesid_13(Dictionary_2_t1736835755 * value)
	{
		___Nodesid_13 = value;
		Il2CppCodeGenWriteBarrier(&___Nodesid_13, value);
	}

	inline static int32_t get_offset_of__oldstate_14() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____oldstate_14)); }
	inline int32_t get__oldstate_14() const { return ____oldstate_14; }
	inline int32_t* get_address_of__oldstate_14() { return &____oldstate_14; }
	inline void set__oldstate_14(int32_t value)
	{
		____oldstate_14 = value;
	}

	inline static int32_t get_offset_of__onlyDetectEncoding_15() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____onlyDetectEncoding_15)); }
	inline bool get__onlyDetectEncoding_15() const { return ____onlyDetectEncoding_15; }
	inline bool* get_address_of__onlyDetectEncoding_15() { return &____onlyDetectEncoding_15; }
	inline void set__onlyDetectEncoding_15(bool value)
	{
		____onlyDetectEncoding_15 = value;
	}

	inline static int32_t get_offset_of_Openednodes_16() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___Openednodes_16)); }
	inline Dictionary_2_t913680624 * get_Openednodes_16() const { return ___Openednodes_16; }
	inline Dictionary_2_t913680624 ** get_address_of_Openednodes_16() { return &___Openednodes_16; }
	inline void set_Openednodes_16(Dictionary_2_t913680624 * value)
	{
		___Openednodes_16 = value;
		Il2CppCodeGenWriteBarrier(&___Openednodes_16, value);
	}

	inline static int32_t get_offset_of__parseerrors_17() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____parseerrors_17)); }
	inline List_1_t542534348 * get__parseerrors_17() const { return ____parseerrors_17; }
	inline List_1_t542534348 ** get_address_of__parseerrors_17() { return &____parseerrors_17; }
	inline void set__parseerrors_17(List_1_t542534348 * value)
	{
		____parseerrors_17 = value;
		Il2CppCodeGenWriteBarrier(&____parseerrors_17, value);
	}

	inline static int32_t get_offset_of__remainder_18() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____remainder_18)); }
	inline String_t* get__remainder_18() const { return ____remainder_18; }
	inline String_t** get_address_of__remainder_18() { return &____remainder_18; }
	inline void set__remainder_18(String_t* value)
	{
		____remainder_18 = value;
		Il2CppCodeGenWriteBarrier(&____remainder_18, value);
	}

	inline static int32_t get_offset_of__remainderOffset_19() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____remainderOffset_19)); }
	inline int32_t get__remainderOffset_19() const { return ____remainderOffset_19; }
	inline int32_t* get_address_of__remainderOffset_19() { return &____remainderOffset_19; }
	inline void set__remainderOffset_19(int32_t value)
	{
		____remainderOffset_19 = value;
	}

	inline static int32_t get_offset_of__state_20() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____state_20)); }
	inline int32_t get__state_20() const { return ____state_20; }
	inline int32_t* get_address_of__state_20() { return &____state_20; }
	inline void set__state_20(int32_t value)
	{
		____state_20 = value;
	}

	inline static int32_t get_offset_of__streamencoding_21() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ____streamencoding_21)); }
	inline Encoding_t2012439129 * get__streamencoding_21() const { return ____streamencoding_21; }
	inline Encoding_t2012439129 ** get_address_of__streamencoding_21() { return &____streamencoding_21; }
	inline void set__streamencoding_21(Encoding_t2012439129 * value)
	{
		____streamencoding_21 = value;
		Il2CppCodeGenWriteBarrier(&____streamencoding_21, value);
	}

	inline static int32_t get_offset_of_Text_22() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___Text_22)); }
	inline String_t* get_Text_22() const { return ___Text_22; }
	inline String_t** get_address_of_Text_22() { return &___Text_22; }
	inline void set_Text_22(String_t* value)
	{
		___Text_22 = value;
		Il2CppCodeGenWriteBarrier(&___Text_22, value);
	}

	inline static int32_t get_offset_of_OptionAddDebuggingAttributes_23() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionAddDebuggingAttributes_23)); }
	inline bool get_OptionAddDebuggingAttributes_23() const { return ___OptionAddDebuggingAttributes_23; }
	inline bool* get_address_of_OptionAddDebuggingAttributes_23() { return &___OptionAddDebuggingAttributes_23; }
	inline void set_OptionAddDebuggingAttributes_23(bool value)
	{
		___OptionAddDebuggingAttributes_23 = value;
	}

	inline static int32_t get_offset_of_OptionAutoCloseOnEnd_24() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionAutoCloseOnEnd_24)); }
	inline bool get_OptionAutoCloseOnEnd_24() const { return ___OptionAutoCloseOnEnd_24; }
	inline bool* get_address_of_OptionAutoCloseOnEnd_24() { return &___OptionAutoCloseOnEnd_24; }
	inline void set_OptionAutoCloseOnEnd_24(bool value)
	{
		___OptionAutoCloseOnEnd_24 = value;
	}

	inline static int32_t get_offset_of_OptionCheckSyntax_25() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionCheckSyntax_25)); }
	inline bool get_OptionCheckSyntax_25() const { return ___OptionCheckSyntax_25; }
	inline bool* get_address_of_OptionCheckSyntax_25() { return &___OptionCheckSyntax_25; }
	inline void set_OptionCheckSyntax_25(bool value)
	{
		___OptionCheckSyntax_25 = value;
	}

	inline static int32_t get_offset_of_OptionComputeChecksum_26() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionComputeChecksum_26)); }
	inline bool get_OptionComputeChecksum_26() const { return ___OptionComputeChecksum_26; }
	inline bool* get_address_of_OptionComputeChecksum_26() { return &___OptionComputeChecksum_26; }
	inline void set_OptionComputeChecksum_26(bool value)
	{
		___OptionComputeChecksum_26 = value;
	}

	inline static int32_t get_offset_of_OptionDefaultStreamEncoding_27() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionDefaultStreamEncoding_27)); }
	inline Encoding_t2012439129 * get_OptionDefaultStreamEncoding_27() const { return ___OptionDefaultStreamEncoding_27; }
	inline Encoding_t2012439129 ** get_address_of_OptionDefaultStreamEncoding_27() { return &___OptionDefaultStreamEncoding_27; }
	inline void set_OptionDefaultStreamEncoding_27(Encoding_t2012439129 * value)
	{
		___OptionDefaultStreamEncoding_27 = value;
		Il2CppCodeGenWriteBarrier(&___OptionDefaultStreamEncoding_27, value);
	}

	inline static int32_t get_offset_of_OptionExtractErrorSourceText_28() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionExtractErrorSourceText_28)); }
	inline bool get_OptionExtractErrorSourceText_28() const { return ___OptionExtractErrorSourceText_28; }
	inline bool* get_address_of_OptionExtractErrorSourceText_28() { return &___OptionExtractErrorSourceText_28; }
	inline void set_OptionExtractErrorSourceText_28(bool value)
	{
		___OptionExtractErrorSourceText_28 = value;
	}

	inline static int32_t get_offset_of_OptionExtractErrorSourceTextMaxLength_29() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionExtractErrorSourceTextMaxLength_29)); }
	inline int32_t get_OptionExtractErrorSourceTextMaxLength_29() const { return ___OptionExtractErrorSourceTextMaxLength_29; }
	inline int32_t* get_address_of_OptionExtractErrorSourceTextMaxLength_29() { return &___OptionExtractErrorSourceTextMaxLength_29; }
	inline void set_OptionExtractErrorSourceTextMaxLength_29(int32_t value)
	{
		___OptionExtractErrorSourceTextMaxLength_29 = value;
	}

	inline static int32_t get_offset_of_OptionFixNestedTags_30() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionFixNestedTags_30)); }
	inline bool get_OptionFixNestedTags_30() const { return ___OptionFixNestedTags_30; }
	inline bool* get_address_of_OptionFixNestedTags_30() { return &___OptionFixNestedTags_30; }
	inline void set_OptionFixNestedTags_30(bool value)
	{
		___OptionFixNestedTags_30 = value;
	}

	inline static int32_t get_offset_of_OptionOutputAsXml_31() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionOutputAsXml_31)); }
	inline bool get_OptionOutputAsXml_31() const { return ___OptionOutputAsXml_31; }
	inline bool* get_address_of_OptionOutputAsXml_31() { return &___OptionOutputAsXml_31; }
	inline void set_OptionOutputAsXml_31(bool value)
	{
		___OptionOutputAsXml_31 = value;
	}

	inline static int32_t get_offset_of_OptionOutputOptimizeAttributeValues_32() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionOutputOptimizeAttributeValues_32)); }
	inline bool get_OptionOutputOptimizeAttributeValues_32() const { return ___OptionOutputOptimizeAttributeValues_32; }
	inline bool* get_address_of_OptionOutputOptimizeAttributeValues_32() { return &___OptionOutputOptimizeAttributeValues_32; }
	inline void set_OptionOutputOptimizeAttributeValues_32(bool value)
	{
		___OptionOutputOptimizeAttributeValues_32 = value;
	}

	inline static int32_t get_offset_of_OptionOutputOriginalCase_33() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionOutputOriginalCase_33)); }
	inline bool get_OptionOutputOriginalCase_33() const { return ___OptionOutputOriginalCase_33; }
	inline bool* get_address_of_OptionOutputOriginalCase_33() { return &___OptionOutputOriginalCase_33; }
	inline void set_OptionOutputOriginalCase_33(bool value)
	{
		___OptionOutputOriginalCase_33 = value;
	}

	inline static int32_t get_offset_of_OptionOutputUpperCase_34() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionOutputUpperCase_34)); }
	inline bool get_OptionOutputUpperCase_34() const { return ___OptionOutputUpperCase_34; }
	inline bool* get_address_of_OptionOutputUpperCase_34() { return &___OptionOutputUpperCase_34; }
	inline void set_OptionOutputUpperCase_34(bool value)
	{
		___OptionOutputUpperCase_34 = value;
	}

	inline static int32_t get_offset_of_OptionReadEncoding_35() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionReadEncoding_35)); }
	inline bool get_OptionReadEncoding_35() const { return ___OptionReadEncoding_35; }
	inline bool* get_address_of_OptionReadEncoding_35() { return &___OptionReadEncoding_35; }
	inline void set_OptionReadEncoding_35(bool value)
	{
		___OptionReadEncoding_35 = value;
	}

	inline static int32_t get_offset_of_OptionStopperNodeName_36() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionStopperNodeName_36)); }
	inline String_t* get_OptionStopperNodeName_36() const { return ___OptionStopperNodeName_36; }
	inline String_t** get_address_of_OptionStopperNodeName_36() { return &___OptionStopperNodeName_36; }
	inline void set_OptionStopperNodeName_36(String_t* value)
	{
		___OptionStopperNodeName_36 = value;
		Il2CppCodeGenWriteBarrier(&___OptionStopperNodeName_36, value);
	}

	inline static int32_t get_offset_of_OptionUseIdAttribute_37() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionUseIdAttribute_37)); }
	inline bool get_OptionUseIdAttribute_37() const { return ___OptionUseIdAttribute_37; }
	inline bool* get_address_of_OptionUseIdAttribute_37() { return &___OptionUseIdAttribute_37; }
	inline void set_OptionUseIdAttribute_37(bool value)
	{
		___OptionUseIdAttribute_37 = value;
	}

	inline static int32_t get_offset_of_OptionWriteEmptyNodes_38() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594, ___OptionWriteEmptyNodes_38)); }
	inline bool get_OptionWriteEmptyNodes_38() const { return ___OptionWriteEmptyNodes_38; }
	inline bool* get_address_of_OptionWriteEmptyNodes_38() { return &___OptionWriteEmptyNodes_38; }
	inline void set_OptionWriteEmptyNodes_38(bool value)
	{
		___OptionWriteEmptyNodes_38 = value;
	}
};

struct HtmlDocument_t4272798594_StaticFields
{
public:
	// System.String HtmlAgilityPack.HtmlDocument::HtmlExceptionRefNotChild
	String_t* ___HtmlExceptionRefNotChild_39;
	// System.String HtmlAgilityPack.HtmlDocument::HtmlExceptionUseIdAttributeFalse
	String_t* ___HtmlExceptionUseIdAttributeFalse_40;

public:
	inline static int32_t get_offset_of_HtmlExceptionRefNotChild_39() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594_StaticFields, ___HtmlExceptionRefNotChild_39)); }
	inline String_t* get_HtmlExceptionRefNotChild_39() const { return ___HtmlExceptionRefNotChild_39; }
	inline String_t** get_address_of_HtmlExceptionRefNotChild_39() { return &___HtmlExceptionRefNotChild_39; }
	inline void set_HtmlExceptionRefNotChild_39(String_t* value)
	{
		___HtmlExceptionRefNotChild_39 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlExceptionRefNotChild_39, value);
	}

	inline static int32_t get_offset_of_HtmlExceptionUseIdAttributeFalse_40() { return static_cast<int32_t>(offsetof(HtmlDocument_t4272798594_StaticFields, ___HtmlExceptionUseIdAttributeFalse_40)); }
	inline String_t* get_HtmlExceptionUseIdAttributeFalse_40() const { return ___HtmlExceptionUseIdAttributeFalse_40; }
	inline String_t** get_address_of_HtmlExceptionUseIdAttributeFalse_40() { return &___HtmlExceptionUseIdAttributeFalse_40; }
	inline void set_HtmlExceptionUseIdAttributeFalse_40(String_t* value)
	{
		___HtmlExceptionUseIdAttributeFalse_40 = value;
		Il2CppCodeGenWriteBarrier(&___HtmlExceptionUseIdAttributeFalse_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
