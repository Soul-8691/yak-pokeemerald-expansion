Starter_House_Varrock_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD:
	checkgamemode
	compare VAR_RESULT, 0
	goto_if_eq Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD_2
Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	compare VAR_RESULT, 1
	goto_if_eq Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD_1

Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	setvar VAR_POKESCAPE_GAMEMODE_STATE, 1
	return

Starter_House_Varrock_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, GAMEMODE_CHECK_NEWGAME_ITEMS
	.2byte 0
