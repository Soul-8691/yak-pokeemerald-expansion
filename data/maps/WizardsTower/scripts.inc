WizardsTower_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, TryHideNpcs_WizardTower_Exterior
	map_script MAP_SCRIPT_ON_TRANSITION, TryHideNpcs_WizardTower_Exterior_2
	.byte 0


TryHideNpcs_WizardTower_Exterior::
	map_script_2 VAR_TEMP_1, 0, TryHideNpcs_WizardTower_Exterior_2
	return


TryHideNpcs_WizardTower_Exterior_2::
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 1
	goto_if_ne TryHideNpcs_WizardTower_Exterior_2_1
	return

TryHideNpcs_WizardTower_Exterior_2_1:
	removeobject 5
	setflag FLAG_TEMP_2
	removeobject 6
	setflag FLAG_TEMP_1
	return


ArianeChaseHamEvent1::
	lockall
	applymovement 6, ArianeRunAfterHam1
	waitmovement 0
	namebox ArianeChaseHamEvent1_Text_0
	msgbox ArianeChaseHamEvent1_Text_1
	hidenamebox
	release
	applymovement 6, ArianeRunAfterHam2
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 2
	return


ArianeChaseHamEvent2::
	lockall
	applymovement 6, ArianeRunAfterHam3
	waitmovement 0
	namebox ArianeChaseHamEvent1_Text_0
	msgbox ArianeChaseHamEvent1_Text_1
	hidenamebox
	release
	applymovement 6, ArianeRunAfterHam4
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 2
	return


ArianeChaseHamEvent3::
	lockall
	namebox ArianeChaseHamEvent1_Text_0
	msgbox ArianeChaseHamEvent3_Text_0
	hidenamebox
	release
	lockall
	applymovement 5, HamMemberSuprised
	namebox ArianeChaseHamEvent3_Text_1
	msgbox ArianeChaseHamEvent3_Text_2
	hidenamebox
	release
	lockall
	applymovement 5, HamMemberRuns
	waitmovement 0
	removeobject 5
	setflag FLAG_TEMP_2
	applymovement 6, ArianeRunAfterHam5
	namebox ArianeChaseHamEvent1_Text_0
	msgbox ArianeChaseHamEvent3_Text_3
	hidenamebox
	release
	lockall
	applymovement 6, ArianeRunAfterHam6
	waitmovement 0
	removeobject 6
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 3
	release
	return


ChaseAfterHamMemberPlayerTrigger::
	lockall
	msgbox ChaseAfterHamMemberPlayerTrigger_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ChaseHamMember
	waitmovement 0
	release
	return


ChaseAfterHamMemberPlayerTrigger2::
	lockall
	msgbox ChaseAfterHamMemberPlayerTrigger_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ChaseHamMember2
	waitmovement 0
	release
	return


ChaseHamMember:
	walk_down
	step_end

ChaseHamMember2:
	walk_up
	step_end

ArianeRunAfterHam1:
	face_left
	face_right
	face_down
	face_up
	emote_exclamation_mark
	walk_up
	step_end

ArianeRunAfterHam2:
	walk_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ArianeRunAfterHam3:
	face_left
	face_right
	face_down
	face_up
	emote_exclamation_mark
	walk_right
	walk_up
	step_end

ArianeRunAfterHam4:
	walk_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HamMemberSuprised:
	emote_exclamation_mark
	jump_in_place_down
	step_end

HamMemberRuns:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

ArianeRunAfterHam5:
	face_down
	step_end

ArianeRunAfterHam6:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

ArianeChaseHamEvent1_Text_0:
	.string "Ariane$"

ArianeChaseHamEvent1_Text_1:
	.string "Hurry we have to catch the thief!$"

ArianeChaseHamEvent3_Text_0:
	.string "Stop right there theif!$"

ArianeChaseHamEvent3_Text_1:
	.string "H.A.M. member$"

ArianeChaseHamEvent3_Text_2:
	.string "You'll never catch me!$"

ArianeChaseHamEvent3_Text_3:
	.string "Quick! We have to chase after him!$"

ChaseAfterHamMemberPlayerTrigger_Text_0:
	.string "I should help Ariane..$"
