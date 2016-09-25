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
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.TableQuery`1/CompileResult<System.Object>
struct  CompileResult_t3328293334  : public Il2CppObject
{
public:
	// System.String SQLite.TableQuery`1/CompileResult::<CommandText>k__BackingField
	String_t* ___U3CCommandTextU3Ek__BackingField_0;
	// System.Object SQLite.TableQuery`1/CompileResult::<Value>k__BackingField
	Il2CppObject * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCommandTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CompileResult_t3328293334, ___U3CCommandTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CCommandTextU3Ek__BackingField_0() const { return ___U3CCommandTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CCommandTextU3Ek__BackingField_0() { return &___U3CCommandTextU3Ek__BackingField_0; }
	inline void set_U3CCommandTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CCommandTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCommandTextU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CompileResult_t3328293334, ___U3CValueU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
