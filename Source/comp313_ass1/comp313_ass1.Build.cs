// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class comp313_ass1 : ModuleRules
{
    public comp313_ass1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
