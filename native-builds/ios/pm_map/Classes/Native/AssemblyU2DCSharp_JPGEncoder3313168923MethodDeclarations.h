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

// JPGEncoder
struct JPGEncoder_t3313168923;
// UnityEngine.Color[]
struct ColorU5BU5D_t2441545636;
// BitString[]
struct BitStringU5BU5D_t1795265899;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// BitString
struct BitString_t1636641630;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// BitmapData
struct BitmapData_t249627033;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_BitString1636641630.h"
#include "AssemblyU2DCSharp_BitmapData249627033.h"

// System.Void JPGEncoder::.ctor(UnityEngine.Color[],System.Int32,System.Int32,System.Single)
extern "C"  void JPGEncoder__ctor_m453272361 (JPGEncoder_t3313168923 * __this, ColorU5BU5D_t2441545636* ___pixels0, int32_t ___width1, int32_t ___height2, float ___quality3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::initQuantTables(System.Int32)
extern "C"  void JPGEncoder_initQuantTables_m1556999815 (JPGEncoder_t3313168923 * __this, int32_t ___sf0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// BitString[] JPGEncoder::computeHuffmanTbl(System.Int32[],System.Int32[])
extern "C"  BitStringU5BU5D_t1795265899* JPGEncoder_computeHuffmanTbl_m13290675 (JPGEncoder_t3313168923 * __this, Int32U5BU5D_t3230847821* ___nrcodes0, Int32U5BU5D_t3230847821* ___std_table1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::initHuffmanTbl()
extern "C"  void JPGEncoder_initHuffmanTbl_m2058166853 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::initCategoryfloat()
extern "C"  void JPGEncoder_initCategoryfloat_m2709828620 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] JPGEncoder::GetBytes()
extern "C"  ByteU5BU5D_t4260760469* JPGEncoder_GetBytes_m389320643 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeBits(BitString)
extern "C"  void JPGEncoder_writeBits_m1437264401 (JPGEncoder_t3313168923 * __this, BitString_t1636641630 * ___bs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeByte(System.Byte)
extern "C"  void JPGEncoder_writeByte_m3379829478 (JPGEncoder_t3313168923 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeWord(System.Int32)
extern "C"  void JPGEncoder_writeWord_m1287334840 (JPGEncoder_t3313168923 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] JPGEncoder::fDCTQuant(System.Single[],System.Single[])
extern "C"  SingleU5BU5D_t2316563989* JPGEncoder_fDCTQuant_m650208292 (JPGEncoder_t3313168923 * __this, SingleU5BU5D_t2316563989* ___data0, SingleU5BU5D_t2316563989* ___fdtbl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeAPP0()
extern "C"  void JPGEncoder_writeAPP0_m4224117452 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeSOF0(System.Int32,System.Int32)
extern "C"  void JPGEncoder_writeSOF0_m2502255043 (JPGEncoder_t3313168923 * __this, int32_t ___width0, int32_t ___height1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeDQT()
extern "C"  void JPGEncoder_writeDQT_m1247444460 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeDHT()
extern "C"  void JPGEncoder_writeDHT_m1247176341 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::writeSOS()
extern "C"  void JPGEncoder_writeSOS_m1261236732 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JPGEncoder::processDU(System.Single[],System.Single[],System.Single,BitString[],BitString[])
extern "C"  float JPGEncoder_processDU_m985143607 (JPGEncoder_t3313168923 * __this, SingleU5BU5D_t2316563989* ___CDU0, SingleU5BU5D_t2316563989* ___fdtbl1, float ___DC2, BitStringU5BU5D_t1795265899* ___HTDC3, BitStringU5BU5D_t1795265899* ___HTAC4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::RGB2YUV(BitmapData,System.Int32,System.Int32)
extern "C"  void JPGEncoder_RGB2YUV_m2496140538 (JPGEncoder_t3313168923 * __this, BitmapData_t249627033 * ___img0, int32_t ___xpos1, int32_t ___ypos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::doEncoding()
extern "C"  void JPGEncoder_doEncoding_m763702658 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JPGEncoder::encode()
extern "C"  void JPGEncoder_encode_m4059569178 (JPGEncoder_t3313168923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
