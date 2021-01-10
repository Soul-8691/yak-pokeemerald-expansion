Lumbridge_Castle_2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Castle_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto TryMoveGuardLumbridgeCastle2
	return


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


LumbridgeCastle2NPC::
	faceplayer
	msgbox LumbridgeCastle2NPC_Text_0
	setflag FLAG_BADGE01_GET
	release
	return


TryMoveGuardLumbridgeCastle2::
	goto_if_set FLAG_BADGE01_GET, TryMoveGuardLumbridgeCastle2_1
	return

TryMoveGuardLumbridgeCastle2_1:
	setobjectxyperm 3, 26, 12
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_DOWN
	return


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

LumbridgeCastle2NPC_Text_0:
	.string "The castle is great! I hope to challenge\n"
	.string "the Duke some day.$"

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
