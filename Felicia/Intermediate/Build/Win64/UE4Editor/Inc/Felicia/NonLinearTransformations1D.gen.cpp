// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Felicia/NonLinearTransformations1D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonLinearTransformations1D() {}
// Cross Module References
	FELICIA_API UClass* Z_Construct_UClass_UNonLinearTransformationLibrary_NoRegister();
	FELICIA_API UClass* Z_Construct_UClass_UNonLinearTransformationLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Felicia();
	FELICIA_API UFunction* Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow();
	FELICIA_API UFunction* Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow();
// End Cross Module References
	void UNonLinearTransformationLibrary::StaticRegisterNativesUNonLinearTransformationLibrary()
	{
		UClass* Class = UNonLinearTransformationLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FakePow", &UNonLinearTransformationLibrary::execFakePow },
			{ "ReverseFakePow", &UNonLinearTransformationLibrary::execReverseFakePow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics
	{
		struct NonLinearTransformationLibrary_eventFakePow_Parms
		{
			float Base;
			float Exp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Base;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NonLinearTransformationLibrary_eventFakePow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Exp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NonLinearTransformationLibrary_eventFakePow_Parms, Exp), METADATA_PARAMS(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Exp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Base_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NonLinearTransformationLibrary_eventFakePow_Parms, Base), METADATA_PARAMS(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Base_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Base_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::NewProp_Base,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|NonLinearTransformations" },
		{ "DisplayName", "Fake Power" },
		{ "KeyWords", "Smooth Start SmoothStart" },
		{ "ModuleRelativePath", "NonLinearTransformations1D.h" },
		{ "ShortToolTip", "Base(0 to 1) to Exp-th power, approximately." },
		{ "ToolTip", "(Also known as SmoothStart); Base to Exp-th power, approximately. For use on bases between 0 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNonLinearTransformationLibrary, nullptr, "FakePow", nullptr, nullptr, sizeof(NonLinearTransformationLibrary_eventFakePow_Parms), Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics
	{
		struct NonLinearTransformationLibrary_eventReverseFakePow_Parms
		{
			float Base;
			float Exp;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Base;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NonLinearTransformationLibrary_eventReverseFakePow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Exp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NonLinearTransformationLibrary_eventReverseFakePow_Parms, Exp), METADATA_PARAMS(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Exp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Base_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NonLinearTransformationLibrary_eventReverseFakePow_Parms, Base), METADATA_PARAMS(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Base_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Base_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::NewProp_Base,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|NonLinearTransformations" },
		{ "DisplayName", "Reverse Fake Power" },
		{ "KeyWords", "Smooth Stop SmoothStop" },
		{ "ModuleRelativePath", "NonLinearTransformations1D.h" },
		{ "ShortToolTip", "1 - FakePow(1 - Base(0 to 1), Exp)" },
		{ "ToolTip", "(Also known as SmoothStop); 1 - FakePow(1 - Base, Exp). For use on bases between 0 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNonLinearTransformationLibrary, nullptr, "ReverseFakePow", nullptr, nullptr, sizeof(NonLinearTransformationLibrary_eventReverseFakePow_Parms), Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNonLinearTransformationLibrary_NoRegister()
	{
		return UNonLinearTransformationLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNonLinearTransformationLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Felicia,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNonLinearTransformationLibrary_FakePow, "FakePow" }, // 2877067980
		{ &Z_Construct_UFunction_UNonLinearTransformationLibrary_ReverseFakePow, "ReverseFakePow" }, // 1986009118
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NonLinearTransformations1D.h" },
		{ "ModuleRelativePath", "NonLinearTransformations1D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNonLinearTransformationLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::ClassParams = {
		&UNonLinearTransformationLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNonLinearTransformationLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNonLinearTransformationLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNonLinearTransformationLibrary, 1964858859);
	template<> FELICIA_API UClass* StaticClass<UNonLinearTransformationLibrary>()
	{
		return UNonLinearTransformationLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNonLinearTransformationLibrary(Z_Construct_UClass_UNonLinearTransformationLibrary, &UNonLinearTransformationLibrary::StaticClass, TEXT("/Script/Felicia"), TEXT("UNonLinearTransformationLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNonLinearTransformationLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
