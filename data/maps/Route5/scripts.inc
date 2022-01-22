Route5_MapScripts::
	.byte 0


BATTLE_ROUTE5_CAPTAINTOCK::
	trainerbattle_single TRAINER_MUGGER_ROUTE4, BATTLE_ROUTE5_CAPTAINTOCK_Text_0, BATTLE_ROUTE5_CAPTAINTOCK_Text_1
	msgbox BATTLE_ROUTE5_CAPTAINTOCK_Text_2
	release
	return


BATTLE_ROUTE5_CAPTAINTOCK_Text_0:
	.string "Avast ye landlubber!\pPort Sarim be forward!$"

BATTLE_ROUTE5_CAPTAINTOCK_Text_1:
	.string "Arrr… Hang the Jib…$"

BATTLE_ROUTE5_CAPTAINTOCK_Text_2:
	.string "Me hearties be at thee pub.\p"
	.string "Me hasn't enough doubloons after thee\n"
	.string "battle with ye to join them thour.$"
