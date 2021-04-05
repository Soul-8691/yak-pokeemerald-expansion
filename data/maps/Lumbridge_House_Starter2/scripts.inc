Lumbridge_House_Starter2_MapScripts::
	.byte 0


Quackers::
	lock
	faceplayer
	random 2
	switch VAR_RESULT
	case 0, Quackers_3
	case 1, Quackers_4
Quackers_1:
	release
	end

Quackers_3:
	msgbox Quackers_Text_0
	goto Quackers_1

Quackers_4:
	msgbox Quackers_Text_1
	goto Quackers_1


ITEM_CUPHOLDER::
	lock
	faceplayer
	msgbox ITEM_CUPHOLDER_Text_0
	release
	end


The_Needle_Clock::
	compare VAR_POKESCAPE_STARTER_HOUSE_STATE, 1
	goto_if_eq The_Needle_Clock_2
The_Needle_Clock_1:
	msgbox The_Needle_Clock_Text_3
	release
	end

The_Needle_Clock_2:
	lock
	msgbox The_Needle_Clock_Text_0
	msgbox The_Needle_Clock_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq The_Needle_Clock_4
	msgbox The_Needle_Clock_Text_2
	goto The_Needle_Clock_1

The_Needle_Clock_4:
	clearflag FLAG_SET_WALL_CLOCK
	goto Set_The_Needle_Clock
	goto The_Needle_Clock_1


Set_The_Needle_Clock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	return


EventScript_CheckClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end

Quackers_Text_0:
	.string "It's Quackers!\p"
	.string "Explorer Jack's pet Duck.$"

Quackers_Text_1:
	.string "It's totally Quackers.$"

ITEM_CUPHOLDER_Text_0:
	.string "CONGRATULATIONS!\p"
	.string "You OBTAINED 'A CUPHOLDER!'$"

The_Needle_Clock_Text_0:
	.string "It's a grandfather clock.\p"
	.string "One of the hands looks like it has been\n"
	.string "replaced with a weird looking needle.$"

The_Needle_Clock_Text_1:
	.string "Would you like to change the time?$"

The_Needle_Clock_Text_2:
	.string "You decided to not touch the clock.$"

The_Needle_Clock_Text_3:
	.string "It's a grandfather clock.$"
