Lumbridge_Castle_2_MapScripts::
	.byte 0


FillBucketWater::
	checkitem ITEM_EMPTY_BUCKET, 1
	compare VAR_RESULT, 0
	goto_if_ne FillBucketWater_1
	msgbox FillBucketWater_Text_0
	release
	return

FillBucketWater_1:
	removeitem ITEM_EMPTY_BUCKET, 1
	giveitem ITEM_WATER_BUCKET, 1
	release
	return


FillBucketWater_Text_0:
	.string "Running water - A nice feature!$"
