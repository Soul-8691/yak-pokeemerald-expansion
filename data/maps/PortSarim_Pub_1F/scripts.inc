PortSarim_Pub_1F_MapScripts::
	.byte 0


NPC_PortSarimPub_BARTENDER::
	lock
	faceplayer
	namebox NPC_PortSarimPub_BARTENDER_Text_0
	msgbox NPC_PortSarimPub_BARTENDER_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_NPC_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_1_Text_0
	msgbox NPC_PortSarimPub_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_NPC_2::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_NPC_2_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_Pirate_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_1_Text_0
	goto_if_unset FLAG_UNUSED_0x935, NPC_PortSarimPub_Pirate_1_2
NPC_PortSarimPub_Pirate_1_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Pirate_1_2:
	msgbox NPC_PortSarimPub_Pirate_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Pirate_1_4
	goto NPC_PortSarimPub_Pirate_1_1

NPC_PortSarimPub_Pirate_1_4:
	hidenamebox
	setflag FLAG_UNUSED_0x935
	trainerbattle_no_intro TRAINER_ROUTE24_WOODCUTTER_2, NPC_PortSarimPub_Pirate_1_Text_2
	goto NPC_PortSarimPub_Pirate_1_1


NPC_PortSarimPub_Pirate_2::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_2_Text_0
	goto_if_unset FLAG_UNUSED_0x936, NPC_PortSarimPub_Pirate_2_2
NPC_PortSarimPub_Pirate_2_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Pirate_2_2:
	msgbox NPC_PortSarimPub_Pirate_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Pirate_2_4
	goto NPC_PortSarimPub_Pirate_2_1

NPC_PortSarimPub_Pirate_2_4:
	hidenamebox
	setflag FLAG_UNUSED_0x936
	trainerbattle_no_intro TRAINER_ROUTE24_WOODCUTTER_2, NPC_PortSarimPub_Pirate_1_Text_2
	goto NPC_PortSarimPub_Pirate_2_1


NPC_PortSarimPub_Dwarf::
	lock
	faceplayer
	namebox NPC_PortSarimPub_Dwarf_Text_0
	msgbox NPC_PortSarimPub_Dwarf_Text_1
	goto_if_unset FLAG_UNUSED_0x937, NPC_PortSarimPub_Dwarf_2
NPC_PortSarimPub_Dwarf_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Dwarf_2:
	msgbox NPC_PortSarimPub_Pirate_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Dwarf_4
	goto NPC_PortSarimPub_Dwarf_1

NPC_PortSarimPub_Dwarf_4:
	hidenamebox
	setflag FLAG_UNUSED_0x937
	trainerbattle_no_intro TRAINER_ROUTE24_WOODCUTTER_2, NPC_PortSarimPub_Pirate_1_Text_2
	goto NPC_PortSarimPub_Dwarf_1


NPC_PortSarimPub_PUBCRAWL::
	lock
	faceplayer
	namebox NPC_PortSarimPub_PUBCRAWL_Text_0
	msgbox NPC_PortSarimPub_PUBCRAWL_Text_1
	hidenamebox
	release
	end


NPC_PortSarim_Church_Monk_1::
	lock
	faceplayer
	namebox NPC_PortSarim_Church_Monk_1_Text_0
	msgbox NPC_PortSarim_Church_Monk_1_Text_1
	hidenamebox
	release
	end


NPC_PortSarim_Church_Monk_2::
	lock
	faceplayer
	namebox NPC_PortSarim_Church_Monk_1_Text_0
	msgbox NPC_PortSarim_Church_Monk_2_Text_0
	hidenamebox
	release
	end


NPC_PortSarimPub_BARTENDER_Text_0:
	.string "BARTENDER$"

NPC_PortSarimPub_BARTENDER_Text_1:
	.string "Here at the Battle Pub, adventurers can\n"
	.string "challenge each other to battles.\p"
	.string "The loser must pay for their meals.\p"
	.string "I would say that it is making me profit,\n"
	.string "but the amount of damage that they\l"
	.string "cause makes me break about even.$"

NPC_PortSarimPub_NPC_1_Text_0:
	.string "SAILOR$"

NPC_PortSarimPub_NPC_1_Text_1:
	.string "There is an unspoken rule where you can\n"
	.string "only battle the same person once per\l"
	.string "day.\p"
	.string "I heard this rule came about after too\n"
	.string "many drunks lost all of their gold\l"
	.string "peices.$"

NPC_PortSarimPub_NPC_2_Text_0:
	.string "PIRATE$"

NPC_PortSarimPub_NPC_2_Text_1:
	.string "I heard that far off to the east they\n"
	.string "hold contests to show off the beauty\l"
	.string "of monsters instead of battling with\l"
	.string "them.\p"
	.string "Disgusting!$"

NPC_PortSarimPub_Pirate_1_Text_0:
	.string "The customs officer confiscates all\n"
	.string "Karamja Rum.\p"
	.string "She is the reason the Rum is always\n"
	.string "gone.$"

NPC_PortSarimPub_Pirate_1_Text_1:
	.string "Do you wish to challenge them to a\n"
	.string "battle?$"

NPC_PortSarimPub_Pirate_1_Text_2:
	.string "…$"

NPC_PortSarimPub_Pirate_2_Text_0:
	.string "AYE!\p"
	.string "This is Port Sarim's Battle Pub.$"

NPC_PortSarimPub_Dwarf_Text_0:
	.string "DWARF$"

NPC_PortSarimPub_Dwarf_Text_1:
	.string "Outrageous!\p"
	.string "The barmaid does not want to sell me\n"
	.string "drinks because I am a miner!$"

NPC_PortSarimPub_PUBCRAWL_Text_0:
	.string "BARBARIAN$"

NPC_PortSarimPub_PUBCRAWL_Text_1:
	.string "Are you here for the Pubcrawl\n"
	.string "challenge?\p"
	.string "No?\p"
	.string "If you are interested in signing up you\n"
	.string "should go to Barbarian Village and talk\l"
	.string "to our champion about it.$"

NPC_PortSarim_Church_Monk_1_Text_0:
	.string "MONK$"

NPC_PortSarim_Church_Monk_1_Text_1:
	.string "The other night I saw a drunk throwing\n"
	.string "things into the ocean.\p"
	.string "He was shouting something about\n"
	.string "Mudskippers.\p"
	.string "I don't even know what a Mudskipper is.$"

NPC_PortSarim_Church_Monk_2_Text_0:
	.string "Not many people visit our Church out\n"
	.string "here.\p"
	.string "I don't think many people know of its\n"
	.string "existance.$"
