ValenciaPark_MapScripts::
	.byte 0

ValenciaPark_EventScript_TestSign::
	// givemon SPECIES_METAGROSS 10
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
    special EnableNationalPokedex
    setflag FLAG_SYS_B_DASH
    setflag FLAG_SYS_QUEST_MENU_GET
    setflag FLAG_VALENCIA_PARK_SHROODLES
    setvar VAR_QUEST_LEFT_TO_DEFEAT 5
    startquest QUEST_1
    additem ITEM_MASTER_BALL, 10
	end
