Route11_MapScripts::
	.byte 0


BATTLE_ROUTE11_QUESTER::
	trainerbattle_single TRAINER_ROUTE11_QUESTER, BATTLE_ROUTE11_QUESTER_Text_0, BATTLE_ROUTE11_QUESTER_Text_1
	msgbox BATTLE_ROUTE11_QUESTER_Text_2
	release
	return


BATTLE_ROUTE11_PIRATE::
	trainerbattle_single TRAINER_ROUTE11_PIRATE, BATTLE_ROUTE11_PIRATE_Text_0, BATTLE_ROUTE11_PIRATE_Text_1
	msgbox BATTLE_ROUTE11_PIRATE_Text_1
	release
	return


BATTLE_ROUTE11_SAILOR::
	trainerbattle_single TRAINER_ROUTE11_SAILOR, BATTLE_ROUTE11_SAILOR_Text_0, BATTLE_ROUTE11_SAILOR_Text_1
	msgbox BATTLE_ROUTE11_SAILOR_Text_1
	release
	return


BATTLE_ROUTE11_PvMer::
	trainerbattle_single TRAINER_ROUTE11_PvMer, BATTLE_ROUTE11_PvMer_Text_0, BATTLE_ROUTE11_PvMer_Text_1
	msgbox BATTLE_ROUTE11_PvMer_Text_1
	release
	return


BATTLE_ROUTE11_GRACEFUL::
	trainerbattle_single TRAINER_ROUTE11_GRACEFUL, BATTLE_ROUTE11_GRACEFUL_Text_0, BATTLE_ROUTE11_GRACEFUL_Text_1
	msgbox BATTLE_ROUTE11_GRACEFUL_Text_2
	release
	return


BATTLE_ROUTE11_QUESTER_Text_0:
	.string "That darned Squire, how did I get into\n"
	.string "this mess.\p"
	.string "Hey you!\n"
	.string "Have you seen any Blurite?!$"

BATTLE_ROUTE11_QUESTER_Text_1:
	.string "I hate this quest.$"

BATTLE_ROUTE11_QUESTER_Text_2:
	.string "I've been searching for hours I cannot\n"
	.string "find Blurite ore anywhere!\p"
	.string "I hate this quest.$"

BATTLE_ROUTE11_PIRATE_Text_0:
	.string "Me be reading the map to find the\n"
	.string "treasure, stay off scalliwag!$"

BATTLE_ROUTE11_PIRATE_Text_1:
	.string "Reading maps be easier if both me eyes\n"
	.string "were not made of glass.$"

BATTLE_ROUTE11_SAILOR_Text_0:
	.string "What do you do with a drunken sailor?\p"
	.string "Battle him of course!$"

BATTLE_ROUTE11_SAILOR_Text_1:
	.string "I'm not drunk enough for this.$"

BATTLE_ROUTE11_PvMer_Text_0:
	.string "You look like a good warmup, prepare\n"
	.string "yourself!$"

BATTLE_ROUTE11_PvMer_Text_1:
	.string "Losing to you it makes me wonder how I\n"
	.string "will beat a Mogre…$"

BATTLE_ROUTE11_GRACEFUL_Text_0:
	.string "He-Hoof-Ha{PAUSE 15}…{PAUSE 15}…\n"
	.string "Ha-Hoo-wheeze{PAUSE 15}…{PAUSE 15}…\p"
	.string "Blurgh-bleck-boohgh{PAUSE 15}…{PAUSE 15}…\n"
	.string "Ba…tt…le Me…$"

BATTLE_ROUTE11_GRACEFUL_Text_1:
	.string "If I grunt while working out that means\n"
	.string "I am doing a good job right?$"

BATTLE_ROUTE11_GRACEFUL_Text_2:
	.string "Excuse me I have a lot of agility\n"
	.string "training to do.$"
