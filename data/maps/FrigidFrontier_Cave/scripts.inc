FrigidFrontier_Cave_MapScripts::
# 2 "data/maps/FrigidFrontier_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD
# 18 "data/maps/FrigidFrontier_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 12 "data/maps/FrigidFrontier_Cave/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/FrigidFrontier_Cave/scripts.pory"
	goto_if_set FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 4 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 6, 1, 0x219, TRUE
# 5 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 7, 1, 0x219, TRUE
# 6 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 8, 1, 0x219, TRUE
# 7 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 6, 2, 0x219, TRUE
# 8 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 7, 2, 0x219, TRUE
# 9 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 8, 2, 0x219, TRUE
	return

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/FrigidFrontier_Cave/scripts.pory"
	goto_if_unset FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_START, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/FrigidFrontier_Cave/scripts.pory"
	startquest FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_START
# 21 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_TEMP_1, 1
	return

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/FrigidFrontier_Cave/scripts.pory"
	goto_if_unset FLAG_FRIGIDCAVE_VERDANT_SPHERE, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 13 "data/maps/FrigidFrontier_Cave/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

FrigidFrontier_Cave_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 14 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special ShowJournalPopupAdd
# 15 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_TEMP_1, 0
	return


FrigidCave_ActivatePedestal::
# 27 "data/maps/FrigidFrontier_Cave/scripts.pory"
	goto_if_set FLAG_FRIGIDCAVE_VERDANT_SPHERE, FrigidCave_ActivatePedestal_2
# 31 "data/maps/FrigidFrontier_Cave/scripts.pory"
	lock
# 32 "data/maps/FrigidFrontier_Cave/scripts.pory"
	msgbox FrigidCave_Text_EmptyPedestal, MSGBOX_YESNO
# 33 "data/maps/FrigidFrontier_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrigidCave_ActivatePedestal_5
# 38 "data/maps/FrigidFrontier_Cave/scripts.pory"
	call Common_OpenBag
# 39 "data/maps/FrigidFrontier_Cave/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 40 "data/maps/FrigidFrontier_Cave/scripts.pory"
	compare VAR_ITEM_ID, 0
	goto_if_eq FrigidCave_ActivatePedestal_7
# 45 "data/maps/FrigidFrontier_Cave/scripts.pory"
	compare VAR_ITEM_ID, ITEM_STEEL_SPHERE
	goto_if_eq FrigidCave_ActivatePedestal_8
# 78 "data/maps/FrigidFrontier_Cave/scripts.pory"
	msgbox FrigidCave_Text_PutWrongItem, MSGBOX_NPC
	end

FrigidCave_ActivatePedestal_2:
# 28 "data/maps/FrigidFrontier_Cave/scripts.pory"
	msgbox FrigidCave_Text_EmptyPedestal2, MSGBOX_NPC
	end

FrigidCave_ActivatePedestal_5:
# 34 "data/maps/FrigidFrontier_Cave/scripts.pory"
	closemessage
# 35 "data/maps/FrigidFrontier_Cave/scripts.pory"
	release
	end

FrigidCave_ActivatePedestal_7:
# 41 "data/maps/FrigidFrontier_Cave/scripts.pory"
	closemessage
# 42 "data/maps/FrigidFrontier_Cave/scripts.pory"
	release
	end

FrigidCave_ActivatePedestal_8:
# 46 "data/maps/FrigidFrontier_Cave/scripts.pory"
	clearflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
# 47 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setflag FLAG_FRIGIDCAVE_DOOR_OPEN
# 48 "data/maps/FrigidFrontier_Cave/scripts.pory"
	removeitem ITEM_STEEL_SPHERE
# 49 "data/maps/FrigidFrontier_Cave/scripts.pory"
	removeobject 2
# 50 "data/maps/FrigidFrontier_Cave/scripts.pory"
	addobject 1
# 51 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special DrawWholeMapView
# 52 "data/maps/FrigidFrontier_Cave/scripts.pory"
	msgbox FrigidCave_Text_PutCorrectItem, MSGBOX_DEFAULT
# 53 "data/maps/FrigidFrontier_Cave/scripts.pory"
	closemessage
# 54 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 6, 1, 0x20B, TRUE
# 55 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 7, 1, 0x20C, TRUE
# 56 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 8, 1, 0x20D, TRUE
# 57 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 6, 2, 0x213, TRUE
# 58 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 7, 2, 0x214, FALSE
# 59 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 8, 2, 0x215, TRUE
# 60 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/FrigidFrontier_Cave/scripts.pory"
	fadeoutbgm 0
# 62 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 30
# 63 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 64 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 65 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 66 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 67 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special ShakeCamera
# 68 "data/maps/FrigidFrontier_Cave/scripts.pory"
	waitstate
# 69 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 60
# 70 "data/maps/FrigidFrontier_Cave/scripts.pory"
	playse SE_SWITCH
# 71 "data/maps/FrigidFrontier_Cave/scripts.pory"
	waitse
# 72 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 90
# 73 "data/maps/FrigidFrontier_Cave/scripts.pory"
	fadeinbgm 0
# 74 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 30
# 75 "data/maps/FrigidFrontier_Cave/scripts.pory"
	release
	return


FrigidCave_TakeBackSphere::
# 84 "data/maps/FrigidFrontier_Cave/scripts.pory"
	lock
# 85 "data/maps/FrigidFrontier_Cave/scripts.pory"
	msgbox FrigidCave_Text_TakeBackSphere, MSGBOX_YESNO
# 86 "data/maps/FrigidFrontier_Cave/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrigidCave_TakeBackSphere_2
# 91 "data/maps/FrigidFrontier_Cave/scripts.pory"
	additem ITEM_STEEL_SPHERE
# 92 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
# 93 "data/maps/FrigidFrontier_Cave/scripts.pory"
	clearflag FLAG_FRIGIDCAVE_DOOR_OPEN
# 94 "data/maps/FrigidFrontier_Cave/scripts.pory"
	removeobject 1
# 95 "data/maps/FrigidFrontier_Cave/scripts.pory"
	addobject 2
# 96 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special DrawWholeMapView
# 97 "data/maps/FrigidFrontier_Cave/scripts.pory"
	msgbox FrigidCave_Text_TookOutSphere, MSGBOX_DEFAULT
# 98 "data/maps/FrigidFrontier_Cave/scripts.pory"
	closemessage
# 99 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 6, 1, 0x219, TRUE
# 100 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 7, 1, 0x219, TRUE
# 101 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 8, 1, 0x219, TRUE
# 102 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 6, 2, 0x219, TRUE
# 103 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 7, 2, 0x219, TRUE
# 104 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setmetatile 8, 2, 0x219, TRUE
# 105 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special DrawWholeMapView
# 106 "data/maps/FrigidFrontier_Cave/scripts.pory"
	fadeoutbgm 0
# 107 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 30
# 108 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8004, 1
# 109 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8005, 1
# 110 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8006, 8
# 111 "data/maps/FrigidFrontier_Cave/scripts.pory"
	setvar VAR_0x8007, 5
# 112 "data/maps/FrigidFrontier_Cave/scripts.pory"
	special ShakeCamera
# 113 "data/maps/FrigidFrontier_Cave/scripts.pory"
	waitstate
# 114 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 60
# 115 "data/maps/FrigidFrontier_Cave/scripts.pory"
	playse SE_SWITCH
# 116 "data/maps/FrigidFrontier_Cave/scripts.pory"
	waitse
# 117 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 90
# 118 "data/maps/FrigidFrontier_Cave/scripts.pory"
	fadeinbgm 0
# 119 "data/maps/FrigidFrontier_Cave/scripts.pory"
	delay 30
# 120 "data/maps/FrigidFrontier_Cave/scripts.pory"
	release
	return

FrigidCave_TakeBackSphere_2:
# 87 "data/maps/FrigidFrontier_Cave/scripts.pory"
	closemessage
# 88 "data/maps/FrigidFrontier_Cave/scripts.pory"
	release
	end


FrigidCave_Text_EmptyPedestal2::
# 123 "data/maps/FrigidFrontier_Cave/scripts.pory"
	.string "There's an empty pedestal here.$"

FrigidCave_Text_EmptyPedestal::
# 127 "data/maps/FrigidFrontier_Cave/scripts.pory"
	.string "There's an empty pedestal here.\p"
	.string "Would you like to try placing an item\n"
	.string "on it?$"

FrigidCave_Text_PutCorrectItem::
# 132 "data/maps/FrigidFrontier_Cave/scripts.pory"
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…$"

FrigidCave_Text_PutWrongItem::
# 137 "data/maps/FrigidFrontier_Cave/scripts.pory"
	.string "{PLAYER} placed the {STR_VAR_1}\n"
	.string "on the pedestal.\p"
	.string "… {PAUSE_UNTIL_PRESS}… {PAUSE_UNTIL_PRESS}…\p"
	.string "Nothing seems to be happening…\p"
	.string "{PLAYER} put the {STR_VAR_1}\n"
	.string "back in the bag.$"

FrigidCave_Text_TakeBackSphere::
# 145 "data/maps/FrigidFrontier_Cave/scripts.pory"
	.string "The Steel Sphere is resting on the\n"
	.string "pedestal.\p"
	.string "Would you like to pick it back up?$"

FrigidCave_Text_TookOutSphere::
# 150 "data/maps/FrigidFrontier_Cave/scripts.pory"
	.string "{PLAYER} took out the Steel Sphere\n"
	.string "from the table.$"
