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
    additem ITEM_ULTRA_BALL, 15
	end

ValenciaPark_EventScript_Trainer1::
	trainerbattle_single TRAINER_VALENCIA_PARK_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

ValenciaPark_EventScript_Trainer2::
	trainerbattle_single TRAINER_VALENCIA_PARK_2, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

ValenciaPark_EventScript_Grafaiai::
	lock
    faceplayer
    setwildbattle SPECIES_GRAFAIAI, 20
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
    setflag FLAG_VALENCIA_PARK_GRAFAIAI
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ValenciaPark_EventScript_RemoveStaticPokemon
    goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ValenciaPark_EventScript_RemoveStaticPokemon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ValenciaPark_EventScript_RemoveStaticPokemon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ValenciaPark_EventScript_RemoveStaticPokemon
	release
	end

ValenciaPark_EventScript_Shroodle::
	lock
    faceplayer
    setwildbattle SPECIES_SHROODLE, 25
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ValenciaPark_EventScript_RemoveStaticPokemon
    goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ValenciaPark_EventScript_RemoveStaticPokemon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ValenciaPark_EventScript_RemoveStaticPokemon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ValenciaPark_EventScript_RemoveStaticPokemon
	release
	end

ValenciaPark_EventScript_Skwovet::
	lock
    faceplayer
    setwildbattle SPECIES_SKWOVET, 25
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
    setflag FLAG_VALENCIA_PARK_SKWOVET
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ValenciaPark_EventScript_RemoveStaticPokemon
    goto_if_eq VAR_RESULT, B_OUTCOME_CAUGHT, ValenciaPark_EventScript_RemoveStaticPokemon
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ValenciaPark_EventScript_RemoveStaticPokemon
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ValenciaPark_EventScript_RemoveStaticPokemon
	release
	end

ValenciaPark_EventScript_RemoveStaticPokemon::
	goto Common_EventScript_RemoveStaticPokemon
	end
