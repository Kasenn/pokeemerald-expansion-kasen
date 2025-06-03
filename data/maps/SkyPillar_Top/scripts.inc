SkyPillar_Top_MapScripts::
# 2 "data/maps/SkyPillar_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AT_Top
	.byte 0


AT_Top::
# 12 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_8
# 13 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_PLACED_STEEL_SPHERE, AT_Top_2
AT_Top_1:
# 16 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_PLACED_VERDANT_SPHERE, AT_Top_5
AT_Top_4:
# 19 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_PLACED_STONE_SPHERE, AT_Top_8
AT_Top_7:
	checkitem ITEM_MEGA_RING
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Top_11
AT_Top_10:
# 25 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, AT_Top_14
AT_Top_13:
# 28 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_6, 1
	end

AT_Top_2:
# 14 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_7
	goto AT_Top_1

AT_Top_5:
# 17 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_6
	goto AT_Top_4

AT_Top_8:
# 20 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_5
	goto AT_Top_7

AT_Top_11:
# 23 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_1
	goto AT_Top_10

AT_Top_14:
# 26 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
	goto AT_Top_13


AT_Pedestal_Stone::
# 33 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Pedestal_Stone_3
AT_Pedestal_Stone_1:
# 48 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end

AT_Pedestal_Stone_2:
# 34 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 35 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text2, MSGBOX_YESNO
# 36 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Pedestal_Stone_7
# 40 "data/maps/SkyPillar_Top/scripts.pory"
	removeitem ITEM_STONE_SPHERE
# 41 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_PLACED_STONE_SPHERE
# 42 "data/maps/SkyPillar_Top/scripts.pory"
	addobject 8
# 43 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 5
# 44 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox PlacedStoneSphere, MSGBOX_SIGN
# 45 "data/maps/SkyPillar_Top/scripts.pory"
	call CheckSphereEvent
	end

AT_Pedestal_Stone_3:
	checkitem ITEM_STONE_SPHERE
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Pedestal_Stone_2
	goto AT_Pedestal_Stone_1

AT_Pedestal_Stone_7:
# 37 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end


AT_Pedestal_SteelSphere::
# 53 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_SteelSphere_Text, MSGBOX_SIGN
	return


AT_Pedestal_StoneSphere::
# 56 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_StoneSphere_Text, MSGBOX_SIGN
	return


AT_Pedestal_VerdantSphere::
# 59 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_VerdantSphere_Text, MSGBOX_SIGN
	return


AT_Pedestal_Steel::
# 63 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Pedestal_Steel_3
AT_Pedestal_Steel_1:
# 78 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end

AT_Pedestal_Steel_2:
# 64 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 65 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text2, MSGBOX_YESNO
# 66 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Pedestal_Steel_7
# 70 "data/maps/SkyPillar_Top/scripts.pory"
	removeallitem ITEM_STEEL_SPHERE
# 71 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_PLACED_STEEL_SPHERE
# 72 "data/maps/SkyPillar_Top/scripts.pory"
	addobject 6
# 73 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 3
# 74 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox PlacedSteelSphere, MSGBOX_SIGN
# 75 "data/maps/SkyPillar_Top/scripts.pory"
	call CheckSphereEvent
	end

AT_Pedestal_Steel_3:
	checkitem ITEM_STEEL_SPHERE
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Pedestal_Steel_2
	goto AT_Pedestal_Steel_1

AT_Pedestal_Steel_7:
# 67 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end


AT_Pedestal_Verdant::
# 83 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Pedestal_Verdant_3
AT_Pedestal_Verdant_1:
# 98 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text, MSGBOX_SIGN
	end

AT_Pedestal_Verdant_2:
# 84 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 85 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox AT_Pedestal_Text2, MSGBOX_YESNO
# 86 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Pedestal_Verdant_7
# 90 "data/maps/SkyPillar_Top/scripts.pory"
	removeitem ITEM_VERDANT_SPHERE
# 91 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_PLACED_VERDANT_SPHERE
# 92 "data/maps/SkyPillar_Top/scripts.pory"
	addobject 7
# 93 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 4
# 94 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox PlacedVerdantSphere, MSGBOX_SIGN
# 95 "data/maps/SkyPillar_Top/scripts.pory"
	call CheckSphereEvent
	end

AT_Pedestal_Verdant_3:
	checkitem ITEM_VERDANT_SPHERE
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Pedestal_Verdant_2
	goto AT_Pedestal_Verdant_1

AT_Pedestal_Verdant_7:
# 87 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end


CheckSphereEvent::
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_PLACED_STEEL_SPHERE, CheckSphereEvent_2
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_PLACED_STONE_SPHERE, CheckSphereEvent_2
# 103 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_PLACED_VERDANT_SPHERE, CheckSphereEvent_2
# 106 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 107 "data/maps/SkyPillar_Top/scripts.pory"
	getplayerxy VAR_TEMP_7, VAR_TEMP_8
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 9 -1
	goto_if_eq CheckSphereEvent_51
CheckSphereEvent_49:
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 9 + 1
	goto_if_eq CheckSphereEvent_48
CheckSphereEvent_46:
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 9
	goto_if_eq CheckSphereEvent_45
CheckSphereEvent_43:
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 9
	goto_if_eq CheckSphereEvent_42
CheckSphereEvent_40:
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 11 -1
	goto_if_eq CheckSphereEvent_39
CheckSphereEvent_37:
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 11 + 1
	goto_if_eq CheckSphereEvent_36
CheckSphereEvent_34:
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 11
	goto_if_eq CheckSphereEvent_33
CheckSphereEvent_31:
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 11
	goto_if_eq CheckSphereEvent_30
CheckSphereEvent_28:
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 13 -1
	goto_if_eq CheckSphereEvent_27
CheckSphereEvent_25:
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 13 + 1
	goto_if_eq CheckSphereEvent_24
CheckSphereEvent_22:
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_7, 13
	goto_if_eq CheckSphereEvent_21
CheckSphereEvent_20:
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_11
CheckSphereEvent_8:
# 144 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 145 "data/maps/SkyPillar_Top/scripts.pory"
	fadeoutbgm 0
# 146 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 147 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_ORB
# 148 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 6
# 149 "data/maps/SkyPillar_Top/scripts.pory"
	addobject 10
# 150 "data/maps/SkyPillar_Top/scripts.pory"
	addobject 9
# 151 "data/maps/SkyPillar_Top/scripts.pory"
	addobject 11
# 152 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 153 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 6
# 154 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 155 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_VIRIZION, CRY_MODE_NORMAL
# 156 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 157 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_TERRAKION, CRY_MODE_NORMAL
# 158 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 159 "data/maps/SkyPillar_Top/scripts.pory"
	playmoncry SPECIES_COBALION, CRY_MODE_NORMAL
# 160 "data/maps/SkyPillar_Top/scripts.pory"
	waitmoncry
# 161 "data/maps/SkyPillar_Top/scripts.pory"
	delay 60
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 11, CheckSphereEvent_Movement_12
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 9, CheckSphereEvent_Movement_13
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 10, CheckSphereEvent_Movement_14
# 165 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BIKE_HOP
# 166 "data/maps/SkyPillar_Top/scripts.pory"
	delay 16
# 167 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BIKE_HOP
# 168 "data/maps/SkyPillar_Top/scripts.pory"
	delay 16
# 169 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BIKE_HOP
# 170 "data/maps/SkyPillar_Top/scripts.pory"
	delay 16
# 171 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BIKE_HOP
# 172 "data/maps/SkyPillar_Top/scripts.pory"
	delay 16
# 173 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BIKE_HOP
# 174 "data/maps/SkyPillar_Top/scripts.pory"
	delay 16
# 175 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_BIKE_HOP
# 176 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 11
# 177 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 9
# 178 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 10
# 179 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 11
# 180 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 9
# 181 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 10
# 182 "data/maps/SkyPillar_Top/scripts.pory"
	fadeinbgm 0
# 183 "data/maps/SkyPillar_Top/scripts.pory"
	delay 120
# 184 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 4
	end

CheckSphereEvent_2:
	return

CheckSphereEvent_9:
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_0
	goto CheckSphereEvent_8

CheckSphereEvent_10:
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_1
	goto CheckSphereEvent_8

CheckSphereEvent_11:
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_2
	goto CheckSphereEvent_8

CheckSphereEvent_12:
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_3
	goto CheckSphereEvent_8

CheckSphereEvent_13:
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_4
	goto CheckSphereEvent_8

CheckSphereEvent_14:
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_5
	goto CheckSphereEvent_8

CheckSphereEvent_15:
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_6
	goto CheckSphereEvent_8

CheckSphereEvent_16:
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_7
	goto CheckSphereEvent_8

CheckSphereEvent_17:
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_8
	goto CheckSphereEvent_8

CheckSphereEvent_18:
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_9
	goto CheckSphereEvent_8

CheckSphereEvent_19:
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 0xFF, CheckSphereEvent_Movement_10
	goto CheckSphereEvent_8

CheckSphereEvent_21:
# 138 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7 -1
	goto_if_eq CheckSphereEvent_19
	goto CheckSphereEvent_20

CheckSphereEvent_24:
# 135 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_18
	goto CheckSphereEvent_22

CheckSphereEvent_27:
# 132 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_17
	goto CheckSphereEvent_25

CheckSphereEvent_30:
# 129 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 8 + 1
	goto_if_eq CheckSphereEvent_16
	goto CheckSphereEvent_28

CheckSphereEvent_33:
# 126 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 8 -1
	goto_if_eq CheckSphereEvent_15
	goto CheckSphereEvent_31

CheckSphereEvent_36:
# 123 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 8
	goto_if_eq CheckSphereEvent_14
	goto CheckSphereEvent_34

CheckSphereEvent_39:
# 120 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 8
	goto_if_eq CheckSphereEvent_13
	goto CheckSphereEvent_37

CheckSphereEvent_42:
# 117 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7 + 1
	goto_if_eq CheckSphereEvent_12
	goto CheckSphereEvent_40

CheckSphereEvent_45:
# 114 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7 -1
	goto_if_eq CheckSphereEvent_11
	goto CheckSphereEvent_43

CheckSphereEvent_48:
# 111 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_10
	goto CheckSphereEvent_46

CheckSphereEvent_51:
# 108 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_TEMP_8, 7
	goto_if_eq CheckSphereEvent_9
	goto CheckSphereEvent_49


AT_TopTrigger1::
# 268 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 1
# 269 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger2::
# 271 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 2
# 272 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger3::
# 274 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 3
# 275 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger4::
# 277 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 4
# 278 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger5::
# 280 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 5
# 281 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopTrigger6::
# 283 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_TEMP_5, 6
# 284 "data/maps/SkyPillar_Top/scripts.pory"
	goto AT_TopEvent
	return


AT_TopEvent::
# 287 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 288 "data/maps/SkyPillar_Top/scripts.pory"
	switch VAR_TEMP_5
# 289 "data/maps/SkyPillar_Top/scripts.pory"
	case 1, AT_TopEvent_3
# 292 "data/maps/SkyPillar_Top/scripts.pory"
	case 2, AT_TopEvent_4
# 295 "data/maps/SkyPillar_Top/scripts.pory"
	case 3, AT_TopEvent_5
# 298 "data/maps/SkyPillar_Top/scripts.pory"
	case 4, AT_TopEvent_6
# 301 "data/maps/SkyPillar_Top/scripts.pory"
	case 5, AT_TopEvent_7
# 304 "data/maps/SkyPillar_Top/scripts.pory"
	case 6, AT_TopEvent_8
AT_TopEvent_1:
# 308 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 309 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement OBJ_EVENT_ID_NPC_FOLLOWER
# 310 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 311 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, TurnKorrina
# 312 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 313 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 314 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox YouTwoMadeIt
# 315 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 316 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, KorrinaGoesToRival
# 317 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 318 "data/maps/SkyPillar_Top/scripts.pory"
	delay 100
# 319 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, KorrinaGoesToPlayer
# 320 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 321 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 322 "data/maps/SkyPillar_Top/scripts.pory"
	giveitem ITEM_MEGA_RING
# 323 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_TEMP_1
# 324 "data/maps/SkyPillar_Top/scripts.pory"
	waitfanfare
# 325 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 326 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 327 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 2, KorrinaGoesBack
# 328 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 329 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox IDontHaveStones
# 330 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ReturnToGym
# 331 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 332 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_TO_BLACK
# 333 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 334 "data/maps/SkyPillar_Top/scripts.pory"
	removeobject 2
# 335 "data/maps/SkyPillar_Top/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 336 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 337 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Walk1Left
# 338 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 339 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 340 "data/maps/SkyPillar_Top/scripts.pory"
	checkplayergender
# 341 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq AT_TopEvent_10
# 345 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LetsGoMeetDadMay
AT_TopEvent_9:
# 347 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 348 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_HIDE_LIBRARY_BIRCH, AT_TopEvent_14
AT_TopEvent_13:
# 361 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_HM02
# 362 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_TopEvent_17
AT_TopEvent_16:
# 370 "data/maps/SkyPillar_Top/scripts.pory"
	delay 10
# 371 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_WalkInPlaceFasterDown
# 372 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 373 "data/maps/SkyPillar_Top/scripts.pory"
	delay 50
# 374 "data/maps/SkyPillar_Top/scripts.pory"
	setfieldeffectargument 0, 1
# 375 "data/maps/SkyPillar_Top/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 376 "data/maps/SkyPillar_Top/scripts.pory"
	delay 15
# 377 "data/maps/SkyPillar_Top/scripts.pory"
	destroyfollowernpc
# 378 "data/maps/SkyPillar_Top/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 379 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 380 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
# 381 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_KORRINA_LEAVESGYM
# 382 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 383 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_HIDE_LAB_RIVAL
# 384 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_HIDE_LIBRARY_BIRCH
# 385 "data/maps/SkyPillar_Top/scripts.pory"
	clearflag FLAG_PARTNER_HEALS
# 386 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_MAN3
# 387 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR2_WOMAN5
# 388 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_PSYCHIC
# 389 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_2F_TR1_MAN5
# 390 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_M
# 391 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR1_EXPERT_F
# 392 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_HEXMANIAC
# 393 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_3F_TR2_PSYCHICF
# 394 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_BLACKBELT
# 395 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR1_HEXMANIAC
# 396 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_LASS
# 397 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR2_YOUNGSTER
# 398 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BATTLEGIRL
# 399 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_4F_TR3_BLACKBELT
# 400 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_M
# 401 "data/maps/SkyPillar_Top/scripts.pory"
	settrainerflag TRAINER_AT_5F_COOLTRAINER_F
# 402 "data/maps/SkyPillar_Top/scripts.pory"
	delay 30
# 403 "data/maps/SkyPillar_Top/scripts.pory"
	release
# 404 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_unset FLAG_Q33_PROF_BIRCH_MEGASTONE_START, AT_TopEvent_24
AT_TopEvent_23:
	end

AT_TopEvent_3:
# 290 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement1
# 291 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AT_Top_Movement1Follower
	goto AT_TopEvent_1

AT_TopEvent_4:
# 293 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement2
# 294 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AT_Top_Movement2Follower
	goto AT_TopEvent_1

AT_TopEvent_5:
# 296 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
# 297 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AT_Top_Movement3Follower
	goto AT_TopEvent_1

AT_TopEvent_6:
# 299 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement4
# 300 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AT_Top_Movement4Follower
	goto AT_TopEvent_1

AT_TopEvent_7:
# 302 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement5
# 303 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AT_Top_Movement5Follower
	goto AT_TopEvent_1

AT_TopEvent_8:
# 305 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AT_Top_Movement6
# 306 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, AT_Top_Movement6Follower
	goto AT_TopEvent_1

AT_TopEvent_10:
# 342 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LetsGoMeetDadBrendan
	goto AT_TopEvent_9

AT_TopEvent_14:
# 349 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 350 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_ExclamationMark
# 351 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 352 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 353 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq AT_TopEvent_20
# 357 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox YouMetDadMay
AT_TopEvent_19:
# 359 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
	goto AT_TopEvent_13

AT_TopEvent_17:
# 363 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 364 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, Common_Movement_QuestionMark
# 365 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 366 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 367 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox NotHaveFly
# 368 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
	goto AT_TopEvent_16

AT_TopEvent_20:
# 354 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox YouMetDadBrendan
	goto AT_TopEvent_19

AT_TopEvent_24:
# 405 "data/maps/SkyPillar_Top/scripts.pory"
	startquest FLAG_Q33_PROF_BIRCH_MEGASTONE_START
# 406 "data/maps/SkyPillar_Top/scripts.pory"
	special ShowJournalPopupAdd
	goto AT_TopEvent_23


# 504 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement1:
# 505 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 506 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 507 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 508 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 510 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement2:
# 511 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 512 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 512 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 513 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 514 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 516 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement4:
# 517 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 518 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 518 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 519 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 520 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 522 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement5:
# 523 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 524 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 525 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 526 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 528 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement6:
# 529 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 530 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 531 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 532 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 534 "data/maps/SkyPillar_Top/scripts.pory"
TurnKorrina:
# 535 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 535 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 536 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 538 "data/maps/SkyPillar_Top/scripts.pory"
KorrinaGoesToRival:
# 539 "data/maps/SkyPillar_Top/scripts.pory"
	walk_down
# 540 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 541 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 541 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 542 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 544 "data/maps/SkyPillar_Top/scripts.pory"
KorrinaGoesToPlayer:
# 545 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 545 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 546 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 546 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 547 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 549 "data/maps/SkyPillar_Top/scripts.pory"
KorrinaGoesBack:
# 550 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 551 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 552 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 552 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_faster_down
# 553 "data/maps/SkyPillar_Top/scripts.pory"
	face_down
	step_end

# 556 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement1Follower:
# 557 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 557 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 558 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 559 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 560 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 562 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement2Follower:
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 563 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 564 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 565 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 566 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 568 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement3Follower:
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 569 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 570 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 571 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 572 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 574 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement4Follower:
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 575 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 576 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 578 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement5Follower:
# 579 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 579 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 580 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 580 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 581 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 582 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

# 584 "data/maps/SkyPillar_Top/scripts.pory"
AT_Top_Movement6Follower:
# 585 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 585 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 586 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 587 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 588 "data/maps/SkyPillar_Top/scripts.pory"
	step_end

AT_Custodian::
# 592 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 593 "data/maps/SkyPillar_Top/scripts.pory"
	faceplayer
# 594 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 5
	goto_if_eq AT_Custodian_2
# 598 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 4
	goto_if_eq AT_Custodian_5
# 604 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 3
	goto_if_eq AT_Custodian_8
	checkitem ITEM_VERDANT_SPHERE
# 0 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Custodian_11
# 623 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 2
	goto_if_eq AT_Custodian_14
# 627 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_SPHERES_FOUND, 1
	goto_if_eq AT_Custodian_17
# 644 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ImTheCaretaker
# 645 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 646 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_STONE_SPHERE
# 647 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AT_Custodian_20
AT_Custodian_19:
# 656 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

AT_Custodian_2:
# 595 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox TrackTheGuardiansShort, MSGBOX_NPC
	end

AT_Custodian_5:
# 599 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox TrackTheGuardians
# 600 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox TrackTheGuardians2, MSGBOX_NPC
# 601 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 5
	end

AT_Custodian_8:
# 605 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox PutSpheresInPlace, MSGBOX_NPC
# 606 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject 1, DIR_NORTH
	end

AT_Custodian_11:
# 610 "data/maps/SkyPillar_Top/scripts.pory"
	waitse
# 611 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 612 "data/maps/SkyPillar_Top/scripts.pory"
	safefollow
# 613 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 614 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 615 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 616 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ThatsVerdantSphere
# 617 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 3
# 618 "data/maps/SkyPillar_Top/scripts.pory"
	release
# 619 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
# 620 "data/maps/SkyPillar_Top/scripts.pory"
	turnobject 1, DIR_NORTH
	end

AT_Custodian_14:
# 624 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LookForVerdantSphere, MSGBOX_NPC
	end

AT_Custodian_17:
# 628 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_STEEL_SPHERE
# 629 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AT_Custodian_23
# 633 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 634 "data/maps/SkyPillar_Top/scripts.pory"
	safefollow
# 635 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 636 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 637 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 638 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ThatsSteelSphere
# 639 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 2
# 640 "data/maps/SkyPillar_Top/scripts.pory"
	release
# 641 "data/maps/SkyPillar_Top/scripts.pory"
	closemessage
	end

AT_Custodian_20:
# 648 "data/maps/SkyPillar_Top/scripts.pory"
	playse SE_PIN
# 649 "data/maps/SkyPillar_Top/scripts.pory"
	safefollow
# 650 "data/maps/SkyPillar_Top/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 651 "data/maps/SkyPillar_Top/scripts.pory"
	waitmovement 0
# 652 "data/maps/SkyPillar_Top/scripts.pory"
	delay 48
# 653 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox ThatsStoneSphere
# 654 "data/maps/SkyPillar_Top/scripts.pory"
	setvar VAR_SPHERES_FOUND, 1
	goto AT_Custodian_19

AT_Custodian_23:
# 630 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox LookForSteelSphere, MSGBOX_NPC
	end


OddSensation::
# 715 "data/maps/SkyPillar_Top/scripts.pory"
	goto_if_set FLAG_STEELSPHERE_CLUE, OddSensation_2
# 719 "data/maps/SkyPillar_Top/scripts.pory"
	checkitem ITEM_STONE_SPHERE
# 720 "data/maps/SkyPillar_Top/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq OddSensation_5
OddSensation_4:
# 725 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

OddSensation_2:
# 716 "data/maps/SkyPillar_Top/scripts.pory"
	release
	end

OddSensation_5:
# 721 "data/maps/SkyPillar_Top/scripts.pory"
	lock
# 722 "data/maps/SkyPillar_Top/scripts.pory"
	msgbox OddSensation_Text
# 723 "data/maps/SkyPillar_Top/scripts.pory"
	setflag FLAG_STEELSPHERE_CLUE
	goto OddSensation_4


# 109 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_0:
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 109 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_up
	step_end

# 112 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_1:
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 112 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 115 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_2:
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 115 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_up
	step_end

# 118 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_3:
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 118 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_4:
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 121 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 124 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_5:
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 124 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 127 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_6:
# 127 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 130 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_7:
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	walk_right
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 130 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 133 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_8:
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 133 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 136 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_9:
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 136 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_up
	step_end

# 139 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_10:
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 139 "data/maps/SkyPillar_Top/scripts.pory"
	walk_in_place_up
	step_end

# 142 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_11:
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	walk_left
# 142 "data/maps/SkyPillar_Top/scripts.pory"
	walk_up
	step_end

# 162 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_12:
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 162 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
	step_end

# 163 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_13:
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_right
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 163 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_left
	step_end

# 164 "data/maps/SkyPillar_Top/scripts.pory"
CheckSphereEvent_Movement_14:
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_right
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_right
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
# 164 "data/maps/SkyPillar_Top/scripts.pory"
	walk_fast_down
	step_end

AT_Pedestal_Text::
# 188 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's a small pedestal, which looks\n"
	.string "like it's meant to house something.$"

AT_Pedestal_Text2::
# 192 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's a small pedestal, which looks\n"
	.string "like it's meant to house something.\p"
	.string "Try placing one of the spheres on\n"
	.string "the pedestal?$"

PlacedStoneSphere::
# 198 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER} placed the Stone Sphere\n"
	.string "on the pedestal.$"

PlacedSteelSphere::
# 202 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER} placed the Steel Sphere\n"
	.string "on the pedestal.$"

PlacedVerdantSphere::
# 206 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{PLAYER} placed the Verdant Sphere\n"
	.string "on the pedestal.$"

AT_Pedestal_SteelSphere_Text::
# 210 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's a small pedestal, with\n"
	.string "the Steel Sphere placed on top.$"

AT_Pedestal_StoneSphere_Text::
# 214 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's a small pedestal, with\n"
	.string "the Stone Sphere placed on top.$"

AT_Pedestal_VerdantSphere_Text::
# 218 "data/maps/SkyPillar_Top/scripts.pory"
	.string "It's a small pedestal, with\n"
	.string "the Verdant Sphere placed on top.$"

ThatsVerdantSphere::
# 222 "data/maps/SkyPillar_Top/scripts.pory"
	.string "That Verdant Sphere…\p"
	.string "Yes, this is undoubtedly another\n"
	.string "fragment of the Protectors!\p"
	.string "Does this mean that you've managed to\n"
	.string "gather all the fragments?\p"
	.string "Astounding!\p"
	.string "Hurry, place the spheres on the\n"
	.string "pedestals!\p"
	.string "We are about to witness the event\n"
	.string "of a lifetime!$"

PutSpheresInPlace::
# 234 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Hurry, place the spheres on the\n"
	.string "pedestals!\p"
	.string "We are about to witness the event\n"
	.string "of a lifetime!$"

TrackTheGuardians::
# 240 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I cannot believe it…\p"
	.string "Those were undoubtedly\n"
	.string "the Protectors!\p"
	.string "I never imagined they'd ever grace\n"
	.string "our world with their presence again!$"

TrackTheGuardians2::
# 247 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Unfortunately, I don't have any\n"
	.string "clue about the new whereabouts of\l"
	.string "the Protectors.\p"
	.string "I doubt they've slinked back to the\n"
	.string "caves you found the spheres from, but,\l"
	.string "considering those places hold some\l"
	.string "sentimental value to them, I imagine\l"
	.string "they'd probably end up looking for\l"
	.string "high vantage points somewhere close by.$"

TrackTheGuardiansShort::
# 258 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Unfortunately, I don't have any\n"
	.string "clue about the new whereabouts of\l"
	.string "the Protectors.\p"
	.string "If I were you, I'd try looking for\n"
	.string "a high vantage point near the places\l"
	.string "you originally found the spheres at.$"

YouTwoMadeIt::
# 409 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Korrina: Oh hey, you two actually\n"
	.string "made it to the top!\p"
	.string "Sorry about not mentioning those\n"
	.string "trainers down there!\p"
	.string "After our gym battles, I wanted to\n"
	.string "see if you two were actually that\l"
	.string "strong or if you just got lucky.\p"
	.string "Glad to see it was the former!\p"
	.string "Anyways, the reason I called you here\n"
	.string "was so I could give you these:\l"
	.string "the Mega Rings!\p"
	.string "These rings are the key ingredient to\n"
	.string "a phenomena called “Mega Evolution,”\l"
	.string "which both of you got to see me\l"
	.string "perform during our battles.\p"
	.string "When I see a great trainer, I like\n"
	.string "to gift them with one of these.\p"
	.string "The only problem is, they're kinda rare\n"
	.string "here in Sinko.\p"
	.string "That's why I can only afford to give\n"
	.string "them to the truly expectional trainers.\p"
	.string "People like you!$"

IDontHaveStones::
# 432 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Korrina: Now, in order to have your\n"
	.string "Pokémon Mega Evolve, they must be\l"
	.string "holding onto a specific Mega Stone.\p"
	.string "Unfortunately, these stones are\n"
	.string "like, super rare!\p"
	.string "I have no idea where one would even\n"
	.string "begin to search for one.\p"
	.string "I hate having to do this after you've\n"
	.string "come so far, but you'll need to look\l"
	.string "for those stones yourself.\p"
	.string "But anyways, to Mega Evolve a Pokémon,\n"
	.string "once you are in battle and you're\l"
	.string "deciding on which move your Pokémon\l"
	.string "should use, hit the START button and\l"
	.string "you should see the Mega Stone light up!\p"
	.string "Boom!\n"
	.string "As simple as that!\p"
	.string "Be careful you don't overexert your\n"
	.string "Pokémon though!\p"
	.string "Mega Evolution takes a huge amount of\n"
	.string "energy, causing your Pokémon to lose\l"
	.string "stamina rapidly!$"

ReturnToGym::
# 455 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Korrina: Okay!\p"
	.string "I know that introduction was kinda\n"
	.string "short and fast, but I'm sure you two\l"
	.string "can figure it out!\p"
	.string "I am a Gym Leader after all, and you\n"
	.string "never know when another challenger is\l"
	.string "gonna show up at the gym, asking to\l"
	.string "challenge the leader.\p"
	.string "So, I must bid you two adieu!$"

LetsGoMeetDadBrendan::
# 465 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Hey {PLAYER}, let's go ask\n"
	.string "my dad!\p"
	.string "Since he's a Pokémon Professor, I'm\n"
	.string "sure he knows something about this!$"

LetsGoMeetDadMay::
# 471 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}, maybe we ought\n"
	.string "to go and ask my dad?\p"
	.string "Since he's a Pokémon Professor, I bet\n"
	.string "he can point us in the right direction!$"

YouMetDadBrendan::
# 477 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: You met dad in the library?\n"
	.string "And he told to come and visit?\p"
	.string "Well, all the more reason I guess.\n"
	.string "Come on, let's go!$"

YouMetDadMay::
# 483 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Oh?\p"
	.string "You met him in the library?\n"
	.string "And he told us to come and visit?\p"
	.string "Well, what are we waiting for?\n"
	.string "Let's go!$"

NotHaveFly::
# 490 "data/maps/SkyPillar_Top/scripts.pory"
	.string "{RIVAL}: Wait…\p"
	.string "{PLAYER}, Don't you have a Pokémon\n"
	.string "that can fly you across the region?\p"
	.string "… … … … …\p"
	.string "Well this is a bit awkward…\n"
	.string "My Pokémon can only carry one…\p"
	.string "If you want your Pokémon to learn to\n"
	.string "fly you around, I recommend you\l"
	.string "visit Windplume Valley.\l"
	.string "It's located next to Aldeleaf City.\p"
	.string "Anyway, see you back at the lab!$"

ImTheCaretaker::
# 660 "data/maps/SkyPillar_Top/scripts.pory"
	.string "I am the current caretaker of\n"
	.string "this tower.\p"
	.string "It is said that this tower was erected\n"
	.string "by a now lost civilization, to work as\l"
	.string "a beacon to guide home the Protectors.$"

ThatsStoneSphere::
# 667 "data/maps/SkyPillar_Top/scripts.pory"
	.string "That Stone Sphere you are carrying,\n"
	.string "may I see it?\p"
	.string "… … … … …\p"
	.string "Yes, this is undoubtedly something\n"
	.string "left behind by the Protectors!\p"
	.string "Its rightful place is here on the\n"
	.string "pedestals, but according to legend,\l"
	.string "Its presence should allow the holder\l"
	.string "to sense the location of other such\l"
	.string "spheres.\p"
	.string "Please, seek the other spheres!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!$"

LookForSteelSphere::
# 682 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, seek the other spheres!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!\p"
	.string "I would try visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

ThatsSteelSphere::
# 690 "data/maps/SkyPillar_Top/scripts.pory"
	.string "That Steel Sphere…\p"
	.string "Yes, this is undoubtedly another\n"
	.string "fragment of the Protectors!\p"
	.string "I don't know how you're doing it,\n"
	.string "but thanks to your efforts, we are\l"
	.string "closer to bringing back the Protectors\l"
	.string "than ever before!\p"
	.string "Please, I urge you,\n"
	.string "seek the final sphere!\p"
	.string "If you need more guidance, I would\n"
	.string "suggest visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

LookForVerdantSphere::
# 705 "data/maps/SkyPillar_Top/scripts.pory"
	.string "Please, seek the final sphere!\p"
	.string "Maybe one day, we will finally be able\n"
	.string "to witness the Protectors in person!\p"
	.string "I would try visiting the library.\p"
	.string "There's bound to be a research paper\n"
	.string "or something related to this topic.$"

OddSensation_Text::
# 729 "data/maps/SkyPillar_Top/scripts.pory"
	.string "You feel an odd sensation emanating\n"
	.string "from the Stone Sphere.$"
