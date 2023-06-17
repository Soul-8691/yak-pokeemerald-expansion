Alkharid_Gym_1F_R3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_1F_R3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_1F_R3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_ROOMS_STATE
	return


ALKHARID_GYM_ROOMS_STATE::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 0, ALKHARID_GYM_ROOMS_STATE_3
	case 5, ALKHARID_GYM_ROOMS_STATE_4
	case 10, ALKHARID_GYM_ROOMS_STATE_5
	case 15, ALKHARID_GYM_ROOMS_STATE_6
	case 20, ALKHARID_GYM_ROOMS_STATE_7
ALKHARID_GYM_ROOMS_STATE_1:
	return

ALKHARID_GYM_ROOMS_STATE_3:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_4:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_5:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_6:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1

ALKHARID_GYM_ROOMS_STATE_7:
	removeobject 1
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_ROOMS_STATE_1


GYM_NPC_1::
	lock
	faceplayer
	checktrainerflag TRAINER_ALKHARID_GYM_TRAINER_1
	compare VAR_RESULT, 0
	goto_if_ne GYM_NPC_1_2
GYM_NPC_1_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_1_5
GYM_NPC_1_4:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_1_10
	msgbox GYM_NPC_1_Text_6
GYM_NPC_1_9:
	release
	end

GYM_NPC_1_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_1_7
	goto GYM_NPC_1_1

GYM_NPC_1_5:
	msgbox GYM_NPC_1_Text_4
	goto GYM_NPC_1_4

GYM_NPC_1_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_1_14
	applymovement 3, Movement_AlkharidGym_NPC_1
	waitmovement 0
	trainerbattle_single TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_2, GYM_NPC_1_Text_3
	release
	end

GYM_NPC_1_10:
	msgbox GYM_NPC_1_Text_5
	goto GYM_NPC_1_9

GYM_NPC_1_14:
	msgbox GYM_NPC_1_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 3, Movement_AlkharidGym_NPC_1
	applymovement 1, Movement_AlkharidGym_NPC_1_Ali
	delay 60
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_1_17
	release
	end

GYM_NPC_1_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


Movement_AlkharidGym_NPC_1:
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	step_end

Movement_AlkharidGym_NPC_1_Ali:
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	face_player
	step_end

Movement_AlkharidGym_NPC_2:
	walk_fastest_down
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	step_end

Movement_AlkharidGym_NPC_2_Ali:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	face_player
	step_end

Movement_AlkharidGym_TELEPORT:
	fly_up
	step_end

GYM_NPC_2::
	lock
	faceplayer
	checktrainerflag TRAINER_ALKHARID_GYM_TRAINER_1
	compare VAR_RESULT, 0
	goto_if_ne GYM_NPC_2_2
GYM_NPC_2_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_2_5
GYM_NPC_2_4:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_2_10
	msgbox GYM_NPC_2_Text_0
GYM_NPC_2_9:
	release
	end

GYM_NPC_2_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_2_7
	goto GYM_NPC_2_1

GYM_NPC_2_5:
	msgbox GYM_NPC_1_Text_4
	goto GYM_NPC_2_4

GYM_NPC_2_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_2_14
	applymovement 2, Movement_AlkharidGym_NPC_2
	waitmovement 0
	trainerbattle_single TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_2, GYM_NPC_1_Text_3
	release
	end

GYM_NPC_2_10:
	msgbox GYM_NPC_1_Text_5
	goto GYM_NPC_2_9

GYM_NPC_2_14:
	msgbox GYM_NPC_1_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 2, Movement_AlkharidGym_NPC_2
	applymovement 1, Movement_AlkharidGym_NPC_2_Ali
	delay 60
	namebox GYM_NPC_1_Text_1
	msgbox GYM_NPC_1_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_1, GYM_NPC_1_Text_3
	release
	end


GYM_NPC_1_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_1_Text_1:
	.string "Warrior$"

GYM_NPC_1_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_1_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_1_Text_4:
	.string "Hello congrats on beating the gym.$"

GYM_NPC_1_Text_5:
	.string "Hello.$"

GYM_NPC_1_Text_6:
	.string "We use our lives to protect our prince.$"

GYM_NPC_2_Text_0:
	.string "Do not mistake us for the Prince.$"
