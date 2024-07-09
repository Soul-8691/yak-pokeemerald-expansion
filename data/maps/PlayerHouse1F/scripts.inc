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

PlayerHouse1F_EventScript_Mom::
    lock
    faceplayer
	goto_if_set FLAG_SYS_POKEDEX_GET, PlayerHouse1F_EventScript_MomRest
    msgbox PlayerHouse1F_Text_MomOak, MSGBOX_DEFAULT
    release
	end

PlayerHouse1F_Text_MomOak:
    .string "MOM: Hi honey,\p"
    .string "I heard PROFESSOR OAK is looking\n"
    .string "for you.$"

PlayerHouse1F_EventScript_MomRest::
    lock
    faceplayer
	msgbox PlayerHouse1F_Text_MomRest, MSGBOX_DEFAULT
    release
	end

PlayerHouse1F_Text_MomRest:
    .string "MOM: {PLAYER}, you should take a\n"
    .string "quick rest.$"
