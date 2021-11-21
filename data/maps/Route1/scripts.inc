Route1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TryMoveNpcsRoute1
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route1WarpCheck
	.byte 0


TryMoveNpcsRoute1::
	goto_if_set FLAG_BADGE01_GET, TryMoveNpcsRoute1_2
TryMoveNpcsRoute1_1:
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 6
	goto_if_ne TryMoveNpcsRoute1_4
	return

TryMoveNpcsRoute1_2:
	setobjectxyperm 4, 42, 10
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 12, 37, 12
	setobjectxyperm 13, 43, 12
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	goto TryMoveNpcsRoute1_1

TryMoveNpcsRoute1_4:
	removeobject 22
	setflag FLAG_TEMP_5
	removeobject 23
	setflag FLAG_TEMP_4
	return


Route1WarpCheck::
	map_script_2 VAR_TEMP_1, 0, TryMoveNpcsRoute1
	return


NPC_DUCK::
	lock
	faceplayer
	playmoncry SPECIES_PSYDUCK, 0
	msgbox NPC_DUCK_Text_0
	waitmoncry
	release
	end


NPC_RAT::
	lock
	faceplayer
	playmoncry SPECIES_RATTATA, 0
	msgbox NPC_RAT_Text_0
	waitmoncry
	release
	end


NPC_SHEEP::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, 0
	msgbox NPC_SHEEP_Text_0
	waitmoncry
	release
	end


NPC_COW::
	lock
	faceplayer
	playmoncry SPECIES_MILTANK, 0
	msgbox NPC_COW_Text_0
	waitmoncry
	release
	end


SIGN_ROUTE1_1::
	lock
	msgbox SIGN_ROUTE1_1_Text_0
	release
	end


SIGN_ROUTE1_2::
	lock
	msgbox SIGN_ROUTE1_2_Text_0
	release
	end


SIGN_ROUTE1_3::
	lock
	msgbox SIGN_ROUTE1_3_Text_0
	release
	end


NPC_FISHERMAN_1::
	lock
	faceplayer
	msgbox NPC_FISHERMAN_1_Text_0
	checkitem ITEM_SMALL_NET, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_FISHERMAN_1_2
	release
	end

	release
	end

NPC_FISHERMAN_1_2:
	msgbox NPC_FISHERMAN_1_Text_1
	giveitem ITEM_SMALL_NET
	msgbox NPC_FISHERMAN_1_Text_2
	release
	end


BLOCK_ROUTE1_FARMER::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE01_GET, BLOCK_ROUTE1_FARMER_2
	msgbox BLOCK_ROUTE1_FARMER_Text_1
BLOCK_ROUTE1_FARMER_1:
	release
	end

BLOCK_ROUTE1_FARMER_2:
	msgbox BLOCK_ROUTE1_FARMER_Text_0
	goto BLOCK_ROUTE1_FARMER_1


THEIF_ROUTE_1::
	lock
	faceplayer
	msgbox THEIF_ROUTE_1_Text_0
	release
	end


Wartfoot_Route1_Battle::
	trainerbattle_single TRAINER_GOBLIN_1_ROUTE1, Wartfoot_Route1_Battle_Text_0, Wartfoot_Route1_Battle_Text_1
	namebox Wartfoot_Route1_Battle_Text_2
	msgbox Wartfoot_Route1_Battle_Text_3
	hidenamebox
	release
	end


Frogface_Route1_Battle::
	trainerbattle_single TRAINER_GOBLIN_2_ROUTE1, Frogface_Route1_Battle_Text_0, Frogface_Route1_Battle_Text_1
	namebox Frogface_Route1_Battle_Text_2
	msgbox Frogface_Route1_Battle_Text_3
	hidenamebox
	release
	end


Trainer1_Route1_Battle::
	trainerbattle_single TRAINER_RSN_ROUTE1, Trainer1_Route1_Battle_Text_0, Trainer1_Route1_Battle_Text_1
	namebox Trainer1_Route1_Battle_Text_2
	msgbox Trainer1_Route1_Battle_Text_3
	hidenamebox
	release
	end


MudbeardBattle::
	trainerbattle_single TRAINER_GOBLIN_3_ROUTE1, MudbeardBattle_Text_0, MudbeardBattle_Text_1
	msgbox MudbeardBattle_Text_2
	release
	return


Route1FarmerBattle::
	trainerbattle_single TRAINER_FARMER_ROUTE1, Route1FarmerBattle_Text_0, Route1FarmerBattle_Text_1
	msgbox Route1FarmerBattle_Text_1
	release
	return


ChickenBattleScript1::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, 0
	msgbox ChickenBattleScript1_Text_0
	waitmoncry
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 4, ITEM_NONE
	dowildbattle
	removeobject 8
	release
	return


ChickenBattleScript2::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, 0
	msgbox ChickenBattleScript1_Text_0
	waitmoncry
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 4, ITEM_NONE
	dowildbattle
	removeobject 9
	release
	return


ChickenBattleScript3::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, 0
	msgbox ChickenBattleScript1_Text_0
	waitmoncry
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 4, ITEM_NONE
	dowildbattle
	removeobject 10
	release
	return


EvilChickenBattleScript::
	lock
	faceplayer
	playmoncry SPECIES_COMBUSKEN, 0
	msgbox EvilChickenBattleScript_Text_0
	waitmoncry
	setwildbattle SPECIES_EVILCHICKEN, 10, ITEM_NONE
	dowildbattle
	removeobject 11
	setflag FLAG_EVILCHICKEN_DEFEATED
	return


Route1Man::
	msgbox Route1Man_Text_0
	release
	return


Route1Woman::
	msgbox Route1Woman_Text_0
	release
	return


ArianeChaseHamEvent7::
	lockall
	namebox ArianeChaseHamEvent7_Text_0
	msgbox ArianeChaseHamEvent7_Text_1
	hidenamebox
	namebox ArianeChaseHamEvent7_Text_2
	msgbox ArianeChaseHamEvent7_Text_3
	hidenamebox
	namebox ArianeChaseHamEvent7_Text_4
	msgbox ArianeChaseHamEvent7_Text_5
	hidenamebox
	msgbox ArianeChaseHamEvent7_Text_6
	namebox ArianeChaseHamEvent7_Text_0
	msgbox ArianeChaseHamEvent7_Text_7
	hidenamebox
	release
	lockall
	applymovement 23, HamMemberRuns3
	waitmovement 0
	applymovement 5, ErnestShoved
	waitmovement 0
	namebox ArianeChaseHamEvent7_Text_2
	msgbox ArianeChaseHamEvent7_Text_8
	hidenamebox
	release
	lockall
	applymovement 5, ErnestMoveBack
	namebox ArianeChaseHamEvent7_Text_9
	msgbox ArianeChaseHamEvent7_Text_10
	hidenamebox
	namebox ArianeChaseHamEvent7_Text_0
	msgbox ArianeChaseHamEvent7_Text_11
	hidenamebox
	release
	lockall
	applymovement 23, HamMemberRuns4
	waitmovement 0
	applymovement 22, ArianeRunAfterHam11
	waitmovement 0
	removeobject 23
	setflag FLAG_TEMP_4
	removeobject 22
	setflag FLAG_TEMP_5
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	return


HamMemberRuns3:
	walk_fast_left
	step_end

ErnestShoved:
	slide_left
	face_right
	step_end

ErnestMoveBack:
	walk_right
	face_up
	step_end

HamMemberRuns4:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ArianeRunAfterHam11:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

NPC_DUCK_Text_0:
	.string "Quack!$"

NPC_RAT_Text_0:
	.string "SKREEK!$"

NPC_SHEEP_Text_0:
	.string "Baaa!$"

NPC_COW_Text_0:
	.string "Mooo!$"

SIGN_ROUTE1_1_Text_0:
	.string "Fred's Farm.$"

SIGN_ROUTE1_2_Text_0:
	.string "NORTH to MILL LANE MILL\p"
	.string "WEST to DRAYNOR\p"
	.string "EAST to LUMBRIDGE$"

SIGN_ROUTE1_3_Text_0:
	.string "NORTH to DRAYNOR MANOR\p"
	.string "WEST to FALADOR\p"
	.string "EAST to LUMBRIDGE\p"
	.string "SOUTH to DRAYNOR$"

NPC_FISHERMAN_1_Text_0:
	.string "I love to fish in this pond.\p"
	.string "It is so peaceful, with the ducks that\n"
	.string "keep me company.\p"
	.string "I cannot imagine anything bad to\n"
	.string "happen here.$"

NPC_FISHERMAN_1_Text_1:
	.string "You seem like someone who would also\n"
	.string "enjoy fishing in this pond.\p"
	.string "Here take this!$"

NPC_FISHERMAN_1_Text_2:
	.string "It is only a small net but I'm sure there\n"
	.string "are plenty of things you could fish up\l"
	.string "with it!$"

BLOCK_ROUTE1_FARMER_Text_0:
	.string "Some Goblins scared my cows out of\n"
	.string "their pens.\p"
	.string "Now I'm struggling to get them back in!$"

BLOCK_ROUTE1_FARMER_Text_1:
	.string "I finally got my Cows out of the way.$"

THEIF_ROUTE_1_Text_0:
	.string "Nothing to see here kid.\p"
	.string "SHOOO!$"

Wartfoot_Route1_Battle_Text_0:
	.string "Brown armour best!$"

Wartfoot_Route1_Battle_Text_1:
	.string "Um.. My brown armour in the wash.$"

Wartfoot_Route1_Battle_Text_2:
	.string "WartFoot$"

Wartfoot_Route1_Battle_Text_3:
	.string "Me like brown armour, but now it dirty.$"

Frogface_Route1_Battle_Text_0:
	.string "You ugly!$"

Frogface_Route1_Battle_Text_1:
	.string "You still ugly!$"

Frogface_Route1_Battle_Text_2:
	.string "FrogFace$"

Frogface_Route1_Battle_Text_3:
	.string "You really, really ugly!$"

Trainer1_Route1_Battle_Text_0:
	.string "You look like a noob!$"

Trainer1_Route1_Battle_Text_1:
	.string "Maybe I'm the noob..$"

Trainer1_Route1_Battle_Text_2:
	.string "RSN$"

Trainer1_Route1_Battle_Text_3:
	.string "The mill is up ahead.\p"
	.string "I heard you can get some good flour\n"
	.string "there.$"

MudbeardBattle_Text_0:
	.string "Go away smelly human!$"

MudbeardBattle_Text_1:
	.string "Leave me alone!$"

MudbeardBattle_Text_2:
	.string "Smelly human!$"

Route1FarmerBattle_Text_0:
	.string "Cor blimey what are ye doing on me\n"
	.string "lands!$"

Route1FarmerBattle_Text_1:
	.string "Its not really my lands yet.$"

ChickenBattleScript1_Text_0:
	.string "BWAK!$"

EvilChickenBattleScript_Text_0:
	.string "BWAWWWK!\p"
	.string "BEGONE {PLAYER}!$"

Route1Man_Text_0:
	.string "Isn't my GF great?$"

Route1Woman_Text_0:
	.string "I'm actually a guy.$"

ArianeChaseHamEvent7_Text_0:
	.string "H.A.M. member$"

ArianeChaseHamEvent7_Text_1:
	.string "Get out of my way! you're blocking the\n"
	.string "path!$"

ArianeChaseHamEvent7_Text_2:
	.string "Ernest$"

ArianeChaseHamEvent7_Text_3:
	.string "I'm so glad im not a chicken anymore..\n"
	.string "that was cluckin scary.$"

ArianeChaseHamEvent7_Text_4:
	.string "Veronica$"

ArianeChaseHamEvent7_Text_5:
	.string "Lets just avoid that creepy manor from\n"
	.string "now on.$"

ArianeChaseHamEvent7_Text_6:
	.string "Kissing noises$"

ArianeChaseHamEvent7_Text_7:
	.string "I SAID GET OUT OF THE WAY!!$"

ArianeChaseHamEvent7_Text_8:
	.string "Well that was uncalled for!$"

ArianeChaseHamEvent7_Text_9:
	.string "Ariane$"

ArianeChaseHamEvent7_Text_10:
	.string "Stop theif! There is nowhere left for\n"
	.string "you to run!$"

ArianeChaseHamEvent7_Text_11:
	.string "UGH! This dumb couple keeps blocking my\n"
	.string "way.. but there is still the manor!$"
