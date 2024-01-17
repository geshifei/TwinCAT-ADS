#pragma once

#include "TcDef.h"

enum Module1IndexGroups : ULONG
{
	Module1IndexGroup1 = 0x00000001,
	Module1IndexGroup2 = 0x00000002,
	IG_OVERWRITE = 0x00000003,// and new command
	ServerIndexGroup8 = 0x00000008
};

enum Module1IndexOffsets : ULONG
{
	Module1IndexOffset1 = 0x00000001,
	Module1IndexOffset2 = 0x00000002,
	ServerIndexGroup9 = 0x00000009
};
