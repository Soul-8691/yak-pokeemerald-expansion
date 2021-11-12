WizardsTower_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WizardsTower_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

WizardsTower_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto WizardsTower_Outdoors_STATE
	return


WizardsTower_Outdoors_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_Outdoors_STATE_2
	case 1, WizardsTower_Outdoors_STATE_3
	case 2, WizardsTower_Outdoors_STATE_4
	case 3, WizardsTower_Outdoors_STATE_5
	case 4, WizardsTower_Outdoors_STATE_5
	case 5, WizardsTower_Outdoors_STATE_5
	case 6, WizardsTower_Outdoors_STATE_5
	case 7, WizardsTower_Outdoors_STATE_5
	case 8, WizardsTower_Outdoors_STATE_5
	case 9, WizardsTower_Outdoors_STATE_5
	return

WizardsTower_Outdoors_STATE_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	release
	end

WizardsTower_Outdoors_STATE_3:
	clearflag FLAG_TEMP_1
	addobject 6
	setflag FLAG_TEMP_2
	release
	end

WizardsTower_Outdoors_STATE_4:
	setflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 9
	addobject 5
	release
	end

WizardsTower_Outdoors_STATE_5:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	release
	end


HAM_EVENT_WizardsTower_2::
	lockall
	applymovement 6, MOVEMENT_HAM_ARIANE_1
	waitmovement 0
	namebox HAM_EVENT_WizardsTower_2_Text_0
	msgbox HAM_EVENT_WizardsTower_2_Text_1
	closemessage
	hidenamebox
	playse SE_PIN
	applymovement 6, MOVEMENT_HAM_ARIANE_2
	waitmovement 0
	removeobject 6
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 2
	clearflag FLAG_TEMP_2
	addobject 9
	addobject 5
	release
	end


HAM_EVENT_WizardsTower_3::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, 1
	namebox HAM_EVENT_WizardsTower_2_Text_0
	msgbox HAM_EVENT_WizardsTower_3_Text_0
	hidenamebox
	release
	lockall
	playSE SE_PIN
	applymovement 5, HamMemberSuprised
	namebox HAM_EVENT_WizardsTower_3_Text_1
	msgbox HAM_EVENT_WizardsTower_3_Text_2
	hidenamebox
	release
	lockall
	applymovement 5, HamMemberRuns
	waitmovement 0
	removeobject 5
	setflag FLAG_TEMP_2
	playSE SE_LEDGE
	applymovement 9, ArianeRunAfterHam5
	delay 16
	playSE SE_LEDGE
	applymovement 9, ArianeRunAfterHam5
	namebox HAM_EVENT_WizardsTower_2_Text_0
	msgbox HAM_EVENT_WizardsTower_3_Text_3
	hidenamebox
	release
	lockall
	applymovement 9, ArianeRunAfterHam6
	waitmovement 0
	removeobject 9
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 3
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	return


ChaseAfterHamMemberPlayerTrigger::
	lockall
	msgbox ChaseAfterHamMemberPlayerTrigger_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ChaseHamMember
	waitmovement 0
	release
	return


ChaseAfterHamMemberPlayerTrigger2::
	lockall
	msgbox ChaseAfterHamMemberPlayerTrigger_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ChaseHamMember2
	waitmovement 0
	release
	return


MOVEMENT_HAM_ARIANE_1:
	face_left
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

MOVEMENT_HAM_ARIANE_2:
	emote_exclamation_mark
	face_left
	delay_16
	delay_4
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ChaseHamMember:
	walk_down
	step_end

ChaseHamMember2:
	walk_up
	step_end

HamMemberSuprised:
	emote_exclamation_mark
	jump_in_place_down
	step_end

HamMemberRuns:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

ArianeRunAfterHam5:
	jump_in_place_up
	step_end

ArianeRunAfterHam6:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

NPC_WIZARDSTOWER_SleepingWizard::
	lock
	msgbox NPC_WIZARDSTOWER_SleepingWizard_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_Myrtle::
	lock
	faceplayer
	namebox NPC_WIZARDSTOWER_Myrtle_Text_0
	msgbox NPC_WIZARDSTOWER_Myrtle_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_WIZARDSTOWER_NoobshowNPCs::
	lock
	applymovement 7, MOVEMENT_WIZARDSTOWER_NPC1
	waitmovement 0
	namebox NPC_WIZARDSTOWER_NoobshowNPCs_Text_0
	msgbox NPC_WIZARDSTOWER_NoobshowNPCs_Text_1
	waitmessage
	hidenamebox
	applymovement 8, MOVEMENT_WIZARDSTOWER_NPC2
	waitmovement 0
	namebox NPC_WIZARDSTOWER_NoobshowNPCs_Text_2
	msgbox NPC_WIZARDSTOWER_NoobshowNPCs_Text_3
	waitmessage
	hidenamebox
	applymovement 7, MOVEMENT_WIZARDSTOWER_NPC3
	waitmovement 0
	namebox NPC_WIZARDSTOWER_NoobshowNPCs_Text_0
	msgbox NPC_WIZARDSTOWER_NoobshowNPCs_Text_4
	waitmessage
	hidenamebox
	applymovement 7, MOVEMENT_WIZARDSTOWER_NPC4
	waitmovement 0
	release
	end


MOVEMENT_WIZARDSTOWER_NPC1:
	face_down
	step_end

MOVEMENT_WIZARDSTOWER_NPC2:
	walk_in_place_up
	walk_in_place_up
	step_end

MOVEMENT_WIZARDSTOWER_NPC3:
	walk_in_place_down
	walk_in_place_down
	step_end

MOVEMENT_WIZARDSTOWER_NPC4:
	face_left
	step_end

HAM_EVENT_WizardsTower_2_Text_0:
	.string "Ariane$"

HAM_EVENT_WizardsTower_2_Text_1:
	.string "Which way did he go...$"

HAM_EVENT_WizardsTower_3_Text_0:
	.string "Stop right there theif!$"

HAM_EVENT_WizardsTower_3_Text_1:
	.string "H.A.M. member$"

HAM_EVENT_WizardsTower_3_Text_2:
	.string "You'll never catch me!$"

HAM_EVENT_WizardsTower_3_Text_3:
	.string "Get back here!$"

ChaseAfterHamMemberPlayerTrigger_Text_0:
	.string "I should help Ariane..$"

NPC_WIZARDSTOWER_SleepingWizard_Text_0:
	.string "...\l"
	.string "......\p"
	.string "They seem to be asleep.$"

NPC_WIZARDSTOWER_Myrtle_Text_0:
	.string "Myrtle$"

NPC_WIZARDSTOWER_Myrtle_Text_1:
	.string "I love water types!\l"
	.string "But I hate getting wet...$"

NPC_WIZARDSTOWER_NoobshowNPCs_Text_0:
	.string "Man 1$"

NPC_WIZARDSTOWER_NoobshowNPCs_Text_1:
	.string "Hmm sorry, what is that?\p"
	.string "I could not hear you because I was\n"
	.string "totin my staff along this shiny\l"
	.string "Wizards' Tower road.$"

NPC_WIZARDSTOWER_NoobshowNPCs_Text_2:
	.string "Man 2$"

NPC_WIZARDSTOWER_NoobshowNPCs_Text_3:
	.string "Have you seen a road with so much dust\n"
	.string "and sand?$"

NPC_WIZARDSTOWER_NoobshowNPCs_Text_4:
	.string "Listen noob, I have traveled every road\n"
	.string "in this here land.$"
