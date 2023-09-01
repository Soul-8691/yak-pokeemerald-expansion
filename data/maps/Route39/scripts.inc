Route39_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route39_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	call SPECIAL_PENGUIN_EVENT
	call WEATHER_CHANGE_ROUTE_RAIN
	return


ENCOUNTER_PENGUIN_CRATE::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_CRATE_Text_0
	playmoncry SPECIES_PIDGEY, 0
	msgbox ENCOUNTER_PENGUIN_CRATE_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BOX_FORM, 15, ITEM_NONE
	dowildbattle
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 10
	removeobject 9
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	end


ENCOUNTER_PENGUIN_CRATE_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_CRATE_Text_1:
	.string "Noot! Noot!$"
