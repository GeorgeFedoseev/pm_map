#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ProBuilder2.Common.pb_Face
struct pb_Face_t2085788961;
// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge>
struct List_1_t2882721146;

#include "mscorlib_System_Object837106420.h"

// ProBuilder2.Common.pb_EdgeConnection
struct  pb_EdgeConnection_t3537275647  : public Object_t
{
	// ProBuilder2.Common.pb_Face ProBuilder2.Common.pb_EdgeConnection::face
	pb_Face_t2085788961 * ___face_0;
	// System.Collections.Generic.List`1<ProBuilder2.Common.pb_Edge> ProBuilder2.Common.pb_EdgeConnection::edges
	List_1_t2882721146 * ___edges_1;
};
