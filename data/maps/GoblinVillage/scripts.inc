GoblinVillage_MapScripts::
	.byte 0


NPC_GOBLINVILLAGE_GOBLIN_1::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_1_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_1_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_2::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_2_Text_1
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_3::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_3_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_4::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_4_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_5::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_5_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_6::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_6_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_WARTFACE::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_BENTNOZE::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	msgbox NPC_GOBLINVILLAGE_GOBLIN_2_Text_0
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GRUBFOOT::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_GRUBFOOT_Text_0
	msgbox NPC_GOBLINVILLAGE_GRUBFOOT_Text_1
	hidenamebox
	release
	end


BATTLE_DEMONHEADGE::
	faceplayer
	namebox BATTLE_DEMONHEADGE_Text_0
	msgbox BATTLE_DEMONHEADGE_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_DEMONHEADGE, BATTLE_DEMONHEADGE_Text_2
	namebox BATTLE_DEMONHEADGE_Text_0
	msgbox BATTLE_DEMONHEADGE_Text_3
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_GOBLIN_1_Text_0:
	.string "DULLEYES$"

NPC_GOBLINVILLAGE_GOBLIN_1_Text_1:
	.string "Dulleyes do not understand this\n"
	.string "conflict.\p"
	.string "Bentnoze shows me gray goblin mail\n"
	.string "telling Dulleyes Wartface is wrong.\p"
	.string "Then Wartface show Dulleyes gray\n"
	.string "goblin mail telling Dulleyes this mail\l"
	.string "better.\p"
	.string "War is complicated to Dulleyes.$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_0:
	.string "$"

NPC_GOBLINVILLAGE_GOBLIN_2_Text_1:
	.string "Goblins green.\p"
	.string "Green is better than red.$"

NPC_GOBLINVILLAGE_GOBLIN_3_Text_0:
	.string "Blood is red.\p"
	.string "Red is better than green.$"

NPC_GOBLINVILLAGE_GOBLIN_4_Text_0:
	.string "Seeing goblins go around saying green\n"
	.string "be good makes me see red.$"

NPC_GOBLINVILLAGE_GOBLIN_5_Text_0:
	.string "Last week goblin village fought over\n"
	.string "shoes or no shoes.\p"
	.string "War is constant here.\p"
	.string "I love it.$"

NPC_GOBLINVILLAGE_GOBLIN_6_Text_0:
	.string "Stinky Hoomans dress in ugly red armour\n"
	.string "were wanting passage through Goblin\l"
	.string "Village.\p"
	.string "Me said red are stinks green armour\n"
	.string "better, no passage for reds.\p"
	.string "So me block off passage way!$"

NPC_GOBLINVILLAGE_GRUBFOOT_Text_0:
	.string "GRUBFOOT$"

NPC_GOBLINVILLAGE_GRUBFOOT_Text_1:
	.string "Me do not see what colours matter.\p"
	.string "We all goblins on the inside.$"

BATTLE_DEMONHEADGE_Text_0:
	.string "DEMONHEADGE$"

BATTLE_DEMONHEADGE_Text_1:
	.string "Hello there.\p"
	.string "I am currently a Cupholder.\p"
	.string "But I am also the Leader of team\n"
	.string "PokeScapers.\p"
	.string "Team PokeScape is made up some amazing\n"
	.string "people.\p"
	.string "Oh but enough of that.\p"
	.string "You wish to battle me then so be it!\p"
	.string "Feel the wrath of an Elder God!$"

BATTLE_DEMONHEADGE_Text_2:
	.string "You are a PokeScapian Master!$"

BATTLE_DEMONHEADGE_Text_3:
	.string "You may find others from team\n"
	.string "PokeScaper scattered all across the\l"
	.string "region.\p"
	.string "I hope you enjoy playing the game.$"
