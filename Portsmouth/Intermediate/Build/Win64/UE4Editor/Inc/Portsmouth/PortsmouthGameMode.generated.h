// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTSMOUTH_PortsmouthGameMode_generated_h
#error "PortsmouthGameMode.generated.h already included, missing '#pragma once' in PortsmouthGameMode.h"
#endif
#define PORTSMOUTH_PortsmouthGameMode_generated_h

#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_RPC_WRAPPERS
#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPortsmouthGameMode(); \
	friend PORTSMOUTH_API class UClass* Z_Construct_UClass_APortsmouthGameMode(); \
	public: \
	DECLARE_CLASS(APortsmouthGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Portsmouth"), PORTSMOUTH_API) \
	DECLARE_SERIALIZER(APortsmouthGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAPortsmouthGameMode(); \
	friend PORTSMOUTH_API class UClass* Z_Construct_UClass_APortsmouthGameMode(); \
	public: \
	DECLARE_CLASS(APortsmouthGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), 0, TEXT("/Script/Portsmouth"), PORTSMOUTH_API) \
	DECLARE_SERIALIZER(APortsmouthGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	PORTSMOUTH_API APortsmouthGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortsmouthGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PORTSMOUTH_API, APortsmouthGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortsmouthGameMode); \
private: \
	/** Private copy-constructor, should never be used */ \
	PORTSMOUTH_API APortsmouthGameMode(const APortsmouthGameMode& InCopy); \
public:


#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	PORTSMOUTH_API APortsmouthGameMode(const APortsmouthGameMode& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(PORTSMOUTH_API, APortsmouthGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortsmouthGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortsmouthGameMode)


#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_6_PROLOG
#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_RPC_WRAPPERS \
	Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_INCLASS \
	Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_INCLASS_NO_PURE_DECLS \
	Portsmouth_Source_Portsmouth_PortsmouthGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Portsmouth_Source_Portsmouth_PortsmouthGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
