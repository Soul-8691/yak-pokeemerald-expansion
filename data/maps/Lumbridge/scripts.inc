Lumbridge_MapScripts::
	.byte 0


Kevin::
	lock
	faceplayer
	msgbox Kevin_Text_0
	release
	multichoicedefault 1, 0, MULTI_CHEAT_MENU, 0, 0
	switch VAR_RESULT
	case 0, Kevin_3
	case 1, Kevin_4
	case 2, Kevin_5
	case 3, Kevin_6
	case 4, Kevin_7
	case 5, Kevin_8
Kevin_1:
	msgbox Kevin_Text_6
	release
	return

Kevin_3:
	msgbox Kevin_Text_1
	waitmessage
	pokemart Cheat_Menu_Shop_Evolution
	release
	goto Kevin_1

Kevin_4:
	msgbox Kevin_Text_2
	waitmessage
	pokemart Cheat_Menu_Shop_Pouches
	release
	goto Kevin_1

Kevin_5:
	msgbox Kevin_Text_3
	addmoney 250000, 0
	release
	goto Kevin_1

Kevin_6:
	msgbox Kevin_Text_4
	additem ITEM_RARE_CANDY, 100
	release
	goto Kevin_1

Kevin_7:
	msgbox Kevin_Text_5
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
	release
	goto Kevin_1

Kevin_8:
	release
	goto Kevin_1


Cheat_Menu_Shop_Pouches:
	.2byte ITEM_NORMAL_POUCH
	.2byte ITEM_BRONZE_POUCH
	.2byte ITEM_IRON_POUCH
	.2byte ITEM_STEEL_POUCH
	.2byte ITEM_BLACK_POUCH
	.2byte ITEM_MITHRIL_POUCH
	.2byte ITEM_ADAMANT_POUCH
	.2byte ITEM_RUNE_POUCH
	.2byte ITEM_DRAGON_POUCH
	.2byte ITEM_CRYSTAL_POUCH
	.2byte ITEM_SPLITBARK_POUCH
	.2byte ITEM_DRAGONBANE_POUCH
	.2byte ITEM_AUGMENTED_POUCH
	.2byte ITEM_MYSTIC_POUCH
	.2byte ITEM_BARROWS_POUCH
	.2byte ITEM_GRANITE_POUCH
	.2byte ITEM_ANCIENT_POUCH
	.2byte ITEM_ELEMENTAL_POUCH
	.2byte ITEM_NONE
	release
	end

Cheat_Menu_Shop_Evolution:
	.2byte ITEM_AIR_RUNE
	.2byte ITEM_WATER_RUNE
	.2byte ITEM_EARTH_RUNE
	.2byte ITEM_FIRE_RUNE
	.2byte ITEM_COSMIC_RUNE
	.2byte ITEM_CHAOS_RUNE
	.2byte ITEM_MIND_RUNE
	.2byte ITEM_BODY_RUNE
	.2byte ITEM_LAW_RUNE
	.2byte ITEM_NATURE_RUNE
	.2byte ITEM_DEATH_RUNE
	.2byte ITEM_BLOOD_RUNE
	.2byte ITEM_SOUL_RUNE
	.2byte ITEM_ASTRAL_RUNE
	.2byte ITEM_DUST_RUNE
	.2byte ITEM_MUD_RUNE
	.2byte ITEM_MIST_RUNE
	.2byte ITEM_LAVA_RUNE
	.2byte ITEM_LIFE_RUNE
	.2byte ITEM_SPIRIT_CHARM
	.2byte ITEM_LEGENDARY_ITEM
	.2byte ITEM_RED_SCALE
	.2byte ITEM_BLUE_SCALE
	.2byte ITEM_GREEN_SCALE
	.2byte ITEM_BLACK_SCALE
	.2byte ITEM_FRAGMENT_OF_JAS
	

	.2byte ITEM_NONE
	release
	end

Kevin_Text_0:
	.string "Hi Boss! What can I do for ya?$"

Kevin_Text_1:
	.string "What runes would you like?$"

Kevin_Text_2:
	.string "What pouches would you like?$"

Kevin_Text_3:
	.string "Get money!$"

Kevin_Text_4:
	.string "Heres some candy!$"

Kevin_Text_5:
	.string "These might be important!$"

Kevin_Text_6:
	.string "Smell ya later!$"
