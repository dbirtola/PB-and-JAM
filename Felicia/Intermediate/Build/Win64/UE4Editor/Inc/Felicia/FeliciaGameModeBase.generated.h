// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FELICIA_FeliciaGameModeBase_generated_h
#error "FeliciaGameModeBase.generated.h already included, missing '#pragma once' in FeliciaGameModeBase.h"
#endif
#define FELICIA_FeliciaGameModeBase_generated_h

#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_RPC_WRAPPERS
#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFeliciaGameModeBase(); \
	friend struct Z_Construct_UClass_AFeliciaGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFeliciaGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Felicia"), NO_API) \
	DECLARE_SERIALIZER(AFeliciaGameModeBase)


#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFeliciaGameModeBase(); \
	friend struct Z_Construct_UClass_AFeliciaGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFeliciaGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Felicia"), NO_API) \
	DECLARE_SERIALIZER(AFeliciaGameModeBase)


#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFeliciaGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFeliciaGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFeliciaGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFeliciaGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFeliciaGameModeBase(AFeliciaGameModeBase&&); \
	NO_API AFeliciaGameModeBase(const AFeliciaGameModeBase&); \
public:


#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFeliciaGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFeliciaGameModeBase(AFeliciaGameModeBase&&); \
	NO_API AFeliciaGameModeBase(const AFeliciaGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFeliciaGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFeliciaGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFeliciaGameModeBase)


#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Felicia_Source_Felicia_FeliciaGameModeBase_h_12_PROLOG
#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_RPC_WRAPPERS \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_INCLASS \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Felicia_Source_Felicia_FeliciaGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Felicia_Source_Felicia_FeliciaGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FELICIA_API UClass* StaticClass<class AFeliciaGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Felicia_Source_Felicia_FeliciaGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
