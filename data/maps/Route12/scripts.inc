Route12_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


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
	removeobject VAR_LAST_TALKED
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Cow_Battle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Cow_Battle_1
	lock
	msgbox Cow_Battle_Text_0
	release
	return

Cow_Battle_1:
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne Cow_Battle_7
	msgbox Cow_Battle_Text_1
Cow_Battle_6:
	release
	return

Cow_Battle_7:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_MILK_BUCKET, 1
	goto Cow_Battle_6


ChickenBattle::
	lock
	faceplayer
	msgbox ChickenBattle_Text_0
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 5, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ChickenBattle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ChickenBattle_1
	return

ChickenBattle_1:
	giveitem ITEM_EGG
	release
	return


GoblinBattle4::
	trainerbattle_single TRAINER_GOBLIN_4_ROUTE12, GoblinBattle4_Text_0, GoblinBattle4_Text_1
	msgbox GoblinBattle4_Text_1
	release
	return


GoblinBattle5::
	trainerbattle_single TRAINER_GOBLIN_5_ROUTE12, GoblinBattle5_Text_0, GoblinBattle5_Text_1
	msgbox GoblinBattle5_Text_1
	release
	return


GoblinBattle6::
	trainerbattle_single TRAINER_GOBLIN_6_ROUTE12, GoblinBattle6_Text_0, GoblinBattle6_Text_1
	msgbox GoblinBattle6_Text_1
	release
	return


GoblinBattle7::
	trainerbattle_single TRAINER_GOBLIN_7_ROUTE12, GoblinBattle7_Text_0, GoblinBattle7_Text_1
	msgbox GoblinBattle7_Text_1
	release
	return


RsnBattleRoute12::
	trainerbattle_single TRAINER_RSN_ROUTE12, RsnBattleRoute12_Text_0, RsnBattleRoute12_Text_1
	msgbox RsnBattleRoute12_Text_1
	release
	return


Route12CookingGoblin::
	msgbox Route12CookingGoblin_Text_0
	release
	return


Route12Farmer::
	faceplayer
	msgbox Route12Farmer_Text_0
	release
	return


Route12MilkLady::
	faceplayer
	msgbox Route12MilkLady_Text_0
	release
	return


MilkCow::
	msgbox Cow_Battle_Text_0
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne MilkCow_2
	msgbox Cow_Battle_Text_1
MilkCow_1:
	release
	return

MilkCow_2:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_MILK_BUCKET, 1
	goto MilkCow_1


Cannot_Pass_Move:
	walk_left
	step_end

Cannot_Pass_Text_0:
	.string "You shall not pass!$"

Cow_Battle_Text_0:
	.string "MOOOO$"

Cow_Battle_Text_1:
	.string "If I had an empty bucket I could milk\n"
	.string "this cow.$"

ChickenBattle_Text_0:
	.string "BAWK$"

GoblinBattle4_Text_0:
	.string "This place goblin place. Human go home.$"

GoblinBattle4_Text_1:
	.string "Human strong. This now Goblin and human\n"
	.string "home.$"

GoblinBattle5_Text_0:
	.string "Human weak. Feethands show why.$"

GoblinBattle5_Text_1:
	.string "Feethands weak. Human show Feethands\n"
	.string "why.$"

GoblinBattle6_Text_0:
	.string "Human homes makes for weak monster.\n"
	.string "See strong monster here.$"

GoblinBattle6_Text_1:
	.string "Strong monsters in human homes it\n"
	.string "seems.$"

GoblinBattle7_Text_0:
	.string "Big high war god say human go home.$"

GoblinBattle7_Text_1:
	.string "Big high war god calls for rematch.\n"
	.string "Later. Much later.$"

RsnBattleRoute12_Text_0:
	.string "You look like a noob, even I could beat\n"
	.string "you!$"

RsnBattleRoute12_Text_1:
	.string "Well drat. Maybe I should've looked for\n"
	.string "rarer monsters around here first.$"

Route12CookingGoblin_Text_0:
	.string "Go away human. Goblin cooking.$"

Route12Farmer_Text_0:
	.string "Here you can plant crops and harvest\n"
	.string "them later!$"

Route12MilkLady_Text_0:
	.string "If you need milk feel free to milk the\n"
	.string "cows. Make sure you have an empty\l"
	.string "bucket!$"
