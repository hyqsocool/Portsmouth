// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PORTSMOUTH_PortsmouthCharacter_generated_h
#error "PortsmouthCharacter.generated.h already included, missing '#pragma once' in PortsmouthCharacter.h"
#endif
#define PORTSMOUTH_PortsmouthCharacter_generated_h

#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_RPC_WRAPPERS
#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPortsmouthCharacter(); \
	friend PORTSMOUTH_API class UClass* Z_Construct_UClass_APortsmouthCharacter(); \
	public: \
	DECLARE_CLASS(APortsmouthCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Portsmouth"), NO_API) \
	DECLARE_SERIALIZER(APortsmouthCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAPortsmouthCharacter(); \
	friend PORTSMOUTH_API class UClass* Z_Construct_UClass_APortsmouthCharacter(); \
	public: \
	DECLARE_CLASS(APortsmouthCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Portsmouth"), NO_API) \
	DECLARE_SERIALIZER(APortsmouthCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortsmouthCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortsmouthCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortsmouthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortsmouthCharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APortsmouthCharacter(const APortsmouthCharacter& InCopy); \
public:


#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API APortsmouthCharacter(const APortsmouthCharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortsmouthCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortsmouthCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortsmouthCharacter)


#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_8_PROLOG
#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_RPC_WRAPPERS \
	Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_INCLASS \
	Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_INCLASS_NO_PURE_DECLS \
	Portsmouth_Source_Portsmouth_PortsmouthCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Portsmouth_Source_Portsmouth_PortsmouthCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
