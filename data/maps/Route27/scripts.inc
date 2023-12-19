Route27_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route27_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route27_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


NPC_ROUTE27_1::
	lock
	faceplayer
	namebox NPC_ROUTE27_1_Text_0
	msgbox NPC_ROUTE27_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE27_2::
	lock
	faceplayer
	namebox NPC_ROUTE27_1_Text_0
	msgbox NPC_ROUTE27_2_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_1, BATTLE_ROUTE27_TRAINER_1_Text_0, BATTLE_ROUTE27_TRAINER_1_Text_1
	namebox BATTLE_ROUTE27_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_2, BATTLE_ROUTE27_TRAINER_1_Text_0, BATTLE_ROUTE27_TRAINER_1_Text_1
	namebox BATTLE_ROUTE27_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_3, BATTLE_ROUTE27_TRAINER_1_Text_0, BATTLE_ROUTE27_TRAINER_1_Text_1
	namebox BATTLE_ROUTE27_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE27_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE27_TRAINER_4, BATTLE_ROUTE27_TRAINER_1_Text_0, BATTLE_ROUTE27_TRAINER_1_Text_1
	namebox BATTLE_ROUTE27_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE27_TRAINER_1_Text_3
	hidenamebox
	release
	end


NPC_ROUTE27_1_Text_0:
	.string "Monk$"

NPC_ROUTE27_1_Text_1:
	.string "Sorry the chapel is off limits.$"

NPC_ROUTE27_2_Text_0:
	.string "Take your monsters and leave.\p"
	.string "You may not enter.$"

BATTLE_ROUTE27_TRAINER_1_Text_0:
	.string "Battle me, I am a Cupholder.$"

BATTLE_ROUTE27_TRAINER_1_Text_1:
	.string "Cupholder has lost.$"

BATTLE_ROUTE27_TRAINER_1_Text_2:
	.string "Cupholder$"

BATTLE_ROUTE27_TRAINER_1_Text_3:
	.string "Hello, I am a Cupholder.$"
