Lumbridge_Swamp_MapScripts::
	.byte 0


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


LumSwampCaveWarning::
	lock
	faceplayer
	msgbox LumSwampCaveWarning_Text_0
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


LumSwampRsnBattle_Text_0:
	.string "You look like a noob!$"

LumSwampRsnBattle_Text_1:
	.string "Maybe I'm the noob..$"

LumSwampRsnBattle_Text_2:
	.string "The mill is up ahead. I heard you can get\n"
	.string "some good wheat there.$"

LumSwampCaveWarning_Text_0:
	.string "I wouldn't go down there without a\n"
	.string "light. It's dangerous!$"

LumSwampRat_Text_0:
	.string "REEEEEE!$"

LumSwampSign_Text_0:
	.string "WARNING: Goblins below!$"
