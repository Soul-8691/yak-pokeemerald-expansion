Route30_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route30_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route30_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call MoveNPCsAfterEvents_WILDERNESS_BLOCK
	return


WILDERNESS_SIGNPOST::
	msgbox WILDERNESS_SIGNPOST_Text_0
	closemessage
	release
	end


BLOCKADE_ROUTE30_WILDERNESS::
	compare VAR_WILDERNESS_BLOCK_STATE, 1
	goto_if_eq BLOCKADE_ROUTE30_WILDERNESS_1
	faceplayer
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_Text_1
	closemessage
	hidenamebox
	call BLOCKADE_ROUTE30_WILDERNESS_2
	closemessage
	hidenamebox
	release
	end

BLOCKADE_ROUTE30_WILDERNESS_1:
	goto BLOCKADE_ROUTE30_WILDERNESS_3
	return


BLOCKADE_ROUTE30_WILDERNESS_2::
	goto_if_set FLAG_BADGE01_GET, BLOCKADE_ROUTE30_WILDERNESS_2_5
BLOCKADE_ROUTE30_WILDERNESS_2_3:
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne BLOCKADE_ROUTE30_WILDERNESS_2_19
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_3
	return

BLOCKADE_ROUTE30_WILDERNESS_2_1:
	fadescreen FADE_TO_BLACK
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	closemessage
	hidenamebox
	setflag FLAG_TEMP_1
	setvar VAR_WILDERNESS_BLOCK_STATE, 1
	fadescreen FADE_FROM_BLACK
	return

BLOCKADE_ROUTE30_WILDERNESS_2_2:
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_0
	goto BLOCKADE_ROUTE30_WILDERNESS_2_1

BLOCKADE_ROUTE30_WILDERNESS_2_4:
	goto_if_set FLAG_BADGE03_GET, BLOCKADE_ROUTE30_WILDERNESS_2_9
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_5:
	goto_if_set FLAG_BADGE02_GET, BLOCKADE_ROUTE30_WILDERNESS_2_4
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_8:
	goto_if_set FLAG_BADGE05_GET, BLOCKADE_ROUTE30_WILDERNESS_2_13
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_9:
	goto_if_set FLAG_BADGE04_GET, BLOCKADE_ROUTE30_WILDERNESS_2_8
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_12:
	goto_if_set FLAG_BADGE07_GET, BLOCKADE_ROUTE30_WILDERNESS_2_16
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_13:
	goto_if_set FLAG_BADGE06_GET, BLOCKADE_ROUTE30_WILDERNESS_2_12
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_16:
	goto_if_set FLAG_BADGE08_GET, BLOCKADE_ROUTE30_WILDERNESS_2_2
	goto BLOCKADE_ROUTE30_WILDERNESS_2_3

BLOCKADE_ROUTE30_WILDERNESS_2_19:
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_2_Text_2
	goto BLOCKADE_ROUTE30_WILDERNESS_2_1


BLOCKADE_ROUTE30_WILDERNESS_3::
	faceplayer
	namebox BLOCKADE_ROUTE30_WILDERNESS_Text_0
	msgbox BLOCKADE_ROUTE30_WILDERNESS_3_Text_0
	closemessage
	hidenamebox
	release
	end


MoveNPCsAfterEvents_WILDERNESS_BLOCK::
	switch VAR_WILDERNESS_BLOCK_STATE
	case 0, MoveNPCsAfterEvents_WILDERNESS_BLOCK_2
	case 1, MoveNPCsAfterEvents_WILDERNESS_BLOCK_3
	return

MoveNPCsAfterEvents_WILDERNESS_BLOCK_2:
	return

MoveNPCsAfterEvents_WILDERNESS_BLOCK_3:
	setobjectxyperm 6, 10, 2
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 7, 11, 2
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
	return


WILDERNESS_SIGNPOST_Text_0:
	.string "DANGER!\p"
	.string "Beyond this point you are not safe.\p"
	.string "There is a high chance that strong wild\n"
	.string "Monsters and Pkers will attack you.$"

BLOCKADE_ROUTE30_WILDERNESS_Text_0:
	.string "Guard$"

BLOCKADE_ROUTE30_WILDERNESS_Text_1:
	.string "Beyond here lies the Wilderness.\p"
	.string "It is full of many dangerous monsters\n"
	.string "and people.\p"
	.string "The king has posted us here to only\n"
	.string "allow those whomst have proved\l"
	.string "themselves able to defend themselves.$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_0:
	.string "Impressive!\p"
	.string "You have all of the MvM Badges, you\n"
	.string "seem like you are well prepared to now\l"
	.string "face the Wilderness!\p"
	.string "Good luck on your MvM Championships\n"
	.string "Journey!$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_1:
	.string "WARNING - It is reccommended that you\n"
	.string "have at least 8 Gym Badges before\l"
	.string "proceeding.\p"
	.string "Would you like to pass and enter the\n"
	.string "Wilderness?$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_2:
	.string "You may pass but do not say we didn't\n"
	.string "warn you.$"

BLOCKADE_ROUTE30_WILDERNESS_2_Text_3:
	.string "A wise choice, it can be very dangerous\n"
	.string "out there for those who are not\l"
	.string "prepared.$"

BLOCKADE_ROUTE30_WILDERNESS_3_Text_0:
	.string "The Wilderness is a dangerous place.\p"
	.string "Make sure you are always cautious while\n"
	.string "traversing it.$"
