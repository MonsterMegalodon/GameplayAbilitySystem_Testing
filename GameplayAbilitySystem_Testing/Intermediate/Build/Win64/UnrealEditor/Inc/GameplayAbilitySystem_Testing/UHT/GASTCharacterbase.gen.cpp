// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem_Testing/Public/Character/GASTCharacterbase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTCharacterbase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTCharacterbase();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTCharacterbase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing();
// End Cross Module References
	void AGASTCharacterbase::StaticRegisterNativesAGASTCharacterbase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASTCharacterbase);
	UClass* Z_Construct_UClass_AGASTCharacterbase_NoRegister()
	{
		return AGASTCharacterbase::StaticClass();
	}
	struct Z_Construct_UClass_AGASTCharacterbase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Weapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGASTCharacterbase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacterbase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASTCharacterbase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/GASTCharacterbase.h" },
		{ "ModuleRelativePath", "Public/Character/GASTCharacterbase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASTCharacterbase_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GASTCharacterbase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGASTCharacterbase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGASTCharacterbase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacterbase_Statics::NewProp_Weapon_MetaData), Z_Construct_UClass_AGASTCharacterbase_Statics::NewProp_Weapon_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGASTCharacterbase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGASTCharacterbase_Statics::NewProp_Weapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGASTCharacterbase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASTCharacterbase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASTCharacterbase_Statics::ClassParams = {
		&AGASTCharacterbase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGASTCharacterbase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacterbase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacterbase_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASTCharacterbase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTCharacterbase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGASTCharacterbase()
	{
		if (!Z_Registration_Info_UClass_AGASTCharacterbase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASTCharacterbase.OuterSingleton, Z_Construct_UClass_AGASTCharacterbase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGASTCharacterbase.OuterSingleton;
	}
	template<> GAMEPLAYABILITYSYSTEM_TESTING_API UClass* StaticClass<AGASTCharacterbase>()
	{
		return AGASTCharacterbase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGASTCharacterbase);
	AGASTCharacterbase::~AGASTCharacterbase() {}
	struct Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacterbase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacterbase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGASTCharacterbase, AGASTCharacterbase::StaticClass, TEXT("AGASTCharacterbase"), &Z_Registration_Info_UClass_AGASTCharacterbase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASTCharacterbase), 1637157445U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacterbase_h_1274332271(TEXT("/Script/GameplayAbilitySystem_Testing"),
		Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacterbase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Character_GASTCharacterbase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
