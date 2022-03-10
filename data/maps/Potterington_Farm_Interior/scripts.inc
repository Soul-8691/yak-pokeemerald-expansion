Potterington_Farm_Interior_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Potterington_Farm_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Potterington_Farm_Interior_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call POTTERINGTON_FARM_STATE
	return


POTTERINGTON_FARM_STATE::
	switch VAR_POKESCAPE_POTTERINGTON_FARM_STATE
	case 0, POTTERINGTON_FARM_STATE_2
	case 1, POTTERINGTON_FARM_STATE_3
	return

POTTERINGTON_FARM_STATE_2:
	return

POTTERINGTON_FARM_STATE_3:
	return


POTTERINGTON_FARM_Lassy::
	namebox POTTERINGTON_FARM_Lassy_Text_0
	msgbox POTTERINGTON_FARM_Lassy_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Zamorak::
	faceplayer
	namebox POTTERINGTON_FARM_Zamorak_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Saradomin::
	faceplayer
	namebox POTTERINGTON_FARM_Saradomin_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Guthix::
	faceplayer
	namebox POTTERINGTON_FARM_Guthix_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Gonthorian::
	faceplayer
	namebox POTTERINGTON_FARM_Gonthorian_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Zezima::
	faceplayer
	namebox POTTERINGTON_FARM_Zezima_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Prezleek::
	faceplayer
	namebox POTTERINGTON_FARM_Prezleek_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Baroo::
	faceplayer
	namebox POTTERINGTON_FARM_Baroo_Text_0
	msgbox POTTERINGTON_FARM_Baroo_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Demonheadge::
	faceplayer
	namebox POTTERINGTON_FARM_Demonheadge_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_HyperStan::
	faceplayer
	namebox POTTERINGTON_FARM_HyperStan_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_JagexMod::
	faceplayer
	namebox POTTERINGTON_FARM_JagexMod_Text_0
	msgbox POTTERINGTON_FARM_Zamorak_Text_1
	closemessage
	hidenamebox
	release
	end


POTTERINGTON_FARM_Lassy_Text_0:
	.string "Lassy$"

POTTERINGTON_FARM_Lassy_Text_1:
	.string "WUFF!$"

POTTERINGTON_FARM_Zamorak_Text_0:
	.string "Zamorak$"

POTTERINGTON_FARM_Zamorak_Text_1:
	.string "I am a cupholder.$"

POTTERINGTON_FARM_Saradomin_Text_0:
	.string "Saradomin$"

POTTERINGTON_FARM_Guthix_Text_0:
	.string "Guthix$"

POTTERINGTON_FARM_Gonthorian_Text_0:
	.string "Gonthorian$"

POTTERINGTON_FARM_Zezima_Text_0:
	.string "Zezima$"

POTTERINGTON_FARM_Prezleek_Text_0:
	.string "Prezleek$"

POTTERINGTON_FARM_Baroo_Text_0:
	.string "Baroo$"

POTTERINGTON_FARM_Baroo_Text_1:
	.string "Baroo, baroo!$"

POTTERINGTON_FARM_Demonheadge_Text_0:
	.string "Demonheadge$"

POTTERINGTON_FARM_HyperStan_Text_0:
	.string "Hyper Stan$"

POTTERINGTON_FARM_JagexMod_Text_0:
	.string "Mod ???$"
