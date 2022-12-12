Route18_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route18_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


NPC_ROUTE18_NPC1::
	lock
	faceplayer
	namebox NPC_ROUTE18_NPC1_Text_0
	msgbox NPC_ROUTE18_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER1::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER1_Text_0, BATTLE_ROUTE18_TRAINER1_Text_1
	msgbox BATTLE_ROUTE18_TRAINER1_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER2::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER2_Text_0, BATTLE_ROUTE18_TRAINER2_Text_1
	namebox BATTLE_ROUTE18_TRAINER2_Text_2
	msgbox BATTLE_ROUTE18_TRAINER2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER3::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER3_Text_0, BATTLE_ROUTE18_TRAINER3_Text_1
	msgbox BATTLE_ROUTE18_TRAINER3_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER4::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER4_Text_0, BATTLE_ROUTE18_TRAINER4_Text_1
	msgbox BATTLE_ROUTE18_TRAINER4_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER5::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER5_Text_0, BATTLE_ROUTE18_TRAINER5_Text_1
	msgbox BATTLE_ROUTE18_TRAINER5_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER6::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER6_Text_0, BATTLE_ROUTE18_TRAINER6_Text_1
	msgbox BATTLE_ROUTE18_TRAINER6_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE18_TRAINER7::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE18_TRAINER7_Text_0, BATTLE_ROUTE18_TRAINER7_Text_1
	msgbox BATTLE_ROUTE18_TRAINER7_Text_2
	hidenamebox
	release
	end


NPC_ROUTE18_NPC1_Text_0:
	.string ".$"

BATTLE_ROUTE18_TRAINER1_Text_0:
	.string "Make this battle quick, I've got my\n"
	.string "dailies to do!$"

BATTLE_ROUTE18_TRAINER1_Text_1:
	.string "Did I even get any experience from\n"
	.string "that?!$"

BATTLE_ROUTE18_TRAINER1_Text_2:
	.string "Talk to me after I have finished my\n"
	.string "dailies.$"

BATTLE_ROUTE18_TRAINER2_Text_0:
	.string "SPOTTED!$"

BATTLE_ROUTE18_TRAINER2_Text_1:
	.string "Oh wait, you aren't a penguin.$"

BATTLE_ROUTE18_TRAINER2_Text_2:
	.string "Canada Grrl$"

BATTLE_ROUTE18_TRAINER2_Text_3:
	.string "I heard there was a Penguin in this area\n"
	.string "but all I see are cats.\p"
	.string "Have you seen any?$"

BATTLE_ROUTE18_TRAINER3_Text_0:
	.string "1001 OAK LOGS.\p"
	.string "1002 OAK LOGS.\p"
	.string "1003 OAK LOGS.\p"
	.string "INVENTORY FULL.\l"
	.string "PROCEEDING TO BANK.\p"
	.string "ERROR PATH BLOCKED INITIATE ERROR\n"
	.string "HANDLING.$"

BATTLE_ROUTE18_TRAINER3_Text_1:
	.string "ERROR. ERROR. ERROR.$"

BATTLE_ROUTE18_TRAINER3_Text_2:
	.string "ERROR.\l"
	.string "ERROR.\p"
	.string "PROCEEDING TO DROP LOGS TO FIX ERROR.\p"
	.string "ERROR NO LOGS FOUND.\p"
	.string "PROCEEDING TO DROP LOGS TO FIX ERROR.$"

BATTLE_ROUTE18_TRAINER4_Text_0:
	.string "How do trees get online?$"

BATTLE_ROUTE18_TRAINER4_Text_1:
	.string "They Log in!$"

BATTLE_ROUTE18_TRAINER4_Text_2:
	.string "How do trees get online?\p"
	.string "They log in!\p"
	.string "$"

BATTLE_ROUTE18_TRAINER5_Text_0:
	.string "Do yew think yew have what it takes to\n"
	.string "cut me down?!$"

BATTLE_ROUTE18_TRAINER5_Text_1:
	.string "Now I am feeling all sappy.$"

BATTLE_ROUTE18_TRAINER5_Text_2:
	.string "If yew asked me if I thought you wood\n"
	.string "win, I wood not have believed it.$"

BATTLE_ROUTE18_TRAINER6_Text_0:
	.string "This is me neck of the woods!\p"
	.string "Turn back or face me!$"

BATTLE_ROUTE18_TRAINER6_Text_1:
	.string "Me surrender!$"

BATTLE_ROUTE18_TRAINER6_Text_2:
	.string "Me guess you can go through me neck of\n"
	.string "the woods.\p"
	.string "Me respect you strength.$"

BATTLE_ROUTE18_TRAINER7_Text_0:
	.string "Good of you to come through the east\n"
	.string "gate, you would by cruched by the\l"
	.string "south.$"

BATTLE_ROUTE18_TRAINER7_Text_1:
	.string "Maybe you can stand up against those\n"
	.string "Dark Wizards.$"

BATTLE_ROUTE18_TRAINER7_Text_2:
	.string "The Dark Wizards are a problem for\n"
	.string "years but we don't have enough funding\l"
	.string "to deal with them.$"
