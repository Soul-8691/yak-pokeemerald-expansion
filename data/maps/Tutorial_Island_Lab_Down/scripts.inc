Tutorial_Island_Lab_Down_MapScripts::
	.byte 0


starter1::
	lock
	goto_if_set FLAG_CHOSE_STARTER2, starter1_1
	goto_if_set FLAG_CHOSE_STARTER3, starter1_1
	goto_if_unset FLAG_MEMBERSHIP, starter1_6
	goto_if_set FLAG_MEMBERSHIP, starter1_7
	return

starter1_1:
	msgbox starter1_Text_0
	release
	return

starter1_6:
	lock
	showmonpic SPECIES_GUTHLING, 10, 3
	msgbox starter1_Text_1
	msgbox starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter1_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_GUTHLING, 5, ITEM_NONE
	msgbox starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter1_16
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 1
	return

starter1_7:
	lock
	showmonpic SPECIES_ARMALING, 10, 3
	msgbox starter1_Text_4
	msgbox starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter1_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ARMALING, 5, ITEM_NONE
	msgbox starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter1_19
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 1
	return

starter1_10:
	hidemonpic
	release
	return

starter1_13:
	hidemonpic
	release
	return

starter1_16:
	removeobject 1
	hidemonpic
	release
	return

starter1_19:
	removeobject 1
	hidemonpic
	release
	return


starter2::
	lock
	goto_if_set FLAG_CHOSE_STARTER1, starter2_1
	goto_if_set FLAG_CHOSE_STARTER3, starter2_1
	goto_if_unset FLAG_MEMBERSHIP, starter2_6
	goto_if_set FLAG_MEMBERSHIP, starter2_7
	return

starter2_1:
	msgbox starter1_Text_0
	release
	return

starter2_6:
	lock
	showmonpic SPECIES_ZAMLING, 10, 3
	msgbox starter2_Text_0
	msgbox starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter2_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_ZAMLING, 5, ITEM_NONE
	msgbox starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter2_16
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 2
	return

starter2_7:
	lock
	showmonpic SPECIES_UNGODLING, 10, 3
	msgbox starter2_Text_1
	msgbox starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter2_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_UNGODLING, 5, ITEM_NONE
	msgbox starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter2_19
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 2
	return

starter2_10:
	hidemonpic
	release
	return

starter2_13:
	hidemonpic
	release
	return

starter2_16:
	removeobject 2
	hidemonpic
	release
	return

starter2_19:
	removeobject 2
	hidemonpic
	release
	return


starter3::
	lock
	goto_if_set FLAG_CHOSE_STARTER1, starter3_1
	goto_if_set FLAG_CHOSE_STARTER2, starter3_1
	goto_if_unset FLAG_MEMBERSHIP, starter3_6
	goto_if_set FLAG_MEMBERSHIP, starter3_7
	return

starter3_1:
	msgbox starter1_Text_0
	release
	return

starter3_6:
	lock
	showmonpic SPECIES_SARALING, 10, 3
	msgbox starter3_Text_0
	msgbox starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter3_10
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_SARALING, 5, ITEM_NONE
	msgbox starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter3_16
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 3
	return

starter3_7:
	lock
	showmonpic SPECIES_TUMEKLING, 10, 3
	msgbox starter3_Text_1
	msgbox starter1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter3_13
	setflag FLAG_SYS_POKEMON_GET
	givemon SPECIES_TUMEKLING, 5, ITEM_NONE
	msgbox starter1_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq starter3_19
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
	removeobject 3
	return

starter3_10:
	hidemonpic
	release
	return

starter3_13:
	hidemonpic
	release
	return

starter3_16:
	removeobject 3
	hidemonpic
	release
	return

starter3_19:
	removeobject 3
	hidemonpic
	release
	return


membership::
	msgbox membership_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq membership_1
	clearflag FLAG_MEMBERSHIP
	release
	return

membership_1:
	setflag FLAG_MEMBERSHIP
	release
	return


INeedAMonsterUp::
	goto_if_unset FLAG_SYS_POKEMON_GET, INeedAMonsterUp_1
	release
	return

INeedAMonsterUp_1:
	lock
	msgbox INeedAMonsterUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MonsterMoveUp
	waitmovement 0
	release
	return


INeedAMonsterLeft::
	goto_if_unset FLAG_SYS_POKEMON_GET, INeedAMonsterLeft_1
	release
	return

INeedAMonsterLeft_1:
	lock
	msgbox INeedAMonsterUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MonsterMoveLeft
	waitmovement 0
	release
	return


INeedAMonsterRight::
	goto_if_unset FLAG_SYS_POKEMON_GET, INeedAMonsterRight_1
	release
	return

INeedAMonsterRight_1:
	lock
	msgbox INeedAMonsterUp_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, MonsterMoveRight
	waitmovement 0
	release
	return


MonsterMoveUp:
	walk_up
	step_end

MonsterMoveLeft:
	walk_left
	step_end

MonsterMoveRight:
	walk_right
	step_end

starter1_Text_0:
	.string "You have already chosen!$"

starter1_Text_1:
	.string "This is a guthling.$"

starter1_Text_2:
	.string "Would you like this monster as your\n"
	.string "starter?$"

starter1_Text_3:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

starter1_Text_4:
	.string "This is an armaling.$"

starter2_Text_0:
	.string "This is a zamling.$"

starter2_Text_1:
	.string "This is an ungodling.$"

starter3_Text_0:
	.string "This is a saraling.$"

starter3_Text_1:
	.string "This is an tumekling.$"

membership_Text_0:
	.string "Would you like to be a member?$"

INeedAMonsterUp_Text_0:
	.string "I should take a monster with me.$"
