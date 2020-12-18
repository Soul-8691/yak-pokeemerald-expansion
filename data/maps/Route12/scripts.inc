Route12_MapScripts::
	.byte 0


Route12_EventScript_Cannot_Pass::
	lockall
	msgbox Text_Cannot_Pass, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Route12_Movement_Cannot_Pass
	waitmovement 0
	releaseall
	end
	
Route12_Movement_Cannot_Pass::
	lock_facing_direction
	walk_left
	unlock_facing_direction
	step_end
	
	Text_Cannot_Pass:
	.string "You shall not pass!"