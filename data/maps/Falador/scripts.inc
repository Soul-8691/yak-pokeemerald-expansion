Falador_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Falador_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Falador_MapScripts_MAP_SCRIPT_ON_LOAD:
	call MODTIMBO_STATE
	return


MODTIMBO_STATE::
	switch VAR_POKESCAPE_MODTIMBO_STATE
	case 0, MODTIMBO_STATE_2
	case 1, MODTIMBO_STATE_3
	return

MODTIMBO_STATE_2:
	removeobject 5
	setflag FLAG_MOD_TIMBO
	return

MODTIMBO_STATE_3:
	setmetatile 44, 5, 593, 1
	setmetatile 44, 6, 15, 1
	special DrawWholeMapView
	removeobject 5
	setflag FLAG_MOD_TIMBO
	return


NPC_FALADOR_NPC_1::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_1::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_2::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_3::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_3::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_4::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_4::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_4_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_5::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_6::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_6_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GUARD_7::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GUARD_5_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WHITEKNIGHT_1::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_WHITEKNIGHT_1_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WHITEKNIGHT_2::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_WHITEKNIGHT_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WHITEKNIGHT_3::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_WHITEKNIGHT_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_11::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_11_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_12::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_12_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_MINER_1::
	faceplayer
	msgbox NPC_FALADOR_MINER_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_MINER_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_MINER_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_DWARF_1::
	faceplayer
	msgbox NPC_FALADOR_DWARF_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_DWARF_2::
	faceplayer
	msgbox NPC_FALADOR_DWARF_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_SMITHER::
	lock
	faceplayer
	msgbox NPC_FALADOR_SMITHER_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WOODCUTTER::
	lock
	faceplayer
	msgbox NPC_FALADOR_WOODCUTTER_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_ESTATE_AGENT::
	lock
	faceplayer
	namebox NPC_FALADOR_ESTATE_AGENT_Text_0
	msgbox NPC_FALADOR_ESTATE_AGENT_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_WORKMAN::
	lock
	faceplayer
	namebox NPC_FALADOR_WORKMAN_Text_0
	msgbox NPC_FALADOR_WORKMAN_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_APPRENTICE::
	lock
	faceplayer
	namebox NPC_FALADOR_APPRENTICE_Text_0
	msgbox NPC_FALADOR_APPRENTICE_Text_1
	msgbox NPC_FALADOR_APPRENTICE_Text_2
	msgbox NPC_FALADOR_APPRENTICE_Text_3
	msgbox NPC_FALADOR_APPRENTICE_Text_4
	msgbox NPC_FALADOR_APPRENTICE_Text_5
	msgbox NPC_FALADOR_APPRENTICE_Text_6
	msgbox NPC_FALADOR_APPRENTICE_Text_7
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HAIRDRESSER::
	lock
	faceplayer
	namebox NPC_FALADOR_HAIRDRESSER_Text_0
	msgbox NPC_FALADOR_HAIRDRESSER_Text_1
	msgbox NPC_FALADOR_HAIRDRESSER_Text_2
	msgbox NPC_FALADOR_HAIRDRESSER_Text_3
	msgbox NPC_FALADOR_HAIRDRESSER_Text_4
	msgbox NPC_FALADOR_HAIRDRESSER_Text_5
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HAIRDRESSER_NPC::
	lock
	faceplayer
	msgbox NPC_FALADOR_HAIRDRESSER_NPC_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HAIRDRESSER_SUOMI::
	lock
	faceplayer
	namebox NPC_FALADOR_HAIRDRESSER_SUOMI_Text_0
	msgbox NPC_FALADOR_HAIRDRESSER_SUOMI_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_CASSIE::
	lock
	faceplayer
	namebox NPC_FALADOR_CASSIE_Text_0
	msgbox NPC_FALADOR_CASSIE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_10::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_10_Text_0
	msgbox NPC_FALADOR_NPC_10_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_MYSTERIOUS_OLD_MAN::
	lock
	faceplayer
	namebox NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_0
	msgbox NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_1
	msgbox NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_2
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_SirTiffyCachien::
	lock
	faceplayer
	namebox NPC_FALADOR_SirTiffyCachien_Text_0
	msgbox NPC_FALADOR_SirTiffyCachien_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HESKEL::
	lock
	faceplayer
	namebox NPC_FALADOR_HESKEL_Text_0
	msgbox NPC_FALADOR_HESKEL_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_5::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_5_Text_0
	msgbox NPC_FALADOR_NPC_5_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_6::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_6_Text_0
	msgbox NPC_FALADOR_NPC_6_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_Wyson::
	lock
	faceplayer
	namebox NPC_FALADOR_Wyson_Text_0
	msgbox NPC_FALADOR_Wyson_Text_1
	waitmessage
	hidenamebox
	release
	end


Falador_TREE::
	switch VAR_POKESCAPE_MODTIMBO_STATE
	case 0, Falador_TREE_2
	case 1, Falador_TREE_3
	return

Falador_TREE_2:
	lock
	clearflag FLAG_MOD_TIMBO
	addobject 5
	playse SE_LEDGE
	applymovement 5, Movement_FaladorTree_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FaladorTree_2
	waitmovement 0
	namebox Falador_TREE_Text_0
	msgbox Falador_TREE_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_FALADOR_MODTIMBO, Falador_TREE_Text_2
	fadescreen FADE_TO_BLACK
	setmetatile 44, 5, 593, 1
	setmetatile 44, 6, 15, 1
	special DrawWholeMapView
	removeobject 5
	setflag FLAG_MOD_TIMBO
	fadescreen FADE_FROM_BLACK
	msgbox Falador_TREE_Text_3
	giveitem ITEM_TINDERBOX, 1
	setvar VAR_POKESCAPE_MODTIMBO_STATE, 1
	release
	end

Falador_TREE_3:
	msgbox Falador_TREE_Text_4
	closemessage
	end


Movement_FaladorTree_1:
	jump_special_down
	step_end

Movement_FaladorTree_2:
	lock_facing_direction
	walk_fast_down
	unlock_facing_direction
	face_up
	step_end

NPC_FALADOR_NPC_8::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_10_Text_0
	msgbox NPC_FALADOR_NPC_10_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_7::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_5_Text_0
	msgbox NPC_FALADOR_NPC_7_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GENERALSTORE_NPC::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_GENERALSTORE_NPC_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_NPC_1::
	lock
	faceplayer
	namebox NPC_FALADOR_GUARD_1_Text_0
	msgbox NPC_FALADOR_BANK_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GEMSTORE_NPC_1::
	lock
	faceplayer
	msgbox NPC_FALADOR_GEMSTORE_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_GEMSTORE_OWNER::
	lock
	faceplayer
	msgbox NPC_FALADOR_GEMSTORE_OWNER_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_NPC_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_BANK_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_BANK_NPC_3::
	lock
	faceplayer
	namebox NPC_FALADOR_WHITEKNIGHT_1_Text_0
	msgbox NPC_FALADOR_BANK_NPC_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HOUSE_NPC_1::
	lock
	faceplayer
	msgbox NPC_FALADOR_HOUSE_NPC_1_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_HOUSE_NPC_2::
	lock
	faceplayer
	msgbox NPC_FALADOR_HOUSE_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_9::
	lock
	faceplayer
	msgbox NPC_FALADOR_NPC_9_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_1_Text_0:
	.string "Have you heard about the Mining &\n"
	.string "Smithing rework?$"

NPC_FALADOR_GUARD_1_Text_0:
	.string "Guard$"

NPC_FALADOR_GUARD_1_Text_1:
	.string "I am so thankful I was assigned to\n"
	.string "guard the south gate!\p"
	.string "I heard that the north gate guys don't\n"
	.string "even last half a day.$"

NPC_FALADOR_GUARD_2_Text_0:
	.string "Stop right there you criminal scum.\p"
	.string "...\p"
	.string "I am very sorry about that.\p"
	.string "I really needed to catch a criminal for\n"
	.string "a promotion.\p"
	.string "If you see a criminal please send them\n"
	.string "my way.$"

NPC_FALADOR_GUARD_3_Text_0:
	.string "Stand and deliver!\p"
	.string "Wait, that is the wrong line.\p"
	.string "Sorry, I am new to this job.$"

NPC_FALADOR_NPC_2_Text_0:
	.string "You should always stock up on items to\n"
	.string "heal your party.\p"
	.string "Cakes and beer are a safe bet.$"

NPC_FALADOR_NPC_3_Text_0:
	.string "I used an air rune on my frog, and it\n"
	.string "evolved differently from what I\l"
	.string "thought it would.\p"
	.string "Maybe there are more of these types of\n"
	.string "evolutions out there?$"

NPC_FALADOR_NPC_4_Text_0:
	.string "Gnome cocktails are very useful.\p"
	.string "They increase your monsters stats.$"

NPC_FALADOR_GUARD_4_Text_0:
	.string "Falador is a nice city, the white\n"
	.string "knights keeps us safe.\p"
	.string "Stay vigilant adventurer.$"

NPC_FALADOR_GUARD_5_Text_0:
	.string "CUPHOLDER$"

NPC_FALADOR_GUARD_6_Text_0:
	.string "This statue shows our god of choice.\p"
	.string "Saradomin the god of wisdom.\p"
	.string "Please do show your respect.$"

NPC_FALADOR_WHITEKNIGHT_1_Text_0:
	.string "White Knight$"

NPC_FALADOR_WHITEKNIGHT_1_Text_1:
	.string "South from here is the Falador castle\n"
	.string "home to the White Knights.\p"
	.string "Are you interested in signing up?$"

NPC_FALADOR_WHITEKNIGHT_2_Text_0:
	.string "Past this bridge is Falador Castle!\p"
	.string "Which is also the gym location for the\n"
	.string "MvM Championships.$"

NPC_FALADOR_WHITEKNIGHT_3_Text_0:
	.string "Sir Amik Varze is our towns gym leader.$"

NPC_FALADOR_NPC_11_Text_0:
	.string "After I finish work today I might walk\n"
	.string "around Falador Park.$"

NPC_FALADOR_NPC_12_Text_0:
	.string "Oh don't mind me.\p"
	.string "I'm just training my Firemaking skill.$"

NPC_FALADOR_MINER_1_Text_0:
	.string "I am mining coal to get enough money\n"
	.string "for a better pickaxe.\p"
	.string "Then I can mine coal faster to get an\n"
	.string "even better pickaxe.$"

NPC_FALADOR_MINER_2_Text_0:
	.string "This is so much work, but someone has to\n"
	.string "do it otherwise we will never see it\l"
	.string "finished.$"

NPC_FALADOR_DWARF_1_Text_0:
	.string "If you are wanting to access the\n"
	.string "Dwarven Mines.\p"
	.string "You can do so by entering the building\n"
	.string "next door to the Party Room, north of\l"
	.string "here.$"

NPC_FALADOR_DWARF_2_Text_0:
	.string "Sorry to inconvenience you but the\n"
	.string "entrance to the underground mines is\l"
	.string "currently unavailable due to the\l"
	.string "rework.$"

NPC_FALADOR_SMITHER_Text_0:
	.string "We are currently in the middle of\n"
	.string "expanding the Mining Guild.\p"
	.string "We are also going to be clearing this\n"
	.string "plot of land to put a Smithing Guild\l"
	.string "here.$"

NPC_FALADOR_WOODCUTTER_Text_0:
	.string "Chop, chop, chop!\p"
	.string "Goodbye trees, hello Smithing Guild!$"

NPC_FALADOR_ESTATE_AGENT_Text_0:
	.string "Estate Agent$"

NPC_FALADOR_ESTATE_AGENT_Text_1:
	.string "Hello, it would appear that you are\n"
	.string "looking for a house? I am most sorry\l"
	.string "but there is no menagerie big enough to\l"
	.string "fit your needs. I will get in touch with\l"
	.string "you if the situation changes.$"

NPC_FALADOR_WORKMAN_Text_0:
	.string "Workman$"

NPC_FALADOR_WORKMAN_Text_1:
	.string "I wish my useless apprentice would\n"
	.string "hurry up and finish our order for\l"
	.string "Varrock.$"

NPC_FALADOR_APPRENTICE_Text_0:
	.string "Apprentice workman$"

NPC_FALADOR_APPRENTICE_Text_1:
	.string "Ayyee!\p"
	.string "After I finished making this chair it\n"
	.string "came to life!\p"
	.string "I do not suppose you want to buy it\n"
	.string "from me, do you? I need to cover the\l"
	.string "cost of materials and I do not think a\l"
	.string "living chair will make our client happy…$"

NPC_FALADOR_APPRENTICE_Text_2:
	.string "Urk! No problem, who would want a living\n"
	.string "chair anyway.$"

NPC_FALADOR_APPRENTICE_Text_3:
	.string "Thank you so much! Let me just\n"
	.string "calculate the total… … … Alright! So\l"
	.string "that comes to 5000gp. Is this okay\l"
	.string "with you?$"

NPC_FALADOR_APPRENTICE_Text_4:
	.string "Sorry, but I cannot go any lower than\n"
	.string "that.$"

NPC_FALADOR_APPRENTICE_Text_5:
	.string "Thank you! You are a lifesaver!$"

NPC_FALADOR_APPRENTICE_Text_6:
	.string "….Uh.. You do not have enough money.$"

NPC_FALADOR_APPRENTICE_Text_7:
	.string "HOW!? I accidentally made another\n"
	.string "living chair!$"

NPC_FALADOR_HAIRDRESSER_Text_0:
	.string "Hairdresser$"

NPC_FALADOR_HAIRDRESSER_Text_1:
	.string "You want a haircut? Well, first you will\n"
	.string "have to battle me.$"

NPC_FALADOR_HAIRDRESSER_Text_2:
	.string "Oh no, my chinchompas!$"

NPC_FALADOR_HAIRDRESSER_Text_3:
	.string "Seems I get to cut it out.$"

NPC_FALADOR_HAIRDRESSER_Text_4:
	.string "Why would you faint all my chinchompas.\n"
	.string "Now who will run the wheel to make the\l"
	.string "sign outside spin.\p"
	.string "My business is ruined!$"

NPC_FALADOR_HAIRDRESSER_Text_5:
	.string "Take this, and never return. Please. For\n"
	.string "the good of my business.$"

NPC_FALADOR_HAIRDRESSER_NPC_Text_0:
	.string "Today im really feeling the dragoon\n"
	.string "hairstyle.\p"
	.string "It will fix my love life for sure.$"

NPC_FALADOR_HAIRDRESSER_SUOMI_Text_0:
	.string "SUOMI$"

NPC_FALADOR_HAIRDRESSER_SUOMI_Text_1:
	.string "What, do you think this is my natural\n"
	.string "hair colour?\p"
	.string "I have to dye my hair every few weeks\n"
	.string "to keep it this purple.$"

NPC_FALADOR_CASSIE_Text_0:
	.string "Cassie$"

NPC_FALADOR_CASSIE_Text_1:
	.string "Sorry, I just sold my quota of shields\n"
	.string "for today. You cannot let monsters\l"
	.string "equip shields anyway.$"

NPC_FALADOR_NPC_10_Text_0:
	.string "$"

NPC_FALADOR_NPC_10_Text_1:
	.string "Is it still there?! I do not want to\n"
	.string "leave my house unless it is gone! What?\l"
	.string "It is just a spiderling? I do not\l"
	.string "believe you, it is a monster! Stop\l"
	.string "trying to trick me!$"

NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_0:
	.string "Mysterious Old Man$"

NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_1:
	.string "Oh hello again {PLAYER}. I am here to\n"
	.string "visit Falador in attempt to open these\l"
	.string "strange cubes. Here you have one$"

NPC_FALADOR_MYSTERIOUS_OLD_MAN_Text_2:
	.string "If you figure out how to open it please\n"
	.string "get in contact with me again.$"

NPC_FALADOR_SirTiffyCachien_Text_0:
	.string "Sir Tiffy Cachien$"

NPC_FALADOR_SirTiffyCachien_Text_1:
	.string "I enjoy spending my time here at the\n"
	.string "park sitting on this bench.$"

NPC_FALADOR_HESKEL_Text_0:
	.string "Heskel$"

NPC_FALADOR_HESKEL_Text_1:
	.string "I wish someone would take over for me,\n"
	.string "it has been days since I had my last\l"
	.string "break.$"

NPC_FALADOR_NPC_5_Text_0:
	.string "Gardener$"

NPC_FALADOR_NPC_5_Text_1:
	.string "It is really hard tending to these\n"
	.string "gardens. My farming level is way too\l"
	.string "low.$"

NPC_FALADOR_NPC_6_Text_0:
	.string "Garden Supplier$"

NPC_FALADOR_NPC_6_Text_1:
	.string "If you are here to buy bagged trees to\n"
	.string "sell them for a higher price, I regret\l"
	.string "to inform you that I have increased\l"
	.string "the prices.$"

NPC_FALADOR_Wyson_Text_0:
	.string "Wyson$"

NPC_FALADOR_Wyson_Text_1:
	.string "I heard some rumours about a giant mole\n"
	.string "living somewhere in this area, and that\l"
	.string "interacting with an object would get\l"
	.string "you to it. I am too scared to find out\l"
	.string "how though.$"

Falador_TREE_Text_0:
	.string "Mod Timbo$"

Falador_TREE_Text_1:
	.string "Oh no, you caught me!!\p"
	.string "I was planning to chop down this tree\n"
	.string "but it appears I must chop you down\l"
	.string "first!$"

Falador_TREE_Text_2:
	.string "You saw nothing!$"

Falador_TREE_Text_3:
	.string "Despite winning the battle Timbo\n"
	.string "appears to have chopped down the tree\l"
	.string "anyway.\p"
	.string "There is something next to the stump.\p"
	.string "Looks like he dropped it in a rush.$"

Falador_TREE_Text_4:
	.string "TIIIIMBOOOOOOOOO!$"

NPC_FALADOR_NPC_7_Text_0:
	.string "Maybe they will one day rework farming.\n"
	.string "A man can dream.$"

NPC_FALADOR_GENERALSTORE_NPC_Text_0:
	.string "Even if your monsters get stronger, it\n"
	.string "never hurts to have some healing items\l"
	.string "ready for when you are in a pinch.$"

NPC_FALADOR_BANK_NPC_1_Text_0:
	.string "You can only carry six monsters.\p"
	.string "Make sure to cover all your bases with\n"
	.string "those six.$"

NPC_FALADOR_GEMSTORE_NPC_1_Text_0:
	.string "They say the gems from this store\n"
	.string "comes all the way from Shilo Village.\p"
	.string "Thats all the way over in Karamja!$"

NPC_FALADOR_GEMSTORE_OWNER_Text_0:
	.string "Welcome!\p"
	.string "I am very sorry but the shipment of\n"
	.string "gems is still on hold and there is\l"
	.string "nothing else I can sell you.\p"
	.string "Please come again another time.$"

NPC_FALADOR_BANK_NPC_2_Text_0:
	.string "I got wiped out by Sir Amik.\p"
	.string "Guess my monsters just werent strong\n"
	.string "enough.$"

NPC_FALADOR_BANK_NPC_3_Text_0:
	.string "Back in the day a lot of people crowded\n"
	.string "up here and in the park yelling\l"
	.string "colourful words and screaming at each\l"
	.string "other to get attention.\p"
	.string "I really miss it.$"

NPC_FALADOR_HOUSE_NPC_1_Text_0:
	.string "Dinner will be ready soon, will you be\n"
	.string "joining us?$"

NPC_FALADOR_HOUSE_NPC_2_Text_0:
	.string "I don't know you but I am telling you,\n"
	.string "run!\p"
	.string "It is too late for me but you can still\n"
	.string "run before the dinner is ready!\p"
	.string "Help…$"

NPC_FALADOR_NPC_9_Text_0:
	.string "Did you know part of the Dwarven Mines\n"
	.string "are right underneath us!\p"
	.string "It is scary just thinking about it.$"
