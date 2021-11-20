Route28_MapScripts::
	.byte 0


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


BLOCK_ALKHAIRD_GATE_Text_0:
	.string "Halt!\p"
	.string "Only those whom possess the Al-Khaird\n"
	.string "Badge may enter!$"
