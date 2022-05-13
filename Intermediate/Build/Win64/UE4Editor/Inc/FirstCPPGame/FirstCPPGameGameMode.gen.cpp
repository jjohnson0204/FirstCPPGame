// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstCPPGame/FirstCPPGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstCPPGameGameMode() {}
// Cross Module References
	FIRSTCPPGAME_API UClass* Z_Construct_UClass_AFirstCPPGameGameMode_NoRegister();
	FIRSTCPPGAME_API UClass* Z_Construct_UClass_AFirstCPPGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FirstCPPGame();
// End Cross Module References
	void AFirstCPPGameGameMode::StaticRegisterNativesAFirstCPPGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFirstCPPGameGameMode_NoRegister()
	{
		return AFirstCPPGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstCPPGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstCPPGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstCPPGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstCPPGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FirstCPPGameGameMode.h" },
		{ "ModuleRelativePath", "FirstCPPGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstCPPGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstCPPGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstCPPGameGameMode_Statics::ClassParams = {
		&AFirstCPPGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstCPPGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstCPPGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstCPPGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstCPPGameGameMode, 4115322996);
	template<> FIRSTCPPGAME_API UClass* StaticClass<AFirstCPPGameGameMode>()
	{
		return AFirstCPPGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstCPPGameGameMode(Z_Construct_UClass_AFirstCPPGameGameMode, &AFirstCPPGameGameMode::StaticClass, TEXT("/Script/FirstCPPGame"), TEXT("AFirstCPPGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstCPPGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
