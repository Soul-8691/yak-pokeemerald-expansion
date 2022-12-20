Varrock_Bank_West_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Varrock_Bank_West_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Varrock_Bank_West_MapScripts_MAP_SCRIPT_ON_LOAD:
	call VarrockWest_Bank_OnTransition
	return


VarrockWest_Bank_OnTransition::
	setrespawn HEAL_LOCATION_VARROCK
	return

