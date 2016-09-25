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

// System.Configuration.ElementInformation
struct ElementInformation_t891176276;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_t3842833450;
// System.Configuration.PropertyInformation
struct PropertyInformation_t2703580109;
// System.Configuration.PropertyInformationCollection
struct PropertyInformationCollection_t2683512459;

#include "codegen/il2cpp-codegen.h"
#include "System_Configuration_System_Configuration_Configur3842833450.h"
#include "System_Configuration_System_Configuration_Property2703580109.h"
#include "System_Configuration_System_Configuration_ElementIn891176276.h"

// System.Void System.Configuration.ElementInformation::.ctor(System.Configuration.ConfigurationElement,System.Configuration.PropertyInformation)
extern "C"  void ElementInformation__ctor_m761476204 (ElementInformation_t891176276 * __this, ConfigurationElement_t3842833450 * ___owner0, PropertyInformation_t2703580109 * ___propertyInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Configuration.PropertyInformationCollection System.Configuration.ElementInformation::get_Properties()
extern "C"  PropertyInformationCollection_t2683512459 * ElementInformation_get_Properties_m2638548244 (ElementInformation_t891176276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ElementInformation::Reset(System.Configuration.ElementInformation)
extern "C"  void ElementInformation_Reset_m1439910307 (ElementInformation_t891176276 * __this, ElementInformation_t891176276 * ___parentInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
