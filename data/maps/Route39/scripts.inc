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


ITEM_ROUTE39_1::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_ROUTE39_2::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_ROUTE39_3::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_ROUTE39_4::
	finditem ITEM_PURPLE_SWEETS
	end


BATTLE_ROUTE39_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_1, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_2, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_3, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_4, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_5, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_6::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_6, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_7::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_7, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE39_TRAINER_8::
	trainerbattle_single TRAINER_ROUTE39_TRAINER_8, BATTLE_ROUTE39_TRAINER_1_Text_0, BATTLE_ROUTE39_TRAINER_1_Text_1
	namebox BATTLE_ROUTE39_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE39_TRAINER_1_Text_3
	hidenamebox
	release
	end


ENCOUNTER_PENGUIN_CRATE_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_CRATE_Text_1:
	.string "Noot! Noot!$"

BATTLE_ROUTE39_TRAINER_1_Text_0:
	.string "Battle me, I am a Cupholder.$"

BATTLE_ROUTE39_TRAINER_1_Text_1:
	.string "Cupholder has lost.$"

BATTLE_ROUTE39_TRAINER_1_Text_2:
	.string "Cupholder$"

BATTLE_ROUTE39_TRAINER_1_Text_3:
	.string "Hello, I am a Cupholder.$"
