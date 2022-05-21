PortSarim_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PortSarim_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PortSarim_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call PortSarim_Bank_OnTransition
	return


PortSarim_Bank_OnTransition::
	setrespawn HEAL_LOCATION_PORT_SARIM
	return

