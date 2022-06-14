Route24_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route24_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route24_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


BATTLE_ROUTE24_MUGGER::
	trainerbattle_single TRAINER_ROUTE24_MUGGER, BATTLE_ROUTE24_MUGGER_Text_0, BATTLE_ROUTE24_MUGGER_Text_1
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_MUGGER_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_WOODCUTTER_1::
	trainerbattle_single TRAINER_ROUTE24_WOODCUTTER_1, BATTLE_ROUTE24_WOODCUTTER_1_Text_0, BATTLE_ROUTE24_WOODCUTTER_1_Text_1
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_WOODCUTTER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_WOODCUTTER_2::
	trainerbattle_single TRAINER_ROUTE24_WOODCUTTER_2, BATTLE_ROUTE24_WOODCUTTER_2_Text_0, BATTLE_ROUTE24_WOODCUTTER_2_Text_1
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_WOODCUTTER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_1::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_1, BATTLE_ROUTE24_GOBLIN_1_Text_0, BATTLE_ROUTE24_GOBLIN_1_Text_1
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_2, BATTLE_ROUTE24_GOBLIN_2_Text_0, BATTLE_ROUTE24_GOBLIN_2_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_2_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_3::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_3, BATTLE_ROUTE24_GOBLIN_3_Text_0, BATTLE_ROUTE24_GOBLIN_3_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_3_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_4::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_4, BATTLE_ROUTE24_GOBLIN_4_Text_0, BATTLE_ROUTE24_GOBLIN_4_Text_1
	namebox BATTLE_ROUTE24_GOBLIN_4_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_4_Text_1
	hidenamebox
	release
	end


NPC_ROUTE24_NPC_1::
	lock
	faceplayer
	namebox NPC_ROUTE24_NPC_1_Text_0
	msgbox NPC_ROUTE24_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_ROUTE24_NPC_2::
	lock
	faceplayer
	namebox NPC_ROUTE24_NPC_2_Text_0
	msgbox NPC_ROUTE24_NPC_2_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_1::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_1_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_1_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_2::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_2_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_3::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_3_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_4::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_4_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_5::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_5_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE24_MUGGER_Text_0:
	.string "Deliver and stand!$"

BATTLE_ROUTE24_MUGGER_Text_1:
	.string "Sorry I mixed that up, could you please\n"
	.string "be robbed again?\p"
	.string "No?\p"
	.string "Ok then…$"

BATTLE_ROUTE24_MUGGER_Text_2:
	.string "RSN$"

BATTLE_ROUTE24_WOODCUTTER_1_Text_0:
	.string "Woodcutting is more than just cutting\n"
	.string "trees, here let me show you.$"

BATTLE_ROUTE24_WOODCUTTER_1_Text_1:
	.string "If I lose a battle and nobody is here.\p"
	.string "Do I still get xp?$"

BATTLE_ROUTE24_WOODCUTTER_2_Text_0:
	.string "To chop down trees you need a hatchet\n"
	.string "like mine.$"

BATTLE_ROUTE24_WOODCUTTER_2_Text_1:
	.string "I bet you dont even have over 20\n"
	.string "Woodcutting.$"

BATTLE_ROUTE24_GOBLIN_1_Text_0:
	.string "Prepare for battle human!$"

BATTLE_ROUTE24_GOBLIN_1_Text_1:
	.string "Human prepare well.$"

BATTLE_ROUTE24_GOBLIN_2_Text_0:
	.string "Stay out of village smelly human!$"

BATTLE_ROUTE24_GOBLIN_2_Text_1:
	.string "Goblin Village not take kindly to your\n"
	.string "kind.$"

BATTLE_ROUTE24_GOBLIN_2_Text_2:
	.string "Smellygob$"

BATTLE_ROUTE24_GOBLIN_3_Text_0:
	.string "Guard duty serious task given by\n"
	.string "General Bentnose.\p"
	.string "Stay gone human!$"

BATTLE_ROUTE24_GOBLIN_3_Text_1:
	.string "Bootlicker is considering changing to\n"
	.string "green faction.\p"
	.string "Wartface is better leader.$"

BATTLE_ROUTE24_GOBLIN_3_Text_2:
	.string "Bootlicker$"

BATTLE_ROUTE24_GOBLIN_4_Text_0:
	.string "Red or green, humans stay out.$"

BATTLE_ROUTE24_GOBLIN_4_Text_1:
	.string "Conflict of colours eternal.$"

BATTLE_ROUTE24_GOBLIN_4_Text_2:
	.string "Bentwart$"

NPC_ROUTE24_NPC_1_Text_0:
	.string "MAN$"

NPC_ROUTE24_NPC_1_Text_1:
	.string "Due east is Varrock, the capital of\n"
	.string "Mishtalin.\p"
	.string "On the way there you can meet some\n"
	.string "unfriendly dwarves and barbarians but\l"
	.string "dont let them ruin your day.$"

NPC_ROUTE24_NPC_2_Text_0:
	.string "WOMAN$"

NPC_ROUTE24_NPC_2_Text_1:
	.string "Up north is the Goblin Village.\p"
	.string "They do not enjoy the company of\n"
	.string "humans and seem to be under some civil\l"
	.string "war over differing opinions.\p"
	.string "I suggest you go east instead\n"
	.string "adventurer.$"

NPC_GOBLINVILLAGE_GOBLIN_1_Text_0:
	.string "DULLEYES$"

NPC_GOBLINVILLAGE_GOBLIN_1_Text_1:
	.string "Dulleyes do not understand this\n"
	.string "conflict.\p"
	.string "Bentnoze shows me gray goblin mail\n"
	.string "telling Dulleyes Wartface is wrong.\p"
	.string "Then Wartface show Dulleyes gray\n"
	.string "goblin mail telling Dulleyes this mail\l"
	.string "better.\p"
	.string "War is complicated to Dulleyes.$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_0:
	.string "$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_1:
	.string "Goblins green.\p"
	.string "Green is better than red.$"

NPC_GOBLINVILLAGE_GOBLIN_3_Text_0:
	.string "Blood is red.\p"
	.string "Red is better than green.$"

NPC_GOBLINVILLAGE_GOBLIN_4_Text_0:
	.string "Seeing goblins go around saying green\n"
	.string "be good makes me see red.$"

NPC_GOBLINVILLAGE_GOBLIN_5_Text_0:
	.string "Last week goblin village fought over\n"
	.string "shoes or no shoes.\p"
	.string "War is constant here.\p"
	.string "I love it.$"
