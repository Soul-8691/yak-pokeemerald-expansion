Draynor_Manor_1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Draynor_Manor_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call DraynorManor_Lever_STATE
	end


DraynorManor_Lever_STATE::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, DraynorManor_Lever_STATE_2
	case 1, DraynorManor_Lever_STATE_3
	return

DraynorManor_Lever_STATE_2:
	setmetatile 6, 17, 602, 1
	setmetatile 6, 18, 602, 1
	setmetatile 6, 19, 602, 1
	setmetatile 6, 20, 602, 1
	setmetatile 6, 21, 602, 1
	setmetatile 7, 17, 604, 1
	setmetatile 7, 18, 604, 1
	setmetatile 7, 19, 604, 1
	setmetatile 7, 20, 604, 1
	setmetatile 7, 21, 604, 1
	special DrawWholeMapView
	return

DraynorManor_Lever_STATE_3:
	setmetatile 6, 17, 570, 1
	setmetatile 6, 18, 578, 1
	setmetatile 6, 19, 586, 1
	setmetatile 6, 20, 516, 0
	setmetatile 6, 21, 594, 1
	setmetatile 7, 17, 572, 1
	setmetatile 7, 18, 580, 1
	setmetatile 7, 19, 588, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 596, 1
	special DrawWholeMapView
	return


SIGN_DRAYNORMANOR_LEVER_1::
	switch VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE
	case 0, SIGN_DRAYNORMANOR_LEVER_1_2
	case 1, SIGN_DRAYNORMANOR_LEVER_1_3
	return

SIGN_DRAYNORMANOR_LEVER_1_2:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	setmetatile 6, 17, 570, 1
	setmetatile 6, 18, 578, 1
	setmetatile 6, 19, 586, 1
	setmetatile 6, 20, 516, 0
	setmetatile 6, 21, 594, 1
	setmetatile 7, 17, 572, 1
	setmetatile 7, 18, 580, 1
	setmetatile 7, 19, 588, 1
	setmetatile 7, 20, 516, 0
	setmetatile 7, 21, 596, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 1
	release
	end

SIGN_DRAYNORMANOR_LEVER_1_3:
	lock
	msgbox SIGN_DRAYNORMANOR_LEVER_1_Text_0
	setmetatile 6, 17, 602, 1
	setmetatile 6, 18, 602, 1
	setmetatile 6, 19, 602, 1
	setmetatile 6, 20, 602, 1
	setmetatile 6, 21, 602, 1
	setmetatile 7, 17, 604, 1
	setmetatile 7, 18, 604, 1
	setmetatile 7, 19, 604, 1
	setmetatile 7, 20, 604, 1
	setmetatile 7, 21, 604, 1
	special DrawWholeMapView
	setvar VAR_POKESCAPE_DRAYNORMANOR_LEVER_STATE, 0
	release
	end


NPC_DraynorManor_LEVER_A::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 17, 16, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_B::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 11, 10, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_C::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 11, 16, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_D::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 8, 13, 516, 0
	setmetatile 14, 7, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_E::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 14, 13, 516, 0
	setmetatile 8, 7, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_F::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 4, 10, 516, 0
	setmetatile 8, 19, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_LEVER_G::
	msgbox NPC_DraynorManor_LEVER_A_Text_0
	closemessage
	setmetatile 8, 19, 516, 0
	special DrawWholeMapView
	end


NPC_DraynorManor_Ava::
	lock
	faceplayer
	namebox NPC_DraynorManor_Ava_Text_0
	msgbox NPC_DraynorManor_Ava_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Witch::
	lock
	faceplayer
	namebox NPC_DraynorManor_Witch_Text_0
	msgbox NPC_DraynorManor_Witch_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Chair::
	lock
	faceplayer
	msgbox NPC_DraynorManor_Chair_Text_0
	hidenamebox
	closemessage
	release
	end


BATTLE_DRAYNORMANOR_Trainer_1::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_4, BATTLE_DRAYNORMANOR_Trainer_1_Text_0, BATTLE_DRAYNORMANOR_Trainer_1_Text_0
	msgbox BATTLE_DRAYNORMANOR_Trainer_1_Text_0
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_2::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_4, BATTLE_DRAYNORMANOR_Trainer_1_Text_0, BATTLE_DRAYNORMANOR_Trainer_1_Text_0
	namebox BATTLE_DRAYNORMANOR_Trainer_2_Text_0
	msgbox BATTLE_DRAYNORMANOR_Trainer_1_Text_0
	hidenamebox
	release
	end


BATTLE_DRAYNORMANOR_Trainer_3::
	trainerbattle_single TRAINER_ROUTE2_TRAINER_4, BATTLE_DRAYNORMANOR_Trainer_1_Text_0, BATTLE_DRAYNORMANOR_Trainer_1_Text_0
	msgbox BATTLE_DRAYNORMANOR_Trainer_1_Text_0
	hidenamebox
	release
	end


SIGN_DRAYNORMANOR_LEVER_1_Text_0:
	.string "You pull a hidden lever!$"

NPC_DraynorManor_LEVER_A_Text_0:
	.string "You pull the lever and hear a gate open.$"

NPC_DraynorManor_Ava_Text_0:
	.string "Ava$"

NPC_DraynorManor_Ava_Text_1:
	.string "CUPHOLDER$"

NPC_DraynorManor_Witch_Text_0:
	.string "Witch$"

NPC_DraynorManor_Witch_Text_1:
	.string "I have so much poison in my kitchen\n"
	.string "cupboards!\p"
	.string "I don't think a blueberry special will\n"
	.string "save you from how toxic that stuff is!$"

NPC_DraynorManor_Chair_Text_0:
	.string "It's a chair.$"

BATTLE_DRAYNORMANOR_Trainer_1_Text_0:
	.string "$"

BATTLE_DRAYNORMANOR_Trainer_2_Text_0:
	.string "BoneyMcBoneFace$"
