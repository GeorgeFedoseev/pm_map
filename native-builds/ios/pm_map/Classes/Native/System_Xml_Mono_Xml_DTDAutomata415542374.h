#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3593115196;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.DTDAutomata
struct  DTDAutomata_t415542374  : public Il2CppObject
{
public:
	// Mono.Xml.DTDObjectModel Mono.Xml.DTDAutomata::root
	DTDObjectModel_t3593115196 * ___root_0;

public:
	inline static int32_t get_offset_of_root_0() { return static_cast<int32_t>(offsetof(DTDAutomata_t415542374, ___root_0)); }
	inline DTDObjectModel_t3593115196 * get_root_0() const { return ___root_0; }
	inline DTDObjectModel_t3593115196 ** get_address_of_root_0() { return &___root_0; }
	inline void set_root_0(DTDObjectModel_t3593115196 * value)
	{
		___root_0 = value;
		Il2CppCodeGenWriteBarrier(&___root_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
