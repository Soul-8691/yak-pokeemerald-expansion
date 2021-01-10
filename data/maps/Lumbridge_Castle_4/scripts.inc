Lumbridge_Castle_4_MapScripts::
	.byte 0


GymBattle1::
	lock
	faceplayer
	msgbox GymBattle1_Text_0
	trainerbattle_single TRAINER_DUKE, GymBattle1_Text_1, GymBattle1_Text_2, GymBattle1Won
	return


GymBattle1Won::
	msgbox GymBattle1Won_Text_0
	msgbox GymBattle1Won_Text_1
	msgbox GymBattle1Won_Text_2
	giveitem ITEM_TM08, 1
	msgbox GymBattle1Won_Text_3
	fadescreen FADE_TO_BLACK
	removeobject 1
	settrainerflag TRAINER_LUMBRIDGE_GYM4
	fadescreen FADE_FROM_BLACK
	release
	return


GymBattle1_Text_0:
	.string "So you've made it to the top!\nCongratulations!$"

GymBattle1_Text_1:
	.string "You wish to challenge me to a battle?\n"
	.string "So be it!\l"
	.string "May the best trainer win!$"

GymBattle1_Text_2:
	.string "You beat me.. Congratulations!$"

GymBattle1Won_Text_0:
	.string "Congratulations! You've managed to\n"
	.string "defeat me. Here is your official GYM\l"
	.string "BADGE, you've definitely earned it.$"

GymBattle1Won_Text_1:
	.string "OBTAINED THE LUMBRIDGE BADGE!$"

GymBattle1Won_Text_2:
	.string "Here is my favorite move. Hopefully it\n"
	.string "will help you on your journey$"

GymBattle1Won_Text_3:
	.string "I suppose you'll be heading to the next\n"
	.string "gym, correct? Then you'd be wanting to\l"
	.string "go to Falador. Might I suggest first\l"
	.string "stopping off at the Wizards' Tower and\l"
	.string "doing some training with Archmage\l"
	.string "Sedridor. Best of luck adventurer! The\l"
	.string "Wizards' Tower is south of Draynor\l"
	.string "Village. Give Archmage Sedridor my\l"
	.string "regards.$"
