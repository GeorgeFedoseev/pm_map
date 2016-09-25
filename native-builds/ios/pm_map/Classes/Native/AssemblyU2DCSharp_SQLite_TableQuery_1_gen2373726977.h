#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.Expressions.Expression
struct Expression_t275615326;
// System.Collections.Generic.List`1<SQLite.BaseTableQuery/Ordering>
struct List_1_t1223879462;
// SQLite.BaseTableQuery
struct BaseTableQuery_t3074724625;
// SQLite.SQLiteConnection
struct SQLiteConnection_t2649932624;
// SQLite.TableMapping
struct TableMapping_t2817029478;
// System.Func`2<SQLite.BaseTableQuery/Ordering,System.String>
struct Func_2_t1734515260;
// System.Func`2<SQLite.TableQuery`1/CompileResult<System.Object>,System.String>
struct Func_2_t1089444540;

#include "AssemblyU2DCSharp_SQLite_BaseTableQuery3074724625.h"
#include "mscorlib_System_Nullable_1_gen1237965023.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.TableQuery`1<System.Object>
struct  TableQuery_1_t2373726977  : public BaseTableQuery_t3074724625
{
public:
	// System.Linq.Expressions.Expression SQLite.TableQuery`1::_where
	Expression_t275615326 * ____where_0;
	// System.Collections.Generic.List`1<SQLite.BaseTableQuery/Ordering> SQLite.TableQuery`1::_orderBys
	List_1_t1223879462 * ____orderBys_1;
	// System.Nullable`1<System.Int32> SQLite.TableQuery`1::_limit
	Nullable_1_t1237965023  ____limit_2;
	// System.Nullable`1<System.Int32> SQLite.TableQuery`1::_offset
	Nullable_1_t1237965023  ____offset_3;
	// SQLite.BaseTableQuery SQLite.TableQuery`1::_joinInner
	BaseTableQuery_t3074724625 * ____joinInner_4;
	// System.Linq.Expressions.Expression SQLite.TableQuery`1::_joinInnerKeySelector
	Expression_t275615326 * ____joinInnerKeySelector_5;
	// SQLite.BaseTableQuery SQLite.TableQuery`1::_joinOuter
	BaseTableQuery_t3074724625 * ____joinOuter_6;
	// System.Linq.Expressions.Expression SQLite.TableQuery`1::_joinOuterKeySelector
	Expression_t275615326 * ____joinOuterKeySelector_7;
	// System.Linq.Expressions.Expression SQLite.TableQuery`1::_joinSelector
	Expression_t275615326 * ____joinSelector_8;
	// System.Linq.Expressions.Expression SQLite.TableQuery`1::_selector
	Expression_t275615326 * ____selector_9;
	// System.Boolean SQLite.TableQuery`1::_deferred
	bool ____deferred_10;
	// SQLite.SQLiteConnection SQLite.TableQuery`1::<Connection>k__BackingField
	SQLiteConnection_t2649932624 * ___U3CConnectionU3Ek__BackingField_11;
	// SQLite.TableMapping SQLite.TableQuery`1::<Table>k__BackingField
	TableMapping_t2817029478 * ___U3CTableU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of__where_0() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____where_0)); }
	inline Expression_t275615326 * get__where_0() const { return ____where_0; }
	inline Expression_t275615326 ** get_address_of__where_0() { return &____where_0; }
	inline void set__where_0(Expression_t275615326 * value)
	{
		____where_0 = value;
		Il2CppCodeGenWriteBarrier(&____where_0, value);
	}

	inline static int32_t get_offset_of__orderBys_1() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____orderBys_1)); }
	inline List_1_t1223879462 * get__orderBys_1() const { return ____orderBys_1; }
	inline List_1_t1223879462 ** get_address_of__orderBys_1() { return &____orderBys_1; }
	inline void set__orderBys_1(List_1_t1223879462 * value)
	{
		____orderBys_1 = value;
		Il2CppCodeGenWriteBarrier(&____orderBys_1, value);
	}

	inline static int32_t get_offset_of__limit_2() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____limit_2)); }
	inline Nullable_1_t1237965023  get__limit_2() const { return ____limit_2; }
	inline Nullable_1_t1237965023 * get_address_of__limit_2() { return &____limit_2; }
	inline void set__limit_2(Nullable_1_t1237965023  value)
	{
		____limit_2 = value;
	}

	inline static int32_t get_offset_of__offset_3() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____offset_3)); }
	inline Nullable_1_t1237965023  get__offset_3() const { return ____offset_3; }
	inline Nullable_1_t1237965023 * get_address_of__offset_3() { return &____offset_3; }
	inline void set__offset_3(Nullable_1_t1237965023  value)
	{
		____offset_3 = value;
	}

	inline static int32_t get_offset_of__joinInner_4() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____joinInner_4)); }
	inline BaseTableQuery_t3074724625 * get__joinInner_4() const { return ____joinInner_4; }
	inline BaseTableQuery_t3074724625 ** get_address_of__joinInner_4() { return &____joinInner_4; }
	inline void set__joinInner_4(BaseTableQuery_t3074724625 * value)
	{
		____joinInner_4 = value;
		Il2CppCodeGenWriteBarrier(&____joinInner_4, value);
	}

	inline static int32_t get_offset_of__joinInnerKeySelector_5() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____joinInnerKeySelector_5)); }
	inline Expression_t275615326 * get__joinInnerKeySelector_5() const { return ____joinInnerKeySelector_5; }
	inline Expression_t275615326 ** get_address_of__joinInnerKeySelector_5() { return &____joinInnerKeySelector_5; }
	inline void set__joinInnerKeySelector_5(Expression_t275615326 * value)
	{
		____joinInnerKeySelector_5 = value;
		Il2CppCodeGenWriteBarrier(&____joinInnerKeySelector_5, value);
	}

	inline static int32_t get_offset_of__joinOuter_6() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____joinOuter_6)); }
	inline BaseTableQuery_t3074724625 * get__joinOuter_6() const { return ____joinOuter_6; }
	inline BaseTableQuery_t3074724625 ** get_address_of__joinOuter_6() { return &____joinOuter_6; }
	inline void set__joinOuter_6(BaseTableQuery_t3074724625 * value)
	{
		____joinOuter_6 = value;
		Il2CppCodeGenWriteBarrier(&____joinOuter_6, value);
	}

	inline static int32_t get_offset_of__joinOuterKeySelector_7() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____joinOuterKeySelector_7)); }
	inline Expression_t275615326 * get__joinOuterKeySelector_7() const { return ____joinOuterKeySelector_7; }
	inline Expression_t275615326 ** get_address_of__joinOuterKeySelector_7() { return &____joinOuterKeySelector_7; }
	inline void set__joinOuterKeySelector_7(Expression_t275615326 * value)
	{
		____joinOuterKeySelector_7 = value;
		Il2CppCodeGenWriteBarrier(&____joinOuterKeySelector_7, value);
	}

	inline static int32_t get_offset_of__joinSelector_8() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____joinSelector_8)); }
	inline Expression_t275615326 * get__joinSelector_8() const { return ____joinSelector_8; }
	inline Expression_t275615326 ** get_address_of__joinSelector_8() { return &____joinSelector_8; }
	inline void set__joinSelector_8(Expression_t275615326 * value)
	{
		____joinSelector_8 = value;
		Il2CppCodeGenWriteBarrier(&____joinSelector_8, value);
	}

	inline static int32_t get_offset_of__selector_9() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____selector_9)); }
	inline Expression_t275615326 * get__selector_9() const { return ____selector_9; }
	inline Expression_t275615326 ** get_address_of__selector_9() { return &____selector_9; }
	inline void set__selector_9(Expression_t275615326 * value)
	{
		____selector_9 = value;
		Il2CppCodeGenWriteBarrier(&____selector_9, value);
	}

	inline static int32_t get_offset_of__deferred_10() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ____deferred_10)); }
	inline bool get__deferred_10() const { return ____deferred_10; }
	inline bool* get_address_of__deferred_10() { return &____deferred_10; }
	inline void set__deferred_10(bool value)
	{
		____deferred_10 = value;
	}

	inline static int32_t get_offset_of_U3CConnectionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ___U3CConnectionU3Ek__BackingField_11)); }
	inline SQLiteConnection_t2649932624 * get_U3CConnectionU3Ek__BackingField_11() const { return ___U3CConnectionU3Ek__BackingField_11; }
	inline SQLiteConnection_t2649932624 ** get_address_of_U3CConnectionU3Ek__BackingField_11() { return &___U3CConnectionU3Ek__BackingField_11; }
	inline void set_U3CConnectionU3Ek__BackingField_11(SQLiteConnection_t2649932624 * value)
	{
		___U3CConnectionU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConnectionU3Ek__BackingField_11, value);
	}

	inline static int32_t get_offset_of_U3CTableU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977, ___U3CTableU3Ek__BackingField_12)); }
	inline TableMapping_t2817029478 * get_U3CTableU3Ek__BackingField_12() const { return ___U3CTableU3Ek__BackingField_12; }
	inline TableMapping_t2817029478 ** get_address_of_U3CTableU3Ek__BackingField_12() { return &___U3CTableU3Ek__BackingField_12; }
	inline void set_U3CTableU3Ek__BackingField_12(TableMapping_t2817029478 * value)
	{
		___U3CTableU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTableU3Ek__BackingField_12, value);
	}
};

struct TableQuery_1_t2373726977_StaticFields
{
public:
	// System.Func`2<SQLite.BaseTableQuery/Ordering,System.String> SQLite.TableQuery`1::<>f__am$cacheD
	Func_2_t1734515260 * ___U3CU3Ef__amU24cacheD_13;
	// System.Func`2<SQLite.TableQuery`1/CompileResult<T>,System.String> SQLite.TableQuery`1::<>f__am$cacheE
	Func_2_t1089444540 * ___U3CU3Ef__amU24cacheE_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_13() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977_StaticFields, ___U3CU3Ef__amU24cacheD_13)); }
	inline Func_2_t1734515260 * get_U3CU3Ef__amU24cacheD_13() const { return ___U3CU3Ef__amU24cacheD_13; }
	inline Func_2_t1734515260 ** get_address_of_U3CU3Ef__amU24cacheD_13() { return &___U3CU3Ef__amU24cacheD_13; }
	inline void set_U3CU3Ef__amU24cacheD_13(Func_2_t1734515260 * value)
	{
		___U3CU3Ef__amU24cacheD_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_14() { return static_cast<int32_t>(offsetof(TableQuery_1_t2373726977_StaticFields, ___U3CU3Ef__amU24cacheE_14)); }
	inline Func_2_t1089444540 * get_U3CU3Ef__amU24cacheE_14() const { return ___U3CU3Ef__amU24cacheE_14; }
	inline Func_2_t1089444540 ** get_address_of_U3CU3Ef__amU24cacheE_14() { return &___U3CU3Ef__amU24cacheE_14; }
	inline void set_U3CU3Ef__amU24cacheE_14(Func_2_t1089444540 * value)
	{
		___U3CU3Ef__amU24cacheE_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
