Route1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto TryMoveCowBlockersRoute1
	return


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


Route1FarmerBlocking::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE01_GET, Route1FarmerBlocking_2
	msgbox Route1FarmerBlocking_Text_1
Route1FarmerBlocking_1:
	release
	return

Route1FarmerBlocking_2:
	msgbox Route1FarmerBlocking_Text_0
	goto Route1FarmerBlocking_1


TryMoveCowBlockersRoute1::
	goto_if_set FLAG_BADGE01_GET, TryMoveCowBlockersRoute1_1
	return

TryMoveCowBlockersRoute1_1:
	setobjectxyperm 4, 42, 9
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 12, 38, 9
	setobjectxyperm 13, 36, 11
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	return


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


Route1Man::
	msgbox Route1Man_Text_0
	release
	return


Route1Woman::
	msgbox Route1Woman_Text_0
	release
	return


GenericCowMoo::
	msgbox GenericCowMoo_Text_0
	release
	return


NPC_SHEEP_Text_0:
	.string "BAAA.$"

NPC_COW_Text_0:
	.string "MOOO!$"

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

Route1FarmerBlocking_Text_0:
	.string "I can't seem to control these dang Cows!$"

Route1FarmerBlocking_Text_1:
	.string "I finally got my Cows out of the way.$"

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

ChickenBattleScript1_Text_0:
	.string "BWAK!$"

EvilChickenBattleScript_Text_0:
	.string "BWAWWWK!\p"
	.string "BEGONE {PLAYER}!$"

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

Route1Man_Text_0:
	.string "Isn't my GF great?$"

Route1Woman_Text_0:
	.string "I'm actually a guy.$"

GenericCowMoo_Text_0:
	.string "MOOO$"
