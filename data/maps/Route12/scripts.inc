Route12_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	random 100
	compare VAR_RESULT, 99
	goto_if_eq Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	setflag FLAG_UNUSED_0x493
Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	release
	return

Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	clearflag FLAG_UNUSED_0x493
	goto Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


Cannot_Pass::
	lockall
	msgbox Cannot_Pass_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Cannot_Pass_Move
	waitmovement 0
	release
	return


Cow_Battle::
	lock
	faceplayer
	msgbox Cow_Battle_Text_0
	setwildbattle SPECIES_COW, 7, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Cow_Battle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Cow_Battle_1
	lock
	msgbox Cow_Battle_Text_0
	release
	return

Cow_Battle_1:
	removeobject VAR_LAST_TALKED
	release
	return


TestRemove::
	removeobject VAR_LAST_TALKED
	return


Cannot_Pass_Move:
	walk_left
	step_end

Cannot_Pass_Text_0:
	.string "You shall not pass!$"

Cow_Battle_Text_0:
	.string "MOOOO$"
