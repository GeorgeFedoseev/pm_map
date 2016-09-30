#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SQLite.TableMapping/Column
struct Column_t1611479651;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteConnection/<Update>c__AnonStorey40
struct  U3CUpdateU3Ec__AnonStorey40_t430507271  : public Il2CppObject
{
public:
	// SQLite.TableMapping/Column SQLite.SQLiteConnection/<Update>c__AnonStorey40::pk
	Column_t1611479651 * ___pk_0;
	// System.Object SQLite.SQLiteConnection/<Update>c__AnonStorey40::obj
	Il2CppObject * ___obj_1;

public:
	inline static int32_t get_offset_of_pk_0() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey40_t430507271, ___pk_0)); }
	inline Column_t1611479651 * get_pk_0() const { return ___pk_0; }
	inline Column_t1611479651 ** get_address_of_pk_0() { return &___pk_0; }
	inline void set_pk_0(Column_t1611479651 * value)
	{
		___pk_0 = value;
		Il2CppCodeGenWriteBarrier(&___pk_0, value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CUpdateU3Ec__AnonStorey40_t430507271, ___obj_1)); }
	inline Il2CppObject * get_obj_1() const { return ___obj_1; }
	inline Il2CppObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(Il2CppObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier(&___obj_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
