Falador_Bank_West_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Falador_Bank_West_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Falador_Bank_West_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Falador_Bank_OnTransition
	return


Falador_Bank_OnTransition::
	setrespawn HEAL_LOCATION_FALADOR
	return

