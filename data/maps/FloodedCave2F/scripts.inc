FloodedCave2F_MapScripts::
# 2 "data/maps/FloodedCave2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FC2F_Flags
# 3 "data/maps/FloodedCave2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FC2F_Flags
# 4 "data/maps/FloodedCave2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FloodedCave2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FloodedCave2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/FloodedCave2F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FloodedCave2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

FloodedCave2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/FloodedCave2F/scripts.pory"
	special ShowJournalPopupAdd
# 7 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


FC2F_Flags::
# 13 "data/maps/FloodedCave2F/scripts.pory"
	goto_if_unset FLAG_Q31_ROUTE12_WEIRDCAVE_START, FC2F_Flags_3
FC2F_Flags_1:
# 17 "data/maps/FloodedCave2F/scripts.pory"
	goto_if_set FLAG_HIDE_STONE_SPHERE_FC, FC2F_Flags_7
FC2F_Flags_6:
	end

FC2F_Flags_2:
# 14 "data/maps/FloodedCave2F/scripts.pory"
	startquest FLAG_Q31_ROUTE12_WEIRDCAVE_START
# 15 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto FC2F_Flags_1

FC2F_Flags_3:
# 13 "data/maps/FloodedCave2F/scripts.pory"
	goto_if_unset FLAG_FC_LOOTEDROCK, FC2F_Flags_2
	goto FC2F_Flags_1

FC2F_Flags_7:
# 18 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 1, 0x219, TRUE
# 19 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 1, 0x219, TRUE
# 20 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 1, 0x219, TRUE
# 21 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 2, 0x219, TRUE
# 22 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 2, 0x219, TRUE
# 23 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 2, 0x219, TRUE
	goto FC2F_Flags_6


FloodedCave2F_ActivatePedestal::
# 29 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_FCCAVE, 3
	goto_if_eq FloodedCave2F_ActivatePedestal_2
# 33 "data/maps/FloodedCave2F/scripts.pory"
	lock
# 34 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_EmptyPedestal, MSGBOX_YESNO
# 35 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FloodedCave2F_ActivatePedestal_5
# 40 "data/maps/FloodedCave2F/scripts.pory"
	call Common_OpenBag
# 41 "data/maps/FloodedCave2F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 42 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_eq FloodedCave2F_ActivatePedestal_7
# 47 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_ITEM_ID, 805
	goto_if_eq FloodedCave2F_ActivatePedestal_8
# 80 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_PutWrongItem, MSGBOX_NPC
	end

FloodedCave2F_ActivatePedestal_2:
# 30 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_EmptyPedestal2, MSGBOX_NPC
	end

FloodedCave2F_ActivatePedestal_5:
# 36 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 37 "data/maps/FloodedCave2F/scripts.pory"
	release
	end

FloodedCave2F_ActivatePedestal_7:
# 43 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 44 "data/maps/FloodedCave2F/scripts.pory"
	release
	end

FloodedCave2F_ActivatePedestal_8:
# 48 "data/maps/FloodedCave2F/scripts.pory"
	clearflag FLAG_HIDE_STONE_SPHERE_FC
# 49 "data/maps/FloodedCave2F/scripts.pory"
	setflag FLAG_FC_DOOR_OPEN
# 50 "data/maps/FloodedCave2F/scripts.pory"
	removeitem ITEM_STONE_SPHERE
# 51 "data/maps/FloodedCave2F/scripts.pory"
	removeobject 2
# 52 "data/maps/FloodedCave2F/scripts.pory"
	addobject 1
# 53 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_PutCorrectItem, MSGBOX_DEFAULT
# 55 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 56 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 1, 0x20B, TRUE
# 57 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 1, 0x20C, TRUE
# 58 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 1, 0x20D, TRUE
# 59 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 2, 0x213, TRUE
# 60 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 2, 0x214, FALSE
# 61 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 2, 0x215, TRUE
# 62 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 63 "data/maps/FloodedCave2F/scripts.pory"
	fadeoutbgm 0
# 64 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 65 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8004, 1
# 66 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8005, 1
# 67 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8006, 8
# 68 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8007, 5
# 69 "data/maps/FloodedCave2F/scripts.pory"
	special ShakeCamera
# 70 "data/maps/FloodedCave2F/scripts.pory"
	waitstate
# 71 "data/maps/FloodedCave2F/scripts.pory"
	delay 60
# 72 "data/maps/FloodedCave2F/scripts.pory"
	playse SE_SWITCH
# 73 "data/maps/FloodedCave2F/scripts.pory"
	waitse
# 74 "data/maps/FloodedCave2F/scripts.pory"
	delay 90
# 75 "data/maps/FloodedCave2F/scripts.pory"
	fadeinbgm 0
# 76 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 77 "data/maps/FloodedCave2F/scripts.pory"
	release
	return


FloodedCave2F_TakeBackSphere::
# 86 "data/maps/FloodedCave2F/scripts.pory"
	lock
# 87 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FCTakeBackSphere, MSGBOX_YESNO
# 88 "data/maps/FloodedCave2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FloodedCave2F_TakeBackSphere_2
# 93 "data/maps/FloodedCave2F/scripts.pory"
	additem ITEM_STONE_SPHERE
# 94 "data/maps/FloodedCave2F/scripts.pory"
	setflag FLAG_HIDE_STONE_SPHERE_FC
# 95 "data/maps/FloodedCave2F/scripts.pory"
	clearflag FLAG_FC_DOOR_OPEN
# 96 "data/maps/FloodedCave2F/scripts.pory"
	removeobject 1
# 97 "data/maps/FloodedCave2F/scripts.pory"
	addobject 2
# 98 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 99 "data/maps/FloodedCave2F/scripts.pory"
	msgbox FC_TookOutSphere, MSGBOX_DEFAULT
# 100 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 101 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 1, 0x219, TRUE
# 102 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 1, 0x219, TRUE
# 103 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 1, 0x219, TRUE
# 104 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 6, 2, 0x219, TRUE
# 105 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 7, 2, 0x219, TRUE
# 106 "data/maps/FloodedCave2F/scripts.pory"
	setmetatile 8, 2, 0x219, TRUE
# 107 "data/maps/FloodedCave2F/scripts.pory"
	special DrawWholeMapView
# 108 "data/maps/FloodedCave2F/scripts.pory"
	fadeoutbgm 0
# 109 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 110 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8004, 1
# 111 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8005, 1
# 112 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8006, 8
# 113 "data/maps/FloodedCave2F/scripts.pory"
	setvar VAR_0x8007, 5
# 114 "data/maps/FloodedCave2F/scripts.pory"
	special ShakeCamera
# 115 "data/maps/FloodedCave2F/scripts.pory"
	waitstate
# 116 "data/maps/FloodedCave2F/scripts.pory"
	delay 60
# 117 "data/maps/FloodedCave2F/scripts.pory"
	playse SE_SWITCH
# 118 "data/maps/FloodedCave2F/scripts.pory"
	waitse
# 119 "data/maps/FloodedCave2F/scripts.pory"
	delay 90
# 120 "data/maps/FloodedCave2F/scripts.pory"
	fadeinbgm 0
# 121 "data/maps/FloodedCave2F/scripts.pory"
	delay 30
# 122 "data/maps/FloodedCave2F/scripts.pory"
	release
	return

FloodedCave2F_TakeBackSphere_2:
# 89 "data/maps/FloodedCave2F/scripts.pory"
	closemessage
# 90 "data/maps/FloodedCave2F/scripts.pory"
	release
	end


FC_EmptyPedestal2::
# 125 "data/maps/FloodedCave2F/scripts.pory"
	.string "There's an empty pedestal here.$"

FC_EmptyPedestal::
# 129 "data/maps/FloodedCave2F/scripts.pory"
	.string "There's an empty pedestal here.\p"
	.string "Would you like to try placing an item\n"
	.string "on it?$"

FC_PutCorrectItem::
# 134 "data/maps/FloodedCave2F/scripts.pory"
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…$"

FC_PutWrongItem::
# 139 "data/maps/FloodedCave2F/scripts.pory"
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…\p"
	.string "Nothing seems to be happening…\p"
	.string "{PLAYER} put the {STR_VAR_1}\n"
	.string "back in the bag.$"

FCTakeBackSphere::
# 147 "data/maps/FloodedCave2F/scripts.pory"
	.string "The Stone Sphere is resting on the\n"
	.string "pedestal.\p"
	.string "Would you like to pick it back up?$"

FC_TookOutSphere::
# 152 "data/maps/FloodedCave2F/scripts.pory"
	.string "{PLAYER} took out the Stone Sphere\n"
	.string "from the table.$"
