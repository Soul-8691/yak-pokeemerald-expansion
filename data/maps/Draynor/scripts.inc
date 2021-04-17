Draynor_MapScripts::
	.byte 0


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
	lock
	faceplayer
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard1_Text_1
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


Draynor_Morgan::
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_1
	hidenamebox
	release
	end


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
	.string "I've got my eye on you, don't cause any\n"
	.string "trouble or else.$"

Draynor_Guard2_Text_0:
	.string "Don't cause any trouble.$"

Draynor_Guard3_Text_0:
	.string "Ow..\p"
	.string "I fell out of this tree.$"

Draynor_Morgan_Text_0:
	.string "Morgan$"

Draynor_Morgan_Text_1:
	.string "There's a Vampyre in Draynor Mannor but\n"
	.string "no one believes me..$"
