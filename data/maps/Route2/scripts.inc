Route2_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route2WarpCheck
	map_script MAP_SCRIPT_ON_TRANSITION, TryHideRoute2Npc
	.byte 0


Route2WarpCheck::
	map_script_2 VAR_TEMP_1, 0, TryHideRoute2Npc
	return


TryHideRoute2Npc::
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 3
	goto_if_ne TryHideRoute2Npc_2
TryHideRoute2Npc_1:
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 3
	goto_if_gt TryHideRoute2Npc_4
	return

TryHideRoute2Npc_2:
	removeobject 2
	setflag FLAG_TEMP_2
	removeobject 3
	setflag FLAG_TEMP_1
	goto TryHideRoute2Npc_1

TryHideRoute2Npc_4:
	setobjectxyperm 1, 35, 14
	return


ArianeChaseHamEvent5::
	lockall
	namebox ArianeChaseHamEvent5_Text_0
	msgbox ArianeChaseHamEvent5_Text_1
	hidenamebox
	release
	lockall
	applymovement 2, HamMemberShove
	waitmovement 0
	applymovement 1, HighwaymanShoved
	waitmovement 0
	namebox ArianeChaseHamEvent5_Text_2
	msgbox ArianeChaseHamEvent5_Text_3
	hidenamebox
	release
	lockall
	applymovement 2, HamMemberSuprised2
	namebox ArianeChaseHamEvent5_Text_0
	msgbox ArianeChaseHamEvent5_Text_4
	hidenamebox
	namebox ArianeChaseHamEvent5_Text_5
	msgbox ArianeChaseHamEvent5_Text_6
	hidenamebox
	release
	lockall
	applymovement 2, HamMemberRuns2
	waitmovement 0
	applymovement 3, ArianeRunAfterHam8
	waitmovement 0
	removeobject 2
	setflag FLAG_TEMP_2
	removeobject 3
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 5
	return


ArianeChaseHamEvent4::
	lockall
	applymovement 3, ArianeRunAfterHam7
	waitmovement 0
	release
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 4
	return


ArianeRunAfterHam7:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HamMemberShove:
	walk_fast_right
	step_end

HighwaymanShoved:
	slide_right
	step_end

HamMemberSuprised2:
	jump_in_place_down
	emote_exclamation_mark
	step_end

HamMemberRuns2:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ArianeRunAfterHam8:
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
	step_end

ArianeChaseHamEvent5_Text_0:
	.string "H.A.M. member$"

ArianeChaseHamEvent5_Text_1:
	.string "Get out of my way you noob!$"

ArianeChaseHamEvent5_Text_2:
	.string "Highwayman$"

ArianeChaseHamEvent5_Text_3:
	.string "Stand and deliver!$"

ArianeChaseHamEvent5_Text_4:
	.string "You again? Stop following me!$"

ArianeChaseHamEvent5_Text_5:
	.string "Ariane$"

ArianeChaseHamEvent5_Text_6:
	.string "Return the research you stole!$"
