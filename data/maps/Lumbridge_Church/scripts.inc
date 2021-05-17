Lumbridge_Church_MapScripts::
	.byte 0


Lumbridge_Church_Father_Aereck::
	lock
	faceplayer
	msgbox Lumbridge_Church_Father_Aereck_Text_0
	release
	end


Lumbridge_Church_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC1_Text_0
	release
	end


Lumbridge_Church_NPC2::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC2_Text_0
	release
	end


Lumbridge_Church_NPC3::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC3_Text_0
	release
	end


Pub_Mod_Dolan::
	lock
	faceplayer
	random 2
	switch VAR_RESULT
	case 0, Pub_Mod_Dolan_3
	case 1, Pub_Mod_Dolan_4
	release
	end

Pub_Mod_Dolan_3:
	namebox Pub_Mod_Dolan_Text_0
	msgbox Pub_Mod_Dolan_Text_1
	hidenamebox
	release
	end

Pub_Mod_Dolan_4:
	namebox Pub_Mod_Dolan_Text_0
	msgbox Pub_Mod_Dolan_Text_2
	hidenamebox
	release
	end


Lumbridge_Church_Father_Aereck_Text_0:
	.string "Monsters dont really die.\p"
	.string "They will not be needing graves.\p"
	.string "Just take them to the bank.$"

Lumbridge_Church_NPC1_Text_0:
	.string "Praise be Saradomin!$"

Lumbridge_Church_NPC2_Text_0:
	.string "Bow to the great one!$"

Lumbridge_Church_NPC3_Text_0:
	.string "I love Lumbridge.\p"
	.string "Nothing happens.\p"
	.string "Town is safe and Zamorak and Saradomin\n"
	.string "won't wreck it over some light balls.$"

Pub_Mod_Dolan_Text_0:
	.string "Mod Dolan$"

Pub_Mod_Dolan_Text_1:
	.string "..hic..\p"
	.string "...Have you seen my duck?\p"
	.string "..hic..\p"
	.string "..\p"
	.string "No, no my duck is yellow and he squeeks.\p"
	.string "..hic..$"

Pub_Mod_Dolan_Text_2:
	.string "..hic..\p"
	.string "...The Ruby Ring!\p"
	.string "..hic..\p"
	.string "..Rainbows you wear around your neck!\p"
	.string "..hic..\p"
	.string "Where is my duck?\p"
	.string "..hic..$"
