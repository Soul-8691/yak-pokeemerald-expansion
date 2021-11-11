EventScript_ResetAllBerries:: @ 827149D
	@ how to set berry trees
	@setberrytree 2, ITEM_TO_BERRY(ITEM_ORAN_BERRY), BERRY_STAGE_BERRIES
	return


EventScript_ResetAllMapFlags:: @ 82715DE
	setflag FLAG_EVILCHICKEN_HIDE 
	call EventScript_ResetAllBerries
	end
