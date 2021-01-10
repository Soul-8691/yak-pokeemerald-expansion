Mill_Lane_Mill_1_MapScripts::
	.byte 0


MillLaneGreeter::
	lock
	faceplayer
	msgbox MillLaneGreeter_Text_0
	release
	return


FarmerBattle1::
	trainerbattle_single TRAINER_MILL_LANE_1, FarmerBattle1_Text_0, FarmerBattle1_Text_1
	msgbox FarmerBattle1_Text_2
	release
	return


MillLaneGreeter_Text_0:
	.string "Welcome to Mill Lane Mill! We have the\n"
	.string "best flour this side of the river lum!$"

FarmerBattle1_Text_0:
	.string "If you want to get to the top you will\n"
	.string "need to get past the mill three! Be\l"
	.string "warned I'm the second strongest of us!$"

FarmerBattle1_Text_1:
	.string "You will never reach the top!$"

FarmerBattle1_Text_2:
	.string "You may have beaten me but you'll never\n"
	.string "make it to the top!$"
