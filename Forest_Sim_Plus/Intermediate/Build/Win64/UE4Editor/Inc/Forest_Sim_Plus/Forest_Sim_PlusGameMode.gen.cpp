// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Forest_Sim_Plus/Forest_Sim_PlusGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForest_Sim_PlusGameMode() {}
// Cross Module References
	FOREST_SIM_PLUS_API UClass* Z_Construct_UClass_AForest_Sim_PlusGameMode_NoRegister();
	FOREST_SIM_PLUS_API UClass* Z_Construct_UClass_AForest_Sim_PlusGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Forest_Sim_Plus();
// End Cross Module References
	void AForest_Sim_PlusGameMode::StaticRegisterNativesAForest_Sim_PlusGameMode()
	{
	}
	UClass* Z_Construct_UClass_AForest_Sim_PlusGameMode_NoRegister()
	{
		return AForest_Sim_PlusGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Forest_Sim_Plus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Forest_Sim_PlusGameMode.h" },
		{ "ModuleRelativePath", "Forest_Sim_PlusGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForest_Sim_PlusGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::ClassParams = {
		&AForest_Sim_PlusGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AForest_Sim_PlusGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AForest_Sim_PlusGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AForest_Sim_PlusGameMode, 2334534174);
	template<> FOREST_SIM_PLUS_API UClass* StaticClass<AForest_Sim_PlusGameMode>()
	{
		return AForest_Sim_PlusGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AForest_Sim_PlusGameMode(Z_Construct_UClass_AForest_Sim_PlusGameMode, &AForest_Sim_PlusGameMode::StaticClass, TEXT("/Script/Forest_Sim_Plus"), TEXT("AForest_Sim_PlusGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AForest_Sim_PlusGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
