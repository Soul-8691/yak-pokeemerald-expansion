Route4_MapScripts::
	.byte 0


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
