// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/PuzzlePlatformGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePlatformGameInstance() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPuzzlePlatformGameInstance_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPuzzlePlatformGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host();
	PUZZLEPLATFORMS_API UFunction* Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join();
// End Cross Module References
	void UPuzzlePlatformGameInstance::StaticRegisterNativesUPuzzlePlatformGameInstance()
	{
		UClass* Class = UPuzzlePlatformGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UPuzzlePlatformGameInstance::execHost },
			{ "Join", &UPuzzlePlatformGameInstance::execJoin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics
	{
		struct PuzzlePlatformGameInstance_eventJoin_Parms
		{
			FString Address;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzlePlatformGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::NewProp_Address_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(PuzzlePlatformGameInstance_eventJoin_Parms), Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzlePlatformGameInstance_NoRegister()
	{
		return UPuzzlePlatformGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzlePlatformGameInstance_Host, "Host" }, // 2766480065
		{ &Z_Construct_UFunction_UPuzzlePlatformGameInstance_Join, "Join" }, // 1125993885
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzlePlatformGameInstance.h" },
		{ "ModuleRelativePath", "PuzzlePlatformGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzlePlatformGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::ClassParams = {
		&UPuzzlePlatformGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzlePlatformGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzlePlatformGameInstance, 658427347);
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPuzzlePlatformGameInstance>()
	{
		return UPuzzlePlatformGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzlePlatformGameInstance(Z_Construct_UClass_UPuzzlePlatformGameInstance, &UPuzzlePlatformGameInstance::StaticClass, TEXT("/Script/PuzzlePlatforms"), TEXT("UPuzzlePlatformGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzlePlatformGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
