Sinkhole_4_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Sinkhole_4_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Sinkhole_4_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_Dungeon
	return


TRYWARPINGDOORS_ENTER::
	buffernumberstring STR_VAR_1, VAR_0x8006
	buffernumberstring STR_VAR_2, VAR_TEMP_1
	msgbox TRYWARPINGDOORS_ENTER_Text_0
	buffernumberstring STR_VAR_1, VAR_0x8005
	buffernumberstring STR_VAR_2, VAR_TEMP_2
	msgbox TRYWARPINGDOORS_ENTER_Text_1
	buffernumberstring STR_VAR_1, VAR_0x8004
	buffernumberstring STR_VAR_2, VAR_TEMP_3
	msgbox TRYWARPINGDOORS_ENTER_Text_2
	closemessage
	return


mapwarp::
	copyvar VAR_TEMP_1, VAR_0x8006
	copyvar VAR_DUNGEONEERING_LAST_DOOR_ENTERED, VAR_0x8005
	goto checkmapwarp
	return


checkmapwarp::
	compare VAR_DUNGEONEERING_LAST_DOOR_ENTERED, VAR_0x8004
	goto_if_eq checkmapwarp_1
	setdynamicwarp MAP_DUNGEONEERING_2, 1
	return

checkmapwarp_1:
	compare VAR_TEMP_1, 1
	goto_if_eq checkmapwarp_4
	compare VAR_TEMP_1, 2
	goto_if_eq checkmapwarp_5
	return

checkmapwarp_4:
	compare VAR_0x8004, 2
	goto_if_eq checkmapwarp_8
	compare VAR_0x8004, 3
	goto_if_eq checkmapwarp_9
	return

checkmapwarp_5:
	compare VAR_0x8004, 2
	goto_if_eq checkmapwarp_12
	compare VAR_0x8004, 3
	goto_if_eq checkmapwarp_13
	return

checkmapwarp_8:
	setdynamicwarp MAP_DUNGEONEERING_1, 2
	return

checkmapwarp_9:
	setdynamicwarp MAP_DUNGEONEERING_1, 3
	return

checkmapwarp_12:
	setdynamicwarp MAP_DUNGEONEERING_2, 2
	return

checkmapwarp_13:
	setdynamicwarp MAP_DUNGEONEERING_2, 3
	return


setwheretowarp_1::
	return


TRIGGER_LEFT_EXIT::
	setvar VAR_0x8004, 3
	setvar VAR_0x8005, 2
	call REMEMBER_THIS_FLOOR
	call checkmapwarp
	release
	end


TRIGGER_RIGHT_EXIT::
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	call REMEMBER_THIS_FLOOR
	call checkmapwarp
	release
	end


TRIGGER_UP_EXIT::
	setvar VAR_0x8005, 4
	call REMEMBER_THIS_FLOOR
	call checkmapwarp
	release
	end


TRIGGER_DOWN_EXIT::
	setvar VAR_0x8005, 1
	call REMEMBER_THIS_FLOOR
	call checkmapwarp
	release
	end


REMEMBER_THIS_FLOOR::
	specialvar VAR_RESULT, GetCurrentMap
	goto_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, REMEMBER_MAP_DUNGEONEERING_1
	goto_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, REMEMBER_MAP_DUNGEONEERING_2
	goto_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, REMEMBER_MAP_DUNGEONEERING_3
	return


REMEMBER_MAP_DUNGEONEERING_1::
	setvar VAR_0x8006, 1
	return


REMEMBER_MAP_DUNGEONEERING_2::
	setvar VAR_0x8006, 2
	return


REMEMBER_MAP_DUNGEONEERING_3::
	setvar VAR_0x8006, 3
	return


NEXT_ROOM::
	specialvar VAR_RESULT, GetCurrentMap
	goto_if_eq VAR_RESULT, MAP_DUNGEONEERING_1, REMEMBER_MAP_DUNGEONEERING_1
	goto_if_eq VAR_RESULT, MAP_DUNGEONEERING_2, REMEMBER_MAP_DUNGEONEERING_2
	goto_if_eq VAR_RESULT, MAP_DUNGEONEERING_3, REMEMBER_MAP_DUNGEONEERING_3
	return


TRYWARPINGDOORS_ENTER_Text_0:
	.string "VAR 0x8006 is {STR_VAR_1}.\n"
	.string "VAR TEMP 1 is {STR_VAR_2}$"

TRYWARPINGDOORS_ENTER_Text_1:
	.string "VAR 0x8005 is {STR_VAR_1}.\n"
	.string "VAR TEMP 2 is {STR_VAR_2}$"

TRYWARPINGDOORS_ENTER_Text_2:
	.string "VAR 0x8004 is {STR_VAR_1}.\n"
	.string "VAR TEMP 3 is {STR_VAR_2}$"
