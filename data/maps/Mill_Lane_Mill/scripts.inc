Mill_Lane_Mill_MapScripts::
	.byte 0


SIGN_MILL_LANE_MILL::
	lock
	msgbox SIGN_MILL_LANE_MILL_Text_0
	release
	end


NPC1_MILL_LANE_MILL::
	lock
	faceplayer
	msgbox NPC1_MILL_LANE_MILL_Text_0
	release
	end


BEEFY_BILL_MILL_LANE_MILL::
	lock
	faceplayer
	namebox BEEFY_BILL_MILL_LANE_MILL_Text_0
	msgbox BEEFY_BILL_MILL_LANE_MILL_Text_1
	waitmessage
	pokemart GeneralStoreBeefyBill
	msgbox BEEFY_BILL_MILL_LANE_MILL_Text_2
	release
	return


    .align 2
GeneralStoreBeefyBill:
    .2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_EMPTY_POT
    .2byte ITEM_REDBERRY
    .2byte ITEM_WHEAT
    .2byte ITEM_WATER_BUCKET
    .2byte ITEM_NONE
    release
    end

Trainer1_MillLaneMill_Battle::
	trainerbattle_double TRAINER_TRAINER1_MILLLANEMILL, Trainer1_MillLaneMill_Battle_Text_0, Trainer1_MillLaneMill_Battle_Text_1, Trainer1_MillLaneMill_Battle_Text_2
	namebox Trainer1_MillLaneMill_Battle_Text_3
	msgbox Trainer1_MillLaneMill_Battle_Text_4
	hidenamebox
	release
	end


SIGN_MILL_LANE_MILL_Text_0:
	.string "Mill Lane Mill.\p"
	.string "The finest flour in all of Gielinor.$"

NPC1_MILL_LANE_MILL_Text_0:
	.string "This is the Mill Lane Mill.\p"
	.string "The Miller family has produced flour for\n"
	.string "generations!$"

BEEFY_BILL_MILL_LANE_MILL_Text_0:
	.string "William Whitebred$"

BEEFY_BILL_MILL_LANE_MILL_Text_1:
	.string "Welcome to Beefy Bill's Supplies!\p"
	.string "Care to take a look at my stock?$"

BEEFY_BILL_MILL_LANE_MILL_Text_2:
	.string "Thank you, come again!$"

Trainer1_MillLaneMill_Battle_Text_0:
	.string "Have you seen any Kebbits around here?$"

Trainer1_MillLaneMill_Battle_Text_1:
	.string "I need to get a higher hunting level..$"

Trainer1_MillLaneMill_Battle_Text_2:
	.string "I would love to have a double battle\n"
	.string "with you.$"

Trainer1_MillLaneMill_Battle_Text_3:
	.string "RSN$"

Trainer1_MillLaneMill_Battle_Text_4:
	.string "I've been trying to track down Kebbits\n"
	.string "for my collection.$"
