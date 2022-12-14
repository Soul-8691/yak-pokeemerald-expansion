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
	msgbox NPC_BARB_BLOCKADE_1_Text_5
	hidenamebox
	closemessage
	release
	end

NPC_BARB_BLOCKADE_1_2:
	msgbox NPC_BARB_BLOCKADE_1_Text_1
	goto_if_set FLAG_BADGE01_GET, NPC_BARB_BLOCKADE_1_9
	goto NPC_BARB_BLOCKADE_1_1

NPC_BARB_BLOCKADE_1_5:
	msgbox NPC_BARB_BLOCKADE_1_Text_4
	release
	end

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
	release
	end

NPC_BARB_BLOCKADE_1_8:
	goto_if_set FLAG_BADGE03_GET, NPC_BARB_BLOCKADE_1_12
	goto NPC_BARB_BLOCKADE_1_1

NPC_BARB_BLOCKADE_1_9:
	goto_if_set FLAG_BADGE02_GET, NPC_BARB_BLOCKADE_1_8
	goto NPC_BARB_BLOCKADE_1_1

NPC_BARB_BLOCKADE_1_12:
	goto_if_set FLAG_BADGE04_GET, NPC_BARB_BLOCKADE_1_7
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


NPC_BARBARIANVILLAGE_SIGNPOST::
	lock
	msgbox NPC_BARBARIANVILLAGE_SIGNPOST_Text_0
	release
	end


NPC_BARBARIANVILLAGE_NPC1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC1_Text_0
	hidenamebox
	release
	end


NPC_ROUTE20_NPC1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_ROUTE20_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_1::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE20_FISHERMAN_1_Text_0, BATTLE_ROUTE20_FISHERMAN_1_Text_1
	msgbox BATTLE_ROUTE20_FISHERMAN_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_2::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE20_FISHERMAN_2_Text_0, BATTLE_ROUTE20_FISHERMAN_2_Text_1
	msgbox BATTLE_ROUTE20_FISHERMAN_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_3::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE20_FISHERMAN_3_Text_0, BATTLE_ROUTE20_FISHERMAN_3_Text_0
	msgbox BATTLE_ROUTE20_FISHERMAN_3_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE20_SKILLER::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE20_FISHERMAN_3_Text_0, BATTLE_ROUTE20_FISHERMAN_3_Text_0
	msgbox BATTLE_ROUTE20_FISHERMAN_3_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE20_DUO_1::
	trainerbattle_double TRAINER_ROUTE23_TRAINER_COUPLE, BATTLE_ROUTE20_DUO_1_Text_0, BATTLE_ROUTE20_DUO_1_Text_1, BATTLE_ROUTE20_DUO_1_Text_2
	namebox BATTLE_ROUTE20_DUO_1_Text_3
	msgbox BATTLE_ROUTE20_DUO_1_Text_4
	hidenamebox
	release
	end


BATTLE_ROUTE20_DUO_2::
	trainerbattle_double TRAINER_ROUTE23_TRAINER_COUPLE, BATTLE_ROUTE20_DUO_2_Text_0, BATTLE_ROUTE20_DUO_2_Text_1, BATTLE_ROUTE20_DUO_1_Text_2
	namebox BATTLE_ROUTE20_DUO_2_Text_2
	msgbox BATTLE_ROUTE20_DUO_2_Text_3
	hidenamebox
	release
	end


NPC_BARB_BLOCKADE_1_Text_0:
	.string "Barbarian$"

NPC_BARB_BLOCKADE_1_Text_1:
	.string "Only the strong may enter our longhall!\p"
	.string "You should probably have at least four\n"
	.string "badges before attempting.$"

NPC_BARB_BLOCKADE_1_Text_2:
	.string "Oorgh!!\p"
	.string "Impressive you have at least four\n"
	.string "badges.$"

NPC_BARB_BLOCKADE_1_Text_3:
	.string "You may enter!$"

NPC_BARB_BLOCKADE_1_Text_4:
	.string "You are very strong.$"

NPC_BARB_BLOCKADE_1_Text_5:
	.string "You may still attempt the gym challenge\n"
	.string "if you wish but be warned we will not go\l"
	.string "easy on you.$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0:
	.string "Only once you have proved yourself a\n"
	.string "barbarian are you allowed to use our\l"
	.string "dungeon for training.$"

NPC_BARBARIANVILLAGE_SIGNPOST_Text_0:
	.string "Barbarian Village.\p"
	.string "Also known as Gunnarsgrunn.$"

NPC_BARBARIANVILLAGE_NPC1_Text_0:
	.string "Chieftain Gunthor is the strongest\n"
	.string "warrior of our village.$"

NPC_ROUTE20_NPC1_Text_0:
	.string "This is a popular spot for fly fishing.\p"
	.string "Many adventurers catch Trout and\n"
	.string "Salmon in our river.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_0:
	.string "If you look carefully in the water you\n"
	.string "can see a rainbow.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_1:
	.string "So these Rainbow Fish are why you can\n"
	.string "see a rainbow in the river.$"

BATTLE_ROUTE20_FISHERMAN_2_Text_0:
	.string "You just scared away my catch!$"

BATTLE_ROUTE20_FISHERMAN_2_Text_1:
	.string "I just ran out of feathers…$"

BATTLE_ROUTE20_FISHERMAN_2_Text_2:
	.string "Fly fishing is great!\p"
	.string "Much better than regular net fishing.$"

BATTLE_ROUTE20_FISHERMAN_3_Text_0:
	.string "$"

BATTLE_ROUTE20_DUO_1_Text_0:
	.string "Pass the Trout.$"

BATTLE_ROUTE20_DUO_1_Text_1:
	.string "Oh no it burnt…$"

BATTLE_ROUTE20_DUO_1_Text_2:
	.string "We would love to have a double battle\n"
	.string "with you, but you don't have enough\l"
	.string "monsters.$"

BATTLE_ROUTE20_DUO_1_Text_3:
	.string "Cook$"

BATTLE_ROUTE20_DUO_1_Text_4:
	.string "Can someone light a fire for me?$"

BATTLE_ROUTE20_DUO_2_Text_0:
	.string "Feel the burn!$"

BATTLE_ROUTE20_DUO_2_Text_1:
	.string "The fire went out of control…$"

BATTLE_ROUTE20_DUO_2_Text_2:
	.string "Firemaker$"

BATTLE_ROUTE20_DUO_2_Text_3:
	.string "I have the most important job here.$"
