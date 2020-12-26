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
	setvar VAR_UNUSED_0x4083, 2
	release
	return


RatArenaLockedIn::
	setvar VAR_UNUSED_0x4083, 1
	return


RatArenaCantLeave::
	lock
	msgbox ratbattle_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, RatArenaMoveDown
	waitmovement 0
	release
	return


KevinItemsTest::
	lock
	faceplayer
	//giveitem ITEM_NORMAL_POUCH, 10
	//giveitem ITEM_RARE_CANDY, 10
	//giveitem ITEM_ELEMENTAL_POUCH, 1
	//giveitem ITEM_ESCAPE_ROPE, 10
	//giveitem ITEM_BLACK_SCALE, 10
	giveitem ITEM_PICKAXE, 1
	giveitem ITEM_BOAT, 1
	giveitem ITEM_AXE, 1
	giveitem ITEM_STRENGTHITEM, 1
	giveitem ITEM_DIVEITEM, 1
	giveitem ITEM_SPADE, 1
	giveitem ITEM_FLYITEM, 1
	giveitem ITEM_LANTERN, 1
	giveitem ITEM_WATERFALLITEM, 1
	msgbox KevinItemsTest_Text_0
	release
	return


CraftPouchStart::
	lock
	faceplayer
	msgbox CraftPouchStart_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CraftPouchStart_1
	msgbox CraftPouchStart_Text_4
	release
	return

CraftPouchStart_1:
	checkitem ITEM_NORMAL_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_ne CraftPouchStart_4
	msgbox CraftPouchStart_Text_3
	release
	return

CraftPouchStart_4:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne CraftPouchStart_7
	return

CraftPouchStart_7:
	random 3
	compare VAR_RESULT, 2
	goto_if_eq CraftPouchStart_9
	msgbox CraftPouchStart_Text_2
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	release
	return

CraftPouchStart_9:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_AUGMENTED_POUCH, 1
	msgbox CraftPouchStart_Text_1
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

RatArenaMoveDown:
	walk_down
	walk_down
	walk_down
	step_end

ratbattle_Text_0:
	.string "REEEEE$"

ratbattle_Text_1:
	.string "Vannaka: GET BACK IN THERE AND FIGHT\n"
	.string "YOU COWARD!$"

KevinItemsTest_Text_0:
	.string "Here take these!\p"
	.string "Why do I have this rotten potato?\n"
	.string "No reason..$"

CraftPouchStart_Text_0:
	.string "Hi there!\pWould you like to craft a pouch?$"

CraftPouchStart_Text_1:
	.string "Congrats! You made an augmented pouch!$"

CraftPouchStart_Text_2:
	.string "Sorry you suck! You get nothing!$"

CraftPouchStart_Text_3:
	.string "You don't have any crafting items!$"

CraftPouchStart_Text_4:
	.string "Smell ya later!$"
