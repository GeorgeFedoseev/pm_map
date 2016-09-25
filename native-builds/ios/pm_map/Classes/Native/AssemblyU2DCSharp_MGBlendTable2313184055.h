#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t2316563989;
// UnityEngine.Random
struct Random_t3156561159;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MGBlendTable
struct  MGBlendTable_t2313184055  : public Il2CppObject
{
public:
	// System.Int32 MGBlendTable::mTableSzX
	int32_t ___mTableSzX_0;
	// System.Int32 MGBlendTable::mTableSzY
	int32_t ___mTableSzY_1;
	// System.Int32 MGBlendTable::mnToBlend
	int32_t ___mnToBlend_2;
	// System.Int32 MGBlendTable::mTableSzXY
	int32_t ___mTableSzXY_3;
	// System.Int32 MGBlendTable::mTotalSz
	int32_t ___mTotalSz_4;
	// System.Single[] MGBlendTable::mpTable
	SingleU5BU5D_t2316563989* ___mpTable_5;
	// UnityEngine.Random MGBlendTable::mRandom
	Random_t3156561159 * ___mRandom_6;

public:
	inline static int32_t get_offset_of_mTableSzX_0() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mTableSzX_0)); }
	inline int32_t get_mTableSzX_0() const { return ___mTableSzX_0; }
	inline int32_t* get_address_of_mTableSzX_0() { return &___mTableSzX_0; }
	inline void set_mTableSzX_0(int32_t value)
	{
		___mTableSzX_0 = value;
	}

	inline static int32_t get_offset_of_mTableSzY_1() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mTableSzY_1)); }
	inline int32_t get_mTableSzY_1() const { return ___mTableSzY_1; }
	inline int32_t* get_address_of_mTableSzY_1() { return &___mTableSzY_1; }
	inline void set_mTableSzY_1(int32_t value)
	{
		___mTableSzY_1 = value;
	}

	inline static int32_t get_offset_of_mnToBlend_2() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mnToBlend_2)); }
	inline int32_t get_mnToBlend_2() const { return ___mnToBlend_2; }
	inline int32_t* get_address_of_mnToBlend_2() { return &___mnToBlend_2; }
	inline void set_mnToBlend_2(int32_t value)
	{
		___mnToBlend_2 = value;
	}

	inline static int32_t get_offset_of_mTableSzXY_3() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mTableSzXY_3)); }
	inline int32_t get_mTableSzXY_3() const { return ___mTableSzXY_3; }
	inline int32_t* get_address_of_mTableSzXY_3() { return &___mTableSzXY_3; }
	inline void set_mTableSzXY_3(int32_t value)
	{
		___mTableSzXY_3 = value;
	}

	inline static int32_t get_offset_of_mTotalSz_4() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mTotalSz_4)); }
	inline int32_t get_mTotalSz_4() const { return ___mTotalSz_4; }
	inline int32_t* get_address_of_mTotalSz_4() { return &___mTotalSz_4; }
	inline void set_mTotalSz_4(int32_t value)
	{
		___mTotalSz_4 = value;
	}

	inline static int32_t get_offset_of_mpTable_5() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mpTable_5)); }
	inline SingleU5BU5D_t2316563989* get_mpTable_5() const { return ___mpTable_5; }
	inline SingleU5BU5D_t2316563989** get_address_of_mpTable_5() { return &___mpTable_5; }
	inline void set_mpTable_5(SingleU5BU5D_t2316563989* value)
	{
		___mpTable_5 = value;
		Il2CppCodeGenWriteBarrier(&___mpTable_5, value);
	}

	inline static int32_t get_offset_of_mRandom_6() { return static_cast<int32_t>(offsetof(MGBlendTable_t2313184055, ___mRandom_6)); }
	inline Random_t3156561159 * get_mRandom_6() const { return ___mRandom_6; }
	inline Random_t3156561159 ** get_address_of_mRandom_6() { return &___mRandom_6; }
	inline void set_mRandom_6(Random_t3156561159 * value)
	{
		___mRandom_6 = value;
		Il2CppCodeGenWriteBarrier(&___mRandom_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
