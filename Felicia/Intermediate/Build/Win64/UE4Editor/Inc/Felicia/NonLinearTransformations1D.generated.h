// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FELICIA_NonLinearTransformations1D_generated_h
#error "NonLinearTransformations1D.generated.h already included, missing '#pragma once' in NonLinearTransformations1D.h"
#endif
#define FELICIA_NonLinearTransformations1D_generated_h

#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReverseFakePow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNonLinearTransformationLibrary::ReverseFakePow(Z_Param_Base,Z_Param_Exp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFakePow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNonLinearTransformationLibrary::FakePow(Z_Param_Base,Z_Param_Exp); \
		P_NATIVE_END; \
	}


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReverseFakePow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNonLinearTransformationLibrary::ReverseFakePow(Z_Param_Base,Z_Param_Exp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFakePow) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Base); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Exp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UNonLinearTransformationLibrary::FakePow(Z_Param_Base,Z_Param_Exp); \
		P_NATIVE_END; \
	}


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNonLinearTransformationLibrary(); \
	friend struct Z_Construct_UClass_UNonLinearTransformationLibrary_Statics; \
public: \
	DECLARE_CLASS(UNonLinearTransformationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Felicia"), NO_API) \
	DECLARE_SERIALIZER(UNonLinearTransformationLibrary)


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNonLinearTransformationLibrary(); \
	friend struct Z_Construct_UClass_UNonLinearTransformationLibrary_Statics; \
public: \
	DECLARE_CLASS(UNonLinearTransformationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Felicia"), NO_API) \
	DECLARE_SERIALIZER(UNonLinearTransformationLibrary)


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNonLinearTransformationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNonLinearTransformationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNonLinearTransformationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNonLinearTransformationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNonLinearTransformationLibrary(UNonLinearTransformationLibrary&&); \
	NO_API UNonLinearTransformationLibrary(const UNonLinearTransformationLibrary&); \
public:


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNonLinearTransformationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNonLinearTransformationLibrary(UNonLinearTransformationLibrary&&); \
	NO_API UNonLinearTransformationLibrary(const UNonLinearTransformationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNonLinearTransformationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNonLinearTransformationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNonLinearTransformationLibrary)


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_PRIVATE_PROPERTY_OFFSET
#define Felicia_Source_Felicia_NonLinearTransformations1D_h_12_PROLOG
#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_PRIVATE_PROPERTY_OFFSET \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_RPC_WRAPPERS \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_INCLASS \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Felicia_Source_Felicia_NonLinearTransformations1D_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_PRIVATE_PROPERTY_OFFSET \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_INCLASS_NO_PURE_DECLS \
	Felicia_Source_Felicia_NonLinearTransformations1D_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FELICIA_API UClass* StaticClass<class UNonLinearTransformationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Felicia_Source_Felicia_NonLinearTransformations1D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
