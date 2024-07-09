PlayerHouse1F_MapScripts::
	.byte 0

PlayerHouse1F_EventScript_MrMime::
    lock
    faceplayer
	msgbox PlayerHouse1F_Text_MrMime, MSGBOX_DEFAULT
    release
	end

PlayerHouse1F_Text_MrMime:
    .string "Mr. Mime!$"
