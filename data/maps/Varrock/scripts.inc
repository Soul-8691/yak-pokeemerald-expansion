Varrock_MapScripts::
	.byte 0


VARROCK_SCAMMER::
	faceplayer
	namebox VARROCK_SCAMMER_Text_0
	msgbox VARROCK_SCAMMER_Text_1
	closemessage
	hidenamebox
	release
	end


VARROCK_SCAMMER_Text_0:
	.string "SUS$"

VARROCK_SCAMMER_Text_1:
	.string "Pssst, give me your monster, I'll trim it\n"
	.string "for you.$"
