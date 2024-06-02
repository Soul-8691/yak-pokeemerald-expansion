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

ValenciaPark_EventScript_Trainer1::
	trainerbattle_single TRAINER_VALENCIA_PARK_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_VALENCIA_PARK_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end
