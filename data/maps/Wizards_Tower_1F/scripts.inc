Wizards_Tower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto WizardsTower_STATE
	return

Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 0, HAM_EVENT_WizardsTower_1
	.2byte 0


WizardsTower_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_STATE_2
	case 1, WizardsTower_STATE_3
	case 2, WizardsTower_STATE_3
	case 3, WizardsTower_STATE_3
	case 4, WizardsTower_STATE_3
	case 5, WizardsTower_STATE_3
	case 6, WizardsTower_STATE_4
	case 7, WizardsTower_STATE_4
	case 8, WizardsTower_STATE_4
	case 9, WizardsTower_STATE_4
	return

WizardsTower_STATE_2:
	setflag FLAG_TEMP_1
	release
	end

WizardsTower_STATE_3:
	setobjectxyperm 4, 8, 14
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 9, 8, 15
	setobjectmovementtype 9, MOVEMENT_TYPE_FACE_UP
	removeobject 7
	removeobject 8
	setflag FLAG_TEMP_2
	return

WizardsTower_STATE_4:
	setobjectxyperm 4, 5, 14
	setobjectmovementtype 4, MOVEMENT_TYPE_WANDER_AROUND
	removeobject 9
	removeobject 7
	removeobject 8
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	release
	end


WizardsTower_SEDRIDOR::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_SEDRIDOR_2
	case 1, WizardsTower_SEDRIDOR_3
	case 2, WizardsTower_SEDRIDOR_3
	case 3, WizardsTower_SEDRIDOR_3
	case 4, WizardsTower_SEDRIDOR_3
	case 5, WizardsTower_SEDRIDOR_3
	case 6, WizardsTower_SEDRIDOR_3
	case 7, WizardsTower_SEDRIDOR_3
	case 8, WizardsTower_SEDRIDOR_3
	case 9, WizardsTower_SEDRIDOR_3
	return

WizardsTower_SEDRIDOR_2:
	lock
	faceplayer
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox WizardsTower_SEDRIDOR_Text_1
	hidenamebox
	release
	end

WizardsTower_SEDRIDOR_3:
	lock
	faceplayer
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox WizardsTower_SEDRIDOR_Text_2
	hidenamebox
	release
	end


WizardsTower_Wizard::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_Wizard_2
	case 1, WizardsTower_Wizard_3
	case 2, WizardsTower_Wizard_3
	case 3, WizardsTower_Wizard_3
	case 4, WizardsTower_Wizard_3
	case 5, WizardsTower_Wizard_3
	case 6, WizardsTower_Wizard_3
	case 7, WizardsTower_Wizard_3
	case 8, WizardsTower_Wizard_3
	case 9, WizardsTower_Wizard_4
	return

WizardsTower_Wizard_2:
	lock
	faceplayer
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox WizardsTower_SEDRIDOR_Text_1
	hidenamebox
	release
	end

WizardsTower_Wizard_3:
	lock
	faceplayer
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_Wizard_Text_1
	hidenamebox
	release
	end

WizardsTower_Wizard_4:
	lock
	faceplayer
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_Wizard_Text_2
	hidenamebox
	release
	end


WizardsTower_EVENT_TRIGGER::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_EVENT_TRIGGER_2
	case 1, WizardsTower_EVENT_TRIGGER_2
	case 2, WizardsTower_EVENT_TRIGGER_2
	case 3, WizardsTower_EVENT_TRIGGER_2
	case 4, WizardsTower_EVENT_TRIGGER_2
	case 5, WizardsTower_EVENT_TRIGGER_2
	case 6, WizardsTower_EVENT_TRIGGER_2
	case 7, WizardsTower_EVENT_TRIGGER_2
	case 8, WizardsTower_EVENT_TRIGGER_2
	case 9, WizardsTower_EVENT_TRIGGER_3
	return

WizardsTower_EVENT_TRIGGER_2:
	lock
	applymovement 4, Movement_Wizard_WizardsTower4
	waitmovement 0
	namebox WizardsTower_Wizard_Text_0
	msgbox WizardsTower_EVENT_TRIGGER_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower4
	waitmovement 0
	release
	end

WizardsTower_EVENT_TRIGGER_3:
	release
	end


HAM_EVENT_WizardsTower_1::
	lockall
	playbgm MUS_ENCOUNTER_AQUA, 1
	namebox HAM_EVENT_WizardsTower_1_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_1
	waitmessage
	hidenamebox
	closemessage
	applymovement 8, Movement_HAM_Member_WizardsTower1
	waitmovement 0
	playSE SE_WALL_HIT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower1
	applymovement 8, Movement_HAM_Member_WizardsTower2
	applymovement 7, Movement_Araine_WizardsTower1
	waitmovement 0
	removeobject 8
	removeobject 7
	namebox HAM_EVENT_WizardsTower_1_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_2
	waitmessage
	hidenamebox
	closemessage
	clearflag FLAG_TEMP_1
	addobject 9
	showobjectat 9, MAP_WIZARDS_TOWER_1F
	applymovement 4, Movement_Wizard_WizardsTower1
	applymovement 9, Movement_Sedridor_WizardsTower1
	waitmovement 4
	applymovement 9, Movement_Sedridor_WizardsTower2
	namebox WizardsTower_Wizard_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_3
	hidenamebox
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_4
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower2
	waitmovement 0
	playse SE_PIN
	applymovement 9, Movement_Sedridor_WizardsTower3
	delay 16
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_5
	hidenamebox
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower3
	waitmovement 0
	namebox WizardsTower_SEDRIDOR_Text_0
	msgbox HAM_EVENT_WizardsTower_1_Text_6
	hidenamebox
	closemessage
	savebgm MUS_DUMMY
	fadedefaultbgm
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 1
	release
	end


Movement_HAM_Member_WizardsTower1:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	step_end

Movement_Player_WizardsTower1:
	lock_facing_direction
	slide_left
	unlock_facing_direction
	face_right
	delay_16
	step_end

Movement_Araine_WizardsTower1:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_down
	walk_fast_down
	set_invisible
	step_end

Movement_HAM_Member_WizardsTower2:
	walk_fast_down
	set_invisible
	step_end

Movement_Sedridor_WizardsTower1:
	set_visible
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Wizard_WizardsTower1:
	walk_down
	walk_down
	walk_down
	delay_16
	face_left
	delay_8
	face_right
	delay_8
	walk_down
	delay_4
	walk_right
	walk_right
	face_down
	step_end

Movement_Sedridor_WizardsTower2:
	face_up
	step_end

Movement_Sedridor_WizardsTower3:
	emote_exclamation_mark
	face_player
	step_end

Movement_Hide_Sedridor:
	set_invisible
	step_end

Movement_Player_WizardsTower2:
	walk_up
	walk_right
	step_end

Movement_Player_WizardsTower3:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

Movement_Player_WizardsTower4:
	walk_down
	step_end

Movement_Wizard_WizardsTower4:
	face_up
	step_end

HAM_EVENT_Ariane1::
	lock
	namebox HAM_EVENT_Ariane1_Text_0
	msgbox HAM_EVENT_Ariane1_Text_1
	hidenamebox
	release
	end


VAR_CHECKER::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, VAR_CHECKER_3
	case 1, VAR_CHECKER_4
	case 2, VAR_CHECKER_5
	case 3, VAR_CHECKER_6
	case 4, VAR_CHECKER_7
	case 5, VAR_CHECKER_8
	case 6, VAR_CHECKER_9
	case 7, VAR_CHECKER_10
	case 8, VAR_CHECKER_11
	release
	end

VAR_CHECKER_3:
	msgbox VAR_CHECKER_Text_0
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 1
	release
	end

VAR_CHECKER_4:
	msgbox VAR_CHECKER_Text_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 2
	release
	end

VAR_CHECKER_5:
	msgbox VAR_CHECKER_Text_2
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 3
	release
	end

VAR_CHECKER_6:
	msgbox VAR_CHECKER_Text_3
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 4
	release
	end

VAR_CHECKER_7:
	msgbox VAR_CHECKER_Text_4
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 5
	release
	end

VAR_CHECKER_8:
	msgbox VAR_CHECKER_Text_5
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 6
	release
	end

VAR_CHECKER_9:
	msgbox VAR_CHECKER_Text_6
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	release
	end

VAR_CHECKER_10:
	msgbox VAR_CHECKER_Text_7
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	release
	end

VAR_CHECKER_11:
	msgbox VAR_CHECKER_Text_8
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 9
	release
	end


WizardsTower_SEDRIDOR_Text_0:
	.string "Sedridor$"

WizardsTower_SEDRIDOR_Text_1:
	.string "CUPHOLDER$"

WizardsTower_SEDRIDOR_Text_2:
	.string "Could you please go after Ariane.$"

WizardsTower_Wizard_Text_0:
	.string "Wizard$"

WizardsTower_Wizard_Text_1:
	.string "Why would that pink hooded guy steal\n"
	.string "our reasearch papers on the abyss?$"

WizardsTower_Wizard_Text_2:
	.string "Thank you for helping out earlier.$"

WizardsTower_EVENT_TRIGGER_Text_0:
	.string "Sorry, but the library is off limits for\n"
	.string "the time being.$"

HAM_EVENT_WizardsTower_1_Text_0:
	.string "???$"

HAM_EVENT_WizardsTower_1_Text_1:
	.string "Someone stop him!$"

HAM_EVENT_WizardsTower_1_Text_2:
	.string "What's all that racket?!$"

HAM_EVENT_WizardsTower_1_Text_3:
	.string "Sedridor, sir.\p"
	.string "A cloaked man just ran off with a bunch\n"
	.string "of our research papers!\p"
	.string "Ariane just gave chase to him!$"

HAM_EVENT_WizardsTower_1_Text_4:
	.string "She what!?\p"
	.string "Oh the silly girl, I hope she doesn't\n"
	.string "cause any trouble..$"

HAM_EVENT_WizardsTower_1_Text_5:
	.string "Who are you?$"

HAM_EVENT_WizardsTower_1_Text_6:
	.string "Ah {PLAYER}, I wish we met under\n"
	.string "better circumstances but could I ask\l"
	.string "you go after Ariane incase she gets\l"
	.string "into trouble.$"

HAM_EVENT_Ariane1_Text_0:
	.string "Ariane$"

HAM_EVENT_Ariane1_Text_1:
	.string "Urhgh, which way did he go?$"

VAR_CHECKER_Text_0:
	.string "0$"

VAR_CHECKER_Text_1:
	.string "1$"

VAR_CHECKER_Text_2:
	.string "2$"

VAR_CHECKER_Text_3:
	.string "3$"

VAR_CHECKER_Text_4:
	.string "4$"

VAR_CHECKER_Text_5:
	.string "5$"

VAR_CHECKER_Text_6:
	.string "6$"

VAR_CHECKER_Text_7:
	.string "7$"

VAR_CHECKER_Text_8:
	.string "8$"
