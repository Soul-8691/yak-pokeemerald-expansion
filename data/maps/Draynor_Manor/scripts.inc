Draynor_Manor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TryHideDraynorManorNpcs
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DraynorManorWarpCheck
	.byte 0


DraynorManorWarpCheck::
	map_script_2 VAR_TEMP_2, 0, TryHideDraynorManorNpcs
	return


TryHideDraynorManorNpcs::
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	goto_if_ne TryHideDraynorManorNpcs_1
	return

TryHideDraynorManorNpcs_1:
	removeobject 1
	setflag FLAG_TEMP_1
	return


ArianeChaseHamEvent8::
	lockall
	namebox ArianeChaseHamEvent8_Text_0
	msgbox ArianeChaseHamEvent8_Text_1
	hidenamebox
	release
	lockall
	applymovement 1, ArianeRunAfterHam12
	waitmovement 0
	opendoor 14, 17
	waitdooranim
	applymovement 1, ArianeRunAfterHam12
	closedoor 14, 17
	waitdooranim
	removeobject 1
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	return


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
	DELAY_16
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


ArianeRunAfterHam12:
	walk_fast_up
	step_end

ArianeChaseHamEvent8_Text_0:
	.string "Ariane$"

ArianeChaseHamEvent8_Text_1:
	.string "He went in here! Quick lets follow him!$"

DeadTree1_Text_0:
	.string "The Tree attacked!$"
