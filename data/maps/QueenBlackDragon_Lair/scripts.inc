QueenBlackDragon_Lair_MapScripts::
	.byte 0


QBD_Battle_QBD::
	lock
	faceplayer
	waitse
	delay 20
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playmoncry SPECIES_LUGIA, 2
	waitmoncry
	delay 20
	setvar VAR_0x8004, SPECIES_DRAGON_QUEEN_BLACK_FORM
	setvar VAR_0x8005, 70  @ level
	setvar VAR_0x8006, ITEM_NONE
	special CreateObedientEnemyMon
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq NavelRock_Bottom_EventScript_DefeatedLugia
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_eq NavelRock_Bottom_EventScript_RanFromLugia
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
	goto_if_eq NavelRock_Bottom_EventScript_RanFromLugia
	setflag FLAG_CAUGHT_LUGIA
	release
	end

QBDLAIR_1::
	switch VAR_POKESCAPE_STARTER_HOUSE_STATE
	case 1, QBDLAIR_1_2
	case 2, QBDLAIR_1_3
	return

QBDLAIR_1_2:
	lock
	msgbox QBDLAIR_1_Text_0
	setmetatile 9, 10, 656, 1
	setmetatile 5, 13, 680, 0
	setmetatile 6, 13, 681, 0
	setmetatile 7, 13, 682, 0
	setmetatile 8, 13, 683, 0
	setmetatile 9, 13, 684, 0
	setmetatile 5, 14, 688, 0
	setmetatile 6, 14, 689, 0
	setmetatile 7, 14, 690, 0
	setmetatile 8, 14, 691, 1
	setmetatile 5, 15, 696, 0
	setmetatile 6, 15, 697, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_STARTER_HOUSE_STATE, 2
	release
	end

QBDLAIR_1_3:
	lock
	msgbox QBDLAIR_1_Text_1
	release
	end


QBDLAIR_2::
	setmetatile 4, 15, 672, 1
	setmetatile 5, 15, 673, 0
	setmetatile 9, 13, 704, 0
	setmetatile 10, 13, 705, 0
	setmetatile 11, 13, 706, 0
	setmetatile 12, 13, 707, 0
	setmetatile 13, 13, 708, 0
	setmetatile 10, 14, 713, 1
	setmetatile 11, 14, 714, 0
	setmetatile 12, 14, 715, 0
	setmetatile 13, 14, 716, 0
	setmetatile 12, 15, 723, 1
	setmetatile 13, 15, 724, 0
	special DrawWholeMapView
	end


QBDLAIR_3::
	setmetatile 13, 15, 664, 0
	setmetatile 14, 15, 665, 1
	setmetatile 7, 13, 746, 0
	setmetatile 8, 13, 747, 0
	setmetatile 9, 13, 748, 0
	setmetatile 10, 13, 755, 0
	setmetatile 11, 13, 756, 0
	setmetatile 8, 14, 658, 0
	setmetatile 9, 14, 659, 0
	setmetatile 10, 14, 660, 0
	setmetatile 8, 15, 666, 1
	setmetatile 9, 15, 667, 0
	setmetatile 10, 15, 668, 1
	setmetatile 9, 16, 675, 1
	special DrawWholeMapView
	end


QBDLAIR_4::
	setmetatile 9, 16, 657, 1
	special DrawWholeMapView
	end


QBDLAIR_1_Text_0:
	.string "You activate the pillar!$"

QBDLAIR_1_Text_1:
	.string "The pillar is already activated.$"
