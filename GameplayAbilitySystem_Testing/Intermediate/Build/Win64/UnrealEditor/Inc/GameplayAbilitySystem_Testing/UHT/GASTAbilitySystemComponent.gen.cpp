// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayAbilitySystem_Testing/Public/AbilitySystem/GASTAbilitySystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASTAbilitySystemComponent() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_UGASTAbilitySystemComponent();
	GAMEPLAYABILITYSYSTEM_TESTING_API UClass* Z_Construct_UClass_UGASTAbilitySystemComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing();
// End Cross Module References
	void UGASTAbilitySystemComponent::StaticRegisterNativesUGASTAbilitySystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGASTAbilitySystemComponent);
	UClass* Z_Construct_UClass_UGASTAbilitySystemComponent_NoRegister()
	{
		return UGASTAbilitySystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGASTAbilitySystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitySystem_Testing,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/GASTAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/GASTAbilitySystemComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASTAbilitySystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::ClassParams = {
		&UGASTAbilitySystemComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGASTAbilitySystemComponent()
	{
		if (!Z_Registration_Info_UClass_UGASTAbilitySystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGASTAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UGASTAbilitySystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGASTAbilitySystemComponent.OuterSingleton;
	}
	template<> GAMEPLAYABILITYSYSTEM_TESTING_API UClass* StaticClass<UGASTAbilitySystemComponent>()
	{
		return UGASTAbilitySystemComponent::StaticClass();
	}
	UGASTAbilitySystemComponent::UGASTAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASTAbilitySystemComponent);
	UGASTAbilitySystemComponent::~UGASTAbilitySystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_AbilitySystem_GASTAbilitySystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_AbilitySystem_GASTAbilitySystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGASTAbilitySystemComponent, UGASTAbilitySystemComponent::StaticClass, TEXT("UGASTAbilitySystemComponent"), &Z_Registration_Info_UClass_UGASTAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGASTAbilitySystemComponent), 2855376769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_AbilitySystem_GASTAbilitySystemComponent_h_2763252969(TEXT("/Script/GameplayAbilitySystem_Testing"),
		Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_AbilitySystem_GASTAbilitySystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_megal_Documents_GitHub_GameplayAbilitySystem_Testing_GameplayAbilitySystem_Testing_Source_GameplayAbilitySystem_Testing_Public_AbilitySystem_GASTAbilitySystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
