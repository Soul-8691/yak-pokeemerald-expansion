Port_Sarim_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Port_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Port_Sarim_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


Port_Sarim_HAM_EVENT_TRIGGER::
	goto_if_unset FLAG_EVENT_PORTSARIM_HAM_BOAT, Port_Sarim_HAM_EVENT_TRIGGER_2
	release
	end

Port_Sarim_HAM_EVENT_TRIGGER_2:
	lock
	delay 60
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, PORTSARIM_HAM_CAMERA_1
	delay 40
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	waitmovement 0
	special RemoveCameraObject
	delay 60
	PlaySE SE_PIN
	applymovement 25, PORTSARIM_HAM_LEADER_1
	namebox Port_Sarim_HAM_EVENT_TRIGGER_Text_0
	msgbox Port_Sarim_HAM_EVENT_TRIGGER_Text_1
	waitmovement 0
	waitmessage
	hidenamebox
	applymovement 21, PORTSARIM_HAM_MEMBER_2
	namebox Port_Sarim_HAM_EVENT_TRIGGER_Text_2
	msgbox Port_Sarim_HAM_EVENT_TRIGGER_Text_3
	waitmovement 0
	waitmessage
	hidenamebox
	applymovement 25, PORTSARIM_HAM_LEADER_3
	namebox Port_Sarim_HAM_EVENT_TRIGGER_Text_0
	msgbox Port_Sarim_HAM_EVENT_TRIGGER_Text_4
	waitmovement 0
	waitmessage
	hidenamebox
	namebox Port_Sarim_HAM_EVENT_TRIGGER_Text_2
	msgbox Port_Sarim_HAM_EVENT_TRIGGER_Text_5
	waitmessage
	hidenamebox
	namebox Port_Sarim_HAM_EVENT_TRIGGER_Text_0
	msgbox Port_Sarim_HAM_EVENT_TRIGGER_Text_6
	waitmessage
	hidenamebox
	closemessage
	applymovement 25, PORTSARIM_HAM_LEADER_4
	waitmovement 0
	fadescreen FADE_TO_BLACK
	removeobject 21
	removeobject 22
	removeobject 23
	removeobject 24
	removeobject 25
	removeobject 26
	setflag FLAG_EVENT_PORTSARIM_HAM_BOAT
	fadescreen FADE_FROM_BLACK
	applymovement 27, PORTSARIM_HAM_BOAT
	waitmovement 0
	removeobject 27
	delay 10
	savebgm MUS_DUMMY
	fadedefaultbgm
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, PORTSARIM_HAM_CAMERA_2
	waitmovement 0
	special RemoveCameraObject
	delay 20
	release
	end


PORTSARIM_HAM_LEADER_1:
	emote_exclamation_mark
	delay_8
	walk_in_place_left
	walk_in_place_left
	step_end

PORTSARIM_HAM_MEMBER_2:
	jump_in_place_right
	jump_in_place_right
	delay_4
	walk_in_place_right
	step_end

PORTSARIM_HAM_LEADER_3:
	jump_in_place_left
	step_end

PORTSARIM_HAM_LEADER_4:
	face_down
	step_end

PORTSARIM_HAM_BOAT:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

PORTSARIM_HAM_CAMERA_1:
	walk_slow_right
	walk_slow_diag_southeast
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	step_end

PORTSARIM_HAM_CAMERA_2:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_diag_northwest
	walk_slow_left
	step_end

NPC_FLAGRESETER::
	lock
	faceplayer
	playmoncry SPECIES_MAREEP, 0
	clearflag FLAG_EVENT_PORTSARIM_HAM_BOAT
	msgbox NPC_FLAGRESETER_Text_0
	waitmoncry
	waitmessage
	release
	end


NPC_SEAGULL::
	lock
	faceplayer
	playmoncry SPECIES_WINGULL, 0
	msgbox NPC_SEAGULL_Text_0
	waitmoncry
	release
	end


NPC_PORTSARIM_BETTY::
	lock
	faceplayer
	namebox NPC_PORTSARIM_BETTY_Text_0
	msgbox NPC_PORTSARIM_BETTY_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_BRAIN::
	lock
	faceplayer
	namebox NPC_PORTSARIM_BRAIN_Text_0
	msgbox NPC_PORTSARIM_BRAIN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_CAPTIAN_TOBIAS::
	lock
	faceplayer
	namebox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_0
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_1
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_2
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NPC_PORTSARIM_CAPTIAN_TOBIAS_2
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_5
NPC_PORTSARIM_CAPTIAN_TOBIAS_1:
	waitmessage
	hidenamebox
	release
	end

NPC_PORTSARIM_CAPTIAN_TOBIAS_2:
	msgbox NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_4
	warp MAP_MUSA_POINT, 2, 0, 0
	goto NPC_PORTSARIM_CAPTIAN_TOBIAS_1


NPC_PORTSARIM_CREWMAN_1::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_CREWMAN_1_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_CREWMAN_2::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_CREWMAN_2_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_GERRANT::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GERRANT_Text_0
	msgbox NPC_PORTSARIM_GERRANT_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_GRUM::
	lock
	faceplayer
	namebox NPC_PORTSARIM_GRUM_Text_0
	msgbox NPC_PORTSARIM_GRUM_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_KLARENSE::
	lock
	faceplayer
	namebox NPC_PORTSARIM_KLARENSE_Text_0
	msgbox NPC_PORTSARIM_KLARENSE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_LORRIS::
	lock
	faceplayer
	namebox NPC_PORTSARIM_LORRIS_Text_0
	msgbox NPC_PORTSARIM_LORRIS_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_1::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_NPC_1_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_MONK_1::
	lock
	faceplayer
	namebox NPC_PORTSARIM_MONK_1_Text_0
	msgbox NPC_PORTSARIM_MONK_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_MONK_2::
	lock
	faceplayer
	namebox NPC_PORTSARIM_MONK_1_Text_0
	msgbox NPC_PORTSARIM_MONK_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_2::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_NPC_2_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_NPC_3::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_NPC_3_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_NPC_4::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_NPC_4_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_NPC_5::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_NPC_5_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_SIGNPOST::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_SIGNPOST_Text_0
	waitmessage
	release
	end


NPC_PORTSARIM_REDBEARD_FRANK::
	lock
	faceplayer
	namebox NPC_PORTSARIM_REDBEARD_FRANK_Text_0
	msgbox NPC_PORTSARIM_REDBEARD_FRANK_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_6::
	lock
	faceplayer
	msgbox NPC_PORTSARIM_NPC_6_Text_0
	msgbox NPC_PORTSARIM_NPC_6_Text_1
	msgbox NPC_PORTSARIM_NPC_6_Text_2
	waitmessage
	release
	end


NPC_PORTSARIM_VOID_SQUIRE::
	lock
	faceplayer
	namebox NPC_PORTSARIM_VOID_SQUIRE_Text_0
	msgbox NPC_PORTSARIM_VOID_SQUIRE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_THE_FACE::
	lock
	faceplayer
	namebox NPC_PORTSARIM_THE_FACE_Text_0
	msgbox NPC_PORTSARIM_THE_FACE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_THRESNOR::
	lock
	faceplayer
	namebox NPC_PORTSARIM_THRESNOR_Text_0
	msgbox NPC_PORTSARIM_THRESNOR_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_TRADER_STAN::
	lock
	faceplayer
	namebox NPC_PORTSARIM_TRADER_STAN_Text_0
	msgbox NPC_PORTSARIM_TRADER_STAN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_NPC_7::
	lock
	faceplayer
	namebox NPC_PORTSARIM_NPC_7_Text_0
	msgbox NPC_PORTSARIM_NPC_7_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_WYDIN::
	lock
	faceplayer
	namebox NPC_PORTSARIM_WYDIN_Text_0
	msgbox NPC_PORTSARIM_WYDIN_Text_1
	waitmessage
	hidenamebox
	release
	end


Port_Sarim_HAM_EVENT_TRIGGER_Text_0:
	.string "H.A.M Leader$"

Port_Sarim_HAM_EVENT_TRIGGER_Text_1:
	.string "It's about time you got here rookie!\p"
	.string "What took you so long!\p"
	.string "Do you have the package?!$"

Port_Sarim_HAM_EVENT_TRIGGER_Text_2:
	.string "H.A.M Member$"

Port_Sarim_HAM_EVENT_TRIGGER_Text_3:
	.string "Sorry Leader!\p"
	.string "I lost the goods...\p"
	.string "Some pesky adventurers-$"

Port_Sarim_HAM_EVENT_TRIGGER_Text_4:
	.string "YOU WHAT?!\p"
	.string "I DON'T WANT TO HEAR IT!\p"
	.string "We are already behind schedule so we\n"
	.string "will have to talk about this later!$"

Port_Sarim_HAM_EVENT_TRIGGER_Text_5:
	.string "...$"

Port_Sarim_HAM_EVENT_TRIGGER_Text_6:
	.string "Alright grunts!\p"
	.string "We are moving out to Karamja for our\n"
	.string "next mission!\p"
	.string "Everyone on the ship!$"

NPC_FLAGRESETER_Text_0:
	.string "Your flag is now reset!$"

NPC_SEAGULL_Text_0:
	.string "Gull!$"

NPC_PORTSARIM_BETTY_Text_0:
	.string "Betty$"

NPC_PORTSARIM_BETTY_Text_1:
	.string "Welcome to Betty's Magic Emporium!\p"
	.string "If you are here to make a potion for a\n"
	.string "witch, I believe you know your way out.\p"
	.string "Bye!$"

NPC_PORTSARIM_BRAIN_Text_0:
	.string "Brian$"

NPC_PORTSARIM_BRAIN_Text_1:
	.string "Hi there, welcome to Brian's Battleaxe\n"
	.string "Bazaar.\p"
	.string "If you see Jimmy the Chisel please tell\n"
	.string "him to get back here.\p"
	.string "I cannot open the shop without him.$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_0:
	.string "Tobias$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_1:
	.string "Sorry but our boat has popped a leak.\p"
	.string "It will be some time before it is\n"
	.string "repaired.\p"
	.string "You should go visit the Party Room in\n"
	.string "Falador or something while you are\l"
	.string "waiting.$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_2:
	.string "Is your name PLAYER?\p"
	.string "I have received word that you are\n"
	.string "participating in the MvM\l"
	.string "Championships, is this correct?\p"
	.string "Usually our services cost 30gp but we\n"
	.string "have a deal with the Championship\l"
	.string "League that allows all participants to\l"
	.string "travel for free!\p"
	.string "So…{PAUSE 15}… Ahem!$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_3:
	.string "Hi, there would you like to board the\n"
	.string "boat to Musa Point, Karamja?$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_4:
	.string "All aboard!\l"
	.string "We set sail for Karamja!$"

NPC_PORTSARIM_CAPTIAN_TOBIAS_Text_5:
	.string "Suit yourself.$"

NPC_PORTSARIM_CREWMAN_1_Text_0:
	.string "These ships go to just about any port.\p"
	.string "There are a lot of exotic monsters out\n"
	.string "there so make sure to use our services.$"

NPC_PORTSARIM_CREWMAN_2_Text_0:
	.string "If you go to Musa Point, say hi to\n"
	.string "Stephanie for me.\p"
	.string "I love her tattoos.$"

NPC_PORTSARIM_GERRANT_Text_0:
	.string "Gerrant$"

NPC_PORTSARIM_GERRANT_Text_1:
	.string "Being in the fish selling business has\n"
	.string "made me gain weight over the years.\p"
	.string "Oh did you wish to buy something?$"

NPC_PORTSARIM_GRUM_Text_0:
	.string "Grum$"

NPC_PORTSARIM_GRUM_Text_1:
	.string "Do you want some of these gems?\p"
	.string "They are truely outrageous.\p"
	.string "Probably out of your price range.$"

NPC_PORTSARIM_KLARENSE_Text_0:
	.string "Klarense$"

NPC_PORTSARIM_KLARENSE_Text_1:
	.string "This ship will set sail to only the most\n"
	.string "dangerous locations.\p"
	.string "But the time is not right just yet.$"

NPC_PORTSARIM_LORRIS_Text_0:
	.string "Lorris$"

NPC_PORTSARIM_LORRIS_Text_1:
	.string "People always say Thresnor and I look\n"
	.string "the same, but we are completely\l"
	.string "different.$"

NPC_PORTSARIM_NPC_1_Text_0:
	.string "Sailing will never happen, get over it.$"

NPC_PORTSARIM_MONK_1_Text_0:
	.string "Monk$"

NPC_PORTSARIM_MONK_1_Text_1:
	.string "I cannot believe they nicked out ship...$"

NPC_PORTSARIM_MONK_2_Text_0:
	.string "Sorry, but you cannot enter Entrana\n"
	.string "while you have those despicable\l"
	.string "creatures with you.$"

NPC_PORTSARIM_NPC_2_Text_0:
	.string "Did you know that water type moves are\n"
	.string "twice as strong in the rain, but fire\l"
	.string "type moves damage are halved?$"

NPC_PORTSARIM_NPC_3_Text_0:
	.string "I have that shanty stuck in my head.$"

NPC_PORTSARIM_NPC_4_Text_0:
	.string "Here in Port Sarim we mostly just see\n"
	.string "seagulls.\p"
	.string "I hope you like them.$"

NPC_PORTSARIM_NPC_5_Text_0:
	.string "I wish I had my own port, maybe a player\n"
	.string "owned port?$"

NPC_PORTSARIM_SIGNPOST_Text_0:
	.string "Welcome to Port Sarim.\p"
	.string "...\p"
	.string "There is something scribbled on the\n"
	.string "sign.\p"
	.string "Sea Shanty 2, Sea Shanty 2, Sea Shanty\n"
	.string "2, Sea Shanty 2, Sea Shanty 2, Sea\l"
	.string "Shanty 2, Sea Shanty 2, Sea Shanty 2.\p"
	.string "Sea Shanty 2.$"

NPC_PORTSARIM_REDBEARD_FRANK_Text_0:
	.string "REDBEARD FRANK$"

NPC_PORTSARIM_REDBEARD_FRANK_Text_1:
	.string "Do you have any Karamjan rum?\p"
	.string "No?\p"
	.string "Shame.$"

NPC_PORTSARIM_NPC_6_Text_0:
	.string "Sea Shanty 2 is the best song right?$"

NPC_PORTSARIM_NPC_6_Text_1:
	.string "Damn right!$"

NPC_PORTSARIM_NPC_6_Text_2:
	.string "WOT!?\p"
	.string "...\p"
	.string "...\p"
	.string "REEEEEEEE!$"

NPC_PORTSARIM_VOID_SQUIRE_Text_0:
	.string "Void Squire$"

NPC_PORTSARIM_VOID_SQUIRE_Text_1:
	.string "I am very sorry, but the Void Knights\n"
	.string "told me not to speak to strangers.$"

NPC_PORTSARIM_THE_FACE_Text_0:
	.string "The Face$"

NPC_PORTSARIM_THE_FACE_Text_1:
	.string "Welcome to the Rat Pits.\p"
	.string "We do not have any fights going on at\n"
	.string "this moment.\p"
	.string "But if you want to raise a strong cat,\n"
	.string "remember that there are multiple ways\l"
	.string "to evolve a kitten.$"

NPC_PORTSARIM_THRESNOR_Text_0:
	.string "Thresnor$"

NPC_PORTSARIM_THRESNOR_Text_1:
	.string "People always say Lorris and I look the\n"
	.string "same, but we are completely different.$"

NPC_PORTSARIM_TRADER_STAN_Text_0:
	.string "Trader Stan$"

NPC_PORTSARIM_TRADER_STAN_Text_1:
	.string "Sorry, this ship is not ready to set sail\n"
	.string "anytime soon.\p"
	.string "My cousin still needs to hand over some\n"
	.string "supplies.$"

NPC_PORTSARIM_NPC_7_Text_0:
	.string "NAME$"

NPC_PORTSARIM_NPC_7_Text_1:
	.string "Do you happen to know what to do with a\n"
	.string "drunken sailor?\p"
	.string "Asking for a friend.$"

NPC_PORTSARIM_WYDIN_Text_0:
	.string "Wydin$"

NPC_PORTSARIM_WYDIN_Text_1:
	.string "If you are here with a mithril arrow,\n"
	.string "soft clay and a chisel, I suggest you\l"
	.string "leave before I call the guards.$"
