Tutorial_Island_Cave_MapScripts::
	.byte 0


ratbattle::
	lock
	faceplayer
	showmonpic SPECIES_RAT_NORMAL_FORM, 10, 3
	msgbox ratbattle_Text_0
	setwildbattle SPECIES_RAT_NORMAL_FORM, 3, ITEM_NONE
	hidemonpic
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ratbattle_1
	lock
	msgbox ratbattle_Text_1
	release
	return

ratbattle_1:
	applymovement 1, Rat1Run
	applymovement 2, Rat2Run
	applymovement 3, Rat3Run
	waitmovement 0
	removeobject 1
	removeobject 2
	removeobject 3
	release
	return


Rat1Run:
	jump_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	jump_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Rat2Run:
	jump_in_place_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	jump_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Rat3Run:
	jump_in_place_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	jump_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

ratbattle_Text_0:
	.string "REEEEE$"

ratbattle_Text_1:
	.string "Vannaka: GET BACK IN THERE AND FIGHT\n"
	.string "YOU COWARD!$"
