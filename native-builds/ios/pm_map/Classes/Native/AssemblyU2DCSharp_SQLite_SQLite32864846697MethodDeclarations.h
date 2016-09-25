#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SQLite_SQLite3_Result4130067399.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_SQLite_SQLite3_ConfigOption3651740289.h"
#include "AssemblyU2DCSharp_SQLite_SQLite3_ColType3329240688.h"

// SQLite.SQLite3/Result SQLite.SQLite3::Open(System.String,System.IntPtr&)
extern "C"  int32_t SQLite3_Open_m3121403520 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, IntPtr_t* ___db1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Open(System.String,System.IntPtr&,System.Int32,System.IntPtr)
extern "C"  int32_t SQLite3_Open_m624435109 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, IntPtr_t* ___db1, int32_t ___flags2, IntPtr_t ___zvfs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Open(System.Byte[],System.IntPtr&,System.Int32,System.IntPtr)
extern "C"  int32_t SQLite3_Open_m1005950892 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t4260760469* ___filename0, IntPtr_t* ___db1, int32_t ___flags2, IntPtr_t ___zvfs3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Open16(System.String,System.IntPtr&)
extern "C"  int32_t SQLite3_Open16_m491342117 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, IntPtr_t* ___db1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::EnableLoadExtension(System.IntPtr,System.Int32)
extern "C"  int32_t SQLite3_EnableLoadExtension_m3202786337 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, int32_t ___onoff1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Close(System.IntPtr)
extern "C"  int32_t SQLite3_Close_m3948459828 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Config(SQLite.SQLite3/ConfigOption)
extern "C"  int32_t SQLite3_Config_m4182460821 (Il2CppObject * __this /* static, unused */, int32_t ___option0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::SetDirectory(System.UInt32,System.String)
extern "C"  int32_t SQLite3_SetDirectory_m3057938255 (Il2CppObject * __this /* static, unused */, uint32_t ___directoryType0, String_t* ___directoryPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::BusyTimeout(System.IntPtr,System.Int32)
extern "C"  int32_t SQLite3_BusyTimeout_m2302632979 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, int32_t ___milliseconds1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::Changes(System.IntPtr)
extern "C"  int32_t SQLite3_Changes_m3508586091 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Prepare2(System.IntPtr,System.String,System.Int32,System.IntPtr&,System.IntPtr)
extern "C"  int32_t SQLite3_Prepare2_m408941440 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, String_t* ___sql1, int32_t ___numBytes2, IntPtr_t* ___stmt3, IntPtr_t ___pzTail4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::Prepare2(System.IntPtr,System.String)
extern "C"  IntPtr_t SQLite3_Prepare2_m634160322 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, String_t* ___query1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Step(System.IntPtr)
extern "C"  int32_t SQLite3_Step_m3265137230 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Reset(System.IntPtr)
extern "C"  int32_t SQLite3_Reset_m3199532797 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/Result SQLite.SQLite3::Finalize(System.IntPtr)
extern "C"  int32_t SQLite3_Finalize_m118520636 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 SQLite.SQLite3::LastInsertRowid(System.IntPtr)
extern "C"  int64_t SQLite3_LastInsertRowid_m1806449865 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::Errmsg(System.IntPtr)
extern "C"  IntPtr_t SQLite3_Errmsg_m2808025717 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLite3::GetErrmsg(System.IntPtr)
extern "C"  String_t* SQLite3_GetErrmsg_m78855857 (Il2CppObject * __this /* static, unused */, IntPtr_t ___db0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindParameterIndex(System.IntPtr,System.String)
extern "C"  int32_t SQLite3_BindParameterIndex_m3807053614 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindNull(System.IntPtr,System.Int32)
extern "C"  int32_t SQLite3_BindNull_m4275266435 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindInt(System.IntPtr,System.Int32,System.Int32)
extern "C"  int32_t SQLite3_BindInt_m278985020 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, int32_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindInt64(System.IntPtr,System.Int32,System.Int64)
extern "C"  int32_t SQLite3_BindInt64_m629319039 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, int64_t ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindDouble(System.IntPtr,System.Int32,System.Double)
extern "C"  int32_t SQLite3_BindDouble_m1992012425 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, double ___val2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindText(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr)
extern "C"  int32_t SQLite3_BindText_m2444250208 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, String_t* ___val2, int32_t ___n3, IntPtr_t ___free4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::BindBlob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr)
extern "C"  int32_t SQLite3_BindBlob_m2675786441 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, ByteU5BU5D_t4260760469* ___val2, int32_t ___n3, IntPtr_t ___free4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::ColumnCount(System.IntPtr)
extern "C"  int32_t SQLite3_ColumnCount_m3206623637 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::ColumnName(System.IntPtr,System.Int32)
extern "C"  IntPtr_t SQLite3_ColumnName_m1623618823 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::ColumnName16Internal(System.IntPtr,System.Int32)
extern "C"  IntPtr_t SQLite3_ColumnName16Internal_m4152476233 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLite3::ColumnName16(System.IntPtr,System.Int32)
extern "C"  String_t* SQLite3_ColumnName16_m3413743002 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SQLite.SQLite3/ColType SQLite.SQLite3::ColumnType(System.IntPtr,System.Int32)
extern "C"  int32_t SQLite3_ColumnType_m1183365966 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::ColumnInt(System.IntPtr,System.Int32)
extern "C"  int32_t SQLite3_ColumnInt_m732058626 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 SQLite.SQLite3::ColumnInt64(System.IntPtr,System.Int32)
extern "C"  int64_t SQLite3_ColumnInt64_m1165357471 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SQLite.SQLite3::ColumnDouble(System.IntPtr,System.Int32)
extern "C"  double SQLite3_ColumnDouble_m2846226491 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::ColumnText(System.IntPtr,System.Int32)
extern "C"  IntPtr_t SQLite3_ColumnText_m1487198377 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::ColumnText16(System.IntPtr,System.Int32)
extern "C"  IntPtr_t SQLite3_ColumnText16_m2570780686 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr SQLite.SQLite3::ColumnBlob(System.IntPtr,System.Int32)
extern "C"  IntPtr_t SQLite3_ColumnBlob_m1777187609 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SQLite.SQLite3::ColumnBytes(System.IntPtr,System.Int32)
extern "C"  int32_t SQLite3_ColumnBytes_m118485694 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SQLite.SQLite3::ColumnString(System.IntPtr,System.Int32)
extern "C"  String_t* SQLite3_ColumnString_m1646223419 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] SQLite.SQLite3::ColumnByteArray(System.IntPtr,System.Int32)
extern "C"  ByteU5BU5D_t4260760469* SQLite3_ColumnByteArray_m1395466664 (Il2CppObject * __this /* static, unused */, IntPtr_t ___stmt0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
