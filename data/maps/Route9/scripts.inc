Route9_MapScripts::
	.byte 0


ROUTE9_SIGNPOST::
	msgbox ROUTE9_SIGNPOST_Text_0
	closemessage
	end


ROUTE9_RAPTOR::
	faceplayer
	namebox ROUTE9_RAPTOR_Text_0
	msgbox ROUTE9_RAPTOR_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE9_CABBAGE::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE9_MUD_RUNE::
	finditem ITEM_MUD_RUNE
	end


ITEM_ROUTE9_TM54_MUD_BOMB::
	finditem ITEM_TM54_MUD_BOMB
	end


BATTLE_ROUTE9_GUTHIX_WIZARD::
	trainerbattle_single TRAINER_ROUTE9_GUTHIX_WIZARD, BATTLE_ROUTE9_GUTHIX_WIZARD_Text_0, BATTLE_ROUTE9_GUTHIX_WIZARD_Text_1
	msgbox BATTLE_ROUTE9_GUTHIX_WIZARD_Text_2
	release
	return


BATTLE_ROUTE9_MINER_1::
	trainerbattle_single TRAINER_ROUTE9_MINER_1, BATTLE_ROUTE9_MINER_1_Text_0, BATTLE_ROUTE9_MINER_1_Text_1
	msgbox BATTLE_ROUTE9_MINER_1_Text_2
	release
	return


BATTLE_ROUTE9_MINER_2::
	trainerbattle_single TRAINER_ROUTE9_MINER_2, BATTLE_ROUTE9_MINER_2_Text_0, BATTLE_ROUTE9_MINER_2_Text_1
	msgbox BATTLE_ROUTE9_MINER_2_Text_2
	release
	return


BATTLE_ROUTE9_GOBLIN_1::
	trainerbattle_single TRAINER_ROUTE9_GOBLIN_1, BATTLE_ROUTE9_GOBLIN_1_Text_0, BATTLE_ROUTE9_GOBLIN_1_Text_1
	namebox BATTLE_ROUTE9_GOBLIN_1_Text_2
	msgbox BATTLE_ROUTE9_GOBLIN_1_Text_1
	hidenamebox
	release
	return


BATTLE_ROUTE9_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE9_GOBLIN_2, BATTLE_ROUTE9_GOBLIN_2_Text_0, BATTLE_ROUTE9_GOBLIN_2_Text_1
	msgbox BATTLE_ROUTE9_GOBLIN_2_Text_1
	release
	return


BATTLE_ROUTE9_GOBLIN_3::
	trainerbattle_single TRAINER_ROUTE9_GOBLIN_3, BATTLE_ROUTE9_GOBLIN_3_Text_0, BATTLE_ROUTE9_GOBLIN_3_Text_1
	namebox BATTLE_ROUTE9_GOBLIN_3_Text_2
	msgbox BATTLE_ROUTE9_GOBLIN_3_Text_1
	hidenamebox
	release
	return


BATTLE_ROUTE9_GOBLIN_4::
	trainerbattle_single TRAINER_ROUTE9_GOBLIN_4, BATTLE_ROUTE9_GOBLIN_4_Text_0, BATTLE_ROUTE9_GOBLIN_4_Text_1
	msgbox BATTLE_ROUTE9_GOBLIN_4_Text_1
	release
	return


BATTLE_ROUTE9_MUGGER::
	trainerbattle_single TRAINER_ROUTE9_MUGGER, BATTLE_ROUTE9_MUGGER_Text_0, BATTLE_ROUTE9_MUGGER_Text_1
	msgbox BATTLE_ROUTE9_MUGGER_Text_2
	release
	return


BATTLE_ROUTE9_CHEF::
	trainerbattle_single TRAINER_ROUTE9_CHEF, BATTLE_ROUTE9_CHEF_Text_0, BATTLE_ROUTE9_CHEF_Text_1
	msgbox BATTLE_ROUTE9_CHEF_Text_2
	release
	return


ROUTE9_SIGNPOST_Text_0:
	.string "Rimmington Mines.\p"
	.string "Beware of recent earthquakes.$"

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
	.string "Hey buddy back off!\p"
	.string "Can't you see I'm minin' ere!$"

BATTLE_ROUTE9_MINER_1_Text_1:
	.string "This is my spot so hop!$"

BATTLE_ROUTE9_MINER_1_Text_2:
	.string "Can you please hop.$"

BATTLE_ROUTE9_MINER_2_Text_0:
	.string "The worst feeling in the world is when\n"
	.string "someone steals your ore!$"

BATTLE_ROUTE9_MINER_2_Text_1:
	.string "No Ore!$"

BATTLE_ROUTE9_MINER_2_Text_2:
	.string "I now understand how PvMers feel when\n"
	.string "they get crashed.$"

BATTLE_ROUTE9_GOBLIN_1_Text_0:
	.string "Hobs here before, this goblin land now.$"

BATTLE_ROUTE9_GOBLIN_1_Text_1:
	.string "Hobs vacating, Oo'glog Spa.$"

BATTLE_ROUTE9_GOBLIN_1_Text_2:
	.string "HOBS$"

BATTLE_ROUTE9_GOBLIN_2_Text_0:
	.string "Big high war god fond of Snape grass,\n"
	.string "step off human!$"

BATTLE_ROUTE9_GOBLIN_2_Text_1:
	.string "That lie, Big high war god not care for\n"
	.string "Snape grass.$"

BATTLE_ROUTE9_GOBLIN_3_Text_0:
	.string "Distance of sea, expand mind of me.$"

BATTLE_ROUTE9_GOBLIN_3_Text_1:
	.string "Snowtoes be poet now.$"

BATTLE_ROUTE9_GOBLIN_3_Text_2:
	.string "SNOWTOES$"

BATTLE_ROUTE9_GOBLIN_4_Text_0:
	.string "Human crafting house classy.\p"
	.string "Human show me how to enter!$"

BATTLE_ROUTE9_GOBLIN_4_Text_1:
	.string "Brown appoo? What dat?$"

BATTLE_ROUTE9_MUGGER_Text_0:
	.string "I bet you are one of those noobs going\n"
	.string "to those house parties.\p"
	.string "This will be easy!$"

BATTLE_ROUTE9_MUGGER_Text_1:
	.string "Urgh! I almost got you.$"

BATTLE_ROUTE9_MUGGER_Text_2:
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