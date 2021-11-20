Route12_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route12_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


Gillie_Groats::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	goto_if_eq Gillie_Groats_1
	lock
	faceplayer
	msgbox Gillie_Groats_Text_4
	pokemart GroatsShop
	release
	end

Gillie_Groats_1:
	checkitem ITEM_TOP_QUALITY_MILK, 1
	compare VAR_RESULT, 0
	goto_if_eq Gillie_Groats_4
	lock
	faceplayer
	msgbox Gillie_Groats_Text_4
	pokemart GroatsShop
	release
	end

Gillie_Groats_4:
	lock
	faceplayer
	namebox Gillie_Groats_Text_0
	msgbox Gillie_Groats_Text_1
	applymovement 23, ROUTE12_GILLIEGROATS_1
	waitmovement 0
	msgbox Gillie_Groats_Text_2
	giveitem ITEM_TOP_QUALITY_MILK
	hidenamebox
	msgbox Gillie_Groats_Text_3
	release
	end


ROUTE12_GILLIEGROATS_1:
	emote_question_mark
	step_end

    .align 2
GroatsShop:
	.2byte ITEM_MILK_BUCKET
    .2byte ITEM_EMPTY_BUCKET
	.2byte ITEM_NONE

    release
    end

NPC_DAIRYCOW::
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, 0
	namebox NPC_DAIRYCOW_Text_0
	msgbox NPC_DAIRYCOW_Text_1
	hidenamebox
	msgbox NPC_DAIRYCOW_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DAIRYCOW_2
	hidenamebox
	release
	end

NPC_DAIRYCOW_2:
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DAIRYCOW_4
	msgbox NPC_DAIRYCOW_Text_4
	release
	end

NPC_DAIRYCOW_4:
	msgbox NPC_DAIRYCOW_Text_3
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_MILK_BUCKET, 1
	release
	end


NPC_LUMBRIDGE_CHICKEN::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	goto_if_eq NPC_LUMBRIDGE_CHICKEN_1
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_CHICKEN_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_5
	waitmoncry
	hidenamebox
	release
	end

NPC_LUMBRIDGE_CHICKEN_1:
	checkitem ITEM_SUPER_LARGE_EGG, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_LUMBRIDGE_CHICKEN_4
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_CHICKEN_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_5
	waitmoncry
	hidenamebox
	release
	end

NPC_LUMBRIDGE_CHICKEN_4:
	lock
	faceplayer
	namebox NPC_LUMBRIDGE_CHICKEN_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_1
	waitmoncry
	hidenamebox
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_2
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_3
	closemessage
	playmoncry SPECIES_TORCHIC, 0
	waitmoncry
	msgbox NPC_LUMBRIDGE_CHICKEN_Text_4
	giveitem ITEM_SUPER_LARGE_EGG
	release
	end


SIGN_ROUTE12::
	lock
	msgbox SIGN_ROUTE12_Text_0
	release
	end


BLOCK_Route12_Farmer::
	lock
	faceplayer
	msgbox BLOCK_Route12_Farmer_Text_0
	release
	end


Cow_Battle::
	lock
	faceplayer
	msgbox Cow_Battle_Text_0
	setwildbattle SPECIES_COW, 7, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq Cow_Battle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq Cow_Battle_1
	lock
	msgbox Cow_Battle_Text_0
	release
	return

Cow_Battle_1:
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne Cow_Battle_7
	msgbox Cow_Battle_Text_1
Cow_Battle_6:
	release
	return

Cow_Battle_7:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_MILK_BUCKET, 1
	goto Cow_Battle_6


ChickenBattle::
	lock
	faceplayer
	msgbox ChickenBattle_Text_0
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 5, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ChickenBattle_1
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ChickenBattle_1
	return

ChickenBattle_1:
	giveitem ITEM_EGG
	release
	return


GoblinBattle4::
	trainerbattle_single TRAINER_GOBLIN_4_ROUTE12, GoblinBattle4_Text_0, GoblinBattle4_Text_1
	msgbox GoblinBattle4_Text_1
	release
	return


GoblinBattle5::
	trainerbattle_single TRAINER_GOBLIN_5_ROUTE12, GoblinBattle5_Text_0, GoblinBattle5_Text_1
	msgbox GoblinBattle5_Text_1
	release
	return


GoblinBattle6::
	trainerbattle_single TRAINER_GOBLIN_6_ROUTE12, GoblinBattle6_Text_0, GoblinBattle6_Text_1
	msgbox GoblinBattle6_Text_1
	release
	return


GoblinBattle7::
	trainerbattle_single TRAINER_GOBLIN_7_ROUTE12, GoblinBattle7_Text_0, GoblinBattle7_Text_1
	msgbox GoblinBattle7_Text_1
	release
	return


RsnBattleRoute12::
	trainerbattle_single TRAINER_RSN_ROUTE12, RsnBattleRoute12_Text_0, RsnBattleRoute12_Text_1
	msgbox RsnBattleRoute12_Text_1
	release
	return


Route12CookingGoblin::
	msgbox Route12CookingGoblin_Text_0
	release
	return


Route12Farmer::
	faceplayer
	msgbox Route12Farmer_Text_0
	release
	return


Route12MilkLady::
	faceplayer
	msgbox Route12MilkLady_Text_0
	release
	return


Gillie_Groats_Text_0:
	.string "Gillie Groats$"

Gillie_Groats_Text_1:
	.string "Hello and welcome to the Groat's Milk\n"
	.string "Farm!\p"
	.string "What can I do for you?$"

Gillie_Groats_Text_2:
	.string "What's that?\n"
	.string "The cook needs some milk?\p"
	.string "I'll give you some for free this time but\n"
	.string "next time you'll have to buy some.$"

Gillie_Groats_Text_3:
	.string "Say hello to the cook for me!$"

Gillie_Groats_Text_4:
	.string "Hello and welcome to the Groat's Milk\n"
	.string "Farm!\p"
	.string "Would you like to buy some Milk?$"

NPC_DAIRYCOW_Text_0:
	.string "Dairy Cow$"

NPC_DAIRYCOW_Text_1:
	.string "Mooo!$"

NPC_DAIRYCOW_Text_2:
	.string "Would you like to milk the cow?$"

NPC_DAIRYCOW_Text_3:
	.string "You squeeze some milk into your empty\n"
	.string "bucket.$"

NPC_DAIRYCOW_Text_4:
	.string "You squeeze the milk into your\n"
	.string "imaginary bucket.\p"
	.string "...\p"
	.string "Nothing interesting happened.$"

NPC_LUMBRIDGE_CHICKEN_Text_0:
	.string "Chicken$"

NPC_LUMBRIDGE_CHICKEN_Text_1:
	.string "Bwak Bwak!$"

NPC_LUMBRIDGE_CHICKEN_Text_2:
	.string "You get into a staring contest with the\n"
	.string "chicken..$"

NPC_LUMBRIDGE_CHICKEN_Text_3:
	.string "{PAUSE 15}… {PAUSE 15}… {PAUSE 15}… {PAUSE 15}{PLAY_SE SE_PIN}!$"

NPC_LUMBRIDGE_CHICKEN_Text_4:
	.string "The chicken laid an egg!$"

NPC_LUMBRIDGE_CHICKEN_Text_5:
	.string "Bwwaak!$"

SIGN_ROUTE12_Text_0:
	.string "NORTH to VARROCK\p"
	.string "WEST to LUMBRIDGE\p"
	.string "EAST to AL KHAIRD$"

BLOCK_Route12_Farmer_Text_0:
	.string "Urgh, I wish the goblins would stop\n"
	.string "messing with my sheep!$"

Cow_Battle_Text_0:
	.string "MOOOO$"

Cow_Battle_Text_1:
	.string "If I had an empty bucket I could milk\n"
	.string "this cow.$"

ChickenBattle_Text_0:
	.string "BAWK$"

GoblinBattle4_Text_0:
	.string "This place goblin place.\nHuman go home.$"

GoblinBattle4_Text_1:
	.string "Human strong.\n"
	.string "This now Goblin and human home.$"

GoblinBattle5_Text_0:
	.string "Human weak.\n"
	.string "Feethands show why.$"

GoblinBattle5_Text_1:
	.string "Feethands weak.\n"
	.string "Human show Feethands why.$"

GoblinBattle6_Text_0:
	.string "Human homes makes for weak monster.\p"
	.string "See strong monster here.$"

GoblinBattle6_Text_1:
	.string "Strong monsters in human homes it\n"
	.string "seems.$"

GoblinBattle7_Text_0:
	.string "Big high war god say human go home.$"

GoblinBattle7_Text_1:
	.string "Big high war god calls for rematch.\p"
	.string "Later...\n"
	.string "Much later...$"

RsnBattleRoute12_Text_0:
	.string "You look like a noob, even I could beat\n"
	.string "you!$"

RsnBattleRoute12_Text_1:
	.string "Well drat.\p"
	.string "Maybe I should've looked for rarer\n"
	.string "monsters around here first.$"

Route12CookingGoblin_Text_0:
	.string "Go away human.\pGoblin cooking.$"

Route12Farmer_Text_0:
	.string "Here you can plant crops and harvest\n"
	.string "them later!$"

Route12MilkLady_Text_0:
	.string "If you need milk feel free to milk the\n"
	.string "cows.\p"
	.string "Make sure you have an empty bucket!$"
