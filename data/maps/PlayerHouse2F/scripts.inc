PlayerHouse2F_MapScripts::
	.byte 0

PlayerHouse2F_EventScript_NES::
	msgbox PlayerHouse2F_Text_NES, MSGBOX_DEFAULT
    release
	end

PlayerHouse2F_Text_NES:
    .string "{PLAYER} played with the NES.\p"
    .string "…Okay!\nIt's time to go!$"

PlayerHouse2F_EventScript_SnorlaxDoll::
	msgbox PlayerHouse2F_Text_SnorlaxDoll, MSGBOX_DEFAULT
    release
	end

PlayerHouse2F_Text_SnorlaxDoll:
    .string "It's a huge SNORLAX doll.$"

PlayerHouse2F_EventScript_Laptop::
    goto_if_set FLAG_SYS_POKEMON_GET, PlayerHouse2F_EventScript_GoodLuck
	msgbox PlayerHouse2F_Text_HavingAGreatTime, MSGBOX_DEFAULT
    release
	end

PlayerHouse2F_EventScript_GoodLuck::
	msgbox PlayerHouse2F_Text_GoodLuck, MSGBOX_DEFAULT
    release
	end

PlayerHouse2F_Text_HavingAGreatTime:
    .string "An e-mail from PROFESSOR OAK:\p"
    .string "{COLOR BLUE}Your POKéMON are having a great\n"
    .string "time at my lab.$"

PlayerHouse2F_Text_GoodLuck:
    .string "An e-mail from PROFESSOR OAK:\p"
    .string "{COLOR BLUE}Good luck on your journey,\n"
    .string "{PLAYER}!$"

PlayerHouse2F_EventScript_HackCredits::
	msgbox PlayerHouse2F_Text_HackCredits, MSGBOX_DEFAULT
    release
	end

PlayerHouse2F_Text_HackCredits:
    .string "Credits:\p"
    .string "Original hack: Kalarie\n"
    .string "pokeemerald-expansion: RHH\p"
    .string "Copyright screen edit: Gol Acheron\n"
    .string "Developer logo edit: caco5400\p"
    .string "SM title screen theme: ShinkoNetCavy\n"
    .string "Prof. Oak intro theme: Lewmoth\p"
    .string "Valencia Park map: Demonheadge\n"
    .string "Pokemon Park map: Axcellerator\p"
    .string "Sunburst Island map: MagicApollo\n"
    .string "Coding help: TAH (notably SDH)$"
