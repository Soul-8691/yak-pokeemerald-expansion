Kourend_Catacombs_2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Kourend_Catacombs_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Kourend_Catacombs_2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SLAYER_COMPLETE, 1, SLAYER_TASK_COMPLETE
	.2byte 0


KOUREND_SLAYER_QUEST_START::
	msgbox KOUREND_SLAYER_QUEST_START_Text_0
	msgbox KOUREND_SLAYER_QUEST_START_Text_1
	msgbox KOUREND_SLAYER_QUEST_START_Text_2
	giveitem ITEM_SLAYER_GEM, 1
	closemessage
	hidenamebox
	startquest QUEST_KOUREND_SLAYER
	release
	end


giveSlayerPoints::
	setvar VAR_0x8004, 100
	special GiveFrontierBattlePoints
	end


SLAYER_REWARD_SHOP::
	msgbox SLAYER_REWARD_SHOP_Text_0
	special ShowBattlePointsWindow
	setvar VAR_0x8004, SCROLL_SLAYER_REWARD_SHOP
	special ShowFrontierExchangeCornerItemIconWindow
	special ShowScrollableMultichoice
	waitstate
	special CloseFrontierExchangeCornerItemIconWindow
	switch VAR_RESULT
	case 0, SLAYER_REWARD_SHOP_3
	case 1, SLAYER_REWARD_SHOP_4
	case 2, SLAYER_REWARD_SHOP_5
	case 3, SLAYER_REWARD_SHOP_6
	case 4, SLAYER_REWARD_SHOP_7
	case 5, SLAYER_REWARD_SHOP_7
	case 6, SLAYER_REWARD_SHOP_7
	case 7, SLAYER_REWARD_SHOP_7
	case 8, SLAYER_REWARD_SHOP_7
	case 9, SLAYER_REWARD_SHOP_7
	case 10, SLAYER_REWARD_SHOP_7
	case 11, SLAYER_REWARD_SHOP_7
	case MULTI_B_PRESSED, SLAYER_REWARD_SHOP_7
SLAYER_REWARD_SHOP_1:
	end

SLAYER_REWARD_SHOP_3:
	goto SlayerRewardShop_DarkTotemTop
	goto SLAYER_REWARD_SHOP_1

SLAYER_REWARD_SHOP_4:
	goto SlayerRewardShop_DarkTotemMiddle
	goto SLAYER_REWARD_SHOP_1

SLAYER_REWARD_SHOP_5:
	goto SlayerRewardShop_DarkTotemBottom
	goto SLAYER_REWARD_SHOP_1

SLAYER_REWARD_SHOP_6:
	goto SlayerRewardShop_AncientShard
	goto SLAYER_REWARD_SHOP_1

SLAYER_REWARD_SHOP_7:
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
	goto SLAYER_REWARD_SHOP_1


SLAYER_REWARD_SHOP_TryPurchasePrize::
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
	goto_if_ge VAR_TEMP_1, VAR_0x8008, SLAYER_REWARD_SHOP_TryGiveItem
	msgbox SLAYER_REWARD_SHOP_TryPurchasePrize_Text_0
	goto SLAYER_REWARD_SHOP
	end


SLAYER_REWARD_SHOP_TryGiveItem::
	checkitemspace VAR_0x8009
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
	copyvar VAR_0x8004, VAR_0x8008
	special TakeFrontierBattlePoints
	special UpdateBattlePointsWindow
	playse SE_SHOP
	msgbox SLAYER_REWARD_SHOP_TryGiveItem_Text_0
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 0
	compare VAR_RESULT, 0
	goto_if_eq SLAYER_REWARD_SHOP_TryGiveItem_2
SLAYER_REWARD_SHOP_TryGiveItem_1:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 1
	compare VAR_RESULT, 0
	goto_if_eq SLAYER_REWARD_SHOP_TryGiveItem_5
SLAYER_REWARD_SHOP_TryGiveItem_4:
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 2
	compare VAR_RESULT, 0
	goto_if_eq SLAYER_REWARD_SHOP_TryGiveItem_10
SLAYER_REWARD_SHOP_TryGiveItem_9:
	giveitem VAR_0x8009
	goto SLAYER_REWARD_SHOP
	return

SLAYER_REWARD_SHOP_TryGiveItem_2:
	compare VAR_0x8009, ITEM_DARK_TOTEM_TOP
	goto_if_eq SLAYER_REWARD_SHOP_TryGiveItem_7
	goto SLAYER_REWARD_SHOP_TryGiveItem_1

SLAYER_REWARD_SHOP_TryGiveItem_5:
	compare VAR_0x8009, ITEM_DARK_TOTEM_MID
	goto_if_eq SLAYER_REWARD_SHOP_TryGiveItem_12
	goto SLAYER_REWARD_SHOP_TryGiveItem_4

SLAYER_REWARD_SHOP_TryGiveItem_7:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER, 0
	goto SLAYER_REWARD_SHOP_TryGiveItem_1

SLAYER_REWARD_SHOP_TryGiveItem_10:
	compare VAR_0x8009, ITEM_DARK_TOTEM_BASE
	goto_if_eq SLAYER_REWARD_SHOP_TryGiveItem_14
	goto SLAYER_REWARD_SHOP_TryGiveItem_9

SLAYER_REWARD_SHOP_TryGiveItem_12:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER, 1
	goto SLAYER_REWARD_SHOP_TryGiveItem_4

SLAYER_REWARD_SHOP_TryGiveItem_14:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_KOUREND_SLAYER, 2
	goto SLAYER_REWARD_SHOP_TryGiveItem_9


SlayerRewardShop_DarkTotemTop::
	msgbox SlayerRewardShop_DarkTotemTop_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SLAYER_REWARD_SHOP
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 0
	compare VAR_RESULT, 0
	goto_if_eq SlayerRewardShop_DarkTotemTop_2
	compare VAR_RESULT, 0
	goto_if_ne SlayerRewardShop_DarkTotemTop_3
SlayerRewardShop_DarkTotemTop_1:
	setvar VAR_0x8009, ITEM_DARK_TOTEM_BASE
	goto SLAYER_REWARD_SHOP_TryPurchasePrize
	end

SlayerRewardShop_DarkTotemTop_2:
	setvar VAR_0x8008, 50
	msgbox SlayerRewardShop_DarkTotemTop_Text_1
	goto SlayerRewardShop_DarkTotemTop_1

SlayerRewardShop_DarkTotemTop_3:
	setvar VAR_0x8008, 100
	goto SlayerRewardShop_DarkTotemTop_1


SlayerRewardShop_DarkTotemMiddle::
	msgbox SlayerRewardShop_DarkTotemMiddle_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SLAYER_REWARD_SHOP
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 1
	compare VAR_RESULT, 0
	goto_if_eq SlayerRewardShop_DarkTotemMiddle_2
	compare VAR_RESULT, 0
	goto_if_ne SlayerRewardShop_DarkTotemMiddle_3
SlayerRewardShop_DarkTotemMiddle_1:
	setvar VAR_0x8009, ITEM_DARK_TOTEM_MID
	goto SLAYER_REWARD_SHOP_TryPurchasePrize
	end

SlayerRewardShop_DarkTotemMiddle_2:
	setvar VAR_0x8008, 50
	msgbox SlayerRewardShop_DarkTotemTop_Text_1
	goto SlayerRewardShop_DarkTotemMiddle_1

SlayerRewardShop_DarkTotemMiddle_3:
	setvar VAR_0x8008, 100
	goto SlayerRewardShop_DarkTotemMiddle_1


SlayerRewardShop_DarkTotemBottom::
	msgbox SlayerRewardShop_DarkTotemBottom_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SLAYER_REWARD_SHOP
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_KOUREND_SLAYER, 2
	compare VAR_RESULT, 0
	goto_if_eq SlayerRewardShop_DarkTotemBottom_2
	compare VAR_RESULT, 0
	goto_if_ne SlayerRewardShop_DarkTotemBottom_3
SlayerRewardShop_DarkTotemBottom_1:
	setvar VAR_0x8009, ITEM_DARK_TOTEM_TOP
	goto SLAYER_REWARD_SHOP_TryPurchasePrize
	end

SlayerRewardShop_DarkTotemBottom_2:
	setvar VAR_0x8008, 50
	msgbox SlayerRewardShop_DarkTotemTop_Text_1
	goto SlayerRewardShop_DarkTotemBottom_1

SlayerRewardShop_DarkTotemBottom_3:
	setvar VAR_0x8008, 100
	goto SlayerRewardShop_DarkTotemBottom_1


SlayerRewardShop_AncientShard::
	msgbox SlayerRewardShop_AncientShard_Text_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SLAYER_REWARD_SHOP
	setvar VAR_0x8008, 6
	setvar VAR_0x8009, ITEM_ANCIENT_SHARD
	goto SLAYER_REWARD_SHOP_TryPurchasePrize
	end


KOUREND_SLAYER_QUEST_START_Text_0:
	.string "You look strong, could I would you be\n"
	.string "interested in doing some Slayer tasks\l"
	.string "for me?$"

KOUREND_SLAYER_QUEST_START_Text_1:
	.string "Slayer Master explains Slayer Tasks,\n"
	.string "explains how Slayer Tasks work by ONLY\l"
	.string "defeating monsters. Explains Slayer\l"
	.string "Points(SP), offers rewards mentioning\l"
	.string "totems that he found.$"

KOUREND_SLAYER_QUEST_START_Text_2:
	.string "Take this it will help you remember your\n"
	.string "Slayer Assignment.$"

SLAYER_REWARD_SHOP_Text_0:
	.string "What would you like?$"

SLAYER_REWARD_SHOP_TryPurchasePrize_Text_0:
	.string "I'm so sorry…\n"
	.string "You don't have enough Slayer Points…$"

SLAYER_REWARD_SHOP_TryGiveItem_Text_0:
	.string "Here is your prize!$"

SlayerRewardShop_DarkTotemTop_Text_0:
	.string "You've chosen the 'TOP' piece of the\n"
	.string "DARK TOTEM.\p"
	.string "Is that correct?$"

SlayerRewardShop_DarkTotemTop_Text_1:
	.string "Oh lucky you!\n"
	.string "This item is currently on sale for\l"
	.string "50(SP)!$"

SlayerRewardShop_DarkTotemMiddle_Text_0:
	.string "You've chosen the 'MIDDLE' piece of the\n"
	.string "DARK TOTEM.\p"
	.string "Is that correct?$"

SlayerRewardShop_DarkTotemBottom_Text_0:
	.string "You've chosen the 'BOTTOM' piece of the\n"
	.string "DARK TOTEM.\p"
	.string "Is that correct?$"

SlayerRewardShop_AncientShard_Text_0:
	.string "You've chosen the ANCIENT SHARD.\p"
	.string "Is that correct?$"
