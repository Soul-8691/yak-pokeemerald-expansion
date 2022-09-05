Route23_MapScripts::
	.byte 0


NPC_ROUTE23_BLOCKADE_DWARVES::
	lock
	faceplayer
	namebox NPC_ROUTE23_BLOCKADE_DWARVES_Text_0
	msgbox NPC_ROUTE23_BLOCKADE_DWARVES_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_ROUTE23_BLOCKADE_DWARVES_Text_0:
	.string "Dwarf$"

NPC_ROUTE23_BLOCKADE_DWARVES_Text_1:
	.string "There has been a landslide on Ice\n"
	.string "Mountain, we are currently cleaning up.\p"
	.string "Come back later.$"
