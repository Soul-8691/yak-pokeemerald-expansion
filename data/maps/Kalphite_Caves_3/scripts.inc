Kalphite_Caves_3_MapScripts::
	.byte 0


KalphiteKing_Battle_Script::
	lock
	faceplayer
	msgbox Text_KalphiteKing, MSGBOX_DEFAULT
	setwildbattle SPECIES_KALPHITE_KING_FORM, 50, ITEM_NONE
	dowildbattle
	removeobject 1
	setflag FLAG_KALPHITE_KING_DEFEATED
	release
	end
	
	Text_KalphiteKing:
	.string "ROOAR!$"	
	
	
	
KalphiteQueen_Battle_Script::
	lock
	faceplayer
	msgbox Text_KalphiteQueen, MSGBOX_DEFAULT
	setwildbattle SPECIES_KALPHITE_QUEEN_FORM, 50, ITEM_NONE
	dowildbattle
	removeobject 2
	setflag FLAG_KALPHITE_QUEEN_DEFEATED
	release
	end
	
	Text_KalphiteQueen:
	.string "ROOAWWR!$"	