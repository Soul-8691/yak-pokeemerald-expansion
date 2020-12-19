Route3_MapScripts::
	.byte 0





Script_Maggie_1::
    lock
    faceplayer
    goto_if_defeated TRAINER_MAGGIE, Script_Maggie_2
    msgbox Text_DIALOG_1_Maggie, MSGBOX_YESNO
    compare VAR_RESULT, NO
    goto_if_eq Script_Maggie_PlayerAnsweredNo
    trainerbattle_single TRAINER_MAGGIE, Text_INTRO_Maggie, Text_DEFEAT_Maggie, Scripts_DEFEATED_Maggie
    release
    end

Text_DIALOG_1_Maggie:
	.string "Hi!\n"
	.string "My name is Maggie.\p"
	.string "Say cha looks pretty strong,\n"
	.string "care for a battle?$"

Script_Maggie_PlayerAnsweredNo:
	msgbox Text_DIALOG_4_Maggie, MSGBOX_NPC
	release
	end

Text_INTRO_Maggie:
	.string "I hope you prepared chaself!$"

Text_DEFEAT_Maggie:
	.string "Sweet, sweet victory.$"

Scripts_DEFEATED_Maggie:
	msgbox Text_DIALOG_2_Maggie, MSGBOX_NPC
	giveitem ITEM_RARE_CANDY, 1
	msgbox Text_DIALOG_3_Maggie, MSGBOX_NPC	
	release
	end

Text_DIALOG_2_Maggie:
	.string "That was quite amusing don'tcha know.\p"
	.string "I have had far too many sweets, here.$"
	
Text_DIALOG_3_Maggie:
	.string "Come back to visit whenever!$"

Text_DIALOG_4_Maggie:
	.string "Thats anything but sweet of cha.$"	
	
	
	
Script_Maggie_2:	
	msgbox Text_DIALOG_5_Maggie, MSGBOX_NPC
	release
	end
	
Text_DIALOG_5_Maggie:
	.string "Oh hi!\n"
	.string "It's cha again!$"		
	
	
	
	
	
	
Script_Wendy_1::
	lock
	faceplayer
	goto_if_defeated TRAINER_MAGGIE, Script_Wendy_2
	msgbox Text_Wendy_1, MSGBOX_NPC
	release
	end
	
Text_Wendy_1:
	.string "Seems like Maggie over there is urging\n"
	.string "for a battle.\p"
	.string "Stop by once in awhile for a quick fix\n"
	.string "won't you?$"


Script_Wendy_2:	
	msgbox Text_Wendy_2, MSGBOX_NPC
	release
	end
	
Text_Wendy_2:
	.string "Hey how's it going?\n"
	.string "Maggie has been in a better mood since\l"
	.string "your last battle.\p"
	.string "She usually becomes to irritating to be\n"
	.string "around without her battle fix.$"
	

	

	
Script_SkeletalOx::
	lock
	msgbox Text_SkeletalOx, MSGBOX_DEFAULT
	release
	end

Text_SkeletalOx:
	.string "Baroo!$"



Script_Cauldron::
	lock
	msgbox Text_Cauldron, MSGBOX_DEFAULT
	release
	end

Text_Cauldron:
	.string "Something smells... Interesting.$"












Script_Skiller_Trainer::
	msgbox Text_Skiller_Trainer, MSGBOX_NPC
	end

Text_Skiller_Trainer:
	.string "Let's Battle!$"
