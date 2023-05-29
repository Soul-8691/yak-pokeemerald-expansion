Lumbridge_Forest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Forest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	return


LUMBRIDGEFOREST_NPC_BOT1::
	msgbox LUMBRIDGEFOREST_NPC_BOT1_Text_0
	closemessage
	release
	end


LUMBRIDGEFOREST_NPC_BOT2::
	msgbox LUMBRIDGEFOREST_NPC_BOT2_Text_0
	closemessage
	release
	end


LUMBRIDGEFOREST_NPC_WOODCUTTER::
	faceplayer
	msgbox LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0
	closemessage
	release
	end


BATTLE_LUMBRIDGEFOREST_BOT1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_BOT1, BATTLE_LUMBRIDGEFOREST_BOT1_Text_0, BATTLE_LUMBRIDGEFOREST_BOT1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_BOT1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_BOT1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_WOODCUTTER1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_WOODCUTTER1, BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_0, BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_3
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_1::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_1, BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_2::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_2, BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_LUMBRIDGEFOREST_TRAINER_3::
	trainerbattle_single TRAINER_LUMBRIDGEFOREST_TRAINER_3, BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_0, BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_1
	namebox BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2
	msgbox BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_2
	hidenamebox
	release
	end


ITEM_LUMBRIDGEFOREST_TM49_SNARL::
	finditem ITEM_TM49_SNARL
	end


ITEM_LUMBRIDGEFOREST_BREAD::
	finditem ITEM_BREAD
	end


LUMBRIDGEFOREST_NPC_BOT1_Text_0:
	.string "BEEP BOOP.$"

LUMBRIDGEFOREST_NPC_BOT2_Text_0:
	.string "CHOP, CHOP, CHOP.$"

LUMBRIDGEFOREST_NPC_WOODCUTTER_Text_0:
	.string "These bots are so annoying.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_0:
	.string "ALERT!\p"
	.string "INTERACTION DETECTED.\p"
	.string "RESPONSE ACTIVATED.\p"
	.string "HELLO, I AM NOT A BOT.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_1:
	.string "HELLO, I AM NOT A BOT.$"

BATTLE_LUMBRIDGEFOREST_BOT1_Text_2:
	.string "BOT$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_0:
	.string "OMG LUL, guess what?\p"
	.string "These woods belong to me!$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_1:
	.string "JK, I'll share.$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_2:
	.string "WOODCUTTER$"

BATTLE_LUMBRIDGEFOREST_WOODCUTTER1_Text_3:
	.string "Like ROFLMAO you are stronk.\p"
	.string "You sure cut me down to size, OMGEALUL!$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_0:
	.string "I am going to jump out and attack you\n"
	.string "now.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_1:
	.string "I would jump for joy, except I seem to\n"
	.string "have lost this battle.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_1_Text_2:
	.string "MUGGER$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_0:
	.string "Me and me friend destroyed the path\n"
	.string "through the forest to lure pink\l"
	.string "hoomens into trap.\p"
	.string "Now you have wandered into it.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_1:
	.string "Oh no, you has escaped the trap!$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_2:
	.string "GOBLIN$"

BATTLE_LUMBRIDGEFOREST_TRAINER_2_Text_3:
	.string "Me and me friend destroyed the path\n"
	.string "through the forest to lure pink\l"
	.string "hoomens into trap.\p"
	.string "You escaped trap.\p"
	.string "Makes me rethink new trap.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_0:
	.string "Me liek this forest.\p"
	.string "Me hope no harm comes to it.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_1:
	.string "Clearly big high war god favours you.$"

BATTLE_LUMBRIDGEFOREST_TRAINER_3_Text_2:
	.string "Me liek this forest.\p"
	.string "Me hope no harm comes to it.\p"
	.string "Me would be sad if big high war god were\n"
	.string "to damage it and make a big dirt hole.$"
