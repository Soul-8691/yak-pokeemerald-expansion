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
    .2byte ITEM_EMPTY_POT
    .2byte ITEM_EGG
    .2byte ITEM_EMPTY_BUCKET
    .2byte ITEM_NONE
    release
    end

Generalstore_Lumbridge_Clerk_Text_0:
	.string "Buy something or get out$"

Generalstore_Lumbridge_Clerk_Text_1:
	.string "Smell ya later!$"
