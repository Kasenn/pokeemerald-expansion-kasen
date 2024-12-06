FloodedCave2F_MapScripts::
# 2 "data/maps/FloodedCave2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FC2F_Flags
# 3 "data/maps/FloodedCave2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FC2F_Flags
	.byte 0


FC2F_Flags::
# 7 "data/maps/FloodedCave2F/scripts.pory"
	goto_if_set FLAG_HIDE_STONE_SPHERE_FC, FC2F_Flags_2
FC2F_Flags_1:
	end

FC2F_Flags_2:
# 8 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 1, 0x219, TRUE
# 9 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 1, 0x219, TRUE
# 10 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 1, 0x219, TRUE
# 11 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 2, 0x219, TRUE
# 12 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 2, 0x219, TRUE
# 13 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 2, 0x219, TRUE
	goto FC2F_Flags_1


FloodedCave2F_ActivatePedestal::
# 19 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_FCCAVE, 3
	goto_if_eq FloodedCave2F_ActivatePedestal_2
# 23 "data/maps/FloodedCave2F/scripts.pory"
	lock
# 24 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_EmptyPedestal, MSGBOX_YESNO
# 25 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FloodedCave2F_ActivatePedestal_5
# 30 "data/maps/FloodedCave2F/scripts.pory"
	call Common_OpenBag
# 31 "data/maps/FloodedCave2F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 32 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_eq FloodedCave2F_ActivatePedestal_7
# 37 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_ITEM_ID, 805
	goto_if_eq FloodedCave2F_ActivatePedestal_8
# 70 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_PutWrongItem, MSGBOX_NPC
	end

FloodedCave2F_ActivatePedestal_2:
# 20 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_EmptyPedestal2, MSGBOX_NPC
	end

FloodedCave2F_ActivatePedestal_5:
# 26 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 27 "data/maps/FloodedCave2F/scripts.pory"
	release
	end

FloodedCave2F_ActivatePedestal_7:
# 33 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 34 "data/maps/FloodedCave2F/scripts.pory"
	release
	end

FloodedCave2F_ActivatePedestal_8:
# 38 "data/maps/FloodedCave2F/scripts.pory"
	clearflag FLAG_HIDE_STONE_SPHERE_FC
# 39 "data/maps/FloodedCave2F/scripts.pory"
	setflag FLAG_FC_DOOR_OPEN
# 40 "data/maps/FloodedCave2F/scripts.pory"
	removeitem ITEM_STONE_SPHERE
# 41 "data/maps/FloodedCave2F/scripts.pory"
	removeobject 2
# 42 "data/maps/FloodedCave2F/scripts.pory"
	addobject 1
# 43 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 44 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_PutCorrectItem, MSGBOX_DEFAULT
# 45 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 46 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 1, 0x20B, TRUE
# 47 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 1, 0x20C, TRUE
# 48 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 1, 0x20D, TRUE
# 49 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 2, 0x213, TRUE
# 50 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 2, 0x214, FALSE
# 51 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 2, 0x215, TRUE
# 52 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 53 "data/maps/FloodedCave2F/scripts.pory"
	fadeoutbgm 0
# 54 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 55 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8004, 1
# 56 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8005, 1
# 57 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8006, 8
# 58 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8007, 5
# 59 "data/maps/FloodedCave2F/scripts.pory"
	special ShakeCamera
# 60 "data/maps/FloodedCave2F/scripts.pory"
	waitstate
# 61 "data/maps/FloodedCave2F/scripts.pory"
	delay 60
# 62 "data/maps/FloodedCave2F/scripts.pory"
	playse SE_SWITCH
# 63 "data/maps/FloodedCave2F/scripts.pory"
	waitse
# 64 "data/maps/FloodedCave2F/scripts.pory"
	delay 90
# 65 "data/maps/FloodedCave2F/scripts.pory"
	fadeinbgm 0
# 66 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 67 "data/maps/FloodedCave2F/scripts.pory"
	release
	return


FloodedCave2F_TakeBackSphere::
# 76 "data/maps/FloodedCave2F/scripts.pory"
	lock
# 77 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FCTakeBackSphere, MSGBOX_YESNO
# 78 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FloodedCave2F_TakeBackSphere_2
# 83 "data/maps/FloodedCave2F/scripts.pory"
	additem ITEM_STONE_SPHERE
# 84 "data/maps/FloodedCave2F/scripts.pory"
	setflag FLAG_HIDE_STONE_SPHERE_FC
# 85 "data/maps/FloodedCave2F/scripts.pory"
	clearflag FLAG_FC_DOOR_OPEN
# 86 "data/maps/FloodedCave2F/scripts.pory"
	removeobject 1
# 87 "data/maps/FloodedCave2F/scripts.pory"
	addobject 2
# 88 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 89 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_TookOutSphere, MSGBOX_DEFAULT
# 90 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 91 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 1, 0x219, TRUE
# 92 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 1, 0x219, TRUE
# 93 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 1, 0x219, TRUE
# 94 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 2, 0x219, TRUE
# 95 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 2, 0x219, TRUE
# 96 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 2, 0x219, TRUE
# 97 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/FloodedCave2F/scripts.pory"
	fadeoutbgm 0
# 99 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 100 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8004, 1
# 101 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8005, 1
# 102 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8006, 8
# 103 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8007, 5
# 104 "data/maps/FloodedCave2F/scripts.pory"
	special ShakeCamera
# 105 "data/maps/FloodedCave2F/scripts.pory"
	waitstate
# 106 "data/maps/FloodedCave2F/scripts.pory"
	delay 60
# 107 "data/maps/FloodedCave2F/scripts.pory"
	playse SE_SWITCH
# 108 "data/maps/FloodedCave2F/scripts.pory"
	waitse
# 109 "data/maps/FloodedCave2F/scripts.pory"
	delay 90
# 110 "data/maps/FloodedCave2F/scripts.pory"
	fadeinbgm 0
# 111 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 112 "data/maps/FloodedCave2F/scripts.pory"
	release
	return

FloodedCave2F_TakeBackSphere_2:
# 79 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 80 "data/maps/FloodedCave2F/scripts.pory"
	release
	end


FC_EmptyPedestal2::
# 115 "data/maps/FloodedCave2F/scripts.pory"
	.string "There's an empty pedestal here.$"

FC_EmptyPedestal::
# 119 "data/maps/FloodedCave2F/scripts.pory"
	.string "There's an empty pedestal here.\p"
	.string "Would you like to try placing an item\n"
	.string "on it?$"

FC_PutCorrectItem::
# 124 "data/maps/FloodedCave2F/scripts.pory"
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…$"

FC_PutWrongItem::
# 129 "data/maps/FloodedCave2F/scripts.pory"
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…\p"
	.string "Nothing seems to be happening…\p"
	.string "{PLAYER} put the {STR_VAR_1}\n"
	.string "back in the bag.$"

FCTakeBackSphere::
# 137 "data/maps/FloodedCave2F/scripts.pory"
	.string "The Stone Sphere is resting on the\n"
	.string "pedestal.\p"
	.string "Would you like to pick it back up?$"

FC_TookOutSphere::
# 142 "data/maps/FloodedCave2F/scripts.pory"
	.string "{PLAYER} took out the Stone Sphere\n"
	.string "from the table.$"
