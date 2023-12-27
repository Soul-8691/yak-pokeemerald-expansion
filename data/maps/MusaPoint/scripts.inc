MusaPoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MusaPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 15
	return


NPC_MUSAPOINT_SAILOR::
	lock
	faceplayer
	namebox NPC_MUSAPOINT_SAILOR_Text_0
	msgbox NPC_MUSAPOINT_SAILOR_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NPC_MUSAPOINT_SAILOR_2
	msgbox NPC_MUSAPOINT_SAILOR_Text_3
NPC_MUSAPOINT_SAILOR_1:
	waitmessage
	hidenamebox
	release
	end

NPC_MUSAPOINT_SAILOR_2:
	msgbox NPC_MUSAPOINT_SAILOR_Text_2
	warp MAP_PORT_SARIM, 8, 0, 0
	goto NPC_MUSAPOINT_SAILOR_1


NPC_LegendArts::
	lock
	faceplayer
	namebox NPC_LegendArts_Text_0
	msgbox NPC_LegendArts_Text_1
	waitmessage
	hidenamebox
	release
	end


ITEM_MUSA_POINT_1::
	finditem ITEM_PURPLE_SWEETS
	end


NPC_MUSA_POINT_1::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_2::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_3::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_4::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_4_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_5::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_6::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_6_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_7::
	lock
	faceplayer
	msgbox NPC_MUSA_POINT_7_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_MUSA_POINT_8::
	lock
	faceplayer
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	closemessage
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_1::
	trainerbattle_single TRAINER_Soffan_and_Quo, BATTLE_MUSA_POINT_TRAINER_1_Text_0, BATTLE_MUSA_POINT_TRAINER_1_Text_1
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_2::
	trainerbattle_single TRAINER_Soffan_and_Quo, BATTLE_MUSA_POINT_TRAINER_1_Text_0, BATTLE_MUSA_POINT_TRAINER_1_Text_1
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_3::
	trainerbattle_single TRAINER_Soffan_and_Quo, BATTLE_MUSA_POINT_TRAINER_1_Text_0, BATTLE_MUSA_POINT_TRAINER_1_Text_1
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	hidenamebox
	release
	end


BATTLE_MUSA_POINT_TRAINER_4::
	trainerbattle_single TRAINER_Soffan_and_Quo, BATTLE_MUSA_POINT_TRAINER_1_Text_0, BATTLE_MUSA_POINT_TRAINER_1_Text_1
	namebox NPC_MUSA_POINT_1_Text_0
	msgbox NPC_MUSA_POINT_1_Text_1
	hidenamebox
	release
	end


NPC_MUSAPOINT_SAILOR_Text_0:
	.string "SAILOR$"

NPC_MUSAPOINT_SAILOR_Text_1:
	.string "Hi, there would you like to board the\n"
	.string "boat to Port Sarim?$"

NPC_MUSAPOINT_SAILOR_Text_2:
	.string "All aboard!\l"
	.string "We set sail for Port Sarim!$"

NPC_MUSAPOINT_SAILOR_Text_3:
	.string "Suit yourself.$"

NPC_LegendArts_Text_0:
	.string "LEGEND ARTS$"

NPC_LegendArts_Text_1:
	.string "What…{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}…\n"
	.string "How did I get here?$"

NPC_MUSA_POINT_1_Text_0:
	.string "Cupholder$"

NPC_MUSA_POINT_1_Text_1:
	.string "Hello, I am a Cupholder.$"

NPC_MUSA_POINT_2_Text_0:
	.string "30 years ago I buried me treasure here.\p"
	.string "Now I've spent 5 years digging on the\n"
	.string "beach to find it only to realize that\l"
	.string "maybe I buried it in Brimhaven?$"

NPC_MUSA_POINT_3_Text_0:
	.string "The Customs Officers constantly keep\n"
	.string "us under supervision, apparently they\l"
	.string "dont want Karamja Rum to reach the\l"
	.string "mainland.\p"
	.string "Its all a conspiracy to keep the White\n"
	.string "knights in power I tell you!$"

NPC_MUSA_POINT_4_Text_0:
	.string "Up north is a fishing spot, you might\n"
	.string "find yourself a battle there with the\l"
	.string "local fishers.$"

NPC_MUSA_POINT_5_Text_0:
	.string "I once saw a Polar Bear in this well, but\n"
	.string "no one believes me.\p"
	.string "They all just think I was drunk.\p"
	.string "But I wasn't!\p"
	.string "… Or was I…$"

NPC_MUSA_POINT_6_Text_0:
	.string "The banana farm is the pride and joy of\n"
	.string "Musa Point.\p"
	.string "That or the bar is the only thing\n"
	.string "keeping us a landmark really.$"

NPC_MUSA_POINT_7_Text_0:
	.string "Welcome to Karamja.\p"
	.string "Make sure to prepare some antipoisons.$"

BATTLE_MUSA_POINT_TRAINER_1_Text_0:
	.string "Battle me, I am a Cupholder.$"

BATTLE_MUSA_POINT_TRAINER_1_Text_1:
	.string "Cupholder has lost.$"
