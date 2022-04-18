PortSarim_Pub_1F_MapScripts::
	.byte 0


NPC_PortSarimPub_Pirate_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_Pirate_1_Text_0
	msgbox NPC_PortSarimPub_Pirate_1_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_Pirate_1_Text_0:
	.string "PIRATE$"

NPC_PortSarimPub_Pirate_1_Text_1:
	.string "The customs officer confiscates all\n"
	.string "Karamja Rum.\p"
	.string "She is the reason the Rum is always\n"
	.string "gone.$"
