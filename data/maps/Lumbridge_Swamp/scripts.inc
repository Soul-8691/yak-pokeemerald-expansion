Lumbridge_Swamp_MapScripts::
	.byte 0


BLOCK_LumbridgeSwamp_HAM::
	lock
	applymovement 9, MOVEMENT_LUMBRIDGESWAMP_PINKMAN
	namebox BLOCK_LumbridgeSwamp_HAM_Text_0
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_1
	hidenamebox
	waitmovement 0
	applymovement 4, MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_1
	namebox BLOCK_LumbridgeSwamp_HAM_Text_2
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_3
	waitmovement 0
	hidenamebox
	namebox BLOCK_LumbridgeSwamp_HAM_Text_0
	msgbox BLOCK_LumbridgeSwamp_HAM_Text_4
	hidenamebox
	applymovement 4, MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_2
	waitmovement 0
	release
	end


MOVEMENT_LUMBRIDGESWAMP_PINKMAN:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	step_end

MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_1:
	face_right
	step_end

MOVEMENT_LUMBRIDGESWAMP_PINKGIRL_2:
	face_up
	step_end

BATTLE_LumbridgeSwamp_TRAINER_1::
	trainerbattle_single TRAINER_RSN_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_1_Text_0, BATTLE_LumbridgeSwamp_TRAINER_1_Text_1
	namebox BATTLE_LumbridgeSwamp_TRAINER_1_Text_2
	msgbox BATTLE_LumbridgeSwamp_TRAINER_1_Text_3
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_2::
	trainerbattle_single TRAINER_SKELETON_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_2_Text_0, BATTLE_LumbridgeSwamp_TRAINER_2_Text_1
	namebox BATTLE_LumbridgeSwamp_TRAINER_2_Text_2
	msgbox BATTLE_LumbridgeSwamp_TRAINER_2_Text_1
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_3::
	trainerbattle_single TRAINER_MUGGER_LUM_SWAMP, BATTLE_LumbridgeSwamp_TRAINER_3_Text_0, BATTLE_LumbridgeSwamp_TRAINER_3_Text_1
	namebox BATTLE_LumbridgeSwamp_TRAINER_3_Text_2
	msgbox BATTLE_LumbridgeSwamp_TRAINER_3_Text_1
	hidenamebox
	closemessage
	end


BATTLE_LumbridgeSwamp_TRAINER_4::
	trainerbattle_single TRAINER_LUM_SWAMP_GRASSTEETH, BATTLE_LumbridgeSwamp_TRAINER_4_Text_0, BATTLE_LumbridgeSwamp_TRAINER_4_Text_1
	namebox BATTLE_LumbridgeSwamp_TRAINER_4_Text_2
	msgbox BATTLE_LumbridgeSwamp_TRAINER_4_Text_1
	hidenamebox
	closemessage
	end


LumSwampSign::
	msgbox LumSwampSign_Text_0, MSGBOX_SIGN
	release
	return


LUMBRIDGESWAMP_CANDLESELLER::
	lock
	faceplayer
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_0
	checkitem ITEM_LANTERN, 1
	compare VAR_RESULT, 0
	goto_if_eq LUMBRIDGESWAMP_CANDLESELLER_2
	closemessage
	release
	end

	closemessage
	release
	end

LUMBRIDGESWAMP_CANDLESELLER_2:
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_1
	giveitem ITEM_LANTERN
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_2
	closemessage
	release
	end


BLOCK_LumbridgeSwamp_HAM_Text_0:
	.string "Pink Man$"

BLOCK_LumbridgeSwamp_HAM_Text_1:
	.string "Oh come on!\p"
	.string "Newcomer map, more like trash map!$"

BLOCK_LumbridgeSwamp_HAM_Text_2:
	.string "Pink Girl$"

BLOCK_LumbridgeSwamp_HAM_Text_3:
	.string "You are looking at it upside down.\p"
	.string "See the hideout should be right through\n"
	.string "here.$"

BLOCK_LumbridgeSwamp_HAM_Text_4:
	.string "…$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_0:
	.string "This is me swamp!$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_1:
	.string "Get out of me swamp!$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_2:
	.string "Slimethighs$"

BATTLE_LumbridgeSwamp_TRAINER_1_Text_3:
	.string "Me do not like you.$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_0:
	.string "Rattle, rattle!$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_1:
	.string "Rattle…$"

BATTLE_LumbridgeSwamp_TRAINER_2_Text_2:
	.string "Brittlebones$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_0:
	.string "Stay still and nobody gets hurt!$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_1:
	.string "My feelings got hurt by your victory.$"

BATTLE_LumbridgeSwamp_TRAINER_3_Text_2:
	.string "CUPHOLDER$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_0:
	.string "Did pink humans say to find me?$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_1:
	.string "Pink humans chase relentless.\p"
	.string "Me scared.$"

BATTLE_LumbridgeSwamp_TRAINER_4_Text_2:
	.string "Grassteeth$"

LumSwampSign_Text_0:
	.string "WARNING: Goblins below!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_0:
	.string "I wouldn't go down there without a light\n"
	.string "source.\p"
	.string "It's dangerous!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_1:
	.string "But…{PAUSE 15}…{PAUSE 15}…\p"
	.string "If you are serious about going down\n"
	.string "there, take this.$"

LUMBRIDGESWAMP_CANDLESELLER_Text_2:
	.string "Be careful down there.$"
