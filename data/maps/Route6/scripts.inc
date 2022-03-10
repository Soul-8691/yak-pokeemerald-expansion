Route6_MapScripts::
	.byte 0


MuggerBattleRoute6::
	trainerbattle_single TRAINER_MUGGER_ROUTE6, MuggerBattleRoute6_Text_0, MuggerBattleRoute6_Text_1
	namebox MuggerBattleRoute6_Text_2
	msgbox MuggerBattleRoute6_Text_3
	hidenamebox
	release
	end


TRAINER_ROUTE6_GUARD_1::
	trainerbattle_single TRAINER_MUGGER_ROUTE6, TRAINER_ROUTE6_GUARD_1_Text_0, TRAINER_ROUTE6_GUARD_1_Text_1
	namebox TRAINER_ROUTE6_GUARD_1_Text_2
	msgbox TRAINER_ROUTE6_GUARD_1_Text_3
	hidenamebox
	release
	end


ROUTE6_BLOCK_FaladorGuard::
	applymovement 5, MOVEMENT_ROUTE6_MUGGER
	waitmovement 0
	namebox MuggerBattleRoute6_Text_2
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_0
	closemessage
	hidenamebox
	applymovement 7, MOVEMENT_ROUTE6_RAT
	waitmovement 0
	playmoncry SPECIES_RATTATA, 0
	namebox ROUTE6_BLOCK_FaladorGuard_Text_1
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_2
	waitmoncry
	closemessage
	hidenamebox
	applymovement 4, MOVEMENT_ROUTE6_GUARD
	waitmovement 0
	namebox TRAINER_ROUTE6_GUARD_1_Text_2
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_3
	closemessage
	hidenamebox
	applymovement 6, MOVEMENT_ROUTE6_UNICORN
	waitmovement 0
	playmoncry SPECIES_LOTAD, 0
	namebox ROUTE6_BLOCK_FaladorGuard_Text_4
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_5
	waitmoncry
	closemessage
	hidenamebox
	release
	end


MOVEMENT_ROUTE6_MUGGER:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVEMENT_ROUTE6_RAT:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVEMENT_ROUTE6_GUARD:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

MOVEMENT_ROUTE6_UNICORN:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

MuggerBattleRoute6_Text_0:
	.string "Your money or your life!$"

MuggerBattleRoute6_Text_1:
	.string "Okay I guess you can keep both..$"

MuggerBattleRoute6_Text_2:
	.string "Mugger$"

MuggerBattleRoute6_Text_3:
	.string "Shoo you're making it hard for me to mug\n"
	.string "people.$"

TRAINER_ROUTE6_GUARD_1_Text_0:
	.string "Welcome to Falador, I greet you with a\n"
	.string "battle!$"

TRAINER_ROUTE6_GUARD_1_Text_1:
	.string "Welcome and goodbye.$"

TRAINER_ROUTE6_GUARD_1_Text_2:
	.string "Guard$"

TRAINER_ROUTE6_GUARD_1_Text_3:
	.string "Enjoy your stay, and do not get in\n"
	.string "trouble.$"

ROUTE6_BLOCK_FaladorGuard_Text_0:
	.string "Heh, I bet you won't even last 30\n"
	.string "seconds against my Rat!$"

ROUTE6_BLOCK_FaladorGuard_Text_1:
	.string "Rat$"

ROUTE6_BLOCK_FaladorGuard_Text_2:
	.string "Squeeek!$"

ROUTE6_BLOCK_FaladorGuard_Text_3:
	.string "You will not enter Falador for as long\n"
	.string "as I am here you disgusting mugger!$"

ROUTE6_BLOCK_FaladorGuard_Text_4:
	.string "Unicorn$"

ROUTE6_BLOCK_FaladorGuard_Text_5:
	.string "Neeeigh!$"
