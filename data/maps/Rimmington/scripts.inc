Rimmington_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Rimmington_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Rimmington_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto Rimmington_STATE
	return


Rimmington_STATE::
	switch VAR_POKESCAPE_RIMMINGTON_STATE
	case 0, Rimmington_STATE_2
	case 1, Rimmington_STATE_3
	case 2, Rimmington_STATE_4
	case 3, Rimmington_STATE_4
	case 4, Rimmington_STATE_4
	case 5, Rimmington_STATE_4
	case 6, Rimmington_STATE_4
	case 7, Rimmington_STATE_4
	case 8, Rimmington_STATE_4
	case 9, Rimmington_STATE_4
	return

Rimmington_STATE_2:
	playbgm MUS_RG_GAME_CORNER, 1
	setobjectxyperm 1, 22, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 2, 22, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 3, 23, 6
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 5, 24, 6
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 4, 25, 6
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 24, 21, 5
	setobjectmovementtype 24, MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT
	setobjectxyperm 27, 19, 7
	setobjectmovementtype 27, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	setobjectxyperm 20, 20, 7
	setobjectmovementtype 20, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	setobjectxyperm 15, 23, 7
	setobjectmovementtype 15, MOVEMENT_TYPE_JOG_IN_PLACE_UP
	setobjectxyperm 25, 28, 6
	setobjectmovementtype 25, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
	setobjectxyperm 23, 29, 7
	setobjectmovementtype 23, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
	setobjectxyperm 7, 27, 8
	setobjectmovementtype 7, MOVEMENT_TYPE_LOOK_AROUND
	removeobject 10
	setobjectxyperm 21, 37, 17
	setobjectmovementtype 21, MOVEMENT_TYPE_LOOK_AROUND
	setflag FLAG_TEMP_2
	release
	end

Rimmington_STATE_3:
	removeobject 1
	removeobject 2
	removeobject 5
	removeobject 4
	removeobject 3
	removeobject 24
	removeobject 27
	removeobject 20
	removeobject 15
	removeobject 25
	removeobject 23
	setflag FLAG_TEMP_1
	setobjectxyperm 27, 21, 7
	setobjectmovementtype 27, MOVEMENT_TYPE_LOOK_AROUND
	release
	end

Rimmington_STATE_4:
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_1::
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_1_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_2::
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_2_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_3::
	faceplayer
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_3_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_4::
	faceplayer
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_4_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_RSMVer_1::
	switch VAR_POKESCAPE_RIMMINGTON_STATE
	case 0, NPC_RIMMINGTON_RSMVer_1_2
	case 1, NPC_RIMMINGTON_RSMVer_1_3
	return

NPC_RIMMINGTON_RSMVer_1_2:
	namebox NPC_RIMMINGTON_RSMVer_1_Text_0
	msgbox NPC_RIMMINGTON_RSMVer_1_Text_1
	hidenamebox
	release
	end

NPC_RIMMINGTON_RSMVer_1_3:
	lock
	faceplayer
	namebox NPC_RIMMINGTON_RSMVer_1_Text_0
	msgbox NPC_RIMMINGTON_RSMVer_1_Text_2
	hidenamebox
	release
	end


NPC_RIMMINGTON_RSMVer_2::
	namebox NPC_RIMMINGTON_RSMVer_1_Text_0
	msgbox NPC_RIMMINGTON_RSMVer_2_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_Zezima::
	namebox NPC_RIMMINGTON_Zezima_Text_0
	msgbox NPC_RIMMINGTON_Zezima_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_Boaty::
	namebox NPC_RIMMINGTON_Boaty_Text_0
	msgbox NPC_RIMMINGTON_Boaty_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_1::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_1_Text_0
	msgbox NPC_RIMMINGTON_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_2::
	faceplayer
	namebox NPC_RIMMINGTON_NPC_1_Text_0
	msgbox NPC_RIMMINGTON_NPC_2_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_Tehnoobshow::
	namebox NPC_RIMMINGTON_Tehnoobshow_Text_0
	msgbox NPC_RIMMINGTON_Zezima_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_CustomsOfficer::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_CustomsOfficer_Text_0
	msgbox NPC_RIMMINGTON_CustomsOfficer_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_JagexMod::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_JagexMod_Text_0
	msgbox NPC_RIMMINGTON_JagexMod_Text_1
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 10
	setflag FLAG_TEMP_A
	delay 8
	fadescreen FADE_FROM_BLACK
	namebox NPC_RIMMINGTON_JagexMod_Text_0
	msgbox NPC_RIMMINGTON_JagexMod_Text_2
	hidenamebox
	closemessage
	release
	end


NPC_RIMMINGTON_PETER::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_PETER_Text_0
	msgbox NPC_RIMMINGTON_PETER_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_GnomeBoiKevin::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_GnomeBoiKevin_Text_0
	msgbox NPC_RIMMINGTON_GnomeBoiKevin_Text_1
	hidenamebox
	giveitem ITEM_TERRORBIRD_POUCH
	namebox NPC_RIMMINGTON_GnomeBoiKevin_Text_0
	msgbox NPC_RIMMINGTON_GnomeBoiKevin_Text_2
	hidenamebox
	release
	end


NPC_TERRORBIRD::
	lock
	faceplayer
	playmoncry SPECIES_WINGULL, 0
	msgbox NPC_TERRORBIRD_Text_0
	waitmoncry
	release
	end


RIMMINGTON_WELL::
	msgbox RIMMINGTON_WELL_Text_0
	checkitem ITEM_LANTERN, 1
	compare VAR_RESULT, 0
	goto_if_ne RIMMINGTON_WELL_2
	closemessage
	release
	end

	closemessage
	release
	end

RIMMINGTON_WELL_2:
	msgbox RIMMINGTON_WELL_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RIMMINGTON_WELL_6
	release
	end

RIMMINGTON_WELL_6:
	msgbox RIMMINGTON_WELL_Text_2
	warp MAP_MAZCAB_OTOT, 0, 0, 0
	closemessage
	release
	end


RIMMINGTON_HOUSE_PORTAL::
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_0
	multichoicedefault 1, 0, MULTI_POH, 0, 0
	switch VAR_RESULT
	case 0, RIMMINGTON_HOUSE_PORTAL_3
	case 1, RIMMINGTON_HOUSE_PORTAL_4
	case 2, RIMMINGTON_HOUSE_PORTAL_5
	case 3, RIMMINGTON_HOUSE_PORTAL_6
	case 4, RIMMINGTON_HOUSE_PORTAL_7
RIMMINGTON_HOUSE_PORTAL_1:
	release
	end

RIMMINGTON_HOUSE_PORTAL_3:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_1
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_4:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_2
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_5:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_3
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_6:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_4
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_7:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_5
	goto RIMMINGTON_HOUSE_PORTAL_1


RIMMINGTON_SIGNPOST_HOUSEPORTAL::
	msgbox RIMMINGTON_SIGNPOST_HOUSEPORTAL_Text_0
	closemessage
	end


RIMMINGTON_SIGNPOST_RIMMINGTON::
	msgbox RIMMINGTON_SIGNPOST_RIMMINGTON_Text_0
	closemessage
	end


NPC_SETVAR_RIMMINGTON::
	lock
	faceplayer
	namebox NPC_SETVAR_RIMMINGTON_Text_0
	compare VAR_POKESCAPE_RIMMINGTON_STATE, 0
	goto_if_eq NPC_SETVAR_RIMMINGTON_1
	msgbox NPC_SETVAR_RIMMINGTON_Text_2
	setvar VAR_POKESCAPE_RIMMINGTON_STATE, 0
	hidenamebox
	release
	end

NPC_SETVAR_RIMMINGTON_1:
	msgbox NPC_SETVAR_RIMMINGTON_Text_1
	setvar VAR_POKESCAPE_RIMMINGTON_STATE, 1
	hidenamebox
	release
	end


NPC_RIMMINGTON_DemonAndStan::
	random 17
	switch VAR_RESULT
	case 0, NPC_RIMMINGTON_DemonAndStan_3
	case 1, NPC_RIMMINGTON_DemonAndStan_4
	case 2, NPC_RIMMINGTON_DemonAndStan_5
	case 3, NPC_RIMMINGTON_DemonAndStan_6
	case 4, NPC_RIMMINGTON_DemonAndStan_7
	case 5, NPC_RIMMINGTON_DemonAndStan_8
	case 6, NPC_RIMMINGTON_DemonAndStan_9
	case 7, NPC_RIMMINGTON_DemonAndStan_10
	case 8, NPC_RIMMINGTON_DemonAndStan_11
	case 9, NPC_RIMMINGTON_DemonAndStan_12
	case 10, NPC_RIMMINGTON_DemonAndStan_13
	case 11, NPC_RIMMINGTON_DemonAndStan_14
	case 12, NPC_RIMMINGTON_DemonAndStan_15
	case 13, NPC_RIMMINGTON_DemonAndStan_16
	case 14, NPC_RIMMINGTON_DemonAndStan_17
	case 15, NPC_RIMMINGTON_DemonAndStan_18
	case 16, NPC_RIMMINGTON_DemonAndStan_19
	release
	end

NPC_RIMMINGTON_DemonAndStan_3:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_1
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_3
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_4:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_4
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_5
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_5:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_6
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_7
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_6:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_8
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_9
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_7:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_10
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_11
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_8:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_12
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_13
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_9:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_14
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_15
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_10:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_16
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_17
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_11:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_18
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_19
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_12:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_20
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_21
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_13:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_22
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_23
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_14:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_24
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_25
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_15:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_26
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_27
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_16:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_28
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_29
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_17:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_30
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_31
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_18:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_32
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_33
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_19:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_34
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_34
	waitmovement 0
	hidenamebox
	release
	end


MOVE_DEMONHEADGE_1:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVE_HYPERSTAN_1:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

NPC_RIMMINGTON_FANBOYNOOB_1_Text_0:
	.string "FAN NOOB$"

NPC_RIMMINGTON_FANBOYNOOB_1_Text_1:
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG! OMG! OMG!\n"
	.string "OMG! OMG! OMG!\p"
	.string "OH EMM GEEE!!\p"
	.string "OH MY GOD!!\p"
	.string "It's Tehnoobshow!!!!\p"
	.string "Sign my everything!$"

NPC_RIMMINGTON_FANBOYNOOB_2_Text_0:
	.string "Hi Zezima!\p"
	.string "Hey Zezima!\p"
	.string "ZEEEZZZIIIIMAAA!\p"
	.string "ADD ME PLS!!!$"

NPC_RIMMINGTON_FANBOYNOOB_3_Text_0:
	.string "They say the house of Zezima has a\n"
	.string "golden statue spewing chocolate we\l"
	.string "cant eat because we are not maxed.$"

NPC_RIMMINGTON_FANBOYNOOB_4_Text_0:
	.string "I wonder what the house of someone\n"
	.string "with 99 construction looks like!$"

NPC_RIMMINGTON_RSMVer_1_Text_0:
	.string "RSMVer$"

NPC_RIMMINGTON_RSMVer_1_Text_1:
	.string "What should our next RSMV be about?$"

NPC_RIMMINGTON_RSMVer_1_Text_2:
	.string "Does anyone have an open altar?$"

NPC_RIMMINGTON_RSMVer_2_Text_0:
	.string "House parties are hype!!$"

NPC_RIMMINGTON_Zezima_Text_0:
	.string "Zezima$"

NPC_RIMMINGTON_Zezima_Text_1:
	.string "...$"

NPC_RIMMINGTON_Boaty_Text_0:
	.string "Boaty$"

NPC_RIMMINGTON_Boaty_Text_1:
	.string "This is such an xp waste.$"

NPC_RIMMINGTON_NPC_1_Text_0:
	.string "Man$"

NPC_RIMMINGTON_NPC_1_Text_1:
	.string "Occasionally Gielinorian celebrities\n"
	.string "host house parties here.\p"
	.string "Rimmington goes from a quiet little\n"
	.string "town to being louder than the Falador\l"
	.string "party room.$"

NPC_RIMMINGTON_NPC_2_Text_0:
	.string "I just want to train construction, why\n"
	.string "is there a line?$"

NPC_RIMMINGTON_Tehnoobshow_Text_0:
	.string "Tehnoobshow$"

NPC_RIMMINGTON_CustomsOfficer_Text_0:
	.string "OFFICER$"

NPC_RIMMINGTON_CustomsOfficer_Text_1:
	.string "Behave yourself otherwise I will take\n"
	.string "you to Rock Island Prison.\p"
	.string "You don't want to go to Rock Island\n"
	.string "Prison.$"

NPC_RIMMINGTON_JagexMod_Text_0:
	.string "Mod ???$"

NPC_RIMMINGTON_JagexMod_Text_1:
	.string "I am a ninja!\p"
	.string "Now you see me.$"

NPC_RIMMINGTON_JagexMod_Text_2:
	.string "Now you don't…$"

NPC_RIMMINGTON_PETER_Text_0:
	.string "PETER$"

NPC_RIMMINGTON_PETER_Text_1:
	.string "There are a lot of slushing noises\n"
	.string "coming from the bottom of this well.\p"
	.string "Someone should take a look.$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_0:
	.string "Kevin$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_1:
	.string "Hiya!\p"
	.string "I am Little GnomeBoi Kevin!\p"
	.string "You look exhausted, where did you come\n"
	.string "from?\p"
	.string "…{PAUSE 15}… LUMBRIDGE!?\p"
	.string "This will not do!\p"
	.string "Here take this!$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_2:
	.string "You can use that pouch to summon a\n"
	.string "lightning blue fast Terrorbird!\p"
	.string "…{PAUSE 15}…{PAUSE 15} NO!\p"
	.string "Don't use it in battle.\n"
	.string "You ride it!\p"
	.string "It will help you travel the land of\n"
	.string "Gilenor.\p"
	.string "It is my gift to you.\p"
	.string "All I ask in return is for you to treat it\n"
	.string "well.$"

NPC_TERRORBIRD_Text_0:
	.string "SKREEEE!$"

RIMMINGTON_WELL_Text_0:
	.string "It is a well.\p"
	.string "It looks really dark down there.$"

RIMMINGTON_WELL_Text_1:
	.string "Would you like to climb into the well?$"

RIMMINGTON_WELL_Text_2:
	.string "You climb down the well.$"

RIMMINGTON_HOUSE_PORTAL_Text_0:
	.string "It is a House Portal.\p"
	.string "Which house would you like to go to?$"

RIMMINGTON_HOUSE_PORTAL_Text_1:
	.string "Going to your house.$"

RIMMINGTON_HOUSE_PORTAL_Text_2:
	.string "Going to Cursed You's House.$"

RIMMINGTON_HOUSE_PORTAL_Text_3:
	.string "Going to FaladorEvent House.$"

RIMMINGTON_HOUSE_PORTAL_Text_4:
	.string "Thoks house is located in Relleka.$"

RIMMINGTON_HOUSE_PORTAL_Text_5:
	.string "You have no friends.$"

RIMMINGTON_SIGNPOST_HOUSEPORTAL_Text_0:
	.string "Rimmington House Portal.$"

RIMMINGTON_SIGNPOST_RIMMINGTON_Text_0:
	.string "Rimmington, known for it's famous house\n"
	.string "parties.$"

NPC_SETVAR_RIMMINGTON_Text_0:
	.string "RIMMINGTON VAR$"

NPC_SETVAR_RIMMINGTON_Text_1:
	.string "THE VAR IS NOW SET TO 1\p"
	.string "{PK}{SUPER_ER} {UP_ARROW}{SUPER_E}{SUPER_RE}⋯…♂♂▶{TALL_PLUS}⋯ー。{UNK_SPACER}$"

NPC_SETVAR_RIMMINGTON_Text_2:
	.string "THE VAR IS NOW SET TO 0$"

NPC_RIMMINGTON_DemonAndStan_Text_0:
	.string "Hyper Stan$"

NPC_RIMMINGTON_DemonAndStan_Text_1:
	.string "Do you think there will be cupholders?$"

NPC_RIMMINGTON_DemonAndStan_Text_2:
	.string "Demonheadge$"

NPC_RIMMINGTON_DemonAndStan_Text_3:
	.string "For the last time Stan, YES!$"

NPC_RIMMINGTON_DemonAndStan_Text_4:
	.string "Was frogeel invited?$"

NPC_RIMMINGTON_DemonAndStan_Text_5:
	.string "Its not Friday today.$"

NPC_RIMMINGTON_DemonAndStan_Text_6:
	.string "Where is Orchy and Lukien?$"

NPC_RIMMINGTON_DemonAndStan_Text_7:
	.string "Fishing.$"

NPC_RIMMINGTON_DemonAndStan_Text_8:
	.string "Do you use a special dry cleaning for\n"
	.string "your hat or-?$"

NPC_RIMMINGTON_DemonAndStan_Text_9:
	.string "Lets not have this conversation here\n"
	.string "man.$"

NPC_RIMMINGTON_DemonAndStan_Text_10:
	.string "Ok so tell me again the steps for the\n"
	.string "plan to kidnap zezimas cat..$"

NPC_RIMMINGTON_DemonAndStan_Text_11:
	.string "SHHHHH people are listening!$"

NPC_RIMMINGTON_DemonAndStan_Text_12:
	.string "Why are we standing in line? I am a\n"
	.string "celebrity!$"

NPC_RIMMINGTON_DemonAndStan_Text_13:
	.string "Mickey we dont even qualify as celery..$"

NPC_RIMMINGTON_DemonAndStan_Text_14:
	.string "Follow me on Twitter!$"

NPC_RIMMINGTON_DemonAndStan_Text_15:
	.string "The app or the bird?$"

NPC_RIMMINGTON_DemonAndStan_Text_16:
	.string "How long must we wait?$"

NPC_RIMMINGTON_DemonAndStan_Text_17:
	.string "With our dev time?\p"
	.string "SOON TM by my estimate.$"

NPC_RIMMINGTON_DemonAndStan_Text_18:
	.string "How are you handling the wait in the\n"
	.string "line so far?$"

NPC_RIMMINGTON_DemonAndStan_Text_19:
	.string "Made 15 sprites and a very bad dialogue\n"
	.string "joke.$"

NPC_RIMMINGTON_DemonAndStan_Text_20:
	.string "I hate lines!$"

NPC_RIMMINGTON_DemonAndStan_Text_21:
	.string "You prefer curves?$"

NPC_RIMMINGTON_DemonAndStan_Text_22:
	.string "What is with all the noobs?$"

NPC_RIMMINGTON_DemonAndStan_Text_23:
	.string "They can smell success.$"

NPC_RIMMINGTON_DemonAndStan_Text_24:
	.string "Oh no, was this a hatless party?$"

NPC_RIMMINGTON_DemonAndStan_Text_25:
	.string "No!!\p"
	.string "Without our hats we have no identity.$"

NPC_RIMMINGTON_DemonAndStan_Text_26:
	.string "Why is this taking so long?$"

NPC_RIMMINGTON_DemonAndStan_Text_27:
	.string "Zezima forgot his house key.$"

NPC_RIMMINGTON_DemonAndStan_Text_28:
	.string "Did that guy sneak in line?$"

NPC_RIMMINGTON_DemonAndStan_Text_29:
	.string "You are antagonising the world again\n"
	.string "Stan..$"

NPC_RIMMINGTON_DemonAndStan_Text_30:
	.string "Hey Stan, when do you think we should\n"
	.string "make a cameo for ourselves?\p"
	.string "Is it fair to even cameo in your own\n"
	.string "game?$"

NPC_RIMMINGTON_DemonAndStan_Text_31:
	.string "No Demon, it is not.\p"
	.string "But now seems like the right time.$"

NPC_RIMMINGTON_DemonAndStan_Text_32:
	.string "Shouldn't you be coding?$"

NPC_RIMMINGTON_DemonAndStan_Text_33:
	.string "Shouldn't you be pixelling?!$"

NPC_RIMMINGTON_DemonAndStan_Text_34:
	.string "Nice hat!$"
