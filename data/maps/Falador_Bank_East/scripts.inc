Falador_Bank_East_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Falador_Bank_East_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Falador_Bank_East_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Falador2_Bank_OnTransition
	return


Falador2_Bank_OnTransition::
	setrespawn HEAL_LOCATION_FALADOR2
	return

