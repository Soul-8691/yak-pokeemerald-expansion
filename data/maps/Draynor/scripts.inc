Draynor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Draynor_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto WizardsTower_Draynor_STATE
	return


WizardsTower_Draynor_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_Draynor_STATE_2
	case 1, WizardsTower_Draynor_STATE_2
	case 2, WizardsTower_Draynor_STATE_2
	case 3, WizardsTower_Draynor_STATE_2
	case 4, WizardsTower_Draynor_STATE_3
	case 5, WizardsTower_Draynor_STATE_4
	case 6, WizardsTower_Draynor_STATE_4
	case 7, WizardsTower_Draynor_STATE_4
	case 8, WizardsTower_Draynor_STATE_4
	case 9, WizardsTower_Draynor_STATE_4
	return

WizardsTower_Draynor_STATE_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 21
	removeobject 24
	release
	end

WizardsTower_Draynor_STATE_3:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 21
	addobject 24
	release
	end

WizardsTower_Draynor_STATE_4:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 21
	removeobject 24
	release
	end


HAM_EVENT_Draynor::
	lockall
	applymovement 21, HAM_Movement6_1
	namebox HAM_EVENT_Draynor_Text_0
	msgbox HAM_EVENT_Draynor_Text_1
	waitmovement 0
	hidenamebox
	closemessage
	applymovement 21, HAM_Movement6_2
	waitmovement 0
	removeobject 21
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 5
	release
	end


HAM_Movement6_1:
	face_up
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	step_end

HAM_Movement6_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Draynor_Ariane::
	lock
	namebox HAM_EVENT_Draynor_Text_0
	msgbox Draynor_Ariane_Text_0
	hidenamebox
	release
	end


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
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard1_Text_1
	hidenamebox
	release
	end


Draynor_Coolmom227::
	namebox Draynor_Coolmom227_Text_0
	msgbox Draynor_Coolmom227_Text_1
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


Draynor_FORTUNATO::
	namebox Draynor_FORTUNATO_Text_0
	msgbox Draynor_FORTUNATO_Text_1
	hidenamebox
	release
	end


Draynor_Morgan::
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_1
	msgbox Draynor_Morgan_Text_2
	msgbox Draynor_Morgan_Text_3
	hidenamebox
	release
	end


Draynor_TREEGUY::
	lock
	faceplayer
	namebox Draynor_TREEGUY_Text_0
	msgbox Draynor_TREEGUY_Text_1
	msgbox Draynor_TREEGUY_Text_2
	hidenamebox
	release
	end


HAM_EVENT_Draynor_Text_0:
	.string "Ariane$"

HAM_EVENT_Draynor_Text_1:
	.string "I'm not sure which way he went...\p"
	.string "Maybe the market..$"

Draynor_Ariane_Text_0:
	.string "He doesn't seem to be here...\p"
	.string "I hope he didn't leave town..$"

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
	.string "Hey!\n"
	.string "Get your hands off there!$"

Draynor_Coolmom227_Text_0:
	.string "Cool Mom227$"

Draynor_Coolmom227_Text_1:
	.string "...$"

Draynor_Guard2_Text_0:
	.string "Don't cause any trouble.$"

Draynor_Guard3_Text_0:
	.string "Ow..\p"
	.string "I fell out of this tree.$"

Draynor_FORTUNATO_Text_0:
	.string "Fortunato$"

Draynor_FORTUNATO_Text_1:
	.string "Can I interest you in something to\n"
	.string "drink?$"

Draynor_Morgan_Text_0:
	.string "Morgan$"

Draynor_Morgan_Text_1:
	.string "There's a Vampyre in Draynor Mannor but\n"
	.string "no one believes me..$"

Draynor_Morgan_Text_2:
	.string "What is that?!\p"
	.string "You defeated the Vampyre in a battle?\p"
	.string "Well thanks for that, please accept\n"
	.string "this as a gift.$"

Draynor_Morgan_Text_3:
	.string "Thank you again.$"

Draynor_TREEGUY_Text_0:
	.string "GUARD$"

Draynor_TREEGUY_Text_1:
	.string "Ooooch!\p"
	.string "Oof!\p"
	.string "Ouch!$"

Draynor_TREEGUY_Text_2:
	.string "Ow!\p"
	.string "That really hurt!\p"
	.string "Hey what is the big idea!\p"
	.string "I was trying to catch a red coloured\n"
	.string "Ravenling, but you scared it away!\p"
	.string "...\p"
	.string "Sigh...\p"
	.string "Oh well, I guess I should better get\n"
	.string "back to work..$"
