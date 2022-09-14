Falador_Castleyard_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castleyard_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Falador_Castleyard_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto FALADORCASTLE_QUEST_STATE
	return


FALADORCASTLE_QUEST_STATE::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 1, FALADORCASTLE_QUEST_STATE_2
	case 3, FALADORCASTLE_QUEST_STATE_3
	case 4, FALADORCASTLE_QUEST_STATE_4
	case 5, FALADORCASTLE_QUEST_STATE_4
	return

FALADORCASTLE_QUEST_STATE_2:
	removeobject 1
	removeobject 12
	setflag FLAG_TEMP_1
	setobjectxyperm 11, 11, 15
	setobjectmovementtype 11, MOVEMENT_TYPE_LOOK_AROUND
	setobjectxyperm 3, 10, 11
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 4, 11, 11
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_UP
	return

FALADORCASTLE_QUEST_STATE_3:
	setobjectxyperm 11, 11, 14
	setobjectmovementtype 11, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 12, 10, 13
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 1, 12, 13
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return

FALADORCASTLE_QUEST_STATE_4:
	removeobject 11
	removeobject 12
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	return


NPC_FALADORCASTLE_QUEST_PART_1::
	lock
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_1_Text_1
	closemessage
	hidenamebox
	applymovement 12, FALADORCASTLE_MOVEMENT_1
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_1_Text_2
	closemessage
	hidenamebox
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_1, 10
	goto_if_eq NPC_FALADORCASTLE_QUEST_PART_1_2
	applymovement 12, FALADORCASTLE_MOVEMENT_2
	applymovement 1, FALADORCASTLE_MOVEMENT_3
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_11
	waitmovement 0
NPC_FALADORCASTLE_QUEST_PART_1_1:
	removeobject 1
	removeobject 12
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_3
	applymovement 11, FALADORCASTLE_MOVEMENT_4
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_3
	msgbox NPC_FALADORCASTLE_QUEST_PART_1_Text_4
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_5
	waitmovement 0
	setvar VAR_POKESCAPE_FALADOR_STATE, 2
	release
	end

NPC_FALADORCASTLE_QUEST_PART_1_2:
	applymovement 12, FALADORCASTLE_MOVEMENT_2
	applymovement 1, FALADORCASTLE_MOVEMENT_3
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_1_1


FALADORCASTLE_MOVEMENT_1:
	walk_up
	walk_right
	delay_8
	step_end

FALADORCASTLE_MOVEMENT_2:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_3:
	walk_left
	walk_up
	walk_up
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_4:
	face_up
	walk_left
	walk_up
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_5:
	walk_up
	step_end

FALADORCASTLE_MOVEMENT_11:
	delay_8
	lock_facing_direction
	walk_left
	step_end

NPC_FALADORCASTLE_QUEST_PART_2::
	lock
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_3
	msgbox NPC_FALADORCASTLE_QUEST_PART_2_Text_0
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_5
	waitmovement 0
	release
	end


NPC_FALADORCASTLE_QUEST_AMIK_CHAT::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_1_Text_3
	msgbox NPC_FALADORCASTLE_QUEST_PART_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT::
	switch VAR_POKESCAPE_FALADOR_STATE
	case 0, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_3
	case 1, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_3
	case 2, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_3
	case 3, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_3
	case 4, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_4
	case 5, NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_4
NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1:
	closemessage
	hidenamebox
	release
	end

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_3:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_1
	goto NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_4:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_2
	goto NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_1


NPC_FALADORCASTLE_QUEST_PART_4_1::
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_6
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_4
	return


NPC_FALADORCASTLE_QUEST_PART_4_2::
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_7
	waitmovement 0
	goto NPC_FALADORCASTLE_QUEST_PART_4
	return


NPC_FALADORCASTLE_QUEST_PART_4::
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_1
	closemessage
	hidenamebox
	applymovement 1, FALADORCASTLE_MOVEMENT_8
	applymovement 12, FALADORCASTLE_MOVEMENT_9
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_3
	closemessage
	hidenamebox
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_4
	closemessage
	hidenamebox
	applymovement 11, FALADORCASTLE_MOVEMENT_10
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_8
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_2
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_5
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_9
	waitmovement 0
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_6
	msgbox NPC_FALADORCASTLE_QUEST_PART_4_Text_7
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, FALADORCASTLE_MOVEMENT_12
	waitmovement 0
	applymovement 1, FALADORCASTLE_MOVEMENT_10
	applymovement 12, FALADORCASTLE_MOVEMENT_10
	waitmovement 0
	removeobject 11
	removeobject 12
	removeobject 1
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setvar VAR_POKESCAPE_FALADOR_STATE, 4
	release
	end


FALADORCASTLE_MOVEMENT_6:
	walk_down
	walk_right
	walk_down
	step_end

FALADORCASTLE_MOVEMENT_7:
	walk_down
	walk_down
	step_end

FALADORCASTLE_MOVEMENT_8:
	face_left
	step_end

FALADORCASTLE_MOVEMENT_9:
	face_right
	step_end

FALADORCASTLE_MOVEMENT_10:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FALADORCASTLE_MOVEMENT_12:
	face_down
	step_end

NPC_FALADORCASTLE_GYM_SIRTHEO::
	trainerbattle_single TRAINER_FALADOR_GYM_1, NPC_FALADORCASTLE_GYM_SIRTHEO_Text_0, NPC_FALADORCASTLE_GYM_SIRTHEO_Text_1
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_GYM_SIRTHEO_2
	case 5, NPC_FALADORCASTLE_GYM_SIRTHEO_3
	return

NPC_FALADORCASTLE_GYM_SIRTHEO_2:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_2
	msgbox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_3
	hidenamebox
	release
	end

NPC_FALADORCASTLE_GYM_SIRTHEO_3:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_2
	msgbox NPC_FALADORCASTLE_GYM_SIRTHEO_Text_4
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_TRAINER_2::
	trainerbattle_single TRAINER_FALADOR_GYM_2, NPC_FALADORCASTLE_GYM_TRAINER_2_Text_0, NPC_FALADORCASTLE_GYM_TRAINER_2_Text_1
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_GYM_TRAINER_2_2
	case 5, NPC_FALADORCASTLE_GYM_TRAINER_2_3
	return

NPC_FALADORCASTLE_GYM_TRAINER_2_2:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_1
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_GYM_TRAINER_2_3:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_2_Text_1
	hidenamebox
	closemessage
	end


NPC_FALADORCASTLE_GYM_TRAINER_3::
	trainerbattle_single TRAINER_FALADOR_GYM_3, NPC_FALADORCASTLE_GYM_TRAINER_3_Text_0, NPC_FALADORCASTLE_GYM_TRAINER_3_Text_1
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_GYM_TRAINER_3_2
	case 5, NPC_FALADORCASTLE_GYM_TRAINER_3_3
	return

NPC_FALADORCASTLE_GYM_TRAINER_3_2:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_3
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_GYM_TRAINER_3_3:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_3_Text_3
	hidenamebox
	closemessage
	release
	end


NPC_FALADORCASTLE_GYM_TRAINER_4::
	trainerbattle_single TRAINER_FALADOR_GYM_4, NPC_FALADORCASTLE_GYM_TRAINER_4_Text_0, NPC_FALADORCASTLE_GYM_TRAINER_4_Text_1
	switch VAR_POKESCAPE_FALADOR_STATE
	case 4, NPC_FALADORCASTLE_GYM_TRAINER_4_2
	case 5, NPC_FALADORCASTLE_GYM_TRAINER_4_3
	return

NPC_FALADORCASTLE_GYM_TRAINER_4_2:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_1
	hidenamebox
	closemessage
	release
	end

NPC_FALADORCASTLE_GYM_TRAINER_4_3:
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_2
	msgbox NPC_FALADORCASTLE_GYM_TRAINER_4_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_FALADORCASTLE_GYM_SIRAMIKVARZE::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	goto_if_unset FLAG_BADGE02_GET, NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_2
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_6
	hidenamebox
	release
	end

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_2:
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_0
	hidenamebox
	trainerbattle_no_intro TRAINER_FALADOR_GYM_AMIKVARZE, NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_1
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_2
	playfanfare MUS_OBTAIN_BADGE
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_3
	waitfanfare
	waitmessage
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_4
	hidenamebox
	giveitem ITEM_TM07, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_0
	msgbox NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_5
	setvar VAR_POKESCAPE_FALADOR_STATE, 5
	setflag FLAG_BADGE02_GET
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_SIROWEN::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_QUEST_PART_4_Text_2
	msgbox NPC_FALADORCASTLE_GYM_SIROWEN_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_SirRentee::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_SirRentee_Text_0
	msgbox NPC_FALADORCASTLE_GYM_SirRentee_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple::
	lock
	faceplayer
	namebox NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_0
	msgbox NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE23_DWARF_ROCKS::
	lock
	faceplayer
	namebox NPC_ROUTE23_DWARF_ROCKS_Text_0
	msgbox NPC_ROUTE23_DWARF_ROCKS_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE24_DORIC::
	lock
	faceplayer
	namebox NPC_ROUTE24_DORIC_Text_0
	msgbox NPC_ROUTE24_DORIC_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_FALADORCASTLE_QUEST_PART_1_Text_0:
	.string "SIR OWEN$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_1:
	.string "Right away sir.$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_2:
	.string "With me Theo.$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_3:
	.string "SIR AMIK VARZE$"

NPC_FALADORCASTLE_QUEST_PART_1_Text_4:
	.string "Oh sorry, I am not accepting\n"
	.string "challengers today.\p"
	.string "There has been a disturbance within the\n"
	.string "Dwarven mines, which has my top\l"
	.string "priority.\p"
	.string "So sadly I will not be able to accept\n"
	.string "your battle until after this matter is\l"
	.string "resolved.$"

NPC_FALADORCASTLE_QUEST_PART_2_Text_0:
	.string "The sooner the disturbance within the\n"
	.string "Dwarven mines is sorted out, the\l"
	.string "sooner we can have a gym battle$"

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_0:
	.string "WHITE KNIGHT$"

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_1:
	.string "Sorry but the castle is closed for all\n"
	.string "MvM Championship participants, until\l"
	.string "the disturbance within the Dwarven\l"
	.string "mines is resolved.\p"
	.string "Which also means do not go poking\n"
	.string "around the mines in the north east of\l"
	.string "town, past the Party Room.\p"
	.string "We don't want you getting in danger.$"

NPC_FALADORCASTLE_QUEST_KNIGHT_CHAT_Text_2:
	.string "Welcome to the Falador Castle!$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_0:
	.string "Sir Amik Varze$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_1:
	.string "Thank you for the report.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_2:
	.string "Sir Owen$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_3:
	.string "Aha, nice timing!\p"
	.string "This is the challenger I spoke about.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_4:
	.string "I am grateful for your assistance\n"
	.string "within the mines.\p"
	.string "Have you considered joining the white\n"
	.string "knights?\p"
	.string "Ah but I am getting ahead of myself,\n"
	.string "you mentioned you wished to challenge\l"
	.string "me to a battle.\p"
	.string "I know you've already proved yourself\n"
	.string "within the mines but one more challenge\l"
	.string "lays before you.\p"
	.string "Make it to the top of the castle, I shall\n"
	.string "be waiting.\p"
	.string "Good luck!$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_5:
	.string "Good luck challenger and thank you\n"
	.string "again for your assistance.$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_6:
	.string "Sir Theodore$"

NPC_FALADORCASTLE_QUEST_PART_4_Text_7:
	.string "Thank you and I will see you soon!$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_0:
	.string "Thank you for your assistance in the\n"
	.string "mines, but now lets see how well you can\l"
	.string "handle yourself against me!$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_1:
	.string "As expected.$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_2:
	.string "Sir Theo$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_3:
	.string "Good luck navigating the castle.$"

NPC_FALADORCASTLE_GYM_SIRTHEO_Text_4:
	.string "Look at you!\p"
	.string "Have you considered becoming a white\n"
	.string "knight like myself?$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_0:
	.string "Quack!$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_1:
	.string "My dream is to one day be a duck.$"

NPC_FALADORCASTLE_GYM_TRAINER_2_Text_2:
	.string "Sir Emony$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_0:
	.string "Careful where you are going there.\p"
	.string "You would not want to stumble into an\n"
	.string "ambush would you?$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_1:
	.string "Not on my watch.$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_2:
	.string "Sir Pryce$"

NPC_FALADORCASTLE_GYM_TRAINER_3_Text_3:
	.string "The White knights have to be silent\n"
	.string "above all.\p"
	.string "Sir Amik Vaze tends to have horrible\n"
	.string "hangovers.$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_0:
	.string "To get to Sir amik you will have to get\n"
	.string "through me!$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_1:
	.string "Guess I wasn't that hard to get past.$"

NPC_FALADORCASTLE_GYM_TRAINER_4_Text_2:
	.string "Sir Loin$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_0:
	.string "Well done getting here, as promised here\n"
	.string "is your battle.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_1:
	.string "You beat me.. Congratulations!$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_2:
	.string "I am impressed!\p"
	.string "Have this badge.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_3:
	.string "{PLAYER} received the Falador BADGE\n"
	.string "from Sir Amik Varze.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_4:
	.string "Also have this, it is my favourite move.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_5:
	.string "That move is called Razor Shell, it is a\n"
	.string "very sharp move.\p"
	.string "Hopefully it will help you on your\n"
	.string "journey.$"

NPC_FALADORCASTLE_GYM_SIRAMIKVARZE_Text_6:
	.string "I recommend that you make your way to\n"
	.string "Al Kharid or Varrock for your next MvM\l"
	.string "gym challenge.\p"
	.string "Unless you would like to become a white\n"
	.string "knight instead?$"

NPC_FALADORCASTLE_GYM_SIROWEN_Text_0:
	.string "Hello again, these guys won't talk.\p"
	.string "But there does not seem to be anything\n"
	.string "stolen, so we aren't sure what they\l"
	.string "meant by distraction.$"

NPC_FALADORCASTLE_GYM_SirRentee_Text_0:
	.string "Sir Rentee$"

NPC_FALADORCASTLE_GYM_SirRentee_Text_1:
	.string "I am the designer of all the Family\n"
	.string "Crests.\p"
	.string "I wanted to make a design for the Badge\n"
	.string "of the Falador Gym too, but Sir Amik\l"
	.string "prevered the design of some 'Stan'\l"
	.string "fella over my design.\p"
	.string "Sigh, guess I could not compete against\n"
	.string "such artistic brilliance.$"

NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_0:
	.string "Spanfipple$"

NPC_FALADORCASTLE_GYM_Ambassador_Spanfipple_Text_1:
	.string "Earlier I saw the new prisoners.\p"
	.string "They must be bad people, but their Pink\n"
	.string "outfits looked fabulous!\p"
	.string "Much better than all this boring white\n"
	.string "around here.$"

NPC_ROUTE23_DWARF_ROCKS_Text_0:
	.string "DWARF$"

NPC_ROUTE23_DWARF_ROCKS_Text_1:
	.string "If only those goblins did not steal our\n"
	.string "pickaxe supplies.\p"
	.string "Then I could easily clear this\n"
	.string "rockslide.$"

NPC_ROUTE24_DORIC_Text_0:
	.string "DORIC$"

NPC_ROUTE24_DORIC_Text_1:
	.string "Hello traveller, I was wondering if you\n"
	.string "could get me some Iron ore.\p"
	.string "You see, suddenly all ya human-folk are\n"
	.string "obsessed with Ironman mode and I want\l"
	.string "in.\p"
	.string "What does that mean I have to get it\n"
	.string "myself?\p"
	.string "Nonsense!\p"
	.string "Stop kidding around and get this old\n"
	.string "dwarf some iron ore.\p"
	.string "I will reward you of course!$"
