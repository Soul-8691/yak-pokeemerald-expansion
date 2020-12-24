Tutorial_Island_MapScripts::
	.byte 0




Script_SKIPPY_1::
    lock
    faceplayer
    msgbox Text_DIALOG_1_SKIPPY, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Script_SKIPPY_PlayerAnsweredNo

	//GIVE RUNNING SHOES
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	//GIVE POKEMON MENU
	setflag FLAG_SYS_POKEMON_GET
	//GIVE POKEDEX MENU
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	//GIVE NATIONAL DEX
	setflag FLAG_SYS_NATIONAL_DEX
	special EnableNationalPokedex
	//GIVE POKEMON
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	givemon SPECIES_FROGEEL, 25, ITEM_NONE
	
	
	msgbox Text_PlayerAnsweredYES, MSGBOX_DEFAULT

    release
    end



Script_SKIPPY_PlayerAnsweredNo:
	msgbox Text_PlayerAnsweredNo, MSGBOX_DEFAULT
	release
	end


Text_PlayerAnsweredYES:
	.string "MENUS UNLOCKED TELEPORT$"

Text_PlayerAnsweredNo:
	.string "YOU SAID NO$"

Text_DIALOG_1_SKIPPY:
	.string "Want to teleport to Lumbridge?$"


Script_PlayerHasFullParty::
	msgbox Text_PlayerHasFullParty, MSGBOX_DEFAULT
	release
	end
	
Text_PlayerHasFullParty:
	.string "Ah, your party is full.$"
