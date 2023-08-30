Jatizso_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Jatizso_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Jatizso_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Jatizso_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call JATIZSO_STATE
	return

Jatizso_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_RAC_QUEST_STATE, 5, RAC_QUEST_START_P2_JATIZSO
	.2byte 0


JATIZSO_STATE::
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_STATE_2
JATIZSO_STATE_1:
	return

JATIZSO_STATE_2:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 0
	goto_if_eq JATIZSO_STATE_5
JATIZSO_STATE_4:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 5
	goto_if_eq JATIZSO_STATE_8
JATIZSO_STATE_7:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 10
	goto_if_eq JATIZSO_STATE_11
JATIZSO_STATE_10:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 15
	goto_if_eq JATIZSO_STATE_14
JATIZSO_STATE_13:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 20
	goto_if_eq JATIZSO_STATE_17
JATIZSO_STATE_16:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 25
	goto_if_eq JATIZSO_STATE_19
	goto JATIZSO_STATE_1

JATIZSO_STATE_5:
	removeobject 24
	removeobject 14
	removeobject 8
	removeobject 9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	goto JATIZSO_STATE_4

JATIZSO_STATE_8:
	addobject 24
	removeobject 14
	removeobject 8
	removeobject 9
	clearflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	goto JATIZSO_STATE_7

JATIZSO_STATE_11:
	removeobject 24
	addobject 14
	removeobject 8
	removeobject 9
	setflag FLAG_TEMP_A
	clearflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	setobjectxyperm 20, 31, 28
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	goto JATIZSO_STATE_10

JATIZSO_STATE_14:
	removeobject 24
	removeobject 14
	addobject 8
	removeobject 9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	clearflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	setobjectxyperm 20, 20, 8
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	goto JATIZSO_STATE_13

JATIZSO_STATE_17:
	removeobject 24
	removeobject 14
	removeobject 8
	addobject 9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	clearflag FLAG_TEMP_D
	setobjectxyperm 20, 25, 4
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	goto JATIZSO_STATE_16

JATIZSO_STATE_19:
	removeobject 24
	removeobject 14
	removeobject 8
	removeobject 9
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	setflag FLAG_TEMP_C
	setflag FLAG_TEMP_D
	setobjectxyperm 20, 12, 15
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	goto JATIZSO_STATE_1


JATIZSO_INTERACT::
	msgbox JATIZSO_INTERACT_Text_0
	closemessage
	release
	end


JATIZSO_NPC_Lights::
	lock
	faceplayer
	namebox JATIZSO_NPC_Lights_Text_0
	checktrainerflag TRAINER_MITHRILMAN1
	compare VAR_RESULT, 0
	goto_if_eq JATIZSO_NPC_Lights_2
JATIZSO_NPC_Lights_1:
	msgbox JATIZSO_NPC_Lights_Text_3
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Lights_2:
	msgbox JATIZSO_NPC_Lights_Text_1
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_MITHRILMAN1, JATIZSO_NPC_Lights_Text_2
	goto JATIZSO_NPC_Lights_1


JATIZSO_NPC_Nicki::
	lock
	faceplayer
	namebox JATIZSO_NPC_Nicki_Text_0
	random 4
	switch VAR_RESULT
	case 0, JATIZSO_NPC_Nicki_3
	case 1, JATIZSO_NPC_Nicki_4
	case 2, JATIZSO_NPC_Nicki_5
	case 3, JATIZSO_NPC_Nicki_6
JATIZSO_NPC_Nicki_1:
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Nicki_3:
	msgbox JATIZSO_NPC_Nicki_Text_1
	goto JATIZSO_NPC_Nicki_1

JATIZSO_NPC_Nicki_4:
	msgbox JATIZSO_NPC_Nicki_Text_2
	goto JATIZSO_NPC_Nicki_1

JATIZSO_NPC_Nicki_5:
	msgbox JATIZSO_NPC_Nicki_Text_3
	goto JATIZSO_NPC_Nicki_1

JATIZSO_NPC_Nicki_6:
	msgbox JATIZSO_NPC_Nicki_Text_4
	faceplayer
	msgbox JATIZSO_NPC_Nicki_Text_5
	goto JATIZSO_NPC_Nicki_1


JATIZSO_NPC_AeternusLux::
	lock
	faceplayer
	namebox JATIZSO_NPC_AeternusLux_Text_0
	msgbox JATIZSO_NPC_AeternusLux_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Willoway::
	lock
	msgbox JATIZSO_NPC_Willoway_Text_0
	faceplayer
	namebox JATIZSO_NPC_Willoway_Text_1
	msgbox JATIZSO_NPC_Willoway_Text_2
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Casilliio::
	lock
	faceplayer
	namebox JATIZSO_NPC_Casilliio_Text_0
	msgbox JATIZSO_NPC_Casilliio_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Pop::
	lock
	namebox JATIZSO_NPC_Pop_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_Pop_Text_1
	waitmoncry
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Mothy::
	lock
	faceplayer
	namebox JATIZSO_NPC_Mothy_Text_0
	msgbox JATIZSO_NPC_Mothy_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Cici::
	lock
	faceplayer
	namebox JATIZSO_NPC_Cici_Text_0
	msgbox JATIZSO_NPC_Cici_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_taffingspy::
	lock
	faceplayer
	namebox JATIZSO_NPC_taffingspy_Text_0
	msgbox JATIZSO_NPC_taffingspy_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Kitty::
	lock
	namebox JATIZSO_NPC_Kitty_Text_0
	playmoncry SPECIES_MEOWTH, 0
	msgbox JATIZSO_NPC_Kitty_Text_1
	waitmoncry
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_JacksonOHare::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_JacksonOHare_3
JATIZSO_NPC_JacksonOHare_1:
	lock
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox JATIZSO_NPC_JacksonOHare_Text_1
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_JacksonOHare_2:
	goto RAC_QUEST_JATIZSO_JAGEX_P2
	goto JATIZSO_NPC_JacksonOHare_1

JATIZSO_NPC_JacksonOHare_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_JacksonOHare_2
	goto JATIZSO_NPC_JacksonOHare_1


JATIZSO_NPC_BonBun::
	lock
	namebox JATIZSO_NPC_BonBun_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_BonBun_Text_1
	waitmoncry
	hidenamebox
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox JATIZSO_NPC_BonBun_Text_2
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Elej::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Elej_3
JATIZSO_NPC_Elej_1:
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Elej_10
JATIZSO_NPC_Elej_8:
	lock
	faceplayer
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox JATIZSO_NPC_Elej_Text_3
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Elej_2:
	msgbox JATIZSO_NPC_Elej_Text_0
	msgbox JATIZSO_NPC_Elej_Text_1
	goto JATIZSO_NPC_Elej_1

JATIZSO_NPC_Elej_3:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 25
	goto_if_eq JATIZSO_NPC_Elej_5
	goto JATIZSO_NPC_Elej_1

JATIZSO_NPC_Elej_5:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Elej_2
	goto JATIZSO_NPC_Elej_1

JATIZSO_NPC_Elej_9:
	goto RAC_QUEST_JATIZSO_ELEJ_P1
	goto JATIZSO_NPC_Elej_8

JATIZSO_NPC_Elej_10:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Elej_9
	goto JATIZSO_NPC_Elej_8


JATIZSO_NPC_ModDragon_ModBats::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_ModDragon_ModBats_3
JATIZSO_NPC_ModDragon_ModBats_1:
	lock
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox JATIZSO_NPC_ModDragon_ModBats_Text_1
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox JATIZSO_NPC_ModDragon_ModBats_Text_3
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_ModDragon_ModBats_2:
	goto RAC_QUEST_JATIZSO_JAGEX_P1
	goto JATIZSO_NPC_ModDragon_ModBats_1

JATIZSO_NPC_ModDragon_ModBats_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_ModDragon_ModBats_2
	goto JATIZSO_NPC_ModDragon_ModBats_1


JATIZSO_NPC_Hakazin::
	lock
	namebox JATIZSO_NPC_Hakazin_Text_0
	msgbox JATIZSO_NPC_Hakazin_Text_1
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_Hakazin_Text_2
	msgbox JATIZSO_NPC_Hakazin_Text_3
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_Hakazin_Text_0
	msgbox JATIZSO_NPC_Hakazin_Text_4
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_Hakazin_Text_2
	msgbox JATIZSO_NPC_Hakazin_Text_5
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Dewydd::
	lock
	faceplayer
	namebox JATIZSO_NPC_Dewydd_Text_0
	msgbox JATIZSO_NPC_Dewydd_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Charmchi::
	lock
	faceplayer
	namebox JATIZSO_NPC_Charmchi_Text_0
	msgbox JATIZSO_NPC_Charmchi_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Tifa::
	lock
	faceplayer
	namebox JATIZSO_NPC_Charmchi_Text_0
	msgbox JATIZSO_NPC_Tifa_Text_0
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Moggies::
	lock
	namebox JATIZSO_NPC_Moggies_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox JATIZSO_NPC_Moggies_Text_1
	waitmoncry
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Rallis::
	lock
	faceplayer
	namebox JATIZSO_NPC_Rallis_Text_0
	msgbox JATIZSO_NPC_Rallis_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Jaxyys::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 15
	goto_if_eq JATIZSO_NPC_Jaxyys_3
JATIZSO_NPC_Jaxyys_1:
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Jaxyys_8
JATIZSO_NPC_Jaxyys_6:
	lock
	faceplayer
	namebox JATIZSO_NPC_Jaxyys_Text_0
	msgbox JATIZSO_NPC_Jaxyys_Text_1
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Jaxyys_2:
	goto RAC_QUEST_START_P3_JATIZSO_Jaxyys
	goto JATIZSO_NPC_Jaxyys_1

JATIZSO_NPC_Jaxyys_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Jaxyys_2
	goto JATIZSO_NPC_Jaxyys_1

JATIZSO_NPC_Jaxyys_7:
	goto RAC_QUEST_START_P3_JATIZSO_Jaxyys_check
	goto JATIZSO_NPC_Jaxyys_6

JATIZSO_NPC_Jaxyys_8:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Jaxyys_7
	goto JATIZSO_NPC_Jaxyys_6


JATIZSO_NPC_KING::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 10
	goto_if_eq JATIZSO_NPC_KING_3
JATIZSO_NPC_KING_1:
	lock
	faceplayer
	namebox JATIZSO_NPC_KING_Text_0
	msgbox JATIZSO_NPC_KING_Text_1
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_KING_2:
	goto RAC_QUEST_START_P3_JATIZSO
	goto JATIZSO_NPC_KING_1

JATIZSO_NPC_KING_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_KING_2
	goto JATIZSO_NPC_KING_1


RAC_QUEST_SAIL_MAN::
	lock
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 0
	goto_if_eq RAC_QUEST_SAIL_MAN_2
RAC_QUEST_SAIL_MAN_1:
	faceplayer
	namebox RAC_QUEST_SAIL_MAN_Text_0
	goto_if_set FLAG_EVENT_TEAM_NEITIZNOT, RAC_QUEST_SAIL_MAN_5
	msgbox RAC_QUEST_SAIL_MAN_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_SAIL_MAN_8
RAC_QUEST_SAIL_MAN_7:
	hidenamebox
	release
	end

RAC_QUEST_SAIL_MAN_2:
	goto RAC_QUEST_START
	goto RAC_QUEST_SAIL_MAN_1

RAC_QUEST_SAIL_MAN_5:
	msgbox RAC_QUEST_SAIL_MAN_Text_1
	hidenamebox
	release
	end

RAC_QUEST_SAIL_MAN_8:
	msgbox RAC_QUEST_SAIL_MAN_Text_3
	closemessage
	hidenamebox
	call RAC_BOAT
	warp MAP_JATIZSO, 0, 0, 0
	goto RAC_QUEST_SAIL_MAN_7


RAC_QUEST_SAIL_WOMAN::
	lock
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 0
	goto_if_eq RAC_QUEST_SAIL_WOMAN_2
RAC_QUEST_SAIL_WOMAN_1:
	faceplayer
	namebox RAC_QUEST_SAIL_MAN_Text_0
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, RAC_QUEST_SAIL_WOMAN_5
	msgbox RAC_QUEST_SAIL_WOMAN_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_SAIL_WOMAN_8
RAC_QUEST_SAIL_WOMAN_7:
	hidenamebox
	release
	end

RAC_QUEST_SAIL_WOMAN_2:
	goto RAC_QUEST_START
	goto RAC_QUEST_SAIL_WOMAN_1

RAC_QUEST_SAIL_WOMAN_5:
	msgbox RAC_QUEST_SAIL_WOMAN_Text_0
	hidenamebox
	release
	end

RAC_QUEST_SAIL_WOMAN_8:
	msgbox RAC_QUEST_SAIL_MAN_Text_3
	closemessage
	hidenamebox
	call RAC_BOAT
	warp MAP_NEITIZNOT, 0, 0, 0
	goto RAC_QUEST_SAIL_WOMAN_7


RAC_QUEST_START::
	lock
	namebox RAC_QUEST_SAIL_MAN_Text_0
	msgbox RAC_QUEST_START_Text_0
	namebox RAC_QUEST_START_Text_1
	msgbox RAC_QUEST_START_Text_2
	hidenamebox
	msgbox RAC_QUEST_START_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_START_2
RAC_QUEST_START_1:
	msgbox RAC_QUEST_START_Text_4
	closemessage
	release
	end

RAC_QUEST_START_2:
	startquest QUEST_ARTFIGHT_JATIZSO
	goto RAC_QUEST_START_P1
	goto RAC_QUEST_START_1


RAC_QUEST_START_P1::
	lock
	namebox RAC_QUEST_START_Text_1
	msgbox RAC_QUEST_START_P1_Text_0
	namebox RAC_QUEST_SAIL_MAN_Text_0
	msgbox RAC_QUEST_START_P1_Text_1
	namebox RAC_QUEST_START_Text_1
	msgbox RAC_QUEST_START_P1_Text_2
	hidenamebox
	msgbox RAC_QUEST_START_P1_Text_3
	multichoicedefault 1, 0, MULTI_FREMMYTEAMS, 0, 1
	switch VAR_RESULT
	case 0, RAC_QUEST_START_P1_3
	case 1, RAC_QUEST_START_P1_4
	case 2, RAC_QUEST_START_P1_5
	case 3, RAC_QUEST_START_P1_5
RAC_QUEST_START_P1_1:
	release
	end

RAC_QUEST_START_P1_3:
	namebox RAC_QUEST_SAIL_MAN_Text_0
	msgbox RAC_QUEST_START_P1_Text_4
	hidenamebox
	setflag FLAG_EVENT_TEAM_JATIZSO
	setvar VAR_POKESCAPE_RAC_QUEST_STATE, 5
	goto RAC_QUEST_START_P1_1

RAC_QUEST_START_P1_4:
	namebox RAC_QUEST_START_Text_1
	msgbox RAC_QUEST_START_P1_Text_5
	hidenamebox
	setflag FLAG_EVENT_TEAM_NEITIZNOT
	setvar VAR_POKESCAPE_RAC_QUEST_STATE, 5
	goto RAC_QUEST_START_P1_1

RAC_QUEST_START_P1_5:
	goto BANK_ExitBank
	goto RAC_QUEST_START_P1_1


RAC_QUEST_START_P2_NEITIZNOT::
	lock
	namebox RAC_QUEST_START_Text_1
	msgbox RAC_QUEST_START_P2_NEITIZNOT_Text_0
	setvar VAR_POKESCAPE_RAC_QUEST_STATE, 10
	hidenamebox
	closemessage
	release
	end


RAC_QUEST_START_P2_JATIZSO::
	lock
	namebox RAC_QUEST_SAIL_MAN_Text_0
	msgbox RAC_QUEST_START_P2_JATIZSO_Text_0
	setvar VAR_POKESCAPE_RAC_QUEST_STATE, 10
	hidenamebox
	closemessage
	release
	end


RAC_QUEST_START_P3_JATIZSO::
	lock
	faceplayer
	namebox RAC_QUEST_START_P3_JATIZSO_Text_0
	msgbox RAC_QUEST_START_P3_JATIZSO_Text_1
	setvar VAR_POKESCAPE_RAC_QUEST_STATE, 15
	closemessage
	hidenamebox
	release
	end


RAC_QUEST_START_P3_JATIZSO_Jaxyys::
	lock
	faceplayer
	namebox JATIZSO_NPC_Jaxyys_Text_0
	msgbox RAC_QUEST_START_P3_JATIZSO_Jaxyys_Text_0
	setvar VAR_POKESCAPE_RAC_QUEST_STATE, 20
	closemessage
	hidenamebox
	release
	end


RAC_QUEST_START_P3_JATIZSO_Jaxyys_check::
	lock
	faceplayer
	namebox JATIZSO_NPC_Jaxyys_Text_0
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 25
	goto_if_eq RAC_QUEST_START_P3_JATIZSO_Jaxyys_check_2
	msgbox RAC_QUEST_START_P3_JATIZSO_Jaxyys_check_Text_1
	closemessage
	hidenamebox
	release
	end

RAC_QUEST_START_P3_JATIZSO_Jaxyys_check_2:
	msgbox RAC_QUEST_START_P3_JATIZSO_Jaxyys_check_Text_0
	closemessage
	hidenamebox
	release
	end


RAC_BOAT::
	fadescreen FADE_TO_BLACK
	fadescreen FADE_FROM_BLACK
	applymovement 22, MOVEMENT_RAC_BOAT
	waitmovement 0
	removeobject 27
	return


MOVEMENT_RAC_BOAT:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	step_end

RAC_QUEST_JATIZSO_ELEJ_P1::
	lock
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, RAC_QUEST_JATIZSO_ELEJ_P1_2
RAC_QUEST_JATIZSO_ELEJ_P1_1:
	release
	end

RAC_QUEST_JATIZSO_ELEJ_P1_2:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 5
	goto_if_eq RAC_QUEST_JATIZSO_ELEJ_P1_5
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 10
	goto_if_eq RAC_QUEST_JATIZSO_ELEJ_P1_5
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 15
	goto_if_eq RAC_QUEST_JATIZSO_ELEJ_P1_5
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 20
	goto_if_eq RAC_QUEST_JATIZSO_ELEJ_P1_5
RAC_QUEST_JATIZSO_ELEJ_P1_4:
	compare VAR_POKESCAPE_RAC_QUEST_ELEJ, 0
	goto_if_eq RAC_QUEST_JATIZSO_ELEJ_P1_13
	goto RAC_QUEST_JATIZSO_ELEJ_P1_1

RAC_QUEST_JATIZSO_ELEJ_P1_5:
	faceplayer
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_0
	closemessage
	hidenamebox
	goto RAC_QUEST_JATIZSO_ELEJ_P1_4

RAC_QUEST_JATIZSO_ELEJ_P1_13:
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_1
	closemessage
	hidenamebox
	applymovement 20, Movement_QuestionMark
	playse SE_PIN
	waitmovement 0
	faceplayer
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_2
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractUP
	waitmovement 0
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_3
	closemessage
	hidenamebox
	applymovement 20, Movement_InteractFACEUP
	waitmovement 0
	delay 30
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_4
	closemessage
	hidenamebox
	faceplayer
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_5, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RAC_QUEST_JATIZSO_ELEJ_P1_16
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_7
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_RAC_QUEST_ELEJ, 5
	call JATIZSO_STATE
	startquest QUEST_ARTFIGHT_NEITIZNOT
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_JATIZSO, 0
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_JATIZSO, 1
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_JATIZSO, 2
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_JATIZSO, 3
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_JATIZSO, 4
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_JATIZSO, 5
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_NEITIZNOT, 6
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_NEITIZNOT, 7
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_NEITIZNOT, 8
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_NEITIZNOT, 9
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ARTFIGHT_NEITIZNOT, 10
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_8
	closemessage
	goto RAC_QUEST_JATIZSO_ELEJ_P1_1

RAC_QUEST_JATIZSO_ELEJ_P1_16:
	msgbox RAC_QUEST_JATIZSO_ELEJ_P1_Text_6
	closemessage
	hidenamebox
	release
	end


RAC_QUEST_JATIZSO_ELEJ_SPOT_1::
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_JATIZSO_ELEJ_SPOT_1_2
RAC_QUEST_JATIZSO_ELEJ_SPOT_1_1:
	closemessage
	end

RAC_QUEST_JATIZSO_ELEJ_SPOT_1_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_RAC_QUEST_ELEJ, 10
	call JATIZSO_STATE
	addobject 20
	setobjectxy 20, 31, 28
	setobjectxyperm 20, 31, 28
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	applymovement 20, Movement_InteractFACEPLAYER
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_1
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	playse SE_EGG_HATCH
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_2
	closemessage
	hidenamebox
	goto RAC_QUEST_JATIZSO_ELEJ_SPOT_1_1


RAC_QUEST_JATIZSO_ELEJ_SPOT_2::
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_JATIZSO_ELEJ_SPOT_2_2
RAC_QUEST_JATIZSO_ELEJ_SPOT_2_1:
	closemessage
	end

RAC_QUEST_JATIZSO_ELEJ_SPOT_2_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_RAC_QUEST_ELEJ, 15
	call JATIZSO_STATE
	addobject 20
	setobjectxy 20, 20, 8
	setobjectxyperm 20, 20, 8
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	applymovement 20, Movement_InteractFACEPLAYER
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_1
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	playse SE_EGG_HATCH
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_2
	closemessage
	hidenamebox
	goto RAC_QUEST_JATIZSO_ELEJ_SPOT_2_1


RAC_QUEST_JATIZSO_ELEJ_SPOT_3::
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_JATIZSO_ELEJ_SPOT_3_2
RAC_QUEST_JATIZSO_ELEJ_SPOT_3_1:
	closemessage
	end

RAC_QUEST_JATIZSO_ELEJ_SPOT_3_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_RAC_QUEST_ELEJ, 20
	call JATIZSO_STATE
	addobject 20
	setobjectxy 20, 26, 3
	setobjectxyperm 20, 26, 3
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	applymovement 20, Movement_InteractFACEPLAYER
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_1
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	playse SE_EGG_HATCH
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_2
	closemessage
	hidenamebox
	goto RAC_QUEST_JATIZSO_ELEJ_SPOT_3_1


RAC_QUEST_JATIZSO_ELEJ_SPOT_4::
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_JATIZSO_ELEJ_SPOT_4_2
RAC_QUEST_JATIZSO_ELEJ_SPOT_4_1:
	closemessage
	end

RAC_QUEST_JATIZSO_ELEJ_SPOT_4_2:
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_RAC_QUEST_ELEJ, 25
	call JATIZSO_STATE
	addobject 20
	setobjectxy 20, 12, 15
	setobjectxyperm 20, 12, 15
	setobjectmovementtype 20, MOVEMENT_TYPE_LOOK_AROUND
	applymovement 20, Movement_InteractFACEPLAYER
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_1
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	playse SE_EGG_HATCH
	fadescreen FADE_FROM_BLACK
	namebox JATIZSO_NPC_Elej_Text_2
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_4_Text_0
	closemessage
	hidenamebox
	giveitem ITEM_TEAR_OF_GUTHIX, 1
	msgbox RAC_QUEST_JATIZSO_ELEJ_SPOT_4_Text_1
	closemessage
	goto RAC_QUEST_JATIZSO_ELEJ_SPOT_4_1


Movement_QuestionMark:
	emote_question_mark
	step_end

RAC_QUEST_JATIZSO_JAGEX_P1::
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, RAC_QUEST_JATIZSO_JAGEX_P1_1
	return

RAC_QUEST_JATIZSO_JAGEX_P1_1:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_4
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_7
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 5
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_10
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 10
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_10
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 15
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_10
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 20
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_10
RAC_QUEST_JATIZSO_JAGEX_P1_9:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 0
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_19
RAC_QUEST_JATIZSO_JAGEX_P1_18:
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P1_4:
	faceplayer
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_0
	closemessage
	hidenamebox
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P1_7:
	faceplayer
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_1
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 40
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P1_10:
	faceplayer
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_2
	closemessage
	hidenamebox
	goto RAC_QUEST_JATIZSO_JAGEX_P1_9

RAC_QUEST_JATIZSO_JAGEX_P1_19:
	lock
	applymovement 2, Movement_InteractUP
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_3
	closemessage
	waitmovement 0
	applymovement 1, Movement_InteractUP
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_4
	closemessage
	waitmovement 0
	applymovement 2, Movement_InteractUP
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_5
	closemessage
	waitmovement 0
	applymovement 1, Movement_InteractUP
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_6
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 2, Movement_InteractUP
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_7
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 1, Movement_InteractUP
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_8
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 2, Movement_InteractRIGHT
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_9
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 1, Movement_InteractLEFT
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_10
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 2, Movement_InteractRIGHT
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_11
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 1, Movement_InteractLEFT
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_12
	closemessage
	hidenamebox
	applymovement 2, Movement_InteractFACEDOWN
	applymovement 1, Movement_InteractFACEDOWN
	waitmovement 0
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_13, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P1_22
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_15
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_ModBats_Text_2
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_16
	closemessage
	hidenamebox
	giveitem ITEM_TEA, 1
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 5
	goto RAC_QUEST_JATIZSO_JAGEX_P1_18

RAC_QUEST_JATIZSO_JAGEX_P1_22:
	msgbox RAC_QUEST_JATIZSO_JAGEX_P1_Text_14
	closemessage
	hidenamebox
	release
	end


RAC_QUEST_JATIZSO_JAGEX_P2::
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 35
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_2
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 40
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_2
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 20
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_7
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 5
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_10
RAC_QUEST_JATIZSO_JAGEX_P2_9:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 10
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_13
RAC_QUEST_JATIZSO_JAGEX_P2_12:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 15
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_19
RAC_QUEST_JATIZSO_JAGEX_P2_18:
	lock
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox JATIZSO_NPC_JacksonOHare_Text_1
	closemessage
	hidenamebox
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P2_2:
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_0
	closemessage
	hidenamebox
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P2_7:
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_1
	closemessage
	hidenamebox
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P2_10:
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_2
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractUP
	waitmovement 0
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_3
	closemessage
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 10
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_16
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 15
	goto RAC_QUEST_JATIZSO_JAGEX_P2_9

RAC_QUEST_JATIZSO_JAGEX_P2_13:
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P2_22
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 15
	goto RAC_QUEST_JATIZSO_JAGEX_P2_12

RAC_QUEST_JATIZSO_JAGEX_P2_16:
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_5
	closemessage
	hidenamebox
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P2_19:
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_7
	closemessage
	hidenamebox
	giveitem ITEM_ABYSSAL_WHIP, 1
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 20
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_8
	closemessage
	hidenamebox
	goto RAC_QUEST_JATIZSO_JAGEX_P2_18

RAC_QUEST_JATIZSO_JAGEX_P2_22:
	msgbox RAC_QUEST_JATIZSO_JAGEX_P2_Text_5
	closemessage
	hidenamebox
	release
	end


RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER::
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 20
	goto_if_eq RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_2
RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_1:
	release
	end

RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_2:
	checkitem ITEM_ABYSSAL_WHIP, 1
	compare VAR_RESULT, 0
	goto_if_ne RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_4
	goto RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_1

RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_4:
	applymovement 10, Movement_InteractLEFT
	waitmovement 0
	namebox JATIZSO_NPC_Nicki_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_Text_0
	hidenamebox
	closemessage
	applymovement 10, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox JATIZSO_NPC_Nicki_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_Text_1
	hidenamebox
	closemessage
	applymovement 17, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox JATIZSO_NPC_Cici_Text_0
	msgbox RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_Text_2
	hidenamebox
	closemessage
	setvar VAR_TEMP_E, 1
	release
	end


JATIZSO_INTERACT_Text_0:
	.string "It is a Gnome Glider.$"

JATIZSO_NPC_Lights_Text_0:
	.string "Lights$"

JATIZSO_NPC_Lights_Text_1:
	.string "Psst…\p"
	.string "Phantom and I are about to pull off a\n"
	.string "once in a lifetime heist.\p"
	.string "And you are in our way!$"

JATIZSO_NPC_Lights_Text_2:
	.string "…$"

JATIZSO_NPC_Lights_Text_3:
	.string "By any chance could I persuade you into\n"
	.string "not telling the guards?$"

JATIZSO_NPC_Nicki_Text_0:
	.string "Morgan$"

JATIZSO_NPC_Nicki_Text_1:
	.string "STUPID NEITZNOTS!$"

JATIZSO_NPC_Nicki_Text_2:
	.string "DRAGONS R HOT!$"

JATIZSO_NPC_Nicki_Text_3:
	.string "COME OVER HERE!\p"
	.string "I WILL MESS YOU UP!$"

JATIZSO_NPC_Nicki_Text_4:
	.string "STUPID YAK LOVERS!$"

JATIZSO_NPC_Nicki_Text_5:
	.string "Actually, we all really like Yaks but\n"
	.string "don't tell them that.$"

JATIZSO_NPC_AeternusLux_Text_0:
	.string "Lux$"

JATIZSO_NPC_AeternusLux_Text_1:
	.string "I enjoy staring out into the sea.\p"
	.string "It reminds me of Boni.\p"
	.string "OH WHY!\p"
	.string "Why did the Art Fight have to be held on\n"
	.string "Jatizso and not the Arc!$"

JATIZSO_NPC_Willoway_Text_0:
	.string "…\p"
	.string "You know I saw you right?$"

JATIZSO_NPC_Willoway_Text_1:
	.string "Fay$"

JATIZSO_NPC_Willoway_Text_2:
	.string "…\p"
	.string "He won't leave me alone.$"

JATIZSO_NPC_Casilliio_Text_0:
	.string "Cass$"

JATIZSO_NPC_Casilliio_Text_1:
	.string "I heard the king was over taxing his\n"
	.string "people so I came to educate him.$"

JATIZSO_NPC_Pop_Text_0:
	.string "Pop$"

JATIZSO_NPC_Pop_Text_1:
	.string "PAWEEEW!$"

JATIZSO_NPC_Mothy_Text_0:
	.string "Evelynn$"

JATIZSO_NPC_Mothy_Text_1:
	.string "BUZZ OFF!\p"
	.string "I do not care if you are a Neitiznot or a\n"
	.string "Jatizso.\p"
	.string "You all disgust me the same.\p"
	.string "NOW SCRAM!$"

JATIZSO_NPC_Cici_Text_0:
	.string "Magnolia$"

JATIZSO_NPC_Cici_Text_1:
	.string "Morgan please stop yelling at the\n"
	.string "Neitiznots.\p"
	.string "It is not helping anyone.$"

JATIZSO_NPC_taffingspy_Text_0:
	.string "Florin$"

JATIZSO_NPC_taffingspy_Text_1:
	.string "I would challenge you to a battle but I\n"
	.string "do not want Kitty to be hurt anymore\l"
	.string "than she has.$"

JATIZSO_NPC_Kitty_Text_0:
	.string "Kitty$"

JATIZSO_NPC_Kitty_Text_1:
	.string "Meowar!$"

JATIZSO_NPC_JacksonOHare_Text_0:
	.string "Jackson$"

JATIZSO_NPC_JacksonOHare_Text_1:
	.string "I like it here on Jatizso, there are no\n"
	.string "rabbits in sight.\p"
	.string "I could never see myself staying with\n"
	.string "those rabbit infested Neitiznots!$"

JATIZSO_NPC_BonBun_Text_0:
	.string "Bon-Bun$"

JATIZSO_NPC_BonBun_Text_1:
	.string "BOOOOON!$"

JATIZSO_NPC_BonBun_Text_2:
	.string "Bon-Bun… I do wish you would stop\n"
	.string "calling me Jackie.$"

JATIZSO_NPC_Elej_Text_0:
	.string "Quest Complete.$"

JATIZSO_NPC_Elej_Text_1:
	.string "Thank you again for all of your help!$"

JATIZSO_NPC_Elej_Text_2:
	.string "Elej$"

JATIZSO_NPC_Elej_Text_3:
	.string "Do you think this picture best shows\n"
	.string "off Jatizso in all of its glory?\p"
	.string "I want to send it to the Neitiznots as a\n"
	.string "peace offering.$"

JATIZSO_NPC_ModDragon_ModBats_Text_0:
	.string "Madame Dragon$"

JATIZSO_NPC_ModDragon_ModBats_Text_1:
	.string "This is so tasteful!$"

JATIZSO_NPC_ModDragon_ModBats_Text_2:
	.string "Bats$"

JATIZSO_NPC_ModDragon_ModBats_Text_3:
	.string "TASTEFUL!$"

JATIZSO_NPC_Hakazin_Text_0:
	.string "Laith$"

JATIZSO_NPC_Hakazin_Text_1:
	.string "The king wants us to fortify the\n"
	.string "boarders from the Neitiznots.$"

JATIZSO_NPC_Hakazin_Text_2:
	.string "Alexandra$"

JATIZSO_NPC_Hakazin_Text_3:
	.string "What would that even entail?$"

JATIZSO_NPC_Hakazin_Text_4:
	.string "I am not sure, last time it was throwing\n"
	.string "more salt into the water.$"

JATIZSO_NPC_Hakazin_Text_5:
	.string "…\p"
	.string "I remember that.$"

JATIZSO_NPC_Dewydd_Text_0:
	.string "Dewydd$"

JATIZSO_NPC_Dewydd_Text_1:
	.string "Don't mind me.\p"
	.string "I am just trying to create a spell to\n"
	.string "turn all the Neitiznots into Yaks.$"

JATIZSO_NPC_Charmchi_Text_0:
	.string "Charm$"

JATIZSO_NPC_Charmchi_Text_1:
	.string "Can you go ask the king when we can go\n"
	.string "fight those Neitiznots?\p"
	.string "I am itchin for a fight!$"

JATIZSO_NPC_Tifa_Text_0:
	.string "Unless we are going into battle can you\n"
	.string "please leave me alone.\p"
	.string "Unless you would like to be friends?\p"
	.string "JK! HAHA! FORGET I SAID ANYTHING!$"

JATIZSO_NPC_Moggies_Text_0:
	.string "Moggies$"

JATIZSO_NPC_Moggies_Text_1:
	.string "BWAK!$"

JATIZSO_NPC_Rallis_Text_0:
	.string "Rallis$"

JATIZSO_NPC_Rallis_Text_1:
	.string "Hey did you pass Relleka on your way\n"
	.string "here?\p"
	.string "Do you think on your way back you could\n"
	.string "tell Olaf to come for a visit?$"

JATIZSO_NPC_Jaxyys_Text_0:
	.string "Jaxyys$"

JATIZSO_NPC_Jaxyys_Text_1:
	.string "Hello.$"

JATIZSO_NPC_KING_Text_0:
	.string "KING$"

JATIZSO_NPC_KING_Text_1:
	.string "GO AWAY.$"

RAC_QUEST_SAIL_MAN_Text_0:
	.string "Man$"

RAC_QUEST_SAIL_MAN_Text_1:
	.string "Go away adventurer.\p"
	.string "I have nothing to say to a filthy\n"
	.string "Neitiznot.$"

RAC_QUEST_SAIL_MAN_Text_2:
	.string "Ah hello adventurer.\p"
	.string "Would you like to board the boat to\n"
	.string "Jatizso?$"

RAC_QUEST_SAIL_MAN_Text_3:
	.string "Very well, hop in!$"

RAC_QUEST_SAIL_WOMAN_Text_0:
	.string "Go away adventurer.\p"
	.string "I have nothing to say to a filthy\n"
	.string "Jatizso.$"

RAC_QUEST_SAIL_WOMAN_Text_1:
	.string "Ah hello adventurer.\p"
	.string "Would you like to board the boat to\n"
	.string "Neitiznot?$"

RAC_QUEST_START_Text_0:
	.string "JATIZSO artists are better!$"

RAC_QUEST_START_Text_1:
	.string "Woman$"

RAC_QUEST_START_Text_2:
	.string "No NEITZNOT artists are better!!$"

RAC_QUEST_START_Text_3:
	.string "They seem to be arguing over which\n"
	.string "island has the better artists.\p"
	.string "Would you like to start the Art Fight\n"
	.string "Quest?$"

RAC_QUEST_START_Text_4:
	.string "You decide to leave them to bicker\n"
	.string "amongst themselves.$"

RAC_QUEST_START_P1_Text_0:
	.string "You there, settle this for us.\p"
	.string "Which artists do you think are better?$"

RAC_QUEST_START_P1_Text_1:
	.string "Clearly JATIZSO artists are better!$"

RAC_QUEST_START_P1_Text_2:
	.string "No clearly NEITZNOT artists are\n"
	.string "better!!$"

RAC_QUEST_START_P1_Text_3:
	.string "Choose a team.\n"
	.string "(You cannot change this later.)$"

RAC_QUEST_START_P1_Text_4:
	.string "I told you JATIZSO artists are better!\p"
	.string "Adventurer, allow me to take you to\n"
	.string "Jatizso at any time!$"

RAC_QUEST_START_P1_Text_5:
	.string "I told you NEITIZNOT artists are\n"
	.string "better!\p"
	.string "Adventurer, allow me to take you to\n"
	.string "Neitiznot at any time!$"

RAC_QUEST_START_P2_NEITIZNOT_Text_0:
	.string "Welcome to Neitiznot adventuerer.\p"
	.string "This land is full of amazing artists and\n"
	.string "Yaks!\p"
	.string "You should stop by the Longhall in the\n"
	.string "town and tell our king how much you like\l"
	.string "it here.\p"
	.string "You may be able to become an Honorable\n"
	.string "Holmgang!$"

RAC_QUEST_START_P2_JATIZSO_Text_0:
	.string "Welcome to Jatizso adventuerer.\p"
	.string "This land is full of amazing artists and\n"
	.string "Rock Crabs!\p"
	.string "You should stop by the Longhall in the\n"
	.string "town and tell our king how much you like\l"
	.string "it here.\p"
	.string "What is in this for you?\p"
	.string "You could challange the King to\n"
	.string "Honorable Holmgang!\p"
	.string "It is just a fancy way to say challenge\n"
	.string "him to an MvM Battle.$"

RAC_QUEST_START_P3_JATIZSO_Text_0:
	.string "King$"

RAC_QUEST_START_P3_JATIZSO_Text_1:
	.string "What's this?\p"
	.string "You want to have a Honorable Holmgang\n"
	.string "with me?\p"
	.string "PAH! I don't even know who you are!\p"
	.string "For all I know you could be a filthy\n"
	.string "Neitiznot!\p"
	.string "Before I even consider having an\n"
	.string "Honorable Holmgang with you.\p"
	.string "You must prove yourself!\p"
	.string "How?\p"
	.string "PAH, talk with Jaxyys, I don't have time\n"
	.string "for this.$"

RAC_QUEST_START_P3_JATIZSO_Jaxyys_Text_0:
	.string "So you want to challenge the king to\n"
	.string "Honorable Holmgang ay?\p"
	.string "Well you should start by letting the\n"
	.string "towns artists get to know you.\p"
	.string "Go around town and ask the artists if\n"
	.string "there is anything you can help with.\p"
	.string "Come back and talk to me once you've\n"
	.string "helped 5 Artists.$"

RAC_QUEST_START_P3_JATIZSO_Jaxyys_check_Text_0:
	.string "You have helped 1 Artist so far.\p"
	.string "You need to help 4 more.$"

RAC_QUEST_START_P3_JATIZSO_Jaxyys_check_Text_1:
	.string "Remember you need to help 5 Artists\n"
	.string "before I tell the King you've been\l"
	.string "helpful.$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_0:
	.string "Rememeber we should be looking for a\n"
	.string "location that helps make Jatizso\l"
	.string "'shine'!$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_1:
	.string "Hmm…\p"
	.string "HMMMMMMMM…\p"
	.string "HHMMMMMMMMMMM…!\p"
	.string "No this does not work!$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_2:
	.string "Oh hello I didn't see you there.\p"
	.string "What can I do for you?$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_3:
	.string "Do I have anything you can help me\n"
	.string "with?\p"
	.string "Actually I do!\p"
	.string "You see I want to take the best picture\n"
	.string "best shows off Jatizso in all of its\l"
	.string "glory!\p"
	.string "Then I want to send it to the\n"
	.string "Neitiznots as a peace offering.$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_4:
	.string "…{PAUSE 16}…$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_5:
	.string "That's what I would like to do.\p"
	.string "But I cannot seem to get this this shot\n"
	.string "right.\p"
	.string "Do you think you could help me find an\n"
	.string "ideal location?$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_6:
	.string "Sigh, perhaps another time…$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_7:
	.string "Oh yay thank you!\p"
	.string "Take a look around town, we would be\n"
	.string "looking for a location that helps make\l"
	.string "Jatizso 'shine'!$"

RAC_QUEST_JATIZSO_ELEJ_P1_Text_8:
	.string "ELEJ Side Quest, Start!$"

RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_0:
	.string "Call Elej over to investegate this\n"
	.string "spot?$"

RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_1:
	.string "Oooh, this spot looks promising!\p"
	.string "Lets try a picture here!$"

RAC_QUEST_JATIZSO_ELEJ_SPOT_1_Text_2:
	.string "Hmm… No I don't think this will do.\p"
	.string "Lets keep looking!$"

RAC_QUEST_JATIZSO_ELEJ_SPOT_4_Text_0:
	.string "This is…\p"
	.string "PERFECT!\p"
	.string "Here take this to the King to so we can\n"
	.string "send it to Neitiznot as a gift!$"

RAC_QUEST_JATIZSO_ELEJ_SPOT_4_Text_1:
	.string "ELEJ Side Quest, Complete!$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_0:
	.string "Thank you again. Quest is over.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_1:
	.string "Thank you. Quest complete.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_2:
	.string "Go talk to Jackie in the Black Smith\n"
	.string "Building and ask how to get into\l"
	.string "Neitiznot.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_3:
	.string "Wow, Eterna has really outdone herself\n"
	.string "with this piece.\p"
	.string "It is so tasteful!$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_4:
	.string "I agree, it is just so…{PAUSE 15} TASTEFUL!$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_5:
	.string "We should send her some wine.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_6:
	.string "That wine better be…{PAUSE 15} TASTEFUL!$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_7:
	.string "Of course, it will be as tasteful as this\n"
	.string "painting!$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_8:
	.string "…{PAUSE 15} TASTY!$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_9:
	.string "Bats do me a solid and fly over to\n"
	.string "Neitiznot to drop it off to her.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_10:
	.string "…{PAUSE 15} I can not do that.\p"
	.string "The Art Fight rules prevents that.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_11:
	.string "How can we give her this tasteful wine\n"
	.string "then?$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_12:
	.string "…{PAUSE 15} We would require one that is able to\n"
	.string "sneak stealthly into Neitiznot.\p"
	.string "I cannot do that for my armour makes\n"
	.string "too much noise.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_13:
	.string "Stranger, you seem to have overheard\n"
	.string "our entire conversation.\p"
	.string "Can you please deliver this to Eterna\n"
	.string "on Neitiznot for us?$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_14:
	.string "Leave us been then.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_15:
	.string "Thank you stranger.\p"
	.string "You should talk to Jackie.\p"
	.string "I heard he sneaks over to neitiznot\n"
	.string "through a secret tunnel all the time.$"

RAC_QUEST_JATIZSO_JAGEX_P1_Text_16:
	.string "…{PAUSE 15} THANK YOU.\p"
	.string "Once more thing.\p"
	.string "Be careful not to drink it.\p"
	.string "It is not for you. or anyone else.$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_0:
	.string "You haven't forgotten about our deal\n"
	.string "have you?$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_1:
	.string "The secret passage is in the Jatizso\n"
	.string "Mines.\p"
	.string "Located North of here down the ladder.\p"
	.string "And don't forget about our deal I\n"
	.string "expect those rabbits gone!$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_2:
	.string "What do you want?\p"
	.string "…\p"
	.string "Yes, I am Jackie.\p"
	.string "Although I hate being refered to as\n"
	.string "that.\p"
	.string "What can I do for you?$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_3:
	.string "Getting into Neitiznot is dangerous for\n"
	.string "someone who is associated with Jatizso\l"
	.string "even if just slightly.\p"
	.string "But I suppose I could help you.\p"
	.string "On one condition that is.$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_4:
	.string "I would like you to defeat all of\n"
	.string "Neitiznots Rabbits while you are over\l"
	.string "there.\p"
	.string "I despise them.\p"
	.string "Do we have a deal?$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_5:
	.string "No deal then.$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_6:
	.string "Have you changed your mind?\p"
	.string "Defeat all the Rabbits and I will tell\n"
	.string "you the secret passage into Neitiznot.\p"
	.string "Do we have a deal?$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_7:
	.string "Great!\p"
	.string "Now that we have a deal.\p"
	.string "There is a secret tunnel inside the\n"
	.string "Jatizso Mines north of here.\p"
	.string "You'll notice a woman called Elizabeth\n"
	.string "around that area.\p"
	.string "She has kind of lost the plot lately but\n"
	.string "if you give this to her I am sure she\l"
	.string "won't be an issue.$"

RAC_QUEST_JATIZSO_JAGEX_P2_Text_8:
	.string "And don't forget about our deal!$"

RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_Text_0:
	.string "STUPID NEITIZNOTS!$"

RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_Text_1:
	.string "HEY, YOU!\p"
	.string "What is that you have in your\n"
	.string "backpack!?\p"
	.string "I smell Zamorakian wine!\p"
	.string "You must give it to me NOW!$"

RAC_QUEST_JATIZSO_JAGEX_P3_TRIGGER_Text_2:
	.string "Run, adventurer!$"
