﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDAutomata
struct DTDAutomata_t415542374;

#include "System_Xml_Mono_Xml_DTDAutomata415542374.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDOneOrMoreAutomata
struct  DTDOneOrMoreAutomata_t4059181504  : public DTDAutomata_t415542374
{
public:
	// Mono.Xml.DTDAutomata Mono.Xml.DTDOneOrMoreAutomata::children
	DTDAutomata_t415542374 * ___children_1;

public:
	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(DTDOneOrMoreAutomata_t4059181504, ___children_1)); }
	inline DTDAutomata_t415542374 * get_children_1() const { return ___children_1; }
	inline DTDAutomata_t415542374 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(DTDAutomata_t415542374 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier(&___children_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
