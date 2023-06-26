EventScript_UseSurf:: @ 8271EA0
	//checkpartymove MOVE_SURF
	//compare VAR_RESULT, PARTY_SIZE
	checkitem ITEM_BOAT, 1
	goto_if_eq VAR_RESULT, FALSE, EventScript_EndUseSurf
	setitemarg ITEM_BOAT
	//bufferpartymonnick 0, VAR_RESULT
	setfieldeffectargument 0, VAR_RESULT
	lockall
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	//msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end
