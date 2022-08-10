Lumbridge_General_Store_MapScripts::
	.byte 0


Generalstore_Lumbridge_Clerk::
	lock
	faceplayer
	msgbox Generalstore_Lumbridge_Clerk_Text_0
	waitmessage
	pokemart GeneralStoreLumbridge
	msgbox Generalstore_Lumbridge_Clerk_Text_1
	release
	return


    .align 2
GeneralStoreLumbridge:
    .2byte ITEM_BRONZE_POUCH
    .2byte ITEM_IRON_POUCH
    .2byte ITEM_BREAD
	.2byte ITEM_WIZARDS_BLIZZARD
	.2byte ITEM_CHOCOLATE_SUNDAY
	.2byte ITEM_DRUNK_DRAGON
	.2byte ITEM_FRUIT_BLAST
	.2byte ITEM_PINEAPPLE_PUNCH
    .2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_EMPTY_POT
    .2byte ITEM_NONE
    release
    end

Generalstore_Lumbridge_Clerk_Text_0:
	.string "Welcome to the Lumbridge General Store.\p"
	.string "How may I help you?$"

Generalstore_Lumbridge_Clerk_Text_1:
	.string "Thank you, come again!$"
