// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bloodcurdle_DES311/Public/MainPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainPlayerCharacter() {}
// Cross Module References
	BLOODCURDLE_DES311_API UClass* Z_Construct_UClass_AMainPlayerCharacter();
	BLOODCURDLE_DES311_API UClass* Z_Construct_UClass_AMainPlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Bloodcurdle_DES311();
// End Cross Module References
	void AMainPlayerCharacter::StaticRegisterNativesAMainPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainPlayerCharacter);
	UClass* Z_Construct_UClass_AMainPlayerCharacter_NoRegister()
	{
		return AMainPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMainPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Bloodcurdle_DES311,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MainPlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/MainPlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MainPlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MainPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_Camera_MetaData), Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_Camera_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_InputMap_MetaData[] = {
		{ "Category", "Inputs" },
		{ "ModuleRelativePath", "Public/MainPlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_InputMap = { "InputMap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMainPlayerCharacter, InputMap), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_InputMap_MetaData), Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_InputMap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainPlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainPlayerCharacter_Statics::NewProp_InputMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainPlayerCharacter_Statics::ClassParams = {
		&AMainPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainPlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainPlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainPlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMainPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_AMainPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainPlayerCharacter.OuterSingleton, Z_Construct_UClass_AMainPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainPlayerCharacter.OuterSingleton;
	}
	template<> BLOODCURDLE_DES311_API UClass* StaticClass<AMainPlayerCharacter>()
	{
		return AMainPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainPlayerCharacter);
	AMainPlayerCharacter::~AMainPlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainPlayerCharacter, AMainPlayerCharacter::StaticClass, TEXT("AMainPlayerCharacter"), &Z_Registration_Info_UClass_AMainPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainPlayerCharacter), 2523809615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainPlayerCharacter_h_3739015501(TEXT("/Script/Bloodcurdle_DES311"),
		Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
