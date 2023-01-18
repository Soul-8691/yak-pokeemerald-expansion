Route39_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return

