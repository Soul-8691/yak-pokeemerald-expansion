Draynor_Manor_MapScripts::
	.byte 0


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


DeadTree1_Text_0:
	.string "The Tree attacked!$"
