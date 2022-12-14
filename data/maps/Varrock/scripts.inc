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


VARROCK_CLEANER::
	faceplayer
	namebox VARROCK_CLEANER_Text_0
	msgbox VARROCK_CLEANER_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Guard3::
	faceplayer
	namebox VARROCK_NPC_Guard1_Text_0
	msgbox VARROCK_NPC_Guard3_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Archaeologist::
	faceplayer
	namebox VARROCK_NPC_Archaeologist_Text_0
	msgbox VARROCK_NPC_Archaeologist_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Quester::
	faceplayer
	namebox VARROCK_NPC_Quester_Text_0
	msgbox VARROCK_NPC_Quester_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Willough::
	faceplayer
	namebox VARROCK_NPC_Willough_Text_0
	msgbox VARROCK_NPC_Willough_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Shilop::
	faceplayer
	namebox VARROCK_NPC_Shilop_Text_0
	msgbox VARROCK_NPC_Shilop_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Baraek::
	faceplayer
	namebox VARROCK_NPC_Baraek_Text_0
	msgbox VARROCK_NPC_Baraek_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_MAN_1::
	faceplayer
	msgbox VARROCK_NPC_MAN_1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_MAN_2::
	faceplayer
	msgbox VARROCK_NPC_MAN_2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Halen::
	faceplayer
	namebox VARROCK_NPC_Halen_Text_0
	msgbox VARROCK_NPC_Halen_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Halen2::
	faceplayer
	msgbox VARROCK_NPC_Halen2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCK_NPC_Apothecary::
	lock
	faceplayer
	namebox VARROCK_NPC_Apothecary_Text_0
	msgbox VARROCK_NPC_Apothecary_Text_1
	waitmessage
	hidenamebox
	pokemart ApothecaryVarrock
	msgbox VARROCK_NPC_Apothecary_Text_2
	release
	end


    .align 2
ApothecaryVarrock:
    .2byte ITEM_POTION_HP
    .2byte ITEM_POTION_ATT
    .2byte ITEM_POTION_DEF
    .2byte ITEM_POTION_SPATT
	.2byte ITEM_POTION_SPDEF
	.2byte ITEM_POTION_SPEED
    .2byte ITEM_NONE
    release
    end

NPC_VARROCKGUARD_BLOCKADE_1::
	lock
	faceplayer
	namebox VARROCK_NPC_Guard1_Text_0
	msgbox NPC_VARROCKGUARD_BLOCKADE_1_Text_0
	goto_if_set FLAG_BADGE03_GET, NPC_VARROCKGUARD_BLOCKADE_1_2
	hidenamebox
	closemessage
	release
	end

NPC_VARROCKGUARD_BLOCKADE_1_2:
	msgbox NPC_VARROCKGUARD_BLOCKADE_1_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_ARCHAEOLOGIST_BLOCKADE_1::
	lock
	faceplayer
	namebox VARROCK_NPC_Archaeologist_Text_0
	msgbox NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_0
	goto_if_set FLAG_BADGE07_GET, NPC_ARCHAEOLOGIST_BLOCKADE_1_2
	hidenamebox
	closemessage
	release
	end

NPC_ARCHAEOLOGIST_BLOCKADE_1_2:
	msgbox NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_1
	hidenamebox
	closemessage
	release
	end


BATTLE_Varrock_Max::
	namebox BATTLE_Varrock_Max_Text_0
	msgbox BATTLE_Varrock_Max_Text_1
	hidenamebox
	release
	end


NPC_Varrock_MaxRock::
	msgbox NPC_Varrock_MaxRock_Text_0
	hidenamebox
	release
	end


BATTLE_Soffan_and_Quo::
	trainerbattle_single TRAINER_Soffan_and_Quo, BATTLE_Soffan_and_Quo_Text_0, BATTLE_Soffan_and_Quo_Text_0
	msgbox BATTLE_Soffan_and_Quo_Text_0
	hidenamebox
	release
	end


NPC_VANNAKA::
	faceplayer
	namebox NPC_VANNAKA_Text_0
	msgbox NPC_VANNAKA_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_SLAYERMASTERLIST::
	msgbox NPC_SLAYERMASTERLIST_Text_0
	msgbox NPC_SLAYERMASTERLIST_Text_1
	msgbox NPC_SLAYERMASTERLIST_Text_2
	closemessage
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

VARROCK_CLEANER_Text_0:
	.string "Cleaner$"

VARROCK_CLEANER_Text_1:
	.string "Sweeping the streets is hard work but\n"
	.string "someone needs to keep this town clean.$"

VARROCK_NPC_Guard3_Text_0:
	.string "I sure could use a cup of tea…$"

VARROCK_NPC_Archaeologist_Text_0:
	.string "Archaeologist$"

VARROCK_NPC_Archaeologist_Text_1:
	.string "I recently excavated a relic which\n"
	.string "appears to be from a long lost city.\p"
	.string "We put it on display in the museum.$"

VARROCK_NPC_Quester_Text_0:
	.string "Quester$"

VARROCK_NPC_Quester_Text_1:
	.string "I wanted to go on a quest but was told I\n"
	.string "did not have enough Kudos.\p"
	.string "I do not get it, do they want help or\n"
	.string "not?$"

VARROCK_NPC_Willough_Text_0:
	.string "Willough$"

VARROCK_NPC_Willough_Text_1:
	.string "Our mum sent us to town to tell Fluffs\n"
	.string "to come home but now she is stuck up on\l"
	.string "the castle wall and refuses to come\l"
	.string "down.$"

VARROCK_NPC_Shilop_Text_0:
	.string "Shilop$"

VARROCK_NPC_Shilop_Text_1:
	.string "Here kitty, kitty!\p"
	.string "Fluffs come down lets go home!$"

VARROCK_NPC_Baraek_Text_0:
	.string "Baraek$"

VARROCK_NPC_Baraek_Text_1:
	.string "I am selling newspapers 50GP each.\p"
	.string "Are you interested in one?$"

VARROCK_NPC_MAN_1_Text_0:
	.string "Some monsters can evolve if they are in\n"
	.string "different areas of the Gielinor.\p"
	.string "We call them regional variants.\p"
	.string "An example would be the Chickens we\n"
	.string "have here in Varrock differ greatly\l"
	.string "compared to those in Lumbridge and\l"
	.string "Karamja.$"

VARROCK_NPC_MAN_2_Text_0:
	.string "You know how adventurers use potions\n"
	.string "to help boost their stats while\l"
	.string "fighting?\p"
	.string "Well the same can be done with\n"
	.string "monsters!\p"
	.string "Next time you are at a store you should\n"
	.string "pick some up, they can come in handy.$"

VARROCK_NPC_Halen_Text_0:
	.string "Haig Halen$"

VARROCK_NPC_Halen_Text_1:
	.string "Very sorry, but we are closed right now.$"

VARROCK_NPC_Halen2_Text_0:
	.string "Honestly I think this is a joke.$"

VARROCK_NPC_Apothecary_Text_0:
	.string "Apothecary$"

VARROCK_NPC_Apothecary_Text_1:
	.string "Welcome to my Potion store!\p"
	.string "How may I help you?$"

VARROCK_NPC_Apothecary_Text_2:
	.string "Thank you, come again!$"

NPC_VARROCKGUARD_BLOCKADE_1_Text_0:
	.string "Sorry, by order of the King only those\n"
	.string "who have obtained the Varrock Badge\l"
	.string "may pass here.$"

NPC_VARROCKGUARD_BLOCKADE_1_Text_1:
	.string "You have the Varrock Badge!\p"
	.string "You may pass, but be cautious.\p"
	.string "Dangerous Monsters lurk beyond here.$"

NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_0:
	.string "Stop!\p"
	.string "Please wait awhile, we recently\n"
	.string "uncovered some mysterious ruins within\l"
	.string "our digsite.\p"
	.string "We are in the middle of excervating\n"
	.string "them and cannot risk being disterbed.$"

NPC_ARCHAEOLOGIST_BLOCKADE_1_Text_1:
	.string "You should see it!\p"
	.string "The city of senstinstin has been found!$"

BATTLE_Varrock_Max_Text_0:
	.string "Max$"

BATTLE_Varrock_Max_Text_1:
	.string "Come back and talk to me once you have\n"
	.string "achieved something great.$"

NPC_Varrock_MaxRock_Text_0:
	.string "It is a massive rock!\p"
	.string "It appears to be alive.$"

BATTLE_Soffan_and_Quo_Text_0:
	.string "…$"

NPC_VANNAKA_Text_0:
	.string "Vannaka$"

NPC_VANNAKA_Text_1:
	.string "My name is Vannaka I have the honour of\n"
	.string "being a Gym Leader for the MvM\l"
	.string "Championships and I am also apart of\l"
	.string "Slayer Masters.$"

NPC_SLAYERMASTERLIST_Text_0:
	.string "It is a list containing all of the Slayer\n"
	.string "Masters.$"

NPC_SLAYERMASTERLIST_Text_1:
	.string "Vannaka - Arrav Badge.\p"
	.string "Turael - Keiper Badge.\p"
	.string "Duradel - Bwana Badge.\p"
	.string "Chaeldar - Grisial Badge.\p"
	.string "Mazchna - Sanguine Badge.\p"
	.string "Krystilla - Forinthry Badge.\p"
	.string "Nieve - Umesco Badge.\p"
	.string "Konar - Kaal Badge.$"

NPC_SLAYERMASTERLIST_Text_2:
	.string "After obtaining all Slayer Master\n"
	.string "Badges you will then be eligible to\l"
	.string "participate in the… …\p"
	.string "The page is torn.$"
