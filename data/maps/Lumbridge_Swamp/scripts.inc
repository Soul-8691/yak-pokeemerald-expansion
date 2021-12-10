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

LumSwampRsnBattle::
	trainerbattle_single TRAINER_RSN_LUM_SWAMP, LumSwampRsnBattle_Text_0, LumSwampRsnBattle_Text_1
	msgbox LumSwampRsnBattle_Text_2
	release
	return


LumSwampSkeletonBattle::
	trainerbattle_single TRAINER_SKELETON_LUM_SWAMP, LumSwampRsnBattle_Text_0, LumSwampRsnBattle_Text_1
	msgbox LumSwampRsnBattle_Text_2
	release
	return


LumSwampMuggerBattle::
	trainerbattle_single TRAINER_MUGGER_LUM_SWAMP, LumSwampRsnBattle_Text_0, LumSwampRsnBattle_Text_1
	msgbox LumSwampRsnBattle_Text_2
	release
	return


LumSwampRat::
	lock
	faceplayer
	msgbox LumSwampRat_Text_0
	release
	return


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
	release
	end

	release
	end

LUMBRIDGESWAMP_CANDLESELLER_2:
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_1
	giveitem ITEM_LANTERN
	msgbox LUMBRIDGESWAMP_CANDLESELLER_Text_2
	release
	end


BLOCK_LumbridgeSwamp_HAM_Text_0:
	.string "Pink Man$"

BLOCK_LumbridgeSwamp_HAM_Text_1:
	.string "Oh come on!\p"
	.string "Newcommer map, more like trash map!$"

BLOCK_LumbridgeSwamp_HAM_Text_2:
	.string "Pink Girl$"

BLOCK_LumbridgeSwamp_HAM_Text_3:
	.string "You are looking at it upside down.\p"
	.string "See the hideout should be right through\n"
	.string "here.$"

BLOCK_LumbridgeSwamp_HAM_Text_4:
	.string ".....$"

LumSwampRsnBattle_Text_0:
	.string "You look like a noob!$"

LumSwampRsnBattle_Text_1:
	.string "Maybe I'm the noob..$"

LumSwampRsnBattle_Text_2:
	.string "The mill is up ahead. I heard you can get\n"
	.string "some good wheat there.$"

LumSwampRat_Text_0:
	.string "REEEEEE!$"

LumSwampSign_Text_0:
	.string "WARNING: Goblins below!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_0:
	.string "I wouldn't go down there without a light\n"
	.string "source.\p"
	.string "It's dangerous!$"

LUMBRIDGESWAMP_CANDLESELLER_Text_1:
	.string "Look.. If you are serious about going\n"
	.string "down there, take this.$"

LUMBRIDGESWAMP_CANDLESELLER_Text_2:
	.string "Be careful down there.$"
