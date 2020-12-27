Route12_MapScripts::
	.byte 0


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
	showmonpic SPECIES_COW, 10, 3
	msgbox Cow_Battle_Text_0
	setwildbattle SPECIES_COW, 7, ITEM_NONE
	hidemonpic
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


Cannot_Pass_Move:
	walk_left
	step_end

Cannot_Pass_Text_0:
	.string "You shall not pass!$"

Cow_Battle_Text_0:
	.string "MOOOO$"
