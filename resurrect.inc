#if defined _resurrect_included
  #endinput
#endif
#define _resurrect_included

public SharedPlugin:__pl_resurrect = 
{
	name = "resurrect",
	file = "resurrect.smx",
#if defined REQUIRE_PLUGINS
	required=1,
#else
	required=0,
#endif
};

/*********************************************************
 * Enables or disables the mod. This will take effect when the round starts.
 * So when the map changes, this will be false until the first round begins.
 *
 * @param	bEnabled	True to turn on, false otherwise
 * @return				None
 *********************************************************/
native Resurrect_Enable(bool:bEnabled);

/*********************************************************
 * Returns if the mod is running for the current round.
 *
 * @return				True if running, false otherwise
 *********************************************************/
native bool:Resurrect_IsRunning();