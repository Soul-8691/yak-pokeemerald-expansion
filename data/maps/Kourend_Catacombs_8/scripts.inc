Kourend_Catacombs_8_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_LOAD:
	call SKOTIZO_CHECK
	return

Kourend_Catacombs_8_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SLAYER_COMPLETE, 1, SLAYER_TASK_COMPLETE
	.2byte 0


SKOTIZO_CHECK::
	checkitem ITEM_DARK_TOTEM, 1
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_CHECK_2
SKOTIZO_CHECK_1:
	compare VAR_TEMP_E, 5
	goto_if_eq SKOTIZO_CHECK_4
	return

SKOTIZO_CHECK_2:
	setflag FLAG_TEMP_A
	removeobject 1
	goto SKOTIZO_CHECK_1

SKOTIZO_CHECK_4:
	clearflag FLAG_TEMP_A
	addobject 1
	setmetatile 9, 4, 673, 0
	setmetatile 10, 4, 673, 0
	setmetatile 11, 4, 673, 0
	setmetatile 9, 5, 673, 0
	setmetatile 10, 5, 673, 0
	setmetatile 11, 5, 673, 0
	special DrawWholeMapView
	return


SKOTIZO_TRIGGER::
	checkitem ITEM_DARK_TOTEM, 1
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_TRIGGER_2
	release
	end

SKOTIZO_TRIGGER_2:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FACEUP
	waitmovement 0
	msgbox SKOTIZO_TRIGGER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SKOTIZO_TRIGGER_5
SKOTIZO_TRIGGER_4:
	closemessage
	release
	end

SKOTIZO_TRIGGER_5:
	msgbox SKOTIZO_TRIGGER_Text_1
	closemessage
	delay 30
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 2
	special ShakeCamera
	delay 60
	fadescreen FADE_TO_WHITE
	clearflag FLAG_TEMP_A
	addobject 1
	setmetatile 9, 4, 673, 0
	setmetatile 10, 4, 673, 0
	setmetatile 11, 4, 673, 0
	setmetatile 9, 5, 673, 0
	setmetatile 10, 5, 673, 0
	setmetatile 11, 5, 673, 0
	special DrawWholeMapView
	playse SE_ICE_BREAK
	fadescreen FADE_FROM_WHITE
	msgbox SKOTIZO_TRIGGER_Text_2
	closemessage
	goto ENCOUNTER_SKOTIZO
	goto SKOTIZO_TRIGGER_4


ENCOUNTER_SKOTIZO::
	lock
	namebox ENCOUNTER_SKOTIZO_Text_0
	playmoncry SPECIES_URSARING, 0
	msgbox ENCOUNTER_SKOTIZO_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_CALLISTO, 75, ITEM_NONE
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_SKOTIZO_3
	case B_OUTCOME_CAUGHT, ENCOUNTER_SKOTIZO_4
	case B_OUTCOME_RAN, ENCOUNTER_SKOTIZO_5
	case B_OUTCOME_PLAYER_TELEPORTED, ENCOUNTER_SKOTIZO_6
ENCOUNTER_SKOTIZO_1:
	release
	end

ENCOUNTER_SKOTIZO_3:
	fadescreen FADE_TO_BLACK
	removeitem ITEM_DARK_TOTEM, 1
	msgbox ENCOUNTER_SKOTIZO_Text_2
	closemessage
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_SKOTIZO_4:
	fadescreen FADE_TO_BLACK
	removeitem ITEM_DARK_TOTEM, 1
	msgbox ENCOUNTER_SKOTIZO_Text_2
	closemessage
	setflag FLAG_TEMP_A
	removeobject 1
	fadescreen FADE_FROM_BLACK
	closemessage
	end

ENCOUNTER_SKOTIZO_5:
	msgbox ENCOUNTER_SKOTIZO_Text_3
	closemessage
	setvar VAR_TEMP_E, 5
	goto ENCOUNTER_SKOTIZO_1

ENCOUNTER_SKOTIZO_6:
	msgbox ENCOUNTER_SKOTIZO_Text_4
	closemessage
	setvar VAR_TEMP_E, 5
	goto ENCOUNTER_SKOTIZO_1


SKOTIZO_TRIGGER_Text_0:
	.string "The Dark Totem in your backpack starts\n"
	.string "to react to the crystal.\p"
	.string "Would you like to use it?$"

SKOTIZO_TRIGGER_Text_1:
	.string "The Totem and the crystal begin to\n"
	.string "shake.$"

SKOTIZO_TRIGGER_Text_2:
	.string "The crystal shatters and reveals a\n"
	.string "giant monster!$"

ENCOUNTER_SKOTIZO_Text_0:
	.string "SKOTIZO$"

ENCOUNTER_SKOTIZO_Text_1:
	.string "ROOOARR!$"

ENCOUNTER_SKOTIZO_Text_2:
	.string "The Dark Totem shatters into pieces.$"

ENCOUNTER_SKOTIZO_Text_3:
	.string "Skotizo just stands there staring at\n"
	.string "you menacingly.$"

ENCOUNTER_SKOTIZO_Text_4:
	.string "Skotizo is in disbelief you just\n"
	.string "teleported away from battle.$"
