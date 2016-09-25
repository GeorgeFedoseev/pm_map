#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute>
struct IEnumerable_1_t4004778798;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SQLite.TableMapping/Column
struct  Column_t1611479651  : public Il2CppObject
{
public:
	// System.Reflection.PropertyInfo SQLite.TableMapping/Column::_prop
	PropertyInfo_t * ____prop_0;
	// System.String SQLite.TableMapping/Column::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.Type SQLite.TableMapping/Column::<ColumnType>k__BackingField
	Type_t * ___U3CColumnTypeU3Ek__BackingField_2;
	// System.String SQLite.TableMapping/Column::<Collation>k__BackingField
	String_t* ___U3CCollationU3Ek__BackingField_3;
	// System.Boolean SQLite.TableMapping/Column::<IsAutoInc>k__BackingField
	bool ___U3CIsAutoIncU3Ek__BackingField_4;
	// System.Boolean SQLite.TableMapping/Column::<IsAutoGuid>k__BackingField
	bool ___U3CIsAutoGuidU3Ek__BackingField_5;
	// System.Boolean SQLite.TableMapping/Column::<IsPK>k__BackingField
	bool ___U3CIsPKU3Ek__BackingField_6;
	// System.Collections.Generic.IEnumerable`1<SQLite.IndexedAttribute> SQLite.TableMapping/Column::<Indices>k__BackingField
	Il2CppObject* ___U3CIndicesU3Ek__BackingField_7;
	// System.Boolean SQLite.TableMapping/Column::<IsNullable>k__BackingField
	bool ___U3CIsNullableU3Ek__BackingField_8;
	// System.Int32 SQLite.TableMapping/Column::<MaxStringLength>k__BackingField
	int32_t ___U3CMaxStringLengthU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of__prop_0() { return static_cast<int32_t>(offsetof(Column_t1611479651, ____prop_0)); }
	inline PropertyInfo_t * get__prop_0() const { return ____prop_0; }
	inline PropertyInfo_t ** get_address_of__prop_0() { return &____prop_0; }
	inline void set__prop_0(PropertyInfo_t * value)
	{
		____prop_0 = value;
		Il2CppCodeGenWriteBarrier(&____prop_0, value);
	}

	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CColumnTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CColumnTypeU3Ek__BackingField_2)); }
	inline Type_t * get_U3CColumnTypeU3Ek__BackingField_2() const { return ___U3CColumnTypeU3Ek__BackingField_2; }
	inline Type_t ** get_address_of_U3CColumnTypeU3Ek__BackingField_2() { return &___U3CColumnTypeU3Ek__BackingField_2; }
	inline void set_U3CColumnTypeU3Ek__BackingField_2(Type_t * value)
	{
		___U3CColumnTypeU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CColumnTypeU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CCollationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CCollationU3Ek__BackingField_3)); }
	inline String_t* get_U3CCollationU3Ek__BackingField_3() const { return ___U3CCollationU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CCollationU3Ek__BackingField_3() { return &___U3CCollationU3Ek__BackingField_3; }
	inline void set_U3CCollationU3Ek__BackingField_3(String_t* value)
	{
		___U3CCollationU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCollationU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CIsAutoIncU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CIsAutoIncU3Ek__BackingField_4)); }
	inline bool get_U3CIsAutoIncU3Ek__BackingField_4() const { return ___U3CIsAutoIncU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsAutoIncU3Ek__BackingField_4() { return &___U3CIsAutoIncU3Ek__BackingField_4; }
	inline void set_U3CIsAutoIncU3Ek__BackingField_4(bool value)
	{
		___U3CIsAutoIncU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsAutoGuidU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CIsAutoGuidU3Ek__BackingField_5)); }
	inline bool get_U3CIsAutoGuidU3Ek__BackingField_5() const { return ___U3CIsAutoGuidU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsAutoGuidU3Ek__BackingField_5() { return &___U3CIsAutoGuidU3Ek__BackingField_5; }
	inline void set_U3CIsAutoGuidU3Ek__BackingField_5(bool value)
	{
		___U3CIsAutoGuidU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CIsPKU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CIsPKU3Ek__BackingField_6)); }
	inline bool get_U3CIsPKU3Ek__BackingField_6() const { return ___U3CIsPKU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsPKU3Ek__BackingField_6() { return &___U3CIsPKU3Ek__BackingField_6; }
	inline void set_U3CIsPKU3Ek__BackingField_6(bool value)
	{
		___U3CIsPKU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIndicesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CIndicesU3Ek__BackingField_7)); }
	inline Il2CppObject* get_U3CIndicesU3Ek__BackingField_7() const { return ___U3CIndicesU3Ek__BackingField_7; }
	inline Il2CppObject** get_address_of_U3CIndicesU3Ek__BackingField_7() { return &___U3CIndicesU3Ek__BackingField_7; }
	inline void set_U3CIndicesU3Ek__BackingField_7(Il2CppObject* value)
	{
		___U3CIndicesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CIndicesU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CIsNullableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CIsNullableU3Ek__BackingField_8)); }
	inline bool get_U3CIsNullableU3Ek__BackingField_8() const { return ___U3CIsNullableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsNullableU3Ek__BackingField_8() { return &___U3CIsNullableU3Ek__BackingField_8; }
	inline void set_U3CIsNullableU3Ek__BackingField_8(bool value)
	{
		___U3CIsNullableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CMaxStringLengthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Column_t1611479651, ___U3CMaxStringLengthU3Ek__BackingField_9)); }
	inline int32_t get_U3CMaxStringLengthU3Ek__BackingField_9() const { return ___U3CMaxStringLengthU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CMaxStringLengthU3Ek__BackingField_9() { return &___U3CMaxStringLengthU3Ek__BackingField_9; }
	inline void set_U3CMaxStringLengthU3Ek__BackingField_9(int32_t value)
	{
		___U3CMaxStringLengthU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
