Varrock_MapScripts::
	.byte 0


VARROCK_Gypsy_Aris_SIGNPOST::
	msgbox VARROCK_Gypsy_Aris_SIGNPOST_Text_0
	closemessage
	release
	end


VARROCK_SCAMMER::
	faceplayer
	namebox VARROCK_SCAMMER_Text_0
	msgbox VARROCK_SCAMMER_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Trader1::
	msgbox VARROCK_NPC_Trader1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Trader2::
	msgbox VARROCK_NPC_Trader2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Firemaker::
	faceplayer
	msgbox VARROCK_NPC_Firemaker_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard1::
	faceplayer
	namebox VARROCK_NPC_Guard1_Text_0
	msgbox VARROCK_NPC_Guard1_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard2::
	faceplayer
	namebox VARROCK_NPC_Guard1_Text_0
	msgbox VARROCK_NPC_Guard2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_Gypsy_Aris_SIGNPOST_Text_0:
	.string "My tent was destroyed by some\n"
	.string "adventurers having MvM battles in the\l"
	.string "square and is awaiting repair.\p"
	.string "I've moved to a small house in north\n"
	.string "Varrock for the time being.\l"
	.string "-Gypsy Aris.$"

VARROCK_SCAMMER_Text_0:
	.string "Suspicious Man$"

VARROCK_SCAMMER_Text_1:
	.string "Pssst, give me your monster, I'll trim it\n"
	.string "for you.$"

VARROCK_NPC_Trader1_Text_0:
	.string "I heard you can trade your monsters\n"
	.string "with others at the Grand Exchange.\p"
	.string "Is that true?$"

VARROCK_NPC_Trader2_Text_0:
	.string "You can trade monsters at Grand\n"
	.string "Exchange with others.\p"
	.string "The only downside is that I've heard it\n"
	.string "is a hassle to set up a trade and you\l"
	.string "have to know people.$"

VARROCK_NPC_Firemaker_Text_0:
	.string "A long line of fires is the best way to\n"
	.string "train the Firemaking skill.$"

VARROCK_NPC_Guard1_Text_0:
	.string "Guard$"

VARROCK_NPC_Guard1_Text_1:
	.string "We had an incident the other month\n"
	.string "which was caused by an MvM battle\l"
	.string "getting out of hand.\p"
	.string "For some reason an adventurer thought\n"
	.string "it would be a good idea to unleash a\l"
	.string "Dragon in the square.\p"
	.string "So now we are on duty to make sure no\n"
	.string "more damages come to other buildings.$"

VARROCK_NPC_Guard2_Text_0:
	.string "Welcome to Varrock.\p"
	.string "If you are here to challenge the King to\n"
	.string "an MvM gym battle, then you can find\l"
	.string "him at the palace in the middle of town.$"
