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
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct List_1_t2094616185;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>>
struct Dictionary_2_t2915034555;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.NameValuePairList
struct  NameValuePairList_t4121194212  : public Il2CppObject
{
public:
	// System.String HtmlAgilityPack.NameValuePairList::Text
	String_t* ___Text_0;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> HtmlAgilityPack.NameValuePairList::_allPairs
	List_1_t2094616185 * ____allPairs_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>> HtmlAgilityPack.NameValuePairList::_pairsWithName
	Dictionary_2_t2915034555 * ____pairsWithName_2;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(NameValuePairList_t4121194212, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier(&___Text_0, value);
	}

	inline static int32_t get_offset_of__allPairs_1() { return static_cast<int32_t>(offsetof(NameValuePairList_t4121194212, ____allPairs_1)); }
	inline List_1_t2094616185 * get__allPairs_1() const { return ____allPairs_1; }
	inline List_1_t2094616185 ** get_address_of__allPairs_1() { return &____allPairs_1; }
	inline void set__allPairs_1(List_1_t2094616185 * value)
	{
		____allPairs_1 = value;
		Il2CppCodeGenWriteBarrier(&____allPairs_1, value);
	}

	inline static int32_t get_offset_of__pairsWithName_2() { return static_cast<int32_t>(offsetof(NameValuePairList_t4121194212, ____pairsWithName_2)); }
	inline Dictionary_2_t2915034555 * get__pairsWithName_2() const { return ____pairsWithName_2; }
	inline Dictionary_2_t2915034555 ** get_address_of__pairsWithName_2() { return &____pairsWithName_2; }
	inline void set__pairsWithName_2(Dictionary_2_t2915034555 * value)
	{
		____pairsWithName_2 = value;
		Il2CppCodeGenWriteBarrier(&____pairsWithName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
