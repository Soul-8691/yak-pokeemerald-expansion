Mill_Lane_Mill_MapScripts::
	.byte 0


MillLaneNPC1::
	lock
	faceplayer
	msgbox MillLaneNPC1_Text_0
	release
	return


MillLaneNPC1_Text_0:
	.string "This is the windmill, at the top farmers\n"
	.string "insert wheat to create flour$"
