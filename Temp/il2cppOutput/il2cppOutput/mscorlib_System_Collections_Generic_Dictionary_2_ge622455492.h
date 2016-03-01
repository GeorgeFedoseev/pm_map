#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1417492998;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>[]
struct List_1U5BU5D_t677811263;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Material>
struct IEqualityComparer_1_t4210863151;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Material,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>,System.Collections.DictionaryEntry>
struct Transform_1_t1710509098;

#include "mscorlib_System_Object837106420.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Material,System.Collections.Generic.List`1<ProBuilder2.Common.pb_Face>>
struct  Dictionary_2_t622455492  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t1809983122* ___table_0;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t1417492998* ___linkSlots_1;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	MaterialU5BU5D_t3353847197* ___keySlots_2;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	List_1U5BU5D_t677811263* ___valueSlots_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_5;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_6;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_7;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Object_t* ___hcp_8;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t2995724695 * ___serialization_info_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_10;
};
struct Dictionary_2_t622455492_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1710509098 * ___U3CU3Ef__amU24cacheB_11;
};
