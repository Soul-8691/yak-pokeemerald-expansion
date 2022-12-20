Route13_MapScripts::
	.byte 0


VARROCK_NPC_RATBURGUS::
	faceplayer
	msgbox VARROCK_NPC_RATBURGUS_Text_0
	closemessage
	hidenamebox
	release
	end


ROUTE14_QUESTER::
	faceplayer
	msgbox ROUTE14_QUESTER_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_1::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_1, BATTLE_ROUTE13_DARKWIZARD_1_Text_0, BATTLE_ROUTE13_DARKWIZARD_1_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_2::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_2, BATTLE_ROUTE13_DARKWIZARD_2_Text_0, BATTLE_ROUTE13_DARKWIZARD_2_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_3::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_3, BATTLE_ROUTE13_DARKWIZARD_3_Text_0, BATTLE_ROUTE13_DARKWIZARD_3_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_4::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_4, BATTLE_ROUTE13_DARKWIZARD_4_Text_0, BATTLE_ROUTE13_DARKWIZARD_4_Text_1
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_4_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE13_DARKWIZARD_5::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_5, BATTLE_ROUTE13_DARKWIZARD_5_Text_0, BATTLE_ROUTE13_DARKWIZARD_5_Text_0
	namebox BATTLE_ROUTE13_DARKWIZARD_1_Text_2
	msgbox BATTLE_ROUTE13_DARKWIZARD_5_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_6, BATTLE_ROUTE13_TRAINER_1_Text_0, BATTLE_ROUTE13_TRAINER_1_Text_1
	namebox BATTLE_ROUTE13_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_7, BATTLE_ROUTE13_TRAINER_2_Text_0, BATTLE_ROUTE13_TRAINER_2_Text_1
	namebox BATTLE_ROUTE13_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_8, BATTLE_ROUTE13_TRAINER_3_Text_0, BATTLE_ROUTE13_TRAINER_3_Text_1
	namebox BATTLE_ROUTE13_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE13_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE13_TRAINER_9, BATTLE_ROUTE13_TRAINER_4_Text_0, BATTLE_ROUTE13_TRAINER_4_Text_1
	namebox BATTLE_ROUTE13_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE13_TRAINER_4_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE14_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE14_TRAINER_1, BATTLE_ROUTE14_TRAINER_1_Text_0, BATTLE_ROUTE14_TRAINER_1_Text_1
	namebox BATTLE_ROUTE14_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE14_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE14_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE14_TRAINER_2, BATTLE_ROUTE14_TRAINER_2_Text_0, BATTLE_ROUTE14_TRAINER_2_Text_1
	namebox BATTLE_ROUTE14_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE14_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_1::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE16_TRAINER_1_Text_0, BATTLE_ROUTE16_TRAINER_1_Text_1
	namebox BATTLE_ROUTE16_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE16_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE16_TRAINER_2::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE16_TRAINER_2_Text_0, BATTLE_ROUTE16_TRAINER_2_Text_1
	namebox BATTLE_ROUTE16_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE16_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE17_TRAINER_1::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE17_TRAINER_1_Text_0, BATTLE_ROUTE17_TRAINER_1_Text_1
	namebox BATTLE_ROUTE17_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE17_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE17_TRAINER_2::
	trainerbattle_single TRAINER_RimmingtonMines_Miner, BATTLE_ROUTE17_TRAINER_2_Text_0, BATTLE_ROUTE17_TRAINER_2_Text_1
	namebox BATTLE_ROUTE16_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE17_TRAINER_2_Text_1
	hidenamebox
	release
	end


VARROCK_NPC_RATBURGUS_Text_0:
	.string "CUPHOLDER$"

ROUTE14_QUESTER_Text_0:
	.string "This is the champions guild.\p"
	.string "Make yourself worthy and you may one\n"
	.string "day become a member.$"

BATTLE_ROUTE13_DARKWIZARD_1_Text_0:
	.string "Beware the might of Zamorak!$"

BATTLE_ROUTE13_DARKWIZARD_1_Text_1:
	.string "Praise lord Zamorak!$"

BATTLE_ROUTE13_DARKWIZARD_1_Text_2:
	.string "DARK WIZARD$"

BATTLE_ROUTE13_DARKWIZARD_2_Text_0:
	.string "tHIS Circle is taken, get lost kid.$"

BATTLE_ROUTE13_DARKWIZARD_2_Text_1:
	.string "And let that be a warning.$"

BATTLE_ROUTE13_DARKWIZARD_3_Text_0:
	.string "For the glory of Delrith!$"

BATTLE_ROUTE13_DARKWIZARD_3_Text_1:
	.string "Just wait until we have the might of\n"
	.string "Delrith on our side.$"

BATTLE_ROUTE13_DARKWIZARD_4_Text_0:
	.string "Step one: Aquire the circle.\p"
	.string "Check.\p"
	.string "Step two: Summon the Demon…\p"
	.string "Hmmm…\p"
	.string "Hey, you! You are not supposed to be\n"
	.string "here!$"

BATTLE_ROUTE13_DARKWIZARD_4_Text_1:
	.string "At least I know step 4 is to worship the\n"
	.string "demon.$"

BATTLE_ROUTE13_DARKWIZARD_4_Text_2:
	.string "At least I know step 4 is to worship the\n"
	.string "Demon.$"

BATTLE_ROUTE13_DARKWIZARD_5_Text_0:
	.string "$"

BATTLE_ROUTE13_TRAINER_1_Text_0:
	.string "Where is Varok?$"

BATTLE_ROUTE13_TRAINER_1_Text_1:
	.string "Oh it is pronounced Varrock?$"

BATTLE_ROUTE13_TRAINER_1_Text_2:
	.string "NOOB$"

BATTLE_ROUTE13_TRAINER_1_Text_3:
	.string "Where is Varok?\p"
	.string "Oh it is pronounced Varrock?\p"
	.string "That explains why I couldn't find it on\n"
	.string "my Newcomer Map.\p"
	.string "Thanks bud.$"

BATTLE_ROUTE13_TRAINER_2_Text_0:
	.string "I am full of energy after jumping over\n"
	.string "that gate!$"

BATTLE_ROUTE13_TRAINER_2_Text_1:
	.string "I have run energy for days.$"

BATTLE_ROUTE13_TRAINER_2_Text_2:
	.string "AGILE$"

BATTLE_ROUTE13_TRAINER_2_Text_3:
	.string "Beware on the road to Varrock.\p"
	.string "Some shady people have started\n"
	.string "residing in the old ruins near the\l"
	.string "gates.\p"
	.string "You may want to take the east path\n"
	.string "instead.$"

BATTLE_ROUTE13_TRAINER_3_Text_0:
	.string "Go fish, get lost.$"

BATTLE_ROUTE13_TRAINER_3_Text_1:
	.string "No seriously.\p"
	.string "Get lost and try fishing.$"

BATTLE_ROUTE13_TRAINER_3_Text_2:
	.string "Willford$"

BATTLE_ROUTE13_TRAINER_4_Text_0:
	.string "The guide tells me to fight you, lets do\n"
	.string "this!$"

BATTLE_ROUTE13_TRAINER_4_Text_1:
	.string "Says nothing in the guide on how to\n"
	.string "beat you or how to cope with my loss.\p"
	.string "Do I just wing it then?$"

BATTLE_ROUTE13_TRAINER_4_Text_2:
	.string "QUESTER$"

BATTLE_ROUTE14_TRAINER_1_Text_0:
	.string "Dont disturb me!$"

BATTLE_ROUTE14_TRAINER_1_Text_1:
	.string "You woke my pet rock up…$"

BATTLE_ROUTE14_TRAINER_1_Text_2:
	.string "MINER$"

BATTLE_ROUTE14_TRAINER_2_Text_0:
	.string "This spot is taken, leave!$"

BATTLE_ROUTE14_TRAINER_2_Text_1:
	.string "Well I guess we can share a little bit…$"

BATTLE_ROUTE16_TRAINER_1_Text_0:
	.string "Stop right there timbering scum.$"

BATTLE_ROUTE16_TRAINER_1_Text_1:
	.string "The sawmill is up north, but all I hear\n"
	.string "when I go there is meowing.$"

BATTLE_ROUTE16_TRAINER_1_Text_2:
	.string "WC$"

BATTLE_ROUTE16_TRAINER_2_Text_0:
	.string "Watch out for the dangers of Eastern\n"
	.string "Mishtalin!$"

BATTLE_ROUTE16_TRAINER_2_Text_1:
	.string "Beware of bears and giant rats out\n"
	.string "there stranger.$"

BATTLE_ROUTE16_TRAINER_2_Text_2:
	.string "GUARD$"

BATTLE_ROUTE17_TRAINER_1_Text_0:
	.string "To get to Morytania I need to get past\n"
	.string "those blasted bats…\p"
	.string "Now if I only- WAH!$"

BATTLE_ROUTE17_TRAINER_1_Text_1:
	.string "You scared me there.\p"
	.string "I thought you were a bat.$"

BATTLE_ROUTE17_TRAINER_1_Text_2:
	.string "SKILLER$"

BATTLE_ROUTE17_TRAINER_2_Text_0:
	.string "Stop!\p"
	.string "Your woodcutting level is too low to\n"
	.string "enter the lumberyard.$"

BATTLE_ROUTE17_TRAINER_2_Text_1:
	.string "I think you levelled up after out fight.\p"
	.string "You may pass.$"
