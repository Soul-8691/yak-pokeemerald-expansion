Lumbridge_MapScripts::
	.byte 0



Script_GnomeBoiKevin::
	msgbox Text_GnomeBoiKevin_1, MSGBOX_NPC
	
	
	giveitem ITEM_RARE_CANDY, 99
	giveitem ITEM_AIR_RUNE, 1
	giveitem ITEM_WATER_RUNE, 1
	giveitem ITEM_EARTH_RUNE, 1
	giveitem ITEM_FIRE_RUNE, 1
//	giveitem ITEM_MIND_RUNE, 1
	
	checkitem ITEM_MACH_BIKE, 1
	compare VAR_RESULT, 1
	goto_if_eq HaveMACH_BIKE
	giveitem ITEM_MACH_BIKE, 1
	
	
	giveitem ITEM_OLD_ROD, 1
	giveitem ITEM_GOOD_ROD, 1
	giveitem ITEM_SUPER_ROD, 1
	giveitem ITEM_BICYCLE, 1
	giveitem ITEM_ACRO_BIKE, 1
	
	
	msgbox Text_GnomeBoiKevin_2, MSGBOX_NPC
	end



HaveMACH_BIKE:
	msgbox Text_GnomeBoiKevin_3, MSGBOX_NPC
	return






Text_GnomeBoiKevin_1:
	.string "Hey there!\n"
	.string "I'm lil Gnome boi Kevin.\p"
	.string "The great overlords of this world\n"
	.string "have tasked me with gifting you these\l"
	.string "wonderful l33t not hacked at all items!$"

Text_GnomeBoiKevin_2:
		.string "... What's that?\p"
		.string "Why am I holding a Rotten Potato?\p"
		.string "No reason...\p"
		.string "...$"
		
Text_GnomeBoiKevin_3:
		.string "You already have the Bike.$"