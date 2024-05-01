// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem_Testing/Public/Character/GASTCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTCharacter() {}
// Cross Module References
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTCharacter();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTCharacter_NoRegister();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTCharacterbase();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing();
// End Cross Module References
	void AGASTCharacter::StaticRegisterNativesAGASTCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASTCharacter);
	UClass* Z_Construct_UClass_AGASTCharacter_NoRegister()
	{
		return AGASTCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGASTCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGASTCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGASTCharacterbase,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASTCharacter_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GASTCharacter.h" },
		{ "ModuleRelativePath", "Public/Character/GASTCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGASTCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASTCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASTCharacter_Statics::ClassParams = {
		&AGASTCharacter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASTCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGASTCharacter()
	{
		if (!Z_Registration_Info_UClass_AGASTCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASTCharacter.OuterSingleton, Z_Construct_UClass_AGASTCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGASTCharacter.OuterSingleton;
	}
	template<> GAMEPLAYABILITYSYSTEM_TESTING_API UClass* StaticClass<AGASTCharacter>()
	{
		return AGASTCharacter::StaticClass();
	}
	AGASTCharacter::AGASTCharacter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGASTCharacter);
	AGASTCharacter::~AGASTCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGASTCharacter, AGASTCharacter::StaticClass, TEXT("AGASTCharacter"), &Z_Registration_Info_UClass_AGASTCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASTCharacter), 629997917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacter_h_3277189171(TEXT("/Script/GameplayAbilitySystem_Testing"),
		Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
