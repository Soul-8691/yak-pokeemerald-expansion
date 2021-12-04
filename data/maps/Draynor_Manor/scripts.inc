Draynor_Manor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Draynor_Manor_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto WizardsTower_DraynorManor_STATE
	return


WizardsTower_DraynorManor_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_DraynorManor_STATE_2
	case 1, WizardsTower_DraynorManor_STATE_2
	case 2, WizardsTower_DraynorManor_STATE_2
	case 3, WizardsTower_DraynorManor_STATE_2
	case 4, WizardsTower_DraynorManor_STATE_2
	case 5, WizardsTower_DraynorManor_STATE_2
	case 6, WizardsTower_DraynorManor_STATE_3
	case 7, WizardsTower_DraynorManor_STATE_4
	case 8, WizardsTower_DraynorManor_STATE_5
	case 9, WizardsTower_DraynorManor_STATE_5
	return

WizardsTower_DraynorManor_STATE_2:
	removeobject 1
	setflag FLAG_TEMP_1
	release
	end

WizardsTower_DraynorManor_STATE_3:
	clearflag FLAG_TEMP_1
	addobject 1
	release
	end

WizardsTower_DraynorManor_STATE_4:
	clearflag FLAG_TEMP_1
	addobject 1
	setobjectxyperm 1, 16, 36
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	release
	end

WizardsTower_DraynorManor_STATE_5:
	removeobject 1
	setflag FLAG_TEMP_1
	release
	end


HAM_EVENT_DraynorManor_MAIN_1::
	lock
	namebox HAM_EVENT_DraynorManor_MAIN_1_Text_0
	msgbox HAM_EVENT_DraynorManor_MAIN_1_Text_1
	hidenamebox
	closemessage
	applymovement 1, Ariane_DraynorManor_1
	waitmovement 0
	opendoor 14, 17
	waitdooranim
	msgbox HAM_EVENT_DraynorManor_MAIN_1_Text_2
	playSE SE_LEDGE
	applymovement 1, Ariane_DraynorManor_2
	waitmovement 0
	return


HAM_EVENT_DraynorManor_MAIN_2::
	closedoor 14, 17
	waitdooranim
	waitmovement 0
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	setobjectxyperm 1, 16, 36
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	release
	end


HAM_EVENT_DraynorManor_TRIGGER_1::
	call HAM_EVENT_DraynorManor_MAIN_1
	msgbox HAM_EVENT_DraynorManor_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 1, Ariane_DraynorManor_3
	goto HAM_EVENT_DraynorManor_MAIN_2
	return


HAM_EVENT_DraynorManor_TRIGGER_2::
	call HAM_EVENT_DraynorManor_MAIN_1
	msgbox HAM_EVENT_DraynorManor_TRIGGER_1_Text_0
	hidenamebox
	closemessage
	applymovement 1, Ariane_DraynorManor_3
	playse SE_WALL_HIT
	applymovement OBJ_EVENT_ID_PLAYER, Ariane_DraynorManor_4
	waitmovement 1
	goto HAM_EVENT_DraynorManor_MAIN_2
	return


Ariane_DraynorManor_1:
	walk_up
	step_end

Ariane_DraynorManor_2:
	jump_in_place_up
	step_end

Ariane_DraynorManor_3:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_down
	walk_fastest_right
	walk_fastest_right
	step_end

Ariane_DraynorManor_4:
	slide_right
	face_down
	step_end

HAM_EVENT_DraynorManor_Ariane::
	lock
	faceplayer
	namebox HAM_EVENT_DraynorManor_MAIN_1_Text_0
	msgbox HAM_EVENT_DraynorManor_Ariane_Text_0
	hidenamebox
	closemessage
	release
	end


DeadTree1::
	compare VAR_TEMP_1, 1
	goto_if_eq DeadTree1_1
	lock
	applymovement OBJ_EVENT_ID_PLAYER, DeadTree_PlayerMovement1
	waitmovement 0
	msgbox DeadTree1_Text_0
	setwildbattle SPECIES_DEAD_TREE, 5, ITEM_NONE
	dowildbattle
	setvar VAR_TEMP_1, 1
	release
	return

DeadTree1_1:
	return


DeadTree_PlayerMovement1:
	emote_exclamation_mark
	lock_facing_direction
	jump_in_place_down
	delay_16
	unlock_facing_direction
	step_end

DeadTree2::
	compare VAR_TEMP_2, 1
	goto_if_eq DeadTree2_1
	lock
	applymovement OBJ_EVENT_ID_PLAYER, DeadTree_PlayerMovement1
	waitmovement 0
	msgbox DeadTree1_Text_0
	setwildbattle SPECIES_DEAD_TREE, 5, ITEM_NONE
	dowildbattle
	setvar VAR_TEMP_2, 1
	release
	return

DeadTree2_1:
	return


DeadTree3::
	compare VAR_TEMP_3, 1
	goto_if_eq DeadTree3_1
	lock
	applymovement OBJ_EVENT_ID_PLAYER, DeadTree_PlayerMovement1
	waitmovement 0
	msgbox DeadTree1_Text_0
	setwildbattle SPECIES_DEAD_TREE, 5, ITEM_NONE
	dowildbattle
	setvar VAR_TEMP_3, 1
	release
	return

DeadTree3_1:
	return


HAM_EVENT_DraynorManor_MAIN_1_Text_0:
	.string "Ariane$"

HAM_EVENT_DraynorManor_MAIN_1_Text_1:
	.string "Did he seriously have to go inside this\n"
	.string "creepy place!$"

HAM_EVENT_DraynorManor_MAIN_1_Text_2:
	.string "EEEEEEK!$"

HAM_EVENT_DraynorManor_TRIGGER_1_Text_0:
	.string "I…{PAUSE 15} I…{PAUSE 15} I cannot do this!!$"

HAM_EVENT_DraynorManor_Ariane_Text_0:
	.string "I cant do this!\p"
	.string "That manor is 2sp00ky4me!$"

DeadTree1_Text_0:
	.string "The Tree attacked!$"
