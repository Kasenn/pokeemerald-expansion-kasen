FrigidFrontier_Cave_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD:
	goto_if_set FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	setmetatile 6, 1, 0x219, TRUE
	setmetatile 7, 1, 0x219, TRUE
	setmetatile 8, 1, 0x219, TRUE
	setmetatile 6, 2, 0x219, TRUE
	setmetatile 7, 2, 0x219, TRUE
	setmetatile 8, 2, 0x219, TRUE
	return


FrigidCave_ActivatePedestal::
	goto_if_set FLAG_FRIGIDCAVE_VERDANT_SPHERE, FrigidCave_ActivatePedestal_2
	lock
	msgbox FrigidCave_Text_EmptyPedestal, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FrigidCave_ActivatePedestal_5
	call Common_OpenBag
	bufferitemname STR_VAR_1, VAR_ITEM_ID
	compare VAR_ITEM_ID, 0
	goto_if_eq FrigidCave_ActivatePedestal_7
	compare VAR_ITEM_ID, ITEM_STEEL_SPHERE
	goto_if_eq FrigidCave_ActivatePedestal_8
	msgbox FrigidCave_Text_PutWrongItem, MSGBOX_NPC
	end

FrigidCave_ActivatePedestal_2:
	msgbox FrigidCave_Text_EmptyPedestal2, MSGBOX_NPC
	end

FrigidCave_ActivatePedestal_5:
	closemessage
	release
	end

FrigidCave_ActivatePedestal_7:
	closemessage
	release
	end

FrigidCave_ActivatePedestal_8:
	clearflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
	setflag FLAG_FRIGIDCAVE_DOOR_OPEN
	removeitem ITEM_STEEL_SPHERE
	removeobject 2
	addobject 1
	special DrawWholeMapView
	msgbox FrigidCave_Text_PutCorrectItem, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x20B, TRUE
	setmetatile 7, 1, 0x20C, TRUE
	setmetatile 8, 1, 0x20D, TRUE
	setmetatile 6, 2, 0x213, TRUE
	setmetatile 7, 2, 0x214, FALSE
	setmetatile 8, 2, 0x215, TRUE
	special DrawWholeMapView
	fadeoutbgm 0
	delay 30
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 60
	playse SE_SWITCH
	waitse
	delay 90
	fadeinbgm 0
	delay 30
	release
	return


FrigidCave_TakeBackSphere::
	lock
	msgbox FrigidCave_Text_TakeBackSphere, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FrigidCave_TakeBackSphere_2
	additem ITEM_STEEL_SPHERE
	setflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
	clearflag FLAG_FRIGIDCAVE_DOOR_OPEN
	removeobject 1
	addobject 2
	special DrawWholeMapView
	msgbox FrigidCave_Text_TookOutSphere, MSGBOX_DEFAULT
	closemessage
	setmetatile 6, 1, 0x219, TRUE
	setmetatile 7, 1, 0x219, TRUE
	setmetatile 8, 1, 0x219, TRUE
	setmetatile 6, 2, 0x219, TRUE
	setmetatile 7, 2, 0x219, TRUE
	setmetatile 8, 2, 0x219, TRUE
	special DrawWholeMapView
	fadeoutbgm 0
	delay 30
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	delay 60
	playse SE_SWITCH
	waitse
	delay 90
	fadeinbgm 0
	delay 30
	release
	return

FrigidCave_TakeBackSphere_2:
	closemessage
	release
	end


FrigidCave_Text_EmptyPedestal2::
	.string "There's an empty pedestal here.$"

FrigidCave_Text_EmptyPedestal::
	.string "There's an empty pedestal here.\p"
	.string "Would you like to try placing an item\n"
	.string "on it?$"

FrigidCave_Text_PutCorrectItem::
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…$"

FrigidCave_Text_PutWrongItem::
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…\p"
	.string "Nothing seems to be happening…\p"
	.string "{PLAYER} put the {STR_VAR_1}\n"
	.string "back in the bag.$"

FrigidCave_Text_TakeBackSphere::
	.string "The Steel Sphere is resting on the\n"
	.string "pedestal.\p"
	.string "Would you like to pick it back up?$"

FrigidCave_Text_TookOutSphere::
	.string "{PLAYER} took out the Steel Sphere\n"
	.string "from the table.$"
