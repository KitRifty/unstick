// Vehicle Warfare Main Include File

#if defined _unstick_included
 #endinput
#endif
#define _unstick_included

public SharedPlugin:__pl_asm2 = 
{
	name = "unstick",
	file = "unstick.smx",
#if defined REQUIRE_PLUGIN
	required = 1,
#else
	required = 0,
#endif
};

native bool:Unstick_TestPlayerPosition(client, const Float:flPos[3], bool:bUsePlayerCollision=true, Float:flMins[3]=NULL_VECTOR, Float:flMaxs[3]=NULL_VECTOR);

native Unstick_AttemptUnstick(client, bool:bUsePlayerCollision=true, Float:flMins[3]=NULL_VECTOR, Float:flMaxs[3]=NULL_VECTOR);