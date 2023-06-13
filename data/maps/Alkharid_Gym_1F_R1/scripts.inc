Alkharid_Gym_1F_R1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_1F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_1F_R1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_STATE
	return


GYM_NPC_3::
	lock
	faceplayer
	checktrainerflag TRAINER_ALKHARID_GYM_TRAINER_2
	compare VAR_RESULT, 0
	goto_if_ne GYM_NPC_3_2
GYM_NPC_3_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_3_5
GYM_NPC_3_4:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_3_10
	msgbox GYM_NPC_3_Text_6
GYM_NPC_3_9:
	release
	end

GYM_NPC_3_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_3_7
	goto GYM_NPC_3_1

GYM_NPC_3_5:
	msgbox GYM_NPC_3_Text_4
	goto GYM_NPC_3_4

GYM_NPC_3_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_3_14
	applymovement 3, Movement_AlkharidGym_NPC_3
	waitmovement 0
	trainerbattle_single TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_2, GYM_NPC_3_Text_3
	release
	end

GYM_NPC_3_10:
	msgbox GYM_NPC_3_Text_5
	goto GYM_NPC_3_9

GYM_NPC_3_14:
	msgbox GYM_NPC_3_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 3, Movement_AlkharidGym_NPC_3
	applymovement 1, Movement_AlkharidGym_NPC_3_Ali
	delay 60
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_3
	release
	end


GYM_NPC_4::
	lock
	faceplayer
	checktrainerflag TRAINER_ALKHARID_GYM_TRAINER_2
	compare VAR_RESULT, 0
	goto_if_ne GYM_NPC_4_2
GYM_NPC_4_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_4_5
GYM_NPC_4_4:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_4_10
	msgbox GYM_NPC_3_Text_6
GYM_NPC_4_9:
	release
	end

GYM_NPC_4_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_4_7
	goto GYM_NPC_4_1

GYM_NPC_4_5:
	msgbox GYM_NPC_3_Text_4
	goto GYM_NPC_4_4

GYM_NPC_4_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_4_14
	applymovement 3, Movement_AlkharidGym_NPC_4
	waitmovement 0
	trainerbattle_single TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_2, GYM_NPC_3_Text_3
	release
	end

GYM_NPC_4_10:
	msgbox GYM_NPC_3_Text_5
	goto GYM_NPC_4_9

GYM_NPC_4_14:
	msgbox GYM_NPC_3_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 1
	clearflag FLAG_TEMP_6
	applymovement 3, Movement_AlkharidGym_NPC_4
	applymovement 1, Movement_AlkharidGym_NPC_4_Ali
	delay 60
	namebox GYM_NPC_3_Text_1
	msgbox GYM_NPC_3_Text_2
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_2, GYM_NPC_3_Text_3
	release
	end


Movement_AlkharidGym_NPC_3:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	face_player
	step_end

Movement_AlkharidGym_NPC_3_Ali:
	walk_fastest_up
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	face_player
	step_end

Movement_AlkharidGym_NPC_4:
	walk_fastest_down
	walk_fastest_down
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_up
	face_player
	step_end

Movement_AlkharidGym_NPC_4_Ali:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_player
	step_end

GYM_NPC_3_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_3_Text_1:
	.string "Warrior$"

GYM_NPC_3_Text_2:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_NPC_3_Text_3:
	.string "Consider that a warning!$"

GYM_NPC_3_Text_4:
	.string "Hello congrats on beating the gym.$"

GYM_NPC_3_Text_5:
	.string "Hello.$"

GYM_NPC_3_Text_6:
	.string "We use our lives to protect our prince.$"
