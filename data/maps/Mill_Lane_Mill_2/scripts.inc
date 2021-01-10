Mill_Lane_Mill_2_MapScripts::
	.byte 0


FarmerBattle2::
	trainerbattle_single TRAINER_MILL_LANE_2, FarmerBattle2_Text_0, FarmerBattle2_Text_1
	msgbox FarmerBattle2_Text_2
	release
	return


FarmerBattle3::
	trainerbattle_single TRAINER_MILL_LANE_3, FarmerBattle3_Text_0, FarmerBattle3_Text_1
	msgbox FarmerBattle3_Text_1
	release
	return


FarmerBattle2_Text_0:
	.string "It seems its time for you to face the\n"
	.string "second strongest of the mill three!$"

FarmerBattle2_Text_1:
	.string "One day I aim to be the strongest of\n"
	.string "the mill three.$"

FarmerBattle2_Text_2:
	.string "One day I aim to be the strongest of the mill three.$"

FarmerBattle3_Text_0:
	.string "I cant let you pass and meet Millie\n"
	.string "without facing me. I am after all the\l"
	.string "second strongest of the mill three.$"

FarmerBattle3_Text_1:
	.string "Wow you beat all of us. Say hi to Millie from me.$"
