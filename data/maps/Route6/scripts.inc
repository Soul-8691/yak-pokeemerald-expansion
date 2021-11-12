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
