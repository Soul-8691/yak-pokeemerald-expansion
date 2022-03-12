Route8_MapScripts::
	.byte 0


ROUTE8_MAN::
	faceplayer
	namebox ROUTE8_MAN_Text_0
	msgbox ROUTE8_MAN_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE8_MINER_3::
	faceplayer
	namebox ROUTE8_MINER_3_Text_0
	msgbox ROUTE8_MINER_3_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE10_CUPHOLDER_1::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE10_CUPHOLDER_2::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE10_CUPHOLDER_3::
	finditem ITEM_CABBAGE
	end


BATTLE_ROUTE8_THEIF::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_THEIF_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_NOOB::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_NOOB_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_DnD::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_DnD_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_MINER_1::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_MINER_1_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_WOODCUTTER::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_THEIF_Text_1, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_MINER_2::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_THEIF_Text_1, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_WIZARD_AIR::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_WIZARD_AIR_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_WIZARD_WATER::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_WIZARD_WATER_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_WIZARD_EARTH::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_WIZARD_EARTH_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_WIZARD_FIRE::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_WIZARD_FIRE_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_THEIF_Text_1
	release
	return


BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_0, BATTLE_ROUTE8_THEIF_Text_1
	msgbox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_1
	release
	return


ABYSSALRIFT_Route8_ENTER::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Route8_ENTER_2
	closemessage
	release
	end

ABYSSALRIFT_Route8_ENTER_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_ABYSSAL_REALM_2, 0, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Route8_RETURN::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Route8_RETURN_2
	closemessage
	release
	end

ABYSSALRIFT_Route8_RETURN_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_ROUTE8, 0, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Route8_SudoBash::
	msgbox ABYSSALRIFT_Route8_SudoBash_Text_0
	closemessage
	release
	end


ABYSSALRIFT_Mazcab_ENTER::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Mazcab_ENTER_2
	closemessage
	release
	end

ABYSSALRIFT_Mazcab_ENTER_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_MAZCAB_OTOT, 0, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Mazcab_RETURN::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Mazcab_RETURN_2
	closemessage
	release
	end

ABYSSALRIFT_Mazcab_RETURN_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_ROUTE4, 1, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Mazcab_Shauny::
	faceplayer
	namebox ABYSSALRIFT_Mazcab_Shauny_Text_0
	msgbox ABYSSALRIFT_Mazcab_Shauny_Text_1
	closemessage
	hidenamebox
	release
	end


ALTAR_WATER_ENTER::
	msgbox ALTAR_WATER_ENTER_Text_0
	msgbox ALTAR_WATER_ENTER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_WATER_ENTER_2
	closemessage
	release
	end

ALTAR_WATER_ENTER_2:
	msgbox ALTAR_WATER_ENTER_Text_2
	warp MAP_MAZCAB_OTOT, 0, 0, 0
	closemessage
	release
	end


ALTAR_WATER_RETURN::
	msgbox ALTAR_WATER_RETURN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_WATER_RETURN_2
	closemessage
	release
	end

ALTAR_WATER_RETURN_2:
	msgbox ALTAR_WATER_RETURN_Text_1
	warp MAP_ROUTE4, 1, 0, 0
	closemessage
	release
	end


ROUTE8_MAN_Text_0:
	.string "Man$"

ROUTE8_MAN_Text_1:
	.string "This is my secret pathway how did you\n"
	.string "find it?$"

ROUTE8_MINER_3_Text_0:
	.string "MINER$"

ROUTE8_MINER_3_Text_1:
	.string "I wish they had a Bank here.\p"
	.string "I have to make a trip all the way to\n"
	.string "Falador if I want to heal my monsters.$"

BATTLE_ROUTE8_THEIF_Text_0:
	.string "Stand and deliver!$"

BATTLE_ROUTE8_THEIF_Text_1:
	.string "$"

BATTLE_ROUTE8_NOOB_Text_0:
	.string "Sit and be lazy!$"

BATTLE_ROUTE8_DnD_Text_0:
	.string "Have you seen any penguins around\n"
	.string "here?$"

BATTLE_ROUTE8_MINER_1_Text_0:
	.string "Do you know the way to the crafting\n"
	.string "guild?$"

BATTLE_ROUTE8_WIZARD_AIR_Text_0:
	.string "I am number 1$"

BATTLE_ROUTE8_WIZARD_WATER_Text_0:
	.string "I am number 2$"

BATTLE_ROUTE8_WIZARD_EARTH_Text_0:
	.string "I am number 3$"

BATTLE_ROUTE8_WIZARD_FIRE_Text_0:
	.string "I am number 4$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_0:
	.string "I will turn you into a mushroom!$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_1:
	.string "tAKE THIS SANTA HAT BRO. Or secetures\n"
	.string "special items etc.$"

ABYSSALRIFT_Route8_ENTER_Text_0:
	.string "There is a rift in space.\p"
	.string "Would you like to enter it?$"

ABYSSALRIFT_Route8_ENTER_Text_1:
	.string "As you step into the rift the world\n"
	.string "around you starts to shimmer.$"

ABYSSALRIFT_Route8_SudoBash_Text_0:
	.string "001000101001010101001\p"
	.string "0101010010101\p"
	.string "010101010010101010\p"
	.string "010101010\p"
	.string "0101010\n"
	.string "01001\n"
	.string "0101010\p"
	.string "2349812649632946317824024\p"
	.string "42069$"

ABYSSALRIFT_Mazcab_Shauny_Text_0:
	.string "Shauny$"

ABYSSALRIFT_Mazcab_Shauny_Text_1:
	.string "It is not my Birthday!$"

ALTAR_WATER_ENTER_Text_0:
	.string "It is a mysterious Altar.$"

ALTAR_WATER_ENTER_Text_1:
	.string "Would you like to use the Water\n"
	.string "Talisman?$"

ALTAR_WATER_ENTER_Text_2:
	.string "The WATER TALISMAN begins to glow.\p"
	.string "A mass of energy suddenly surrounds\n"
	.string "you!$"

ALTAR_WATER_RETURN_Text_0:
	.string "Would you like to leave this realm?$"

ALTAR_WATER_RETURN_Text_1:
	.string "As you step into the portal a mass of\n"
	.string "energy surrounds you!$"
