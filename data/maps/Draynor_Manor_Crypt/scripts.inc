Draynor_Manor_Crypt_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto WizardsTower_DraynorManor_Crypt_STATE
	return

Draynor_Manor_Crypt_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_KARAMJAVOLCANO_STATE, 7, EVENT_HAM_DRAYNORMANOR_CRYPT
	.2byte 0


WizardsTower_DraynorManor_Crypt_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_DraynorManor_Crypt_STATE_2
	case 1, WizardsTower_DraynorManor_Crypt_STATE_2
	case 2, WizardsTower_DraynorManor_Crypt_STATE_2
	case 3, WizardsTower_DraynorManor_Crypt_STATE_2
	case 4, WizardsTower_DraynorManor_Crypt_STATE_2
	case 5, WizardsTower_DraynorManor_Crypt_STATE_2
	case 6, WizardsTower_DraynorManor_Crypt_STATE_2
	case 7, WizardsTower_DraynorManor_Crypt_STATE_2
	case 8, WizardsTower_DraynorManor_Crypt_STATE_3
	case 9, WizardsTower_DraynorManor_Crypt_STATE_3
	return

WizardsTower_DraynorManor_Crypt_STATE_2:
	release
	end

WizardsTower_DraynorManor_Crypt_STATE_3:
	removeobject 2
	setflag FLAG_TEMP_1
	release
	end


EVENT_HAM_DRAYNORMANOR_CRYPT::
	lock
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_1
	hidenamebox
	closemessage
	namebox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_2
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_3
	hidenamebox
	closemessage
	trainerbattle_single TRAINER_DRAYNOR_MANOR_COUNT_DRAYNOR, EVENT_HAM_DRAYNORMANOR_CRYPT_Text_4, EVENT_HAM_DRAYNORMANOR_CRYPT_Text_5
	msgbox EVENT_HAM_DRAYNORMANOR_CRYPT_Text_6
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 8
	release
	end


EVENT_HAM_DRAYNORMANOR_CRYPT_Text_0:
	.string "H.A.M GRUNT$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_1:
	.string "YO SHIT ITS A VAMPYRE$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_2:
	.string "COUNT DRAYNOR$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_3:
	.string "YO SHIT ITS PINK MAN!\p"
	.string "I'm going to smack the shit out of you!$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_4:
	.string "LEME SUCC$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_5:
	.string "YOU SUCC ME DRY$"

EVENT_HAM_DRAYNORMANOR_CRYPT_Text_6:
	.string "OH NO! I AM DEAD!$"
