Draynor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Draynor_MapScripts_MAP_SCRIPT_ON_LOAD:
	call WizardsTower_Draynor_STATE
	call DRAYNOR_GUARD_STATE
	end


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
	return

WizardsTower_Draynor_STATE_3:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 21
	addobject 24
	release
	return

WizardsTower_Draynor_STATE_4:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 21
	removeobject 24
	release
	return


DRAYNOR_GUARD_STATE::
	switch VAR_POKESCAPE_DRAYNOR_GUARD_STATE
	case 0, DRAYNOR_GUARD_STATE_2
	case 1, DRAYNOR_GUARD_STATE_3
	return

DRAYNOR_GUARD_STATE_2:
	setflag FLAG_TEMP_3
	removeobject 19
	release
	return

DRAYNOR_GUARD_STATE_3:
	clearflag FLAG_TEMP_3
	addobject 19
	setobjectxyperm 19, 17, 31
	release
	return


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
	faceplayer
	namebox Draynor_FORTUNATO_Text_0
	msgbox Draynor_FORTUNATO_Text_1
	hidenamebox
	release
	end


Generalstore_Draynor_Clerk::
	lock
	faceplayer
	msgbox Generalstore_Draynor_Clerk_Text_0
	waitmessage
	pokemart GeneralStoreDraynor
	msgbox Generalstore_Draynor_Clerk_Text_1
	release
	return


    .align 2
GeneralStoreDraynor:
    .2byte ITEM_BRONZE_POUCH
    .2byte ITEM_IRON_POUCH
    .2byte ITEM_BREAD
	.2byte ITEM_WIZARDS_BLIZZARD
	.2byte ITEM_CHOCOLATE_SUNDAY
	.2byte ITEM_DRUNK_DRAGON
	.2byte ITEM_FRUIT_BLAST
	.2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_NONE
    release
    end

Draynor_TREE::
	compare VAR_POKESCAPE_DRAYNOR_GUARD_STATE, 0
	goto_if_eq Draynor_TREE_1
	end

Draynor_TREE_1:
	lock
	namebox Draynor_TREE_Text_0
	msgbox Draynor_TREE_Text_1
	hidenamebox
	addobject 19
	playse SE_LEDGE
	applymovement 19, Movement_DraynorGuardTree_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorGuardTree_2
	waitmovement 0
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_TREE_Text_2
	hidenamebox
	closemessage
	applymovement 19, Movement_DraynorGuardTree_3
	waitmovement 0
	setvar VAR_POKESCAPE_DRAYNOR_GUARD_STATE, 1
	release
	end


Movement_DraynorGuardTree_1:
	jump_special_down
	step_end

Movement_DraynorGuardTree_2:
	lock_facing_direction
	walk_fast_down
	unlock_facing_direction
	step_end

Movement_DraynorGuardTree_3:
	walk_right
	walk_right
	walk_up
	walk_up
	face_down
	step_end

NPC_Draynor_Woman_1::
	lock
	faceplayer
	namebox NPC_Draynor_Woman_1_Text_0
	msgbox NPC_Draynor_Woman_1_Text_1
	hidenamebox
	release
	end


NPC_Draynor_Noob_WillowTree::
	lock
	faceplayer
	namebox NPC_Draynor_Noob_WillowTree_Text_0
	msgbox NPC_Draynor_Noob_WillowTree_Text_1
	hidenamebox
	release
	end


Draynor_Morgan::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, Draynor_Morgan_2
	case 1, Draynor_Morgan_2
	case 2, Draynor_Morgan_2
	case 3, Draynor_Morgan_2
	case 4, Draynor_Morgan_2
	case 5, Draynor_Morgan_2
	case 6, Draynor_Morgan_2
	case 7, Draynor_Morgan_2
	case 8, Draynor_Morgan_3
	return

Draynor_Morgan_2:
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_1
	hidenamebox
	release
	end

Draynor_Morgan_3:
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_2
	hidenamebox
	release
	end


NPC_Draynor_Morgans_Wife::
	lock
	faceplayer
	namebox NPC_Draynor_Morgans_Wife_Text_0
	msgbox NPC_Draynor_Morgans_Wife_Text_1
	hidenamebox
	release
	end


NPC_Draynor_Mugger::
	lock
	faceplayer
	namebox NPC_Draynor_Mugger_Text_0
	msgbox NPC_Draynor_Mugger_Text_1
	hidenamebox
	release
	end


NPC_Draynor_WiseOldMan::
	lock
	faceplayer
	namebox NPC_Draynor_WiseOldMan_Text_0
	msgbox NPC_Draynor_WiseOldMan_Text_1
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
	.string "What do you want now?\p"
	.string "Can you not see I am working?$"

Draynor_FORTUNATO_Text_0:
	.string "Fortunato$"

Draynor_FORTUNATO_Text_1:
	.string "Can I interest you in something to\n"
	.string "drink?$"

Generalstore_Draynor_Clerk_Text_0:
	.string "Welcome to the Drayor Markets!\p"
	.string "How may I help you?$"

Generalstore_Draynor_Clerk_Text_1:
	.string "Thank you, come again!$"

Draynor_TREE_Text_0:
	.string "???$"

Draynor_TREE_Text_1:
	.string "Ooooch!\p"
	.string "Oof!\p"
	.string "Ouch!$"

Draynor_TREE_Text_2:
	.string "Ow!\p"
	.string "That really hurt!\p"
	.string "Hey what is the big idea!\p"
	.string "I was trying to catch a red coloured\n"
	.string "Ravenling, but you scared it away!\p"
	.string "...\p"
	.string "Sigh...\p"
	.string "Oh well, I guess I should better get\n"
	.string "back to work..$"

NPC_Draynor_Woman_1_Text_0:
	.string "Quester$"

NPC_Draynor_Woman_1_Text_1:
	.string "If you follow this road south, it will\n"
	.string "lead you to the Wizards' Tower.\p"
	.string "Make sure to be all healed up before\n"
	.string "trekking there.$"

NPC_Draynor_Noob_WillowTree_Text_0:
	.string "Noob$"

NPC_Draynor_Noob_WillowTree_Text_1:
	.string "The dark wizards told me they were\n"
	.string "thrown out of the Wizards' Tower for\l"
	.string "being Zamorakians and now I cannot\l"
	.string "play by the willow trees.$"

Draynor_Morgan_Text_0:
	.string "Morgan$"

Draynor_Morgan_Text_1:
	.string "There's a Vampyre in Draynor Manor but\n"
	.string "no one believes me…$"

Draynor_Morgan_Text_2:
	.string "What is that?!\p"
	.string "You defeated the Vampyre in a battle?\p"
	.string "Well thanks for that!$"

NPC_Draynor_Morgans_Wife_Text_0:
	.string "Morgans Wife$"

NPC_Draynor_Morgans_Wife_Text_1:
	.string "All my husband thinks of is slaying\n"
	.string "vampyres these days…\p"
	.string "But I think he is trying to slay our\n"
	.string "marriage instead.$"

NPC_Draynor_Mugger_Text_0:
	.string "Mugger$"

NPC_Draynor_Mugger_Text_1:
	.string "Draynor village is the town of farmers\n"
	.string "and vampyres.\p"
	.string "I am not sure why I decided to be a\n"
	.string "mugger here but its a job somebody has\l"
	.string "to take.$"

NPC_Draynor_WiseOldMan_Text_0:
	.string "Wise Old Man$"

NPC_Draynor_WiseOldMan_Text_1:
	.string "…$"