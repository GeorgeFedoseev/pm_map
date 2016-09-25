#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.UInt32[]
struct UInt32U5BU5D_t3230734560;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.Crc32
struct  Crc32_t1699861305  : public Il2CppObject
{
public:
	// System.UInt32 HtmlAgilityPack.Crc32::_crc32
	uint32_t ____crc32_0;

public:
	inline static int32_t get_offset_of__crc32_0() { return static_cast<int32_t>(offsetof(Crc32_t1699861305, ____crc32_0)); }
	inline uint32_t get__crc32_0() const { return ____crc32_0; }
	inline uint32_t* get_address_of__crc32_0() { return &____crc32_0; }
	inline void set__crc32_0(uint32_t value)
	{
		____crc32_0 = value;
	}
};

struct Crc32_t1699861305_StaticFields
{
public:
	// System.UInt32[] HtmlAgilityPack.Crc32::crc_32_tab
	UInt32U5BU5D_t3230734560* ___crc_32_tab_1;

public:
	inline static int32_t get_offset_of_crc_32_tab_1() { return static_cast<int32_t>(offsetof(Crc32_t1699861305_StaticFields, ___crc_32_tab_1)); }
	inline UInt32U5BU5D_t3230734560* get_crc_32_tab_1() const { return ___crc_32_tab_1; }
	inline UInt32U5BU5D_t3230734560** get_address_of_crc_32_tab_1() { return &___crc_32_tab_1; }
	inline void set_crc_32_tab_1(UInt32U5BU5D_t3230734560* value)
	{
		___crc_32_tab_1 = value;
		Il2CppCodeGenWriteBarrier(&___crc_32_tab_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
