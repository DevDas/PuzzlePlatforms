// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_PuzzlePlatformGameInstance_generated_h
#error "PuzzlePlatformGameInstance.generated.h already included, missing '#pragma once' in PuzzlePlatformGameInstance.h"
#endif
#define PUZZLEPLATFORMS_PuzzlePlatformGameInstance_generated_h

#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_SPARSE_DATA
#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Address); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Address); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(); \
		P_NATIVE_END; \
	}


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Address); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Address); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(); \
		P_NATIVE_END; \
	}


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzlePlatformGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzlePlatformGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPuzzlePlatformGameInstance)


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzlePlatformGameInstance(); \
	friend struct Z_Construct_UClass_UPuzzlePlatformGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPuzzlePlatformGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UPuzzlePlatformGameInstance)


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzlePlatformGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzlePlatformGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzlePlatformGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzlePlatformGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzlePlatformGameInstance(UPuzzlePlatformGameInstance&&); \
	NO_API UPuzzlePlatformGameInstance(const UPuzzlePlatformGameInstance&); \
public:


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzlePlatformGameInstance(UPuzzlePlatformGameInstance&&); \
	NO_API UPuzzlePlatformGameInstance(const UPuzzlePlatformGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzlePlatformGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzlePlatformGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzlePlatformGameInstance)


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_12_PROLOG
#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_SPARSE_DATA \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_RPC_WRAPPERS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_INCLASS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_SPARSE_DATA \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UPuzzlePlatformGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
