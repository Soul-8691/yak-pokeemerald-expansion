Varrock_Palace_1F_MapScripts::
	.byte 0


TRIGGER_VARROCK_GYM_ADVISOR::
	goto_if_unset FLAG_BADGE03_GET, TRIGGER_VARROCK_GYM_ADVISOR_1
	return

TRIGGER_VARROCK_GYM_ADVISOR_1:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_4
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_6
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq TRIGGER_VARROCK_GYM_ADVISOR_6
	return

TRIGGER_VARROCK_GYM_ADVISOR_4:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	call QUEST_VARROCK_GYM_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WALKDOWN
	waitmovement 0
	release
	end

TRIGGER_VARROCK_GYM_ADVISOR_6:
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	call QUEST_VARROCK_GYM_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WALKDOWN
	waitmovement 0
	release
	end


VARROCK_GYM_ADVISOR::
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_ADVISOR_1
	return

VARROCK_GYM_ADVISOR_1:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 0
	goto_if_eq VARROCK_GYM_ADVISOR_4
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCK_GYM_ADVISOR_6
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_ADVISOR_6
	return

VARROCK_GYM_ADVISOR_4:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_1
	release
	end

VARROCK_GYM_ADVISOR_6:
	lock
	faceplayer
	call QUEST_VARROCK_GYM_2
	release
	end


QUEST_VARROCK_GYM_1::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq QUEST_VARROCK_GYM_1_2
	msgbox QUEST_VARROCK_GYM_1_Text_3
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	return

QUEST_VARROCK_GYM_1_2:
	msgbox QUEST_VARROCK_GYM_1_Text_2
	closemessage
	hidenamebox
	return


QUEST_VARROCK_GYM_2::
	namebox QUEST_VARROCK_GYM_1_Text_0
	msgbox QUEST_VARROCK_GYM_2_Text_0
	closemessage
	hidenamebox
	return


VARROCK_GYM_RELDO::
	lock
	faceplayer
	namebox VARROCK_GYM_RELDO_Text_0
	msgbox VARROCK_GYM_RELDO_Text_1
	goto_if_unset FLAG_BADGE03_GET, VARROCK_GYM_RELDO_2
	msgbox VARROCK_GYM_RELDO_Text_4
VARROCK_GYM_RELDO_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_RELDO_2:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 5
	goto_if_eq VARROCK_GYM_RELDO_6
VARROCK_GYM_RELDO_5:
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_RELDO_8
	goto VARROCK_GYM_RELDO_1

VARROCK_GYM_RELDO_6:
	msgbox VARROCK_GYM_RELDO_Text_2
	setvar VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto VARROCK_GYM_RELDO_5

VARROCK_GYM_RELDO_8:
	msgbox VARROCK_GYM_RELDO_Text_3
	goto VARROCK_GYM_RELDO_1


VARROCK_GYM_GENERIC_BOOK::
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_GENERIC_BOOK_2
	random 3
	switch VAR_RESULT
	case 0, VARROCK_GYM_GENERIC_BOOK_12
	case 1, VARROCK_GYM_GENERIC_BOOK_13
	case 2, VARROCK_GYM_GENERIC_BOOK_14
	case 3, VARROCK_GYM_GENERIC_BOOK_15
VARROCK_GYM_GENERIC_BOOK_1:
	closemessage
	release
	end

VARROCK_GYM_GENERIC_BOOK_2:
	random 3
	switch VAR_RESULT
	case 0, VARROCK_GYM_GENERIC_BOOK_7
	case 1, VARROCK_GYM_GENERIC_BOOK_8
	case 2, VARROCK_GYM_GENERIC_BOOK_9
	case 3, VARROCK_GYM_GENERIC_BOOK_10
VARROCK_GYM_GENERIC_BOOK_5:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_4
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_7:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_0
	goto VARROCK_GYM_GENERIC_BOOK_5

VARROCK_GYM_GENERIC_BOOK_8:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_1
	goto VARROCK_GYM_GENERIC_BOOK_5

VARROCK_GYM_GENERIC_BOOK_9:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_2
	goto VARROCK_GYM_GENERIC_BOOK_5

VARROCK_GYM_GENERIC_BOOK_10:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_3
	goto VARROCK_GYM_GENERIC_BOOK_5

VARROCK_GYM_GENERIC_BOOK_12:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_0
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_13:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_1
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_14:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_2
	goto VARROCK_GYM_GENERIC_BOOK_1

VARROCK_GYM_GENERIC_BOOK_15:
	msgbox VARROCK_GYM_GENERIC_BOOK_Text_3
	goto VARROCK_GYM_GENERIC_BOOK_1


VARROCK_GYM_BOOK_1::
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_BOOK_1_2
	msgbox VARROCK_GYM_BOOK_1_Text_2
VARROCK_GYM_BOOK_1_1:
	closemessage
	release
	end

VARROCK_GYM_BOOK_1_2:
	msgbox VARROCK_GYM_BOOK_1_Text_0
	msgbox VARROCK_GYM_BOOK_1_Text_1
	goto VARROCK_GYM_BOOK_1_1


VARROCK_GYM_SIR_PRYSIN::
	lock
	faceplayer
	namebox VARROCK_GYM_SIR_PRYSIN_Text_0
	compare VAR_POKESCAPE_VARROCK_GYM_QUEST, 10
	goto_if_eq VARROCK_GYM_SIR_PRYSIN_2
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_3
VARROCK_GYM_SIR_PRYSIN_1:
	closemessage
	hidenamebox
	release
	end

VARROCK_GYM_SIR_PRYSIN_2:
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_1
	hidenamebox
	msgbox VARROCK_GYM_SIR_PRYSIN_Text_2
	goto VARROCK_GYM_SIR_PRYSIN_1


QUEST_VARROCK_GYM_1_Text_0:
	.string "Advisor$"

QUEST_VARROCK_GYM_1_Text_1:
	.string "Greetings, are you here for an MvM\n"
	.string "Championship challenge?$"

QUEST_VARROCK_GYM_1_Text_2:
	.string "Well I am very sorry but the King is\n"
	.string "quite busy today.\p"
	.string "You will have to see him another day.$"

QUEST_VARROCK_GYM_1_Text_3:
	.string "Excellent!\p"
	.string "Before you may challenge King Roald you\n"
	.string "must complete our Gym Challenge.\p"
	.string "You can start it by speaking to Reldo\n"
	.string "located within our Library.$"

QUEST_VARROCK_GYM_2_Text_0:
	.string "Good luck with your Gym Challenge!\p"
	.string "You can find Reldo in our Library.$"

VARROCK_GYM_RELDO_Text_0:
	.string "Reldo$"

VARROCK_GYM_RELDO_Text_1:
	.string "Welcome to the Library of Varrock.$"

VARROCK_GYM_RELDO_Text_2:
	.string "Oh are you perhaps here for your the\n"
	.string "Gym Challenge?\p"
	.string "Oh you are?\p"
	.string "Here are a list of books that are\n"
	.string "overdu-\p"
	.string "I mean, I need you to search all around\n"
	.string "the castle and find these specific\l"
	.string "books.\p"
	.string "Once you have found them all return\n"
	.string "back here and your challenge will be\l"
	.string "complete.$"

VARROCK_GYM_RELDO_Text_3:
	.string "If you are having trouble finding the\n"
	.string "books then try asking people or\l"
	.string "searching the bookshelves around the\l"
	.string "castle.$"

VARROCK_GYM_RELDO_Text_4:
	.string "We have so many books about so many\n"
	.string "things.\p"
	.string "If you have a question about something\n"
	.string "don't be afraid to ask me.$"

VARROCK_GYM_GENERIC_BOOK_Text_0:
	.string "This book is filled with so many words\n"
	.string "that it gives you a headache.$"

VARROCK_GYM_GENERIC_BOOK_Text_1:
	.string "It is a picture book!\p"
	.string "This is your type of book!$"

VARROCK_GYM_GENERIC_BOOK_Text_2:
	.string "You pick up the heavy book{PAUSE 15}…{PAUSE 15}…$"

VARROCK_GYM_GENERIC_BOOK_Text_3:
	.string "This is book looks interesting to read.$"

VARROCK_GYM_GENERIC_BOOK_Text_4:
	.string "But sadly this book isn't on the list of\n"
	.string "books you are looking for.$"

VARROCK_GYM_BOOK_1_Text_0:
	.string "The title reads…\p"
	.string "How to train your Frogeel.$"

VARROCK_GYM_BOOK_1_Text_1:
	.string "This is one of the books you are looking\n"
	.string "for!\p"
	.string "You put the book in your bag.$"

VARROCK_GYM_BOOK_1_Text_2:
	.string "The bookshelf is empty.$"

VARROCK_GYM_SIR_PRYSIN_Text_0:
	.string "Sir Prysin$"

VARROCK_GYM_SIR_PRYSIN_Text_1:
	.string "Hmm…?\p"
	.string "You are curious about what book I am\n"
	.string "reading?\p"
	.string "It is called Shadow Of The Storm.$"

VARROCK_GYM_SIR_PRYSIN_Text_2:
	.string "Sadly this book isn't on the list of\n"
	.string "books you are looking for.$"

VARROCK_GYM_SIR_PRYSIN_Text_3:
	.string "My great-grandfather once slayed the\n"
	.string "Demon known as Delrith.\p"
	.string "Now I get to live the good life here in\n"
	.string "the castle.$"
