Tutorial_Island_Shop_MapScripts::
	.byte 0


Tutorial_Island_Shop_EventScript_Clerk::
	lock
	faceplayer
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_0
	waitmessage
	pokemart Tutorial_Island_Shop_Pokemart
	msgbox Tutorial_Island_Shop_EventScript_Clerk_Text_1
	release
	return


	Tutorial_Island_Shop_Pokemart:
	.2byte ITEM_BRONZE_POUCH
	.2byte ITEM_IRON_POUCH
	.2byte ITEM_STEEL_POUCH
	.2byte ITEM_NONE
	release
	end

Tutorial_Island_Shop_EventScript_Clerk_Text_0:
	.string "Can I help you at all?$"

Tutorial_Island_Shop_EventScript_Clerk_Text_1:
	.string "Smell you later!$"
