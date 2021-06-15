Lumbridge_Castle_1_MapScripts::
	.byte 0


Lumbridge_Castle_Hans::
	lock
	faceplayer
	namebox Lumbridge_Castle_Hans_Text_0
	msgbox Lumbridge_Castle_Hans_Text_1
	hidenamebox
	release
	end


Lumbridge_Castle_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC1_Text_0
	release
	end


Lumbridge_Castle_NPC2::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC2_Text_0
	release
	end


Lumbridge_Castle_NPC3::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC3_Text_0
	release
	end


Lumbridge_Castle_NPC4::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC4_Text_0
	release
	end


Lumbridge_Castle_NPC5::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC5_Text_0
	release
	end


Lumbridge_Castle_NPC6::
	lock
	faceplayer
	msgbox Lumbridge_Castle_NPC6_Text_0
	release
	end


Hans::
	msgbox Hans_Text_0
	release
	return


Man1LumbridgeCastle::
	msgbox Man1LumbridgeCastle_Text_0
	release
	return


Woman1LumbridgeCastle::
	msgbox Woman1LumbridgeCastle_Text_0
	release
	return


ImpBattleLumbridge::
	setwildbattle SPECIES_IMP, 5, ITEM_NONE
	msgbox ImpBattleLumbridge_Text_0
	dowildbattle
	removeobject VAR_LAST_TALKED
	release
	return


LumbridgeGym1::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM1, LumbridgeGym1_Text_0, LumbridgeGym1_Text_1
	msgbox LumbridgeGym1_Text_2
	release
	return


LumbridgeGym2::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM2, LumbridgeGym2_Text_0, LumbridgeGym2_Text_1
	msgbox LumbridgeGym2_Text_2
	release
	return


LumbridgeGym3::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM3, LumbridgeGym3_Text_0, LumbridgeGym3_Text_1
	msgbox LumbridgeGym3_Text_2
	release
	return


LumbridgeGym4::
	trainerbattle_single TRAINER_LUMBRIDGE_GYM4, LumbridgeGym4_Text_0, LumbridgeGym4_Text_1
	msgbox LumbridgeGym4_Text_2
	release
	return


Lumbridge_Castle_Hans_Text_0:
	.string "Hans$"

Lumbridge_Castle_Hans_Text_1:
	.string "I've been patrolling this castle for\n"
	.string "years!\p"
	.string "I've seen many things in my life time.$"

Lumbridge_Castle_NPC1_Text_0:
	.string "There is no way to avoid combat in a\n"
	.string "battle.\p"
	.string "But you can run from wild battles.$"

Lumbridge_Castle_NPC2_Text_0:
	.string "You need money for more pouches?\p"
	.string "Sorry I am not doubling money.$"

Lumbridge_Castle_NPC3_Text_0:
	.string "The Duke holds power over Lumbridge.\p"
	.string "But personally I dont think he is that\n"
	.string "good of a ruler.$"

Lumbridge_Castle_NPC4_Text_0:
	.string "The best way to find your enemies type\n"
	.string "is to just use moves.\p"
	.string "Identify their weakness!$"

Lumbridge_Castle_NPC5_Text_0:
	.string "I need flour from the mill but it is such\n"
	.string "a long trip.$"

Lumbridge_Castle_NPC6_Text_0:
	.string "The Duke is sort of like the regional\n"
	.string "champion around here.\p"
	.string "Better stay on his good side.$"

Hans_Text_0:
	.string "Cupholder$"

Man1LumbridgeCastle_Text_0:
	.string "I love the castle!$"

Woman1LumbridgeCastle_Text_0:
	.string "I don't remember why I came here$"

ImpBattleLumbridge_Text_0:
	.string "EEEEE$"

LumbridgeGym1_Text_0:
	.string "You think you're ready to face the\n"
	.string "duke? You're not!$"

LumbridgeGym1_Text_1:
	.string "You are ready to face the duke after\n"
	.string "all it seems.$"

LumbridgeGym1_Text_2:
	.string "You fought well. I should train harder.$"

LumbridgeGym2_Text_0:
	.string "Feast your eyes upon my evolved\n"
	.string "monster!$"

LumbridgeGym2_Text_1:
	.string "Maybe I should have evolved it\n"
	.string "differently with a rune after all.$"

LumbridgeGym2_Text_2:
	.string "Next time I'll use a rune.$"

LumbridgeGym3_Text_0:
	.string "The Duke of Lumbridge is the strongest\n"
	.string "man this side of the Lum.$"

LumbridgeGym3_Text_1:
	.string "Then again this side of the Lum is\n"
	.string "pretty big.$"

LumbridgeGym3_Text_2:
	.string "Maybe I should train on the other side\n"
	.string "of the river.$"

LumbridgeGym4_Text_0:
	.string "Ready to face the Duke himself? Let us\n"
	.string "check.$"

LumbridgeGym4_Text_1:
	.string "Sure. You pass. Barely.$"

LumbridgeGym4_Text_2:
	.string "It was a close fight.$"
