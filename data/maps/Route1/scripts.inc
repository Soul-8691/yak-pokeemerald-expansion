Route1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto TryMoveCowBlockersRoute1
	return


ChickenBattleScript1::
	lock
	faceplayer
	msgbox ChickenBattleScript1_Text_0
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 7, ITEM_NONE
	dowildbattle
	removeobject 8
	release
	return


ChickenBattleScript2::
	lock
	faceplayer
	msgbox ChickenBattleScript1_Text_0
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 7, ITEM_NONE
	dowildbattle
	removeobject 9
	release
	return


ChickenBattleScript3::
	lock
	faceplayer
	msgbox ChickenBattleScript1_Text_0
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 7, ITEM_NONE
	dowildbattle
	removeobject 10
	release
	return


EvilChickenBattleScript::
	lock
	faceplayer
	msgbox EvilChickenBattleScript_Text_0
	setwildbattle SPECIES_EVILCHICKEN, 15, ITEM_NONE
	dowildbattle
	removeobject 11
	setflag FLAG_EVILCHICKEN_DEFEATED
	return


WartfootBattle::
	trainerbattle_single TRAINER_GOBLIN_1_ROUTE1, WartfootBattle_Text_0, WartfootBattle_Text_1
	msgbox WartfootBattle_Text_1
	release
	return


FrogfaceBattle::
	trainerbattle_single TRAINER_GOBLIN_2_ROUTE1, FrogfaceBattle_Text_0, FrogfaceBattle_Text_1
	msgbox FrogfaceBattle_Text_2
	release
	return


MudbeardBattle::
	trainerbattle_single TRAINER_GOBLIN_3_ROUTE1, MudbeardBattle_Text_0, MudbeardBattle_Text_1
	msgbox MudbeardBattle_Text_2
	release
	return


RsnBattle::
	trainerbattle_single TRAINER_RSN_ROUTE1, RsnBattle_Text_0, RsnBattle_Text_1
	msgbox RsnBattle_Text_2
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


ChickenBattleScript1_Text_0:
	.string "BAWWK$"

EvilChickenBattleScript_Text_0:
	.string "TIME TO DIE!$"

WartfootBattle_Text_0:
	.string "Brown armor best!$"

WartfootBattle_Text_1:
	.string "Um.. my brown armor in the wash$"

FrogfaceBattle_Text_0:
	.string "You ugly!$"

FrogfaceBattle_Text_1:
	.string "You still ugly!$"

FrogfaceBattle_Text_2:
	.string "you really really ugly$"

MudbeardBattle_Text_0:
	.string "Go away smelly human!$"

MudbeardBattle_Text_1:
	.string "Leave me alone!$"

MudbeardBattle_Text_2:
	.string "Smelly human!$"

RsnBattle_Text_0:
	.string "You look like a noob!$"

RsnBattle_Text_1:
	.string "Maybe I'm the noob..$"

RsnBattle_Text_2:
	.string "The mill is up ahead. I heard you can get\n"
	.string "some good wheat there.$"

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

Route1FarmerBlocking_Text_0:
	.string "I can't seem to control these dang cows!$"

Route1FarmerBlocking_Text_1:
	.string "I finally got my cows out of the way.$"
