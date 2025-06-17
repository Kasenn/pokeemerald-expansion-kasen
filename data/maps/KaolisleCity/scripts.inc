KaolisleCity_MapScripts::
# 2 "data/maps/KaolisleCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RandomizeBrother
	.byte 0


RandomizeBrother::
# 12 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_KAOLISLE_BIRDS, 100
	goto_if_lt RandomizeBrother_2
RandomizeBrother_1:
# 19 "data/maps/KaolisleCity/scripts.pory"
	switch VAR_KAOLISLE_BIRDS
# 20 "data/maps/KaolisleCity/scripts.pory"
	case 101, RandomizeBrother_6
# 22 "data/maps/KaolisleCity/scripts.pory"
	case 102, RandomizeBrother_7
# 24 "data/maps/KaolisleCity/scripts.pory"
	case 103, RandomizeBrother_8
# 27 "data/maps/KaolisleCity/scripts.pory"
	case 104, RandomizeBrother_9
# 29 "data/maps/KaolisleCity/scripts.pory"
	case 105, RandomizeBrother_10
# 32 "data/maps/KaolisleCity/scripts.pory"
	case 106, RandomizeBrother_11
# 35 "data/maps/KaolisleCity/scripts.pory"
	case 107, RandomizeBrother_12
# 39 "data/maps/KaolisleCity/scripts.pory"
	case 108, RandomizeBrother_13
# 41 "data/maps/KaolisleCity/scripts.pory"
	case 109, RandomizeBrother_14
# 44 "data/maps/KaolisleCity/scripts.pory"
	case 110, RandomizeBrother_15
# 47 "data/maps/KaolisleCity/scripts.pory"
	case 111, RandomizeBrother_16
# 51 "data/maps/KaolisleCity/scripts.pory"
	case 112, RandomizeBrother_17
# 54 "data/maps/KaolisleCity/scripts.pory"
	case 113, RandomizeBrother_18
# 58 "data/maps/KaolisleCity/scripts.pory"
	case 114, RandomizeBrother_19
# 62 "data/maps/KaolisleCity/scripts.pory"
	case 115, RandomizeBrother_20
# 67 "data/maps/KaolisleCity/scripts.pory"
	case 116, RandomizeBrother_21
# 69 "data/maps/KaolisleCity/scripts.pory"
	case 117, RandomizeBrother_22
# 72 "data/maps/KaolisleCity/scripts.pory"
	case 118, RandomizeBrother_23
# 75 "data/maps/KaolisleCity/scripts.pory"
	case 119, RandomizeBrother_24
# 79 "data/maps/KaolisleCity/scripts.pory"
	case 120, RandomizeBrother_25
# 82 "data/maps/KaolisleCity/scripts.pory"
	case 121, RandomizeBrother_26
# 86 "data/maps/KaolisleCity/scripts.pory"
	case 122, RandomizeBrother_27
# 90 "data/maps/KaolisleCity/scripts.pory"
	case 123, RandomizeBrother_28
# 95 "data/maps/KaolisleCity/scripts.pory"
	case 124, RandomizeBrother_29
# 98 "data/maps/KaolisleCity/scripts.pory"
	case 125, RandomizeBrother_30
# 102 "data/maps/KaolisleCity/scripts.pory"
	case 126, RandomizeBrother_31
# 106 "data/maps/KaolisleCity/scripts.pory"
	case 127, RandomizeBrother_32
# 111 "data/maps/KaolisleCity/scripts.pory"
	case 128, RandomizeBrother_33
# 115 "data/maps/KaolisleCity/scripts.pory"
	case 129, RandomizeBrother_34
# 120 "data/maps/KaolisleCity/scripts.pory"
	case 130, RandomizeBrother_35
# 125 "data/maps/KaolisleCity/scripts.pory"
	case 131, RandomizeBrother_36
RandomizeBrother_4:
# 132 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_VISITED_KAOLISLE
# 133 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, RandomizeBrother_38
# 136 "data/maps/KaolisleCity/scripts.pory"
	random 8
# 137 "data/maps/KaolisleCity/scripts.pory"
	copyvar VAR_TEMP_3, VAR_RESULT
# 138 "data/maps/KaolisleCity/scripts.pory"
	switch VAR_TEMP_3
# 139 "data/maps/KaolisleCity/scripts.pory"
	case 0, RandomizeBrother_41
# 142 "data/maps/KaolisleCity/scripts.pory"
	case 1, RandomizeBrother_42
# 145 "data/maps/KaolisleCity/scripts.pory"
	case 2, RandomizeBrother_43
# 148 "data/maps/KaolisleCity/scripts.pory"
	case 3, RandomizeBrother_44
# 151 "data/maps/KaolisleCity/scripts.pory"
	case 4, RandomizeBrother_45
# 154 "data/maps/KaolisleCity/scripts.pory"
	case 5, RandomizeBrother_46
# 157 "data/maps/KaolisleCity/scripts.pory"
	case 6, RandomizeBrother_47
# 160 "data/maps/KaolisleCity/scripts.pory"
	case 7, RandomizeBrother_48
	return

RandomizeBrother_2:
# 13 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
# 14 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 15 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 16 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 17 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
	goto RandomizeBrother_1

RandomizeBrother_6:
# 21 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_7:
# 23 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_8:
# 25 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
# 26 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_9:
# 28 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_10:
# 30 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
# 31 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_11:
# 33 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 34 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_12:
# 36 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
# 37 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 38 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_13:
# 40 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
	goto RandomizeBrother_4

RandomizeBrother_14:
# 42 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
# 43 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
	goto RandomizeBrother_4

RandomizeBrother_15:
# 45 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 46 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_16:
# 48 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 49 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
# 50 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_17:
# 52 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 53 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_18:
# 55 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 56 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 57 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_19:
# 59 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 60 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 61 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_20:
# 63 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 64 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 65 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 66 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_21:
# 68 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
	goto RandomizeBrother_4

RandomizeBrother_22:
# 70 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 71 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_23:
# 73 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 74 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_24:
# 76 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 77 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 78 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_25:
# 80 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 81 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_26:
# 83 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 84 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 85 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_27:
# 87 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 88 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 89 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_28:
# 91 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 92 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 93 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 94 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_29:
# 96 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 97 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
	goto RandomizeBrother_4

RandomizeBrother_30:
# 99 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 100 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 101 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_31:
# 103 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 104 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 105 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_32:
# 107 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 108 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 109 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 110 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_33:
# 112 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 113 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 114 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
	goto RandomizeBrother_4

RandomizeBrother_34:
# 116 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 117 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 118 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 119 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_35:
# 121 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 122 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 123 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 124 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
	goto RandomizeBrother_4

RandomizeBrother_36:
# 126 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_9
# 127 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_8
# 128 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_7
# 129 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_6
# 130 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_5
	goto RandomizeBrother_4

RandomizeBrother_38:
	end

RandomizeBrother_41:
# 140 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 33, 3
# 141 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_42:
# 143 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 29, 26
# 144 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_43:
# 146 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 19, 43
# 147 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_44:
# 149 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 25, 51
# 150 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_DOWN
	return

RandomizeBrother_45:
# 152 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 53, 52
# 153 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_UP
	return

RandomizeBrother_46:
# 155 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 52, 61
# 156 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
	return

RandomizeBrother_47:
# 158 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 18, 15
# 159 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_LOOK_AROUND
	return

RandomizeBrother_48:
# 161 "data/maps/KaolisleCity/scripts.pory"
	setobjectxyperm 30, 53, 25
# 162 "data/maps/KaolisleCity/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_FACE_RIGHT
	return


Kaolisle_Brother::
# 167 "data/maps/KaolisleCity/scripts.pory"
	lock
# 168 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 169 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_KAOLISLE_BROTHER_INTRO, Kaolisle_Brother_2
Kaolisle_Brother_1:
# 173 "data/maps/KaolisleCity/scripts.pory"
	switch VAR_TEMP_3
# 174 "data/maps/KaolisleCity/scripts.pory"
	case 0, Kaolisle_Brother_6
# 179 "data/maps/KaolisleCity/scripts.pory"
	case 1, Kaolisle_Brother_7
# 181 "data/maps/KaolisleCity/scripts.pory"
	case 2, Kaolisle_Brother_8
# 183 "data/maps/KaolisleCity/scripts.pory"
	case 3, Kaolisle_Brother_9
# 185 "data/maps/KaolisleCity/scripts.pory"
	case 4, Kaolisle_Brother_10
# 187 "data/maps/KaolisleCity/scripts.pory"
	case 5, Kaolisle_Brother_11
# 189 "data/maps/KaolisleCity/scripts.pory"
	case 6, Kaolisle_Brother_12
# 191 "data/maps/KaolisleCity/scripts.pory"
	case 7, Kaolisle_Brother_13
Kaolisle_Brother_4:
	end

Kaolisle_Brother_2:
# 170 "data/maps/KaolisleCity/scripts.pory"
	msgbox Kaolisle_BrotherIntro, MSGBOX_DEFAULT
# 171 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_KAOLISLE_BROTHER_INTRO
	goto Kaolisle_Brother_1

Kaolisle_Brother_6:
# 175 "data/maps/KaolisleCity/scripts.pory"
	turnobject 30, DIR_NORTH
# 176 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_LookingTowardsPearlwood, MSGBOX_DEFAULT
# 177 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 178 "data/maps/KaolisleCity/scripts.pory"
	release
	goto Kaolisle_Brother_4

Kaolisle_Brother_7:
# 180 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_VisitingGym, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_8:
# 182 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_PokeFanClub, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_9:
# 184 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_LesserBeach, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_10:
# 186 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_Hotel, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_11:
# 188 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_GreaterBeach, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_12:
# 190 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_BoringPlace, MSGBOX_NPC
	goto Kaolisle_Brother_4

Kaolisle_Brother_13:
# 192 "data/maps/KaolisleCity/scripts.pory"
	turnobject 30, DIR_EAST
# 193 "data/maps/KaolisleCity/scripts.pory"
	msgbox KB_IslandToTheEast, MSGBOX_DEFAULT
# 194 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 195 "data/maps/KaolisleCity/scripts.pory"
	release
	goto Kaolisle_Brother_4


KaolisleCity_Sailor::
# 274 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Sailor_Text, MSGBOX_NPC
	end


KaolisleCity_NinjaBoy::
# 285 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_NinjaBoy_Text, MSGBOX_NPC
	end


KaolisleCity_Woman2::
# 298 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Woman2_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3::
# 309 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Boy3_Text, MSGBOX_NPC
	end


KaolisleCity_Boy3_Couple::
# 318 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Boy3_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_Lass_Couple::
# 329 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Lass_Couple_Text, MSGBOX_NPC
	end


KaolisleCity_MysteryMan::
# 340 "data/maps/KaolisleCity/scripts.pory"
	checktrainerflag TRAINER_KAOLISLE_CELEBI_TR2
	goto_if 1, KaolisleCity_MysteryMan_2
# 344 "data/maps/KaolisleCity/scripts.pory"
	lock
# 345 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_TEMP_4, KaolisleCity_MysteryMan_5
# 350 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Text, MSGBOX_DEFAULT
# 351 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 352 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Text2, MSGBOX_YESNO
KaolisleCity_MysteryMan_4:
# 354 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_8
# 361 "data/maps/KaolisleCity/scripts.pory"
	call CountGymBadges
# 362 "data/maps/KaolisleCity/scripts.pory"
	switch VAR_RESULT
# 363 "data/maps/KaolisleCity/scripts.pory"
	case 0, KaolisleCity_MysteryMan_12
# 364 "data/maps/KaolisleCity/scripts.pory"
	case 1, KaolisleCity_MysteryMan_12
# 365 "data/maps/KaolisleCity/scripts.pory"
	case 2, KaolisleCity_MysteryMan_12
# 373 "data/maps/KaolisleCity/scripts.pory"
	case 3, KaolisleCity_MysteryMan_13
# 381 "data/maps/KaolisleCity/scripts.pory"
	case 4, KaolisleCity_MysteryMan_14
# 382 "data/maps/KaolisleCity/scripts.pory"
	case 5, KaolisleCity_MysteryMan_14
# 390 "data/maps/KaolisleCity/scripts.pory"
	case 6, KaolisleCity_MysteryMan_15
# 391 "data/maps/KaolisleCity/scripts.pory"
	case 7, KaolisleCity_MysteryMan_15
# 392 "data/maps/KaolisleCity/scripts.pory"
	case 8, KaolisleCity_MysteryMan_15
	return

KaolisleCity_MysteryMan_2:
# 341 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_AfterBattleGossip, MSGBOX_NPC
	end

KaolisleCity_MysteryMan_5:
# 346 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 347 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_TextShort, MSGBOX_YESNO
	goto KaolisleCity_MysteryMan_4

KaolisleCity_MysteryMan_8:
# 355 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Decline, MSGBOX_NPC
# 356 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
# 357 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_4
	end

KaolisleCity_MysteryMan_12:
# 366 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_2Badges, MSGBOX_NPC
# 367 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
# 368 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_17
KaolisleCity_MysteryMan_16:
	end

KaolisleCity_MysteryMan_13:
# 374 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_3Badges, MSGBOX_NPC
# 375 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
# 376 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_20
KaolisleCity_MysteryMan_19:
	end

KaolisleCity_MysteryMan_14:
# 383 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_4Badges, MSGBOX_NPC
# 384 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
# 385 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_23
KaolisleCity_MysteryMan_22:
	end

KaolisleCity_MysteryMan_15:
# 393 "data/maps/KaolisleCity/scripts.pory"
	goto KaolisleCity_MysteryMan_Battle
	return

KaolisleCity_MysteryMan_17:
# 369 "data/maps/KaolisleCity/scripts.pory"
	startquest FLAG_Q20_KAOLISLE_OLD_MAN_START
# 370 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupAdd
	goto KaolisleCity_MysteryMan_16

KaolisleCity_MysteryMan_20:
# 377 "data/maps/KaolisleCity/scripts.pory"
	startquest FLAG_Q20_KAOLISLE_OLD_MAN_START
# 378 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupAdd
	goto KaolisleCity_MysteryMan_19

KaolisleCity_MysteryMan_23:
# 386 "data/maps/KaolisleCity/scripts.pory"
	startquest FLAG_Q20_KAOLISLE_OLD_MAN_START
# 387 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupAdd
	goto KaolisleCity_MysteryMan_22


KaolisleCity_ExpertM::
# 445 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_REVEAL_PEARLSTRING, KaolisleCity_ExpertM_2
KaolisleCity_ExpertM_1:
# 448 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_ExpertM_Text, MSGBOX_NPC
# 449 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_REVEAL_PEARLSTRING
	end

KaolisleCity_ExpertM_2:
# 446 "data/maps/KaolisleCity/scripts.pory"
	clearflag FLAG_OLDMAN_PEARLSTRING
	goto KaolisleCity_ExpertM_1


KaolisleCity_Zigzagoon_Child::
# 467 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Zigzagoon_Child_Text, MSGBOX_NPC
	end


KaolisleCity_OldMan::
# 478 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_OldMan_Text, MSGBOX_NPC
	end


KaolisleCity_Gentleman::
# 489 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Gentleman_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher1::
# 500 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_GOOD_ROD, KaolisleCity_Fisher1_2
# 504 "data/maps/KaolisleCity/scripts.pory"
	checkitem ITEM_LURE
# 505 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleCity_Fisher1_5
# 520 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_QUEST_FOR_GOOD_ROD, KaolisleCity_Fisher1_8
# 528 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher1_Text, MSGBOX_NPC
# 529 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_QUEST_FOR_GOOD_ROD
# 530 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_Q22_KAOLISLE_FISHERMAN_START, KaolisleCity_Fisher1_14
KaolisleCity_Fisher1_13:
	end

KaolisleCity_Fisher1_2:
# 501 "data/maps/KaolisleCity/scripts.pory"
	msgbox HopeYouGetAlotOfFish, MSGBOX_NPC
	end

KaolisleCity_Fisher1_5:
# 506 "data/maps/KaolisleCity/scripts.pory"
	lock
# 507 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 508 "data/maps/KaolisleCity/scripts.pory"
	removeitem ITEM_LURE
# 509 "data/maps/KaolisleCity/scripts.pory"
	msgbox MyLure, MSGBOX_DEFAULT
# 510 "data/maps/KaolisleCity/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 511 "data/maps/KaolisleCity/scripts.pory"
	waitfanfare
# 512 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 513 "data/maps/KaolisleCity/scripts.pory"
	msgbox HopeYouGetAlotOfFish, MSGBOX_NPC
# 514 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_Q22_KAOLISLE_FISHERMAN_START, KaolisleCity_Fisher1_11
KaolisleCity_Fisher1_10:
	end

KaolisleCity_Fisher1_8:
# 521 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher1_Text2, MSGBOX_NPC
# 522 "data/maps/KaolisleCity/scripts.pory"
	goto_if_unset FLAG_Q22_KAOLISLE_FISHERMAN_START, KaolisleCity_Fisher1_17
KaolisleCity_Fisher1_16:
	end

KaolisleCity_Fisher1_11:
# 515 "data/maps/KaolisleCity/scripts.pory"
	completequest FLAG_Q22_KAOLISLE_FISHERMAN_COMPLETE
# 516 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupRemove
	goto KaolisleCity_Fisher1_10

KaolisleCity_Fisher1_14:
# 531 "data/maps/KaolisleCity/scripts.pory"
	startquest FLAG_Q22_KAOLISLE_FISHERMAN_START
# 532 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupAdd
	goto KaolisleCity_Fisher1_13

KaolisleCity_Fisher1_17:
# 523 "data/maps/KaolisleCity/scripts.pory"
	startquest FLAG_Q22_KAOLISLE_FISHERMAN_START
# 524 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupAdd
	goto KaolisleCity_Fisher1_16


KaolisleCity_Fisher2::
# 571 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher2_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher3::
# 582 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher3_Text, MSGBOX_NPC
	end


KaolisleCity_Fisher4::
# 592 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Fisher4_Text, MSGBOX_NPC
	end


KaolisleCity_TriathleteF::
# 605 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TriathleteF_Text, MSGBOX_NPC
	end


KaolisleCity_LittleGirl::
# 615 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_LittleGirl_Text, MSGBOX_NPC
	end


KaolisleCity_Sailor2::
# 624 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Sailor2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing1::
# 636 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberChasing1_Text, MSGBOX_NPC
	end


KaolisleCity_TuberChasing2::
# 647 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberChasing2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberTalking1::
# 655 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_OBTAINED_BEACHBALL, KaolisleCity_TuberTalking1_2
# 659 "data/maps/KaolisleCity/scripts.pory"
	lock
# 660 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 661 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_TEMP_3, KaolisleCity_TuberTalking1_5
# 665 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberTalking1_Text, MSGBOX_DEFAULT
KaolisleCity_TuberTalking1_4:
# 667 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_3
# 668 "data/maps/KaolisleCity/scripts.pory"
	multichoice 23, 0, MULTI_WHICHONEWOULDWIN, 1
# 669 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KaolisleCity_TuberTalking1_9
# 676 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 677 "data/maps/KaolisleCity/scripts.pory"
	playse SE_SUCCESS
# 678 "data/maps/KaolisleCity/scripts.pory"
	msgbox BeachCorrectAnswer, MSGBOX_DEFAULT
# 679 "data/maps/KaolisleCity/scripts.pory"
	giveitem ITEM_DIVE_BALL
# 680 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_OBTAINED_BEACHBALL
# 682 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 683 "data/maps/KaolisleCity/scripts.pory"
	release
	end

KaolisleCity_TuberTalking1_2:
# 656 "data/maps/KaolisleCity/scripts.pory"
	msgbox WasFunGame, MSGBOX_NPC
	end

KaolisleCity_TuberTalking1_5:
# 662 "data/maps/KaolisleCity/scripts.pory"
	msgbox CareToTryAgain, MSGBOX_DEFAULT
	goto KaolisleCity_TuberTalking1_4

KaolisleCity_TuberTalking1_9:
# 670 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 671 "data/maps/KaolisleCity/scripts.pory"
	playse SE_FAILURE
# 672 "data/maps/KaolisleCity/scripts.pory"
	msgbox BeachWrongAnswer, MSGBOX_NPC
	end


KaolisleCity_TuberTalking2::
# 711 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberTalking2_Text, MSGBOX_NPC
	end


KaolisleCity_TuberLearning::
# 719 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_TuberLearning_Text, MSGBOX_NPC
	end


KaolisleCity_SwimTeacher::
# 726 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SwimTeacher_Text, MSGBOX_NPC
	end


KaolisleCity_Father::
# 736 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Father_Text, MSGBOX_NPC
	end


KaolisleCity_Mother::
# 746 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Mother_Text, MSGBOX_NPC
	end


KaolisleCity_Swimmer::
# 757 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Swimmer_Text, MSGBOX_NPC
	end


KaolisleCity_Scott::
# 766 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Scott_Text, MSGBOX_NPC
	end


KaolisleCity_Zigzagoon::
# 780 "data/maps/KaolisleCity/scripts.pory"
	lock
# 781 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 782 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 783 "data/maps/KaolisleCity/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 784 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_Zigzagoon_Text_0, MSGBOX_DEFAULT
# 785 "data/maps/KaolisleCity/scripts.pory"
	waitmoncry
# 786 "data/maps/KaolisleCity/scripts.pory"
	release
	end


KaolisleCity_SignHarbor::
# 791 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignHarbor_Text, MSGBOX_SIGN
	end


KaolisleCity_SignGym::
# 795 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignGym_Text, MSGBOX_SIGN
	end


KaolisleCity_SignHotel::
# 799 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignHotel_Text, MSGBOX_SIGN
	end


KaolisleCity_SignFanClub::
# 803 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignFanClub_Text, MSGBOX_SIGN
	end


KaolisleCity_SignIntro::
# 807 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_SignIntro_Text, MSGBOX_SIGN
	end


Pikipek1::
# 830 "data/maps/KaolisleCity/scripts.pory"
	addvar VAR_KAOLISLE_BIRDS, 1
# 831 "data/maps/KaolisleCity/scripts.pory"
	setvar VAR_TEMP_9, SPECIES_PIKIPEK
# 832 "data/maps/KaolisleCity/scripts.pory"
	goto KaolisleBirdMain
	return


Pikipek2::
# 835 "data/maps/KaolisleCity/scripts.pory"
	addvar VAR_KAOLISLE_BIRDS, 2
# 836 "data/maps/KaolisleCity/scripts.pory"
	setvar VAR_TEMP_9, SPECIES_PIKIPEK
# 837 "data/maps/KaolisleCity/scripts.pory"
	goto KaolisleBirdMain
	return


Pikipek4::
# 840 "data/maps/KaolisleCity/scripts.pory"
	addvar VAR_KAOLISLE_BIRDS, 4
# 841 "data/maps/KaolisleCity/scripts.pory"
	setvar VAR_TEMP_9, SPECIES_PIKIPEK
# 842 "data/maps/KaolisleCity/scripts.pory"
	goto KaolisleBirdMain
	return


Trumbeak8::
# 845 "data/maps/KaolisleCity/scripts.pory"
	addvar VAR_KAOLISLE_BIRDS, 8
# 846 "data/maps/KaolisleCity/scripts.pory"
	setvar VAR_TEMP_9, SPECIES_TRUMBEAK
# 847 "data/maps/KaolisleCity/scripts.pory"
	goto KaolisleBirdMain
	return


Trumbeak16::
# 850 "data/maps/KaolisleCity/scripts.pory"
	addvar VAR_KAOLISLE_BIRDS, 16
# 851 "data/maps/KaolisleCity/scripts.pory"
	setvar VAR_TEMP_9, SPECIES_TRUMBEAK
# 852 "data/maps/KaolisleCity/scripts.pory"
	goto KaolisleBirdMain
	return


KaolisleBirdMain::
# 856 "data/maps/KaolisleCity/scripts.pory"
	lock
# 857 "data/maps/KaolisleCity/scripts.pory"
	faceplayer
# 858 "data/maps/KaolisleCity/scripts.pory"
	waitse
# 859 "data/maps/KaolisleCity/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_9
# 860 "data/maps/KaolisleCity/scripts.pory"
	playmoncry VAR_TEMP_9, CRY_MODE_NORMAL
# 861 "data/maps/KaolisleCity/scripts.pory"
	waitmoncry
# 862 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleBirdMain_Text_0
# 863 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 864 "data/maps/KaolisleCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 865 "data/maps/KaolisleCity/scripts.pory"
	delay 15
# 866 "data/maps/KaolisleCity/scripts.pory"
	msgbox NudgeMon
# 867 "data/maps/KaolisleCity/scripts.pory"
	closemessage
# 868 "data/maps/KaolisleCity/scripts.pory"
	hideobjectat VAR_LAST_TALKED, MAP_KAOLISLE_CITY
# 869 "data/maps/KaolisleCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 870 "data/maps/KaolisleCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 871 "data/maps/KaolisleCity/scripts.pory"
	release
	return


KaolisleCity_MysteryMan_Battle::
# 880 "data/maps/KaolisleCity/scripts.pory"
	checkpartylevel 55
# 881 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_Battle_2
KaolisleCity_MysteryMan_Battle_1:
# 884 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaolisleCity_MysteryMan_Battle_5
# 890 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Battle_Intro
# 891 "data/maps/KaolisleCity/scripts.pory"
	trainerbattle_no_intro TRAINER_KAOLISLE_CELEBI_TR2, KaolisleCity_MysteryMan_Battle_Lose
# 892 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_PostBattle
# 893 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_PostBattle2
# 894 "data/maps/KaolisleCity/scripts.pory"
	giveitem ITEM_DISC_FRAGMENT
	checkitem ITEM_DISC_FRAGMENT, 2
# 0 "data/maps/KaolisleCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaolisleCity_MysteryMan_Battle_8
# 899 "data/maps/KaolisleCity/scripts.pory"
	msgbox Kaolisle_ExplainFragment
KaolisleCity_MysteryMan_Battle_7:
# 901 "data/maps/KaolisleCity/scripts.pory"
	release
# 902 "data/maps/KaolisleCity/scripts.pory"
	goto_if_set FLAG_Q20_KAOLISLE_OLD_MAN_START, KaolisleCity_MysteryMan_Battle_12
KaolisleCity_MysteryMan_Battle_11:
	end

KaolisleCity_MysteryMan_Battle_2:
# 882 "data/maps/KaolisleCity/scripts.pory"
	msgbox Kaolisle_AbsolutelyCertain, MSGBOX_YESNO
	goto KaolisleCity_MysteryMan_Battle_1

KaolisleCity_MysteryMan_Battle_5:
# 885 "data/maps/KaolisleCity/scripts.pory"
	msgbox KaolisleCity_MysteryMan_Decline, MSGBOX_NPC
# 886 "data/maps/KaolisleCity/scripts.pory"
	turnobject 7, DIR_NORTH
# 887 "data/maps/KaolisleCity/scripts.pory"
	setflag FLAG_TEMP_4
	end

KaolisleCity_MysteryMan_Battle_8:
# 896 "data/maps/KaolisleCity/scripts.pory"
	msgbox Kaolisle_ExplainFragmentShort
	goto KaolisleCity_MysteryMan_Battle_7

KaolisleCity_MysteryMan_Battle_12:
# 903 "data/maps/KaolisleCity/scripts.pory"
	completequest FLAG_Q20_KAOLISLE_OLD_MAN_COMPLETE
# 904 "data/maps/KaolisleCity/scripts.pory"
	special ShowJournalPopupRemove
	goto KaolisleCity_MysteryMan_Battle_11


KaolisleCity_Zigzagoon_Text_0:
# 784 "data/maps/KaolisleCity/scripts.pory"
	.string "Zigzagoon: Guguuh!$"

KaolisleBirdMain_Text_0:
# 862 "data/maps/KaolisleCity/scripts.pory"
	.string "This looks to be one of the\nlost {STR_VAR_1}s.$"

Kaolisle_BrotherIntro::
# 199 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "You finally caught up!\p"
	.string "I've already defeated the Gym Leader\n"
	.string "here and obtained my next badge.\p"
	.string "I was going to take the ferry to\n"
	.string "Rockliffe Town but apparently\l"
	.string "there are some technical difficulties\l"
	.string "which makes it impossible for the ferry\l"
	.string "to currently dock in the harbor there.\p"
	.string "To pass the time, I thought I'd tour\n"
	.string "the city and see if there's anything\l"
	.string "interesting going on.\p"
	.string "Speaking of interesting…$"

KB_LookingTowardsPearlwood::
# 214 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: If I look real close, I think\n"
	.string "I can see Pearlwood in the horizon.\p"
	.string "We're so far away from home,\n"
	.string "yet it feels like we only just left.$"

KB_VisitingGym::
# 220 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: This is the Kaolisle City\n"
	.string "Pokémon Gym.\p"
	.string "I know, it doesn't look like your\n"
	.string "average gym but I assure you,\l"
	.string "the trainers there are no pushovers.$"

KB_PokeFanClub::
# 227 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: Apparently this is some kind\n"
	.string "of Pokémon Fan Club?\l"
	.string "I don't really get the point.\p"
	.string "Why coop up inside and talk about\n"
	.string "Pokémon when you could be out there,\l"
	.string "catching them and training them?$"

KB_LesserBeach::
# 235 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: This beach seems a bit\n"
	.string "overgrown.\p"
	.string "I don't mind it though.\p"
	.string "It seems peaceful enough to\n"
	.string "where you can have a relaxing time.$"

KB_Hotel::
# 242 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: So, this is the Grand Resort.\n"
	.string "Talk of the town.\p"
	.string "There seem to be a lot of people here\n"
	.string "this time of year.\p"
	.string "I bet the prices are through the roof,\n"
	.string "assuming you can even get a room.$"

KB_GreaterBeach::
# 250 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: This looks like a nice beach.\n"
	.string "Not a fan of the crowd though.\p"
	.string "You know, if you have an Itemfinder,\n"
	.string "it may not be a bad idea to comb through\l"
	.string "the beach with it.\p"
	.string "You never know what treasures the\n"
	.string "ocean may have washed ashore.$"

KB_BoringPlace::
# 259 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: I have to say, there's not\n"
	.string "a whole lot going around here.\p"
	.string "Sure, you can relax at the resort,\n"
	.string "but where's all the fun stuff?\l"
	.string "Where's all the activities?$"

KB_IslandToTheEast::
# 266 "data/maps/KaolisleCity/scripts.pory"
	.string "{BROTHER}: There seems to be an island\n"
	.string "to the east of here with a house on it.\p"
	.string "Wonder who would build a house\n"
	.string "in such a hard-to-reach place…$"

KaolisleCity_Sailor_Text::
# 277 "data/maps/KaolisleCity/scripts.pory"
	.string "The ocean around Kaolisle looks so huge\n"
	.string "and endless, but thanks to the great\l"
	.string "ferry system, you can get to the other\l"
	.string "cities in no time!$"

KaolisleCity_NinjaBoy_Text::
# 288 "data/maps/KaolisleCity/scripts.pory"
	.string "You can fit absolutely anything inside\n"
	.string "of a trainer's bag, huh!\p"
	.string "If it was me, I'd sure like to tuck\n"
	.string "myself in a bag and tag along on\l"
	.string "someone's adventure!$"

KaolisleCity_Woman2_Text::
# 301 "data/maps/KaolisleCity/scripts.pory"
	.string "Looking for the Pokémon Gym?\p"
	.string "Just look for a way downstairs to the\n"
	.string "giant quarry in the middle of the city.\l"
	.string "You can't miss it!$"

KaolisleCity_Boy3_Text::
# 312 "data/maps/KaolisleCity/scripts.pory"
	.string "If you're buying Poké Balls at a Poké\n"
	.string "Mart, you should buy them in sets of 10!$"

KaolisleCity_Boy3_Couple_Text::
# 321 "data/maps/KaolisleCity/scripts.pory"
	.string "I've never been that great of\n"
	.string "a trainer.\p"
	.string "I hope that by enrolling in the\n"
	.string "Trainers' School, I can change that.$"

KaolisleCity_Lass_Couple_Text::
# 332 "data/maps/KaolisleCity/scripts.pory"
	.string "Have you heard of the Coralgrove\n"
	.string "Trainers' School?\p"
	.string "My boyfriend and I are planning on\n"
	.string "enrolling there!$"

KaolisleCity_MysteryMan_Text::
# 397 "data/maps/KaolisleCity/scripts.pory"
	.string "Some days I gaze in Its direction,\n"
	.string "wondering, if It still remembers us…\p"
	.string "… … … …$"

KaolisleCity_MysteryMan_Text2::
# 402 "data/maps/KaolisleCity/scripts.pory"
	.string "Oh?\p"
	.string "Don't mind me, I'm just a washed-up\n"
	.string "senior who still reminisces about\l"
	.string "the old days.\p"
	.string "I noticed you're a trainer.\n"
	.string "Say, would you be interested in\l"
	.string "a Pokémon battle?\p"
	.string "I used to be quite a strong\n"
	.string "trainer in the past.$"

KaolisleCity_MysteryMan_TextShort::
# 413 "data/maps/KaolisleCity/scripts.pory"
	.string "Say, would you be interested in\n"
	.string "a Pokémon battle?\p"
	.string "I used to be quite a strong\n"
	.string "trainer in the past.$"

KaolisleCity_MysteryMan_Decline::
# 419 "data/maps/KaolisleCity/scripts.pory"
	.string "I understand. I won't bother you\n"
	.string "any further.$"

KaolisleCity_MysteryMan_2Badges::
# 423 "data/maps/KaolisleCity/scripts.pory"
	.string "Hm…\p"
	.string "I notice you only have 2 Gym Badges.\n"
	.string "I don't think this would be a fair match.\p"
	.string "If you can get a few more Badges,\n"
	.string "I might reconsider it.$"

KaolisleCity_MysteryMan_3Badges::
# 430 "data/maps/KaolisleCity/scripts.pory"
	.string "Hm…\p"
	.string "I notice you only have 3 Gym Badges.\n"
	.string "I don't think this would be a fair match.\p"
	.string "It's a good start but I would recommend\n"
	.string "you get a couple more first.$"

KaolisleCity_MysteryMan_4Badges::
# 437 "data/maps/KaolisleCity/scripts.pory"
	.string "Hm…\p"
	.string "You seem pretty strong, but I would\n"
	.string "suggest you get at least 6 badges\l"
	.string "before trying to challenge me.$"

KaolisleCity_ExpertM_Text::
# 452 "data/maps/KaolisleCity/scripts.pory"
	.string "Oh, are you a trainer from afar?\p"
	.string "I bet you must've even traveled the\n"
	.string "Coralgrove Archipelago!\p"
	.string "Why, I remember I used to visit my\n"
	.string "friends who lived there every summer.\p"
	.string "One summer day I found this real\n"
	.string "beautiful star piece on a beach\l"
	.string "at Route 1.\p"
	.string "My mother told me it probably belonged\n"
	.string "to someone and I should leave it there.\l"
	.string "I wonder if anyone ever picked it up…$"

KaolisleCity_Zigzagoon_Child_Text::
# 470 "data/maps/KaolisleCity/scripts.pory"
	.string "Zigzagoon is so cute!\p"
	.string "I heard some places have really\n"
	.string "mean-looking Zigzagoons.\l"
	.string "Glad we don't have them!$"

KaolisleCity_OldMan_Text::
# 481 "data/maps/KaolisleCity/scripts.pory"
	.string "As they say…\p"
	.string "There are plenty of Pokémon in the sea.\p"
	.string "Say, how many Pokémon do you think\n"
	.string "there are in the world?$"

KaolisleCity_Gentleman_Text::
# 492 "data/maps/KaolisleCity/scripts.pory"
	.string "The Grand Resort attracts people\n"
	.string "from all walks of life.\p"
	.string "If you're patient, you might even\n"
	.string "see a glimpse of someone famous!$"

KaolisleCity_Fisher1_Text::
# 536 "data/maps/KaolisleCity/scripts.pory"
	.string "I've been fishing here for a while but\n"
	.string "so far my luck has been abysmal.\p"
	.string "I bet it's because I left my lucky\n"
	.string "lure at home.\p"
	.string "Would you do me a favor and fetch it\n"
	.string "for me? I promise I'll make it worth\l"
	.string "your while.\p"
	.string "You can find my house in southern part\n"
	.string "of Sandstone City.\p"
	.string "My wife probably won't give the rod\n"
	.string "to just anyone.\l"
	.string "Tell her that Clancy sent you and\l"
	.string "she'll know.$"

KaolisleCity_Fisher1_Text2::
# 551 "data/maps/KaolisleCity/scripts.pory"
	.string "Again, You can find my house in\n"
	.string "southern part of Sandstone City.\p"
	.string "My wife probably won't give the lure\n"
	.string "to just anyone.\l"
	.string "Tell her that Clancy sent you and\l"
	.string "she'll know.$"

MyLure::
# 559 "data/maps/KaolisleCity/scripts.pory"
	.string "Ah, I see you've got the lure!\p"
	.string "Thank you so much for bringing it\n"
	.string "to me.\p"
	.string "You've been such a champ.\n"
	.string "Here, take this as your reward.$"

HopeYouGetAlotOfFish::
# 566 "data/maps/KaolisleCity/scripts.pory"
	.string "Hope your luck is better than mine!$"

KaolisleCity_Fisher2_Text::
# 574 "data/maps/KaolisleCity/scripts.pory"
	.string "This place is swarming with\n"
	.string "rare fish!\p"
	.string "I hope you brought something better\n"
	.string "than an Old Rod!$"

KaolisleCity_Fisher3_Text::
# 585 "data/maps/KaolisleCity/scripts.pory"
	.string "This is my secret spot.\p"
	.string "Shoo, before you scare all the\n"
	.string "fish away!$"

KaolisleCity_Fisher4_Text::
# 595 "data/maps/KaolisleCity/scripts.pory"
	.string "A friend of mine said they once reeled\n"
	.string "in a Finizen.\p"
	.string "I know there are some rare fish in\n"
	.string "these waters but I don't think I've\l"
	.string "ever witnessed someone actually\l"
	.string "fishing up any Paldean Pokémon.$"

KaolisleCity_TriathleteF_Text::
# 608 "data/maps/KaolisleCity/scripts.pory"
	.string "There are two beaches in Kaolisle.\p"
	.string "The other one is full to the brim\n"
	.string "with tourists, so I'd rather jog here.$"

KaolisleCity_LittleGirl_Text::
# 618 "data/maps/KaolisleCity/scripts.pory"
	.string "Dad told me I'm not allowed in the\n"
	.string "ocean so I'm stuck in this little pool…$"

KaolisleCity_Sailor2_Text::
# 627 "data/maps/KaolisleCity/scripts.pory"
	.string "All these rich people with their\n"
	.string "yachts…\p"
	.string "… … … …\p"
	.string "Not going to lie,\n"
	.string "I wish I could afford one…$"

KaolisleCity_TuberChasing1_Text::
# 639 "data/maps/KaolisleCity/scripts.pory"
	.string "Am I chasing my brother or is\n"
	.string "my brother chasing me?\p"
	.string "Who cares.\n"
	.string "The main thing is to have fun.$"

KaolisleCity_TuberChasing2_Text::
# 650 "data/maps/KaolisleCity/scripts.pory"
	.string "Whee!$"

CareToTryAgain::
# 686 "data/maps/KaolisleCity/scripts.pory"
	.string "Want to guess again?$"

KaolisleCity_TuberTalking1_Text::
# 689 "data/maps/KaolisleCity/scripts.pory"
	.string "We found this cool treasure\n"
	.string "in the sand.\p"
	.string "You can have it if you can answer\n"
	.string "our question correctly.\p"
	.string "The question is:\p"
	.string "Which one would win in a fight:\n"
	.string "Hyper Mega Ultra Dyna Charizard Z,\l"
	.string "or a Wobbuffet?$"

BeachWrongAnswer::
# 699 "data/maps/KaolisleCity/scripts.pory"
	.string "Wrong! The treasure is ours!$"

BeachCorrectAnswer::
# 702 "data/maps/KaolisleCity/scripts.pory"
	.string "Yay, you got it right!\n"
	.string "Here you go!$"

WasFunGame::
# 706 "data/maps/KaolisleCity/scripts.pory"
	.string "Let's play again soon!$"

KaolisleCity_TuberTalking2_Text::
# 714 "data/maps/KaolisleCity/scripts.pory"
	.string "He always does this…$"

KaolisleCity_TuberLearning_Text::
# 722 "data/maps/KaolisleCity/scripts.pory"
	.string "My big sister is teaching me to swim!$"

KaolisleCity_SwimTeacher_Text::
# 729 "data/maps/KaolisleCity/scripts.pory"
	.string "I'm teaching my little sister\n"
	.string "how to swim.\l"
	.string "I'd say it's going swimmingly.$"

KaolisleCity_Father_Text::
# 739 "data/maps/KaolisleCity/scripts.pory"
	.string "Children and Pokémon should always\n"
	.string "be full of energy.\l"
	.string "That's the way they're meant to be!$"

KaolisleCity_Mother_Text::
# 749 "data/maps/KaolisleCity/scripts.pory"
	.string "You've got a real sweet kind of face,\n"
	.string "don't you?\p"
	.string "I bet old ladies like to\n"
	.string "give you candy.$"

KaolisleCity_Swimmer_Text::
# 760 "data/maps/KaolisleCity/scripts.pory"
	.string "For some, holiday is a time of relaxing.\n"
	.string "Not for me though!$"

KaolisleCity_Scott_Text::
# 769 "data/maps/KaolisleCity/scripts.pory"
	.string "I'm a real man of the seas and I\n"
	.string "consider it my duty to keep\l"
	.string "people safe!\p"
	.string "So here's my warning to you:\p"
	.string "Most of the people you find swimming\n"
	.string "around are trainers.\l"
	.string "Stay safe and be prepared!$"

KaolisleCity_SignHarbor_Text::
# 811 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle Harbor$"

KaolisleCity_SignGym_Text::
# 814 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle City Pokémon Gym\n"
	.string "Leader: Clay$"

KaolisleCity_SignHotel_Text::
# 818 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle Grand Resort$"

KaolisleCity_SignFanClub_Text::
# 821 "data/maps/KaolisleCity/scripts.pory"
	.string "Kaolisle City Pokémon Fan Club$"

KaolisleCity_SignIntro_Text::
# 824 "data/maps/KaolisleCity/scripts.pory"
	.string "KAOLISLE CITY\n"
	.string "“The cleanest city in the world.”$"

NudgeMon::
# 874 "data/maps/KaolisleCity/scripts.pory"
	.string "You give the {STR_VAR_1} a nudge,\n"
	.string "and it starts flying towards home.$"

KaolisleCity_MysteryMan_Battle_Intro::
# 909 "data/maps/KaolisleCity/scripts.pory"
	.string "This is going to be fun!$"

KaolisleCity_MysteryMan_Battle_Lose::
# 912 "data/maps/KaolisleCity/scripts.pory"
	.string "My!\n"
	.string "Such vigor!\p"
	.string "I've never seen anything\n"
	.string "like it before!$"

KaolisleCity_MysteryMan_PostBattle::
# 918 "data/maps/KaolisleCity/scripts.pory"
	.string "Ah, what a fun battle that was.\p"
	.string "I'm glad an old husk like me\n"
	.string "could still enjoy the thrill\l"
	.string "of a Pokémon Battle.$"

KaolisleCity_MysteryMan_PostBattle2::
# 924 "data/maps/KaolisleCity/scripts.pory"
	.string "You know what, grand battles\n"
	.string "require grand prizes.\p"
	.string "I think I should have some\n"
	.string "candy in one of my pockets…\p"
	.string "…Oh!\p"
	.string "Actually, I think I may have\n"
	.string "something even better than candy.\p"
	.string "Here, take this.$"

Kaolisle_ExplainFragment::
# 934 "data/maps/KaolisleCity/scripts.pory"
	.string "It may look like junk now,\n"
	.string "but trust me, that thing\l"
	.string "is a key to something important.\p"
	.string "Before it can be used however,\n"
	.string "you will need to find other fragments\l"
	.string "like it.\p"
	.string "There should be four fragments.\p"
	.string "Once you have collected them all,\n"
	.string "bring them to our eldest.\p"
	.string "She may be able to piece the\n"
	.string "fragments together.\p"
	.string "My old friends should have hopefully\n"
	.string "kept their fragments safe.\p"
	.string "I don't know where they\n"
	.string "currently reside, but I remember\l"
	.string "one of them mentioning about\l"
	.string "moving somewhere very cold.$"

KaolisleCity_MysteryMan_AfterBattleGossip::
# 953 "data/maps/KaolisleCity/scripts.pory"
	.string "There should be four fragments.\p"
	.string "Once you have collected them all,\n"
	.string "bring them to our eldest.\p"
	.string "She may be able to piece the\n"
	.string "fragments together.\p"
	.string "My old friends should have hopefully\n"
	.string "kept their fragments safe.\p"
	.string "I don't know where they\n"
	.string "currently reside, but I remember\l"
	.string "one of them mentioning about\l"
	.string "moving somewhere very cold.$"

Kaolisle_AbsolutelyCertain::
# 966 "data/maps/KaolisleCity/scripts.pory"
	.string "Are you absolutely certain you want\n"
	.string "to challenge me? I'm pretty strong.$"

Kaolisle_ExplainFragmentShort::
# 970 "data/maps/KaolisleCity/scripts.pory"
	.string "There should be four fragments.\p"
	.string "Once you have collected them all,\n"
	.string "bring them to our eldest.\p"
	.string "She may be able to piece the\n"
	.string "fragments together.\p"
	.string "My old friends should have hopefully\n"
	.string "kept their fragments safe.\p"
	.string "I don't know where they\n"
	.string "currently reside, but I remember\l"
	.string "one of them mentioning about\l"
	.string "moving somewhere very cold.$"
