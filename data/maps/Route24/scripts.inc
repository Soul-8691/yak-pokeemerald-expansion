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
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_1, BATTLE_ROUTE24_GOBLIN_1_Text_0, BATTLE_ROUTE24_GOBLIN_1_Text_0
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_2, BATTLE_ROUTE24_GOBLIN_1_Text_0, BATTLE_ROUTE24_GOBLIN_1_Text_0
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_3::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_3, BATTLE_ROUTE24_GOBLIN_1_Text_0, BATTLE_ROUTE24_GOBLIN_1_Text_0
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE24_GOBLIN_4::
	trainerbattle_single TRAINER_ROUTE24_GOBLIN_4, BATTLE_ROUTE24_GOBLIN_1_Text_0, BATTLE_ROUTE24_GOBLIN_1_Text_0
	namebox BATTLE_ROUTE24_MUGGER_Text_2
	msgbox BATTLE_ROUTE24_GOBLIN_1_Text_0
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
	.string "MUGGER$"

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
	.string "$"
