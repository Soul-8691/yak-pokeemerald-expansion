Route16_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route16_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return

