Route2_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route2_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto WizardsTower_Route2_STATE
	return


WizardsTower_Route2_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_Route2_STATE_2
	case 1, WizardsTower_Route2_STATE_2
	case 2, WizardsTower_Route2_STATE_2
	case 3, WizardsTower_Route2_STATE_3
	case 4, WizardsTower_Route2_STATE_4
	case 5, WizardsTower_Route2_STATE_5
	case 6, WizardsTower_Route2_STATE_5
	case 7, WizardsTower_Route2_STATE_5
	case 8, WizardsTower_Route2_STATE_5
	case 9, WizardsTower_Route2_STATE_5
	return

WizardsTower_Route2_STATE_2:
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 3
	release
	end

WizardsTower_Route2_STATE_3:
	clearflag FLAG_TEMP_1
	addobject 2
	addobject 3
	release
	end

WizardsTower_Route2_STATE_4:
	setflag FLAG_TEMP_1
	removeobject 2
	removeobject 3
	release
	end

WizardsTower_Route2_STATE_5:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 1
	removeobject 2
	removeobject 3
	release
	end


HAM_EVENT_WizardsTower_4::
	lockall
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_WizardsTower_4_Text_1
	closemessage
	hidenamebox
	release
	end


HAM_EVENT_Route2_MAIN_1::
	lockall
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	applymovement 2, HAM_Movement5_1
	namebox HAM_EVENT_Route2_MAIN_1_Text_0
	msgbox HAM_EVENT_Route2_MAIN_1_Text_1
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 1, HAM_Movement5_7
	namebox HAM_EVENT_Route2_MAIN_1_Text_2
	msgbox HAM_EVENT_Route2_MAIN_1_Text_3
	hidenamebox
	closemessage
	waitmovement 0
	playse SE_WALL_HIT
	applymovement 1, HAM_Movement5_2
	applymovement 2, HAM_Movement5_3
	waitmovement 0
	namebox HAM_EVENT_Route2_MAIN_1_Text_0
	msgbox HAM_EVENT_Route2_MAIN_1_Text_4
	hidenamebox
	closemessage
	applymovement 2, HAM_Movement5_4
	delay 16
	applymovement 1, HAM_Movement5_8
	playse SE_PIN
	applymovement 3, HAM_Movement5_5
	waitmovement 0
	return


HAM_EVENT_Route2_MAIN_2::
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 4
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


HAM_EVENT_Route2_TRIGGER_1::
	call HAM_EVENT_Route2_MAIN_1
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_Route2_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 3, HAM_Movement5_6
	waitmovement 0
	goto HAM_EVENT_Route2_MAIN_2
	return


HAM_EVENT_Route2_TRIGGER_2::
	call HAM_EVENT_Route2_MAIN_1
	namebox HAM_EVENT_WizardsTower_4_Text_0
	msgbox HAM_EVENT_Route2_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 3, HAM_Movement5_9
	waitmovement 0
	goto HAM_EVENT_Route2_MAIN_2
	return


HAM_Movement5_1:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

HAM_Movement5_2:
	walk_fast_left
	step_end

HAM_Movement5_3:
	slide_left
	jump_special_left
	face_right
	step_end

HAM_Movement5_4:
	walk_fastest_left
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	step_end

HAM_Movement5_5:
	emote_exclamation_mark
	face_right
	step_end

HAM_Movement5_6:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HAM_Movement5_7:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

HAM_Movement5_8:
	walk_slow_right
	face_left
	step_end

HAM_Movement5_9:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BLOCK_ROUTE2_Highwayman::
	goto_if_unset FLAG_TEMP_2, BLOCK_ROUTE2_Highwayman_1
	return

BLOCK_ROUTE2_Highwayman_1:
	lock
	namebox HAM_EVENT_Route2_MAIN_1_Text_2
	msgbox HAM_EVENT_Route2_MAIN_1_Text_3
	closemessage
	hidenamebox
	playse SE_WALL_HIT
	applymovement 1, HAM_Movement5_2
	applymovement OBJ_EVENT_ID_PLAYER, HAM_Movement5_3
	waitmovement 0
	applymovement 1, HAM_Movement5_8
	waitmovement 0
	release
	end


HAM_EVENT_WizardsTower_4_Text_0:
	.string "Ariane$"

HAM_EVENT_WizardsTower_4_Text_1:
	.string "I wonder if he went this way?$"

HAM_EVENT_Route2_MAIN_1_Text_0:
	.string "H.A.M. member$"

HAM_EVENT_Route2_MAIN_1_Text_1:
	.string "Move!\n"
	.string "Get out of my way!$"

HAM_EVENT_Route2_MAIN_1_Text_2:
	.string "Highwayman$"

HAM_EVENT_Route2_MAIN_1_Text_3:
	.string "Stand and deliver!$"

HAM_EVENT_Route2_MAIN_1_Text_4:
	.string "Ayyyyeeeeek!$"

HAM_EVENT_Route2_TRIGGER_1_Text_0:
	.string "There you are!$"
