Tutorial_Island_Lab_Up_MapScripts::
	.byte 0


ClockNotSetLeft::
	goto_if_unset FLAG_SET_WALL_CLOCK, ClockNotSetLeft_1
	release
	return

ClockNotSetLeft_1:
	lock
	msgbox ClockNotSetLeft_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ClockMoveLeft
	waitmovement 0
	release
	return


ClockNotSetDown::
	goto_if_unset FLAG_SET_WALL_CLOCK, ClockNotSetDown_1
	release
	return

ClockNotSetDown_1:
	lock
	msgbox ClockNotSetLeft_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, ClockMoveDown
	waitmovement 0
	release
	return


ClockMoveLeft:
	walk_left
	step_end

ClockMoveDown:
	walk_down
	step_end

ClockNotSetLeft_Text_0:
	.string "I should check what time it is.$"
