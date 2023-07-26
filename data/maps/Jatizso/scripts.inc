Jatizso_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Jatizso_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Jatizso_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	return


JATIZSO_INTERACT::
	msgbox JATIZSO_INTERACT_Text_0
	closemessage
	release
	end


JATIZSO_NPC_Lights::
	lock
	faceplayer
	namebox JATIZSO_NPC_Lights_Text_0
	checktrainerflag TRAINER_MITHRILMAN1
	compare VAR_RESULT, 0
	goto_if_eq JATIZSO_NPC_Lights_2
JATIZSO_NPC_Lights_1:
	msgbox JATIZSO_NPC_Lights_Text_3
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Lights_2:
	msgbox JATIZSO_NPC_Lights_Text_1
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_MITHRILMAN1, JATIZSO_NPC_Lights_Text_2
	goto JATIZSO_NPC_Lights_1


JATIZSO_NPC_JacksonOHare::
	lock
	faceplayer
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox JATIZSO_NPC_JacksonOHare_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_BonBun::
	lock
	namebox JATIZSO_NPC_BonBun_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_BonBun_Text_1
	waitmoncry
	hidenamebox
	namebox JATIZSO_NPC_JacksonOHare_Text_0
	msgbox JATIZSO_NPC_BonBun_Text_2
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Tazim::
	lock
	faceplayer
	namebox JATIZSO_NPC_Tazim_Text_0
	msgbox JATIZSO_NPC_Tazim_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Snail::
	lock
	faceplayer
	namebox JATIZSO_NPC_Snail_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_Snail_Text_1
	waitmoncry
	hidenamebox
	msgbox JATIZSO_NPC_Snail_Text_2
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Nicki::
	lock
	faceplayer
	namebox JATIZSO_NPC_Nicki_Text_0
	random 5
	switch VAR_RESULT
	case 0, JATIZSO_NPC_Nicki_3
	case 1, JATIZSO_NPC_Nicki_4
	case 2, JATIZSO_NPC_Nicki_5
	case 3, JATIZSO_NPC_Nicki_6
JATIZSO_NPC_Nicki_1:
	closemessage
	hidenamebox
	release
	end

JATIZSO_NPC_Nicki_3:
	msgbox JATIZSO_NPC_Nicki_Text_1
	goto JATIZSO_NPC_Nicki_1

JATIZSO_NPC_Nicki_4:
	msgbox JATIZSO_NPC_Nicki_Text_2
	goto JATIZSO_NPC_Nicki_1

JATIZSO_NPC_Nicki_5:
	msgbox JATIZSO_NPC_Nicki_Text_3
	goto JATIZSO_NPC_Nicki_1

JATIZSO_NPC_Nicki_6:
	msgbox JATIZSO_NPC_Nicki_Text_4
	faceplayer
	msgbox JATIZSO_NPC_Nicki_Text_5
	goto JATIZSO_NPC_Nicki_1


JATIZSO_NPC_AeternusLux::
	lock
	faceplayer
	namebox JATIZSO_NPC_AeternusLux_Text_0
	msgbox JATIZSO_NPC_AeternusLux_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Willoway::
	lock
	msgbox JATIZSO_NPC_Willoway_Text_0
	faceplayer
	namebox JATIZSO_NPC_Willoway_Text_1
	msgbox JATIZSO_NPC_Willoway_Text_2
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Casilliio::
	lock
	faceplayer
	namebox JATIZSO_NPC_Casilliio_Text_0
	msgbox JATIZSO_NPC_Casilliio_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Pop::
	lock
	namebox JATIZSO_NPC_Pop_Text_0
	playmoncry SPECIES_SHELLDER, 0
	msgbox JATIZSO_NPC_Pop_Text_1
	waitmoncry
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Mothy::
	lock
	faceplayer
	namebox JATIZSO_NPC_Mothy_Text_0
	msgbox JATIZSO_NPC_Mothy_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Cici::
	lock
	faceplayer
	namebox JATIZSO_NPC_Cici_Text_0
	msgbox JATIZSO_NPC_Cici_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_taffingspy::
	lock
	faceplayer
	namebox JATIZSO_NPC_taffingspy_Text_0
	msgbox JATIZSO_NPC_taffingspy_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Kitty::
	lock
	namebox JATIZSO_NPC_Kitty_Text_0
	playmoncry SPECIES_MEOWTH, 0
	msgbox JATIZSO_NPC_Kitty_Text_1
	waitmoncry
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Elej::
	lock
	faceplayer
	namebox JATIZSO_NPC_Elej_Text_0
	msgbox JATIZSO_NPC_Elej_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_ModDragon::
	lock
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_1
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_2
	msgbox JATIZSO_NPC_ModDragon_Text_3
	closemessage
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_4
	closemessage
	namebox JATIZSO_NPC_ModDragon_Text_2
	msgbox JATIZSO_NPC_ModDragon_Text_5
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_6
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_2
	msgbox JATIZSO_NPC_ModDragon_Text_7
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_8
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_2
	msgbox JATIZSO_NPC_ModDragon_Text_9
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_10
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_2
	msgbox JATIZSO_NPC_ModDragon_Text_11
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_12
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_0
	msgbox JATIZSO_NPC_ModDragon_Text_13
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_ModDragon_Text_2
	msgbox JATIZSO_NPC_ModDragon_Text_14
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Hakazin::
	lock
	namebox JATIZSO_NPC_Hakazin_Text_0
	msgbox JATIZSO_NPC_Hakazin_Text_1
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_Hakazin_Text_2
	msgbox JATIZSO_NPC_Hakazin_Text_3
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_Hakazin_Text_0
	msgbox JATIZSO_NPC_Hakazin_Text_4
	closemessage
	hidenamebox
	namebox JATIZSO_NPC_Hakazin_Text_2
	msgbox JATIZSO_NPC_Hakazin_Text_5
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Dewydd::
	lock
	faceplayer
	namebox JATIZSO_NPC_Dewydd_Text_0
	msgbox JATIZSO_NPC_Dewydd_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Charmchi::
	lock
	faceplayer
	namebox JATIZSO_NPC_Charmchi_Text_0
	msgbox JATIZSO_NPC_Charmchi_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Tifa::
	lock
	faceplayer
	namebox JATIZSO_NPC_Charmchi_Text_0
	msgbox JATIZSO_NPC_Tifa_Text_0
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Moggies::
	lock
	namebox JATIZSO_NPC_Moggies_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox JATIZSO_NPC_Moggies_Text_1
	waitmoncry
	closemessage
	hidenamebox
	release
	end


JATIZSO_NPC_Rallis::
	lock
	faceplayer
	namebox JATIZSO_NPC_Rallis_Text_0
	msgbox JATIZSO_NPC_Rallis_Text_1
	closemessage
	hidenamebox
	release
	end


JATIZSO_INTERACT_Text_0:
	.string "It is a Gnome Glider.$"

JATIZSO_NPC_Lights_Text_0:
	.string "Lights$"

JATIZSO_NPC_Lights_Text_1:
	.string "Psst…\p"
	.string "Phantom and I are about to pull off a\n"
	.string "once in a lifetime heist.\p"
	.string "And you are in our way!$"

JATIZSO_NPC_Lights_Text_2:
	.string "…$"

JATIZSO_NPC_Lights_Text_3:
	.string "By any chance could I persuade you into\n"
	.string "not telling the guards?$"

JATIZSO_NPC_JacksonOHare_Text_0:
	.string "Jackson$"

JATIZSO_NPC_JacksonOHare_Text_1:
	.string "I like it here on Jatizso, there are no\n"
	.string "rabbits in sight.\p"
	.string "I could never see myself staying with\n"
	.string "those rabbit infested Neitiznots!$"

JATIZSO_NPC_BonBun_Text_0:
	.string "Bon-Bun$"

JATIZSO_NPC_BonBun_Text_1:
	.string "BOOOOON!$"

JATIZSO_NPC_BonBun_Text_2:
	.string "I do wish you would stop calling me\n"
	.string "Jackie Bon-Bun…$"

JATIZSO_NPC_Tazim_Text_0:
	.string "Elizabeth$"

JATIZSO_NPC_Tazim_Text_1:
	.string "Stay back!\p"
	.string "I want no part of this, my adventuring\n"
	.string "days are over!\p"
	.string "Just leave me and Snaily alone!$"

JATIZSO_NPC_Snail_Text_0:
	.string "Snaily$"

JATIZSO_NPC_Snail_Text_1:
	.string "SLURRP!$"

JATIZSO_NPC_Snail_Text_2:
	.string "It seems to be very defensive of\n"
	.string "Elizabeth.$"

JATIZSO_NPC_Nicki_Text_0:
	.string "Morgan$"

JATIZSO_NPC_Nicki_Text_1:
	.string "STUPID NEITZNOTS!$"

JATIZSO_NPC_Nicki_Text_2:
	.string "DRAGONS R HOT!$"

JATIZSO_NPC_Nicki_Text_3:
	.string "COME OVER HERE!\p"
	.string "I WILL MESS YOU UP!$"

JATIZSO_NPC_Nicki_Text_4:
	.string "STUPID YAK LOVERS!$"

JATIZSO_NPC_Nicki_Text_5:
	.string "Actually, we all really like Yaks but\n"
	.string "don't tell them that.$"

JATIZSO_NPC_AeternusLux_Text_0:
	.string "Lux$"

JATIZSO_NPC_AeternusLux_Text_1:
	.string "I enjoy staring out into the sea.\p"
	.string "It reminds me of Boni.\p"
	.string "OH WHY!\p"
	.string "Why did the Art Fight have to be held on\n"
	.string "Jatizso and not the Arc!$"

JATIZSO_NPC_Willoway_Text_0:
	.string "…\p"
	.string "You know I saw you right?$"

JATIZSO_NPC_Willoway_Text_1:
	.string "Fay$"

JATIZSO_NPC_Willoway_Text_2:
	.string "…\p"
	.string "He won't leave me alone.$"

JATIZSO_NPC_Casilliio_Text_0:
	.string "Cass$"

JATIZSO_NPC_Casilliio_Text_1:
	.string "I heard the king was over taxing his\n"
	.string "people so I came to educate him.$"

JATIZSO_NPC_Pop_Text_0:
	.string "Pop$"

JATIZSO_NPC_Pop_Text_1:
	.string "PAWEEEW!$"

JATIZSO_NPC_Mothy_Text_0:
	.string "Evelynn$"

JATIZSO_NPC_Mothy_Text_1:
	.string "BUZZ OFF!\p"
	.string "I do not care if you are a Neitiznot or a\n"
	.string "Jatizso.\p"
	.string "You all disgust me the same.\p"
	.string "NOW SCRAM!$"

JATIZSO_NPC_Cici_Text_0:
	.string "Magnolia$"

JATIZSO_NPC_Cici_Text_1:
	.string "Morgan please stop yelling at the\n"
	.string "Neitiznots.\p"
	.string "It is not helping anyone.$"

JATIZSO_NPC_taffingspy_Text_0:
	.string "Florin$"

JATIZSO_NPC_taffingspy_Text_1:
	.string "I would challenge you to a battle but I\n"
	.string "do not want Kitty to be hurt anymore\l"
	.string "than she has.$"

JATIZSO_NPC_Kitty_Text_0:
	.string "Kitty$"

JATIZSO_NPC_Kitty_Text_1:
	.string "Meowar!$"

JATIZSO_NPC_Elej_Text_0:
	.string "Elej$"

JATIZSO_NPC_Elej_Text_1:
	.string "Do you think this picture best shows\n"
	.string "off Jatizso in all of its glory?\p"
	.string "I want to send it to the Neitiznots as a\n"
	.string "peace offering.$"

JATIZSO_NPC_ModDragon_Text_0:
	.string "Madame Dragon$"

JATIZSO_NPC_ModDragon_Text_1:
	.string "Wow, Eterna has really outdone herself\n"
	.string "with this piece.\p"
	.string "It is so tasteful!$"

JATIZSO_NPC_ModDragon_Text_2:
	.string "Bats$"

JATIZSO_NPC_ModDragon_Text_3:
	.string "I agree, it is just so…{PAUSE 15} TASTEFUL!$"

JATIZSO_NPC_ModDragon_Text_4:
	.string "We should send her some wine.$"

JATIZSO_NPC_ModDragon_Text_5:
	.string "That wine better be…{PAUSE 15} TASTEFUL!$"

JATIZSO_NPC_ModDragon_Text_6:
	.string "Of course, it will be as tasteful as this\n"
	.string "painting!$"

JATIZSO_NPC_ModDragon_Text_7:
	.string "…{PAUSE 15} TASTY!$"

JATIZSO_NPC_ModDragon_Text_8:
	.string "Bats do me a solid and fly over to\n"
	.string "Neitiznot to drop it off to her.$"

JATIZSO_NPC_ModDragon_Text_9:
	.string "…{PAUSE 15} I can not do that.\p"
	.string "The Art Fight rules prevents that.$"

JATIZSO_NPC_ModDragon_Text_10:
	.string "How can we give her this tasteful wine\n"
	.string "then?$"

JATIZSO_NPC_ModDragon_Text_11:
	.string "…{PAUSE 15} We would require one that is not a\n"
	.string "Neitiznot nor a Jatizso.$"

JATIZSO_NPC_ModDragon_Text_12:
	.string "Stranger, you seem to have overheard\n"
	.string "our entire conversation.\p"
	.string "Can you please deliver this to Eterna\n"
	.string "on Neitiznot for us?$"

JATIZSO_NPC_ModDragon_Text_13:
	.string "Thank you stranger.$"

JATIZSO_NPC_ModDragon_Text_14:
	.string "…{PAUSE 15} THANK YOU.$"

JATIZSO_NPC_Hakazin_Text_0:
	.string "Laith$"

JATIZSO_NPC_Hakazin_Text_1:
	.string "The king wants us to fortify the\n"
	.string "boarders from the Neitiznots.$"

JATIZSO_NPC_Hakazin_Text_2:
	.string "Alexandra$"

JATIZSO_NPC_Hakazin_Text_3:
	.string "What would that even entail?$"

JATIZSO_NPC_Hakazin_Text_4:
	.string "I am not sure, last time it was throwing\n"
	.string "more salt into the water.$"

JATIZSO_NPC_Hakazin_Text_5:
	.string "…\p"
	.string "I remember that.$"

JATIZSO_NPC_Dewydd_Text_0:
	.string "Dewydd$"

JATIZSO_NPC_Dewydd_Text_1:
	.string "Don't mind me.\p"
	.string "I am just trying to create a spell to\n"
	.string "turn all the Neitiznots into Yaks.$"

JATIZSO_NPC_Charmchi_Text_0:
	.string "Charm$"

JATIZSO_NPC_Charmchi_Text_1:
	.string "Can you go ask the king when we can go\n"
	.string "fight those Neitiznots?\p"
	.string "I am itchin for a fight!$"

JATIZSO_NPC_Tifa_Text_0:
	.string "Unless we are going into battle can you\n"
	.string "please leave me alone.\p"
	.string "Unless you would like to be friends?\p"
	.string "JK! HAHA! FORGET I SAID ANYTHING!$"

JATIZSO_NPC_Moggies_Text_0:
	.string "Moggies$"

JATIZSO_NPC_Moggies_Text_1:
	.string "BWAK!$"

JATIZSO_NPC_Rallis_Text_0:
	.string "Rallis$"

JATIZSO_NPC_Rallis_Text_1:
	.string "Hey did you pass Relleka on your way\n"
	.string "here?\p"
	.string "Do you think on your way back you could\n"
	.string "tell Olaf to come for a visit?$"
