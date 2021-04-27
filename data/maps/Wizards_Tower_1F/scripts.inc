Wizards_Tower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Wizards_Tower_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_WIZARDS_TOWER_STATE, 0, HAM_EVENT_WizardsTower
	.2byte 0


HAM_EVENT_WizardsTower::
	goto_if_set FLAG_COOKS_ASSIST_STARTED, HAM_EVENT_WizardsTower_1
	return

HAM_EVENT_WizardsTower_1:
	lockall
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 1
	namebox HAM_EVENT_WizardsTower_Text_0
	msgbox HAM_EVENT_WizardsTower_Text_1
	waitmessage
	hidenamebox
	closemessage
	applymovement 8, Movement_HAM_Member_WizardsTower1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_WizardsTower1
	applymovement 8, Movement_HAM_Member_WizardsTower2
	applymovement 7, Movement_Araine_WizardsTower1
	waitmovement 0
	removeobject 8
	removeobject 7
	namebox HAM_EVENT_WizardsTower_Text_0
	msgbox HAM_EVENT_WizardsTower_Text_2
	waitmessage
	hidenamebox
	closemessage
	applymovement 4, Movement_Wizard_WizardsTower1
	applymovement 9, Movement_Sedridor_WizardsTower1
	waitmovement 0
	namebox HAM_EVENT_WizardsTower_Text_3
	msgbox HAM_EVENT_WizardsTower_Text_4
	hidenamebox
	namebox HAM_EVENT_WizardsTower_Text_5
	msgbox HAM_EVENT_WizardsTower_Text_6
	hidenamebox
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
	walk_fast_down
	set_invisible
	step_end

Movement_HAM_Member_WizardsTower2:
	walk_fast_down
	walk_fast_down
	set_invisible
	step_end

Movement_Sedridor_WizardsTower1:
	set_visible
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Wizard_WizardsTower1:
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	face_left
	delay_8
	face_right
	delay_8
	walk_down
	face_right
	step_end

HAM_EVENT_Ariane1::
	lock
	namebox HAM_EVENT_Ariane1_Text_0
	msgbox HAM_EVENT_Ariane1_Text_1
	hidenamebox
	release
	end


HAM_EVENT_WizardsTower_Text_0:
	.string "???$"

HAM_EVENT_WizardsTower_Text_1:
	.string "Someone stop him!$"

HAM_EVENT_WizardsTower_Text_2:
	.string "What's all that racket?!$"

HAM_EVENT_WizardsTower_Text_3:
	.string "Wizard$"

HAM_EVENT_WizardsTower_Text_4:
	.string "Sedridor, sir.\p"
	.string "A cloaked man just ran off with a bunch\n"
	.string "of our research papers!\p"
	.string "Ariane just gave chase to him!$"

HAM_EVENT_WizardsTower_Text_5:
	.string "Sedridor$"

HAM_EVENT_WizardsTower_Text_6:
	.string "She what!?\p"
	.string "Oh the silly girl, I hope she doesn't\n"
	.string "cause any trouble..$"

HAM_EVENT_Ariane1_Text_0:
	.string "Ariane$"

HAM_EVENT_Ariane1_Text_1:
	.string "Urhgh, which way did he go?$"
