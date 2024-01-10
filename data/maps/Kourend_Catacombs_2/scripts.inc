Kourend_Catacombs_2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kourend_Catacombs_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kourend_Catacombs_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SLAYER_COMPLETE, 1, SLAYER_TASK_COMPLETE
	.2byte 0


KOUREND_SLAYER_QUEST_START::
	msgbox KOUREND_SLAYER_QUEST_START_Text_0
	msgbox KOUREND_SLAYER_QUEST_START_Text_1
	msgbox KOUREND_SLAYER_QUEST_START_Text_2
	giveitem ITEM_SLAYER_GEM, 1
	closemessage
	hidenamebox
	startquest QUEST_KOUREND_SLAYER
	release
	end


KOUREND_SLAYER_QUEST_START_Text_0:
	.string "You look strong, could I would you be\n"
	.string "interested in doing some Slayer tasks\l"
	.string "for me?$"

KOUREND_SLAYER_QUEST_START_Text_1:
	.string "Slayer Master explains Slayer Tasks,\n"
	.string "explains how Slayer Tasks work by ONLY\l"
	.string "defeating monsters. Explains Slayer\l"
	.string "Points(SP), offers rewards mentioning\l"
	.string "totems that he found.$"

KOUREND_SLAYER_QUEST_START_Text_2:
	.string "Take this it will help you remember your\n"
	.string "Slayer Assignment.$"
