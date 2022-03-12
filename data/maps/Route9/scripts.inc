Route9_MapScripts::
	.byte 0


ROUTE9_RAPTOR::
	faceplayer
	namebox ROUTE9_RAPTOR_Text_0
	msgbox ROUTE9_RAPTOR_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE9_CUPHOLDER_1::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE9_CUPHOLDER_2::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE9_CUPHOLDER_3::
	finditem ITEM_CABBAGE
	end


BATTLE_ROUTE9_GUTHIX_WIZARD::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_GUTHIX_WIZARD_Text_0, BATTLE_ROUTE9_GUTHIX_WIZARD_Text_1
	msgbox BATTLE_ROUTE9_GUTHIX_WIZARD_Text_2
	release
	return


BATTLE_ROUTE9_MINER_1::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MINER_1_Text_0, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_1
	release
	return


BATTLE_ROUTE9_MINER_2::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MINER_1_Text_1, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_1
	release
	return


BATTLE_ROUTE9_GOBLIN_1::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MINER_1_Text_1, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_1
	release
	return


BATTLE_ROUTE9_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MINER_1_Text_1, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_1
	release
	return


BATTLE_ROUTE9_GOBLIN_3::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MINER_1_Text_1, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_1
	release
	return


BATTLE_ROUTE9_GOBLIN_4::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MINER_1_Text_1, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_1
	release
	return


BATTLE_ROUTE9_MUGGER::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_MUGGER_Text_0, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MUGGER_Text_1
	release
	return


BATTLE_ROUTE9_CHEF::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE9_CHEF_Text_0, BATTLE_ROUTE9_CHEF_Text_1
	msgbox BATTLE_ROUTE9_CHEF_Text_2
	release
	return


ROUTE9_RAPTOR_Text_0:
	.string "RAPTOR$"

ROUTE9_RAPTOR_Text_1:
	.string "Beware!\p"
	.string "A massive Dragon lurks within the\n"
	.string "depths of these caves.$"

BATTLE_ROUTE9_GUTHIX_WIZARD_Text_0:
	.string "For Guthix!$"

BATTLE_ROUTE9_GUTHIX_WIZARD_Text_1:
	.string "FOR GUUUUTTTHHIIXXX!$"

BATTLE_ROUTE9_GUTHIX_WIZARD_Text_2:
	.string "Wait… Are you telling me Guthix does not\n"
	.string "want me jumping out of nowhere to\l"
	.string "scare people who are about to pick up\l"
	.string "treasure?$"

BATTLE_ROUTE9_MINER_1_Text_0:
	.string "This is Hobgoblin beach!\p"
	.string "No humans allowed!$"

BATTLE_ROUTE9_MINER_1_Text_1:
	.string "$"

BATTLE_ROUTE9_MUGGER_Text_0:
	.string "I bet you are one of those noobs going\n"
	.string "to those house parties.\p"
	.string "This will be easy!$"

BATTLE_ROUTE9_MUGGER_Text_1:
	.string "So much traffic comes through here\n"
	.string "when there is a house party on.\p"
	.string "I can loot so much stuff from the\n"
	.string "noobs.$"

BATTLE_ROUTE9_CHEF_Text_0:
	.string "They say there is a massive slime\n"
	.string "monster living in Rimmington Well.$"

BATTLE_ROUTE9_CHEF_Text_1:
	.string "Have you ever wondered how slimes\n"
	.string "breed?$"

BATTLE_ROUTE9_CHEF_Text_2:
	.string "Slimes are pretty neat, I use them in my\n"
	.string "cooking sometimes.$"
