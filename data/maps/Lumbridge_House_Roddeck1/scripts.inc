Lumbridge_House_Roddeck1_MapScripts::
	.byte 0


LumbridgeInGameTradeOne::
	lock
	faceplayer
	goto_if_unset FLAG_LUMBRIDGE_TRADE_1, LumbridgeInGameTradeOne_1
	return

LumbridgeInGameTradeOne_1:
	setvar VAR_0x8008, INGAME_TRADE_BABY_YAK
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox LumbridgeInGameTradeOne_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LumbridgeInGameTradeOne_4
	msgbox LumbridgeInGameTradeOne_Text_3
LumbridgeInGameTradeOne_3:
	release
	return

LumbridgeInGameTradeOne_4:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_ne LumbridgeInGameTradeOne_7
	goto LumbridgeInGameTradeOne_3

LumbridgeInGameTradeOne_7:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_eq LumbridgeInGameTradeOne_9
	msgbox LumbridgeInGameTradeOne_Text_2
	goto LumbridgeInGameTradeOne_3

LumbridgeInGameTradeOne_9:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	msgbox LumbridgeInGameTradeOne_Text_1
	setflag FLAG_LUMBRIDGE_TRADE_1
	goto LumbridgeInGameTradeOne_3


LumbridgeInGameTradeOne_Text_0:
	.string "Would you like to trade me your\n"
	.string "{STR_VAR_1} for my {STR_VAR_2}?$"

LumbridgeInGameTradeOne_Text_1:
	.string "Please take care of my monster.$"

LumbridgeInGameTradeOne_Text_2:
	.string "Sorry that's not what I want.$"

LumbridgeInGameTradeOne_Text_3:
	.string "Well come back if you change your mind.$"
