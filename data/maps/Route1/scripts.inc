
Route1_MapScripts::
	.byte 0

Route_1_Chicken_Battle_Script1::
	lock
	faceplayer
	msgbox Text_SimpleMsgScript, MSGBOX_DEFAULT
	
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 7, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	removeobject 8
	
	goto Common_EventScript_RemoveStaticPokemon
	release
	end
	
Route_1_Chicken_Battle_Script2::
	lock
	faceplayer
	msgbox Text_SimpleMsgScript, MSGBOX_DEFAULT
	
	
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 7, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	removeobject 9
	
	goto Common_EventScript_RemoveStaticPokemon
	release
	end

Route_1_Chicken_Battle_Script3::
	lock
	faceplayer
	msgbox Text_SimpleMsgScript, MSGBOX_DEFAULT
	
	
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 7, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	removeobject 10
	
	goto Common_EventScript_RemoveStaticPokemon
	release
	end
	
Route_1_EvilChicken_Battle_Script::


	lock
	faceplayer
	msgbox Text_EvilChicken, MSGBOX_DEFAULT
	
	
	setwildbattle SPECIES_EVILCHICKEN, 7, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE

	removeobject 11
	setflag FLAG_EVILCHICKEN_DEFEATED
	end
	
Route_1_Wartfoot_Battle::
	trainerbattle_single TRAINER_WARTFOOT, Text_Wartfoot, Text_WartfootDefeated
	msgbox Text_WartfootDefeated, MSGBOX_DEFAULT
	release
	end

Route_1_Frogface_Battle::
	trainerbattle_single TRAINER_FROGFACE, Text_Frogface, Text_FrogfaceDefeated
	msgbox Text_FrogfaceDefeated, MSGBOX_DEFAULT
	release
	end
	
	
	Text_Wartfoot:
	.string "Brown armour best!$"
	
	Text_WartfootDefeated:
	.string "Um... my brown armor in the wash$"
	
	Text_Frogface:
	.string "I kill you human!$"
	
	Text_FrogfaceDefeated:
	.string "You ugly!$"

	
	Text_EvilChicken:
	.string "TIME TO DIE!$"
	
	Text_SimpleMsgScript:
	.string "BWAAK!$"
	