Varrock_Pub_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Varrock_Pub_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Varrock_Pub_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


NPC_VarrockPub_BARBARIAN::
	lock
	faceplayer
	namebox NPC_VarrockPub_BARBARIAN_Text_0
	msgbox NPC_VarrockPub_BARBARIAN_Text_1
	hidenamebox
	release
	end


NPC_VarrockPub_NPC1::
	lock
	faceplayer
	msgbox NPC_VarrockPub_NPC1_Text_0
	hidenamebox
	release
	end


NPC_VarrockPub_NPC2::
	lock
	faceplayer
	msgbox NPC_VarrockPub_NPC2_Text_0
	hidenamebox
	release
	end


NPC_VarrockPub_NPC3::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC3_Text_0
	msgbox NPC_VarrockPub_NPC3_Text_1
	hidenamebox
	release
	end


NPC_VarrockPub_NPC4::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC3_Text_0
	random 7
	switch VAR_RESULT
	case 0, NPC_VarrockPub_NPC4_3
	case 1, NPC_VarrockPub_NPC4_4
	case 2, NPC_VarrockPub_NPC4_5
	case 3, NPC_VarrockPub_NPC4_6
	case 4, NPC_VarrockPub_NPC4_7
	case 5, NPC_VarrockPub_NPC4_8
	case 6, NPC_VarrockPub_NPC4_9
NPC_VarrockPub_NPC4_1:
	hidenamebox
	release
	end

NPC_VarrockPub_NPC4_3:
	msgbox NPC_VarrockPub_NPC4_Text_0
	goto NPC_VarrockPub_NPC4_1

NPC_VarrockPub_NPC4_4:
	msgbox NPC_VarrockPub_NPC4_Text_1
	goto NPC_VarrockPub_NPC4_1

NPC_VarrockPub_NPC4_5:
	msgbox NPC_VarrockPub_NPC4_Text_2
	goto NPC_VarrockPub_NPC4_1

NPC_VarrockPub_NPC4_6:
	msgbox NPC_VarrockPub_NPC4_Text_3
	goto NPC_VarrockPub_NPC4_1

NPC_VarrockPub_NPC4_7:
	msgbox NPC_VarrockPub_NPC4_Text_4
	goto NPC_VarrockPub_NPC4_1

NPC_VarrockPub_NPC4_8:
	msgbox NPC_VarrockPub_NPC4_Text_5
	goto NPC_VarrockPub_NPC4_1

NPC_VarrockPub_NPC4_9:
	msgbox NPC_VarrockPub_NPC4_Text_6
	goto NPC_VarrockPub_NPC4_1


NPC_VarrockPub_NPC5::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC3_Text_0
	msgbox NPC_VarrockPub_NPC5_Text_0
	hidenamebox
	release
	end


NPC_VarrockPub_NPC6::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC6_Text_0
	msgbox NPC_VarrockPub_NPC6_Text_1
	hidenamebox
	release
	end


NPC_VarrockPub_NPC7::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC7_Text_0
	msgbox NPC_VarrockPub_NPC7_Text_1
	hidenamebox
	release
	end


NPC_VarrockPub_NPC8::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC8_Text_0
	msgbox NPC_VarrockPub_NPC8_Text_1
	hidenamebox
	release
	end


NPC_VarrockPub_NPC9::
	lock
	faceplayer
	namebox NPC_VarrockPub_NPC8_Text_0
	msgbox NPC_VarrockPub_NPC8_Text_1
	hidenamebox
	release
	end


NPC_VarrockPub_Trainer_1::
	lock
	faceplayer
	namebox NPC_VarrockPub_Trainer_1_Text_0
	msgbox NPC_VarrockPub_Trainer_1_Text_1
	hidenamebox
	goto_if_unset FLAG_UNUSED_0x93B, NPC_VarrockPub_Trainer_1_2
NPC_VarrockPub_Trainer_1_1:
	hidenamebox
	release
	end

NPC_VarrockPub_Trainer_1_2:
	msgbox NPC_VarrockPub_Trainer_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_VarrockPub_Trainer_1_4
	goto NPC_VarrockPub_Trainer_1_1

NPC_VarrockPub_Trainer_1_4:
	hidenamebox
	setflag FLAG_UNUSED_0x93B
	trainerbattle_no_intro TRAINER_PUB_SARIM_1, NPC_VarrockPub_NPC8_Text_1
	namebox NPC_VarrockPub_Trainer_1_Text_0
	msgbox NPC_VarrockPub_Trainer_1_Text_3
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_VarrockPub_Trainer_1_1


NPC_VarrockPub_Trainer_2::
	lock
	faceplayer
	namebox NPC_VarrockPub_Trainer_2_Text_0
	msgbox NPC_VarrockPub_Trainer_2_Text_1
	hidenamebox
	goto_if_unset FLAG_UNUSED_0x93C, NPC_VarrockPub_Trainer_2_2
NPC_VarrockPub_Trainer_2_1:
	hidenamebox
	release
	end

NPC_VarrockPub_Trainer_2_2:
	msgbox NPC_VarrockPub_Trainer_1_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_VarrockPub_Trainer_2_4
	goto NPC_VarrockPub_Trainer_2_1

NPC_VarrockPub_Trainer_2_4:
	hidenamebox
	setflag FLAG_UNUSED_0x93C
	trainerbattle_no_intro TRAINER_PUB_SARIM_1, NPC_VarrockPub_NPC8_Text_1
	namebox NPC_VarrockPub_Trainer_2_Text_0
	msgbox NPC_VarrockPub_Trainer_2_Text_2
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_VarrockPub_Trainer_2_1


GoldenGnome::
	lock
	faceplayer
	msgbox GoldenGnome_Text_0
	call GiveMon_GOLDENGNOME
	msgbox GoldenGnome_Text_1
	release
	end


GiveMon_GOLDENGNOME::
	setvar VAR_TEMP_1, SPECIES_GNOMEY
	givemon SPECIES_GNOMEY, 5, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq GiveMon_SendParty_GOLDENGNOME
	compare VAR_RESULT, 1
	goto_if_eq GiveMon_SendPC_GOLDENGNOME
	goto Common_EventScript_NoMoreRoomForPokemon
	end


GiveMon_SendParty_GOLDENGNOME::
	call GiveMon_ReceivedFanfare_GOLDENGNOME
	msgbox GiveMon_SendParty_GOLDENGNOME_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_Received_GOLDENGNOME
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto GiveMon_Received_GOLDENGNOME
	end


GiveMon_SendPC_GOLDENGNOME::
	call GiveMon_ReceivedFanfare_GOLDENGNOME
	msgbox GiveMon_SendParty_GOLDENGNOME_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GiveMon_TransferredToPC_GOLDENGNOME
	call Common_EventScript_NameReceivedBoxMon
	goto GiveMon_TransferredToPC_GOLDENGNOME
	end


GiveMon_TransferredToPC_GOLDENGNOME::
	call Common_EventScript_TransferredToPC
	goto GiveMon_Received_GOLDENGNOME
	end


GiveMon_ReceivedFanfare_GOLDENGNOME::
	bufferspeciesname 1, SPECIES_GNOMEY
	playfanfare MUS_OBTAIN_ITEM
	msgbox GiveMon_ReceivedFanfare_GOLDENGNOME_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_GNOMEY
	return


GiveMon_Received_GOLDENGNOME::
	releaseall
	return


NPC_VarrockPub_BARBARIAN_Text_0:
	.string "Barbarian$"

NPC_VarrockPub_BARBARIAN_Text_1:
	.string "YAARRG, Do yer want a Pub Crawl battle?!$"

NPC_VarrockPub_NPC1_Text_0:
	.string "Did you know that many players have\n"
	.string "named themselves after Pokemons?\p"
	.string "There are famous players such as Evil\n"
	.string "Lucario, CUPHOLDER and CUPHOLDER.\p"
	.string "Many people agree that a Pokemon RSN is\n"
	.string "awesome, if you wanna see some, seek\l"
	.string "out u/Zarmos on Reddit, who took\l"
	.string "screenshots of over 380 Pokemon RSNs!\p"
	.string "Though it did take him almost 2 years to\n"
	.string "capture them all!$"

NPC_VarrockPub_NPC2_Text_0:
	.string "Sometimes people from the Runescape\n"
	.string "Art Community come to party here.\p"
	.string "They are amazing, fun, talented and\n"
	.string "they are simply awesome!\p"
	.string "I am not a artist but I love to see their\n"
	.string "masterpieces.$"

NPC_VarrockPub_NPC3_Text_0:
	.string "Guard$"

NPC_VarrockPub_NPC3_Text_1:
	.string "Did you know some Monsters can Mega\n"
	.string "Evolve when given specific items to\l"
	.string "hold?\p"
	.string "No for real!\p"
	.string "They change their forms mid battle and\n"
	.string "then return to what they were\l"
	.string "previously.$"

NPC_VarrockPub_NPC4_Text_0:
	.string "I heard that Wall Beasts can Mega\n"
	.string "Evolve with an item that can be found\l"
	.string "deep within the Lumbridge Caves.$"

NPC_VarrockPub_NPC4_Text_1:
	.string "I heard that Dagannoths can Mega\n"
	.string "Evolve with an items that can be found\l"
	.string "deep within the Waterbirth Island.$"

NPC_VarrockPub_NPC4_Text_2:
	.string "I heard that a Queen Kalphite can Mega\n"
	.string "Evolve with an item that can be found\l"
	.string "within the Desert.$"

NPC_VarrockPub_NPC4_Text_3:
	.string "I heard that a big Lava monster can\n"
	.string "Mega Evolve with an item that can be\l"
	.string "found within the Tzhaar Fight Caves.$"

NPC_VarrockPub_NPC4_Text_4:
	.string "I heard that a creature of pure chaos\n"
	.string "can Mega Evolve with an item that can\l"
	.string "be found deep within the Wilderness.$"

NPC_VarrockPub_NPC4_Text_5:
	.string "I heard that there was some guy who has\n"
	.string "a ton of those fragments but is only\l"
	.string "willing to trade them for some sort of\l"
	.string "token.$"

NPC_VarrockPub_NPC4_Text_6:
	.string "If the fragments are so powerful in\n"
	.string "causing a monster to mega evolve, I\l"
	.string "would hate to see what the object the\l"
	.string "fragments were originally would do to\l"
	.string "the monsters.$"

NPC_VarrockPub_NPC5_Text_0:
	.string "Appearntly some fragments of a stone\n"
	.string "are the key to Mega Evolution.\p"
	.string "But what stone can do that?$"

NPC_VarrockPub_NPC6_Text_0:
	.string "Dr. Harlow$"

NPC_VarrockPub_NPC6_Text_1:
	.string "HIC.$"

NPC_VarrockPub_NPC7_Text_0:
	.string "Bartender$"

NPC_VarrockPub_NPC7_Text_1:
	.string "Can I get you something to drink?$"

NPC_VarrockPub_NPC8_Text_0:
	.string "Man$"

NPC_VarrockPub_NPC8_Text_1:
	.string "…$"

NPC_VarrockPub_Trainer_1_Text_0:
	.string "Jonny$"

NPC_VarrockPub_Trainer_1_Text_1:
	.string "Did the gang send you?$"

NPC_VarrockPub_Trainer_1_Text_2:
	.string "Do you wish to challenge them to a\n"
	.string "battle?$"

NPC_VarrockPub_Trainer_1_Text_3:
	.string "Here have this.$"

NPC_VarrockPub_Trainer_2_Text_0:
	.string "Cook$"

NPC_VarrockPub_Trainer_2_Text_1:
	.string "It is exhausting work cooking food for\n"
	.string "so many people.\p"
	.string "I will be on my five minute break soon,\n"
	.string "so I have that to look forward to.$"

NPC_VarrockPub_Trainer_2_Text_2:
	.string "This is on me.$"

GoldenGnome_Text_0:
	.string "Somebody dropped this trash, it's a\n"
	.string "little broken, but you can have it.$"

GoldenGnome_Text_1:
	.string "Hopefully this will be a case of one\n"
	.string "mans trash is another mans treasure.\p"
	.string "But I doubt it.$"

GiveMon_SendParty_GOLDENGNOME_Text_0:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

GiveMon_ReceivedFanfare_GOLDENGNOME_Text_0:
	.string "{PLAYER} obtained a {STR_VAR_2}.$"
