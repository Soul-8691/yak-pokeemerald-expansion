BarbarianVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BarbarianVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto BarbarianVillage_STATE
	return


BarbarianVillage_STATE::
	switch VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE
	case 0, BarbarianVillage_STATE_2
	return

BarbarianVillage_STATE_2:
	setobjectxyperm 6, 11, 19
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 7, 12, 19
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	end


NPC_BARB_BLOCKADE_1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 0
	goto_if_eq NPC_BARB_BLOCKADE_1_2
NPC_BARB_BLOCKADE_1_1:
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	goto_if_eq NPC_BARB_BLOCKADE_1_5
NPC_BARB_BLOCKADE_1_4:
	hidenamebox
	closemessage
	release
	end

NPC_BARB_BLOCKADE_1_2:
	msgbox NPC_BARB_BLOCKADE_1_Text_1
	goto_if_set FLAG_BADGE01_GET, NPC_BARB_BLOCKADE_1_8
	goto NPC_BARB_BLOCKADE_1_1

NPC_BARB_BLOCKADE_1_5:
	msgbox NPC_BARB_BLOCKADE_1_Text_4
	goto NPC_BARB_BLOCKADE_1_4

NPC_BARB_BLOCKADE_1_7:
	msgbox NPC_BARB_BLOCKADE_1_Text_2
	hidenamebox
	closemessage
	applymovement 6, BARBARIANVILLAGE_BLOCK_1
	applymovement 7, BARBARIANVILLAGE_BLOCK_2
	waitmovement 0
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARB_BLOCKADE_1_Text_3
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	release
	end

NPC_BARB_BLOCKADE_1_8:
	goto_if_set FLAG_BADGE02_GET, NPC_BARB_BLOCKADE_1_7
	goto NPC_BARB_BLOCKADE_1_1


BARBARIANVILLAGE_BLOCK_1:
	walk_left
	face_down
	step_end

BARBARIANVILLAGE_BLOCK_2:
	walk_right
	face_down
	step_end

NPC_BARBARIANVILLAGE_DUNGEONGIRL::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0
	hidenamebox
	release
	end


NPC_BARB_BLOCKADE_1_Text_0:
	.string "Barbarian$"

NPC_BARB_BLOCKADE_1_Text_1:
	.string "Only the strong may enter our longhall!\p"
	.string "Come back when you have proved\n"
	.string "yourself in battle.$"

NPC_BARB_BLOCKADE_1_Text_2:
	.string "You have the Lumbridge Badge and\n"
	.string "Falador Badge!$"

NPC_BARB_BLOCKADE_1_Text_3:
	.string "You may enter!$"

NPC_BARB_BLOCKADE_1_Text_4:
	.string "You are very strong.$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0:
	.string "Only once you have proved yourself a\n"
	.string "barbarian are you allowed to use our\l"
	.string "dungeon for training.$"
