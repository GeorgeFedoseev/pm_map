#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SQLite.TableMapping/Column[]
struct ColumnU5BU5D_t1660000434;
// System.String
struct String_t;
// SQLite.TableMapping
struct TableMapping_t2817029478;
// System.Object
struct Il2CppObject;
// SQLite.SQLiteCommand
struct SQLiteCommand_t3677067489;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_SQLite_SQLite3_ColType3329240688.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1<System.Object>
struct  U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978  : public Il2CppObject
{
public:
	// System.IntPtr SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<stmt>__0
	IntPtr_t ___U3CstmtU3E__0_0;
	// SQLite.TableMapping/Column[] SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<cols>__1
	ColumnU5BU5D_t1660000434* ___U3CcolsU3E__1_1;
	// System.Int32 SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<i>__2
	int32_t ___U3CiU3E__2_2;
	// System.String SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<name>__3
	String_t* ___U3CnameU3E__3_3;
	// SQLite.TableMapping SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::map
	TableMapping_t2817029478 * ___map_4;
	// System.Object SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<obj>__4
	Il2CppObject * ___U3CobjU3E__4_5;
	// System.Int32 SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<i>__5
	int32_t ___U3CiU3E__5_6;
	// SQLite.SQLite3/ColType SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<colType>__6
	int32_t ___U3CcolTypeU3E__6_7;
	// System.Object SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<val>__7
	Il2CppObject * ___U3CvalU3E__7_8;
	// System.Int32 SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::$PC
	int32_t ___U24PC_9;
	// T SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::$current
	Il2CppObject * ___U24current_10;
	// SQLite.TableMapping SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<$>map
	TableMapping_t2817029478 * ___U3CU24U3Emap_11;
	// SQLite.SQLiteCommand SQLite.SQLiteCommand/<ExecuteDeferredQuery>c__Iterator2`1::<>f__this
	SQLiteCommand_t3677067489 * ___U3CU3Ef__this_12;

public:
	inline static int32_t get_offset_of_U3CstmtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CstmtU3E__0_0)); }
	inline IntPtr_t get_U3CstmtU3E__0_0() const { return ___U3CstmtU3E__0_0; }
	inline IntPtr_t* get_address_of_U3CstmtU3E__0_0() { return &___U3CstmtU3E__0_0; }
	inline void set_U3CstmtU3E__0_0(IntPtr_t value)
	{
		___U3CstmtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CcolsU3E__1_1() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CcolsU3E__1_1)); }
	inline ColumnU5BU5D_t1660000434* get_U3CcolsU3E__1_1() const { return ___U3CcolsU3E__1_1; }
	inline ColumnU5BU5D_t1660000434** get_address_of_U3CcolsU3E__1_1() { return &___U3CcolsU3E__1_1; }
	inline void set_U3CcolsU3E__1_1(ColumnU5BU5D_t1660000434* value)
	{
		___U3CcolsU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcolsU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U3CiU3E__2_2() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CiU3E__2_2)); }
	inline int32_t get_U3CiU3E__2_2() const { return ___U3CiU3E__2_2; }
	inline int32_t* get_address_of_U3CiU3E__2_2() { return &___U3CiU3E__2_2; }
	inline void set_U3CiU3E__2_2(int32_t value)
	{
		___U3CiU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CnameU3E__3_3() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CnameU3E__3_3)); }
	inline String_t* get_U3CnameU3E__3_3() const { return ___U3CnameU3E__3_3; }
	inline String_t** get_address_of_U3CnameU3E__3_3() { return &___U3CnameU3E__3_3; }
	inline void set_U3CnameU3E__3_3(String_t* value)
	{
		___U3CnameU3E__3_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3E__3_3, value);
	}

	inline static int32_t get_offset_of_map_4() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___map_4)); }
	inline TableMapping_t2817029478 * get_map_4() const { return ___map_4; }
	inline TableMapping_t2817029478 ** get_address_of_map_4() { return &___map_4; }
	inline void set_map_4(TableMapping_t2817029478 * value)
	{
		___map_4 = value;
		Il2CppCodeGenWriteBarrier(&___map_4, value);
	}

	inline static int32_t get_offset_of_U3CobjU3E__4_5() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CobjU3E__4_5)); }
	inline Il2CppObject * get_U3CobjU3E__4_5() const { return ___U3CobjU3E__4_5; }
	inline Il2CppObject ** get_address_of_U3CobjU3E__4_5() { return &___U3CobjU3E__4_5; }
	inline void set_U3CobjU3E__4_5(Il2CppObject * value)
	{
		___U3CobjU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CobjU3E__4_5, value);
	}

	inline static int32_t get_offset_of_U3CiU3E__5_6() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CiU3E__5_6)); }
	inline int32_t get_U3CiU3E__5_6() const { return ___U3CiU3E__5_6; }
	inline int32_t* get_address_of_U3CiU3E__5_6() { return &___U3CiU3E__5_6; }
	inline void set_U3CiU3E__5_6(int32_t value)
	{
		___U3CiU3E__5_6 = value;
	}

	inline static int32_t get_offset_of_U3CcolTypeU3E__6_7() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CcolTypeU3E__6_7)); }
	inline int32_t get_U3CcolTypeU3E__6_7() const { return ___U3CcolTypeU3E__6_7; }
	inline int32_t* get_address_of_U3CcolTypeU3E__6_7() { return &___U3CcolTypeU3E__6_7; }
	inline void set_U3CcolTypeU3E__6_7(int32_t value)
	{
		___U3CcolTypeU3E__6_7 = value;
	}

	inline static int32_t get_offset_of_U3CvalU3E__7_8() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CvalU3E__7_8)); }
	inline Il2CppObject * get_U3CvalU3E__7_8() const { return ___U3CvalU3E__7_8; }
	inline Il2CppObject ** get_address_of_U3CvalU3E__7_8() { return &___U3CvalU3E__7_8; }
	inline void set_U3CvalU3E__7_8(Il2CppObject * value)
	{
		___U3CvalU3E__7_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CvalU3E__7_8, value);
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U24current_10)); }
	inline Il2CppObject * get_U24current_10() const { return ___U24current_10; }
	inline Il2CppObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(Il2CppObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_10, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Emap_11() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CU24U3Emap_11)); }
	inline TableMapping_t2817029478 * get_U3CU24U3Emap_11() const { return ___U3CU24U3Emap_11; }
	inline TableMapping_t2817029478 ** get_address_of_U3CU24U3Emap_11() { return &___U3CU24U3Emap_11; }
	inline void set_U3CU24U3Emap_11(TableMapping_t2817029478 * value)
	{
		___U3CU24U3Emap_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Emap_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_12() { return static_cast<int32_t>(offsetof(U3CExecuteDeferredQueryU3Ec__Iterator2_1_t4015217978, ___U3CU3Ef__this_12)); }
	inline SQLiteCommand_t3677067489 * get_U3CU3Ef__this_12() const { return ___U3CU3Ef__this_12; }
	inline SQLiteCommand_t3677067489 ** get_address_of_U3CU3Ef__this_12() { return &___U3CU3Ef__this_12; }
	inline void set_U3CU3Ef__this_12(SQLiteCommand_t3677067489 * value)
	{
		___U3CU3Ef__this_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
