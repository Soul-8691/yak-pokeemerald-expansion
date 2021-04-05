Lumbridge_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto MoveNPCsAfterEvents_Lumbridge
	return


CUPHOLDER_NPC::
	lock
	faceplayer
	msgbox CUPHOLDER_NPC_Text_0
	release
	end


Lumbridge_Phileas::
	lock
	faceplayer
	msgbox Lumbridge_Phileas_Text_0
	release
	end


Lumbridge_Saraowl::
	lock
	faceplayer
	msgbox Lumbridge_Saraowl_Text_0
	release
	end


Lumbridge_GENERALSTORE_CLERK::
	lock
	faceplayer
	msgbox Lumbridge_GENERALSTORE_CLERK_Text_0
	release
	end


Lumbridge_FAYETH::
	lock
	faceplayer
	msgbox Lumbridge_FAYETH_Text_0
	release
	end


Lumbridge_BOT::
	lock
	msgbox Lumbridge_BOT_Text_0
	release
	end


Lumbridge_DONIE::
	lock
	faceplayer
	msgbox Lumbridge_DONIE_Text_0
	release
	end


Lumbridge_HATIUS::
	lock
	faceplayer
	msgbox Lumbridge_HATIUS_Text_0
	release
	end


Lumbridge_LACHTOPHER::
	lock
	faceplayer
	msgbox Lumbridge_LACHTOPHER_Text_0
	release
	end


Lumbridge_DOOMSAYER::
	lock
	faceplayer
	msgbox Lumbridge_DOOMSAYER_Text_0
	release
	end


Lumbridge_IRONMAN_PAUL::
	lock
	faceplayer
	msgbox Lumbridge_IRONMAN_PAUL_Text_0
	release
	end


Lumbridge_BANKER::
	lock
	faceplayer
	msgbox Lumbridge_BANKER_Text_0
	release
	end


Lumbridge_IMP::
	lock
	faceplayer
	msgbox Lumbridge_IMP_Text_0
	release
	end


Lumbridge_EVENT_NPC1::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_EVENT_NPC1_2
	lock
	faceplayer
	msgbox Lumbridge_EVENT_NPC1_Text_1
	release
	end

Lumbridge_EVENT_NPC1_2:
	lock
	faceplayer
	msgbox Lumbridge_EVENT_NPC1_Text_0
	release
	end


Lumbridge_Guard_NORTH::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Guard_NORTH_2
	lock
	faceplayer
	msgbox Lumbridge_Guard_NORTH_Text_1
	applymovement 13, MOVEMENT_LUMBRIDGE_GUARD_NORTH
	waitmovement 0
	release
	end

Lumbridge_Guard_NORTH_2:
	lock
	faceplayer
	msgbox Lumbridge_Guard_NORTH_Text_0
	release
	end


MOVEMENT_LUMBRIDGE_GUARD_NORTH:
	face_right
	step_end

Lumbridge_Guard_EAST::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Guard_EAST_2
	lock
	faceplayer
	msgbox Lumbridge_Guard_EAST_Text_0
	release
	end

Lumbridge_Guard_EAST_2:
	lock
	faceplayer
	msgbox Lumbridge_Guard_NORTH_Text_0
	release
	end


Lumbridge_Guard_SOUTH::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Guard_SOUTH_2
	lock
	faceplayer
	msgbox Lumbridge_Guard_SOUTH_Text_0
	release
	end

Lumbridge_Guard_SOUTH_2:
	lock
	faceplayer
	msgbox Lumbridge_Guard_NORTH_Text_0
	release
	end


Lumbridge_Guard_NORTH_TRIGGER::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Guard_NORTH_TRIGGER_2
	release
	end

Lumbridge_Guard_NORTH_TRIGGER_2:
	lock
	PlaySE SE_PIN
	applymovement 13, LUMBRIDGE_GUARD_NORTH_TRIGGER_1
	waitmovement 0
	msgbox Lumbridge_Guard_NORTH_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_NORTH_TRIGGER
	applymovement 13, LUMBRIDGE_GUARD_NORTH_TRIGGER_2
	waitmovement 0
	release
	end


LUMBRIDGE_GUARD_NORTH_TRIGGER_1:
	emote_exclamation_mark
	face_player
	step_end

LUMBRIDGE_PLAYER_NORTH_TRIGGER:
	walk_down
	step_end

LUMBRIDGE_GUARD_NORTH_TRIGGER_2:
	face_down
	step_end

Lumbridge_Guard_EAST_TRIGGER::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Guard_EAST_TRIGGER_2
	release
	end

Lumbridge_Guard_EAST_TRIGGER_2:
	lock
	PlaySE SE_PIN
	applymovement 14, LUMBRIDGE_GUARD_EAST_TRIGGER_1
	waitmovement 0
	msgbox Lumbridge_Guard_NORTH_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_EAST_TRIGGER
	applymovement 14, LUMBRIDGE_GUARD_EAST_TRIGGER_2
	waitmovement 0
	release
	end


LUMBRIDGE_GUARD_EAST_TRIGGER_1:
	emote_exclamation_mark
	face_player
	step_end

LUMBRIDGE_PLAYER_EAST_TRIGGER:
	walk_left
	step_end

LUMBRIDGE_GUARD_EAST_TRIGGER_2:
	face_left
	step_end

Lumbridge_Guard_SOUTH_TRIGGER::
	goto_if_unset FLAG_COOKS_ASSIST_STARTED, Lumbridge_Guard_SOUTH_TRIGGER_2
	release
	end

Lumbridge_Guard_SOUTH_TRIGGER_2:
	lock
	PlaySE SE_PIN
	applymovement 12, LUMBRIDGE_GUARD_SOUTH_TRIGGER_1
	waitmovement 0
	msgbox Lumbridge_Guard_NORTH_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, LUMBRIDGE_PLAYER_SOUTH_TRIGGER
	applymovement 12, LUMBRIDGE_GUARD_SOUTH_TRIGGER_2
	waitmovement 0
	release
	end


LUMBRIDGE_GUARD_SOUTH_TRIGGER_1:
	emote_exclamation_mark
	face_player
	step_end

LUMBRIDGE_PLAYER_SOUTH_TRIGGER:
	walk_left
	step_end

LUMBRIDGE_GUARD_SOUTH_TRIGGER_2:
	face_left
	step_end

MoveNPCsAfterEvents_Lumbridge::
	goto_if_set FLAG_COOKS_ASSIST_STARTED, MoveNPCsAfterEvents_Lumbridge_1
	return

MoveNPCsAfterEvents_Lumbridge_1:
	setobjectxyperm 12, 37, 34
	setobjectmovementtype 12, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 13, 10, 5
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 14, 41, 20
	setobjectmovementtype 14, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 25, 35, 5
	setobjectmovementtype 25, MOVEMENT_TYPE_WANDER_AROUND
	return


Lumbridge_Bridge_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_Bridge_NPC1_Text_0
	release
	end


Lumbridge_House_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_House_NPC1_Text_0
	release
	end


Lumbridge_GeneralStore_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_GeneralStore_NPC1_Text_0
	release
	end


Lumbridge_GeneralStore_NPC2::
	lock
	faceplayer
	msgbox Lumbridge_GeneralStore_NPC2_Text_0
	release
	end


Lumbridge_House_BobsAxes::
	lock
	faceplayer
	msgbox Lumbridge_House_BobsAxes_Text_0
	release
	end


Lumbridge_House_BobsGirl::
	lock
	faceplayer
	msgbox Lumbridge_House_BobsGirl_Text_0
	release
	end


Lumbridge_House_Victoria::
	lock
	faceplayer
	msgbox Lumbridge_House_Victoria_Text_0
	release
	end


Lumbridge_House_NPC3::
	lock
	faceplayer
	msgbox Lumbridge_House_NPC3_Text_0
	release
	end


Lumbridge_House_NPC4::
	lock
	faceplayer
	msgbox Lumbridge_House_NPC4_Text_0
	release
	end


Lumbridge_GeneralStore_MOD_ASH::
	lock
	faceplayer
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_0
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_1
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_2
	msgbox Lumbridge_GeneralStore_MOD_ASH_Text_3
	release
	end


Lumbridge_GeneralStore_FANFIC::
	lock
	faceplayer
	msgbox Lumbridge_GeneralStore_FANFIC_Text_0
	release
	end


Lumbridge_House_Roddeck::
	goto_if_set FLAG_COOKS_ASSIST_STARTED, Lumbridge_House_Roddeck_2
	msgbox Lumbridge_House_Roddeck_Text_2
	release
	end

Lumbridge_House_Roddeck_2:
	lock
	faceplayer
	msgbox Lumbridge_House_Roddeck_Text_0
	msgbox Lumbridge_House_Roddeck_Text_1
	release
	end


CUPHOLDER_NPC_Text_0:
	.string "I am currently a Cupholder with no\n"
	.string "dialog.$"

Lumbridge_Phileas_Text_0:
	.string "My Saraowl keeps me company on my\n"
	.string "travels.$"

Lumbridge_Saraowl_Text_0:
	.string "Hoo Hoo!$"

Lumbridge_GENERALSTORE_CLERK_Text_0:
	.string "Hello there and welcome to the General\n"
	.string "Store.\p"
	.string "What is the General Store you ask?\p"
	.string "You did not ask?\p"
	.string "Well, I will tell you anyway because I\n"
	.string "like your face!\p"
	.string "The general store is where we sell items\n"
	.string "TO YOU for a small insignificant fee.\p"
	.string "You are about to go on an adventure?\p"
	.string "Well you better get to the General\n"
	.string "Store to buy Buckets and other items\l"
	.string "that will help you out!\p"
	.string "At the General Store!$"

Lumbridge_FAYETH_Text_0:
	.string "You should keep in mind you can only\n"
	.string "capture a monster when their health is\l"
	.string "above zero.$"

Lumbridge_BOT_Text_0:
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "...\p"
	.string "There is no response.$"

Lumbridge_DONIE_Text_0:
	.string "It is always good to talk to people,\n"
	.string "even if they do not give you anything.\p"
	.string "They might give you vital information\n"
	.string "for your adventure.$"

Lumbridge_HATIUS_Text_0:
	.string "There were some muggers in the alley\n"
	.string "eyeing off my 3rd armour.\p"
	.string "So I've had to change into a more casual\n"
	.string "look.\p"
	.string "But now the Goblins are eyeing me, I\n"
	.string "cannot win.$"

Lumbridge_LACHTOPHER_Text_0:
	.string "Free st00f pl0x!$"

Lumbridge_DOOMSAYER_Text_0:
	.string "DOOOOOOOM!\p"
	.string "I can sense it on you!\p"
	.string "You have a terrible doom in your future!$"

Lumbridge_IRONMAN_PAUL_Text_0:
	.string "My friend Adam is currently on Tutorial\n"
	.string "Island.\p"
	.string "I wonder when he'll come home.$"

Lumbridge_BANKER_Text_0:
	.string "A few years ago we were in a bidding war\n"
	.string "with a fisherman.\p"
	.string "He wanted to put a fishing shop here\n"
	.string "instead of a bank.\p"
	.string "We polled it to the community and we won\n"
	.string "by 75% of votes.$"

Lumbridge_IMP_Text_0:
	.string "You found an Imp!\p"
	.string "COR'BLIMEY MATE!\l"
	.string "It tried to steal your pouches.$"

Lumbridge_EVENT_NPC1_Text_0:
	.string "Woowee!\p"
	.string "So this is Lumbridge Castle.\p"
	.string "I'm too afraid to walk through the\n"
	.string "gates.$"

Lumbridge_EVENT_NPC1_Text_1:
	.string "I've come all the way from Catherby.\p"
	.string "I've always wanted to check out what\n"
	.string "sort of fish can be caught in the River\l"
	.string "Lum.$"

Lumbridge_Guard_NORTH_Text_0:
	.string "I'm sorry, but it's really dangerous out\n"
	.string "there for anyone who isn't an\l"
	.string "adventurer.$"

Lumbridge_Guard_NORTH_Text_1:
	.string "Please don't bother me while I'm on my\n"
	.string "break.$"

Lumbridge_Guard_EAST_Text_0:
	.string "Be careful, there are a lot of gobins\n"
	.string "across the bridge.$"

Lumbridge_Guard_SOUTH_Text_0:
	.string "It's quite dangerous even with a\n"
	.string "monster to protect you.\p"
	.string "So be careful.$"

Lumbridge_Bridge_NPC1_Text_0:
	.string "People just run trough this area.\p"
	.string "They should call it run by the bridge\n"
	.string "instead of Lumbridge.$"

Lumbridge_House_NPC1_Text_0:
	.string "The forge broke, so I've sent for a\n"
	.string "dwarf to come from Falador to fix it.$"

Lumbridge_GeneralStore_NPC1_Text_0:
	.string "It is better to have more pouches than\n"
	.string "less.\p"
	.string "If you are on a long trip you might need\n"
	.string "them.$"

Lumbridge_GeneralStore_NPC2_Text_0:
	.string "There are a lot of goblins around these\n"
	.string "parts, you might want to stock up on\l"
	.string "some antipoisons.\p"
	.string "This will prepare you for the worst.$"

Lumbridge_House_BobsAxes_Text_0:
	.string "Welcome to Bob's Brilliant Axes.\p"
	.string "My name is Bob, how may I be of\n"
	.string "assistance?$"

Lumbridge_House_BobsGirl_Text_0:
	.string "Hey, are you the contractor we hired to\n"
	.string "fix our bed?\p"
	.string "...\l"
	.string "No?\p"
	.string "Why are you in our house?$"

Lumbridge_House_Victoria_Text_0:
	.string "Please don't give my brother,\n"
	.string "Lachtopher any money.\p"
	.string "He is lazy and begs random strangers all\n"
	.string "the time.$"

Lumbridge_House_NPC3_Text_0:
	.string "I used a Bronze Pouch.\p"
	.string "Turns out they're really bad for\n"
	.string "catching monsters.$"

Lumbridge_House_NPC4_Text_0:
	.string "Some monster evolve differently\n"
	.string "depending on which evolution method.$"

Lumbridge_GeneralStore_MOD_ASH_Text_0:
	.string "WOAH!\p"
	.string "I didn't see you there, I almost spilt my\n"
	.string "drink.\p"
	.string "I'm just writing out some dialog for my\n"
	.string "new fanfic.\p"
	.string "I call it MY ARM'S BIG ADVENTURE!\p"
	.string "...\p"
	.string "What?\l"
	.string "It is a great name.\p"
	.string "Although I'm a bit stuck, I've made the\n"
	.string "adventuer in this story fight a giant\l"
	.string "bird but I'm not sure what the bird\l"
	.string "should look like.\p"
	.string "Do you have any monsters that might\n"
	.string "help inspire me?$"

Lumbridge_GeneralStore_MOD_ASH_Text_1:
	.string "No, I don't think that would work..$"

Lumbridge_GeneralStore_MOD_ASH_Text_2:
	.string "Yes!\p"
	.string "That's it!\p"
	.string "I'll have the player face off against a\n"
	.string "giant ROC!\p"
	.string "Thank you for giving me the inspiration\n"
	.string "I need to finish my story!\p"
	.string "Please take this!$"

Lumbridge_GeneralStore_MOD_ASH_Text_3:
	.string "Once again, thank you for helping me.\p"
	.string "What is that?\p"
	.string "You would like to read my fanfic?\p"
	.string "Sorry it's not finished yet, you'll have\n"
	.string "to wait.\p"
	.string "...\p"
	.string "How long?\p"
	.string "Soon TM.$"

Lumbridge_GeneralStore_FANFIC_Text_0:
	.string "It's a fanfic filled to the brim with\n"
	.string "weird innuendo's.$"

Lumbridge_House_Roddeck_Text_0:
	.string "Hello adventurer!\p"
	.string "Do you happen to have a Green\n"
	.string "Dragonling?\p"
	.string "Would you be willing to trade it for my\n"
	.string "Red Dragon?$"

Lumbridge_House_Roddeck_Text_1:
	.string "Please take care of Sottlepot, he is a\n"
	.string "good boy.$"

Lumbridge_House_Roddeck_Text_2:
	.string "Did you know the more Badges you have\n"
	.string "the easier it is to control Monsters\l"
	.string "obtained in a trade?\p"
	.string "I wish I knew that before Sottlepot\n"
	.string "went on a rampage killing Sir Vant and\l"
	.string "an adventurer..$"
