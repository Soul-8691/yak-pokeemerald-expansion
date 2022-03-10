Route4_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call POTTERINGTON_FARM_OUTDOOR_STATE
	goto TryMoveDaycareMan
	return


MuggerBattleRoute4::
	trainerbattle_single TRAINER_MUGGER_ROUTE4, MuggerBattleRoute4_Text_0, MuggerBattleRoute4_Text_1
	msgbox MuggerBattleRoute4_Text_1
	release
	return


ScammerBattleRoute4::
	trainerbattle_single TRAINER_SCAMMER_ROUTE4, ScammerBattleRoute4_Text_0, ScammerBattleRoute4_Text_1
	msgbox ScammerBattleRoute4_Text_2
	release
	return


FarmerBattleRoute4::
	trainerbattle_single TRAINER_FARMER_ROUTE4, FarmerBattleRoute4_Text_0, FarmerBattleRoute4_Text_1
	msgbox FarmerBattleRoute4_Text_2
	release
	return


Route4Sign::
	msgbox Route4Sign_Text_0, MSGBOX_SIGN
	release
	return


TryMoveDaycareMan::
	goto_if_set FLAG_PENDING_DAYCARE_EGG, TryMoveDaycareMan_1
	setobjectxyperm 1, 19, 16
	return

TryMoveDaycareMan_1:
	setobjectxyperm 1, 19, 17
	return


ROUTE4_TRIGGER1_DaycareWatcher::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER3
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART1
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER1
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART2
	return


ROUTE4_TRIGGER2_DaycareWatcher::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER3
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART1
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_ROUTE4_PLAYER2
	waitmovement 0
	call ROUTE4_TRIGGER_DaycareWatcher_PART2
	return


ROUTE4_TRIGGER_DaycareWatcher_PART1::
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0
	msgbox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_1
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_ROUTE4_DaycareWatcher1
	return


ROUTE4_TRIGGER_DaycareWatcher_PART2::
	delay 8
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0
	msgbox ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_0
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_ROUTE4_DaycareWatcher2
	waitmovement 0
	setobjectxyperm 2, 8, 17
	setvar VAR_POKESCAPE_POTTERINGTON_FARM_STATE, 1
	release
	end


MOVEMENT_ROUTE4_DaycareWatcher1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	delay_8
	face_right
	step_end

MOVEMENT_ROUTE4_DaycareWatcher2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_up
	delay_8
	face_down
	step_end

MOVEMENT_ROUTE4_PLAYER1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MOVEMENT_ROUTE4_PLAYER2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	step_end

MOVEMENT_ROUTE4_PLAYER3:
	face_up
	step_end

ROUTE4_DaycareWatcher::
	faceplayer
	namebox ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0
	msgbox ROUTE4_DaycareWatcher_Text_0
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_OUTDOOR_STATE::
	switch VAR_POKESCAPE_POTTERINGTON_FARM_STATE
	case 0, POTTERINGTON_FARM_OUTDOOR_STATE_2
	case 1, POTTERINGTON_FARM_OUTDOOR_STATE_3
	return

POTTERINGTON_FARM_OUTDOOR_STATE_2:
	return

POTTERINGTON_FARM_OUTDOOR_STATE_3:
	setobjectxyperm 2, 8, 17
	return


MuggerBattleRoute4_Text_0:
	.string "Stand and deliver!$"

MuggerBattleRoute4_Text_1:
	.string "People seem very afraid of me. Maybe\n"
	.string "it's the way I say hello?$"

ScammerBattleRoute4_Text_0:
	.string "Psst.. Want to buy some cabbage?$"

ScammerBattleRoute4_Text_1:
	.string "A no would have been fine..$"

ScammerBattleRoute4_Text_2:
	.string "Selling rare black lobster!$"

FarmerBattleRoute4_Text_0:
	.string "I breed all my animals here at\n"
	.string "Potterington farm.$"

FarmerBattleRoute4_Text_1:
	.string "Guess I need to breed stronger\n"
	.string "monsters!$"

FarmerBattleRoute4_Text_2:
	.string "Have you checked out the farm? It's a\n"
	.string "great place to raise monsters of your\l"
	.string "own!$"

Route4Sign_Text_0:
	.string "Potterington Farm$"

ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_0:
	.string "Farmer$"

ROUTE4_TRIGGER_DaycareWatcher_PART1_Text_1:
	.string "Hiya Adventurer!\l"
	.string "Could you follow me?\p"
	.string "I want to show you something.$"

ROUTE4_TRIGGER_DaycareWatcher_PART2_Text_0:
	.string "This place is called Potterington Farm!\p"
	.string "They look after your Monsters and help\n"
	.string "them grow while you are away.\p"
	.string "I also heard that they have set up\n"
	.string "special breeding pens for certain\l"
	.string "monsters.\p"
	.string "You should and inquire about it if it is\n"
	.string "something that intrests you!\p"
	.string "Anyway that is all I wanted to show you.\p"
	.string "BYYYYYYYYEEEE!$"

ROUTE4_DaycareWatcher_Text_0:
	.string "I really enjoy just sitting here and\n"
	.string "seeing what type of Monsters the next\l"
	.string "adventurer will bring.$"
