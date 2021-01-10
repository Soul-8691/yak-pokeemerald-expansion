Route6_MapScripts::
	.byte 0


MuggerBattleRoute6::
	trainerbattle_single TRAINER_MUGGER_ROUTE6, MuggerBattleRoute6_Text_0, MuggerBattleRoute6_Text_1
	msgbox MuggerBattleRoute6_Text_2
	release
	return


MuggerBattleRoute6_Text_0:
	.string "Your money or your life!$"

MuggerBattleRoute6_Text_1:
	.string "Okay I guess you can keep both..$"

MuggerBattleRoute6_Text_2:
	.string "Shoo you're making it hard for me to mug\n"
	.string "people.$"
