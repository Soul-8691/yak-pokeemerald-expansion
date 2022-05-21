Lumbridge_Bank_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Lumbridge_Bank_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Lumbridge_Bank_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Lumbridge_Bank_OnTransition
	return


Lumbridge_Bank_OnTransition::
	setrespawn HEAL_LOCATION_LUMBRIDGE
	return


BANK_EventScript_Banker::
	setvar VAR_0x800B, LOCALID_NURSE
	lock
	faceplayer
	namebox BANK_EventScript_Banker_Text_0
	msgbox BANK_EventScript_Banker_Text_1
	msgbox BANK_EventScript_Banker_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne BANK_EventScript_Banker_3
	msgbox BANK_EventScript_Banker_Text_4
	special HealPlayerParty
	hidenamebox
	release
	end

BANK_EventScript_Banker_3:
	msgbox BANK_EventScript_Banker_Text_3
	hidenamebox
	release
	end


BANK_EventScript_PC::
	lock
	faceplayer
	namebox BANK_EventScript_Banker_Text_0
	msgbox BANK_EventScript_PC_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_ne BANK_EventScript_PC_3
	hidenamebox
	special ShowPokemonStorageSystemPC
	waitstate
	namebox BANK_EventScript_Banker_Text_0
	msgbox BANK_EventScript_PC_Text_1
	hidenamebox
	release
	end

BANK_EventScript_PC_3:
	msgbox BANK_EventScript_Banker_Text_3
	hidenamebox
	release
	end


BANK_EventScript_Banker_Text_0:
	.string "Banker$"

BANK_EventScript_Banker_Text_1:
	.string "Welcome to the Bank of PokeScape.$"

BANK_EventScript_Banker_Text_2:
	.string "Would you like to heal your MONSTERs?$"

BANK_EventScript_Banker_Text_3:
	.string "Very well, come again soon.$"

BANK_EventScript_Banker_Text_4:
	.string "Your MONSTERs are all healed!$"

BANK_EventScript_PC_Text_0:
	.string "Would you like to access your Bank\n"
	.string "Account?$"

BANK_EventScript_PC_Text_1:
	.string "Thank you for using the Bank of\n"
	.string "PokeScape.$"
