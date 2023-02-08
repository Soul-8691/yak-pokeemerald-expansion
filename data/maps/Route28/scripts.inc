Route28_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route28_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route28_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return


BLOCK_ALKHAIRD_GATE::
	lockall
	applymovement 1, BLOCK_ALKHAIRD_GATE_1
	applymovement 2, BLOCK_ALKHAIRD_GATE_2
	waitmovement 0
	msgbox BLOCK_ALKHAIRD_GATE_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, BLOCK_ALKHAIRD_GATE_3
	waitmovement 0
	release
	end


BLOCK_ALKHAIRD_GATE_1:
	face_down
	step_end

BLOCK_ALKHAIRD_GATE_2:
	face_up
	step_end

BLOCK_ALKHAIRD_GATE_3:
	walk_left
	step_end

BLOCK_Alkharid_Guards::
	lock
	faceplayer
	msgbox BLOCK_ALKHAIRD_GATE_Text_0
	release
	end


BATTLE_ROUTE28_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_1, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_0
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_0
	release
	end


BATTLE_ROUTE28_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_2, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_0
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_0
	release
	end


BATTLE_ROUTE28_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_3, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_0
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_0
	release
	end


BATTLE_ROUTE28_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_4, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_0
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_0
	release
	end


BATTLE_ROUTE28_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE28_TRAINER_5, BATTLE_ROUTE28_TRAINER_1_Text_0, BATTLE_ROUTE28_TRAINER_1_Text_0
	msgbox BATTLE_ROUTE28_TRAINER_1_Text_0
	release
	end


BLOCK_ALKHAIRD_GATE_Text_0:
	.string "Halt!\p"
	.string "Only those whom possess the Al-Khaird\n"
	.string "Badge may enter!$"

BATTLE_ROUTE28_TRAINER_1_Text_0:
	.string "$"
