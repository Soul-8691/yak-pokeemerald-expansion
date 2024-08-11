SlateportCity_PokemonFanClub_EventScript_SwaggerTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SWAGGER, MoveTutor_EventScript_SwaggerTaught
	msgbox MoveTutor_Text_SwaggerTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SwaggerDeclined
	msgbox MoveTutor_Text_SwaggerWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWAGGER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SwaggerDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SWAGGER
	goto MoveTutor_EventScript_SwaggerTaught
	end

MoveTutor_EventScript_SwaggerDeclined::
	msgbox MoveTutor_Text_SwaggerDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SwaggerTaught::
	msgbox MoveTutor_Text_SwaggerTaught, MSGBOX_DEFAULT
	release
	end

MauvilleCity_EventScript_RolloutTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT, MoveTutor_EventScript_RolloutTaught
	msgbox MoveTutor_Text_RolloutTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_RolloutDeclined
	msgbox MoveTutor_Text_RolloutWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_RolloutDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT
	goto MoveTutor_EventScript_RolloutTaught
	end

MoveTutor_EventScript_RolloutDeclined::
	msgbox MoveTutor_Text_RolloutDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_RolloutTaught::
	msgbox MoveTutor_Text_RolloutTaught, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_PokemonCenter_1F_EventScript_FuryCutterTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER, MoveTutor_EventScript_FuryCutterTaught
	msgbox MoveTutor_Text_FuryCutterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_FuryCutterDeclined
	msgbox MoveTutor_Text_FuryCutterWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_FuryCutterDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER
	goto MoveTutor_EventScript_FuryCutterTaught
	end

MoveTutor_EventScript_FuryCutterDeclined::
	msgbox MoveTutor_Text_FuryCutterDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_FuryCutterTaught::
	msgbox MoveTutor_Text_FuryCutterTaught, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_House_EventScript_MimicTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_MIMIC, MoveTutor_EventScript_MimicTaught
	msgbox MoveTutor_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MimicDeclined
	msgbox MoveTutor_Text_MimicWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MIMIC
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MimicDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_MIMIC
	goto MoveTutor_EventScript_MimicTaught
	end

MoveTutor_EventScript_MimicDeclined::
	msgbox MoveTutor_MimicDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MimicTaught::
	msgbox MoveTutor_Text_MimicTaught, MSGBOX_DEFAULT
	release
	end

FallarborTown_Mart_EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_METRONOME, MoveTutor_EventScript_MetronomeTaught
	msgbox MoveTutor_Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_MetronomeDeclined
	msgbox MoveTutor_Text_MetronomeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_METRONOME
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_MetronomeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_METRONOME
	goto MoveTutor_EventScript_MetronomeTaught
	end

MoveTutor_EventScript_MetronomeDeclined::
	msgbox MoveTutor_Text_MetronomeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_MetronomeTaught::
	msgbox MoveTutor_Text_MetronomeTaught, MSGBOX_DEFAULT
	release
	end

FortreeCity_House2_EventScript_SleepTalkTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK, MoveTutor_EventScript_SleepTalkTaught
	msgbox MoveTutor_Text_SleepTalkTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SleepTalkDeclined
	msgbox MoveTutor_Text_SleepTalkWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SLEEP_TALK
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SleepTalkDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK
	goto MoveTutor_EventScript_SleepTalkTaught
	end

MoveTutor_EventScript_SleepTalkDeclined::
	msgbox MoveTutor_Text_SleepTalkDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SleepTalkTaught::
	msgbox MoveTutor_Text_SleepTalkTaught, MSGBOX_DEFAULT
	release
	end

LilycoveCity_DepartmentStoreRooftop_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE, MoveTutor_EventScript_SubstituteTaught
	msgbox MoveTutor_Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_SubstituteDeclined
	msgbox MoveTutor_Text_SubstituteWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SUBSTITUTE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_SubstituteDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE
	goto MoveTutor_EventScript_SubstituteTaught
	end

MoveTutor_EventScript_SubstituteDeclined::
	msgbox MoveTutor_Text_SubstituteDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SubstituteTaught::
	msgbox MoveTutor_Text_SubstituteTaught, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DynamicPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH, MoveTutor_EventScript_DynamicPunchTaught
	msgbox MoveTutor_Text_DynamicPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DynamicPunchDeclined
	msgbox MoveTutor_Text_DynamicPunchWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DYNAMIC_PUNCH
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DynamicPunchDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH
	goto MoveTutor_EventScript_DynamicPunchTaught
	end

MoveTutor_EventScript_DynamicPunchDeclined::
	msgbox MoveTutor_Text_DynamicPunchDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DynamicPunchTaught::
	msgbox MoveTutor_Text_DynamicPunchTaught, MSGBOX_DEFAULT
	release
	end

SootopolisCity_PokemonCenter_1F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE, MoveTutor_EventScript_DoubleEdgeTaught
	msgbox MoveTutor_Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_DoubleEdgeDeclined
	msgbox MoveTutor_Text_DoubleEdgeWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DOUBLE_EDGE
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_DoubleEdgeDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE
	goto MoveTutor_EventScript_DoubleEdgeTaught
	end

MoveTutor_EventScript_DoubleEdgeDeclined::
	msgbox MoveTutor_Text_DoubleEdgeDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_DoubleEdgeTaught::
	msgbox MoveTutor_Text_DoubleEdgeTaught, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_PokemonCenter_1F_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION, MoveTutor_EventScript_ExplosionTaught
	msgbox MoveTutor_Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	call MoveTutor_EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, MoveTutor_EventScript_ExplosionDeclined
	msgbox MoveTutor_Text_ExplosionWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_EXPLOSION
	call MoveTutor_EventScript_OpenPartyMenu
	goto_if_eq VAR_RESULT, 0, MoveTutor_EventScript_ExplosionDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION
	goto MoveTutor_EventScript_ExplosionTaught
	end

MoveTutor_EventScript_ExplosionDeclined::
	msgbox MoveTutor_Text_ExplosionDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_ExplosionTaught::
	msgbox MoveTutor_Text_ExplosionTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_OpenPartyMenu::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

MoveTutor_EventScript_CanOnlyBeLearnedOnce::
	msgbox MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	return

ValenciaPark_EventScript_MoveTaught::
	msgbox MoveTutor_Text_MoveTaught, MSGBOX_DEFAULT
	release
	end

MoveTutor_Text_MoveTaught:
	.string "Something about the environment…$"

ValenciaPark_EventScript_MoveTutor::
	lockall
	goto_if_set FLAG_VALENCIA_PARK_TAUGHT_MOVE, ValenciaPark_EventScript_MoveTaught
	goto_if_set FLAG_TEMP_1, ValenciaPark_EventScript_TutorMove
	msgbox ValenciaPark_Text_TutorWelcome, MSGBOX_DEFAULT
	goto ValenciaPark_EventScript_TutorMove
	end

ValenciaPark_EventScript_ComeBackWithSilverpowder::
	msgbox ValenciaPark_Text_ComeBackWithSilverpowder, MSGBOX_DEFAULT
	releaseall
	end

ValenciaPark_Text_ThatsASilverpowderWantMeToTeachMove:
	.string "Oh! That's it! That's an honest to\n"
	.string "goodness SILVERPOWDER!\p"
	.string "Let me guess, you want me to teach\n"
	.string "a move?$"

ValenciaPark_Text_ComeBackWithSilverpowder:
	.string "If your POKéMON need to learn a move,\n"
	.string "come back with a SILVERPOWDER.$"

ValenciaPark_EventScript_TutorMove::
	checkitem ITEM_SILVERPOWDER
	goto_if_eq VAR_RESULT, FALSE, ValenciaPark_EventScript_ComeBackWithSilverpowder
	msgbox ValenciaPark_Text_ThatsASilverpowderWantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, ValenciaPark_EventScript_ComeBackWithSilverpowder
	message ValenciaPark_Text_WhichMoveTeach
	waitmessage
	setvar VAR_TEMP_FRONTIER_TUTOR_ID, 0
	setvar VAR_0x8004, SCROLL_MULTI_VALENCIA_PARK_TUTOR_MOVES
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_FRONTIER_TUTOR_SELECTION, VAR_RESULT
	switch VAR_RESULT
	case 0, ValenciaPark_EventScript_BugBuzzTutor
	case 1, ValenciaPark_EventScript_PollenPuffTutor
	case 2, ValenciaPark_EventScript_GigaDrainTutor
	case MULTI_B_PRESSED, ValenciaPark_EventScript_ExitTutorMoveSelect
	end

ValenciaPark_Text_HandedOverSilverpowder:
	.string "{PLAYER} handed over one SILVERPOWDER\n"
	.string "in exchange.$"

ValenciaPark_EventScript_TeachTutorMove::
	msgbox ValenciaPark_Text_PleaseChoosePkmn, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special ChooseMonForMoveTutor
	waitstate
	goto_if_eq VAR_RESULT, FALSE, ValenciaPark_EventScript_CancelChooseMon
	msgbox ValenciaPark_Text_AndDone, MSGBOX_DEFAULT
	copyvar VAR_0x8004, VAR_0x8008
	msgbox ValenciaPark_Text_HandedOverSilverpowder, MSGBOX_DEFAULT
	removeitem ITEM_SILVERPOWDER
	setflag FLAG_VALENCIA_PARK_TAUGHT_MOVE
	release
	end

ValenciaPark_EventScript_ConfirmMoveSelection::
	special BufferBattleFrontierTutorMoveName
	buffernumberstring STR_VAR_2, VAR_0x8008
	msgbox ValenciaPark_Text_TheMoveIsIt, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ValenciaPark_EventScript_ChooseNewMove
	goto_if_ge VAR_TEMP_1, VAR_0x8008, ValenciaPark_EventScript_TeachTutorMove
	goto ValenciaPark_EventScript_ChooseNewMove
	end

ValenciaPark_EventScript_ChooseNewMove::
	goto ValenciaPark_EventScript_TutorMove
	end

ValenciaPark_EventScript_ExitTutorMoveSelect::
	msgbox ValenciaPark_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release
	end

ValenciaPark_EventScript_CancelChooseMon::
	msgbox ValenciaPark_Text_PleaseVisitAgain, MSGBOX_DEFAULT
	release
	end

ValenciaPark_EventScript_BugBuzzTutor::
	setvar VAR_0x8005, MOVE_BUG_BUZZ
	goto ValenciaPark_EventScript_ConfirmMoveSelection
	end

ValenciaPark_EventScript_PollenPuffTutor::
	setvar VAR_0x8005, MOVE_POLLEN_PUFF
	goto ValenciaPark_EventScript_ConfirmMoveSelection
	end

ValenciaPark_EventScript_GigaDrainTutor::
	setvar VAR_0x8005, MOVE_GIGA_DRAIN
	goto ValenciaPark_EventScript_ConfirmMoveSelection
	end
