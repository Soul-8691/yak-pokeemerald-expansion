Lumbridge_Church_MapScripts::
	.byte 0


Lumbridge_Church_Father_Aereck::
	lock
	faceplayer
	msgbox Lumbridge_Church_Father_Aereck_Text_0
	release
	end


Lumbridge_Church_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC1_Text_0
	release
	end


Lumbridge_Church_NPC2::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC2_Text_0
	release
	end


Lumbridge_Church_NPC3::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC3_Text_0
	release
	end


Pub_Mod_Dolan::
	lock
	faceplayer
	random 2
	switch VAR_RESULT
	case 0, Pub_Mod_Dolan_3
	case 1, Pub_Mod_Dolan_4
	release
	end

Pub_Mod_Dolan_3:
	namebox Pub_Mod_Dolan_Text_0
	msgbox Pub_Mod_Dolan_Text_1
	hidenamebox
	release
	end

Pub_Mod_Dolan_4:
	namebox Pub_Mod_Dolan_Text_0
	msgbox Pub_Mod_Dolan_Text_2
	hidenamebox
	release
	end


GoldenGnome::
	lock
	faceplayer
	msgbox GoldenGnome_Text_0
	givemon SPECIES_GNOMEY, 5, ITEM_NONE
	msgbox GoldenGnome_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GoldenGnome_2
	setvar VAR_0x8004, 0
	call Common_EventScript_NameReceivedPartyMon
GoldenGnome_1:
	msgbox GoldenGnome_Text_2
	trainerbattle_single TRAINER_GOBLIN_4_ROUTE12, GoldenGnome_Text_3, GoldenGnome_Text_4
	release
	end

GoldenGnome_2:
	release
	goto GoldenGnome_1


GnomeBoi_Kevin::
	lock
	faceplayer
	msgbox GnomeBoi_Kevin_Text_0
	release
	multichoicedefault 1, 0, MULTI_CHEAT_MENU, 0, 0
	switch VAR_RESULT
	case 0, GnomeBoi_Kevin_3
	case 1, GnomeBoi_Kevin_4
	case 2, GnomeBoi_Kevin_5
	case 3, GnomeBoi_Kevin_6
	case 4, GnomeBoi_Kevin_7
	case 5, GnomeBoi_Kevin_8
	case 6, GnomeBoi_Kevin_9
	case 7, GnomeBoi_Kevin_10
GnomeBoi_Kevin_1:
	msgbox GnomeBoi_Kevin_Text_8
	release
	end

GnomeBoi_Kevin_3:
	msgbox GnomeBoi_Kevin_Text_1
	waitmessage
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_4:
	msgbox GnomeBoi_Kevin_Text_2
	waitmessage
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_5:
	msgbox GnomeBoi_Kevin_Text_3
	waitmessage
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_6:
	msgbox GnomeBoi_Kevin_Text_4
	waitmessage
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_7:
	msgbox GnomeBoi_Kevin_Text_5
	giveitem ITEM_TERRORBIRD_POUCH
	giveitem ITEM_PICKAXE
	giveitem ITEM_BOAT
	giveitem ITEM_AXE
	giveitem ITEM_STRENGTHITEM
	giveitem ITEM_DIVEITEM
	giveitem ITEM_SPADE
	giveitem ITEM_FLYITEM
	giveitem ITEM_LANTERN
	giveitem ITEM_WATERFALLITEM
	giveitem ITEM_SMALL_NET
	giveitem ITEM_LARGE_NET
	giveitem ITEM_DRAGON_NET
	giveitem ITEM_MAP
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_8:
	msgbox GnomeBoi_Kevin_Text_6
	addmoney 250000, 0
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_9:
	msgbox GnomeBoi_Kevin_Text_7
	additem ITEM_PURPLE_SWEETS, 100
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_10:
	release
	goto GnomeBoi_Kevin_1


LumbridgeSwampCaves_WallBeasts::
	lockall
	msgbox LumbridgeSwampCaves_WallBeasts_Text_0
	random 3
	switch VAR_RESULT
	case 0, LumbridgeSwampCaves_WallBeasts_3
	case 1, LumbridgeSwampCaves_WallBeasts_4
	case 2, LumbridgeSwampCaves_WallBeasts_5
	release
	end

LumbridgeSwampCaves_WallBeasts_3:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_1
	special RockSmashWildEncounter
	release
	end

LumbridgeSwampCaves_WallBeasts_4:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_2
	setwildbattle SPECIES_HAND_CREEPING_FORM, 10, ITEM_NONE
	dowildbattle
	release
	end

LumbridgeSwampCaves_WallBeasts_5:
	msgbox LumbridgeSwampCaves_WallBeasts_Text_3
	release
	end


Lumbridge_Church_Father_Aereck_Text_0:
	.string "Monsters dont really die.\p"
	.string "They will not be needing graves.\p"
	.string "Just take them to the bank.$"

Lumbridge_Church_NPC1_Text_0:
	.string "Praise be Saradomin!$"

Lumbridge_Church_NPC2_Text_0:
	.string "Bow to the great one!$"

Lumbridge_Church_NPC3_Text_0:
	.string "I love Lumbridge.\p"
	.string "Nothing happens.\p"
	.string "Town is safe and Zamorak and Saradomin\n"
	.string "won't wreck it over some light balls.$"

Pub_Mod_Dolan_Text_0:
	.string "Mod Dolan$"

Pub_Mod_Dolan_Text_1:
	.string "..hic..\p"
	.string "...Have you seen my duck?\p"
	.string "..hic..\p"
	.string "..\p"
	.string "No, no my duck is yellow and he squeaks.\p"
	.string "..hic..$"

Pub_Mod_Dolan_Text_2:
	.string "..hic..\p"
	.string "...The Ruby Ring!\p"
	.string "..hic..\p"
	.string "..Rainbows you wear around your neck!\p"
	.string "..hic..\p"
	.string "Where is my duck?\p"
	.string "..hic..$"

GoldenGnome_Text_0:
	.string "Hey you!\p"
	.string "Somebody dropped this, it's a little\n"
	.string "broken, but you can have it.$"

GoldenGnome_Text_1:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

GoldenGnome_Text_2:
	.string "OBTAINED A GOLDEN GNOME.$"

GoldenGnome_Text_3:
	.string "Also want to battle my non-broken\n"
	.string "one?!$"

GoldenGnome_Text_4:
	.string "Human strong. This now Goblin and human\n"
	.string "home.$"

GnomeBoi_Kevin_Text_0:
	.string "Hi Boss! What can I do for ya?$"

GnomeBoi_Kevin_Text_1:
	.string "What runes would you like?$"

GnomeBoi_Kevin_Text_2:
	.string "What pouches would you like?$"

GnomeBoi_Kevin_Text_3:
	.string "Look at my wares!$"

GnomeBoi_Kevin_Text_4:
	.string "Look at my junk!$"

GnomeBoi_Kevin_Text_5:
	.string "These might be important!$"

GnomeBoi_Kevin_Text_6:
	.string "Get money!$"

GnomeBoi_Kevin_Text_7:
	.string "Heres some candy!$"

GnomeBoi_Kevin_Text_8:
	.string "Smell ya later!$"

LumbridgeSwampCaves_WallBeasts_Text_0:
	.string "Something jumps out of the wall towards\n"
	.string "you!$"

LumbridgeSwampCaves_WallBeasts_Text_1:
	.string "A wild Monster attacked!$"

LumbridgeSwampCaves_WallBeasts_Text_2:
	.string "A hand swipes at you!$"

LumbridgeSwampCaves_WallBeasts_Text_3:
	.string "You found an item!$"
