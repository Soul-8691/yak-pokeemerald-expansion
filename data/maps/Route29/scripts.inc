Route29_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route29_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route29_MapScripts_MAP_SCRIPT_ON_LOAD:
	call ROUTE29_DOOR
	return


ROUTE29_DOOR::
	goto_if_set FLAG_DUNGEONEERING_DOOR_ROUTE29, ROUTE29_DOOR_1
	return

ROUTE29_DOOR_1:
	setmetatile 24, 11, 121, 0
	special DrawWholeMapView
	return


DUNGEONEERING_DOOR_ROUTE29::
	goto_if_unset FLAG_DUNGEONEERING_DOOR_ROUTE29, DUNGEONEERING_DOOR_ROUTE29_2
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_2
	closemessage
DUNGEONEERING_DOOR_ROUTE29_1:
	release
	end

DUNGEONEERING_DOOR_ROUTE29_2:
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_0, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, 0
	goto_if_ne DUNGEONEERING_DOOR_ROUTE29_5
	goto DUNGEONEERING_DOOR_ROUTE29_1

DUNGEONEERING_DOOR_ROUTE29_5:
	playse SE_SWITCH
	waitse
	delay 30
	setmetatile 24, 11, 121, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	setflag FLAG_DUNGEONEERING_DOOR_ROUTE29
	msgbox DUNGEONEERING_DOOR_ROUTE29_Text_1
	closemessage
	goto DUNGEONEERING_DOOR_ROUTE29_1


DUNGEONEERING_DOOR_ROUTE29_Text_0:
	.string "It appears to be a mysterious door.\p"
	.string "Would you like to try and pry it open?$"

DUNGEONEERING_DOOR_ROUTE29_Text_1:
	.string "The door opens.$"

DUNGEONEERING_DOOR_ROUTE29_Text_2:
	.string "The door is already open.$"
