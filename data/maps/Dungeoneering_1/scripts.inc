Dungeoneering_1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Dungeoneering_1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Dungeoneering_1_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return


RandomiseSeed_ForDoors::
	setvar VAR_TEMP_9, 5
	specialvar VAR_STORE_SEED_RESULT, GetSeededResult
	return


Randomise_Dungeon::
	call_if_eq VAR_STORE_SEED_RESULT, 0, DungeonLayout_ROOM_PATH_1
	call_if_eq VAR_STORE_SEED_RESULT, 1, DungeonLayout_ROOM_PATH_2
	call_if_eq VAR_STORE_SEED_RESULT, 2, DungeonLayout_ROOM_PATH_3
	call_if_eq VAR_STORE_SEED_RESULT, 3, DungeonLayout_ROOM_PATH_4
	call_if_eq VAR_STORE_SEED_RESULT, 4, DungeonLayout_ROOM_PATH_5
	call DungeonLayout_StartingRoom_DECO
	goto_if_unset FLAG_TEMP_11, Randomise_Dungeon_2
Randomise_Dungeon_1:
	goto_if_unset FLAG_TEMP_12, Randomise_Dungeon_5
Randomise_Dungeon_4:
	special DrawWholeMapView
	return

Randomise_Dungeon_2:
	call DungeonLayout_BossRoom_DECO
	goto Randomise_Dungeon_1

Randomise_Dungeon_5:
	call DungeonLayout_NormalRoom_DECO
	goto Randomise_Dungeon_4


DungeonLayout_ShutDoors_LEFT::
	setmetatile 0, 4, 522, 1
	setmetatile 1, 4, 523, 1
	setmetatile 0, 5, 522, 1
	setmetatile 1, 5, 523, 1
	setmetatile 0, 6, 522, 1
	setmetatile 1, 6, 523, 1
	setmetatile 0, 7, 522, 1
	setmetatile 1, 7, 523, 1
	return


DungeonLayout_ShutDoors_RIGHT::
	setmetatile 13, 4, 521, 1
	setmetatile 14, 4, 522, 1
	setmetatile 13, 5, 521, 1
	setmetatile 14, 5, 522, 1
	setmetatile 13, 6, 521, 1
	setmetatile 14, 6, 522, 1
	setmetatile 13, 7, 521, 1
	setmetatile 14, 7, 522, 1
	return


DungeonLayout_ShutDoors_DOWN::
	setmetatile 6, 8, 520, 0
	setmetatile 7, 8, 520, 0
	setmetatile 8, 8, 520, 0
	return


DungeonLayout_ShutDoors_UP::
	setmetatile 6, 1, 518, 1
	setmetatile 7, 1, 518, 1
	setmetatile 8, 1, 518, 1
	setmetatile 6, 2, 526, 1
	setmetatile 7, 2, 526, 1
	setmetatile 8, 2, 526, 1
	return


DungeonLayout_StartingRoom::
	setmetatile 3, 2, 536, 0
	setmetatile 3, 1, 528, 1
	return


DungeonLayout_BossRoom::
	setmetatile 2, 1, 518, 1
	setmetatile 3, 1, 518, 1
	setmetatile 4, 1, 518, 1
	setmetatile 5, 1, 518, 1
	setmetatile 6, 1, 518, 1
	setmetatile 7, 1, 518, 1
	setmetatile 8, 1, 518, 1
	setmetatile 9, 1, 518, 1
	setmetatile 10, 1, 518, 1
	setmetatile 11, 1, 518, 1
	setmetatile 12, 1, 518, 1
	setmetatile 2, 2, 526, 1
	setmetatile 3, 2, 526, 1
	setmetatile 4, 2, 526, 1
	setmetatile 5, 2, 526, 1
	setmetatile 6, 2, 526, 1
	setmetatile 7, 2, 526, 1
	setmetatile 8, 2, 526, 1
	setmetatile 9, 2, 526, 1
	setmetatile 10, 2, 526, 1
	setmetatile 11, 2, 526, 1
	setmetatile 12, 2, 526, 1
	setmetatile 3, 2, 536, 0
	setmetatile 3, 1, 528, 1
	return


DungeonLayout_PuzzleRoom_5::
	setflag FLAG_TEMP_12
	switch VAR_DUNGEONEERING_RANDOM_PUZZLE_1
	case 0, DungeonLayout_PuzzleRoom_5_3
	case 1, DungeonLayout_PuzzleRoom_5_4
	case 2, DungeonLayout_PuzzleRoom_5_5
	case 3, DungeonLayout_PuzzleRoom_5_6
	case 4, DungeonLayout_PuzzleRoom_5_7
	case 5, DungeonLayout_PuzzleRoom_5_8
DungeonLayout_PuzzleRoom_5_1:
	return

DungeonLayout_PuzzleRoom_5_3:
	call DungeonLayout_PuzzleRoom_RopeBridge
	goto DungeonLayout_PuzzleRoom_5_1

DungeonLayout_PuzzleRoom_5_4:
	call DungeonLayout_PuzzleRoom_VineRoom
	goto DungeonLayout_PuzzleRoom_5_1

DungeonLayout_PuzzleRoom_5_5:
	call DungeonLayout_PuzzleRoom_Rock
	goto DungeonLayout_PuzzleRoom_5_1

DungeonLayout_PuzzleRoom_5_6:
	call DungeonLayout_PuzzleRoom_Item
	goto DungeonLayout_PuzzleRoom_5_1

DungeonLayout_PuzzleRoom_5_7:
	call DungeonLayout_PuzzleRoom_Trainer
	goto DungeonLayout_PuzzleRoom_5_1

DungeonLayout_PuzzleRoom_5_8:
	call DungeonLayout_PuzzleRoom_Battle
	goto DungeonLayout_PuzzleRoom_5_1


DungeonLayout_PuzzleRoom_6::
	setflag FLAG_TEMP_12
	switch VAR_DUNGEONEERING_RANDOM_PUZZLE_2
	case 0, DungeonLayout_PuzzleRoom_6_3
	case 1, DungeonLayout_PuzzleRoom_6_4
	case 2, DungeonLayout_PuzzleRoom_6_5
	case 3, DungeonLayout_PuzzleRoom_6_6
	case 4, DungeonLayout_PuzzleRoom_6_7
	case 5, DungeonLayout_PuzzleRoom_6_8
DungeonLayout_PuzzleRoom_6_1:
	return

DungeonLayout_PuzzleRoom_6_3:
	call DungeonLayout_PuzzleRoom_RopeBridge
	goto DungeonLayout_PuzzleRoom_6_1

DungeonLayout_PuzzleRoom_6_4:
	call DungeonLayout_PuzzleRoom_VineRoom
	goto DungeonLayout_PuzzleRoom_6_1

DungeonLayout_PuzzleRoom_6_5:
	call DungeonLayout_PuzzleRoom_Rock
	goto DungeonLayout_PuzzleRoom_6_1

DungeonLayout_PuzzleRoom_6_6:
	call DungeonLayout_PuzzleRoom_Item
	goto DungeonLayout_PuzzleRoom_6_1

DungeonLayout_PuzzleRoom_6_7:
	call DungeonLayout_PuzzleRoom_Trainer
	goto DungeonLayout_PuzzleRoom_6_1

DungeonLayout_PuzzleRoom_6_8:
	call DungeonLayout_PuzzleRoom_Battle
	goto DungeonLayout_PuzzleRoom_6_1


DungeonLayout_PuzzleRoom_7::
	setflag FLAG_TEMP_12
	switch VAR_DUNGEONEERING_RANDOM_PUZZLE_3
	case 0, DungeonLayout_PuzzleRoom_7_3
	case 1, DungeonLayout_PuzzleRoom_7_4
	case 2, DungeonLayout_PuzzleRoom_7_5
	case 3, DungeonLayout_PuzzleRoom_7_6
	case 4, DungeonLayout_PuzzleRoom_7_7
	case 5, DungeonLayout_PuzzleRoom_7_8
DungeonLayout_PuzzleRoom_7_1:
	return

DungeonLayout_PuzzleRoom_7_3:
	call DungeonLayout_PuzzleRoom_RopeBridge
	goto DungeonLayout_PuzzleRoom_7_1

DungeonLayout_PuzzleRoom_7_4:
	call DungeonLayout_PuzzleRoom_VineRoom
	goto DungeonLayout_PuzzleRoom_7_1

DungeonLayout_PuzzleRoom_7_5:
	call DungeonLayout_PuzzleRoom_Rock
	goto DungeonLayout_PuzzleRoom_7_1

DungeonLayout_PuzzleRoom_7_6:
	call DungeonLayout_PuzzleRoom_Item
	goto DungeonLayout_PuzzleRoom_7_1

DungeonLayout_PuzzleRoom_7_7:
	call DungeonLayout_PuzzleRoom_Trainer
	goto DungeonLayout_PuzzleRoom_7_1

DungeonLayout_PuzzleRoom_7_8:
	call DungeonLayout_PuzzleRoom_Battle
	goto DungeonLayout_PuzzleRoom_7_1


DungeonLayout_PuzzleRoom_8::
	setflag FLAG_TEMP_12
	switch VAR_DUNGEONEERING_RANDOM_PUZZLE_4
	case 0, DungeonLayout_PuzzleRoom_8_3
	case 1, DungeonLayout_PuzzleRoom_8_4
	case 2, DungeonLayout_PuzzleRoom_8_5
	case 3, DungeonLayout_PuzzleRoom_8_6
	case 4, DungeonLayout_PuzzleRoom_8_7
	case 5, DungeonLayout_PuzzleRoom_8_8
DungeonLayout_PuzzleRoom_8_1:
	return

DungeonLayout_PuzzleRoom_8_3:
	call DungeonLayout_PuzzleRoom_RopeBridge
	goto DungeonLayout_PuzzleRoom_8_1

DungeonLayout_PuzzleRoom_8_4:
	call DungeonLayout_PuzzleRoom_VineRoom
	goto DungeonLayout_PuzzleRoom_8_1

DungeonLayout_PuzzleRoom_8_5:
	call DungeonLayout_PuzzleRoom_Rock
	goto DungeonLayout_PuzzleRoom_8_1

DungeonLayout_PuzzleRoom_8_6:
	call DungeonLayout_PuzzleRoom_Item
	goto DungeonLayout_PuzzleRoom_8_1

DungeonLayout_PuzzleRoom_8_7:
	call DungeonLayout_PuzzleRoom_Trainer
	goto DungeonLayout_PuzzleRoom_8_1

DungeonLayout_PuzzleRoom_8_8:
	call DungeonLayout_PuzzleRoom_Battle
	goto DungeonLayout_PuzzleRoom_8_1


DungeonLayout_PuzzleRoom_VineRoom::
	setmetatile 2, 1, 518, 1
	setmetatile 3, 1, 518, 1
	setmetatile 4, 1, 518, 1
	setmetatile 5, 1, 518, 1
	setmetatile 9, 1, 518, 1
	setmetatile 10, 1, 518, 1
	setmetatile 11, 1, 518, 1
	setmetatile 12, 1, 518, 1
	setmetatile 2, 2, 526, 1
	setmetatile 3, 2, 526, 1
	setmetatile 4, 2, 526, 1
	setmetatile 5, 2, 526, 1
	setmetatile 9, 2, 526, 1
	setmetatile 10, 2, 526, 1
	setmetatile 11, 2, 526, 1
	setmetatile 12, 2, 526, 1
	setflag FLAG_TEMP_1F
	return


DungeonLayout_PuzzleRoom_Rock::
	setmetatile 7, 5, 9, 1
	return


DungeonLayout_PuzzleRoom_Item::
	setmetatile 7, 5, 913, 1
	return


DungeonLayout_PuzzleRoom_Trainer::
	setmetatile 7, 5, 922, 1
	return


DungeonLayout_PuzzleRoom_Battle::
	setmetatile 7, 5, 876, 1
	return


DungeonLayout_PuzzleRoom_RopeBridge::
	setmetatile 2, 1, 518, 1
	setmetatile 3, 1, 518, 1
	setmetatile 4, 1, 518, 1
	setmetatile 5, 1, 518, 1
	setmetatile 9, 1, 518, 1
	setmetatile 10, 1, 518, 1
	setmetatile 11, 1, 518, 1
	setmetatile 12, 1, 518, 1
	setmetatile 2, 2, 526, 1
	setmetatile 3, 2, 526, 1
	setmetatile 4, 2, 526, 1
	setmetatile 5, 2, 526, 1
	setmetatile 9, 2, 526, 1
	setmetatile 10, 2, 526, 1
	setmetatile 11, 2, 526, 1
	setmetatile 12, 2, 526, 1
	setmetatile 2, 3, 589, 1
	setmetatile 3, 3, 590, 1
	setmetatile 4, 3, 590, 1
	setmetatile 5, 3, 591, 1
	setmetatile 6, 3, 520, 0
	setmetatile 7, 3, 929, 0
	setmetatile 8, 3, 520, 0
	setmetatile 9, 3, 589, 1
	setmetatile 10, 3, 590, 1
	setmetatile 11, 3, 590, 1
	setmetatile 12, 3, 591, 1
	setmetatile 2, 4, 597, 1
	setmetatile 3, 4, 598, 1
	setmetatile 4, 4, 598, 1
	setmetatile 5, 4, 639, 1
	setmetatile 6, 4, 590, 1
	setmetatile 7, 4, 590, 1
	setmetatile 8, 4, 590, 1
	setmetatile 9, 4, 638, 1
	setmetatile 10, 4, 598, 1
	setmetatile 11, 4, 598, 1
	setmetatile 12, 4, 599, 1
	setmetatile 2, 5, 605, 1
	setmetatile 3, 5, 606, 1
	setmetatile 4, 5, 646, 1
	setmetatile 5, 5, 598, 1
	setmetatile 6, 5, 598, 1
	setmetatile 7, 5, 598, 1
	setmetatile 8, 5, 598, 1
	setmetatile 9, 5, 598, 1
	setmetatile 10, 5, 647, 1
	setmetatile 11, 5, 606, 1
	setmetatile 12, 5, 607, 1
	setmetatile 4, 6, 605, 1
	setmetatile 5, 6, 606, 1
	setmetatile 6, 6, 606, 1
	setmetatile 7, 6, 952, 1
	setmetatile 8, 6, 606, 1
	setmetatile 9, 6, 606, 1
	setmetatile 10, 6, 607, 1
	setmetatile 7, 7, 961, 0
	random 2
	compare VAR_RESULT, 0
	goto_if_eq DungeonLayout_PuzzleRoom_RopeBridge_2
	compare VAR_RESULT, 1
	goto_if_eq DungeonLayout_PuzzleRoom_RopeBridge_3
DungeonLayout_PuzzleRoom_RopeBridge_1:
	return

DungeonLayout_PuzzleRoom_RopeBridge_2:
	setmetatile 3, 6, 601, 0
	setmetatile 11, 8, 601, 0
	setmetatile 5, 8, 602, 0
	setmetatile 10, 8, 602, 0
	setmetatile 2, 8, 930, 1
	goto DungeonLayout_PuzzleRoom_RopeBridge_1

DungeonLayout_PuzzleRoom_RopeBridge_3:
	setmetatile 11, 6, 601, 0
	setmetatile 5, 7, 601, 0
	setmetatile 3, 6, 602, 0
	setmetatile 9, 8, 602, 0
	setmetatile 12, 8, 930, 1
	goto DungeonLayout_PuzzleRoom_RopeBridge_1


DungeonLayout_BLOCKED_RIGHT_ROOM_1::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_UP_ROOM_1::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_DOWN_ROOM_1::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_LEFT_ROOM_1::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_DOWN_ROOM_2::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_UP_ROOM_2::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_RIGHT_ROOM_2::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_9, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_DOWN_ROOM_3::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_UP_ROOM_3::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_10, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_RIGHT_ROOM_4::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_LEFT_ROOM_4::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_10, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_LEFT_ROOM_5::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_RIGHT_ROOM_5::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_LEFT_ROOM_8::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_UP_ROOM_8::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_9, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_RIGHT_ROOM_12::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_DOWN_ROOM_12::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_12, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_9, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_UP_ROOM_13::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_13, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_LEFT_ROOM_14::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_13, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_14, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_RIGHT_ROOM_14::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_14, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_15, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_BLOCKED_UP_ROOM_14::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_14, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_UP_ROOM_15::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_15, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_UP_ROOM_16::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_ShutDoors_DOWN
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_16, DungeonLayout_ShutDoors_UP
	return


DungeonLayout_BLOCKED_RIGHT_ROOM_16::
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_15, DungeonLayout_ShutDoors_RIGHT
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_16, DungeonLayout_ShutDoors_LEFT
	return


DungeonLayout_StartingRoom_DECO::
	compare VAR_DUNGEONEERING_STARTER_ROOM, 1
	goto_if_eq DungeonLayout_StartingRoom_DECO_2
	compare VAR_DUNGEONEERING_STARTER_ROOM, 2
	goto_if_eq DungeonLayout_StartingRoom_DECO_3
	compare VAR_DUNGEONEERING_STARTER_ROOM, 3
	goto_if_eq DungeonLayout_StartingRoom_DECO_4
	compare VAR_DUNGEONEERING_STARTER_ROOM, 4
	goto_if_eq DungeonLayout_StartingRoom_DECO_5
	compare VAR_DUNGEONEERING_STARTER_ROOM, 5
	goto_if_eq DungeonLayout_StartingRoom_DECO_6
	compare VAR_DUNGEONEERING_STARTER_ROOM, 6
	goto_if_eq DungeonLayout_StartingRoom_DECO_7
	compare VAR_DUNGEONEERING_STARTER_ROOM, 7
	goto_if_eq DungeonLayout_StartingRoom_DECO_8
	compare VAR_DUNGEONEERING_STARTER_ROOM, 8
	goto_if_eq DungeonLayout_StartingRoom_DECO_9
	compare VAR_DUNGEONEERING_STARTER_ROOM, 9
	goto_if_eq DungeonLayout_StartingRoom_DECO_10
	compare VAR_DUNGEONEERING_STARTER_ROOM, 10
	goto_if_eq DungeonLayout_StartingRoom_DECO_11
	compare VAR_DUNGEONEERING_STARTER_ROOM, 11
	goto_if_eq DungeonLayout_StartingRoom_DECO_12
	compare VAR_DUNGEONEERING_STARTER_ROOM, 12
	goto_if_eq DungeonLayout_StartingRoom_DECO_13
	compare VAR_DUNGEONEERING_STARTER_ROOM, 12
	goto_if_eq DungeonLayout_StartingRoom_DECO_14
	compare VAR_DUNGEONEERING_STARTER_ROOM, 13
	goto_if_eq DungeonLayout_StartingRoom_DECO_15
	compare VAR_DUNGEONEERING_STARTER_ROOM, 14
	goto_if_eq DungeonLayout_StartingRoom_DECO_16
	compare VAR_DUNGEONEERING_STARTER_ROOM, 15
	goto_if_eq DungeonLayout_StartingRoom_DECO_17
	compare VAR_DUNGEONEERING_STARTER_ROOM, 16
	goto_if_eq DungeonLayout_StartingRoom_DECO_18
DungeonLayout_StartingRoom_DECO_1:
	return

DungeonLayout_StartingRoom_DECO_2:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_3:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_4:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_5:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_6:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_7:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_8:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_9:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_10:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_9, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_11:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_10, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_12:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_13:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_14:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_15:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_13, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_16:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_14, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_17:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_15, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1

DungeonLayout_StartingRoom_DECO_18:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_16, DungeonLayout_StartingRoom_DECO_Layout
	goto DungeonLayout_StartingRoom_DECO_1


DungeonLayout_StartingRoom_DECO_Layout::
	setflag FLAG_TEMP_12
	setflag FLAG_TEMP_11
	setmetatile 6, 5, 623, 1
	setmetatile 6, 4, 615, 0
	setmetatile 8, 4, 576, 0
	setmetatile 9, 4, 577, 0
	setmetatile 10, 4, 578, 0
	setmetatile 8, 5, 584, 0
	setmetatile 9, 5, 585, 0
	setmetatile 10, 5, 586, 0
	setmetatile 8, 6, 584, 0
	setmetatile 9, 6, 585, 0
	setmetatile 10, 6, 586, 0
	setmetatile 8, 7, 592, 0
	setmetatile 9, 7, 593, 0
	setmetatile 10, 7, 594, 0
	return


DungeonLayout_BossRoom_DECO_Layout::
	setflag FLAG_TEMP_12
	setmetatile 2, 7, 604, 1
	setmetatile 2, 6, 596, 0
	setmetatile 2, 5, 588, 0
	setmetatile 4, 5, 604, 1
	setmetatile 4, 4, 596, 0
	setmetatile 4, 3, 588, 0
	setmetatile 10, 5, 604, 1
	setmetatile 10, 4, 596, 0
	setmetatile 10, 3, 588, 0
	setmetatile 12, 7, 604, 1
	setmetatile 12, 6, 596, 0
	setmetatile 12, 5, 588, 0
	return


DungeonLayout_NormalRoom_DECO::
	setvar VAR_TEMP_9, 2
	specialvar VAR_RESULT, GetSeededResult
	call_if_eq VAR_RESULT, 0, DungeonLayout_1
	call_if_eq VAR_RESULT, 1, DungeonLayout_2
	return


DungeonLayout_BossRoom_DECO::
	compare VAR_DUNGEONEERING_BOSS_ROOM, 1
	goto_if_eq DungeonLayout_BossRoom_DECO_2
	compare VAR_DUNGEONEERING_BOSS_ROOM, 2
	goto_if_eq DungeonLayout_BossRoom_DECO_3
	compare VAR_DUNGEONEERING_BOSS_ROOM, 3
	goto_if_eq DungeonLayout_BossRoom_DECO_4
	compare VAR_DUNGEONEERING_BOSS_ROOM, 4
	goto_if_eq DungeonLayout_BossRoom_DECO_5
	compare VAR_DUNGEONEERING_BOSS_ROOM, 5
	goto_if_eq DungeonLayout_BossRoom_DECO_6
	compare VAR_DUNGEONEERING_BOSS_ROOM, 6
	goto_if_eq DungeonLayout_BossRoom_DECO_7
	compare VAR_DUNGEONEERING_BOSS_ROOM, 7
	goto_if_eq DungeonLayout_BossRoom_DECO_8
	compare VAR_DUNGEONEERING_BOSS_ROOM, 8
	goto_if_eq DungeonLayout_BossRoom_DECO_9
	compare VAR_DUNGEONEERING_BOSS_ROOM, 9
	goto_if_eq DungeonLayout_BossRoom_DECO_10
	compare VAR_DUNGEONEERING_BOSS_ROOM, 10
	goto_if_eq DungeonLayout_BossRoom_DECO_11
	compare VAR_DUNGEONEERING_BOSS_ROOM, 11
	goto_if_eq DungeonLayout_BossRoom_DECO_12
	compare VAR_DUNGEONEERING_BOSS_ROOM, 12
	goto_if_eq DungeonLayout_BossRoom_DECO_13
	compare VAR_DUNGEONEERING_BOSS_ROOM, 13
	goto_if_eq DungeonLayout_BossRoom_DECO_14
	compare VAR_DUNGEONEERING_BOSS_ROOM, 14
	goto_if_eq DungeonLayout_BossRoom_DECO_15
	compare VAR_DUNGEONEERING_BOSS_ROOM, 15
	goto_if_eq DungeonLayout_BossRoom_DECO_16
	compare VAR_DUNGEONEERING_BOSS_ROOM, 16
	goto_if_eq DungeonLayout_BossRoom_DECO_17
DungeonLayout_BossRoom_DECO_1:
	return

DungeonLayout_BossRoom_DECO_2:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_3:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_4:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_5:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_4, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_6:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_5, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_7:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_6, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_8:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_7, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_9:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_8, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_10:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_9, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_11:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_10, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_12:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_11, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_13:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_14:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_15:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_13, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_16:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_14, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1

DungeonLayout_BossRoom_DECO_17:
	specialvar VAR_RESULT, GetCurrentMap
	call_if_eq VAR_RESULT, MAP_DUNGEONEERING_15, DungeonLayout_BossRoom_DECO_Layout
	goto DungeonLayout_BossRoom_DECO_1


DungeonInteractions_DG_ROPE::
	checkitem ITEM_DG_ROPE, 1
	compare VAR_RESULT, 0
	goto_if_ne DungeonInteractions_DG_ROPE_2
	end

DungeonInteractions_DG_ROPE_2:
	setmetatile 7, 5, 945, 0
	setmetatile 7, 4, 937, 0
	setmetatile 7, 6, 953, 0
	special DrawWholeMapView
	end


DungeonInteractions_DG_STRING::
	checkitem ITEM_DG_ROPE, 1
	compare VAR_RESULT, 0
	goto_if_eq DungeonInteractions_DG_STRING_2
DungeonInteractions_DG_STRING_1:
	msgbox DungeonInteractions_DG_STRING_Text_0
	closemessage
	end

DungeonInteractions_DG_STRING_2:
	checkitem ITEM_DG_BALL_OF_WOOL, 1
	compare VAR_RESULT, 0
	goto_if_eq DungeonInteractions_DG_STRING_4
	goto DungeonInteractions_DG_STRING_1

DungeonInteractions_DG_STRING_4:
	finditem ITEM_DG_BALL_OF_WOOL
	end


DungeonInteractions_DG_SPINNING_WHEEL::
	checkitem ITEM_DG_BALL_OF_WOOL, 1
	compare VAR_RESULT, 0
	goto_if_ne DungeonInteractions_DG_SPINNING_WHEEL_2
	msgbox DungeonInteractions_DG_SPINNING_WHEEL_Text_1
	closemessage
	end

DungeonInteractions_DG_SPINNING_WHEEL_2:
	msgbox DungeonInteractions_DG_SPINNING_WHEEL_Text_0
	closemessage
	finditem ITEM_DG_ROPE, 1
	removeitem ITEM_DG_BALL_OF_WOOL, 1
	end


DungeonInteractions_DG_STRING_Text_0:
	.string "You search the junk and find nothing.$"

DungeonInteractions_DG_SPINNING_WHEEL_Text_0:
	.string "You spin the string into some useful rope.$"

DungeonInteractions_DG_SPINNING_WHEEL_Text_1:
	.string "You need some string to make a rope.$"
