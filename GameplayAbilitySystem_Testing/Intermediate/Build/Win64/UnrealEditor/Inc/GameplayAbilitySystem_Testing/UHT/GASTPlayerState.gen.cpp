// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem_Testing/Public/Player/GASTPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTPlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTPlayerState();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_AGASTPlayerState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing();
// End Cross Module References
	void AGASTPlayerState::StaticRegisterNativesAGASTPlayerState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGASTPlayerState);
	UClass* Z_Construct_UClass_AGASTPlayerState_NoRegister()
	{
		return AGASTPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_AGASTPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGASTPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTPlayerState_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGASTPlayerState_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/GASTPlayerState.h" },
		{ "ModuleRelativePath", "Public/Player/GASTPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGASTPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGASTPlayerState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGASTPlayerState_Statics::ClassParams = {
		&AGASTPlayerState::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGASTPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGASTPlayerState_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGASTPlayerState()
	{
		if (!Z_Registration_Info_UClass_AGASTPlayerState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGASTPlayerState.OuterSingleton, Z_Construct_UClass_AGASTPlayerState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGASTPlayerState.OuterSingleton;
	}
	template<> GAMEPLAYABILITYSYSTEM_TESTING_API UClass* StaticClass<AGASTPlayerState>()
	{
		return AGASTPlayerState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGASTPlayerState);
	AGASTPlayerState::~AGASTPlayerState() {}
	struct Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Player_GASTPlayerState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Player_GASTPlayerState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGASTPlayerState, AGASTPlayerState::StaticClass, TEXT("AGASTPlayerState"), &Z_Registration_Info_UClass_AGASTPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGASTPlayerState), 27296228U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Player_GASTPlayerState_h_2567507186(TEXT("/Script/GameplayAbilitySystem_Testing"),
		Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Player_GASTPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_Player_GASTPlayerState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
