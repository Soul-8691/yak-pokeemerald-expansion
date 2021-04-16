Lumbridge_Castle_2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_LUMBRIDGE_CASTLE_STATE, 0, Lumbridge_Castle_Introduction
	.2byte 0


Lumbridge_Castle_GUARD::
	lock
	faceplayer
	msgbox Lumbridge_Castle_GUARD_Text_0
	release
	end


Lumbridge_Castle_HALLWAY_GUARD::
	lock
	faceplayer
	msgbox Lumbridge_Castle_HALLWAY_GUARD_Text_0
	release
	end


Lumbridge_Castle_HALLWAY_TRIGGER::
	lock
	PlaySE SE_PIN
	applymovement 13, Movement_Lumbridge_Castle_HALLWAY_TRIGGER1
	waitmovement 0
	msgbox Lumbridge_Castle_HALLWAY_GUARD_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Lumbridge_Castle_HALLWAY_TRIGGER2
	applymovement 13, Movement_Lumbridge_Castle_HALLWAY_TRIGGER3
	waitmovement 0
	release
	end


Movement_Lumbridge_Castle_HALLWAY_TRIGGER1:
	emote_exclamation_mark
	face_player
	step_end

Movement_Lumbridge_Castle_HALLWAY_TRIGGER2:
	walk_left
	step_end

Movement_Lumbridge_Castle_HALLWAY_TRIGGER3:
	face_left
	step_end

Lumbridge_Castle_Introduction::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Castle_Introduction_2
	release
	end

Lumbridge_Castle_Introduction_2:
	lockall
	setvar VAR_POKESCAPE_LUMBRIDGE_CASTLE_STATE, 1
	applymovement 9, Movement_Duke
	applymovement 10, Movement_Hans_1
	waitmovement 0
	playse SE_PIN
	applymovement 10, Movement_Hans_2
	waitmovement 0
	namebox Lumbridge_Castle_Introduction_Text_0
	msgbox Lumbridge_Castle_Introduction_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PLAYER_1
	waitmovement 0
	msgbox Lumbridge_Castle_Introduction_Text_2
	waitmessage
	hidenamebox
	closemessage
	applymovement 10, Movement_Hans_3
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PLAYER_2
	waitmovement 0
	applymovement 4, Movement_NORMALTREE_1
	waitmovement 0
	namebox Lumbridge_Castle_Introduction_Text_0
	msgbox Lumbridge_Castle_Introduction_Text_3
	hidenamebox
	applymovement 4, Movement_NORMALTREE_2
	waitmovement 0
	namebox Lumbridge_Castle_Introduction_Text_4
	msgbox Lumbridge_Castle_Introduction_Text_5
	msgbox Lumbridge_Castle_Introduction_Text_6, MSGBOX_YESNO
Lumbridge_Castle_Introduction_5:
	compare VAR_RESULT, 1
	goto_if_ne Lumbridge_Castle_Introduction_6
	msgbox Lumbridge_Castle_Introduction_Text_8
	hidenamebox
	release
	end

Lumbridge_Castle_Introduction_6:
	msgbox Lumbridge_Castle_Introduction_Text_7, MSGBOX_YESNO
	goto Lumbridge_Castle_Introduction_5


Lumbridge_Castle_Professor_Normal_Tree_1::
	goto_if_set FLAG_STARTER1, Lumbridge_Castle_Professor_Normal_Tree_1_2
	goto_if_set FLAG_STARTER2, Lumbridge_Castle_Professor_Normal_Tree_1_3
	goto_if_set FLAG_STARTER3, Lumbridge_Castle_Professor_Normal_Tree_1_4
Lumbridge_Castle_Professor_Normal_Tree_1_1:
	namebox Lumbridge_Castle_Introduction_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_1_Text_0
	hidenamebox
	playfanfare MUS_OBTAIN_ITEM
	msgbox Lumbridge_Castle_Professor_Normal_Tree_1_Text_1
	waitfanfare
	namebox Lumbridge_Castle_Introduction_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_1_Text_2
	waitmessage
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 4
	fadescreen FADE_FROM_BLACK
	goto Lumbridge_Castle_Hans_1
	release
	end

Lumbridge_Castle_Professor_Normal_Tree_1_2:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter1
	waitmovement 0
	goto Lumbridge_Castle_Professor_Normal_Tree_1_1

Lumbridge_Castle_Professor_Normal_Tree_1_3:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter2
	waitmovement 0
	goto Lumbridge_Castle_Professor_Normal_Tree_1_1

Lumbridge_Castle_Professor_Normal_Tree_1_4:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter3
	waitmovement 0
	goto Lumbridge_Castle_Professor_Normal_Tree_1_1


Lumbridge_Castle_Professor_Normal_Tree_2::
	lock
	faceplayer
	namebox Lumbridge_Castle_Introduction_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_2_Text_0
	hidenamebox
	release
	end


Lumbridge_Castle_Hans_0::
	lock
	faceplayer
	namebox Lumbridge_Castle_Introduction_Text_0
	msgbox Lumbridge_Castle_Hans_0_Text_0
	hidenamebox
	release
	end


Lumbridge_Castle_Hans_1::
	applymovement 10, Movement_Hans_4
	waitmovement 0
	namebox Lumbridge_Castle_Introduction_Text_0
	msgbox Lumbridge_Castle_Hans_1_Text_0
	waitmessage
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 9
	removeobject 10
	fadescreen FADE_FROM_BLACK
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	release
	end


Starter_TRIGGER::
	goto_if_unset FLAG_SYS_POKEMON_GET, Starter_TRIGGER_1
	release
	end

Starter_TRIGGER_1:
	lock
	namebox Lumbridge_Castle_Introduction_Text_4
	msgbox Lumbridge_Castle_Professor_Normal_Tree_2_Text_0
	waitmessage
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Starter_TRIGGER
	waitmovement 0
	release
	return


Movement_Starter_TRIGGER:
	walk_up
	step_end

Movement_Duke:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Hans_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Hans_2:
	emote_exclamation_mark
	face_player
	delay_16
	walk_down
	step_end

Movement_PLAYER_1:
	walk_in_place_up
	walk_in_place_up
	step_end

Movement_Hans_3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

Movement_PLAYER_2:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	face_up
	step_end

Movement_NORMALTREE_1:
	face_right
	step_end

Movement_NORMALTREE_2:
	face_player
	step_end

Movement_Hans_4:
	walk_left
	face_player
	step_end

Movement_Starter1:
	walk_right
	face_up
	step_end

Movement_Starter2:
	face_up
	step_end

Movement_Starter3:
	walk_left
	face_up
	step_end

Pouch_Starter1::
	lock
	goto_if_set FLAG_STARTER2, Pouch_Starter1_1
	goto_if_set FLAG_STARTER3, Pouch_Starter1_1
	goto_if_unset FLAG_MEMBERSHIP, Pouch_Starter1_6
	goto_if_set FLAG_MEMBERSHIP, Pouch_Starter1_7
	return

Pouch_Starter1_1:
	msgbox Pouch_Starter1_Text_0
	release
	return

Pouch_Starter1_6:
	lock
	showmonpic SPECIES_GUTHLING, 10, 3
	msgbox Pouch_Starter1_Text_1
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_GUTHLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_17
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 5
Pouch_Starter1_16:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter1_7:
	lock
	showmonpic SPECIES_ARMALING, 10, 3
	msgbox Pouch_Starter1_Text_4
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ARMALING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter1_21
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 5
Pouch_Starter1_20:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter1_10:
	hidemonpic
	release
	return

Pouch_Starter1_13:
	hidemonpic
	release
	return

Pouch_Starter1_17:
	removeobject 5
	hidemonpic
	release
	goto Pouch_Starter1_16

Pouch_Starter1_21:
	removeobject 5
	hidemonpic
	release
	goto Pouch_Starter1_20


Pouch_Starter2::
	lock
	goto_if_set FLAG_STARTER1, Pouch_Starter2_1
	goto_if_set FLAG_STARTER3, Pouch_Starter2_1
	goto_if_unset FLAG_MEMBERSHIP, Pouch_Starter2_6
	goto_if_set FLAG_MEMBERSHIP, Pouch_Starter2_7
	return

Pouch_Starter2_1:
	msgbox Pouch_Starter1_Text_0
	release
	return

Pouch_Starter2_6:
	lock
	showmonpic SPECIES_ZAMLING, 10, 3
	msgbox Pouch_Starter2_Text_0
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ZAMLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_17
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 6
Pouch_Starter2_16:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter2_7:
	lock
	showmonpic SPECIES_UNGODLING, 10, 3
	msgbox Pouch_Starter2_Text_1
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_UNGODLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter2_21
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 6
Pouch_Starter2_20:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter2_10:
	hidemonpic
	release
	return

Pouch_Starter2_13:
	hidemonpic
	release
	return

Pouch_Starter2_17:
	removeobject 6
	hidemonpic
	release
	goto Pouch_Starter2_16

Pouch_Starter2_21:
	removeobject 6
	hidemonpic
	release
	goto Pouch_Starter2_20


Pouch_Starter3::
	lock
	goto_if_set FLAG_STARTER1, Pouch_Starter3_1
	goto_if_set FLAG_STARTER2, Pouch_Starter3_1
	goto_if_unset FLAG_MEMBERSHIP, Pouch_Starter3_6
	goto_if_set FLAG_MEMBERSHIP, Pouch_Starter3_7
	return

Pouch_Starter3_1:
	msgbox Pouch_Starter1_Text_0
	release
	return

Pouch_Starter3_6:
	lock
	showmonpic SPECIES_SARALING, 10, 3
	msgbox Pouch_Starter3_Text_0
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_SARALING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_17
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 7
Pouch_Starter3_16:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter3_7:
	lock
	showmonpic SPECIES_TUMEKLING, 10, 3
	msgbox Pouch_Starter3_Text_1
	msgbox Pouch_Starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TUMEKLING, 5, ITEM_NONE
	msgbox Pouch_Starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Pouch_Starter3_21
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 7
Pouch_Starter3_20:
	goto Lumbridge_Castle_Professor_Normal_Tree_1
	return

Pouch_Starter3_10:
	hidemonpic
	release
	return

Pouch_Starter3_13:
	hidemonpic
	release
	return

Pouch_Starter3_17:
	removeobject 7
	hidemonpic
	release
	goto Pouch_Starter3_16

Pouch_Starter3_21:
	removeobject 7
	hidemonpic
	release
	goto Pouch_Starter3_20


LumbridgeCastleCook::
	lock
	faceplayer
	checkitem ITEM_CAKE, 1
	compare VAR_RESULT, 0
	goto_if_ne LumbridgeCastleCook_3
LumbridgeCastleCook_1:
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, LumbridgeCastleCook_6
	goto_if_set FLAG_COOKS_ASSIST_STARTED, LumbridgeCastleCook_9
LumbridgeCastleCook_8:
	msgbox LumbridgeCastleCook_Text_14
	release
	return

LumbridgeCastleCook_2:
	removeitem ITEM_CAKE, 1
	msgbox LumbridgeCastleCook_Text_0
	msgbox LumbridgeCastleCook_Text_1
	setflag FLAG_COOKS_ASSIST_FINISHED
	release
	goto LumbridgeCastleCook_1

LumbridgeCastleCook_3:
	goto_if_unset FLAG_COOKS_ASSIST_FINISHED, LumbridgeCastleCook_2
	goto LumbridgeCastleCook_1

LumbridgeCastleCook_6:
	msgbox CookAssistStartTextFirst
	msgbox CookAssistStartTextSecond
	msgbox LumbridgeCastleCook_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LumbridgeCastleCook_13
	msgbox LumbridgeCastleCook_Text_6
	release
	return

LumbridgeCastleCook_7:
	msgbox LumbridgeCastleCook_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LumbridgeCastleCook_16
	msgbox LumbridgeCastleCook_Text_13
	release
	return

LumbridgeCastleCook_9:
	goto_if_unset FLAG_COOKS_ASSIST_FINISHED, LumbridgeCastleCook_7
	goto LumbridgeCastleCook_8

LumbridgeCastleCook_13:
	msgbox LumbridgeCastleCook_Text_3
	msgbox CookItemsListFirst
	msgbox CookItemsListSecond
	msgbox LumbridgeCastleCook_Text_4
	giveitem ITEM_MAP
	msgbox LumbridgeCastleCook_Text_5
	setflag FLAG_COOKS_ASSIST_STARTED
	release
	return

LumbridgeCastleCook_16:
	msgbox LumbridgeCastleCook_Text_8
	checkitem ITEM_EGG, 1
	compare VAR_RESULT, 0
	goto_if_eq LumbridgeCastleCook_20
	checkitem ITEM_MILK_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne LumbridgeCastleCook_26
LumbridgeCastleCook_19:
	checkitem ITEM_MILK_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_eq LumbridgeCastleCook_24
LumbridgeCastleCook_23:
	checkitem ITEM_FLOUR_POT, 1
	compare VAR_RESULT, 0
	goto_if_eq LumbridgeCastleCook_29
LumbridgeCastleCook_28:
	release
	return

LumbridgeCastleCook_20:
	msgbox LumbridgeCastleCook_Text_9
	goto LumbridgeCastleCook_19

LumbridgeCastleCook_24:
	msgbox LumbridgeCastleCook_Text_11
	goto LumbridgeCastleCook_23

LumbridgeCastleCook_26:
	checkitem ITEM_FLOUR_POT, 1
	compare VAR_RESULT, 0
	goto_if_ne LumbridgeCastleCook_31
	goto LumbridgeCastleCook_19

LumbridgeCastleCook_29:
	msgbox LumbridgeCastleCook_Text_12
	goto LumbridgeCastleCook_28

LumbridgeCastleCook_31:
	msgbox LumbridgeCastleCook_Text_10
	release
	goto LumbridgeCastleCook_19


FillBucketWater::
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne FillBucketWater_1
	msgbox FillBucketWater_Text_0
	release
	return

FillBucketWater_1:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_WATER_BUCKET, 1
	release
	return


CookCake::
	lock
	msgbox CookCake_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne CookCake_2
CookCake_1:
	release
	return

CookCake_2:
	checkitem ITEM_EGG, 1
	compare VAR_RESULT, 0
	goto_if_ne CookCake_4
	msgbox CookCake_Text_4
	goto CookCake_1

CookCake_4:
	checkitem ITEM_MILK_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne CookCake_7
	msgbox CookCake_Text_3
	goto CookCake_1

CookCake_7:
	checkitem ITEM_FLOUR_POT, 1
	compare VAR_RESULT, 0
	goto_if_ne CookCake_10
	msgbox CookCake_Text_2
	goto CookCake_1

CookCake_10:
	removeitem ITEM_EGG, 1
	removeitem ITEM_MILK_BUCKET, 1
	removeitem ITEM_FLOUR_POT, 1
	additem ITEM_EMPTY_BUCKET, 1
	additem ITEM_EMPTY_POT, 1
	additem ITEM_CAKE, 1
	msgbox CookCake_Text_1
	goto CookCake_1


CheckCookFinished::
	goto_if_unset FLAG_COOKS_ASSIST_FINISHED, CheckCookFinished_2
CheckCookFinished_1:
	release
	return

CheckCookFinished_2:
	lock
	applymovement 1, CookAlert
	waitmovement 0
	msgbox CheckCookFinished_Text_0
	release
	applymovement OBJ_EVENT_ID_PLAYER, ReturnToCook
	waitmovement 0
	goto CheckCookFinished_1


CookAlert:
	jump_in_place_left
	emote_exclamation_mark
	step_end

ReturnToCook:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

Lumbridge_Castle_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC1_Text_0
	release
	end


Lumbridge_Castle_GUARD_Text_0:
	.string "I'm on guard duty.\p"
	.string "Please do not cause any problems.$"

Lumbridge_Castle_HALLWAY_GUARD_Text_0:
	.string "I'm sorry but this hallway is off limits.\p"
	.string "I'm surpirsed you are talking to be to\n"
	.string "be honest.\p"
	.string "No one ever uses this hallway.$"

Lumbridge_Castle_Introduction_Text_0:
	.string "Hans$"

Lumbridge_Castle_Introduction_Text_1:
	.string "Hello there!\p"
	.string "My name is Hans.\p"
	.string "You are...?$"

Lumbridge_Castle_Introduction_Text_2:
	.string "...\p"
	.string "Nice to meet you {PLAYER}.\p"
	.string "You must be here to see the\n"
	.string "researcher?\p"
	.string "We've had a few others come see him\n"
	.string "today too.\p"
	.string "Follow me.$"

Lumbridge_Castle_Introduction_Text_3:
	.string "Sorry to interrupt but this is\n"
	.string "{PLAYER}.\p"
	.string "They are interested in your quest\n"
	.string "Professor.$"

Lumbridge_Castle_Introduction_Text_4:
	.string "Prof. Normal Tree$"

Lumbridge_Castle_Introduction_Text_5:
	.string "Nice.\p"
	.string "I am Professor Normal Tree.\p"
	.string "I am in need of assistants to help me in\n"
	.string "my research, as you would know this\l"
	.string "world is full to the brim with all sorts\l"
	.string "of monsters.\p"
	.string "What I would like assistance with is\n"
	.string "filling this BESTIARY with as much data\l"
	.string "as possible.\p"
	.string "Of course I wouldn't ask you to do it\n"
	.string "for free, I'll be giving you one of 3\l"
	.string "rare monsters to take with you on your\l"
	.string "journey.$"

Lumbridge_Castle_Introduction_Text_6:
	.string "Would you like to accept my Quest?$"

Lumbridge_Castle_Introduction_Text_7:
	.string "Noob.\p"
	.string "...How about now?$"

Lumbridge_Castle_Introduction_Text_8:
	.string "Nice.\p"
	.string "Please choose from one of these 3\n"
	.string "monsters on the table.$"

Lumbridge_Castle_Professor_Normal_Tree_1_Text_0:
	.string "Nice.\p"
	.string "Please take this BEASTIARY.$"

Lumbridge_Castle_Professor_Normal_Tree_1_Text_1:
	.string "Obtained the BEASTIARY.$"

Lumbridge_Castle_Professor_Normal_Tree_1_Text_2:
	.string "I've got to head to Kandarin now, I look\n"
	.string "forward to seeing how much of the\l"
	.string "BEASTIARY you've filled out the next\l"
	.string "we meet.\p"
	.string "Until then...\l"
	.string "Nice.$"

Lumbridge_Castle_Professor_Normal_Tree_2_Text_0:
	.string "Please choose from one of these 3\n"
	.string "monsters on the table.$"

Lumbridge_Castle_Hans_0_Text_0:
	.string "Oh how exciting!\p"
	.string "I wonder which one you will choose.$"

Lumbridge_Castle_Hans_1_Text_0:
	.string "{PLAYER}, before you go have you\n"
	.string "heard of the MvM championships?\p"
	.string "MvM, which stands for Monster VS\n"
	.string "Monster, is where trainers compete\l"
	.string "against eachother in battle by using\l"
	.string "their monsters to fight for them.\p"
	.string "If you wish to participate in the MvM\n"
	.string "Championships you must defeat 8\l"
	.string "leaders from around Gielinor and make\l"
	.string "your way to the Wilderness Volcano.\p"
	.string "The Duke is one of these 8 Leaders.\p"
	.string "If you are interested you should pay\n"
	.string "him a visit.\p"
	.string "Anyway, all the best on your adventure\n"
	.string "{PLAYER}, I'm sure I'll see you\l"
	.string "around.$"

Pouch_Starter1_Text_0:
	.string "You have already chosen!$"

Pouch_Starter1_Text_1:
	.string "This is a Guthling.$"

Pouch_Starter1_Text_2:
	.string "Would you like this monster as your\n"
	.string "starter?$"

Pouch_Starter1_Text_3:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

Pouch_Starter1_Text_4:
	.string "This is an Armaling.$"

Pouch_Starter2_Text_0:
	.string "This is a Zamling.$"

Pouch_Starter2_Text_1:
	.string "This is an Ungodling.$"

Pouch_Starter3_Text_0:
	.string "This is a Saraling.$"

Pouch_Starter3_Text_1:
	.string "This is an Tumekling.$"

LumbridgeCastleCook_Text_0:
	.string "I am saved! Thank you so much!\p"
	.string "Feel free to use my Range anytime.$"

LumbridgeCastleCook_Text_1:
	.string "Oh? What's that?\n"
	.string "You wanted to challenge the Duke to a\l"
	.string "Gym Battle?\p"
	.string "Why didn't you say so!\n"
	.string "Go straight up those stairs.\n"
	.string "I'll let him know you're coming.$"

LumbridgeCastleCook_Text_2:
	.string "Can you please help me?$"

LumbridgeCastleCook_Text_3:
	.string "Oh, thank you, thank you!$"

LumbridgeCastleCook_Text_4:
	.string "oh.. before you go.$"

LumbridgeCastleCook_Text_5:
	.string "Hopefully that map will help you if you\n"
	.string "get lost.$"

LumbridgeCastleCook_Text_6:
	.string "Fine! I always knew you adventurer\n"
	.string "types were callous beasts! Go on your\l"
	.string "merry way.$"

LumbridgeCastleCook_Text_7:
	.string "Do you need help with finding the\n"
	.string "ingredients?$"

LumbridgeCastleCook_Text_8:
	.string "I need an egg, some milk, and some flour.$"

LumbridgeCastleCook_Text_9:
	.string "You should visit the farm north of here\n"
	.string "for an egg.$"

LumbridgeCastleCook_Text_10:
	.string "It looks like you have everything!\p"
	.string "Could you also make the cake?\n"
	.string "I forgot how.\p"
	.string "Use the range over there!$"

LumbridgeCastleCook_Text_11:
	.string "You can get some milk from the Cow\n"
	.string "Field, east of Lumbridge.$"

LumbridgeCastleCook_Text_12:
	.string "You should ask someone at the Windmill\n"
	.string "if they can give you some flour.$"

LumbridgeCastleCook_Text_13:
	.string "Great! Please hurry!$"

LumbridgeCastleCook_Text_14:
	.string "Thanks again for all the help!$"

FillBucketWater_Text_0:
	.string "Running water - A nice feature!$"

CookCake_Text_0:
	.string "Would you like to bake a cake?$"

CookCake_Text_1:
	.string "You bake a cake.$"

CookCake_Text_2:
	.string "You don't have any flour!$"

CookCake_Text_3:
	.string "You don't have any milk!$"

CookCake_Text_4:
	.string "You don't have any eggs!$"

CheckCookFinished_Text_0:
	.string "Hey come here!$"

Lumbridge_Castle_NPC1_Text_0:
	.string "The Duke is sort of like the regional\n"
	.string "champion around here.\p"
	.string "Better stay on his good side.$"

CookAssistStartTextFirst::
	.string "Oh dear.. What am I to do.. I'm in a\n"
	.string "terrible, terrible mess!$"

CookAssistStartTextSecond::
	.string "I should be making a cake for the Duke\n"
	.string "but I forgot to get the ingredients!$"

CookItemsListFirst::
	.string "I need an egg, some milk and some flour.\n"
	.string "You should go visit the farm north of\l"
	.string "here for an egg.$"

CookItemsListSecond::
	.string "You can get some milk from the Cow\n"
	.string "Field, east of Lumbridge. You should\l"
	.string "ask someone at the Windmill if they can\l"
	.string "give you some flour.$"
