Tutorial_Island_Cave_MapScripts::
	.byte 0


ratbattle::
	lock
	faceplayer
	showmonpic SPECIES_RAT_NORMAL_FORM, 10, 3
	msgbox ratbattle_Text_0
	setwildbattle SPECIES_RAT_NORMAL_FORM, 3, ITEM_NONE
	hidemonpic
	setflag FLAG_DISABLE_RUN
	dowildbattle
	clearflag FLAG_DISABLE_RUN
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
	giveitem ITEM_NORMAL_POUCH, 10
	giveitem ITEM_RARE_CANDY, 10
	giveitem ITEM_ELEMENTAL_POUCH, 1
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


PouchCraftMenu::
	lock
	faceplayer
	msgbox PouchCraftMenu_Text_0
	msgbox PouchCraftMenu_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_2
	release
PouchCraftMenu_1:
	msgbox CraftPouchStart_Text_4
	releaseall
	return

PouchCraftMenu_2:
	checkitem ITEM_NORMAL_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_5
	msgbox PouchCraftMenu_Text_19
	goto PouchCraftMenu_1

PouchCraftMenu_5:
	release
	multichoicedefault 1, 0, MULTI_POUCH_CRAFT, 0, 0
	switch VAR_RESULT
	case 0, PouchCraftMenu_9
	case 1, PouchCraftMenu_10
	case 2, PouchCraftMenu_11
	case 3, PouchCraftMenu_12
	case 4, PouchCraftMenu_13
	case 5, PouchCraftMenu_14
	case 6, PouchCraftMenu_15
	case 7, PouchCraftMenu_16
	case 8, PouchCraftMenu_17
	goto PouchCraftMenu_1

PouchCraftMenu_9:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_18
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_10:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_21
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_11:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_24
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_12:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_27
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_13:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_30
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_14:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_33
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_15:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_36
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_16:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_39
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_17:
	multichoicedefault 1, 0, MULTI_POUCH_CRAFT2, 0, 0
	switch VAR_RESULT
	case 0, PouchCraftMenu_43
	case 1, PouchCraftMenu_44
	case 2, PouchCraftMenu_45
	case 3, PouchCraftMenu_46
	case 4, PouchCraftMenu_47
	case 5, PouchCraftMenu_48
	case 6, PouchCraftMenu_49
	case 7, PouchCraftMenu_50
	case 8, PouchCraftMenu_51
	goto PouchCraftMenu_1

PouchCraftMenu_18:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_BRONZE_POUCH, 1
	msgbox PouchCraftMenu_Text_2
	release
	goto PouchCraftMenu_1

PouchCraftMenu_21:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_IRON_POUCH, 1
	msgbox PouchCraftMenu_Text_4
	release
	goto PouchCraftMenu_1

PouchCraftMenu_24:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_STEEL_POUCH, 1
	msgbox PouchCraftMenu_Text_5
	release
	goto PouchCraftMenu_1

PouchCraftMenu_27:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_BLACK_POUCH, 1
	msgbox PouchCraftMenu_Text_6
	release
	goto PouchCraftMenu_1

PouchCraftMenu_30:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_MITHRIL_POUCH, 1
	msgbox PouchCraftMenu_Text_7
	release
	goto PouchCraftMenu_1

PouchCraftMenu_33:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_ADAMANT_POUCH, 1
	msgbox PouchCraftMenu_Text_8
	release
	goto PouchCraftMenu_1

PouchCraftMenu_36:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_RUNE_POUCH, 1
	msgbox PouchCraftMenu_Text_9
	release
	goto PouchCraftMenu_1

PouchCraftMenu_39:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_DRAGON_POUCH, 1
	msgbox PouchCraftMenu_Text_10
	release
	goto PouchCraftMenu_1

PouchCraftMenu_43:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_52
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_44:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_55
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_45:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_58
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_46:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_61
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_47:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_64
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_48:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_67
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_49:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_70
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_50:
	checkitem ITEM_RARE_CANDY, 1
	compare VAR_RESULT, 0
	goto_if_ne PouchCraftMenu_73
	msgbox PouchCraftMenu_Text_3
	release
	goto PouchCraftMenu_1

PouchCraftMenu_51:
	releaseall
	goto PouchCraftMenu_1

PouchCraftMenu_52:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_ANCIENT_POUCH, 1
	msgbox PouchCraftMenu_Text_11
	release
	goto PouchCraftMenu_1

PouchCraftMenu_55:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_AUGMENTED_POUCH, 1
	msgbox PouchCraftMenu_Text_12
	release
	goto PouchCraftMenu_1

PouchCraftMenu_58:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_BARROWS_POUCH, 1
	msgbox PouchCraftMenu_Text_13
	release
	goto PouchCraftMenu_1

PouchCraftMenu_61:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_CRYSTAL_POUCH, 1
	msgbox PouchCraftMenu_Text_14
	release
	goto PouchCraftMenu_1

PouchCraftMenu_64:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_DRAGONBANE_POUCH, 1
	msgbox PouchCraftMenu_Text_15
	release
	goto PouchCraftMenu_1

PouchCraftMenu_67:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_ELEMENTAL_POUCH, 1
	msgbox PouchCraftMenu_Text_16
	release
	goto PouchCraftMenu_1

PouchCraftMenu_70:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_GRANITE_POUCH, 1
	msgbox PouchCraftMenu_Text_17
	release
	goto PouchCraftMenu_1

PouchCraftMenu_73:
	removeitem ITEM_NORMAL_POUCH, 1
	removeitem ITEM_RARE_CANDY, 1
	giveitem ITEM_MYSTIC_POUCH, 1
	msgbox PouchCraftMenu_Text_18
	release
	goto PouchCraftMenu_1


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

PouchCraftMenu_Text_0:
	.string "Hi there! Good to see you again!$"

PouchCraftMenu_Text_1:
	.string "Would you like to craft a pouch?$"

PouchCraftMenu_Text_2:
	.string "You made a bronze pouch!$"

PouchCraftMenu_Text_3:
	.string "You don't have the crafting item!$"

PouchCraftMenu_Text_4:
	.string "You made an iron pouch!$"

PouchCraftMenu_Text_5:
	.string "You made a steel pouch!$"

PouchCraftMenu_Text_6:
	.string "You made a black pouch!$"

PouchCraftMenu_Text_7:
	.string "You made a mithril pouch!$"

PouchCraftMenu_Text_8:
	.string "You made an adamant pouch!$"

PouchCraftMenu_Text_9:
	.string "You made a rune pouch!$"

PouchCraftMenu_Text_10:
	.string "You made a dragon pouch!$"

PouchCraftMenu_Text_11:
	.string "You made an ancient pouch!$"

PouchCraftMenu_Text_12:
	.string "You made an augmented pouch!$"

PouchCraftMenu_Text_13:
	.string "You made a barrows pouch!$"

PouchCraftMenu_Text_14:
	.string "You made a crystal pouch!$"

PouchCraftMenu_Text_15:
	.string "You made a dragonbane pouch!$"

PouchCraftMenu_Text_16:
	.string "You made an elemental pouch!$"

PouchCraftMenu_Text_17:
	.string "You made a granite pouch!$"

PouchCraftMenu_Text_18:
	.string "You made a mystic pouch!$"

PouchCraftMenu_Text_19:
	.string "You don't have a normal pouch!$"
