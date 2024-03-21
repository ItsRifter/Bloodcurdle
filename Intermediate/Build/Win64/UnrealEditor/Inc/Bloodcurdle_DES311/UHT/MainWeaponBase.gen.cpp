// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bloodcurdle_DES311/Public/MainWeaponBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainWeaponBase() {}
// Cross Module References
	BLOODCURDLE_DES311_API UClass* Z_Construct_UClass_AMainWeaponBase();
	BLOODCURDLE_DES311_API UClass* Z_Construct_UClass_AMainWeaponBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Bloodcurdle_DES311();
// End Cross Module References
	void AMainWeaponBase::StaticRegisterNativesAMainWeaponBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainWeaponBase);
	UClass* Z_Construct_UClass_AMainWeaponBase_NoRegister()
	{
		return AMainWeaponBase::StaticClass();
	}
	struct Z_Construct_UClass_AMainWeaponBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainWeaponBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Bloodcurdle_DES311,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainWeaponBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainWeaponBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MainWeaponBase.h" },
		{ "ModuleRelativePath", "Public/MainWeaponBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainWeaponBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainWeaponBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainWeaponBase_Statics::ClassParams = {
		&AMainWeaponBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainWeaponBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainWeaponBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMainWeaponBase()
	{
		if (!Z_Registration_Info_UClass_AMainWeaponBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainWeaponBase.OuterSingleton, Z_Construct_UClass_AMainWeaponBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainWeaponBase.OuterSingleton;
	}
	template<> BLOODCURDLE_DES311_API UClass* StaticClass<AMainWeaponBase>()
	{
		return AMainWeaponBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainWeaponBase);
	AMainWeaponBase::~AMainWeaponBase() {}
	struct Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainWeaponBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainWeaponBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainWeaponBase, AMainWeaponBase::StaticClass, TEXT("AMainWeaponBase"), &Z_Registration_Info_UClass_AMainWeaponBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainWeaponBase), 3864546766U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainWeaponBase_h_2210356267(TEXT("/Script/Bloodcurdle_DES311"),
		Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainWeaponBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_Bloodcurdle_DES311_Source_Bloodcurdle_DES311_Public_MainWeaponBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
