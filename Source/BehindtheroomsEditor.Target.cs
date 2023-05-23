

using UnrealBuildTool;
using System.Collections.Generic;

public class BehindtheroomsEditorTarget : TargetRules
{
	public BehindtheroomsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Behindtherooms" } );
	}
}
