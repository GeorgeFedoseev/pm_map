#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,TMPro.GlyphInfo>
struct Dictionary_2_t460200867;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TMPro.GlyphInfo>
struct  ValueCollection_t3455773876  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t460200867 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t3455773876, ___dictionary_0)); }
	inline Dictionary_2_t460200867 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t460200867 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t460200867 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___dictionary_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
