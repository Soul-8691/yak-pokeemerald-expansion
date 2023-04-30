AlKharid_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AlKharid_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return


ALKHARID_GNOMEGLIDER::
	msgbox ALKHARID_GNOMEGLIDER_Text_0
	closemessage
	release
	end


ALKHARID_NPC_1::
	faceplayer
	msgbox ALKHARID_NPC_1_Text_0
	closemessage
	release
	end


ALKHARID_NPC_2::
	faceplayer
	namebox ALKHARID_NPC_2_Text_0
	msgbox ALKHARID_NPC_2_Text_1
	closemessage
	hidenamebox
	release
	end


ALKHARID_NPC_3::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_4::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_5::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_6::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_7::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_8::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_9::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_10::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_11::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_12::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_13::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_14::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_15::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_NPC_16::
	faceplayer
	msgbox ALKHARID_NPC_3_Text_0
	closemessage
	release
	end


ALKHARID_GYM_STATE::
	switch VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE
	case 0, ALKHARID_GYM_STATE_3
	case 5, ALKHARID_GYM_STATE_3
	case 10, ALKHARID_GYM_STATE_4
	case 15, ALKHARID_GYM_STATE_5
ALKHARID_GYM_STATE_1:
	return

ALKHARID_GYM_STATE_3:
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 32
	setobjectmovementtype OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
	setobjectxy 7, 9, 31
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	setobjectxy 1, 7, 31
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxy 8, 8, 31
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
	setobjectxy 5, 9, 31
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectxy 2, 10, 31
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectxy 4, 11, 31
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxy 6, 12, 31
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_4:
	removeobject 7
	addobject 9
	setobjectxy 9, 9, 31
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_DOWN
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_5:
	setobjectxyperm 1, 1, 31
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 8, 1, 31
	setobjectmovementtype 8, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 5, 1, 31
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 2, 1, 31
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 4, 1, 31
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 6, 1, 31
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	goto ALKHARID_GYM_STATE_1


QUEST_ALKHARID_GYM_1::
	namebox QUEST_ALKHARID_GYM_1_Text_0
	msgbox QUEST_ALKHARID_GYM_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq QUEST_ALKHARID_GYM_1_2
	msgbox QUEST_ALKHARID_GYM_1_Text_3
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 5
	fadescreen FADE_TO_BLACK
	call ALKHARID_GYM_STATE
	fadescreen FADE_FROM_BLACK
	namebox QUEST_ALKHARID_GYM_1_Text_4
	msgbox QUEST_ALKHARID_GYM_1_Text_5
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 10
	setflag FLAG_TEMP_A
	clearflag FLAG_TEMP_B
	fadescreen FADE_TO_BLACK
	call ALKHARID_GYM_STATE
	fadescreen FADE_FROM_BLACK
	namebox QUEST_ALKHARID_GYM_1_Text_4
	msgbox QUEST_ALKHARID_GYM_1_Text_6
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	fadescreen FADE_TO_BLACK
	fadescreen FADE_FROM_BLACK
	return

QUEST_ALKHARID_GYM_1_2:
	msgbox QUEST_ALKHARID_GYM_1_Text_2
	closemessage
	hidenamebox
	return


ALKHARID_GYM_ALI::
	lock
	faceplayer
	namebox QUEST_ALKHARID_GYM_1_Text_4
	goto_if_unset FLAG_BADGE04_GET, ALKHARID_GYM_ALI_2
	goto_if_set FLAG_BADGE04_GET, ALKHARID_GYM_ALI_5
	msgbox ALKHARID_GYM_ALI_Text_7
ALKHARID_GYM_ALI_4:
	hidenamebox
	release
	end

ALKHARID_GYM_ALI_2:
	msgbox ALKHARID_GYM_ALI_Text_0
	hidenamebox
	trainerbattle_no_intro TRAINER_VARROCK_GYM_KINGROALD, ALKHARID_GYM_ALI_Text_1
	namebox QUEST_ALKHARID_GYM_1_Text_4
	msgbox ALKHARID_GYM_ALI_Text_2
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox ALKHARID_GYM_ALI_Text_3
	waitfanfare
	waitmessage
	namebox QUEST_ALKHARID_GYM_1_Text_4
	msgbox ALKHARID_GYM_ALI_Text_4
	hidenamebox
	giveitem ITEM_TM20, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_VARROCK, 0
	savebgm MUS_PS_VARROCK
	namebox QUEST_ALKHARID_GYM_1_Text_4
	msgbox ALKHARID_GYM_ALI_Text_5
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 26
	setflag FLAG_BADGE04_GET
	addvar VAR_LEVEL_SCALING_STATE, 1
	call SetGymTrainers_VARROCK
	hidenamebox
	release
	end

ALKHARID_GYM_ALI_5:
	msgbox ALKHARID_GYM_ALI_Text_6
	goto ALKHARID_GYM_ALI_4


MOVERELEARNER_NPC::
	faceplayer
	msgbox MOVERELEARNER_NPC_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne MOVERELEARNER_NPC_2
	closemessage
	end

	release
	end

MOVERELEARNER_NPC_2:
	msgbox MOVERELEARNER_NPC_Text_1
	special ChooseMonForMoveRelearner
	waitstate
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	closemessage
	end


ALKHARID_GNOMEGLIDER_Text_0:
	.string "It is a Gnome Glider.$"

ALKHARID_NPC_1_Text_0:
	.string "The Gnome Glider is currently\n"
	.string "undergoing maintenance.\p"
	.string "Please come back later.$"

ALKHARID_NPC_2_Text_0:
	.string "Ali$"

ALKHARID_NPC_2_Text_1:
	.string "Browse my Wares.$"

ALKHARID_NPC_3_Text_0:
	.string "$"

QUEST_ALKHARID_GYM_1_Text_0:
	.string "Advisor$"

QUEST_ALKHARID_GYM_1_Text_1:
	.string "Welcome to the Al-Kharid Gym.\p"
	.string "Would you like to start your Gym\n"
	.string "Challenge?$"

QUEST_ALKHARID_GYM_1_Text_2:
	.string "Come back when you are ready to\n"
	.string "challenge the Al-Kharid Gym.$"

QUEST_ALKHARID_GYM_1_Text_3:
	.string "Very well, let us prepare your challenge.$"

QUEST_ALKHARID_GYM_1_Text_4:
	.string "Prince Ali$"

QUEST_ALKHARID_GYM_1_Text_5:
	.string "This challenge is simple.\p"
	.string "All you must do is find me and challenge\n"
	.string "me to a battle.\p"
	.string "Sounds too easy right?\p"
	.string "But once I put this disguise on…$"

QUEST_ALKHARID_GYM_1_Text_6:
	.string "This suddenly got a lot harder didn't\n"
	.string "it?\p"
	.string "I will be somewhere around the Palace.\p"
	.string "Good luck!$"

ALKHARID_GYM_ALI_Text_0:
	.string "Welcome to the Al Kharid Gym.$"

ALKHARID_GYM_ALI_Text_1:
	.string "That was a very enjoyable battle!$"

ALKHARID_GYM_ALI_Text_2:
	.string "Have this Badge.$"

ALKHARID_GYM_ALI_Text_3:
	.string "{PLAYER} received the Varrock BADGE\n"
	.string "from Prince Ali.$"

ALKHARID_GYM_ALI_Text_4:
	.string "Also have this Scroll.$"

ALKHARID_GYM_ALI_Text_5:
	.string "That move is called CUPHOLDER.$"

ALKHARID_GYM_ALI_Text_6:
	.string "You seem like you would be strong\n"
	.string "enough to take on the Barbarians,\l"
	.string "maybe you should head there next for\l"
	.string "your MvM gym challenge.$"

ALKHARID_GYM_ALI_Text_7:
	.string "You should go pester the Prince in Al\n"
	.string "Kharid for your next MvM gym challenge.$"

MOVERELEARNER_NPC_Text_0:
	.string "Would you like re-learn a move that\n"
	.string "you've forgotten?$"

MOVERELEARNER_NPC_Text_1:
	.string "Please select a Monster you wish to\n"
	.string "relearn a move with.$"
