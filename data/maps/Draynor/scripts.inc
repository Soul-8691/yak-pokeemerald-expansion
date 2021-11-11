Draynor_MapScripts::
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, DraynorWarpCheck
	map_script MAP_SCRIPT_ON_TRANSITION, DraynorHideNpcs
	.byte 0


DraynorWarpCheck::
	map_script_2 VAR_TEMP_1, 0, DraynorHideNpcs
	return


DraynorHideNpcs::
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 5
	goto_if_ne DraynorHideNpcs_1
	return

DraynorHideNpcs_1:
	removeobject 21
	setflag FLAG_TEMP_1
	return


ArianeChaseHamEvent6::
	lockall
	applymovement 21, ArianeRunAfterHam9
	waitmovement 0
	namebox ArianeChaseHamEvent6_Text_0
	msgbox ArianeChaseHamEvent6_Text_1
	hidenamebox
	release
	lockall
	applymovement 21, ArianeRunAfterHam10
	waitmovement 0
	removeobject 21
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 6
	return


NPC_PIG::
	lock
	faceplayer
	playmoncry SPECIES_PIG, 0
	msgbox NPC_PIG_Text_0
	waitmoncry
	release
	end


Draynor_Diango::
	lock
	faceplayer
	namebox Draynor_Diango_Text_0
	msgbox Draynor_Diango_Text_1
	hidenamebox
	release
	end


Draynor_Miss_Schism::
	lock
	faceplayer
	namebox Draynor_Miss_Schism_Text_0
	msgbox Draynor_Miss_Schism_Text_1
	hidenamebox
	release
	end


Draynor_Oliva::
	lock
	faceplayer
	namebox Draynor_Oliva_Text_0
	msgbox Draynor_Oliva_Text_1
	hidenamebox
	release
	end


Draynor_Martin::
	lock
	faceplayer
	namebox Draynor_Martin_Text_0
	msgbox Draynor_Martin_Text_1
	hidenamebox
	release
	end


Draynor_Guard1::
	lock
	faceplayer
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard1_Text_1
	hidenamebox
	release
	end


Draynor_Guard2::
	lock
	faceplayer
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard2_Text_0
	hidenamebox
	release
	end


Draynor_Guard3::
	lock
	faceplayer
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard3_Text_0
	hidenamebox
	release
	end


Draynor_Morgan::
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_1
	hidenamebox
	release
	end


ArianeRunAfterHam9:
	face_left
	face_right
	face_down
	step_end

ArianeRunAfterHam10:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

ArianeChaseHamEvent6_Text_0:
	.string "Ariane$"

ArianeChaseHamEvent6_Text_1:
	.string "I'm not sure which way he went.. We\n"
	.string "should split up. I'll check the market.\l"
	.string "You go north to the crossroads. We will\l"
	.string "definetly catch him!$"

NPC_PIG_Text_0:
	.string "OINK!$"

Draynor_Diango_Text_0:
	.string "Diango$"

Draynor_Diango_Text_1:
	.string "Howdy!$"

Draynor_Miss_Schism_Text_0:
	.string "Miss Schism$"

Draynor_Miss_Schism_Text_1:
	.string "Hello.$"

Draynor_Oliva_Text_0:
	.string "Oliva$"

Draynor_Oliva_Text_1:
	.string "The other day a stranger dressed in\n"
	.string "blue and yellow gave me a kitten.$"

Draynor_Martin_Text_0:
	.string "Martin$"

Draynor_Martin_Text_1:
	.string "Sorry, I'm a bit too busy to talk.\p"
	.string "Someone nicked my cabbage.$"

Draynor_Guard1_Text_0:
	.string "Guard$"

Draynor_Guard1_Text_1:
	.string "I've got my eye on you, don't cause any\n"
	.string "trouble or else.$"

Draynor_Guard2_Text_0:
	.string "Don't cause any trouble.$"

Draynor_Guard3_Text_0:
	.string "Ow..\p"
	.string "I fell out of this tree.$"

Draynor_Morgan_Text_0:
	.string "Morgan$"

Draynor_Morgan_Text_1:
	.string "There's a Vampyre in Draynor Mannor but\n"
	.string "no one believes me..$"
