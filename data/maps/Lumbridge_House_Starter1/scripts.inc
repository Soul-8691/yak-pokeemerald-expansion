Lumbridge_House_Starter1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lumbridge_House_Starter1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lumbridge_House_Starter1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_STARTER_HOUSE_STATE, 0, Explorer_Jack_1
	.2byte 0


Explorer_Jack_1::
	goto_if_unset FLAG_SET_WALL_CLOCK, Explorer_Jack_1_1
	release
	end

Explorer_Jack_1_1:
	lockall
	setvar VAR_POKESCAPE_STARTER_HOUSE_STATE, 1
	applymovement 1, Movement_Explorer_Jack_1
	waitmovement 0
	msgbox Explorer_Jack_1_Text_0
	goto SetClock
	release
	end


SetClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	goto Explorer_Jack_2
	return


Explorer_Jack_2::
	gettime
	compare VAR_0x8000, 7
	goto_if_lt Explorer_Jack_2_2
	compare VAR_0x8000, 21
	goto_if_ge Explorer_Jack_2_2
	compare VAR_0x8000, 12
	goto_if_lt Explorer_Jack_2_3
	msgbox Explorer_Jack_2_Text_2
Explorer_Jack_2_1:
	msgbox Explorer_Jack_2_Text_3
	closemessage
	applymovement 1, Movement_Explorer_Jack_2
	waitmovement 0
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	release
	end

Explorer_Jack_2_2:
	msgbox Explorer_Jack_2_Text_0
	goto Explorer_Jack_2_1

Explorer_Jack_2_3:
	msgbox Explorer_Jack_2_Text_1
	goto Explorer_Jack_2_1


Movement_Explorer_Jack_1:
	face_up
	emote_exclamation_mark
	delay_8
	walk_up
	walk_up
	walk_right
	face_up
	step_end

Movement_Explorer_Jack_2:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

Explorer_Jack_3::
	lock
	faceplayer
	msgbox Explorer_Jack_3_Text_0
	release
	end


Explorer_Jack_1_Text_0:
	.string "You're awake!\p"
	.string "Do you know what time it is?$"

Explorer_Jack_2_Text_0:
	.string "Are you sure you don't want to go back\n"
	.string "to bed?$"

Explorer_Jack_2_Text_1:
	.string "I'm surprised you're up this early, you\n"
	.string "usually oversleep.$"

Explorer_Jack_2_Text_2:
	.string "It's about time you got up.$"

Explorer_Jack_2_Text_3:
	.string "Anyhow, I've got some news for you.\p"
	.string "Apparently a famous researcher is\n"
	.string "currently visiting the Duke in\l"
	.string "Lumbridge Castle and I heard he is\l"
	.string "giving out Monsters to anyone who can\l"
	.string "help him with a quest!\p"
	.string "I think you should go pay him a visit\n"
	.string "seeing as you've always had a fondness\l"
	.string "for adventures.$"

Explorer_Jack_3_Text_0:
	.string "You should make your way to Lumbridge\n"
	.string "Castle.$"
