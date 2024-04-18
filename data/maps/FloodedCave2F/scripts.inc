FloodedCave2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FC2F_Flags
	map_script MAP_SCRIPT_ON_LOAD, FC2F_Flags
	.byte 0


FC2F_Flags::
	goto_if_set FLAG_HIDE_STONE_SPHERE_FC, FC2F_Flags_2
FC2F_Flags_1:
	end

FC2F_Flags_2:
	setmetatile 6, 1, 0x219, TRUE
	setmetatile 7, 1, 0x219, TRUE
	setmetatile 8, 1, 0x219, TRUE
	setmetatile 6, 2, 0x219, TRUE
	setmetatile 7, 2, 0x219, TRUE
	setmetatile 8, 2, 0x219, TRUE
	goto FC2F_Flags_1


FloodedCave2F_ActivatePedestal::
	compare VAR_FCCAVE, 3
	goto_if_eq FloodedCave2F_ActivatePedestal_2
	lock
	msgbox FC_EmptyPedestal, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FloodedCave2F_ActivatePedestal_5
	call Common_OpenBag
	bufferitemname STR_VAR_1, VAR_ITEM_ID
	compare VAR_ITEM_ID, 0
	goto_if_eq FloodedCave2F_ActivatePedestal_7
	compare VAR_ITEM_ID, 805
	goto_if_eq FloodedCave2F_ActivatePedestal_8
	msgbox FC_PutWrongItem, MSGBOX_NPC
	end

FloodedCave2F_ActivatePedestal_2:
	msgbox FC_EmptyPedestal2, MSGBOX_NPC
	end

FloodedCave2F_ActivatePedestal_5:
	closemessage
	release
	end

FloodedCave2F_ActivatePedestal_7:
	closemessage
	release
	end

FloodedCave2F_ActivatePedestal_8:
	clearflag FLAG_HIDE_STONE_SPHERE_FC
	setflag FLAG_FC_DOOR_OPEN
	removeitem ITEM_STONE_SPHERE
	removeobject 2
	addobject 1
	special DrawWholeMapView
	msgbox FC_PutCorrectItem, MSGBOX_DEFAULT
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


FloodedCave2F_TakeBackSphere::
	lock
	msgbox FCTakeBackSphere, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FloodedCave2F_TakeBackSphere_2
	additem ITEM_STONE_SPHERE
	setflag FLAG_HIDE_STONE_SPHERE_FC
	clearflag FLAG_FC_DOOR_OPEN
	removeobject 1
	addobject 2
	special DrawWholeMapView
	msgbox FC_TookOutSphere, MSGBOX_DEFAULT
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

FloodedCave2F_TakeBackSphere_2:
	closemessage
	release
	end


FC_EmptyPedestal2::
	.string "There's an empty pedestal here.$"

FC_EmptyPedestal::
	.string "There's an empty pedestal here.\p"
	.string "Would you like to try placing an item\n"
	.string "on it?$"

FC_PutCorrectItem::
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…$"

FC_PutWrongItem::
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…\p"
	.string "Nothing seems to be happening…\p"
	.string "{PLAYER} put the {STR_VAR_1}\n"
	.string "back in the bag.$"

FCTakeBackSphere::
	.string "The Stone Sphere is resting on the\n"
	.string "pedestal.\p"
	.string "Would you like to pick it back up?$"

FC_TookOutSphere::
	.string "{PLAYER} took out the Stone Sphere\n"
	.string "from the table.$"
