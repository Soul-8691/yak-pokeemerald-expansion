Route8_MapScripts::
	.byte 0


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
