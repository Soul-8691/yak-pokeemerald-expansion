Falador_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Falador_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Falador_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

Falador_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	.2byte 0


NPC_FALADOR_NPC_1::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_1_Text_0
	msgbox NPC_FALADOR_NPC_1_Text_1
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
	namebox NPC_FALADOR_NPC_1_Text_0
	msgbox NPC_FALADOR_NPC_2_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_3::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_1_Text_0
	msgbox NPC_FALADOR_NPC_3_Text_0
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_4::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_1_Text_0
	msgbox NPC_FALADOR_NPC_4_Text_0
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


NPC_FALADOR_CASSIE::
	lock
	faceplayer
	namebox NPC_FALADOR_CASSIE_Text_0
	msgbox NPC_FALADOR_CASSIE_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_9::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_9_Text_0
	msgbox NPC_FALADOR_NPC_9_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_FALADOR_NPC_10::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_9_Text_0
	msgbox NPC_FALADOR_NPC_10_Text_0
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


NPC_FALADOR_MOD_TIMBO::
	trainerbattle_single TRAINER_MUGGER_ROUTE6, NPC_FALADOR_MOD_TIMBO_Text_0, NPC_FALADOR_MOD_TIMBO_Text_1
	namebox NPC_FALADOR_MOD_TIMBO_Text_2
	msgbox NPC_FALADOR_MOD_TIMBO_Text_3
	giveitem ITEM_TINDERBOX, 1
	hidenamebox
	release
	end


NPC_FALADOR_NPC_8::
	lock
	faceplayer
	namebox NPC_FALADOR_NPC_9_Text_0
	msgbox NPC_FALADOR_NPC_9_Text_0
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


NPC_FALADOR_NPC_1_Text_0:
	.string "RSN$"

NPC_FALADOR_NPC_1_Text_1:
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
	.string "Gnome cocktails are very useful. They\n"
	.string "increase your monsters stats.$"

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

NPC_FALADOR_CASSIE_Text_0:
	.string "Cassie$"

NPC_FALADOR_CASSIE_Text_1:
	.string "Sorry, I just sold my quota of shields\n"
	.string "for today. You cannot let monsters\l"
	.string "equip shields anyway.$"

NPC_FALADOR_NPC_9_Text_0:
	.string "$"

NPC_FALADOR_NPC_9_Text_1:
	.string "Did you know part of the Dwarven Mines\n"
	.string "are right underneath us! It is scary\l"
	.string "just thinking about it.$"

NPC_FALADOR_NPC_10_Text_0:
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

NPC_FALADOR_MOD_TIMBO_Text_0:
	.string "Oh no, you caught me!!\p"
	.string "I was planning to chop down this tree\n"
	.string "but it appears I must chop you down\l"
	.string "first!$"

NPC_FALADOR_MOD_TIMBO_Text_1:
	.string "You saw nothing!$"

NPC_FALADOR_MOD_TIMBO_Text_2:
	.string "Mod Timbo$"

NPC_FALADOR_MOD_TIMBO_Text_3:
	.string "Despite winning the battle Timbo\n"
	.string "appears to have chopped down the tree\l"
	.string "anyway.\p"
	.string "There is something next to the stump.\n"
	.string "Looks like he dropped it in a rush.$"

NPC_FALADOR_NPC_7_Text_0:
	.string "Maybe they will one day rework farming.\n"
	.string "A man can dream.$"
