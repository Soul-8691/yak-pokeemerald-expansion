
Route1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_OnTransition
	.byte 0


Route1_OnTransition::
	call_if_set FLAG_UNUSED_0x020, Route1_TryShowEvilChicken1
	end

Route1_TryShowEvilChicken1::
	call_if_set FLAG_UNUSED_0x021, Route1_TryShowEvilChicken2
	end

Route1_TryShowEvilChicken2::
	call_if_set FLAG_UNUSED_0x022, Route1_ShowEvilChicken
	end

Route1_ShowChicken1::
	clearflag FLAG_UNUSED_0x020
	call_if_set FLAG_UNUSED_0x021, Route1_ShowChicken2
	end
	
Route1_ShowChicken2::
	clearflag FLAG_UNUSED_0x021
	call_if_set FLAG_UNUSED_0x022, Route1_ShowChicken3
	end
	
Route1_ShowChicken3::
	clearflag FLAG_UNUSED_0x022
	end
	
Route1_ShowEvilChicken::
	clearflag FLAG_UNUSED_0x023
	end



Route_1_Chicken_Battle_Script1::
	lock
	faceplayer
	msgbox Text_SimpleMsgScript, MSGBOX_DEFAULT
	
	setflag FLAG_UNUSED_0x023
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
	removeobject 11
	goto Route1_ShowChicken1
	end
	
	

	
	Text_SimpleMsgScript:
	.string "BWAAK!$"
	