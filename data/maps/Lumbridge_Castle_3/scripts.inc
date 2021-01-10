Lumbridge_Castle_3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Castle_3_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Castle_3_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto TryMoveGuardLumbridgeCastle3
	return


DukeFirstEncounter::
	lock
	faceplayer
	goto_if_unset FLAG_BADGE01_GET, DukeFirstEncounter_2
	msgbox DukeFirstEncounter_Text_1
DukeFirstEncounter_1:
	release
	return

DukeFirstEncounter_2:
	msgbox DukeFirstEncounter_Text_0
	fadescreen FADE_TO_BLACK
	removeobject 1
	fadescreen FADE_FROM_BLACK
	goto DukeFirstEncounter_1


TryMoveGuardLumbridgeCastle3::
	goto_if_set FLAG_BADGE01_GET, TryMoveGuardLumbridgeCastle3_1
	return

TryMoveGuardLumbridgeCastle3_1:
	setobjectxyperm 2, 27, 4
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	clearflag FLAG_DUKE_TALKED
	return


LumbridgeCastleGuard::
	goto_if_unset FLAG_BADGE01_GET, LumbridgeCastleGuard_2
	msgbox LumbridgeCastleGuard_Text_1
LumbridgeCastleGuard_1:
	release
	return

LumbridgeCastleGuard_2:
	msgbox LumbridgeCastleGuard_Text_0
	goto LumbridgeCastleGuard_1


SigmundMessage::
	lock
	faceplayer
	msgbox SigmundMessage_Text_0
	release
	return


DukeFirstEncounter_Text_0:
	.string "Hi there! I'm Duke Horacio, lord of\n"
	.string "castle lumbridge. If you wish to\l"
	.string "challenge me to a battle you will have\l"
	.string "to reach the top of the castle.$"

DukeFirstEncounter_Text_1:
	.string "You fought well earlier!\n I look forward to a rematch.$"

LumbridgeCastleGuard_Text_0:
	.string "This hallway is off limits. You'll have to\n"
	.string "find another way up.$"

LumbridgeCastleGuard_Text_1:
	.string "Welcome to castle Lumbridge. Mind\n"
	.string "yourself.$"

SigmundMessage_Text_0:
	.string "I think you're looking for the Duke.\n He's in the next room.$"
