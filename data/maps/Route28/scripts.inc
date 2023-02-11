Route28_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route28_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route28_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return


BLOCK_ALKHAIRD_GATE::
	lockall
	applymovement 1, BLOCK_ALKHAIRD_GATE_1
	applymovement 2, BLOCK_ALKHAIRD_GATE_2
	waitmovement 0
	msgbox BLOCK_ALKHAIRD_GATE_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, BLOCK_ALKHAIRD_GATE_3
	waitmovement 0
	release
	end


BLOCK_ALKHAIRD_GATE_1:
	face_down
	step_end

BLOCK_ALKHAIRD_GATE_2:
	face_up
	step_end

BLOCK_ALKHAIRD_GATE_3:
	walk_left
	step_end

BLOCK_Alkharid_Guards::
	lock
	faceplayer
	msgbox BLOCK_ALKHAIRD_GATE_Text_0
	release
	end


BATTLE_ROUTE28_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_1, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_1
	release
	end


BATTLE_ROUTE28_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_2, BATTLE_ROUTE28_TRAINER_2_Text_0, BATTLE_ROUTE28_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_2_Text_2
	release
	end


BATTLE_ROUTE28_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_3, BATTLE_ROUTE28_TRAINER_3_Text_0, BATTLE_ROUTE28_TRAINER_3_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_3_Text_2
	release
	end


BATTLE_ROUTE28_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_4, BATTLE_ROUTE28_TRAINER_4_Text_0, BATTLE_ROUTE28_TRAINER_4_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_4_Text_2
	release
	end


BATTLE_ROUTE28_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_5, BATTLE_ROUTE28_TRAINER_5_Text_0, BATTLE_ROUTE28_TRAINER_5_Text_1
	msgbox BATTLE_ROUTE28_TRAINER_5_Text_1
	release
	end


BLOCK_ALKHAIRD_GATE_Text_0:
	.string "Halt!\p"
	.string "Only those whom possess the Al-Khaird\n"
	.string "Badge may enter!$"

BATTLE_ROUTE28_TRAINER_1_Text_0:
	.string "They assigned me to this boring post on\n"
	.string "the outskirts of town.\p"
	.string "Can you entertain me?$"

BATTLE_ROUTE28_TRAINER_1_Text_1:
	.string "Thank you for the fight.\p"
	.string "I have grown bored of battles now\n"
	.string "though.$"

BATTLE_ROUTE28_TRAINER_2_Text_0:
	.string "Hey you!\p"
	.string "You look worse of than me.\p"
	.string "Lets fight.$"

BATTLE_ROUTE28_TRAINER_2_Text_1:
	.string "This makes no sense I have better\n"
	.string "armour than you.$"

BATTLE_ROUTE28_TRAINER_2_Text_2:
	.string "My friend is looking for Falador.\p"
	.string "Have you seen him?$"

BATTLE_ROUTE28_TRAINER_3_Text_0:
	.string "Al Kharid is past here, allow me to test\n"
	.string "you.$"

BATTLE_ROUTE28_TRAINER_3_Text_1:
	.string "Fine, you pass the test.$"

BATTLE_ROUTE28_TRAINER_3_Text_2:
	.string "Do not give my brothers any trouble\n"
	.string "while visting Al Kharid.$"

BATTLE_ROUTE28_TRAINER_4_Text_0:
	.string "Have you seen any ruins around these\n"
	.string "parts?$"

BATTLE_ROUTE28_TRAINER_4_Text_1:
	.string "You could have just said no…$"

BATTLE_ROUTE28_TRAINER_4_Text_2:
	.string "Oh the pile of rocks over there are the\n"
	.string "ruins I have been looking for!\p"
	.string "I heard that they were magical in some\n"
	.string "way.$"

BATTLE_ROUTE28_TRAINER_5_Text_0:
	.string "Hey lets have a quick duel!$"

BATTLE_ROUTE28_TRAINER_5_Text_1:
	.string "Wow, when I said lets have a quick duel I\n"
	.string "didn't expect it to be that quick.$"
