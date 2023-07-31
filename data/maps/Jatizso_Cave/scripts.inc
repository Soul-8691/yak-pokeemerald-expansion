Jatizso_Cave_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Jatizso_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Jatizso_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call JATIZSO_CAVE_STATE
	return


JATIZSO_CAVE_STATE::
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_CAVE_STATE_1
	return

JATIZSO_CAVE_STATE_1:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	goto_if_eq JATIZSO_CAVE_STATE_3
	return

JATIZSO_CAVE_STATE_3:
	addobject 2
	setobjectxy 2, 2, 3
	setobjectxyperm 2, 2, 3
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	addobject 1
	setobjectxy 1, 2, 2
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


JATIZSO_NPC_Tazim::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Tazim_3
JATIZSO_NPC_Tazim_1:
	lock
	faceplayer
	namebox JATIZSO_NPC_Tazim_Text_1
	msgbox JATIZSO_NPC_Tazim_Text_2
	closemessage
	hidenamebox
	checkitem ITEM_TEA, 1
	compare VAR_RESULT, 0
	goto_if_ne JATIZSO_NPC_Tazim_9
	release
	end

JATIZSO_NPC_Tazim_2:
	msgbox JATIZSO_NPC_Tazim_Text_0
	closemessage
	end

JATIZSO_NPC_Tazim_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Tazim_5
	goto JATIZSO_NPC_Tazim_1

JATIZSO_NPC_Tazim_5:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	goto_if_eq JATIZSO_NPC_Tazim_2
	goto JATIZSO_NPC_Tazim_1

JATIZSO_NPC_Tazim_9:
	namebox JATIZSO_NPC_Tazim_Text_1
	msgbox JATIZSO_NPC_Tazim_Text_3
	hidenamebox
	closemessage
	msgbox JATIZSO_NPC_Tazim_Text_4
	closemessage
	namebox JATIZSO_NPC_Tazim_Text_1
	msgbox JATIZSO_NPC_Tazim_Text_5
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	addobject 2
	setobjectxy 2, 2, 3
	setobjectxyperm 2, 2, 3
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	addobject 1
	setobjectxy 1, 2, 2
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	fadescreen FADE_FROM_BLACK
	release
	end


JATIZSO_NPC_Snail::
	compare VAR_POKESCAPE_RAC_QUEST_STATE, 20
	goto_if_eq JATIZSO_NPC_Snail_3
JATIZSO_NPC_Snail_1:
	lock
	faceplayer
	namebox JATIZSO_NPC_Snail_Text_1
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_Snail_Text_2
	waitmoncry
	hidenamebox
	msgbox JATIZSO_NPC_Snail_Text_3
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Snail_2:
	msgbox JATIZSO_NPC_Snail_Text_0
	closemessage
	end

JATIZSO_NPC_Snail_3:
	goto_if_set FLAG_EVENT_TEAM_JATIZSO, JATIZSO_NPC_Snail_5
	goto JATIZSO_NPC_Snail_1

JATIZSO_NPC_Snail_5:
	compare VAR_POKESCAPE_RAC_QUEST_JAGEXMODS, 25
	goto_if_eq JATIZSO_NPC_Snail_2
	goto JATIZSO_NPC_Snail_1


NPC_STAN_FROGEEL_BURGER::
	lock
	faceplayer
	namebox NPC_STAN_FROGEEL_BURGER_Text_0
	msgbox NPC_STAN_FROGEEL_BURGER_Text_1
	hidenamebox
	closemessage
	giveitem ITEM_FROGEEL_BURGER, 1
	release
	end


JATIZSO_NPC_Tazim_Text_0:
	.string "Elizabeth seems too distracted.$"

JATIZSO_NPC_Tazim_Text_1:
	.string "Elizabeth$"

JATIZSO_NPC_Tazim_Text_2:
	.string "Stay back!\p"
	.string "I want no part of this, my adventuring\n"
	.string "days are over!\p"
	.string "Just leave me and Snaily alone!$"

JATIZSO_NPC_Tazim_Text_3:
	.string "…{PAUSE 15}…{PAUSE 15}…\p"
	.string "Sniff, Sniff…\p"
	.string "What is that smell.\p"
	.string "GIVE IT TO ME!$"

JATIZSO_NPC_Tazim_Text_4:
	.string "Elizabeth snatches the Tea from your\n"
	.string "backpack.$"

JATIZSO_NPC_Tazim_Text_5:
	.string "This!\p"
	.string "This PLEASES ME!\p"
	.string "Here Snaily try some!$"

JATIZSO_NPC_Snail_Text_0:
	.string "Snaily seems too distracted.$"

JATIZSO_NPC_Snail_Text_1:
	.string "Snaily$"

JATIZSO_NPC_Snail_Text_2:
	.string "SLURRP!$"

JATIZSO_NPC_Snail_Text_3:
	.string "It seems to be very defensive of\n"
	.string "Elizabeth.$"

NPC_STAN_FROGEEL_BURGER_Text_0:
	.string "Hyper Stan$"

NPC_STAN_FROGEEL_BURGER_Text_1:
	.string "Fresh Frogeel burgers!\p"
	.string "Get your fresh Frogeel burgers!\p"
	.string "Here take one, it is on the house.\n"
	.string "Demonheadge did it.$"
