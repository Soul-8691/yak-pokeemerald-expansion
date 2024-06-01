ValenciaPark_MapScripts::
	.byte 0

ValenciaPark_EventScript_TestSign::
	givemon SPECIES_GROWLITHE 25
    setflag FLAG_SYS_POKEMON_GET
    setflag FLAG_SYS_POKEDEX_GET
    special EnableNationalPokedex
    setflag FLAG_SYS_B_DASH
    setflag FLAG_SYS_QUEST_MENU_GET
    setflag FLAG_VALENCIA_PARK_SHROODLES
    setflag FLAG_VALENCIA_PARK_BLIPBUGS
    setflag FLAG_VALENCIA_PARK_DEFEATED_POKEMON
    setflag FLAG_VALENCIA_PARK_CAUGHT
    setflag FLAG_VALENCIA_PARK_DEFEATED_TRAINERS
    setflag FLAG_VALENCIA_PARK_SILVERPOWDER
    setvar VAR_QUEST_LEFT_TO_DEFEAT 5
    setvar VAR_QUEST_LEFT_TO_CATCH 3
    setvar VAR_QUEST_LEFT_TO_DEFEAT_2 20
    setvar VAR_QUEST_LEFT_TO_CATCH_2 5
    setvar VAR_QUEST_LEFT_TO_DEFEAT_3 5
    startquest QUEST_1
    startquest QUEST_2
    startquest QUEST_3
    startquest QUEST_4
    startquest QUEST_5
    startquest QUEST_6
    additem ITEM_MASTER_BALL, 10
	end
