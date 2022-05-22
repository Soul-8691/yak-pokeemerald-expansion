Lumbridge_Castle_Basement_MapScripts::
	.byte 0


NPC_FROGEEL::
	lock
	faceplayer
	namebox NPC_FROGEEL_Text_0
	msgbox NPC_FROGEEL_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LumbridgeBasement_Demonheadge::
	lock
	faceplayer
	namebox NPC_LumbridgeBasement_Demonheadge_Text_0
	msgbox NPC_LumbridgeBasement_Demonheadge_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LumbridgeBasement_Item::
	lock
	faceplayer
	msgbox NPC_LumbridgeBasement_Item_Text_0
	waitmessage
	release
	end


NPC_FROGEEL_Text_0:
	.string "FROGEEL$"

NPC_FROGEEL_Text_1:
	.string "AAAAAAAAAAAA!$"

NPC_LumbridgeBasement_Demonheadge_Text_0:
	.string "Demonheadge$"

NPC_LumbridgeBasement_Demonheadge_Text_1:
	.string "Hi there, I hope you enjoy playing\n"
	.string "PokeScape.$"

NPC_LumbridgeBasement_Item_Text_0:
	.string "Demonheadge seems to be using this\n"
	.string "pouch to store future content.$"
