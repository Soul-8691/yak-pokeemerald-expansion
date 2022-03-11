MusaPoint_MapScripts::
	.byte 0


NPC_MUSAPOINT_SAILOR::
	lock
	faceplayer
	namebox NPC_MUSAPOINT_SAILOR_Text_0
	msgbox NPC_MUSAPOINT_SAILOR_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq NPC_MUSAPOINT_SAILOR_2
	msgbox NPC_MUSAPOINT_SAILOR_Text_3
NPC_MUSAPOINT_SAILOR_1:
	waitmessage
	hidenamebox
	release
	end

NPC_MUSAPOINT_SAILOR_2:
	msgbox NPC_MUSAPOINT_SAILOR_Text_2
	warp MAP_PORT_SARIM, 8, 0, 0
	goto NPC_MUSAPOINT_SAILOR_1


NPC_LegendArts::
	lock
	faceplayer
	namebox NPC_LegendArts_Text_0
	msgbox NPC_LegendArts_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_MUSAPOINT_SAILOR_Text_0:
	.string "SAILOR$"

NPC_MUSAPOINT_SAILOR_Text_1:
	.string "Hi, there would you like to board the\n"
	.string "boat to Port Sarim?$"

NPC_MUSAPOINT_SAILOR_Text_2:
	.string "All aboard!\l"
	.string "We set sail for Port Sarim!$"

NPC_MUSAPOINT_SAILOR_Text_3:
	.string "Suit yourself.$"

NPC_LegendArts_Text_0:
	.string "LEGEND ARTS$"

NPC_LegendArts_Text_1:
	.string "What…{PAUSE 15}{PAUSE 15}…{PAUSE 15}{PAUSE 15}…\n"
	.string "How did I get here?$"
