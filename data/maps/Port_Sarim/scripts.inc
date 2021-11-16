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

NPC_PORTSARIM_MONK_1::
	lock
	faceplayer
	namebox NPC_PORTSARIM_MONK_1_Text_0
	msgbox NPC_PORTSARIM_MONK_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_PORTSARIM_SEAGULL_PEEKO::
	lock
	faceplayer
	namebox NPC_PORTSARIM_SEAGULL_PEEKO_Text_0
	msgbox NPC_PORTSARIM_SEAGULL_PEEKO_Text_1
	waitmessage
	hidenamebox
	release
	end


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

NPC_PORTSARIM_MONK_1_Text_0:
	.string "Monk$"

NPC_PORTSARIM_MONK_1_Text_1:
	.string "Those disrepectful scrubs stole me\n"
	.string "ship.\p"
	.string "Atleast they didn't steal me Peeko.$"

NPC_PORTSARIM_SEAGULL_PEEKO_Text_0:
	.string "Peeko$"

NPC_PORTSARIM_SEAGULL_PEEKO_Text_1:
	.string "AVAARST'YEE'DAWGZ!\p"
	.string "HAVEEATMEEE!$"

NPC_FLAGRESETER_Text_0:
	.string "Your flag is now reset!$"
