Mill_Lane_Mill_3_MapScripts::
	.byte 0


Millie_Miller::
	lock
	faceplayer
	namebox Millie_Miller_Text_0
	checktrainerflag TRAINER_MILLIE_MILLER_MILLLANEMILL
	compare VAR_RESULT, FALSE
	goto_if_eq Millie_Miller_1
	msgbox Millie_Miller_Text_4
	pokemart MillLaneMillFlourShop
	hidenamebox
	release
	end

Millie_Miller_1:
	msgbox Millie_Miller_Text_1
	trainerbattle_single TRAINER_MILLIE_MILLER_MILLLANEMILL, Millie_Miller_Text_2, Millie_Miller_Text_3, GiveQuestWheat
	release
	end


GiveQuestWheat::
	lock
	faceplayer
	namebox Millie_Miller_Text_0
	msgbox GiveQuestWheat_Text_0
	giveitem ITEM_FLOUR_POT
	msgbox GiveQuestWheat_Text_1
	hidenamebox
	release
	end


    .align 2
MillLaneMillFlourShop:
	.2byte ITEM_FLOUR_POT
    .2byte ITEM_WHEAT
	.2byte ITEM_NONE

    release
    end

Millie_Miller_Text_0:
	.string "Millie Miller$"

Millie_Miller_Text_1:
	.string "Welcome to Mill Lane Mill!\p"
	.string "I heard that you were after some of our\n"
	.string "flour.\p"
	.string "Tehehehehe.\p"
	.string "I can give you some if you want..$"

Millie_Miller_Text_2:
	.string "But you'll have to battle me for it.\p"
	.string "Teheehehe!$"

Millie_Miller_Text_3:
	.string "I was so close!$"

Millie_Miller_Text_4:
	.string "Would you like to buy some flour?$"

GiveQuestWheat_Text_0:
	.string "Congratulations! Here is the flour.$"

GiveQuestWheat_Text_1:
	.string "If you run out you may get some more\n"
	.string "from me anytime you wish.\p"
	.string "Although it will come at a cost.\p"
	.string "Tehehehe!$"
