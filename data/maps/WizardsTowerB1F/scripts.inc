WizardsTowerB1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, WizardsTowerB1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

WizardsTowerB1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call WizardsTower_B1F_STATE
	return


WizardsTower_B1F_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_B1F_STATE_2
	case 1, WizardsTower_B1F_STATE_2
	case 2, WizardsTower_B1F_STATE_2
	case 3, WizardsTower_B1F_STATE_2
	case 4, WizardsTower_B1F_STATE_2
	case 5, WizardsTower_B1F_STATE_2
	case 6, WizardsTower_B1F_STATE_2
	case 7, WizardsTower_B1F_STATE_2
	case 8, WizardsTower_B1F_STATE_2
	case 9, WizardsTower_B1F_STATE_3
	return

WizardsTower_B1F_STATE_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 1
	removeobject 6
	release
	return

WizardsTower_B1F_STATE_3:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 1
	addobject 6
	release
	return


NPC_WizardsTowerB1F_Ariane::
	faceplayer
	namebox NPC_WizardsTowerB1F_Ariane_Text_0
	msgbox NPC_WizardsTowerB1F_Ariane_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_WizardsTowerB1F_Sedridor::
	faceplayer
	namebox NPC_WizardsTowerB1F_Ariane_Text_0
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_WizardsTowerB1F_Ariane_Text_0:
	.string "Ariane$"

NPC_WizardsTowerB1F_Ariane_Text_1:
	.string "I cannot believe that guy got away!$"

NPC_WizardsTowerB1F_Sedridor_Text_0:
	.string "Hello {PLAYER}, I heard from Ariane\n"
	.string "that you gave chase into Draynor\l"
	.string "Manor.$"
