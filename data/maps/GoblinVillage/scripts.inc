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


NPC_GOBLINVILLAGE_PICKAXE_EVENT::
	lock
	faceplayer
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_1
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_3
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_4
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_5
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_6
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_7
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_8
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_9
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_10
	hidenamebox
	release
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_11
	hidenamebox
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_12
	hidenamebox
	release
	namebox NPC_GOBLINVILLAGE_GRUBFOOT_Text_0
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_13
	hidenamebox
	release
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_14
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_15
	hidenamebox
	closemessage
	call NPC_GOBLINVILLAGE_CHOOSEPICKAXE
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_16
	hidenamebox
	release
	end


NPC_GOBLINVILLAGE_RECHOOSEPICKAXE::
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_0
	hidenamebox
	closemessage
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_1
	removeitem ITEM_PICKAXE
	removeitem ITEM_ADAMANTPICKAXE
	removeitem ITEM_BRONZEPICKAXE
	removeitem ITEM_IRONPICKAXE
	removeitem ITEM_STEELPICKAXE
	removeitem ITEM_MITHRILPICKAXE
	removeitem ITEM_RUNEPICKAXE
	removeitem ITEM_BLACKPICKAXE
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_2
	hidenamebox
	closemessage
	call NPC_GOBLINVILLAGE_CHOOSEPICKAXE
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_3
	hidenamebox
	closemessage
	return


NPC_GOBLINVILLAGE_CHOOSEPICKAXE::
	multichoicedefault 1, 0, MULTI_COLOUR_PICKAXE, 0, 0
	switch VAR_RESULT
	case 0, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_3
	case 1, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_4
	case 2, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_5
	case 3, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_6
	case 4, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_7
	case 5, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_8
	case 6, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_9
	case 7, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_10
	case 8, NPC_GOBLINVILLAGE_CHOOSEPICKAXE_11
NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1:
	return

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_3:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_0
	hidenamebox
	giveitem ITEM_ADAMANTPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_4:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_1
	hidenamebox
	giveitem ITEM_PICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_5:
	namebox NPC_GOBLINVILLAGE_GRUBFOOT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_2
	hidenamebox
	giveitem ITEM_BRONZEPICKAXE, 1
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_3
	hidenamebox
	closemessage
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_6:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_IRONPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_7:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_STEELPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_8:
	namebox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_5
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_6
	hidenamebox
	closemessage
	giveitem ITEM_MITHRILPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_9:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_RUNEPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_10:
	namebox NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4
	hidenamebox
	closemessage
	giveitem ITEM_BLACKPICKAXE, 1
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_11:
	msgbox NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_7
	closemessage
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE
	goto NPC_GOBLINVILLAGE_CHOOSEPICKAXE_1


EventScript_New_RockSmash::
	lockall
	setitemarg ITEM_PICKAXE
	checkitem ITEM_PICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_2
EventScript_New_RockSmash_1:
	setfieldeffectargument 0, VAR_RESULT
	msgbox Text_WantToSmash, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_CancelSmash
	closemessage
	dofieldeffect FLDEFF_USE_ROCK_SMASH
	waitstate
	goto EventScript_SmashRock
	end

EventScript_New_RockSmash_2:
	setitemarg ITEM_ADAMANTPICKAXE
	checkitem ITEM_ADAMANTPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_4
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_4:
	setitemarg ITEM_BRONZEPICKAXE
	checkitem ITEM_BRONZEPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_6
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_6:
	setitemarg ITEM_IRONPICKAXE
	checkitem ITEM_IRONPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_8
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_8:
	setitemarg ITEM_STEELPICKAXE
	checkitem ITEM_STEELPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_10
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_10:
	setitemarg ITEM_MITHRILPICKAXE
	checkitem ITEM_MITHRILPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_12
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_12:
	setitemarg ITEM_RUNEPICKAXE
	checkitem ITEM_RUNEPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_14
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_14:
	setitemarg ITEM_BLACKPICKAXE
	checkitem ITEM_BLACKPICKAXE, 1
	compare VAR_RESULT, 0
	goto_if_eq EventScript_New_RockSmash_16
	goto EventScript_New_RockSmash_1

EventScript_New_RockSmash_16:
	goto_if_eq EventScript_CantSmashRock
	goto EventScript_New_RockSmash_1


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

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_0:
	.string "WARTFACE$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_1:
	.string "Green armour better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_2:
	.string "BENTNOZE$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_3:
	.string "No!\l"
	.string "Red armour better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_4:
	.string "Human!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_5:
	.string "Red hooman better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_6:
	.string "Oh actual hooman…\p"
	.string "Hooman what do you want?\p"
	.string "Can you not see we are in important\n"
	.string "discussion!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_7:
	.string "Pickaxe?\p"
	.string "We do not know about no Pickaxe but we\n"
	.string "know about pointy coloured sticks.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_8:
	.string "Goblins bring pointy coloured sticks\n"
	.string "back with them after chasing pink\l"
	.string "armoured hoomans off.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_9:
	.string "Pointy coloured sticks are in box here.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_10:
	.string "Hooman can have one if hooman agree\n"
	.string "that green stick is better.$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_11:
	.string "No red stick is better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_12:
	.string "No!\l"
	.string "Green stick is better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_13:
	.string "I think brown pointy stick looks\n"
	.string "better!$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_14:
	.string "…{PAUSE 32}…{PAUSE 32}…$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_15:
	.string "Hooman, you decide for us.\p"
	.string "Which stick is better?$"

NPC_GOBLINVILLAGE_PICKAXE_EVENT_Text_16:
	.string "Me hope hooman is with stick colour.\p"
	.string "Now go away hooman, we have important\n"
	.string "discussion to continue.$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_0:
	.string "Hooman change colour of pointy stick!$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_1:
	.string "The goblin snatches your Pickaxe and\n"
	.string "throws it into the box with the others.$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_2:
	.string "Now choose hooman!$"

NPC_GOBLINVILLAGE_RECHOOSEPICKAXE_Text_3:
	.string "Me hope hooman is happy with stick\n"
	.string "colour.\p"
	.string "Now go away hooman.$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_0:
	.string "Hooman choose well!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_1:
	.string "HA!\p"
	.string "In your face Bentnoze!\p"
	.string "Red is best!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_2:
	.string "Hooman agrees with Grubfoot!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_3:
	.string "We are confused why hooman would pick\n"
	.string "boring brown colour.$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_4:
	.string "Why is this even an option?$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_5:
	.string "MITHRILMAN$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_6:
	.string "Now that is the way of Mithrilmen!$"

NPC_GOBLINVILLAGE_CHOOSEPICKAXE_Text_7:
	.string "Hooman, you need to pick one.$"
