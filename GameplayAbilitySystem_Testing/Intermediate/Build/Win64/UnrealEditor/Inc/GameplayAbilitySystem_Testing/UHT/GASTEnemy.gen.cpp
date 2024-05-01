// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem_Testing/Public/Character/GASTEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTEnemy() {}
// Cross Module References
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTCharacterbase();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTEnemy();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTEnemy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing();
// End Cross Module References
	void AGASTEnemy::StaticRegisterNativesAGASTEnemy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASTEnemy);
	UClass* Z_Construct_UClass_AGASTEnemy_NoRegister()
	{
		return AGASTEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AGASTEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGASTEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGASTCharacterbase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTEnemy_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASTEnemy_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GASTEnemy.h" },
		{ "ModuleRelativePath", "Public/Character/GASTEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGASTEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASTEnemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASTEnemy_Statics::ClassParams = {
		&AGASTEnemy::StaticClass,
		"Game",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASTEnemy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGASTEnemy()
	{
		if (!Z_Registration_Info_UClass_AGASTEnemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASTEnemy.OuterSingleton, Z_Construct_UClass_AGASTEnemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGASTEnemy.OuterSingleton;
	}
	template<> GAMEPLAYABILITYSYSTEM_TESTING_API UClass* StaticClass<AGASTEnemy>()
	{
		return AGASTEnemy::StaticClass();
	}
	AGASTEnemy::AGASTEnemy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGASTEnemy);
	AGASTEnemy::~AGASTEnemy() {}
	struct Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTEnemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTEnemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGASTEnemy, AGASTEnemy::StaticClass, TEXT("AGASTEnemy"), &Z_Registration_Info_UClass_AGASTEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASTEnemy), 1018545686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTEnemy_h_2853373394(TEXT("/Script/GameplayAbilitySystem_Testing"),
		Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTEnemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
