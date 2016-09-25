#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.NameTable
struct NameTable_t2699772693;

#include "System_Xml_System_Xml_XmlNameTable1216706026.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HtmlAgilityPack.HtmlNameTable
struct  HtmlNameTable_t3191042974  : public XmlNameTable_t1216706026
{
public:
	// System.Xml.NameTable HtmlAgilityPack.HtmlNameTable::_nametable
	NameTable_t2699772693 * ____nametable_0;

public:
	inline static int32_t get_offset_of__nametable_0() { return static_cast<int32_t>(offsetof(HtmlNameTable_t3191042974, ____nametable_0)); }
	inline NameTable_t2699772693 * get__nametable_0() const { return ____nametable_0; }
	inline NameTable_t2699772693 ** get_address_of__nametable_0() { return &____nametable_0; }
	inline void set__nametable_0(NameTable_t2699772693 * value)
	{
		____nametable_0 = value;
		Il2CppCodeGenWriteBarrier(&____nametable_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
