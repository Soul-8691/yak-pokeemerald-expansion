Mill_Lane_Mill_3_MapScripts::
	.byte 0


FarmerBattle4::
	trainerbattle_single TRAINER_MILL_LANE_4, MillyIntro, FarmerBattle4_Text_0, GiveQuestWheat
	msgbox FarmerBattle4_Text_1
	pokemart MillLaneMillFlourShop
	release
	return


GiveQuestWheat::
	msgbox GiveQuestWheat_Text_0
	giveitem ITEM_FLOUR_POT
	msgbox GiveQuestWheat_Text_1
	release
	return


    .align 2
MillLaneMillFlourShop:
	.2byte ITEM_FLOUR_POT
	.2byte ITEM_NONE

    release
    end

FarmerBattle4_Text_0:
	.string " I was so close!$"

FarmerBattle4_Text_1:
	.string "Would you like to buy some flour?$"

GiveQuestWheat_Text_0:
	.string "Congratulations! Here is the flour.$"

GiveQuestWheat_Text_1:
	.string "If you run out you may get some more\n"
	.string "from me anytime you wish. Although it\l"
	.string "will come at a cost. Tehehehe!$"

MillyIntro::
	.string "Welcome to Mill Lane Mill! I heard that\n"
	.string "you were after some of our flour.\l"
	.string "Tehehehehe. I can give you some if you\l"
	.string "want. But you'll have to battle me for\l"
	.string "it. Teheehehe!$"
