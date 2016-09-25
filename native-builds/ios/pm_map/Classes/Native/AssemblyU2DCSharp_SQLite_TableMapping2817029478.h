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
// SQLite.TableMapping/Column[]
struct ColumnU5BU5D_t1660000434;
// SQLite.PreparedSqlLiteInsertCommand
struct PreparedSqlLiteInsertCommand_t1604881465;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Func`2<SQLite.TableMapping/Column,System.Boolean>
struct Func_2_t1336857620;
// System.Func`2<SQLite.TableMapping/Column,System.String>
struct Func_2_t867290459;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.TableMapping
struct  TableMapping_t2817029478  : public Il2CppObject
{
public:
	// SQLite.TableMapping/Column SQLite.TableMapping::_autoPk
	Column_t1611479651 * ____autoPk_0;
	// SQLite.TableMapping/Column[] SQLite.TableMapping::_insertColumns
	ColumnU5BU5D_t1660000434* ____insertColumns_1;
	// SQLite.TableMapping/Column[] SQLite.TableMapping::_insertOrReplaceColumns
	ColumnU5BU5D_t1660000434* ____insertOrReplaceColumns_2;
	// SQLite.PreparedSqlLiteInsertCommand SQLite.TableMapping::_insertCommand
	PreparedSqlLiteInsertCommand_t1604881465 * ____insertCommand_3;
	// System.String SQLite.TableMapping::_insertCommandExtra
	String_t* ____insertCommandExtra_4;
	// System.Type SQLite.TableMapping::<MappedType>k__BackingField
	Type_t * ___U3CMappedTypeU3Ek__BackingField_5;
	// System.String SQLite.TableMapping::<TableName>k__BackingField
	String_t* ___U3CTableNameU3Ek__BackingField_6;
	// SQLite.TableMapping/Column[] SQLite.TableMapping::<Columns>k__BackingField
	ColumnU5BU5D_t1660000434* ___U3CColumnsU3Ek__BackingField_7;
	// SQLite.TableMapping/Column SQLite.TableMapping::<PK>k__BackingField
	Column_t1611479651 * ___U3CPKU3Ek__BackingField_8;
	// System.String SQLite.TableMapping::<GetByPrimaryKeySql>k__BackingField
	String_t* ___U3CGetByPrimaryKeySqlU3Ek__BackingField_9;
	// System.Boolean SQLite.TableMapping::<HasAutoIncPK>k__BackingField
	bool ___U3CHasAutoIncPKU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__autoPk_0() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ____autoPk_0)); }
	inline Column_t1611479651 * get__autoPk_0() const { return ____autoPk_0; }
	inline Column_t1611479651 ** get_address_of__autoPk_0() { return &____autoPk_0; }
	inline void set__autoPk_0(Column_t1611479651 * value)
	{
		____autoPk_0 = value;
		Il2CppCodeGenWriteBarrier(&____autoPk_0, value);
	}

	inline static int32_t get_offset_of__insertColumns_1() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ____insertColumns_1)); }
	inline ColumnU5BU5D_t1660000434* get__insertColumns_1() const { return ____insertColumns_1; }
	inline ColumnU5BU5D_t1660000434** get_address_of__insertColumns_1() { return &____insertColumns_1; }
	inline void set__insertColumns_1(ColumnU5BU5D_t1660000434* value)
	{
		____insertColumns_1 = value;
		Il2CppCodeGenWriteBarrier(&____insertColumns_1, value);
	}

	inline static int32_t get_offset_of__insertOrReplaceColumns_2() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ____insertOrReplaceColumns_2)); }
	inline ColumnU5BU5D_t1660000434* get__insertOrReplaceColumns_2() const { return ____insertOrReplaceColumns_2; }
	inline ColumnU5BU5D_t1660000434** get_address_of__insertOrReplaceColumns_2() { return &____insertOrReplaceColumns_2; }
	inline void set__insertOrReplaceColumns_2(ColumnU5BU5D_t1660000434* value)
	{
		____insertOrReplaceColumns_2 = value;
		Il2CppCodeGenWriteBarrier(&____insertOrReplaceColumns_2, value);
	}

	inline static int32_t get_offset_of__insertCommand_3() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ____insertCommand_3)); }
	inline PreparedSqlLiteInsertCommand_t1604881465 * get__insertCommand_3() const { return ____insertCommand_3; }
	inline PreparedSqlLiteInsertCommand_t1604881465 ** get_address_of__insertCommand_3() { return &____insertCommand_3; }
	inline void set__insertCommand_3(PreparedSqlLiteInsertCommand_t1604881465 * value)
	{
		____insertCommand_3 = value;
		Il2CppCodeGenWriteBarrier(&____insertCommand_3, value);
	}

	inline static int32_t get_offset_of__insertCommandExtra_4() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ____insertCommandExtra_4)); }
	inline String_t* get__insertCommandExtra_4() const { return ____insertCommandExtra_4; }
	inline String_t** get_address_of__insertCommandExtra_4() { return &____insertCommandExtra_4; }
	inline void set__insertCommandExtra_4(String_t* value)
	{
		____insertCommandExtra_4 = value;
		Il2CppCodeGenWriteBarrier(&____insertCommandExtra_4, value);
	}

	inline static int32_t get_offset_of_U3CMappedTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ___U3CMappedTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CMappedTypeU3Ek__BackingField_5() const { return ___U3CMappedTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CMappedTypeU3Ek__BackingField_5() { return &___U3CMappedTypeU3Ek__BackingField_5; }
	inline void set_U3CMappedTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CMappedTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMappedTypeU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CTableNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ___U3CTableNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CTableNameU3Ek__BackingField_6() const { return ___U3CTableNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CTableNameU3Ek__BackingField_6() { return &___U3CTableNameU3Ek__BackingField_6; }
	inline void set_U3CTableNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CTableNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTableNameU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CColumnsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ___U3CColumnsU3Ek__BackingField_7)); }
	inline ColumnU5BU5D_t1660000434* get_U3CColumnsU3Ek__BackingField_7() const { return ___U3CColumnsU3Ek__BackingField_7; }
	inline ColumnU5BU5D_t1660000434** get_address_of_U3CColumnsU3Ek__BackingField_7() { return &___U3CColumnsU3Ek__BackingField_7; }
	inline void set_U3CColumnsU3Ek__BackingField_7(ColumnU5BU5D_t1660000434* value)
	{
		___U3CColumnsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CColumnsU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CPKU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ___U3CPKU3Ek__BackingField_8)); }
	inline Column_t1611479651 * get_U3CPKU3Ek__BackingField_8() const { return ___U3CPKU3Ek__BackingField_8; }
	inline Column_t1611479651 ** get_address_of_U3CPKU3Ek__BackingField_8() { return &___U3CPKU3Ek__BackingField_8; }
	inline void set_U3CPKU3Ek__BackingField_8(Column_t1611479651 * value)
	{
		___U3CPKU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPKU3Ek__BackingField_8, value);
	}

	inline static int32_t get_offset_of_U3CGetByPrimaryKeySqlU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ___U3CGetByPrimaryKeySqlU3Ek__BackingField_9)); }
	inline String_t* get_U3CGetByPrimaryKeySqlU3Ek__BackingField_9() const { return ___U3CGetByPrimaryKeySqlU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CGetByPrimaryKeySqlU3Ek__BackingField_9() { return &___U3CGetByPrimaryKeySqlU3Ek__BackingField_9; }
	inline void set_U3CGetByPrimaryKeySqlU3Ek__BackingField_9(String_t* value)
	{
		___U3CGetByPrimaryKeySqlU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CGetByPrimaryKeySqlU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CHasAutoIncPKU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478, ___U3CHasAutoIncPKU3Ek__BackingField_10)); }
	inline bool get_U3CHasAutoIncPKU3Ek__BackingField_10() const { return ___U3CHasAutoIncPKU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CHasAutoIncPKU3Ek__BackingField_10() { return &___U3CHasAutoIncPKU3Ek__BackingField_10; }
	inline void set_U3CHasAutoIncPKU3Ek__BackingField_10(bool value)
	{
		___U3CHasAutoIncPKU3Ek__BackingField_10 = value;
	}
};

struct TableMapping_t2817029478_StaticFields
{
public:
	// System.Func`2<SQLite.TableMapping/Column,System.Boolean> SQLite.TableMapping::<>f__am$cacheB
	Func_2_t1336857620 * ___U3CU3Ef__amU24cacheB_11;
	// System.Func`2<SQLite.TableMapping/Column,System.String> SQLite.TableMapping::<>f__am$cacheC
	Func_2_t867290459 * ___U3CU3Ef__amU24cacheC_12;
	// System.Func`2<SQLite.TableMapping/Column,System.String> SQLite.TableMapping::<>f__am$cacheD
	Func_2_t867290459 * ___U3CU3Ef__amU24cacheD_13;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_11() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478_StaticFields, ___U3CU3Ef__amU24cacheB_11)); }
	inline Func_2_t1336857620 * get_U3CU3Ef__amU24cacheB_11() const { return ___U3CU3Ef__amU24cacheB_11; }
	inline Func_2_t1336857620 ** get_address_of_U3CU3Ef__amU24cacheB_11() { return &___U3CU3Ef__amU24cacheB_11; }
	inline void set_U3CU3Ef__amU24cacheB_11(Func_2_t1336857620 * value)
	{
		___U3CU3Ef__amU24cacheB_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheB_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_12() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478_StaticFields, ___U3CU3Ef__amU24cacheC_12)); }
	inline Func_2_t867290459 * get_U3CU3Ef__amU24cacheC_12() const { return ___U3CU3Ef__amU24cacheC_12; }
	inline Func_2_t867290459 ** get_address_of_U3CU3Ef__amU24cacheC_12() { return &___U3CU3Ef__amU24cacheC_12; }
	inline void set_U3CU3Ef__amU24cacheC_12(Func_2_t867290459 * value)
	{
		___U3CU3Ef__amU24cacheC_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_13() { return static_cast<int32_t>(offsetof(TableMapping_t2817029478_StaticFields, ___U3CU3Ef__amU24cacheD_13)); }
	inline Func_2_t867290459 * get_U3CU3Ef__amU24cacheD_13() const { return ___U3CU3Ef__amU24cacheD_13; }
	inline Func_2_t867290459 ** get_address_of_U3CU3Ef__amU24cacheD_13() { return &___U3CU3Ef__amU24cacheD_13; }
	inline void set_U3CU3Ef__amU24cacheD_13(Func_2_t867290459 * value)
	{
		___U3CU3Ef__amU24cacheD_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
