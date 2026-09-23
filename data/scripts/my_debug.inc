Update3::
# 2 "data/scripts/my_debug.pory"
	goto_if_set FLAG_RECEIVED_TM_FLING, Update3_2
Update3_1:
# 19 "data/scripts/my_debug.pory"
	setflag FLAG_SYS_JOURNAL_GET
# 20 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 3
# 21 "data/scripts/my_debug.pory"
	release
	return

Update3_2:
# 3 "data/scripts/my_debug.pory"
	msgbox MixupWithTMs
# 4 "data/scripts/my_debug.pory"
	removeitem ITEM_TM_TORMENT, 1
# 5 "data/scripts/my_debug.pory"
	giveitem ITEM_TM_FLING
# 6 "data/scripts/my_debug.pory"
	checkitemquant ITEM_TM_FLING
# 7 "data/scripts/my_debug.pory"
	goto_if_set FLAG_ITEM_ROUTE_11_TORMENT, Update3_5
Update3_4:
# 13 "data/scripts/my_debug.pory"
	checkitemquant ITEM_TM_FLING
# 14 "data/scripts/my_debug.pory"
	compare VAR_0x8005, 1
	goto_if_gt Update3_8
Update3_7:
# 17 "data/scripts/my_debug.pory"
	closemessage
	goto Update3_1

Update3_5:
# 9 "data/scripts/my_debug.pory"
	compare VAR_0x8005, 0
	goto_if_eq Update3_10
	goto Update3_4

Update3_8:
# 15 "data/scripts/my_debug.pory"
	removeitem ITEM_TM_FLING
	goto Update3_7

Update3_10:
# 10 "data/scripts/my_debug.pory"
	additem ITEM_TM_TORMENT
	goto Update3_4


Update4::
# 24 "data/scripts/my_debug.pory"
	callnative FixGrottoHiddenAbility
# 25 "data/scripts/my_debug.pory"
	switch VAR_STARTER_MON
# 27 "data/scripts/my_debug.pory"
	case 0, Update4_3
# 29 "data/scripts/my_debug.pory"
	case 1, Update4_4
# 31 "data/scripts/my_debug.pory"
	case 2, Update4_5
Update4_1:
# 34 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BROTHER_2_ROUTE28
	goto_if 1, Update4_7
Update4_6:
# 38 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BROTHER_3_ROUTE28
	goto_if 1, Update4_10
Update4_9:
# 43 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BROTHER_4_ROUTE28
	goto_if 1, Update4_13
Update4_12:
# 47 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto_if 1, Update4_16
Update4_15:
# 51 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Update4_19
Update4_18:
# 56 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R2_YOUNGSTER2
	goto_if 1, Update4_22
Update4_21:
# 60 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_WW_NURSE
	goto_if 1, Update4_25
Update4_24:
# 64 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_DESERT_NURSE
	goto_if 1, Update4_28
Update4_27:
# 69 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_ROUTE11_NURSE
	goto_if 1, Update4_31
Update4_30:
# 73 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_11_
	goto_if 1, Update4_34
Update4_33:
# 77 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_12_
	goto_if 1, Update4_37
Update4_36:
# 82 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_13_
	goto_if 1, Update4_40
Update4_39:
# 86 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_14_
	goto_if 1, Update4_43
Update4_42:
# 90 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_CRYSTALPINE_NURSE
	goto_if 1, Update4_46
Update4_45:
# 95 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto_if 1, Update4_49
Update4_48:
# 99 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_526_
	goto_if 1, Update4_52
Update4_51:
# 103 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto_if 1, Update4_55
Update4_54:
# 107 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_535_
	goto_if 1, Update4_58
Update4_57:
# 112 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto_if 1, Update4_61
Update4_60:
# 116 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_527_
	goto_if 1, Update4_64
Update4_63:
# 120 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_MAY_BASALEK_TOWN
	goto_if 1, Update4_67
Update4_66:
# 124 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_536_
	goto_if 1, Update4_70
Update4_69:
# 129 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_234_
	goto_if 1, Update4_73
Update4_72:
# 133 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_235_
	goto_if 1, Update4_76
Update4_75:
# 137 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_236_
	goto_if 1, Update4_79
Update4_78:
# 142 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_228_
	goto_if 1, Update4_82
Update4_81:
# 146 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_229_
	goto_if 1, Update4_85
Update4_84:
# 150 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_230_
	goto_if 1, Update4_88
Update4_87:
# 155 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_231_
	goto_if 1, Update4_91
Update4_90:
# 159 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_232_
	goto_if 1, Update4_94
Update4_93:
# 163 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_233_
	goto_if 1, Update4_97
Update4_96:
# 168 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_225_
	goto_if 1, Update4_100
Update4_99:
# 172 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_226_
	goto_if 1, Update4_103
Update4_102:
# 176 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_227_
	goto_if 1, Update4_106
Update4_105:
# 181 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_376_
	goto_if 1, Update4_109
Update4_108:
# 185 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_377_
	goto_if 1, Update4_112
Update4_111:
# 189 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_378_
	goto_if 1, Update4_115
Update4_114:
# 194 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_379_
	goto_if 1, Update4_118
Update4_117:
# 198 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_380_
	goto_if 1, Update4_121
Update4_120:
# 202 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_381_
	goto_if 1, Update4_124
Update4_123:
# 206 "data/scripts/my_debug.pory"
	msgbox GrottoUpdate
# 207 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 4
	return

Update4_3:
# 28 "data/scripts/my_debug.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto Update4_1

Update4_4:
# 30 "data/scripts/my_debug.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto Update4_1

Update4_5:
# 32 "data/scripts/my_debug.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto Update4_1

Update4_7:
# 35 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BROTHER_2_ROUTE28
# 36 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_1_PEARLWOOD
	goto Update4_6

Update4_10:
# 39 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BROTHER_3_ROUTE28
# 40 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_1_PEARLWOOD
	goto Update4_9

Update4_13:
# 44 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BROTHER_4_ROUTE28
# 45 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_2_ROUTE28
	goto Update4_12

Update4_16:
# 48 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
# 49 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_2_ROUTE28
	goto Update4_15

Update4_19:
# 52 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BROTHER_6_ROUTE20
# 53 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_2_ROUTE28
	goto Update4_18

Update4_22:
# 57 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_R2_YOUNGSTER2
# 58 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_21

Update4_25:
# 61 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_WW_NURSE
# 62 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_24

Update4_28:
# 65 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_DESERT_NURSE
# 66 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_27

Update4_31:
# 70 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_ROUTE11_NURSE
# 71 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_4_ROUTE28
	goto Update4_30

Update4_34:
# 74 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_11_
# 75 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_4_ROUTE28
	goto Update4_33

Update4_37:
# 78 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_12_
# 79 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_4_ROUTE28
	goto Update4_36

Update4_40:
# 83 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_13_
# 84 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto Update4_39

Update4_43:
# 87 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_14_
# 88 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto Update4_42

Update4_46:
# 91 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_CRYSTALPINE_NURSE
# 92 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_5_FISHINGVILLAGE
	goto Update4_45

Update4_49:
# 96 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
# 97 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_PRIMROSE_MEADOW
	goto Update4_48

Update4_52:
# 100 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_526_
# 101 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_PRIMROSE_MEADOW
	goto Update4_51

Update4_55:
# 104 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_MAY_ROUTE_11_ANGRY
# 105 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_PRIMROSE_MEADOW
	goto Update4_54

Update4_58:
# 108 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_535_
# 109 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_PRIMROSE_MEADOW
	goto Update4_57

Update4_61:
# 113 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_BRENDAN_BASALEK_TOWN
# 114 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_CORALGROVE_ELEVATOR
	goto Update4_60

Update4_64:
# 117 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_527_
# 118 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_CORALGROVE_ELEVATOR
	goto Update4_63

Update4_67:
# 121 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_MAY_BASALEK_TOWN
# 122 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_CORALGROVE_ELEVATOR
	goto Update4_66

Update4_70:
# 125 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_536_
# 126 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_CORALGROVE_ELEVATOR
	goto Update4_69

Update4_73:
# 130 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_234_
# 131 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto Update4_72

Update4_76:
# 134 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_235_
# 135 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto Update4_75

Update4_79:
# 138 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_236_
# 139 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_ROUTE_11_ANGRY
	goto Update4_78

Update4_82:
# 143 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_228_
# 144 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto Update4_81

Update4_85:
# 147 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_229_
# 148 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto Update4_84

Update4_88:
# 151 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_230_
# 152 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto Update4_87

Update4_91:
# 156 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_231_
# 157 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_ROUTE_11_NORMAL
	goto Update4_90

Update4_94:
# 160 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_232_
# 161 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_ROUTE_11_NORMAL
	goto Update4_93

Update4_97:
# 164 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_233_
# 165 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_ROUTE_11_NORMAL
	goto Update4_96

Update4_100:
# 169 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_225_
# 170 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_11_NORMAL
	goto Update4_99

Update4_103:
# 173 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_226_
# 174 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_11_NORMAL
	goto Update4_102

Update4_106:
# 177 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_227_
# 178 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_ROUTE_11_NORMAL
	goto Update4_105

Update4_109:
# 182 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_376_
# 183 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_BASALEK_TOWN
	goto Update4_108

Update4_112:
# 186 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_377_
# 187 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_BASALEK_TOWN
	goto Update4_111

Update4_115:
# 190 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_378_
# 191 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_MAY_BASALEK_TOWN
	goto Update4_114

Update4_118:
# 195 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_379_
# 196 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto Update4_117

Update4_121:
# 199 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_380_
# 200 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto Update4_120

Update4_124:
# 203 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_381_
# 204 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BRENDAN_BASALEK_TOWN
	goto Update4_123


UpdateGuy::
# 220 "data/scripts/my_debug.pory"
	faceplayer
# 221 "data/scripts/my_debug.pory"
	msgbox UpdateGuy_Text1
# 222 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SYS_POKEDEX_GET, UpdateGuy_2
# 227 "data/scripts/my_debug.pory"
	message WhatWouldYouLikeToDo
# 228 "data/scripts/my_debug.pory"
	waitmessage
# 229 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 9
	goto_if_lt UpdateGuy_5
UpdateGuy_4:
# 232 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_1, 1
# 233 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_2, 2
# 234 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_3, 3
# 235 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, UpdateGuy_8
UpdateGuy_7:
# 238 "data/scripts/my_debug.pory"
	goto_if_set FLAG_ENABLE_SECRET_SHOP, UpdateGuy_11
UpdateGuy_10:
# 241 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_6, 6
# 242 "data/scripts/my_debug.pory"
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
# 243 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 244 "data/scripts/my_debug.pory"
	case 0, UpdateGuy_14
# 246 "data/scripts/my_debug.pory"
	case 1, UpdateGuy_15
# 248 "data/scripts/my_debug.pory"
	case 2, UpdateGuy_16
# 250 "data/scripts/my_debug.pory"
	case 3, UpdateGuy_17
# 252 "data/scripts/my_debug.pory"
	case 4, UpdateGuy_18
# 254 "data/scripts/my_debug.pory"
	case 5, UpdateGuy_19
# 256 "data/scripts/my_debug.pory"
	case 6, UpdateGuy_20
# 257 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, UpdateGuy_20
	return

UpdateGuy_2:
# 223 "data/scripts/my_debug.pory"
	msgbox UpdateGuy_Text2
# 224 "data/scripts/my_debug.pory"
	release
	end

UpdateGuy_5:
# 230 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_0, 0
	goto UpdateGuy_4

UpdateGuy_8:
# 236 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_4, 4
	goto UpdateGuy_7

UpdateGuy_11:
# 239 "data/scripts/my_debug.pory"
	dynmultipush UpdateGuy_Text_5, 5
	goto UpdateGuy_10

UpdateGuy_14:
# 245 "data/scripts/my_debug.pory"
	goto UpdateGame
	return

UpdateGuy_15:
# 247 "data/scripts/my_debug.pory"
	goto Debug_Script_1
	return

UpdateGuy_16:
# 249 "data/scripts/my_debug.pory"
	goto SkipContent
	return

UpdateGuy_17:
# 251 "data/scripts/my_debug.pory"
	goto Debug_Script_81
	return

UpdateGuy_18:
# 253 "data/scripts/my_debug.pory"
	goto TestMegaMon
	return

UpdateGuy_19:
# 255 "data/scripts/my_debug.pory"
	goto SecretShopScript
	return

UpdateGuy_20:
# 258 "data/scripts/my_debug.pory"
	msgbox UpdateGuy_Text_7, MSGBOX_AUTOCLOSE
	return


UpdateGame::
# 286 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 2
	goto_if_eq UpdateGame_2
UpdateGame_1:
# 289 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 3
	goto_if_eq UpdateGame_5
UpdateGame_4:
# 292 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 4
	goto_if_eq UpdateGame_8
UpdateGame_7:
# 298 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 5
	goto_if_eq UpdateGame_11
UpdateGame_10:
# 302 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 6
	goto_if_eq UpdateGame_14
UpdateGame_13:
# 307 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 7
	goto_if_eq UpdateGame_17
UpdateGame_16:
# 314 "data/scripts/my_debug.pory"
	compare VAR_DEBUG, 8
	goto_if_eq UpdateGame_20
UpdateGame_19:
# 321 "data/scripts/my_debug.pory"
	msgbox GameIsUpToDate
# 322 "data/scripts/my_debug.pory"
	release
	return

UpdateGame_2:
# 287 "data/scripts/my_debug.pory"
	call Update3
	goto UpdateGame_1

UpdateGame_5:
# 290 "data/scripts/my_debug.pory"
	call Update4
	goto UpdateGame_4

UpdateGame_8:
# 293 "data/scripts/my_debug.pory"
	setflag FLAG_SYS_B_DASH
# 294 "data/scripts/my_debug.pory"
	setflag FLAG_SYS_JOURNAL_GET
# 295 "data/scripts/my_debug.pory"
	callnative ClearAllContestWinnerPics
# 296 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 5
	goto UpdateGame_7

UpdateGame_11:
# 299 "data/scripts/my_debug.pory"
	callnative ResetFreeSpace
# 300 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 6
	goto UpdateGame_10

UpdateGame_14:
# 303 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_54_
# 304 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_172_
# 305 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 7
	goto UpdateGame_13

UpdateGame_17:
# 309 "data/scripts/my_debug.pory"
	clearflag FLAG_UNUSED_EXTENDED_58
# 310 "data/scripts/my_debug.pory"
	clearflag FLAG_UNUSED_0x26
# 311 "data/scripts/my_debug.pory"
	clearflag FLAG_UNUSED_0x25
# 312 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 8
	goto UpdateGame_16

UpdateGame_20:
# 315 "data/scripts/my_debug.pory"
	setvar VAR_DEBUG, 9
# 316 "data/scripts/my_debug.pory"
	goto_if_set FLAG_RECEIVED_FLIGHT_FLUTE, UpdateGame_22
	goto UpdateGame_19

UpdateGame_22:
# 317 "data/scripts/my_debug.pory"
	removeitem ITEM_HM02
# 318 "data/scripts/my_debug.pory"
	giveitem ITEM_FLIGHT_FLUTE
	goto UpdateGame_19


TestMegaMon::
# 326 "data/scripts/my_debug.pory"
	message WhichMonWouldYouTest
# 327 "data/scripts/my_debug.pory"
	waitmessage
# 328 "data/scripts/my_debug.pory"
	setvar VAR_0x8008, 40
# 329 "data/scripts/my_debug.pory"
	goto_if_set FLAG_BADGE05_GET, TestMegaMon_2
TestMegaMon_1:
# 332 "data/scripts/my_debug.pory"
	goto_if_set FLAG_BADGE06_GET, TestMegaMon_5
TestMegaMon_4:
# 335 "data/scripts/my_debug.pory"
	dynmultichoice 23, 0, FALSE, 5, 0, 0, TestMegaMon_Text_0, TestMegaMon_Text_1, TestMegaMon_Text_2, TestMegaMon_Text_3, TestMegaMon_Text_4, TestMegaMon_Text_5, UpdateGuy_Text_6
# 336 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 337 "data/scripts/my_debug.pory"
	case 0, TestMegaMon_8
# 342 "data/scripts/my_debug.pory"
	case 1, TestMegaMon_9
# 347 "data/scripts/my_debug.pory"
	case 2, TestMegaMon_10
# 352 "data/scripts/my_debug.pory"
	case 3, TestMegaMon_11
# 357 "data/scripts/my_debug.pory"
	case 4, TestMegaMon_12
# 362 "data/scripts/my_debug.pory"
	case 5, TestMegaMon_13
# 367 "data/scripts/my_debug.pory"
	case 6, TestMegaMon_14
# 368 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, TestMegaMon_14
	return

TestMegaMon_2:
# 330 "data/scripts/my_debug.pory"
	setvar VAR_0x8008, 45
	goto TestMegaMon_1

TestMegaMon_5:
# 333 "data/scripts/my_debug.pory"
	setvar VAR_0x8008, 53
	goto TestMegaMon_4

TestMegaMon_8:
# 338 "data/scripts/my_debug.pory"
	givemon SPECIES_DECIDUEYE, VAR_0x8008, ITEM_DECIDUEITE
# 339 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
# 340 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
# 341 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_9:
# 343 "data/scripts/my_debug.pory"
	givemon SPECIES_EMPOLEON, VAR_0x8008, ITEM_EMPOLEONITE
# 344 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
# 345 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
# 346 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_10:
# 348 "data/scripts/my_debug.pory"
	givemon SPECIES_CHESNAUGHT, VAR_0x8008, ITEM_CHESNAUGHTITE
# 349 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
# 350 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
# 351 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_11:
# 353 "data/scripts/my_debug.pory"
	givemon SPECIES_INCINEROAR, VAR_0x8008, ITEM_INCINEROARITE
# 354 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
# 355 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
# 356 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_12:
# 358 "data/scripts/my_debug.pory"
	givemon SPECIES_PORYGON_Z, VAR_0x8008, ITEM_PROCESSOR
# 359 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON_Z
# 360 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON_Z
# 361 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_13:
# 363 "data/scripts/my_debug.pory"
	givemon SPECIES_ARIADOS, VAR_0x8008, ITEM_ARIADOSITE
# 364 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARIADOS
# 365 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARIADOS
# 366 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_14:
# 369 "data/scripts/my_debug.pory"
	msgbox TestMegaMon_Text_6, MSGBOX_AUTOCLOSE
# 370 "data/scripts/my_debug.pory"
	release
	end


UnstuckPlayer::
	msgbox UnstuckPlayer_Text, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq UnstuckPlayer_2
# 380 "data/scripts/my_debug.pory"
	warp MAP_PEARLWOOD_POINT, 14, 24
# 381 "data/scripts/my_debug.pory"
	waitstate
# 382 "data/scripts/my_debug.pory"
	release
	end

UnstuckPlayer_2:
# 377 "data/scripts/my_debug.pory"
	release
	end


SkipContent::
# 424 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_1, SkipContent_2
SkipContent_1:
# 429 "data/scripts/my_debug.pory"
	message ChooseContentToSkip
# 430 "data/scripts/my_debug.pory"
	waitmessage
# 432 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_3
# 433 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_4
# 434 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_5
# 435 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_6
# 436 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_7
# 437 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_8
# 438 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 0
# 440 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_0, 0
# 441 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_1, 1
# 442 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_2, 2
# 443 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_3, 3
# 444 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_4, 4
# 445 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_5, 5
# 446 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_6, 6
# 447 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_7, 7
# 448 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_8, 8
# 449 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_9, 9
# 450 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_10, 10
# 451 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_11, 11
# 452 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_12, 12
# 453 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_13, 13
# 454 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_14, 14
# 455 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_15, 15
# 456 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_16, 16
# 457 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_17, 17
# 458 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_18, 18
# 459 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_19, 19
# 460 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_20, 20
# 461 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_21, 21
# 462 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_22, 22
# 463 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_23, 23
# 464 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_24, 24
# 465 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_25, 25
# 466 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_26, 26
# 467 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_27, 27
# 468 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_28, 28
# 469 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_29, 29
# 470 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_30, 30
# 471 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_31, 31
# 472 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_32, 32
# 473 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_33, 33
# 474 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_34, 34
# 475 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_35, 35
# 476 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_36, 36
# 477 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_37, 37
# 478 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_38, 38
# 479 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_39, 39
# 480 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_40, 40
# 481 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_41, 41
# 482 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_42, 42
# 483 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_43, 43
# 484 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_44, 44
# 485 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_45, 45
# 486 "data/scripts/my_debug.pory"
	dynmultistack 23, 0, FALSE, 6, 0, VAR_TEMP_A, 0
# 487 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 488 "data/scripts/my_debug.pory"
	case 0, SkipContent_5
# 491 "data/scripts/my_debug.pory"
	case 1, SkipContent_6
# 494 "data/scripts/my_debug.pory"
	case 2, SkipContent_7
# 497 "data/scripts/my_debug.pory"
	case 3, SkipContent_8
# 500 "data/scripts/my_debug.pory"
	case 4, SkipContent_9
# 503 "data/scripts/my_debug.pory"
	case 5, SkipContent_10
# 506 "data/scripts/my_debug.pory"
	case 6, SkipContent_11
# 509 "data/scripts/my_debug.pory"
	case 7, SkipContent_12
# 512 "data/scripts/my_debug.pory"
	case 8, SkipContent_13
# 515 "data/scripts/my_debug.pory"
	case 9, SkipContent_14
# 518 "data/scripts/my_debug.pory"
	case 10, SkipContent_15
# 521 "data/scripts/my_debug.pory"
	case 11, SkipContent_16
# 524 "data/scripts/my_debug.pory"
	case 12, SkipContent_17
# 527 "data/scripts/my_debug.pory"
	case 13, SkipContent_18
# 530 "data/scripts/my_debug.pory"
	case 14, SkipContent_19
# 533 "data/scripts/my_debug.pory"
	case 15, SkipContent_20
# 536 "data/scripts/my_debug.pory"
	case 16, SkipContent_21
# 539 "data/scripts/my_debug.pory"
	case 17, SkipContent_22
# 542 "data/scripts/my_debug.pory"
	case 18, SkipContent_23
# 545 "data/scripts/my_debug.pory"
	case 19, SkipContent_24
# 548 "data/scripts/my_debug.pory"
	case 20, SkipContent_25
# 551 "data/scripts/my_debug.pory"
	case 21, SkipContent_26
# 554 "data/scripts/my_debug.pory"
	case 22, SkipContent_27
# 557 "data/scripts/my_debug.pory"
	case 23, SkipContent_28
# 560 "data/scripts/my_debug.pory"
	case 24, SkipContent_29
# 563 "data/scripts/my_debug.pory"
	case 25, SkipContent_30
# 566 "data/scripts/my_debug.pory"
	case 26, SkipContent_31
# 569 "data/scripts/my_debug.pory"
	case 27, SkipContent_32
# 572 "data/scripts/my_debug.pory"
	case 28, SkipContent_33
# 575 "data/scripts/my_debug.pory"
	case 29, SkipContent_34
# 578 "data/scripts/my_debug.pory"
	case 30, SkipContent_35
# 581 "data/scripts/my_debug.pory"
	case 31, SkipContent_36
# 584 "data/scripts/my_debug.pory"
	case 32, SkipContent_37
# 587 "data/scripts/my_debug.pory"
	case 33, SkipContent_38
# 590 "data/scripts/my_debug.pory"
	case 34, SkipContent_39
# 593 "data/scripts/my_debug.pory"
	case 35, SkipContent_40
# 596 "data/scripts/my_debug.pory"
	case 36, SkipContent_41
# 599 "data/scripts/my_debug.pory"
	case 37, SkipContent_42
# 602 "data/scripts/my_debug.pory"
	case 38, SkipContent_43
# 605 "data/scripts/my_debug.pory"
	case 39, SkipContent_44
# 608 "data/scripts/my_debug.pory"
	case 40, SkipContent_45
# 611 "data/scripts/my_debug.pory"
	case 41, SkipContent_46
# 614 "data/scripts/my_debug.pory"
	case 42, SkipContent_47
# 617 "data/scripts/my_debug.pory"
	case 43, SkipContent_48
# 620 "data/scripts/my_debug.pory"
	case 44, SkipContent_49
# 623 "data/scripts/my_debug.pory"
	case 45, SkipContent_50
# 624 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, SkipContent_50
	return

SkipContent_2:
# 426 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_1
# 427 "data/scripts/my_debug.pory"
	msgbox SkipContent_Text
	goto SkipContent_1

SkipContent_5:
# 489 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 490 "data/scripts/my_debug.pory"
	goto SkipContent_Route1
	return

SkipContent_6:
# 492 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 493 "data/scripts/my_debug.pory"
	goto SkipContent_Route2
	return

SkipContent_7:
# 495 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 496 "data/scripts/my_debug.pory"
	goto SkipContent_WindyWoods
	return

SkipContent_8:
# 498 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 499 "data/scripts/my_debug.pory"
	goto SkipContent_CoralgroveCity
	return

SkipContent_9:
# 501 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 502 "data/scripts/my_debug.pory"
	goto SkipContent_AzuretideTown
	return

SkipContent_10:
# 504 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 505 "data/scripts/my_debug.pory"
	goto SkipContent_Route4
	return

SkipContent_11:
# 507 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 508 "data/scripts/my_debug.pory"
	goto SkipContent_PokemonRanch
	return

SkipContent_12:
# 510 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 511 "data/scripts/my_debug.pory"
	goto SkipContent_AldeleafCity
	return

SkipContent_13:
# 513 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 514 "data/scripts/my_debug.pory"
	goto SkipContent_Route30
	return

SkipContent_14:
# 516 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 517 "data/scripts/my_debug.pory"
	goto SkipContent_WindplumeValley
	return

SkipContent_15:
# 519 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 520 "data/scripts/my_debug.pory"
	goto SkipContent_Route5
	return

SkipContent_16:
# 522 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 523 "data/scripts/my_debug.pory"
	goto SkipContent_FlowerFields
	return

SkipContent_17:
# 525 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 526 "data/scripts/my_debug.pory"
	goto SkipContent_SkylochVillage
	return

SkipContent_18:
# 528 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 529 "data/scripts/my_debug.pory"
	goto SkipContent_Route6
	return

SkipContent_19:
# 531 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 532 "data/scripts/my_debug.pory"
	goto SkipContent_Route8
	return

SkipContent_20:
# 534 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 535 "data/scripts/my_debug.pory"
	goto SkipContent_ShoreslateCity
	return

SkipContent_21:
# 537 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 538 "data/scripts/my_debug.pory"
	goto SkipContent_ScorchedDesert
	return

SkipContent_22:
# 540 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 541 "data/scripts/my_debug.pory"
	goto SkipContent_Route7
	return

SkipContent_23:
# 543 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 544 "data/scripts/my_debug.pory"
	goto SkipContent_MarigorgeTown
	return

SkipContent_24:
# 546 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 547 "data/scripts/my_debug.pory"
	goto SkipContent_KaolisleCity
	return

SkipContent_25:
# 549 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 550 "data/scripts/my_debug.pory"
	goto SkipContent_RockliffeTown
	return

SkipContent_26:
# 552 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 553 "data/scripts/my_debug.pory"
	goto SkipContent_Route11
	return

SkipContent_27:
# 555 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 556 "data/scripts/my_debug.pory"
	goto SkipContent_Route12
	return

SkipContent_28:
# 558 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 559 "data/scripts/my_debug.pory"
	goto SkipContent_SandstoneCity
	return

SkipContent_29:
# 561 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 562 "data/scripts/my_debug.pory"
	goto SkipContent_Route13
	return

SkipContent_30:
# 564 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 565 "data/scripts/my_debug.pory"
	goto SkipContent_AdamantTower
	return

SkipContent_31:
# 567 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 568 "data/scripts/my_debug.pory"
	goto SkipContent_Route14
	return

SkipContent_32:
# 570 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 571 "data/scripts/my_debug.pory"
	goto SkipContent_Route15
	return

SkipContent_33:
# 573 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 574 "data/scripts/my_debug.pory"
	goto SkipContent_FishingVillage
	return

SkipContent_34:
# 576 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 577 "data/scripts/my_debug.pory"
	goto SkipContent_Route23
	return

SkipContent_35:
# 579 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 580 "data/scripts/my_debug.pory"
	goto SkipContent_DrisledgeTown
	return

SkipContent_36:
# 582 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 583 "data/scripts/my_debug.pory"
	goto SkipContent_AmberockTown
	return

SkipContent_37:
# 585 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 586 "data/scripts/my_debug.pory"
	goto SkipContent_Route3
	return

SkipContent_38:
# 588 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 589 "data/scripts/my_debug.pory"
	goto SkipContent_Route9
	return

SkipContent_39:
# 591 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 592 "data/scripts/my_debug.pory"
	goto SkipContent_Route10
	return

SkipContent_40:
# 594 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 595 "data/scripts/my_debug.pory"
	goto SkipContent_WindplumeMountain
	return

SkipContent_41:
# 597 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 598 "data/scripts/my_debug.pory"
	goto SkipContent_Route16
	return

SkipContent_42:
# 600 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 601 "data/scripts/my_debug.pory"
	goto SkipContent_BasalekTown
	return

SkipContent_43:
# 603 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 604 "data/scripts/my_debug.pory"
	goto SkipContent_Route17
	return

SkipContent_44:
# 606 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 607 "data/scripts/my_debug.pory"
	goto SkipContent_Route18
	return

SkipContent_45:
# 609 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 610 "data/scripts/my_debug.pory"
	goto SkipContent_FrosthearthCity
	return

SkipContent_46:
# 612 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 613 "data/scripts/my_debug.pory"
	goto SkipContent_RockClimb
	return

SkipContent_47:
# 615 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 616 "data/scripts/my_debug.pory"
	goto SkipContent_DesertRuins
	return

SkipContent_48:
# 618 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 619 "data/scripts/my_debug.pory"
	goto SkipContent_SafariZone
	return

SkipContent_49:
# 621 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 622 "data/scripts/my_debug.pory"
	goto SkipContent_MiscSurfing
	return

SkipContent_50:
# 625 "data/scripts/my_debug.pory"
	msgbox TestMegaMon_Text_6, MSGBOX_AUTOCLOSE
# 626 "data/scripts/my_debug.pory"
	release
	end


SkipContent_BufferChoices::
# 653 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_1, SkipContent_BufferChoices_Text_0
# 654 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, SkipContent_BufferChoices_2
# 658 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_2, 0
SkipContent_BufferChoices_1:
# 661 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, SkipContent_BufferChoices_6
# 665 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_4, 1
SkipContent_BufferChoices_5:
# 668 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, SkipContent_BufferChoices_10
# 672 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_6, 2
SkipContent_BufferChoices_9:
# 676 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_7, 3
# 677 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_8, 4
# 678 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_9, 5
# 679 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_6, SkipContent_BufferChoices_14
# 683 "data/scripts/my_debug.pory"
	message SkipContent_BufferChoices_Text_11
SkipContent_BufferChoices_13:
# 685 "data/scripts/my_debug.pory"
	waitmessage
# 686 "data/scripts/my_debug.pory"
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
# 687 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_6
# 688 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 689 "data/scripts/my_debug.pory"
	case 0, SkipContent_BufferChoices_19
# 691 "data/scripts/my_debug.pory"
	case 1, SkipContent_BufferChoices_20
# 693 "data/scripts/my_debug.pory"
	case 2, SkipContent_BufferChoices_21
# 695 "data/scripts/my_debug.pory"
	case 3, SkipContent_BufferChoices_22
# 697 "data/scripts/my_debug.pory"
	case 5, SkipContent_BufferChoices_23
# 698 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, SkipContent_BufferChoices_23
SkipContent_BufferChoices_17:
	return

SkipContent_BufferChoices_2:
# 655 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_1, 0
	goto SkipContent_BufferChoices_1

SkipContent_BufferChoices_6:
# 662 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_3, 1
	goto SkipContent_BufferChoices_5

SkipContent_BufferChoices_10:
# 669 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_5, 2
	goto SkipContent_BufferChoices_9

SkipContent_BufferChoices_14:
# 680 "data/scripts/my_debug.pory"
	message SkipContent_BufferChoices_Text_10
	goto SkipContent_BufferChoices_13

SkipContent_BufferChoices_19:
# 690 "data/scripts/my_debug.pory"
	goto BufferChoices0
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_20:
# 692 "data/scripts/my_debug.pory"
	goto BufferChoices1
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_21:
# 694 "data/scripts/my_debug.pory"
	goto BufferChoices2
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_22:
# 696 "data/scripts/my_debug.pory"
	goto BufferChoices4
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_23:
# 699 "data/scripts/my_debug.pory"
	goto SkipContent
	goto SkipContent_BufferChoices_17


BufferChoices0::
# 705 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_3, BufferChoices0_2
# 709 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_3
BufferChoices0_1:
# 711 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices0_2:
# 706 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_3
	goto BufferChoices0_1


BufferChoices1::
# 714 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_4, BufferChoices1_2
# 718 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_4
BufferChoices1_1:
# 720 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices1_2:
# 715 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_4
	goto BufferChoices1_1


BufferChoices2::
# 723 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_5, BufferChoices2_2
# 727 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_5
BufferChoices2_1:
# 729 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices2_2:
# 724 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_5
	goto BufferChoices2_1


BufferChoices4::
# 732 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_3, BufferChoices4_2
# 732 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_4, BufferChoices4_2
# 732 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_5, BufferChoices4_2
# 738 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_3
# 739 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_4
# 740 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_5
BufferChoices4_1:
# 742 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices4_2:
# 733 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_3
# 734 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_4
# 735 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_5
	goto BufferChoices4_1


SkipContent_Route1::
# 746 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_0
# 747 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 748 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route1_2
SkipContent_Route1_1:
# 753 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route1
# 754 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route1_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route1_4
	goto SkipContent_Route1_1

SkipContent_Route1_4:
# 750 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route1_1


SkipContent_Route2::
# 757 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_1
# 758 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 759 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route2_2
SkipContent_Route2_1:
# 764 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route2
# 765 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route2_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route2_4
	goto SkipContent_Route2_1

SkipContent_Route2_4:
# 761 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route2_1


SkipContent_WindyWoods::
# 768 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_2
# 769 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 770 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_WindyWoods_2
SkipContent_WindyWoods_1:
# 775 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_WindyWoods
# 776 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_WindyWoods_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_WindyWoods_4
	goto SkipContent_WindyWoods_1

SkipContent_WindyWoods_4:
# 772 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_WindyWoods_1


SkipContent_CoralgroveCity::
# 779 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_3
# 780 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 781 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_CoralgroveCity_2
SkipContent_CoralgroveCity_1:
# 786 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_CoralgroveCity
# 787 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_CoralgroveCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_CoralgroveCity_4
	goto SkipContent_CoralgroveCity_1

SkipContent_CoralgroveCity_4:
# 783 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_CoralgroveCity_1


SkipContent_AzuretideTown::
# 790 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_4
# 791 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 792 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AzuretideTown_2
SkipContent_AzuretideTown_1:
# 797 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AzuretideTown
# 798 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AzuretideTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AzuretideTown_4
	goto SkipContent_AzuretideTown_1

SkipContent_AzuretideTown_4:
# 794 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AzuretideTown_1


SkipContent_Route4::
# 801 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_5
# 802 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 803 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route4_2
SkipContent_Route4_1:
# 808 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route4
# 809 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route4_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route4_4
	goto SkipContent_Route4_1

SkipContent_Route4_4:
# 805 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route4_1


SkipContent_PokemonRanch::
# 812 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_PokemonRanch_Text_0
# 813 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 814 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_PokemonRanch_2
SkipContent_PokemonRanch_1:
# 819 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_PokemonRanch
# 820 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_PokemonRanch_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_PokemonRanch_4
	goto SkipContent_PokemonRanch_1

SkipContent_PokemonRanch_4:
# 816 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_PokemonRanch_1


SkipContent_AldeleafCity::
# 823 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_7
# 824 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 825 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AldeleafCity_2
SkipContent_AldeleafCity_1:
# 830 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AldeleafCity
# 831 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AldeleafCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AldeleafCity_4
	goto SkipContent_AldeleafCity_1

SkipContent_AldeleafCity_4:
# 827 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AldeleafCity_1


SkipContent_Route30::
# 834 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_8
# 835 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 836 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route30_2
SkipContent_Route30_1:
# 841 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route30
# 842 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route30_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route30_4
	goto SkipContent_Route30_1

SkipContent_Route30_4:
# 838 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route30_1


SkipContent_WindplumeValley::
# 845 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_9
# 846 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 847 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_WindplumeValley_2
SkipContent_WindplumeValley_1:
# 852 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_WindplumeValley
# 853 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_WindplumeValley_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_WindplumeValley_4
	goto SkipContent_WindplumeValley_1

SkipContent_WindplumeValley_4:
# 849 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_WindplumeValley_1


SkipContent_Route5::
# 856 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_10
# 857 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 858 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route5_2
SkipContent_Route5_1:
# 863 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route5
# 864 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route5_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route5_4
	goto SkipContent_Route5_1

SkipContent_Route5_4:
# 860 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route5_1


SkipContent_FlowerFields::
# 867 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_11
# 868 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 869 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_FlowerFields_2
SkipContent_FlowerFields_1:
# 874 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_FlowerFields
# 875 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_FlowerFields_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_FlowerFields_4
	goto SkipContent_FlowerFields_1

SkipContent_FlowerFields_4:
# 871 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_FlowerFields_1


SkipContent_SkylochVillage::
# 878 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_12
# 879 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 880 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_SkylochVillage_2
SkipContent_SkylochVillage_1:
# 885 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_SkylochVillage
# 886 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_SkylochVillage_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_SkylochVillage_4
	goto SkipContent_SkylochVillage_1

SkipContent_SkylochVillage_4:
# 882 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_SkylochVillage_1


SkipContent_Route6::
# 889 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_13
# 890 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 891 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route6_2
SkipContent_Route6_1:
# 896 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route6
# 897 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route6_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route6_4
	goto SkipContent_Route6_1

SkipContent_Route6_4:
# 893 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route6_1


SkipContent_Route8::
# 900 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_14
# 901 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 902 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route8_2
SkipContent_Route8_1:
# 907 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route8
# 908 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route8_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route8_4
	goto SkipContent_Route8_1

SkipContent_Route8_4:
# 904 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route8_1


SkipContent_ShoreslateCity::
# 911 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_15
# 912 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 913 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_ShoreslateCity_2
SkipContent_ShoreslateCity_1:
# 918 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_ShoreslateCity
# 919 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_ShoreslateCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_ShoreslateCity_4
	goto SkipContent_ShoreslateCity_1

SkipContent_ShoreslateCity_4:
# 915 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_ShoreslateCity_1


SkipContent_ScorchedDesert::
# 922 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_16
# 923 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 924 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_ScorchedDesert_2
SkipContent_ScorchedDesert_1:
# 929 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_ScorchedDesert
# 930 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_ScorchedDesert_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_ScorchedDesert_4
	goto SkipContent_ScorchedDesert_1

SkipContent_ScorchedDesert_4:
# 926 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_ScorchedDesert_1


SkipContent_Route7::
# 933 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_17
# 934 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 935 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route7_2
SkipContent_Route7_1:
# 940 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route7
# 941 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route7_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route7_4
	goto SkipContent_Route7_1

SkipContent_Route7_4:
# 937 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route7_1


SkipContent_MarigorgeTown::
# 944 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_18
# 945 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 946 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_MarigorgeTown_2
SkipContent_MarigorgeTown_1:
# 951 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_MarigorgeTown
# 952 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_MarigorgeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_MarigorgeTown_4
	goto SkipContent_MarigorgeTown_1

SkipContent_MarigorgeTown_4:
# 948 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_MarigorgeTown_1


SkipContent_KaolisleCity::
# 955 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_19
# 956 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 957 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_KaolisleCity_2
SkipContent_KaolisleCity_1:
# 962 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_KaolisleCity
# 963 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_KaolisleCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_KaolisleCity_4
	goto SkipContent_KaolisleCity_1

SkipContent_KaolisleCity_4:
# 959 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_KaolisleCity_1


SkipContent_RockliffeTown::
# 966 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_20
# 967 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 968 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_RockliffeTown_2
SkipContent_RockliffeTown_1:
# 973 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_RockliffeTown
# 974 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_RockliffeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_RockliffeTown_4
	goto SkipContent_RockliffeTown_1

SkipContent_RockliffeTown_4:
# 970 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_RockliffeTown_1


SkipContent_Route11::
# 977 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_21
# 978 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 979 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route11_2
SkipContent_Route11_1:
# 984 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route11
# 985 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route11_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route11_4
	goto SkipContent_Route11_1

SkipContent_Route11_4:
# 981 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route11_1


SkipContent_Route12::
# 988 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_22
# 989 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 990 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route12_2
SkipContent_Route12_1:
# 995 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route12
# 996 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route12_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route12_4
	goto SkipContent_Route12_1

SkipContent_Route12_4:
# 992 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route12_1


SkipContent_SandstoneCity::
# 999 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_23
# 1000 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1001 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_SandstoneCity_2
SkipContent_SandstoneCity_1:
# 1006 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_SandstoneCity
# 1007 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_SandstoneCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_SandstoneCity_4
	goto SkipContent_SandstoneCity_1

SkipContent_SandstoneCity_4:
# 1003 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_SandstoneCity_1


SkipContent_Route13::
# 1010 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_24
# 1011 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1012 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route13_2
SkipContent_Route13_1:
# 1017 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route13
# 1018 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route13_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route13_4
	goto SkipContent_Route13_1

SkipContent_Route13_4:
# 1014 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route13_1


SkipContent_AdamantTower::
# 1021 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_25
# 1022 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1023 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AdamantTower_2
SkipContent_AdamantTower_1:
# 1028 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AdamantTower
# 1029 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AdamantTower_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AdamantTower_4
	goto SkipContent_AdamantTower_1

SkipContent_AdamantTower_4:
# 1025 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AdamantTower_1


SkipContent_Route14::
# 1032 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_26
# 1033 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1034 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route14_2
SkipContent_Route14_1:
# 1039 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route14
# 1040 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route14_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route14_4
	goto SkipContent_Route14_1

SkipContent_Route14_4:
# 1036 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route14_1


SkipContent_Route15::
# 1043 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_27
# 1044 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1045 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route15_2
SkipContent_Route15_1:
# 1050 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route15
# 1051 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route15_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route15_4
	goto SkipContent_Route15_1

SkipContent_Route15_4:
# 1047 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route15_1


SkipContent_FishingVillage::
# 1054 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_28
# 1055 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1056 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_FishingVillage_2
SkipContent_FishingVillage_1:
# 1061 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_FishingVillage
# 1062 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_FishingVillage_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_FishingVillage_4
	goto SkipContent_FishingVillage_1

SkipContent_FishingVillage_4:
# 1058 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_FishingVillage_1


SkipContent_Route23::
# 1065 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_29
# 1066 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1067 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route23_2
SkipContent_Route23_1:
# 1072 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route23
# 1073 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route23_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route23_4
	goto SkipContent_Route23_1

SkipContent_Route23_4:
# 1069 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route23_1


SkipContent_DrisledgeTown::
# 1076 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_30
# 1077 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1078 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_DrisledgeTown_2
SkipContent_DrisledgeTown_1:
# 1083 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_DrisledgeTown
# 1084 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_DrisledgeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_DrisledgeTown_4
	goto SkipContent_DrisledgeTown_1

SkipContent_DrisledgeTown_4:
# 1080 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_DrisledgeTown_1


SkipContent_AmberockTown::
# 1087 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_31
# 1088 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1089 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AmberockTown_2
SkipContent_AmberockTown_1:
# 1094 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AmberockTown
# 1095 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AmberockTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AmberockTown_4
	goto SkipContent_AmberockTown_1

SkipContent_AmberockTown_4:
# 1091 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AmberockTown_1


SkipContent_Route3::
# 1098 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_32
# 1099 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1100 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route3_2
SkipContent_Route3_1:
# 1105 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route3
# 1106 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route3_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route3_4
	goto SkipContent_Route3_1

SkipContent_Route3_4:
# 1102 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route3_1


SkipContent_Route9::
# 1109 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_33
# 1110 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1111 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route9_2
SkipContent_Route9_1:
# 1116 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route9
# 1117 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route9_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route9_4
	goto SkipContent_Route9_1

SkipContent_Route9_4:
# 1113 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route9_1


SkipContent_Route10::
# 1120 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_34
# 1121 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1122 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route10_2
SkipContent_Route10_1:
# 1127 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route10
# 1128 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route10_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route10_4
	goto SkipContent_Route10_1

SkipContent_Route10_4:
# 1124 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route10_1


SkipContent_WindplumeMountain::
# 1131 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_35
# 1132 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1133 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_WindplumeMountain_2
SkipContent_WindplumeMountain_1:
# 1138 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_WindplumeMountain
# 1139 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_WindplumeMountain_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_WindplumeMountain_4
	goto SkipContent_WindplumeMountain_1

SkipContent_WindplumeMountain_4:
# 1135 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_WindplumeMountain_1


SkipContent_Route16::
# 1142 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_36
# 1143 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1144 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route16_2
SkipContent_Route16_1:
# 1149 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route16
# 1150 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route16_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route16_4
	goto SkipContent_Route16_1

SkipContent_Route16_4:
# 1146 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route16_1


SkipContent_BasalekTown::
# 1153 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_37
# 1154 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1155 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_BasalekTown_2
SkipContent_BasalekTown_1:
# 1160 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_BasalekTown
# 1161 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_BasalekTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_BasalekTown_4
	goto SkipContent_BasalekTown_1

SkipContent_BasalekTown_4:
# 1157 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_BasalekTown_1


SkipContent_Route17::
# 1164 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_38
# 1165 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1166 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route17_2
SkipContent_Route17_1:
# 1171 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route17
# 1172 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route17_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route17_4
	goto SkipContent_Route17_1

SkipContent_Route17_4:
# 1168 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route17_1


SkipContent_Route18::
# 1175 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_39
# 1176 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1177 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route18_2
SkipContent_Route18_1:
# 1182 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route18
# 1183 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route18_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route18_4
	goto SkipContent_Route18_1

SkipContent_Route18_4:
# 1179 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route18_1


SkipContent_FrosthearthCity::
# 1186 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_40
# 1187 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1188 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_FrosthearthCity_2
SkipContent_FrosthearthCity_1:
# 1193 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_FrosthearthCity
# 1194 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_FrosthearthCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_FrosthearthCity_4
	goto SkipContent_FrosthearthCity_1

SkipContent_FrosthearthCity_4:
# 1190 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_FrosthearthCity_1


SkipContent_RockClimb::
# 1197 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_RockClimb_Text_0
# 1198 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1199 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_RockClimb_2
SkipContent_RockClimb_1:
# 1202 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_RockClimb
# 1203 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_RockClimb_2:
# 1200 "data/scripts/my_debug.pory"
	msgbox SkipContent_RockClimb_Text_1
	goto SkipContent_RockClimb_1


SkipContent_DesertRuins::
# 1206 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_DesertRuins_Text_0
# 1207 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1208 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_DesertRuins_2
SkipContent_DesertRuins_1:
# 1211 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_DesertRuins
# 1212 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_DesertRuins_2:
# 1209 "data/scripts/my_debug.pory"
	msgbox SkipContent_DesertRuins_Text_1
	goto SkipContent_DesertRuins_1


SkipContent_SafariZone::
# 1215 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_SafariZone_Text_0
# 1216 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1217 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_SafariZone_2
SkipContent_SafariZone_1:
# 1220 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_SafariZone
# 1221 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_SafariZone_2:
# 1218 "data/scripts/my_debug.pory"
	msgbox SkipContent_SafariZone_Text_1
	goto SkipContent_SafariZone_1


SkipContent_MiscSurfing::
# 1225 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_MiscSurfing_Text_0
# 1226 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1227 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_MiscSurfing_2
SkipContent_MiscSurfing_1:
# 1230 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_MiscSurfing
# 1231 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_MiscSurfing_2:
# 1228 "data/scripts/my_debug.pory"
	msgbox SkipContent_MiscSurfing_Text_1
	goto SkipContent_MiscSurfing_1


SkipContentEnd::
# 1252 "data/scripts/my_debug.pory"
	msgbox ContentHasBeenSkipped
# 1253 "data/scripts/my_debug.pory"
	release
	end


ContentSkipper_SkipContent_Route1::
# 1259 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route1_2
# 1263 "data/scripts/my_debug.pory"
	call CompleteArea_Route_1
ContentSkipper_SkipContent_Route1_1:
	return

ContentSkipper_SkipContent_Route1_2:
# 1260 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route1_1


ContentSkipper_SkipContent_Route2::
# 1269 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route2_2
# 1273 "data/scripts/my_debug.pory"
	call CompleteArea_Route_2
ContentSkipper_SkipContent_Route2_1:
	return

ContentSkipper_SkipContent_Route2_2:
# 1270 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route2_1


ContentSkipper_SkipContent_WindyWoods::
# 1279 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 1
# 1280 "data/scripts/my_debug.pory"
	call SkipStory
# 1281 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindyWoods_2
# 1285 "data/scripts/my_debug.pory"
	call CompleteArea_Windy_Woods
ContentSkipper_SkipContent_WindyWoods_1:
	return

ContentSkipper_SkipContent_WindyWoods_2:
# 1282 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindyWoods_1


ContentSkipper_SkipContent_CoralgroveCity::
# 1291 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 2
# 1292 "data/scripts/my_debug.pory"
	call SkipStory
# 1293 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_CoralgroveCity_2
# 1297 "data/scripts/my_debug.pory"
	call CompleteArea_Coralgrove_City
ContentSkipper_SkipContent_CoralgroveCity_1:
	return

ContentSkipper_SkipContent_CoralgroveCity_2:
# 1294 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_CoralgroveCity_1


ContentSkipper_SkipContent_AzuretideTown::
# 1303 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 2
# 1304 "data/scripts/my_debug.pory"
	call SkipStory
# 1305 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AzuretideTown_2
# 1309 "data/scripts/my_debug.pory"
	call CompleteArea_Azuretide_Town
ContentSkipper_SkipContent_AzuretideTown_1:
	return

ContentSkipper_SkipContent_AzuretideTown_2:
# 1306 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AzuretideTown_1


ContentSkipper_SkipContent_Route4::
# 1315 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 2
# 1316 "data/scripts/my_debug.pory"
	call SkipStory
# 1317 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route4_2
# 1321 "data/scripts/my_debug.pory"
	call CompleteArea_Route_4
ContentSkipper_SkipContent_Route4_1:
	return

ContentSkipper_SkipContent_Route4_2:
# 1318 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route4_1


ContentSkipper_SkipContent_PokemonRanch::
# 1327 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 3
# 1328 "data/scripts/my_debug.pory"
	call SkipStory
# 1329 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_PokemonRanch_2
# 1333 "data/scripts/my_debug.pory"
	call CompleteArea_Pokemon_Ranch
ContentSkipper_SkipContent_PokemonRanch_1:
	return

ContentSkipper_SkipContent_PokemonRanch_2:
# 1330 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_PokemonRanch_1


ContentSkipper_SkipContent_AldeleafCity::
# 1339 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1340 "data/scripts/my_debug.pory"
	call SkipStory
# 1341 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AldeleafCity_2
# 1345 "data/scripts/my_debug.pory"
	call CompleteArea_Aldeleaf_City
ContentSkipper_SkipContent_AldeleafCity_1:
	return

ContentSkipper_SkipContent_AldeleafCity_2:
# 1342 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AldeleafCity_1


ContentSkipper_SkipContent_Route30::
# 1351 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1352 "data/scripts/my_debug.pory"
	call SkipStory
# 1353 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route30_2
# 1357 "data/scripts/my_debug.pory"
	call CompleteArea_Route_30
ContentSkipper_SkipContent_Route30_1:
	return

ContentSkipper_SkipContent_Route30_2:
# 1354 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route30_1


ContentSkipper_SkipContent_WindplumeValley::
# 1363 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1364 "data/scripts/my_debug.pory"
	call SkipStory
# 1365 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindplumeValley_2
# 1369 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Valley
ContentSkipper_SkipContent_WindplumeValley_1:
	return

ContentSkipper_SkipContent_WindplumeValley_2:
# 1366 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindplumeValley_1


ContentSkipper_SkipContent_Route5::
# 1375 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1376 "data/scripts/my_debug.pory"
	call SkipStory
# 1377 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route5_2
# 1381 "data/scripts/my_debug.pory"
	call CompleteArea_Route_5
ContentSkipper_SkipContent_Route5_1:
	return

ContentSkipper_SkipContent_Route5_2:
# 1378 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route5_1


ContentSkipper_SkipContent_FlowerFields::
# 1387 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1388 "data/scripts/my_debug.pory"
	call SkipStory
# 1389 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FlowerFields_2
# 1393 "data/scripts/my_debug.pory"
	call CompleteArea_Flower_Fields
ContentSkipper_SkipContent_FlowerFields_1:
	return

ContentSkipper_SkipContent_FlowerFields_2:
# 1390 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FlowerFields_1


ContentSkipper_SkipContent_SkylochVillage::
# 1399 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1400 "data/scripts/my_debug.pory"
	call SkipStory
# 1401 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SkylochVillage_2
# 1405 "data/scripts/my_debug.pory"
	call CompleteArea_Skyloch_Village
ContentSkipper_SkipContent_SkylochVillage_1:
	return

ContentSkipper_SkipContent_SkylochVillage_2:
# 1402 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SkylochVillage_1


ContentSkipper_SkipContent_Route6::
# 1411 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1412 "data/scripts/my_debug.pory"
	call SkipStory
# 1413 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route6_2
# 1417 "data/scripts/my_debug.pory"
	call CompleteArea_Route_6
ContentSkipper_SkipContent_Route6_1:
	return

ContentSkipper_SkipContent_Route6_2:
# 1414 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route6_1


ContentSkipper_SkipContent_Route8::
# 1423 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1424 "data/scripts/my_debug.pory"
	call SkipStory
# 1425 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route8_2
# 1429 "data/scripts/my_debug.pory"
	call CompleteArea_Route_8
ContentSkipper_SkipContent_Route8_1:
	return

ContentSkipper_SkipContent_Route8_2:
# 1426 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route8_1


ContentSkipper_SkipContent_ShoreslateCity::
# 1435 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1436 "data/scripts/my_debug.pory"
	call SkipStory
# 1437 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_ShoreslateCity_2
# 1441 "data/scripts/my_debug.pory"
	call CompleteArea_Shoreslate_City
ContentSkipper_SkipContent_ShoreslateCity_1:
	return

ContentSkipper_SkipContent_ShoreslateCity_2:
# 1438 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_ShoreslateCity_1


ContentSkipper_SkipContent_ScorchedDesert::
# 1447 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1448 "data/scripts/my_debug.pory"
	call SkipStory
# 1449 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_ScorchedDesert_2
# 1453 "data/scripts/my_debug.pory"
	call CompleteArea_Scorched_Desert
ContentSkipper_SkipContent_ScorchedDesert_1:
	return

ContentSkipper_SkipContent_ScorchedDesert_2:
# 1450 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_ScorchedDesert_1


ContentSkipper_SkipContent_Route7::
# 1459 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1460 "data/scripts/my_debug.pory"
	call SkipStory
# 1461 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route7_2
# 1465 "data/scripts/my_debug.pory"
	call CompleteArea_Route_7
ContentSkipper_SkipContent_Route7_1:
	return

ContentSkipper_SkipContent_Route7_2:
# 1462 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route7_1


ContentSkipper_SkipContent_MarigorgeTown::
# 1471 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1472 "data/scripts/my_debug.pory"
	call SkipStory
# 1473 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_MarigorgeTown_2
# 1477 "data/scripts/my_debug.pory"
	call CompleteArea_Marigorge_Town
ContentSkipper_SkipContent_MarigorgeTown_1:
	return

ContentSkipper_SkipContent_MarigorgeTown_2:
# 1474 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_MarigorgeTown_1


ContentSkipper_SkipContent_KaolisleCity::
# 1483 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 6
# 1484 "data/scripts/my_debug.pory"
	call SkipStory
# 1485 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_KaolisleCity_2
# 1489 "data/scripts/my_debug.pory"
	call CompleteArea_Kaolisle_City
ContentSkipper_SkipContent_KaolisleCity_1:
	return

ContentSkipper_SkipContent_KaolisleCity_2:
# 1486 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_KaolisleCity_1


ContentSkipper_SkipContent_RockliffeTown::
# 1495 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 6
# 1496 "data/scripts/my_debug.pory"
	call SkipStory
# 1497 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_RockliffeTown_2
# 1501 "data/scripts/my_debug.pory"
	call CompleteArea_Rockliffe_Town
ContentSkipper_SkipContent_RockliffeTown_1:
	return

ContentSkipper_SkipContent_RockliffeTown_2:
# 1498 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_RockliffeTown_1


ContentSkipper_SkipContent_Route11::
# 1507 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 7
# 1508 "data/scripts/my_debug.pory"
	call SkipStory
# 1509 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route11_2
# 1513 "data/scripts/my_debug.pory"
	call CompleteArea_Route_11
ContentSkipper_SkipContent_Route11_1:
	return

ContentSkipper_SkipContent_Route11_2:
# 1510 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route11_1


ContentSkipper_SkipContent_Route12::
# 1519 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 7
# 1520 "data/scripts/my_debug.pory"
	call SkipStory
# 1521 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route12_2
# 1525 "data/scripts/my_debug.pory"
	call CompleteArea_Route_12
ContentSkipper_SkipContent_Route12_1:
	return

ContentSkipper_SkipContent_Route12_2:
# 1522 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route12_1


ContentSkipper_SkipContent_SandstoneCity::
# 1531 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 8
# 1532 "data/scripts/my_debug.pory"
	call SkipStory
# 1533 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SandstoneCity_2
# 1537 "data/scripts/my_debug.pory"
	call CompleteArea_Sandstone_City
ContentSkipper_SkipContent_SandstoneCity_1:
	return

ContentSkipper_SkipContent_SandstoneCity_2:
# 1534 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SandstoneCity_1


ContentSkipper_SkipContent_Route13::
# 1543 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 8
# 1544 "data/scripts/my_debug.pory"
	call SkipStory
# 1545 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route13_2
# 1549 "data/scripts/my_debug.pory"
	call CompleteArea_Route_13
ContentSkipper_SkipContent_Route13_1:
	return

ContentSkipper_SkipContent_Route13_2:
# 1546 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route13_1


ContentSkipper_SkipContent_AdamantTower::
# 1555 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 9
# 1556 "data/scripts/my_debug.pory"
	call SkipStory
# 1557 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AdamantTower_2
# 1561 "data/scripts/my_debug.pory"
	call CompleteArea_Adamant_Tower
ContentSkipper_SkipContent_AdamantTower_1:
	return

ContentSkipper_SkipContent_AdamantTower_2:
# 1558 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AdamantTower_1


ContentSkipper_SkipContent_Route14::
# 1567 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 10
# 1568 "data/scripts/my_debug.pory"
	call SkipStory
# 1569 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route14_2
# 1573 "data/scripts/my_debug.pory"
	call CompleteArea_Route_14
ContentSkipper_SkipContent_Route14_1:
	return

ContentSkipper_SkipContent_Route14_2:
# 1570 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route14_1


ContentSkipper_SkipContent_Route15::
# 1579 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 11
# 1580 "data/scripts/my_debug.pory"
	call SkipStory
# 1581 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route15_2
# 1585 "data/scripts/my_debug.pory"
	call CompleteArea_Route_15
ContentSkipper_SkipContent_Route15_1:
	return

ContentSkipper_SkipContent_Route15_2:
# 1582 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route15_1


ContentSkipper_SkipContent_FishingVillage::
# 1591 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 11
# 1592 "data/scripts/my_debug.pory"
	call SkipStory
# 1593 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FishingVillage_2
# 1597 "data/scripts/my_debug.pory"
	call CompleteArea_Fishing_Village
ContentSkipper_SkipContent_FishingVillage_1:
	return

ContentSkipper_SkipContent_FishingVillage_2:
# 1594 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FishingVillage_1


ContentSkipper_SkipContent_Route23::
# 1603 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 11
# 1604 "data/scripts/my_debug.pory"
	call SkipStory
# 1605 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route23_2
# 1609 "data/scripts/my_debug.pory"
	call CompleteArea_Route_23
ContentSkipper_SkipContent_Route23_1:
	return

ContentSkipper_SkipContent_Route23_2:
# 1606 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route23_1


ContentSkipper_SkipContent_DrisledgeTown::
# 1615 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 12
# 1616 "data/scripts/my_debug.pory"
	call SkipStory
# 1617 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_DrisledgeTown_2
# 1621 "data/scripts/my_debug.pory"
	call CompleteArea_Drisledge_Town
ContentSkipper_SkipContent_DrisledgeTown_1:
	return

ContentSkipper_SkipContent_DrisledgeTown_2:
# 1618 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_DrisledgeTown_1


ContentSkipper_SkipContent_AmberockTown::
# 1627 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1628 "data/scripts/my_debug.pory"
	call SkipStory
# 1629 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AmberockTown_2
# 1633 "data/scripts/my_debug.pory"
	call CompleteArea_Amberock_Town
ContentSkipper_SkipContent_AmberockTown_1:
	return

ContentSkipper_SkipContent_AmberockTown_2:
# 1630 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AmberockTown_1


ContentSkipper_SkipContent_Route3::
# 1639 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1640 "data/scripts/my_debug.pory"
	call SkipStory
# 1641 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route3_2
# 1645 "data/scripts/my_debug.pory"
	call CompleteArea_Route_3
ContentSkipper_SkipContent_Route3_1:
	return

ContentSkipper_SkipContent_Route3_2:
# 1642 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route3_1


ContentSkipper_SkipContent_Route9::
# 1651 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1652 "data/scripts/my_debug.pory"
	call SkipStory
# 1653 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route9_2
# 1657 "data/scripts/my_debug.pory"
	call CompleteArea_Route_9
ContentSkipper_SkipContent_Route9_1:
	return

ContentSkipper_SkipContent_Route9_2:
# 1654 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route9_1


ContentSkipper_SkipContent_Route10::
# 1663 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1664 "data/scripts/my_debug.pory"
	call SkipStory
# 1665 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route10_2
# 1669 "data/scripts/my_debug.pory"
	call CompleteArea_Route_10
ContentSkipper_SkipContent_Route10_1:
	return

ContentSkipper_SkipContent_Route10_2:
# 1666 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route10_1


ContentSkipper_SkipContent_WindplumeMountain::
# 1675 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1676 "data/scripts/my_debug.pory"
	call SkipStory
# 1677 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindplumeMountain_2
# 1681 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Mountain
ContentSkipper_SkipContent_WindplumeMountain_1:
	return

ContentSkipper_SkipContent_WindplumeMountain_2:
# 1678 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindplumeMountain_1


ContentSkipper_SkipContent_Route16::
# 1687 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1688 "data/scripts/my_debug.pory"
	call SkipStory
# 1689 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route16_2
# 1693 "data/scripts/my_debug.pory"
	call CompleteArea_Route_16
ContentSkipper_SkipContent_Route16_1:
	return

ContentSkipper_SkipContent_Route16_2:
# 1690 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route16_1


ContentSkipper_SkipContent_BasalekTown::
# 1699 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 14
# 1700 "data/scripts/my_debug.pory"
	call SkipStory
# 1701 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_BasalekTown_2
# 1705 "data/scripts/my_debug.pory"
	call CompleteArea_Basalek_Town
ContentSkipper_SkipContent_BasalekTown_1:
	return

ContentSkipper_SkipContent_BasalekTown_2:
# 1702 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_BasalekTown_1


ContentSkipper_SkipContent_Route17::
# 1711 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 14
# 1712 "data/scripts/my_debug.pory"
	call SkipStory
# 1713 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route17_2
# 1717 "data/scripts/my_debug.pory"
	call CompleteArea_Route_17
ContentSkipper_SkipContent_Route17_1:
	return

ContentSkipper_SkipContent_Route17_2:
# 1714 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route17_1


ContentSkipper_SkipContent_Route18::
# 1723 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 14
# 1724 "data/scripts/my_debug.pory"
	call SkipStory
# 1725 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route18_2
# 1729 "data/scripts/my_debug.pory"
	call CompleteArea_Route_18
ContentSkipper_SkipContent_Route18_1:
	return

ContentSkipper_SkipContent_Route18_2:
# 1726 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route18_1


ContentSkipper_SkipContent_FrosthearthCity::
# 1735 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 15
# 1736 "data/scripts/my_debug.pory"
	call SkipStory
# 1737 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FrosthearthCity_2
# 1741 "data/scripts/my_debug.pory"
	call CompleteArea_Frosthearth_City
ContentSkipper_SkipContent_FrosthearthCity_1:
	return

ContentSkipper_SkipContent_FrosthearthCity_2:
# 1738 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FrosthearthCity_1


ContentSkipper_SkipContent_RockClimb::
# 1746 "data/scripts/my_debug.pory"
	call CompleteArea_Rock_Climb
	return


ContentSkipper_SkipContent_DesertRuins::
# 1750 "data/scripts/my_debug.pory"
	call CompleteArea_Desert_Ruins
	return


ContentSkipper_SkipContent_SafariZone::
# 1754 "data/scripts/my_debug.pory"
	call CompleteArea_Safari_Zone
	return


ContentSkipper_SkipContent_MiscSurfing::
# 1759 "data/scripts/my_debug.pory"
	call CompleteArea_Misc_Surfing
	return


SkipStory::
# 1764 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_8, SkipStory_2
# 1767 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 1
	goto_if_ge SkipStory_5
SkipStory_4:
# 1776 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 2
	goto_if_ge SkipStory_8
SkipStory_7:
# 1811 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 3
	goto_if_ge SkipStory_14
SkipStory_13:
# 1828 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 4
	goto_if_ge SkipStory_20
SkipStory_19:
# 1858 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 5
	goto_if_ge SkipStory_29
SkipStory_28:
# 1890 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 6
	goto_if_ge SkipStory_39
SkipStory_38:
# 1913 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 7
	goto_if_ge SkipStory_48
SkipStory_47:
# 1939 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 8
	goto_if_ge SkipStory_58
SkipStory_57:
# 1957 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 9
	goto_if_ge SkipStory_70
SkipStory_69:
# 1992 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 10
	goto_if_ge SkipStory_85
SkipStory_84:
# 1997 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 11
	goto_if_ge SkipStory_94
SkipStory_93:
# 2004 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 12
	goto_if_ge SkipStory_101
SkipStory_100:
# 2024 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 13
	goto_if_ge SkipStory_104
SkipStory_103:
# 2049 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 14
	goto_if_ge SkipStory_110
SkipStory_109:
# 2058 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 15
	goto_if_ge SkipStory_119
SkipStory_118:
# 2078 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_8
	return

SkipStory_2:
	return

SkipStory_5:
# 1768 "data/scripts/my_debug.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_lt SkipStory_11
SkipStory_10:
# 1772 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_ROCKET
# 1773 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_WINDY_WOODS
# 1774 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
	goto SkipStory_4

SkipStory_8:
# 1777 "data/scripts/my_debug.pory"
	compare VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	goto_if_lt SkipStory_17
SkipStory_16:
# 1780 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_CORALGROVE_CITY
# 1781 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_1
# 1782 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_2
# 1783 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_3
# 1784 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_4
# 1785 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_5
# 1786 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_6
# 1787 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_AARON
	checkitem ITEM_TM_U_TURN
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_26
SkipStory_25:
# 1791 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE01_GET
# 1792 "data/scripts/my_debug.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 1793 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_MAY_CORALGROVE_ELEVATOR
	goto_if 1, SkipStory_34
# 1793 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BRENDAN_CORALGROVE_ELEVATOR
	goto_if 1, SkipStory_34
	goto SkipStory_7

SkipStory_11:
# 1769 "data/scripts/my_debug.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 1770 "data/scripts/my_debug.pory"
	additem ITEM_LETTER
	goto SkipStory_10

SkipStory_14:
# 1812 "data/scripts/my_debug.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 1813 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_POKE_RANCH
# 1814 "data/scripts/my_debug.pory"
	setflag FLAG_RANCH_HELPED
# 1815 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 1816 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_VOLKNER_2
	checkitem ITEM_HM01
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_23
SkipStory_22:
# 1820 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 1821 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 1822 "data/scripts/my_debug.pory"
	setflag FLAG_VOLKNER_HELPED
# 1823 "data/scripts/my_debug.pory"
	setflag FLAG_JASMINE_HELPED
# 1824 "data/scripts/my_debug.pory"
	setvar VAR_POKERANCH, 1
# 1825 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_RANCH_ROCKET
# 1826 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_RANCH_ROCKET2
	goto SkipStory_13

SkipStory_17:
# 1778 "data/scripts/my_debug.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	goto SkipStory_16

SkipStory_20:
# 1829 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_WIP_CITY1
# 1830 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_AMPHAROS
# 1831 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH1
# 1832 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH2
# 1833 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH3
# 1834 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
# 1835 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_1
# 1836 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_2
# 1837 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_3
# 1838 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_4
# 1839 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_5
# 1840 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_6
# 1841 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_7
# 1842 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_8
# 1843 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_9
# 1844 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_10
# 1845 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_11
# 1846 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_12
# 1847 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_13
# 1848 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_14
# 1849 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_15
# 1850 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_16
# 1851 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_VOLKNER
# 1852 "data/scripts/my_debug.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
	checkitem ITEM_TM_CHARGE_BEAM
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_32
SkipStory_31:
# 1856 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE02_GET
	goto SkipStory_19

SkipStory_23:
# 1818 "data/scripts/my_debug.pory"
	giveitem ITEM_HM01
	goto SkipStory_22

SkipStory_26:
# 1789 "data/scripts/my_debug.pory"
	additem ITEM_TM_U_TURN
	goto SkipStory_25

SkipStory_29:
# 1859 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_SHORESLATE
# 1860 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 1861 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SHORESLATE_ROCKET
# 1862 "data/scripts/my_debug.pory"
	setvar VAR_DESERT_BYPASS, 1
# 1863 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC1F_ROCKET_1
# 1864 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC1F_ROCKET_2
# 1865 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_1
# 1866 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_2
# 1867 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_3
# 1868 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_4
# 1869 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_1
# 1870 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_2
# 1871 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_3
# 1872 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_4
# 1873 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_5
# 1874 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC3F_ROCKET_1
# 1875 "data/scripts/my_debug.pory"
	setflag FLAG_DEVON_UNDER_ATTACK
# 1876 "data/scripts/my_debug.pory"
	setflag FLAG_HELPED_DEVON_CORP
# 1877 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_SHORESLATE_BOAT
	checkitem ITEM_GO_GOGGLES
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_42
SkipStory_41:
	checkitem ITEM_HM05
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_51
SkipStory_50:
# 1885 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_BIKE, SkipStory_65
SkipStory_64:
# 1888 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_BIKE
	goto SkipStory_28

SkipStory_32:
# 1854 "data/scripts/my_debug.pory"
	additem ITEM_TM_CHARGE_BEAM
	goto SkipStory_31

SkipStory_34:
# 1794 "data/scripts/my_debug.pory"
	msgbox SkipStory_Text_0, MSGBOX_YESNO
# 1795 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipStory_44
# 1807 "data/scripts/my_debug.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
	goto SkipStory_7

SkipStory_39:
# 1891 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH1
# 1892 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH2
# 1893 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH3
# 1894 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH4
# 1895 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CAMPER1
# 1896 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_PICNICKER1
# 1897 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER1
# 1898 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CAMPER2
# 1899 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER2
# 1900 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER3
# 1901 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_PICNICKER2
# 1902 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CAMPER3
# 1903 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_PICNICKER3
# 1904 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER4
# 1905 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CLAY
# 1906 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE03_GET
# 1907 "data/scripts/my_debug.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 1
# 1908 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDEJASMINE_HOTEL
# 1909 "data/scripts/my_debug.pory"
	additem ITEM_TM_STOMPING_TANTRUM
# 1910 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_KAOLISLE
# 1911 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_BROTHER_INTRO
	goto SkipStory_38

SkipStory_42:
# 1879 "data/scripts/my_debug.pory"
	giveitem ITEM_GO_GOGGLES
# 1880 "data/scripts/my_debug.pory"
	removeitem ITEM_LETTER
	goto SkipStory_41

SkipStory_44:
	checkplayergender
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_54
# 1800 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
SkipStory_53:
	checkitem ITEM_ITEMFINDER
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_67
	goto SkipStory_7

SkipStory_48:
# 1914 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_SANDSTONE_CITY
	checkplayergender
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_61
# 1924 "data/scripts/my_debug.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, SkipStory_81
# 1928 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_ROUTE_11_NORMAL
SkipStory_60:
	checkitem ITEM_ITEMFINDER
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_76
SkipStory_75:
# 1934 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 1935 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 1936 "data/scripts/my_debug.pory"
	setvar VAR_GYM_TELEPORT, 1
# 1937 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	goto SkipStory_47

SkipStory_51:
# 1883 "data/scripts/my_debug.pory"
	giveitem ITEM_HM05
	goto SkipStory_50

SkipStory_54:
# 1797 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto SkipStory_53

SkipStory_58:
# 1940 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SkipStory_73
SkipStory_72:
# 1943 "data/scripts/my_debug.pory"
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 2
# 1944 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BADGE04_GET, SkipStory_91
SkipStory_90:
# 1947 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE04_GET
# 1948 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_KORRINA
# 1949 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM1
# 1950 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTF1
# 1951 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTF2
# 1952 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM2
# 1953 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTF3
# 1954 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM3
# 1955 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM4
	goto SkipStory_57

SkipStory_61:
# 1916 "data/scripts/my_debug.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, SkipStory_78
# 1920 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_ROUTE_11_NORMAL
	goto SkipStory_60

SkipStory_65:
# 1886 "data/scripts/my_debug.pory"
	giveitem ITEM_ACRO_BIKE
	goto SkipStory_64

SkipStory_67:
# 1803 "data/scripts/my_debug.pory"
	additem ITEM_ITEMFINDER
	goto SkipStory_7

SkipStory_70:
# 1958 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_MAN3
# 1959 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_WOMAN5
# 1960 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_PSYCHIC
# 1961 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_MAN5
# 1962 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_EXPERT_M
# 1963 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_EXPERT_F
# 1964 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_HEXMANIAC
# 1965 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_PSYCHICF
# 1966 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_BLACKBELT
# 1967 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_HEXMANIAC
# 1968 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_LASS
# 1969 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_YOUNGSTER
# 1970 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_BATTLEGIRL
# 1971 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_BLACKBELT2
# 1972 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_5F_COOLTRAINER_M
# 1973 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_5F_COOLTRAINER_F
	checkitem ITEM_MEGA_RING
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_88
SkipStory_87:
# 1977 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_MEGA_RING
# 1978 "data/scripts/my_debug.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
# 1979 "data/scripts/my_debug.pory"
	clearflag FLAG_KORRINA_LEAVESGYM
# 1980 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 1981 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_LAB_RIVAL
# 1982 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_LIBRARY_BIRCH
# 1983 "data/scripts/my_debug.pory"
	switch VAR_STARTER_MON
# 1984 "data/scripts/my_debug.pory"
	case SPECIES_ROWLET, SkipStory_97
# 1986 "data/scripts/my_debug.pory"
	case SPECIES_TORCHIC, SkipStory_98
# 1988 "data/scripts/my_debug.pory"
	case SPECIES_PIPLUP, SkipStory_99
	goto SkipStory_69

SkipStory_73:
# 1941 "data/scripts/my_debug.pory"
	setflag FLAG_KORRINA_LEAVESGYM
	goto SkipStory_72

SkipStory_76:
# 1932 "data/scripts/my_debug.pory"
	giveitem ITEM_ITEMFINDER
	goto SkipStory_75

SkipStory_78:
# 1917 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_ROUTE_11_ANGRY
	goto SkipStory_60

SkipStory_81:
# 1925 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto SkipStory_60

SkipStory_85:
# 1993 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 1994 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_LAB_RIVAL
# 1995 "data/scripts/my_debug.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 3
	goto SkipStory_84

SkipStory_88:
# 1975 "data/scripts/my_debug.pory"
	giveitem ITEM_MEGA_RING
	goto SkipStory_87

SkipStory_91:
# 1945 "data/scripts/my_debug.pory"
	additem ITEM_TM_POWER_UP_PUNCH
	goto SkipStory_90

SkipStory_94:
# 1998 "data/scripts/my_debug.pory"
	setflag FLAG_ACEROLA_TALKED_TO
# 1999 "data/scripts/my_debug.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
# 2000 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BERRYROCKET
# 2001 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BROTHER_5_FISHINGVILLAGE
# 2002 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_FISHING_VILLAGE
	goto SkipStory_93

SkipStory_97:
# 1985 "data/scripts/my_debug.pory"
	additem ITEM_DECIDUEITE
	goto SkipStory_69

SkipStory_98:
# 1987 "data/scripts/my_debug.pory"
	additem ITEM_BLAZIKENITE
	goto SkipStory_69

SkipStory_99:
# 1989 "data/scripts/my_debug.pory"
	additem ITEM_EMPOLEONITE
	goto SkipStory_69

SkipStory_101:
# 2005 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE05_GET
	checkitem ITEM_TM_SHADOW_CLAW
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_107
SkipStory_106:
# 2009 "data/scripts/my_debug.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_lt SkipStory_116
SkipStory_115:
# 2012 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_1
# 2013 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_2
# 2014 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_3
# 2015 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_4
# 2016 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_5
# 2017 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_6
# 2018 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_ACEROLA
	checkitem ITEM_HM03
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_128
SkipStory_127:
# 2022 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_SURF
	goto SkipStory_100

SkipStory_104:
# 2025 "data/scripts/my_debug.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_STORY_COMPLETE
# 2026 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_1
# 2027 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_2
# 2028 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_3
# 2029 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_4
# 2030 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_5
# 2031 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_PETREL
# 2032 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FACTORY_ITEM_1, SkipStory_113
SkipStory_112:
# 2036 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FACTORY_ITEM_2, SkipStory_125
SkipStory_124:
# 2040 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FACTORY_ITEM_3, SkipStory_133
SkipStory_132:
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_135
	goto SkipStory_103

SkipStory_107:
# 2007 "data/scripts/my_debug.pory"
	additem ITEM_TM_SHADOW_CLAW
	goto SkipStory_106

SkipStory_110:
# 2050 "data/scripts/my_debug.pory"
	setflag FLAG_RIVAL_MET_IN_BASALEK
	checkplayergender
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_121
# 2055 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_BASALEK_TOWN
	goto SkipStory_109

SkipStory_113:
# 2033 "data/scripts/my_debug.pory"
	setflag FLAG_FACTORY_ITEM_1
# 2034 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ELIXIR
	goto SkipStory_112

SkipStory_116:
# 2010 "data/scripts/my_debug.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
	goto SkipStory_115

SkipStory_119:
# 2059 "data/scripts/my_debug.pory"
	setflag FLAG_PRYCE_ESCORTED
# 2060 "data/scripts/my_debug.pory"
	addbp 10
# 2061 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_PRYCE
# 2062 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_BLAINE
# 2063 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_HIKER1
# 2064 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_KINDLER1
# 2065 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_SENIOR
# 2066 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_JUNIOR
# 2067 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_RANGER_M
# 2068 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_RANGER_F
# 2069 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_MANIAC
# 2070 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_COLLECTOR
# 2071 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_KINDLER2
# 2072 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_RANGER_F2
# 2073 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE06_GET
	checkitem ITEM_TM_ICE_BURN
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_130
	goto SkipStory_118

SkipStory_121:
# 2052 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_BASALEK_TOWN
	goto SkipStory_109

SkipStory_125:
# 2037 "data/scripts/my_debug.pory"
	setflag FLAG_FACTORY_ITEM_1
# 2038 "data/scripts/my_debug.pory"
	additem ITEM_X_ATTACK
	goto SkipStory_124

SkipStory_128:
# 2020 "data/scripts/my_debug.pory"
	giveitem ITEM_HM03
	goto SkipStory_127

SkipStory_130:
# 2075 "data/scripts/my_debug.pory"
	additem ITEM_TM_ICE_BURN
	goto SkipStory_118

SkipStory_133:
# 2041 "data/scripts/my_debug.pory"
	setflag FLAG_FACTORY_ITEM_1
# 2042 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto SkipStory_132

SkipStory_135:
# 2045 "data/scripts/my_debug.pory"
	removeitem ITEM_RESEARCH_PAPERS
# 2046 "data/scripts/my_debug.pory"
	giveitem ITEM_ZYGARDE_CUBE
	goto SkipStory_103


CompleteAllAreas::
# 2082 "data/scripts/my_debug.pory"
	call CompleteArea_Route_1
# 2083 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq CompleteAllAreas_2
# 2084 "data/scripts/my_debug.pory"
	call CompleteArea_Route_2
# 2085 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq CompleteAllAreas_5
# 2086 "data/scripts/my_debug.pory"
	call CompleteArea_Windy_Woods
# 2087 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq CompleteAllAreas_8
# 2088 "data/scripts/my_debug.pory"
	call CompleteArea_Coralgrove_City
# 2089 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 3
	goto_if_eq CompleteAllAreas_11
# 2090 "data/scripts/my_debug.pory"
	call CompleteArea_Azuretide_Town
# 2091 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 4
	goto_if_eq CompleteAllAreas_14
# 2092 "data/scripts/my_debug.pory"
	call CompleteArea_Route_4
# 2093 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 5
	goto_if_eq CompleteAllAreas_17
# 2094 "data/scripts/my_debug.pory"
	call CompleteArea_Pokemon_Ranch
# 2095 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 6
	goto_if_eq CompleteAllAreas_20
# 2096 "data/scripts/my_debug.pory"
	call CompleteArea_Aldeleaf_City
# 2097 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 7
	goto_if_eq CompleteAllAreas_23
# 2098 "data/scripts/my_debug.pory"
	call CompleteArea_Route_30
# 2099 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 8
	goto_if_eq CompleteAllAreas_26
# 2100 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Valley
# 2101 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 9
	goto_if_eq CompleteAllAreas_29
# 2102 "data/scripts/my_debug.pory"
	call CompleteArea_Route_5
# 2103 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq CompleteAllAreas_32
# 2104 "data/scripts/my_debug.pory"
	call CompleteArea_Flower_Fields
# 2105 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 11
	goto_if_eq CompleteAllAreas_35
# 2106 "data/scripts/my_debug.pory"
	call CompleteArea_Skyloch_Village
# 2107 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 12
	goto_if_eq CompleteAllAreas_38
# 2108 "data/scripts/my_debug.pory"
	call CompleteArea_Route_6
# 2109 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 13
	goto_if_eq CompleteAllAreas_41
# 2110 "data/scripts/my_debug.pory"
	call CompleteArea_Route_8
# 2111 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 14
	goto_if_eq CompleteAllAreas_44
# 2112 "data/scripts/my_debug.pory"
	call CompleteArea_Shoreslate_City
# 2113 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 15
	goto_if_eq CompleteAllAreas_47
# 2114 "data/scripts/my_debug.pory"
	call CompleteArea_Scorched_Desert
# 2115 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 16
	goto_if_eq CompleteAllAreas_50
# 2116 "data/scripts/my_debug.pory"
	call CompleteArea_Route_7
# 2117 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 17
	goto_if_eq CompleteAllAreas_53
# 2118 "data/scripts/my_debug.pory"
	call CompleteArea_Marigorge_Town
# 2119 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 18
	goto_if_eq CompleteAllAreas_56
# 2120 "data/scripts/my_debug.pory"
	call CompleteArea_Kaolisle_City
# 2121 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 19
	goto_if_eq CompleteAllAreas_59
# 2122 "data/scripts/my_debug.pory"
	call CompleteArea_Rockliffe_Town
# 2123 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 20
	goto_if_eq CompleteAllAreas_62
# 2124 "data/scripts/my_debug.pory"
	call CompleteArea_Route_11
# 2125 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 21
	goto_if_eq CompleteAllAreas_65
# 2126 "data/scripts/my_debug.pory"
	call CompleteArea_Route_12
# 2127 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 22
	goto_if_eq CompleteAllAreas_68
# 2128 "data/scripts/my_debug.pory"
	call CompleteArea_Sandstone_City
# 2129 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 23
	goto_if_eq CompleteAllAreas_71
# 2130 "data/scripts/my_debug.pory"
	call CompleteArea_Route_13
# 2131 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 24
	goto_if_eq CompleteAllAreas_74
# 2132 "data/scripts/my_debug.pory"
	call CompleteArea_Adamant_Tower
# 2133 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 25
	goto_if_eq CompleteAllAreas_77
# 2134 "data/scripts/my_debug.pory"
	call CompleteArea_Route_14
# 2135 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 26
	goto_if_eq CompleteAllAreas_80
# 2136 "data/scripts/my_debug.pory"
	call CompleteArea_Route_15
# 2137 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 27
	goto_if_eq CompleteAllAreas_83
# 2138 "data/scripts/my_debug.pory"
	call CompleteArea_Fishing_Village
# 2139 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 28
	goto_if_eq CompleteAllAreas_86
# 2140 "data/scripts/my_debug.pory"
	call CompleteArea_Route_23
# 2141 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 29
	goto_if_eq CompleteAllAreas_89
# 2142 "data/scripts/my_debug.pory"
	call CompleteArea_Drisledge_Town
# 2143 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 30
	goto_if_eq CompleteAllAreas_92
# 2144 "data/scripts/my_debug.pory"
	call CompleteArea_Amberock_Town
# 2145 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 31
	goto_if_eq CompleteAllAreas_95
# 2146 "data/scripts/my_debug.pory"
	call CompleteArea_Route_3
# 2147 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 32
	goto_if_eq CompleteAllAreas_98
# 2148 "data/scripts/my_debug.pory"
	call CompleteArea_Route_9
# 2149 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 33
	goto_if_eq CompleteAllAreas_101
# 2150 "data/scripts/my_debug.pory"
	call CompleteArea_Route_10
# 2151 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 34
	goto_if_eq CompleteAllAreas_104
# 2152 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Mountain
# 2153 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 35
	goto_if_eq CompleteAllAreas_107
# 2154 "data/scripts/my_debug.pory"
	call CompleteArea_Route_16
# 2155 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 36
	goto_if_eq CompleteAllAreas_110
# 2156 "data/scripts/my_debug.pory"
	call CompleteArea_Basalek_Town
# 2157 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 37
	goto_if_eq CompleteAllAreas_113
# 2158 "data/scripts/my_debug.pory"
	call CompleteArea_Route_17
# 2159 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 38
	goto_if_eq CompleteAllAreas_116
# 2160 "data/scripts/my_debug.pory"
	call CompleteArea_Route_18
# 2161 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 39
	goto_if_eq CompleteAllAreas_119
# 2162 "data/scripts/my_debug.pory"
	call CompleteArea_Frosthearth_City
# 2163 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 40
	goto_if_eq CompleteAllAreas_122
# 2164 "data/scripts/my_debug.pory"
	call CompleteArea_Rock_Climb
# 2165 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 41
	goto_if_eq CompleteAllAreas_125
# 2166 "data/scripts/my_debug.pory"
	call CompleteArea_Desert_Ruins
# 2167 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 42
	goto_if_eq CompleteAllAreas_128
# 2168 "data/scripts/my_debug.pory"
	call CompleteArea_Safari_Zone
# 2169 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 43
	goto_if_eq CompleteAllAreas_131
# 2170 "data/scripts/my_debug.pory"
	call CompleteArea_Misc_Surfing
# 2171 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 44
	goto_if_eq CompleteAllAreas_133
	return

CompleteAllAreas_2:
	return

CompleteAllAreas_5:
	return

CompleteAllAreas_8:
	return

CompleteAllAreas_11:
	return

CompleteAllAreas_14:
	return

CompleteAllAreas_17:
	return

CompleteAllAreas_20:
	return

CompleteAllAreas_23:
	return

CompleteAllAreas_26:
	return

CompleteAllAreas_29:
	return

CompleteAllAreas_32:
	return

CompleteAllAreas_35:
	return

CompleteAllAreas_38:
	return

CompleteAllAreas_41:
	return

CompleteAllAreas_44:
	return

CompleteAllAreas_47:
	return

CompleteAllAreas_50:
	return

CompleteAllAreas_53:
	return

CompleteAllAreas_56:
	return

CompleteAllAreas_59:
	return

CompleteAllAreas_62:
	return

CompleteAllAreas_65:
	return

CompleteAllAreas_68:
	return

CompleteAllAreas_71:
	return

CompleteAllAreas_74:
	return

CompleteAllAreas_77:
	return

CompleteAllAreas_80:
	return

CompleteAllAreas_83:
	return

CompleteAllAreas_86:
	return

CompleteAllAreas_89:
	return

CompleteAllAreas_92:
	return

CompleteAllAreas_95:
	return

CompleteAllAreas_98:
	return

CompleteAllAreas_101:
	return

CompleteAllAreas_104:
	return

CompleteAllAreas_107:
	return

CompleteAllAreas_110:
	return

CompleteAllAreas_113:
	return

CompleteAllAreas_116:
	return

CompleteAllAreas_119:
	return

CompleteAllAreas_122:
	return

CompleteAllAreas_125:
	return

CompleteAllAreas_128:
	return

CompleteAllAreas_131:
	return

CompleteAllAreas_133:
	return


CompleteArea_Route_1::
# 2175 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_1_2
CompleteArea_Route_1_1:
# 2181 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_1_5
CompleteArea_Route_1_4:
# 2192 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_1_10
CompleteArea_Route_1_9:
	return

CompleteArea_Route_1_2:
# 2176 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION, CompleteArea_Route_1_7
	goto CompleteArea_Route_1_1

CompleteArea_Route_1_5:
# 2182 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_YOUNGSTER
# 2183 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_FISHER
# 2184 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_BUG_CATCHER
# 2185 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_TUBER
# 2186 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R1_COOLTRAINER
	goto_if 0, CompleteArea_Route_1_12
	goto CompleteArea_Route_1_4

CompleteArea_Route_1_7:
# 2177 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION
# 2178 "data/scripts/my_debug.pory"
	additem ITEM_POTION
	goto CompleteArea_Route_1_1

CompleteArea_Route_1_10:
# 2193 "data/scripts/my_debug.pory"
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
# 2194 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, CompleteArea_Route_1_14
	goto CompleteArea_Route_1_9

CompleteArea_Route_1_12:
# 2187 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_COOLTRAINER
# 2188 "data/scripts/my_debug.pory"
	addbp 10
# 2189 "data/scripts/my_debug.pory"
	giveitem ITEM_EXP_SHARE
	goto CompleteArea_Route_1_4

CompleteArea_Route_1_14:
# 2195 "data/scripts/my_debug.pory"
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	goto CompleteArea_Route_1_9


CompleteArea_Route_2::
# 2201 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_2_2
CompleteArea_Route_2_1:
# 2233 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_2_5
CompleteArea_Route_2_4:
# 2241 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_2_11
CompleteArea_Route_2_10:
	return

CompleteArea_Route_2_2:
# 2202 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_PEARL1, CompleteArea_Route_2_8
CompleteArea_Route_2_7:
# 2206 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL, CompleteArea_Route_2_14
CompleteArea_Route_2_13:
# 2210 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_PEARL2, CompleteArea_Route_2_19
CompleteArea_Route_2_18:
# 2214 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE2_X_ATTACK, CompleteArea_Route_2_22
CompleteArea_Route_2_21:
# 2218 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL, CompleteArea_Route_2_25
CompleteArea_Route_2_24:
# 2222 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE2_REVIVE, CompleteArea_Route_2_28
CompleteArea_Route_2_27:
# 2226 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_2_PECHA
# 2227 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2228 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_2_ORAN
# 2229 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2230 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_2_CHERI
# 2231 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_2_1

CompleteArea_Route_2_5:
# 2234 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_FISHER
# 2235 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_LASS
# 2236 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_BLACKBELT
# 2237 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_YOUNGSTER
# 2238 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_YOUNGSTER2
# 2239 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_SCHOOL_KID_F
	goto CompleteArea_Route_2_4

CompleteArea_Route_2_8:
# 2203 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
# 2204 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_2_7

CompleteArea_Route_2_11:
# 2242 "data/scripts/my_debug.pory"
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
# 2243 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, CompleteArea_Route_2_16
	goto CompleteArea_Route_2_10

CompleteArea_Route_2_14:
# 2207 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
# 2208 "data/scripts/my_debug.pory"
	additem ITEM_ANTIDOTE
	goto CompleteArea_Route_2_13

CompleteArea_Route_2_16:
# 2244 "data/scripts/my_debug.pory"
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	goto CompleteArea_Route_2_10

CompleteArea_Route_2_19:
# 2211 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL2
# 2212 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_2_18

CompleteArea_Route_2_22:
# 2215 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
# 2216 "data/scripts/my_debug.pory"
	additem ITEM_X_ATTACK
	goto CompleteArea_Route_2_21

CompleteArea_Route_2_25:
# 2219 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
# 2220 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_2_24

CompleteArea_Route_2_28:
# 2223 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE2_REVIVE
# 2224 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Route_2_27


CompleteArea_Windy_Woods::
# 2250 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Windy_Woods_2
CompleteArea_Windy_Woods_1:
# 2272 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Windy_Woods_5
CompleteArea_Windy_Woods_4:
# 2294 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Windy_Woods_11
CompleteArea_Windy_Woods_10:
	return

CompleteArea_Windy_Woods_2:
# 2251 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_WW_PARLYZ, CompleteArea_Windy_Woods_8
CompleteArea_Windy_Woods_7:
# 2255 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_WW_DAMP_ROCK, CompleteArea_Windy_Woods_16
CompleteArea_Windy_Woods_15:
# 2259 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_WW_CARBOS, CompleteArea_Windy_Woods_23
CompleteArea_Windy_Woods_22:
# 2263 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_WW_RARE_CANDY, CompleteArea_Windy_Woods_26
CompleteArea_Windy_Woods_25:
# 2267 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_WW_ETHER, CompleteArea_Windy_Woods_28
	goto CompleteArea_Windy_Woods_1

CompleteArea_Windy_Woods_5:
# 2273 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_BUGCATCHER
# 2274 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_LADY
# 2275 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_BUGCATCHER_2
# 2276 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_CAMPER
# 2277 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_LASS
# 2278 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_YOUNGSTER
# 2279 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_NURSE
# 2280 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 0, CompleteArea_Windy_Woods_13
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_8:
# 2252 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_WW_PARLYZ
# 2253 "data/scripts/my_debug.pory"
	additem ITEM_PARALYZE_HEAL
	goto CompleteArea_Windy_Woods_7

CompleteArea_Windy_Woods_11:
# 2295 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
# 2296 "data/scripts/my_debug.pory"
	setflag FLAG_GLADE_PUZZLE
	goto CompleteArea_Windy_Woods_10

CompleteArea_Windy_Woods_13:
# 2281 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_ACE_TRAINER
# 2282 "data/scripts/my_debug.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 2283 "data/scripts/my_debug.pory"
	addbp 10
# 2284 "data/scripts/my_debug.pory"
	switch VAR_STARTER_MON
# 2285 "data/scripts/my_debug.pory"
	case SPECIES_ROWLET, CompleteArea_Windy_Woods_19
# 2287 "data/scripts/my_debug.pory"
	case SPECIES_TORCHIC, CompleteArea_Windy_Woods_20
# 2289 "data/scripts/my_debug.pory"
	case SPECIES_PIPLUP, CompleteArea_Windy_Woods_21
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_16:
# 2256 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_WW_DAMP_ROCK
# 2257 "data/scripts/my_debug.pory"
	additem ITEM_DAMP_ROCK
	goto CompleteArea_Windy_Woods_15

CompleteArea_Windy_Woods_19:
# 2286 "data/scripts/my_debug.pory"
	additem ITEM_MIRACLE_SEED
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_20:
# 2288 "data/scripts/my_debug.pory"
	additem ITEM_CHARCOAL
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_21:
# 2290 "data/scripts/my_debug.pory"
	additem ITEM_MYSTIC_WATER
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_23:
# 2260 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_WW_CARBOS
# 2261 "data/scripts/my_debug.pory"
	additem ITEM_X_SPEED
	goto CompleteArea_Windy_Woods_22

CompleteArea_Windy_Woods_26:
# 2264 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_WW_RARE_CANDY
# 2265 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Windy_Woods_25

CompleteArea_Windy_Woods_28:
# 2268 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_WW_ETHER
# 2269 "data/scripts/my_debug.pory"
	additem ITEM_POTION
	goto CompleteArea_Windy_Woods_1


CompleteArea_Coralgrove_City::
# 2301 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Coralgrove_City_2
CompleteArea_Coralgrove_City_1:
# 2319 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Coralgrove_City_5
CompleteArea_Coralgrove_City_4:
# 2328 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Coralgrove_City_11
CompleteArea_Coralgrove_City_10:
	return

CompleteArea_Coralgrove_City_2:
# 2302 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_CORAL_GREATBALL, CompleteArea_Coralgrove_City_8
CompleteArea_Coralgrove_City_7:
# 2306 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY, CompleteArea_Coralgrove_City_16
CompleteArea_Coralgrove_City_15:
# 2310 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HARBOR_GREATBALL, CompleteArea_Coralgrove_City_22
CompleteArea_Coralgrove_City_21:
# 2314 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HARBOR_PEARL, CompleteArea_Coralgrove_City_27
	goto CompleteArea_Coralgrove_City_1

CompleteArea_Coralgrove_City_5:
# 2320 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_1
# 2321 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_2
# 2322 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_3
# 2323 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_4
	checkitem ITEM_TM_FALSE_SWIPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_13
	goto CompleteArea_Coralgrove_City_4

CompleteArea_Coralgrove_City_8:
# 2303 "data/scripts/my_debug.pory"
	setflag FLAG_CORAL_GREATBALL
# 2304 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Coralgrove_City_7

CompleteArea_Coralgrove_City_11:
# 2329 "data/scripts/my_debug.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 2330 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_CORALGROVE_CUTSCENE, CompleteArea_Coralgrove_City_19
CompleteArea_Coralgrove_City_18:
	checkitem ITEM_TM_REST
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_25
CompleteArea_Coralgrove_City_24:
	checkitem ITEM_OLD_ROD
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_29
	goto CompleteArea_Coralgrove_City_10

CompleteArea_Coralgrove_City_13:
# 2325 "data/scripts/my_debug.pory"
	additem ITEM_TM_FALSE_SWIPE
	goto CompleteArea_Coralgrove_City_4

CompleteArea_Coralgrove_City_16:
# 2307 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
# 2308 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Coralgrove_City_15

CompleteArea_Coralgrove_City_19:
# 2331 "data/scripts/my_debug.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 2332 "data/scripts/my_debug.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
	goto CompleteArea_Coralgrove_City_18

CompleteArea_Coralgrove_City_22:
# 2311 "data/scripts/my_debug.pory"
	setflag FLAG_HARBOR_GREATBALL
# 2312 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Coralgrove_City_21

CompleteArea_Coralgrove_City_25:
# 2335 "data/scripts/my_debug.pory"
	additem ITEM_TM_REST
	goto CompleteArea_Coralgrove_City_24

CompleteArea_Coralgrove_City_27:
# 2315 "data/scripts/my_debug.pory"
	setflag FLAG_HARBOR_PEARL
# 2316 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Coralgrove_City_1

CompleteArea_Coralgrove_City_29:
# 2338 "data/scripts/my_debug.pory"
	additem ITEM_OLD_ROD
	goto CompleteArea_Coralgrove_City_10


CompleteArea_Azuretide_Town::
# 2344 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Azuretide_Town_2
CompleteArea_Azuretide_Town_1:
# 2358 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Azuretide_Town_5
CompleteArea_Azuretide_Town_4:
	return

CompleteArea_Azuretide_Town_2:
# 2345 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COASTTOWN_PEARL, CompleteArea_Azuretide_Town_8
CompleteArea_Azuretide_Town_7:
# 2349 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COASTTOWN_REDSHARD, CompleteArea_Azuretide_Town_14
CompleteArea_Azuretide_Town_13:
# 2353 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COASTTOWN_HEATROCK, CompleteArea_Azuretide_Town_18
	goto CompleteArea_Azuretide_Town_1

CompleteArea_Azuretide_Town_5:
# 2359 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AZURETIDE_HONEY, CompleteArea_Azuretide_Town_11
CompleteArea_Azuretide_Town_10:
	checkitem ITEM_TOWN_MAP
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Azuretide_Town_16
	goto CompleteArea_Azuretide_Town_4

CompleteArea_Azuretide_Town_8:
# 2346 "data/scripts/my_debug.pory"
	setflag FLAG_COASTTOWN_PEARL
# 2347 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Azuretide_Town_7

CompleteArea_Azuretide_Town_11:
# 2360 "data/scripts/my_debug.pory"
	additem ITEM_HONEY, 3
# 2361 "data/scripts/my_debug.pory"
	setflag FLAG_AZURETIDE_HONEY
	goto CompleteArea_Azuretide_Town_10

CompleteArea_Azuretide_Town_14:
# 2350 "data/scripts/my_debug.pory"
	setflag FLAG_COASTTOWN_REDSHARD
# 2351 "data/scripts/my_debug.pory"
	additem ITEM_RED_SHARD
	goto CompleteArea_Azuretide_Town_13

CompleteArea_Azuretide_Town_16:
# 2364 "data/scripts/my_debug.pory"
	additem ITEM_TOWN_MAP
# 2365 "data/scripts/my_debug.pory"
	removemoney 2000
	goto CompleteArea_Azuretide_Town_4

CompleteArea_Azuretide_Town_18:
# 2354 "data/scripts/my_debug.pory"
	setflag FLAG_COASTTOWN_HEATROCK
# 2355 "data/scripts/my_debug.pory"
	additem ITEM_HEAT_ROCK
	goto CompleteArea_Azuretide_Town_1


CompleteArea_Route_4::
# 2371 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_4_2
CompleteArea_Route_4_1:
# 2403 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_4_5
CompleteArea_Route_4_4:
	return

CompleteArea_Route_4_2:
# 2372 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE3_ANTIDOTE, CompleteArea_Route_4_8
CompleteArea_Route_4_7:
# 2376 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL, CompleteArea_Route_4_11
CompleteArea_Route_4_10:
# 2380 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL, CompleteArea_Route_4_14
CompleteArea_Route_4_13:
# 2384 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_REVIVE, CompleteArea_Route_4_17
CompleteArea_Route_4_16:
# 2388 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_ETHER, CompleteArea_Route_4_20
CompleteArea_Route_4_19:
# 2392 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE3_GIGADRAIN, CompleteArea_Route_4_23
CompleteArea_Route_4_22:
# 2396 "data/scripts/my_debug.pory"
	pickberrytree 4
# 2397 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2398 "data/scripts/my_debug.pory"
	pickberrytree 6
# 2399 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2400 "data/scripts/my_debug.pory"
	pickberrytree 7
# 2401 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_4_1

CompleteArea_Route_4_5:
# 2404 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_HIKER
# 2405 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_POKEMANIAC
# 2406 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_BUGCATCHER
# 2407 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_TWINS
# 2408 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_TRIATHLETE
# 2409 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_CAMPER
# 2410 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_COOL_F
# 2411 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_COOL_M
# 2412 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER
# 2413 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_YOUNGSTER
# 2414 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER2
# 2415 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_LASS
# 2416 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_YOUNGSTER2
# 2417 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_TRIATHLETE2
	goto CompleteArea_Route_4_4

CompleteArea_Route_4_8:
# 2373 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
# 2374 "data/scripts/my_debug.pory"
	additem ITEM_ANTIDOTE
	goto CompleteArea_Route_4_7

CompleteArea_Route_4_11:
# 2377 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
# 2378 "data/scripts/my_debug.pory"
	additem ITEM_POKE_BALL
	goto CompleteArea_Route_4_10

CompleteArea_Route_4_14:
# 2381 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
# 2382 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_4_13

CompleteArea_Route_4_17:
# 2385 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
# 2386 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Route_4_16

CompleteArea_Route_4_20:
# 2389 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
# 2390 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Route_4_19

CompleteArea_Route_4_23:
# 2393 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
# 2394 "data/scripts/my_debug.pory"
	additem ITEM_TM_GRASS_KNOT
	goto CompleteArea_Route_4_22


CompleteArea_Pokemon_Ranch::
# 2422 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Pokemon_Ranch_2
CompleteArea_Pokemon_Ranch_1:
# 2428 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Pokemon_Ranch_5
CompleteArea_Pokemon_Ranch_4:
	return

CompleteArea_Pokemon_Ranch_2:
# 2423 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_RANCH, CompleteArea_Pokemon_Ranch_7
	goto CompleteArea_Pokemon_Ranch_1

CompleteArea_Pokemon_Ranch_5:
# 2429 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Pokemon_Ranch_10
	goto CompleteArea_Pokemon_Ranch_4

CompleteArea_Pokemon_Ranch_7:
# 2424 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_RANCH
# 2425 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Pokemon_Ranch_1

CompleteArea_Pokemon_Ranch_9:
# 2430 "data/scripts/my_debug.pory"
	additem ITEM_AMPHAROSITE
# 2431 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_AMPHAROSITE
	goto CompleteArea_Pokemon_Ranch_4

CompleteArea_Pokemon_Ranch_10:
# 2429 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_AMPHAROSITE, CompleteArea_Pokemon_Ranch_9
	goto CompleteArea_Pokemon_Ranch_4


CompleteArea_Aldeleaf_City::
# 2437 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Aldeleaf_City_2
CompleteArea_Aldeleaf_City_1:
# 2451 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Aldeleaf_City_5
CompleteArea_Aldeleaf_City_4:
# 2458 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Aldeleaf_City_11
CompleteArea_Aldeleaf_City_10:
	return

CompleteArea_Aldeleaf_City_2:
# 2438 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_LOST_KEY, CompleteArea_Aldeleaf_City_8
CompleteArea_Aldeleaf_City_7:
# 2442 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_MUSHROOM2, CompleteArea_Aldeleaf_City_16
CompleteArea_Aldeleaf_City_15:
# 2446 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_MUSHROOM, CompleteArea_Aldeleaf_City_21
	goto CompleteArea_Aldeleaf_City_1

CompleteArea_Aldeleaf_City_5:
# 2452 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_ALDELEAF_MANIAC
	goto_if 0, CompleteArea_Aldeleaf_City_13
	goto CompleteArea_Aldeleaf_City_4

CompleteArea_Aldeleaf_City_8:
# 2439 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 2440 "data/scripts/my_debug.pory"
	additem ITEM_LOST_KEY
	goto CompleteArea_Aldeleaf_City_7

CompleteArea_Aldeleaf_City_11:
# 2459 "data/scripts/my_debug.pory"
	removeitem ITEM_LOST_KEY
# 2460 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 2461 "data/scripts/my_debug.pory"
	setflag FLAG_KEY_RETURNED
# 2462 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q04_ALDELEAF_LOST_KEYS_START, CompleteArea_Aldeleaf_City_19
CompleteArea_Aldeleaf_City_18:
# 2465 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WHITEFLUTE_RECEIVED, CompleteArea_Aldeleaf_City_24
CompleteArea_Aldeleaf_City_23:
# 2469 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Aldeleaf_City_27
CompleteArea_Aldeleaf_City_26:
# 2478 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_QUICK_BALL, CompleteArea_Aldeleaf_City_30
CompleteArea_Aldeleaf_City_29:
# 2482 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_LAVA_COOKIE, CompleteArea_Aldeleaf_City_34
	goto CompleteArea_Aldeleaf_City_10

CompleteArea_Aldeleaf_City_13:
# 2453 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDELEAF_MANIAC
# 2454 "data/scripts/my_debug.pory"
	additem ITEM_SHELL_BELL
# 2455 "data/scripts/my_debug.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
	goto CompleteArea_Aldeleaf_City_4

CompleteArea_Aldeleaf_City_16:
# 2443 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_MUSHROOM2
# 2444 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Aldeleaf_City_15

CompleteArea_Aldeleaf_City_19:
# 2463 "data/scripts/my_debug.pory"
	completequest FLAG_Q04_ALDELEAF_LOST_KEYS_COMPLETE
	goto CompleteArea_Aldeleaf_City_18

CompleteArea_Aldeleaf_City_21:
# 2447 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_MUSHROOM
# 2448 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Aldeleaf_City_1

CompleteArea_Aldeleaf_City_24:
# 2466 "data/scripts/my_debug.pory"
	additem ITEM_BLACK_FLUTE, 1
# 2467 "data/scripts/my_debug.pory"
	setflag FLAG_WHITEFLUTE_RECEIVED
	goto CompleteArea_Aldeleaf_City_23

CompleteArea_Aldeleaf_City_27:
# 2470 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_PAINTBRUSH, CompleteArea_Aldeleaf_City_32
	goto CompleteArea_Aldeleaf_City_26

CompleteArea_Aldeleaf_City_30:
# 2479 "data/scripts/my_debug.pory"
	additem ITEM_QUICK_BALL, 1
# 2480 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_QUICK_BALL
	goto CompleteArea_Aldeleaf_City_29

CompleteArea_Aldeleaf_City_32:
# 2471 "data/scripts/my_debug.pory"
	additem ITEM_PAINTBRUSH
# 2472 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_PAINTBRUSH
# 2473 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q06_MUSEUM_SMEARGLE_START, CompleteArea_Aldeleaf_City_36
	goto CompleteArea_Aldeleaf_City_26

CompleteArea_Aldeleaf_City_34:
# 2483 "data/scripts/my_debug.pory"
	additem ITEM_LAVA_COOKIE, 1
# 2484 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_LAVA_COOKIE
	goto CompleteArea_Aldeleaf_City_10

CompleteArea_Aldeleaf_City_36:
# 2474 "data/scripts/my_debug.pory"
	completequest FLAG_Q06_MUSEUM_SMEARGLE_COMPLETE
	goto CompleteArea_Aldeleaf_City_26


CompleteArea_Route_30::
# 2490 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_30_2
CompleteArea_Route_30_1:
# 2511 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_30_5
CompleteArea_Route_30_4:
# 2517 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_30_11
CompleteArea_Route_30_10:
	return

CompleteArea_Route_30_2:
# 2491 "data/scripts/my_debug.pory"
	pickberrytree 8
# 2492 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2493 "data/scripts/my_debug.pory"
	pickberrytree 10
# 2494 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2495 "data/scripts/my_debug.pory"
	pickberrytree 11
# 2496 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2497 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2498 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE28_TM, CompleteArea_Route_30_8
CompleteArea_Route_30_7:
# 2502 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE28_ITEMBALL, CompleteArea_Route_30_14
CompleteArea_Route_30_13:
# 2506 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE28_HIDDENBALL, CompleteArea_Route_30_16
	goto CompleteArea_Route_30_1

CompleteArea_Route_30_5:
# 2512 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_BUGCATCHER
# 2513 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_HIKER
# 2514 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_NINJABOY
# 2515 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_PSYCHIC
	goto CompleteArea_Route_30_4

CompleteArea_Route_30_8:
# 2499 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_TM
# 2500 "data/scripts/my_debug.pory"
	additem ITEM_TM_SECRET_POWER
	goto CompleteArea_Route_30_7

CompleteArea_Route_30_11:
# 2518 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 2519 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto CompleteArea_Route_30_10

CompleteArea_Route_30_14:
# 2503 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_ITEMBALL
# 2504 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_30_13

CompleteArea_Route_30_16:
# 2507 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_HIDDENBALL
# 2508 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_30_1


CompleteArea_Windplume_Valley::
# 2524 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Windplume_Valley_2
CompleteArea_Windplume_Valley_1:
# 2562 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Windplume_Valley_5
CompleteArea_Windplume_Valley_4:
	return

CompleteArea_Windplume_Valley_2:
# 2525 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER1, CompleteArea_Windplume_Valley_8
CompleteArea_Windplume_Valley_7:
# 2529 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_HYPER_POTION, CompleteArea_Windplume_Valley_13
CompleteArea_Windplume_Valley_12:
# 2533 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER2, CompleteArea_Windplume_Valley_16
CompleteArea_Windplume_Valley_15:
# 2537 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER3, CompleteArea_Windplume_Valley_19
CompleteArea_Windplume_Valley_18:
# 2541 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER4, CompleteArea_Windplume_Valley_22
CompleteArea_Windplume_Valley_21:
# 2545 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_ELIXIR, CompleteArea_Windplume_Valley_25
CompleteArea_Windplume_Valley_24:
# 2549 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_IRON_BALL, CompleteArea_Windplume_Valley_28
CompleteArea_Windplume_Valley_27:
# 2553 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER5, CompleteArea_Windplume_Valley_31
CompleteArea_Windplume_Valley_30:
# 2557 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER6, CompleteArea_Windplume_Valley_33
	goto CompleteArea_Windplume_Valley_1

CompleteArea_Windplume_Valley_5:
# 2563 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER
# 2564 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_TRIATH
# 2565 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BATTLEGIRL
# 2566 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_CAMPER
# 2567 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER2
# 2568 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_MANIAC
# 2569 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER3
# 2570 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_NINJABOY
# 2571 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_LASS
# 2572 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_TRIATH2
# 2573 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER4
# 2574 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BATTLEGIRL2
# 2575 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER5
# 2576 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_WPV_TR14_SKYLA
	goto_if 0, CompleteArea_Windplume_Valley_10
	goto CompleteArea_Windplume_Valley_4

CompleteArea_Windplume_Valley_8:
# 2526 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER1
# 2527 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_7

CompleteArea_Windplume_Valley_10:
# 2577 "data/scripts/my_debug.pory"
	giveitem ITEM_FLIGHT_FLUTE
# 2578 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_TR14_SKYLA
# 2579 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_FLIGHT_FLUTE
	goto CompleteArea_Windplume_Valley_4

CompleteArea_Windplume_Valley_13:
# 2530 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_HYPER_POTION
# 2531 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Windplume_Valley_12

CompleteArea_Windplume_Valley_16:
# 2534 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER2
# 2535 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_15

CompleteArea_Windplume_Valley_19:
# 2538 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER3
# 2539 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_18

CompleteArea_Windplume_Valley_22:
# 2542 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER4
# 2543 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_21

CompleteArea_Windplume_Valley_25:
# 2546 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_ELIXIR
# 2547 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Windplume_Valley_24

CompleteArea_Windplume_Valley_28:
# 2550 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_IRON_BALL
# 2551 "data/scripts/my_debug.pory"
	additem ITEM_IRON_BALL
	goto CompleteArea_Windplume_Valley_27

CompleteArea_Windplume_Valley_31:
# 2554 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER5
# 2555 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_30

CompleteArea_Windplume_Valley_33:
# 2558 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER6
# 2559 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_1


CompleteArea_Route_5::
# 2585 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_5_2
CompleteArea_Route_5_1:
# 2627 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_5_5
CompleteArea_Route_5_4:
	return

CompleteArea_Route_5_2:
# 2586 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM1, CompleteArea_Route_5_8
CompleteArea_Route_5_7:
# 2590 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM2, CompleteArea_Route_5_13
CompleteArea_Route_5_12:
# 2594 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM3, CompleteArea_Route_5_16
CompleteArea_Route_5_15:
# 2598 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM1, CompleteArea_Route_5_19
CompleteArea_Route_5_18:
# 2602 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM2, CompleteArea_Route_5_22
CompleteArea_Route_5_21:
# 2606 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM3, CompleteArea_Route_5_25
CompleteArea_Route_5_24:
# 2610 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM4, CompleteArea_Route_5_28
CompleteArea_Route_5_27:
# 2614 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM5, CompleteArea_Route_5_31
CompleteArea_Route_5_30:
# 2618 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2619 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2620 "data/scripts/my_debug.pory"
	pickberrytree 13
# 2621 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2622 "data/scripts/my_debug.pory"
	pickberrytree 21
# 2623 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2624 "data/scripts/my_debug.pory"
	pickberrytree 31
# 2625 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_5_1

CompleteArea_Route_5_5:
# 2628 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_FISHER
# 2629 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_BEAUTY
# 2630 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_YOUNGCOUPLE
# 2631 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_LASS1
# 2632 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_POKEFAN_F
# 2633 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_LASS2
# 2634 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_GENTLEMAN
# 2635 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_YOUNGSTER
# 2636 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_TRIATHLETE
# 2637 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_RICHBOY
# 2638 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_KINDLER
# 2639 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_BUGCATCHER
# 2640 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_NINJABOY
# 2641 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_HIKER
# 2642 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R5_ACETRAINER
	goto_if 0, CompleteArea_Route_5_10
	goto CompleteArea_Route_5_4

CompleteArea_Route_5_8:
# 2587 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM1
# 2588 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_5_7

CompleteArea_Route_5_10:
# 2643 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_ACETRAINER
# 2644 "data/scripts/my_debug.pory"
	additem ITEM_EVIOLITE
# 2645 "data/scripts/my_debug.pory"
	addbp 20
	goto CompleteArea_Route_5_4

CompleteArea_Route_5_13:
# 2591 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM2
# 2592 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_5_12

CompleteArea_Route_5_16:
# 2595 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM3
# 2596 "data/scripts/my_debug.pory"
	additem ITEM_TM_ROCK_TOMB
	goto CompleteArea_Route_5_15

CompleteArea_Route_5_19:
# 2599 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM1
# 2600 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_18

CompleteArea_Route_5_22:
# 2603 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM2
# 2604 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_21

CompleteArea_Route_5_25:
# 2607 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM3
# 2608 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ETHER
	goto CompleteArea_Route_5_24

CompleteArea_Route_5_28:
# 2611 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM4
# 2612 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_27

CompleteArea_Route_5_31:
# 2615 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM5
# 2616 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_30


CompleteArea_Flower_Fields::
# 2651 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Flower_Fields_2
CompleteArea_Flower_Fields_1:
# 2669 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Flower_Fields_5
CompleteArea_Flower_Fields_4:
	return

CompleteArea_Flower_Fields_2:
# 2652 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HERACRONITE_OBTAINED, CompleteArea_Flower_Fields_9
CompleteArea_Flower_Fields_7:
# 2656 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_1, CompleteArea_Flower_Fields_15
CompleteArea_Flower_Fields_14:
# 2660 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_3, CompleteArea_Flower_Fields_20
CompleteArea_Flower_Fields_19:
# 2664 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_2, CompleteArea_Flower_Fields_22
	goto CompleteArea_Flower_Fields_1

CompleteArea_Flower_Fields_5:
# 2670 "data/scripts/my_debug.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_lt CompleteArea_Flower_Fields_12
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_8:
# 2653 "data/scripts/my_debug.pory"
	setflag FLAG_HERACRONITE_OBTAINED
# 2654 "data/scripts/my_debug.pory"
	additem ITEM_HERACRONITE
	goto CompleteArea_Flower_Fields_7

CompleteArea_Flower_Fields_9:
# 2652 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Flower_Fields_8
	goto CompleteArea_Flower_Fields_7

CompleteArea_Flower_Fields_12:
# 2671 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
# 2672 "data/scripts/my_debug.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
# 2673 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q08_FLOWER_FIELDS_GRANBULL_START, CompleteArea_Flower_Fields_17
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_15:
# 2657 "data/scripts/my_debug.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_1
# 2658 "data/scripts/my_debug.pory"
	additem ITEM_ORAN_BERRY
	goto CompleteArea_Flower_Fields_14

CompleteArea_Flower_Fields_17:
# 2674 "data/scripts/my_debug.pory"
	completequest FLAG_Q08_FLOWER_FIELDS_GRANBULL_COMPLETE
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_20:
# 2661 "data/scripts/my_debug.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_3
# 2662 "data/scripts/my_debug.pory"
	additem ITEM_HONEY
	goto CompleteArea_Flower_Fields_19

CompleteArea_Flower_Fields_22:
# 2665 "data/scripts/my_debug.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_2
# 2666 "data/scripts/my_debug.pory"
	additem ITEM_HONEY
	goto CompleteArea_Flower_Fields_1


CompleteArea_Skyloch_Village::
# 2681 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Skyloch_Village_2
CompleteArea_Skyloch_Village_1:
# 2687 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Skyloch_Village_5
CompleteArea_Skyloch_Village_4:
	return

CompleteArea_Skyloch_Village_2:
# 2682 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SKYLOCH_JUICE, CompleteArea_Skyloch_Village_7
	goto CompleteArea_Skyloch_Village_1

CompleteArea_Skyloch_Village_5:
# 2688 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, CompleteArea_Skyloch_Village_10
CompleteArea_Skyloch_Village_9:
# 2695 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_LIGHTBALL, CompleteArea_Skyloch_Village_12
	goto CompleteArea_Skyloch_Village_4

CompleteArea_Skyloch_Village_7:
# 2683 "data/scripts/my_debug.pory"
	setflag FLAG_SKYLOCH_JUICE
# 2684 "data/scripts/my_debug.pory"
	additem ITEM_BERRY_JUICE
	goto CompleteArea_Skyloch_Village_1

CompleteArea_Skyloch_Village_10:
# 2689 "data/scripts/my_debug.pory"
	additem ITEM_OCCA_BERRY, 1
# 2690 "data/scripts/my_debug.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 2691 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q10_SKYLOCH_ICECREAM_START, CompleteArea_Skyloch_Village_14
	goto CompleteArea_Skyloch_Village_9

CompleteArea_Skyloch_Village_12:
# 2696 "data/scripts/my_debug.pory"
	additem ITEM_LIGHT_BALL
# 2697 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_LIGHTBALL
# 2698 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q11_SKYLOCH_RAICHUS_START, CompleteArea_Skyloch_Village_16
	goto CompleteArea_Skyloch_Village_4

CompleteArea_Skyloch_Village_14:
# 2692 "data/scripts/my_debug.pory"
	completequest FLAG_Q10_SKYLOCH_ICECREAM_COMPLETE
	goto CompleteArea_Skyloch_Village_9

CompleteArea_Skyloch_Village_16:
# 2699 "data/scripts/my_debug.pory"
	completequest FLAG_Q11_SKYLOCH_RAICHUS_COMPLETE
	goto CompleteArea_Skyloch_Village_4


CompleteArea_Route_6::
# 2706 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_6_2
CompleteArea_Route_6_1:
	return

CompleteArea_Route_6_2:
# 2707 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_RANGER_M
# 2708 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_CAMPER_F
# 2709 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_HIKER
# 2710 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_CAMPER_M2
# 2711 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_KINDLER
	goto CompleteArea_Route_6_1


CompleteArea_Route_8::
# 2716 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_8_2
CompleteArea_Route_8_1:
# 2749 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_8_5
CompleteArea_Route_8_4:
# 2762 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_8_11
CompleteArea_Route_8_10:
	return

CompleteArea_Route_8_2:
# 2717 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2718 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2719 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2720 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM2, CompleteArea_Route_8_8
CompleteArea_Route_8_7:
# 2724 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM6, CompleteArea_Route_8_14
CompleteArea_Route_8_13:
# 2728 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM3, CompleteArea_Route_8_19
CompleteArea_Route_8_18:
# 2732 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM1, CompleteArea_Route_8_22
CompleteArea_Route_8_21:
# 2736 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM5, CompleteArea_Route_8_25
CompleteArea_Route_8_24:
# 2740 "data/scripts/my_debug.pory"
	pickberrytree 15
# 2741 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2742 "data/scripts/my_debug.pory"
	pickberrytree 22
# 2743 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2744 "data/scripts/my_debug.pory"
	pickberrytree 24
# 2745 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2746 "data/scripts/my_debug.pory"
	pickberrytree 33
# 2747 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_8_1

CompleteArea_Route_8_5:
# 2750 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_PARASOLLADY
# 2751 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_SRJR
# 2752 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_AROMALADY
# 2753 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_YOUNGSTER
# 2754 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_PSYCHIC_F
# 2755 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_ENTHUSIAST
# 2756 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_TRIATHLETE_M
# 2757 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_GENTLEMAN
# 2758 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_HIKER
# 2759 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_OLDCOUPLE
# 2760 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_BIRDKEEPER
	goto CompleteArea_Route_8_4

CompleteArea_Route_8_8:
# 2721 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM2
# 2722 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_8_7

CompleteArea_Route_8_11:
# 2763 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 2764 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, CompleteArea_Route_8_16
	goto CompleteArea_Route_8_10

CompleteArea_Route_8_14:
# 2725 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM6
# 2726 "data/scripts/my_debug.pory"
	additem ITEM_TM_ROCK_POLISH
	goto CompleteArea_Route_8_13

CompleteArea_Route_8_16:
# 2765 "data/scripts/my_debug.pory"
	additem ITEM_WAILMER_PAIL
# 2766 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto CompleteArea_Route_8_10

CompleteArea_Route_8_19:
# 2729 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM3
# 2730 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Route_8_18

CompleteArea_Route_8_22:
# 2733 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM1
# 2734 "data/scripts/my_debug.pory"
	additem ITEM_ORAN_BERRY
	goto CompleteArea_Route_8_21

CompleteArea_Route_8_25:
# 2737 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM5
# 2738 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_8_24


CompleteArea_Shoreslate_City::
# 2772 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Shoreslate_City_2
CompleteArea_Shoreslate_City_1:
# 2786 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Shoreslate_City_5
CompleteArea_Shoreslate_City_4:
	return

CompleteArea_Shoreslate_City_2:
# 2773 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SHORESLATE_ITEM1, CompleteArea_Shoreslate_City_8
CompleteArea_Shoreslate_City_7:
# 2777 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASEMENT_SUPERPOTION, CompleteArea_Shoreslate_City_16
CompleteArea_Shoreslate_City_15:
# 2781 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DEVONCORP_BASEMENT_BALL, CompleteArea_Shoreslate_City_23
	goto CompleteArea_Shoreslate_City_1

CompleteArea_Shoreslate_City_5:
# 2787 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_LUCARIONITE, CompleteArea_Shoreslate_City_12
CompleteArea_Shoreslate_City_10:
# 2794 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_SHORESLATE_POTION, CompleteArea_Shoreslate_City_19
CompleteArea_Shoreslate_City_18:
# 2798 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_GIVEN_CASTELIATOGIRL, CompleteArea_Shoreslate_City_25
	goto CompleteArea_Shoreslate_City_4

CompleteArea_Shoreslate_City_8:
# 2774 "data/scripts/my_debug.pory"
	setflag FLAG_SHORESLATE_ITEM1
# 2775 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Shoreslate_City_7

CompleteArea_Shoreslate_City_11:
# 2788 "data/scripts/my_debug.pory"
	additem ITEM_LUCARIONITE
# 2789 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_LUCARIONITE
# 2790 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q15_SHORESLATE_TOUGHGUY_START, CompleteArea_Shoreslate_City_21
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_12:
# 2787 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Shoreslate_City_11
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_16:
# 2778 "data/scripts/my_debug.pory"
	setflag FLAG_BASEMENT_SUPERPOTION
# 2779 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_POTION
	goto CompleteArea_Shoreslate_City_15

CompleteArea_Shoreslate_City_19:
# 2795 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 2796 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_POTION
	goto CompleteArea_Shoreslate_City_18

CompleteArea_Shoreslate_City_21:
# 2791 "data/scripts/my_debug.pory"
	completequest FLAG_Q15_SHORESLATE_TOUGHGUY_COMPLETE
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_23:
# 2782 "data/scripts/my_debug.pory"
	setflag FLAG_DEVONCORP_BASEMENT_BALL
# 2783 "data/scripts/my_debug.pory"
	additem ITEM_QUICK_BALL
	goto CompleteArea_Shoreslate_City_1

CompleteArea_Shoreslate_City_25:
# 2799 "data/scripts/my_debug.pory"
	setflag FLAG_GIVEN_CASTELIATOGIRL
# 2800 "data/scripts/my_debug.pory"
	additem ITEM_AIR_BALLOON
# 2801 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q13_SHORESLATE_ICECREAM_START, CompleteArea_Shoreslate_City_27
	goto CompleteArea_Shoreslate_City_4

CompleteArea_Shoreslate_City_27:
# 2802 "data/scripts/my_debug.pory"
	completequest FLAG_Q13_SHORESLATE_ICECREAM_COMPLETE
	goto CompleteArea_Shoreslate_City_4


CompleteArea_Scorched_Desert::
# 2809 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Scorched_Desert_2
CompleteArea_Scorched_Desert_1:
# 2854 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Scorched_Desert_5
CompleteArea_Scorched_Desert_4:
# 2876 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Scorched_Desert_11
CompleteArea_Scorched_Desert_10:
	return

CompleteArea_Scorched_Desert_2:
# 2810 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM1, CompleteArea_Scorched_Desert_8
CompleteArea_Scorched_Desert_7:
# 2814 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM4, CompleteArea_Scorched_Desert_16
CompleteArea_Scorched_Desert_15:
# 2818 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM2, CompleteArea_Scorched_Desert_22
CompleteArea_Scorched_Desert_21:
# 2822 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM3, CompleteArea_Scorched_Desert_32
CompleteArea_Scorched_Desert_31:
# 2826 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM5, CompleteArea_Scorched_Desert_38
CompleteArea_Scorched_Desert_37:
# 2830 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM6, CompleteArea_Scorched_Desert_44
CompleteArea_Scorched_Desert_43:
# 2834 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM7, CompleteArea_Scorched_Desert_47
CompleteArea_Scorched_Desert_46:
# 2838 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM8, CompleteArea_Scorched_Desert_50
CompleteArea_Scorched_Desert_49:
# 2842 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM9, CompleteArea_Scorched_Desert_53
CompleteArea_Scorched_Desert_52:
# 2846 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM10, CompleteArea_Scorched_Desert_56
CompleteArea_Scorched_Desert_55:
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_58
	goto CompleteArea_Scorched_Desert_1

CompleteArea_Scorched_Desert_5:
# 2855 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_NURSE
# 2856 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_CAMPER
# 2857 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_CAMPER2
# 2858 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PICNICKER
# 2859 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PICNICKER2
# 2860 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER
# 2861 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_BLACKBELT
# 2862 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PICNICKER3
# 2863 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER2
# 2864 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER3
# 2865 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_KINDLER
# 2866 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_BLACKBELT2
# 2867 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER4
# 2868 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PSYCHIC_F
# 2869 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_DESERT_ACETRAINER
	goto_if 0, CompleteArea_Scorched_Desert_13
	goto CompleteArea_Scorched_Desert_4

CompleteArea_Scorched_Desert_8:
# 2811 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM1
# 2812 "data/scripts/my_debug.pory"
	additem ITEM_TM_SANDSTORM
	goto CompleteArea_Scorched_Desert_7

CompleteArea_Scorched_Desert_11:
# 2877 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WEIRDCAVESOLVED, CompleteArea_Scorched_Desert_19
CompleteArea_Scorched_Desert_18:
# 2886 "data/scripts/my_debug.pory"
	setflag FLAG_RECOMMEND_LIBRARY
# 2887 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_RUINS_OPENED
# 2888 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_Q18_DESERT_LIBRARYBOOK_START, CompleteArea_Scorched_Desert_26
CompleteArea_Scorched_Desert_24:
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_35
CompleteArea_Scorched_Desert_34:
# 2894 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM1
# 2895 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM2
# 2896 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM3
# 2897 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM4
# 2898 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM5
# 2899 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM6
# 2900 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM7
# 2901 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM8
# 2902 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2903 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2904 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2905 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2906 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_COPPER, 2
# 2907 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_SILVER, 2
# 2908 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM, CompleteArea_Scorched_Desert_41
CompleteArea_Scorched_Desert_40:
# 2912 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Scorched_Desert_10

CompleteArea_Scorched_Desert_13:
# 2870 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_ACETRAINER
# 2871 "data/scripts/my_debug.pory"
	additem ITEM_SAFETY_GOGGLES
# 2872 "data/scripts/my_debug.pory"
	setvar VAR_DESERT_TRAINERS, 14
# 2873 "data/scripts/my_debug.pory"
	addbp 20
	goto CompleteArea_Scorched_Desert_4

CompleteArea_Scorched_Desert_16:
# 2815 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM4
# 2816 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Scorched_Desert_15

CompleteArea_Scorched_Desert_19:
# 2878 "data/scripts/my_debug.pory"
	additem ITEM_STONE_SPHERE
# 2879 "data/scripts/my_debug.pory"
	setflag FLAG_WEIRDCAVE_STONE
# 2880 "data/scripts/my_debug.pory"
	setvar VAR_WEIRDCAVE_PART2, 3
# 2881 "data/scripts/my_debug.pory"
	setflag FLAG_WEIRDCAVESOLVED
# 2882 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q17_DESERT_WEIRDCAVE_START, CompleteArea_Scorched_Desert_29
	goto CompleteArea_Scorched_Desert_18

CompleteArea_Scorched_Desert_22:
# 2819 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM2
# 2820 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_21

CompleteArea_Scorched_Desert_25:
# 2889 "data/scripts/my_debug.pory"
	startquest FLAG_Q18_DESERT_LIBRARYBOOK_START
	goto CompleteArea_Scorched_Desert_24

CompleteArea_Scorched_Desert_26:
	checkitem ITEM_HISTORY_BOOK
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_25
	goto CompleteArea_Scorched_Desert_24

CompleteArea_Scorched_Desert_29:
# 2883 "data/scripts/my_debug.pory"
	completequest FLAG_Q17_DESERT_WEIRDCAVE_COMPLETE
	goto CompleteArea_Scorched_Desert_18

CompleteArea_Scorched_Desert_32:
# 2823 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM3
# 2824 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Scorched_Desert_31

CompleteArea_Scorched_Desert_35:
# 2892 "data/scripts/my_debug.pory"
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Scorched_Desert_34

CompleteArea_Scorched_Desert_38:
# 2827 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM5
# 2828 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_37

CompleteArea_Scorched_Desert_41:
# 2909 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM
# 2910 "data/scripts/my_debug.pory"
	additem ITEM_TM_ROCK_SLIDE
	goto CompleteArea_Scorched_Desert_40

CompleteArea_Scorched_Desert_44:
# 2831 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM6
# 2832 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Scorched_Desert_43

CompleteArea_Scorched_Desert_47:
# 2835 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM7
# 2836 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_46

CompleteArea_Scorched_Desert_50:
# 2839 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM8
# 2840 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Scorched_Desert_49

CompleteArea_Scorched_Desert_53:
# 2843 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM9
# 2844 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Scorched_Desert_52

CompleteArea_Scorched_Desert_56:
# 2847 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM10
# 2848 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Scorched_Desert_55

CompleteArea_Scorched_Desert_58:
# 2851 "data/scripts/my_debug.pory"
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Scorched_Desert_1


CompleteArea_Route_7::
# 2917 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_7_2
CompleteArea_Route_7_1:
# 2935 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_7_5
CompleteArea_Route_7_4:
# 2946 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_7_11
CompleteArea_Route_7_10:
	return

CompleteArea_Route_7_2:
# 2918 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM4, CompleteArea_Route_7_8
CompleteArea_Route_7_7:
# 2922 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM1, CompleteArea_Route_7_14
CompleteArea_Route_7_13:
# 2926 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM3, CompleteArea_Route_7_19
CompleteArea_Route_7_18:
# 2930 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM2, CompleteArea_Route_7_23
	goto CompleteArea_Route_7_1

CompleteArea_Route_7_5:
# 2936 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_CAMPER
# 2937 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_PICNICKER
# 2938 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_BIRDKEEPER
# 2939 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_BLACKBELT
# 2940 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_PICNICKER2
# 2941 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_FISHERMAN
# 2942 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_HIKER
# 2943 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_PARASOLLADY
# 2944 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_NINJABOY
	goto CompleteArea_Route_7_4

CompleteArea_Route_7_8:
# 2919 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM4
# 2920 "data/scripts/my_debug.pory"
	additem ITEM_NET_BALL
	goto CompleteArea_Route_7_7

CompleteArea_Route_7_11:
	checkitem ITEM_SAMPLE_BOX
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Route_7_16
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_14:
# 2923 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM1
# 2924 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Route_7_13

CompleteArea_Route_7_16:
# 2948 "data/scripts/my_debug.pory"
	additem ITEM_SAMPLE_BOX
# 2949 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_Q19_MUDSCIENTIST_START, CompleteArea_Route_7_21
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_19:
# 2927 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM3
# 2928 "data/scripts/my_debug.pory"
	additem ITEM_RARE_BONE
	goto CompleteArea_Route_7_18

CompleteArea_Route_7_21:
# 2950 "data/scripts/my_debug.pory"
	startquest FLAG_Q19_MUDSCIENTIST_START
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_23:
# 2931 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM2
# 2932 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_7_1


CompleteArea_Marigorge_Town::
# 2957 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Marigorge_Town_2
CompleteArea_Marigorge_Town_1:
	return

CompleteArea_Marigorge_Town_2:
# 2958 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_MARIGORGE_ITEM2, CompleteArea_Marigorge_Town_4
	goto CompleteArea_Marigorge_Town_1

CompleteArea_Marigorge_Town_4:
# 2959 "data/scripts/my_debug.pory"
	setflag FLAG_MARIGORGE_ITEM2
# 2960 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Marigorge_Town_1


CompleteArea_Kaolisle_City::
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Kaolisle_City_2
CompleteArea_Kaolisle_City_1:
# 2969 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Kaolisle_City_5
CompleteArea_Kaolisle_City_4:
# 3064 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Kaolisle_City_8
CompleteArea_Kaolisle_City_7:
# 3076 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Kaolisle_City_14
CompleteArea_Kaolisle_City_13:
	return

CompleteArea_Kaolisle_City_2:
# 2967 "data/scripts/my_debug.pory"
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Kaolisle_City_1

CompleteArea_Kaolisle_City_5:
# 2970 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM7, CompleteArea_Kaolisle_City_11
CompleteArea_Kaolisle_City_10:
# 2974 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM9, CompleteArea_Kaolisle_City_17
CompleteArea_Kaolisle_City_16:
# 2978 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM8, CompleteArea_Kaolisle_City_23
CompleteArea_Kaolisle_City_22:
# 2982 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM1, CompleteArea_Kaolisle_City_31
CompleteArea_Kaolisle_City_30:
# 2986 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM4, CompleteArea_Kaolisle_City_37
CompleteArea_Kaolisle_City_36:
# 2990 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM5, CompleteArea_Kaolisle_City_45
CompleteArea_Kaolisle_City_44:
# 2994 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM6, CompleteArea_Kaolisle_City_51
CompleteArea_Kaolisle_City_50:
# 2998 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM3, CompleteArea_Kaolisle_City_57
CompleteArea_Kaolisle_City_56:
# 3002 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM2, CompleteArea_Kaolisle_City_63
CompleteArea_Kaolisle_City_62:
# 3007 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM3, CompleteArea_Kaolisle_City_71
CompleteArea_Kaolisle_City_70:
# 3011 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM4, CompleteArea_Kaolisle_City_79
CompleteArea_Kaolisle_City_78:
# 3015 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM1, CompleteArea_Kaolisle_City_84
CompleteArea_Kaolisle_City_83:
# 3019 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM6, CompleteArea_Kaolisle_City_89
CompleteArea_Kaolisle_City_88:
# 3023 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM8, CompleteArea_Kaolisle_City_92
CompleteArea_Kaolisle_City_91:
# 3027 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM10, CompleteArea_Kaolisle_City_95
CompleteArea_Kaolisle_City_94:
# 3031 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM9, CompleteArea_Kaolisle_City_98
CompleteArea_Kaolisle_City_97:
# 3035 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM11, CompleteArea_Kaolisle_City_101
CompleteArea_Kaolisle_City_100:
# 3039 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM12, CompleteArea_Kaolisle_City_104
CompleteArea_Kaolisle_City_103:
# 3043 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM13, CompleteArea_Kaolisle_City_107
CompleteArea_Kaolisle_City_106:
# 3047 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM14, CompleteArea_Kaolisle_City_110
CompleteArea_Kaolisle_City_109:
# 3051 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM2, CompleteArea_Kaolisle_City_113
CompleteArea_Kaolisle_City_112:
# 3055 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM5, CompleteArea_Kaolisle_City_116
CompleteArea_Kaolisle_City_115:
# 3059 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM7, CompleteArea_Kaolisle_City_118
	goto CompleteArea_Kaolisle_City_4

CompleteArea_Kaolisle_City_8:
# 3065 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_PICNICKER
# 3066 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_BLACKBELT
# 3067 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_CAMPER
# 3068 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER
# 3069 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER2
# 3070 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER3
# 3071 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_CAMPER2
# 3072 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_PICNICKER2
# 3073 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_BLACKBELT2
# 3074 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER4
	goto CompleteArea_Kaolisle_City_7

CompleteArea_Kaolisle_City_11:
# 2971 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM7
# 2972 "data/scripts/my_debug.pory"
	additem ITEM_QUICK_BALL
	goto CompleteArea_Kaolisle_City_10

CompleteArea_Kaolisle_City_14:
# 3077 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, CompleteArea_Kaolisle_City_20
CompleteArea_Kaolisle_City_19:
# 3086 "data/scripts/my_debug.pory"
	setflag FLAG_REVEAL_PEARLSTRING
# 3087 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OLDMAN_PEARLSTRING, CompleteArea_Kaolisle_City_26
CompleteArea_Kaolisle_City_25:
# 3091 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, CompleteArea_Kaolisle_City_34
CompleteArea_Kaolisle_City_33:
# 3100 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_PIANOREWARD, CompleteArea_Kaolisle_City_40
CompleteArea_Kaolisle_City_39:
# 3104 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_BEACHBALL, CompleteArea_Kaolisle_City_48
CompleteArea_Kaolisle_City_47:
# 3108 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HOTEL_FLYINGGEM, CompleteArea_Kaolisle_City_54
CompleteArea_Kaolisle_City_53:
# 3113 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BUFFET_COMPLETE, CompleteArea_Kaolisle_City_60
CompleteArea_Kaolisle_City_59:
# 3121 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_TROPICALSTONE, CompleteArea_Kaolisle_City_66
CompleteArea_Kaolisle_City_65:
# 3128 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_ECHOEDVOICE, CompleteArea_Kaolisle_City_74
CompleteArea_Kaolisle_City_73:
# 3132 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_ROSTEBERRIES, CompleteArea_Kaolisle_City_81
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_17:
# 2975 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM9
# 2976 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Kaolisle_City_16

CompleteArea_Kaolisle_City_20:
# 3078 "data/scripts/my_debug.pory"
	setflag FLAG_QUEST_FOR_GOOD_ROD
# 3079 "data/scripts/my_debug.pory"
	removeitem ITEM_LURE
# 3080 "data/scripts/my_debug.pory"
	additem ITEM_GOOD_ROD
# 3081 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 3082 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q22_KAOLISLE_FISHERMAN_START, CompleteArea_Kaolisle_City_28
	goto CompleteArea_Kaolisle_City_19

CompleteArea_Kaolisle_City_23:
# 2979 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM8
# 2980 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Kaolisle_City_22

CompleteArea_Kaolisle_City_26:
# 3088 "data/scripts/my_debug.pory"
	setflag FLAG_OLDMAN_PEARLSTRING
# 3089 "data/scripts/my_debug.pory"
	additem ITEM_PEARL_STRING
	goto CompleteArea_Kaolisle_City_25

CompleteArea_Kaolisle_City_28:
# 3083 "data/scripts/my_debug.pory"
	completequest FLAG_Q22_KAOLISLE_FISHERMAN_COMPLETE
	goto CompleteArea_Kaolisle_City_19

CompleteArea_Kaolisle_City_31:
# 2983 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM1
# 2984 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Kaolisle_City_30

CompleteArea_Kaolisle_City_34:
# 3092 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM2
# 3093 "data/scripts/my_debug.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 3094 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 3095 "data/scripts/my_debug.pory"
	removeitem ITEM_LOST_MEMENTO
# 3096 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q23_KAOLISLE_OLDPENDANT_START, CompleteArea_Kaolisle_City_42
	goto CompleteArea_Kaolisle_City_33

CompleteArea_Kaolisle_City_37:
# 2987 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM4
# 2988 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_36

CompleteArea_Kaolisle_City_40:
# 3101 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE, 2
# 3102 "data/scripts/my_debug.pory"
	setflag FLAG_PIANOREWARD
	goto CompleteArea_Kaolisle_City_39

CompleteArea_Kaolisle_City_42:
# 3097 "data/scripts/my_debug.pory"
	special ShowJournalPopupRemove
	goto CompleteArea_Kaolisle_City_33

CompleteArea_Kaolisle_City_45:
# 2991 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM5
# 2992 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_44

CompleteArea_Kaolisle_City_48:
# 3105 "data/scripts/my_debug.pory"
	additem ITEM_DIVE_BALL
# 3106 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_BEACHBALL
	goto CompleteArea_Kaolisle_City_47

CompleteArea_Kaolisle_City_51:
# 2995 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM6
# 2996 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Kaolisle_City_50

CompleteArea_Kaolisle_City_54:
# 3109 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_HOTEL_BIRDKEEPER
# 3110 "data/scripts/my_debug.pory"
	additem ITEM_FLYING_GEM, 1
# 3111 "data/scripts/my_debug.pory"
	setflag FLAG_HOTEL_FLYINGGEM
	goto CompleteArea_Kaolisle_City_53

CompleteArea_Kaolisle_City_57:
# 2999 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM3
# 3000 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_56

CompleteArea_Kaolisle_City_60:
# 3114 "data/scripts/my_debug.pory"
	additem ITEM_LEFTOVERS
# 3115 "data/scripts/my_debug.pory"
	addbp 30
# 3116 "data/scripts/my_debug.pory"
	setflag FLAG_BUFFET_COMPLETE
# 3117 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q24_BATTLE_BUFFET_START, CompleteArea_Kaolisle_City_68
	goto CompleteArea_Kaolisle_City_59

CompleteArea_Kaolisle_City_63:
# 3003 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM2
# 3004 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_62

CompleteArea_Kaolisle_City_66:
# 3122 "data/scripts/my_debug.pory"
	additem ITEM_TROPICAL_STONE
# 3123 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_TROPICALSTONE
# 3124 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q25_HOTEL_TROPICALSTONE_START, CompleteArea_Kaolisle_City_76
	goto CompleteArea_Kaolisle_City_65

CompleteArea_Kaolisle_City_68:
# 3118 "data/scripts/my_debug.pory"
	completequest FLAG_Q24_BATTLE_BUFFET_COMPLETE
	goto CompleteArea_Kaolisle_City_59

CompleteArea_Kaolisle_City_71:
# 3008 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM3
# 3009 "data/scripts/my_debug.pory"
	additem ITEM_DUSK_BALL
	goto CompleteArea_Kaolisle_City_70

CompleteArea_Kaolisle_City_74:
# 3129 "data/scripts/my_debug.pory"
	additem ITEM_TM_ECHOED_VOICE
# 3130 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ECHOEDVOICE
	goto CompleteArea_Kaolisle_City_73

CompleteArea_Kaolisle_City_76:
# 3125 "data/scripts/my_debug.pory"
	completequest FLAG_Q25_HOTEL_TROPICALSTONE_COMPLETE
	goto CompleteArea_Kaolisle_City_65

CompleteArea_Kaolisle_City_79:
# 3012 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM4
# 3013 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Kaolisle_City_78

CompleteArea_Kaolisle_City_81:
# 3133 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_HOTEL_KID1
# 3134 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_HOTEL_KID2
# 3135 "data/scripts/my_debug.pory"
	additem ITEM_ROSTE_BERRY, 2
# 3136 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ROSTEBERRIES
# 3137 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q27_HOTEL_WILDKIDS_START, CompleteArea_Kaolisle_City_86
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_84:
# 3016 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM1
# 3017 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Kaolisle_City_83

CompleteArea_Kaolisle_City_86:
# 3138 "data/scripts/my_debug.pory"
	completequest FLAG_Q27_HOTEL_WILDKIDS_COMPLETE
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_89:
# 3020 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM6
# 3021 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Kaolisle_City_88

CompleteArea_Kaolisle_City_92:
# 3024 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM8
# 3025 "data/scripts/my_debug.pory"
	additem ITEM_PROTEIN
	goto CompleteArea_Kaolisle_City_91

CompleteArea_Kaolisle_City_95:
# 3028 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM10
# 3029 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Kaolisle_City_94

CompleteArea_Kaolisle_City_98:
# 3032 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM9
# 3033 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Kaolisle_City_97

CompleteArea_Kaolisle_City_101:
# 3036 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM11
# 3037 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Kaolisle_City_100

CompleteArea_Kaolisle_City_104:
# 3040 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM12
# 3041 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Kaolisle_City_103

CompleteArea_Kaolisle_City_107:
# 3044 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM13
# 3045 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Kaolisle_City_106

CompleteArea_Kaolisle_City_110:
# 3048 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM14
# 3049 "data/scripts/my_debug.pory"
	additem ITEM_TM_DIG
	goto CompleteArea_Kaolisle_City_109

CompleteArea_Kaolisle_City_113:
# 3052 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM2
# 3053 "data/scripts/my_debug.pory"
	additem ITEM_LOST_MEMENTO
	goto CompleteArea_Kaolisle_City_112

CompleteArea_Kaolisle_City_116:
# 3056 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM5
# 3057 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Kaolisle_City_115

CompleteArea_Kaolisle_City_118:
# 3060 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM7
# 3061 "data/scripts/my_debug.pory"
	additem ITEM_IRON
	goto CompleteArea_Kaolisle_City_4


CompleteArea_Rockliffe_Town::
# 3145 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Rockliffe_Town_2
CompleteArea_Rockliffe_Town_1:
# 3155 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Rockliffe_Town_5
CompleteArea_Rockliffe_Town_4:
	return

CompleteArea_Rockliffe_Town_2:
# 3146 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROCKLIFFE_ITEM2, CompleteArea_Rockliffe_Town_8
CompleteArea_Rockliffe_Town_7:
# 3150 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROCKLIFFE_ITEM1, CompleteArea_Rockliffe_Town_15
	goto CompleteArea_Rockliffe_Town_1

CompleteArea_Rockliffe_Town_5:
# 3156 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_BEEDRILLITE, CompleteArea_Rockliffe_Town_12
CompleteArea_Rockliffe_Town_10:
# 3163 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_METAL_COAT, CompleteArea_Rockliffe_Town_18
CompleteArea_Rockliffe_Town_17:
# 3170 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_TM_FLING, CompleteArea_Rockliffe_Town_22
	goto CompleteArea_Rockliffe_Town_4

CompleteArea_Rockliffe_Town_8:
# 3147 "data/scripts/my_debug.pory"
	setflag FLAG_ROCKLIFFE_ITEM2
# 3148 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Rockliffe_Town_7

CompleteArea_Rockliffe_Town_11:
# 3157 "data/scripts/my_debug.pory"
	additem ITEM_BEEDRILLITE
# 3158 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_BEEDRILLITE
# 3159 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, CompleteArea_Rockliffe_Town_20
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_12:
# 3156 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Rockliffe_Town_11
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_15:
# 3151 "data/scripts/my_debug.pory"
	setflag FLAG_ROCKLIFFE_ITEM1
# 3152 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_POTION
	goto CompleteArea_Rockliffe_Town_1

CompleteArea_Rockliffe_Town_18:
# 3164 "data/scripts/my_debug.pory"
	additem ITEM_METAL_COAT
# 3165 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_METAL_COAT
# 3166 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q29_ROCKLIFFE_HEAVYMON_START, CompleteArea_Rockliffe_Town_24
	goto CompleteArea_Rockliffe_Town_17

CompleteArea_Rockliffe_Town_20:
# 3160 "data/scripts/my_debug.pory"
	completequest FLAG_Q30_ROCKLIFFE_BEEDRILLS_COMPLETE
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_22:
# 3171 "data/scripts/my_debug.pory"
	additem ITEM_TM_FLING
# 3172 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_TM_FLING
	goto CompleteArea_Rockliffe_Town_4

CompleteArea_Rockliffe_Town_24:
# 3167 "data/scripts/my_debug.pory"
	completequest FLAG_Q29_ROCKLIFFE_HEAVYMON_COMPLETE
	goto CompleteArea_Rockliffe_Town_17


CompleteArea_Route_11::
# 3178 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_11_2
CompleteArea_Route_11_1:
# 3212 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_11_5
CompleteArea_Route_11_4:
# 3234 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_11_11
CompleteArea_Route_11_10:
	return

CompleteArea_Route_11_2:
# 3179 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_SUPER_REPEL, CompleteArea_Route_11_8
CompleteArea_Route_11_7:
# 3183 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_ZINC, CompleteArea_Route_11_16
CompleteArea_Route_11_15:
# 3187 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_HYPER_POTION, CompleteArea_Route_11_21
CompleteArea_Route_11_20:
# 3191 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE11_GREATBALL, CompleteArea_Route_11_24
CompleteArea_Route_11_23:
# 3195 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE11_HONEY, CompleteArea_Route_11_27
CompleteArea_Route_11_26:
# 3199 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE11_RARECANDY, CompleteArea_Route_11_30
CompleteArea_Route_11_29:
# 3203 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_ELIXIR, CompleteArea_Route_11_33
CompleteArea_Route_11_32:
# 3207 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3208 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3209 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3210 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
	goto CompleteArea_Route_11_1

CompleteArea_Route_11_5:
# 3213 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ROUTE11_NURSE
# 3214 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_LASS
# 3215 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_BIRDKEEPER
# 3216 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_BUGCATCHER
# 3217 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_NINJABOY
# 3218 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_POKEMANIAC
# 3219 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_TRIATHLETE_F
# 3220 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_HIKER
# 3221 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_NINJABOY_2
# 3222 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_NINJABOY_3
# 3223 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_CYCLER_M
# 3224 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_BLACKBELT
# 3225 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_EXPERT
# 3226 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_PSYCHIC_F
# 3227 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R11_ACETRAINER_F
	goto_if 0, CompleteArea_Route_11_13
	goto CompleteArea_Route_11_4

CompleteArea_Route_11_8:
# 3180 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_SUPER_REPEL
# 3181 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_11_7

CompleteArea_Route_11_11:
# 3235 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 3236 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_TORMENT, CompleteArea_Route_11_18
	goto CompleteArea_Route_11_10

CompleteArea_Route_11_13:
# 3228 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_ACETRAINER_F
# 3229 "data/scripts/my_debug.pory"
	additem ITEM_LUCKY_EGG
# 3230 "data/scripts/my_debug.pory"
	setvar VAR_R11_TRAINERS, 12
# 3231 "data/scripts/my_debug.pory"
	addbp 25
	goto CompleteArea_Route_11_4

CompleteArea_Route_11_16:
# 3184 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_ZINC
# 3185 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Route_11_15

CompleteArea_Route_11_18:
# 3237 "data/scripts/my_debug.pory"
	additem ITEM_TM_TORMENT
# 3238 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_TORMENT
	goto CompleteArea_Route_11_10

CompleteArea_Route_11_21:
# 3188 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_HYPER_POTION
# 3189 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_11_20

CompleteArea_Route_11_24:
# 3192 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE11_GREATBALL
# 3193 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_11_23

CompleteArea_Route_11_27:
# 3196 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE11_HONEY
# 3197 "data/scripts/my_debug.pory"
	additem ITEM_HONEY
	goto CompleteArea_Route_11_26

CompleteArea_Route_11_30:
# 3200 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE11_RARECANDY
# 3201 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Route_11_29

CompleteArea_Route_11_33:
# 3204 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_ELIXIR
# 3205 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Route_11_32


CompleteArea_Route_12::
# 3244 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_12_2
CompleteArea_Route_12_1:
# 3274 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_12_5
CompleteArea_Route_12_4:
# 3291 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_12_11
CompleteArea_Route_12_10:
	return

CompleteArea_Route_12_2:
# 3245 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_ITEM3, CompleteArea_Route_12_8
CompleteArea_Route_12_7:
# 3249 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_ITEM2, CompleteArea_Route_12_14
CompleteArea_Route_12_13:
# 3253 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_ITEM1, CompleteArea_Route_12_20
CompleteArea_Route_12_19:
# 3257 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM1, CompleteArea_Route_12_26
CompleteArea_Route_12_25:
# 3261 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM2, CompleteArea_Route_12_34
CompleteArea_Route_12_33:
# 3265 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM3, CompleteArea_Route_12_39
CompleteArea_Route_12_38:
# 3269 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM4, CompleteArea_Route_12_41
	goto CompleteArea_Route_12_1

CompleteArea_Route_12_5:
# 3275 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_F
# 3276 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_M
# 3277 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_F2
# 3278 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_M2
# 3279 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_M3
# 3280 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_F3
# 3281 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_PSYCHIC_M
# 3282 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_HIKER
# 3283 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_LASS
# 3284 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_BUGMANIAC
# 3285 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_NINJABOY
# 3286 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_BLACKBELT
# 3287 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_BATTLEGIRL
# 3288 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_CAMPER
# 3289 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_HIKER
	goto CompleteArea_Route_12_4

CompleteArea_Route_12_8:
# 3246 "data/scripts/my_debug.pory"
	setflag FLAG_R12_ITEM3
# 3247 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_12_7

CompleteArea_Route_12_11:
# 3292 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_HM_STRENGTH, CompleteArea_Route_12_17
CompleteArea_Route_12_16:
# 3296 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_LOOTEDROCK, CompleteArea_Route_12_23
CompleteArea_Route_12_22:
# 3308 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_XSPEED, CompleteArea_Route_12_28
	goto CompleteArea_Route_12_10

CompleteArea_Route_12_14:
# 3250 "data/scripts/my_debug.pory"
	setflag FLAG_R12_ITEM2
# 3251 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_12_13

CompleteArea_Route_12_17:
# 3293 "data/scripts/my_debug.pory"
	giveitem ITEM_HM_STRENGTH
# 3294 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
	goto CompleteArea_Route_12_16

CompleteArea_Route_12_20:
# 3254 "data/scripts/my_debug.pory"
	setflag FLAG_R12_ITEM1
# 3255 "data/scripts/my_debug.pory"
	additem ITEM_TM42
	goto CompleteArea_Route_12_19

CompleteArea_Route_12_23:
# 3297 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_STONE_SPHERE_FC
	checkitem ITEM_STONE_SPHERE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Route_12_31
CompleteArea_Route_12_30:
# 3301 "data/scripts/my_debug.pory"
	setflag FLAG_FC_LOOTEDROCK
# 3302 "data/scripts/my_debug.pory"
	additem ITEM_STEEL_SPHERE
# 3303 "data/scripts/my_debug.pory"
	setvar VAR_FCCAVE, 3
# 3304 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q31_ROUTE12_WEIRDCAVE_START, CompleteArea_Route_12_36
	goto CompleteArea_Route_12_22

CompleteArea_Route_12_26:
# 3258 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM1
# 3259 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_12_25

CompleteArea_Route_12_28:
# 3309 "data/scripts/my_debug.pory"
	additem ITEM_X_SPEED
# 3310 "data/scripts/my_debug.pory"
	setflag FLAG_R12_XSPEED
	goto CompleteArea_Route_12_10

CompleteArea_Route_12_31:
# 3299 "data/scripts/my_debug.pory"
	additem ITEM_STONE_SPHERE
	goto CompleteArea_Route_12_30

CompleteArea_Route_12_34:
# 3262 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM2
# 3263 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_12_33

CompleteArea_Route_12_36:
# 3305 "data/scripts/my_debug.pory"
	completequest FLAG_Q31_ROUTE12_WEIRDCAVE_COMPLETE
	goto CompleteArea_Route_12_22

CompleteArea_Route_12_39:
# 3266 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM3
# 3267 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_12_38

CompleteArea_Route_12_41:
# 3270 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM4
# 3271 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Route_12_1


CompleteArea_Sandstone_City::
# 3316 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Sandstone_City_2
CompleteArea_Sandstone_City_1:
# 3326 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Sandstone_City_5
CompleteArea_Sandstone_City_4:
	return

CompleteArea_Sandstone_City_2:
# 3317 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_HIDDENITEM_1, CompleteArea_Sandstone_City_8
CompleteArea_Sandstone_City_7:
# 3321 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_HIDDENITEM_2, CompleteArea_Sandstone_City_13
	goto CompleteArea_Sandstone_City_1

CompleteArea_Sandstone_City_5:
# 3327 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_BALLOON, CompleteArea_Sandstone_City_11
CompleteArea_Sandstone_City_10:
# 3331 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_ULTRABALL, CompleteArea_Sandstone_City_16
CompleteArea_Sandstone_City_15:
# 3335 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_LAVACOOKIE, CompleteArea_Sandstone_City_19
CompleteArea_Sandstone_City_18:
# 3339 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_DUSKBALLS, CompleteArea_Sandstone_City_22
CompleteArea_Sandstone_City_21:
# 3343 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_SANDSTONE_BERRY, CompleteArea_Sandstone_City_24
	goto CompleteArea_Sandstone_City_4

CompleteArea_Sandstone_City_8:
# 3318 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_HIDDENITEM_1
# 3319 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Sandstone_City_7

CompleteArea_Sandstone_City_11:
# 3328 "data/scripts/my_debug.pory"
	additem ITEM_AIR_BALLOON
# 3329 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_BALLOON
	goto CompleteArea_Sandstone_City_10

CompleteArea_Sandstone_City_13:
# 3322 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_HIDDENITEM_2
# 3323 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Sandstone_City_1

CompleteArea_Sandstone_City_16:
# 3332 "data/scripts/my_debug.pory"
	additem ITEM_ULTRA_BALL
# 3333 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_ULTRABALL
	goto CompleteArea_Sandstone_City_15

CompleteArea_Sandstone_City_19:
# 3336 "data/scripts/my_debug.pory"
	additem ITEM_LAVA_COOKIE
# 3337 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_LAVACOOKIE
	goto CompleteArea_Sandstone_City_18

CompleteArea_Sandstone_City_22:
# 3340 "data/scripts/my_debug.pory"
	additem ITEM_DUSK_BALL, 2
# 3341 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_DUSKBALLS
	goto CompleteArea_Sandstone_City_21

CompleteArea_Sandstone_City_24:
# 3344 "data/scripts/my_debug.pory"
	additem ITEM_CHOPLE_BERRY
# 3345 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_SANDSTONE_BERRY
	goto CompleteArea_Sandstone_City_4


CompleteArea_Route_13::
# 3351 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_13_2
CompleteArea_Route_13_1:
	return

CompleteArea_Route_13_2:
# 3352 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R13_ITEM1, CompleteArea_Route_13_4
	goto CompleteArea_Route_13_1

CompleteArea_Route_13_4:
# 3353 "data/scripts/my_debug.pory"
	setflag FLAG_R13_ITEM1
# 3354 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_13_1


CompleteArea_Adamant_Tower::
# 3360 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Adamant_Tower_2
CompleteArea_Adamant_Tower_1:
# 3374 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Adamant_Tower_5
CompleteArea_Adamant_Tower_4:
	return

CompleteArea_Adamant_Tower_2:
# 3361 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AT_ITEM1, CompleteArea_Adamant_Tower_8
CompleteArea_Adamant_Tower_7:
# 3365 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AT_ITEM2, CompleteArea_Adamant_Tower_13
CompleteArea_Adamant_Tower_12:
# 3369 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AT_ITEM3, CompleteArea_Adamant_Tower_15
	goto CompleteArea_Adamant_Tower_1

CompleteArea_Adamant_Tower_5:
# 3375 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 3376 "data/scripts/my_debug.pory"
	additem ITEM_ABILITY_CAPSULE
# 3377 "data/scripts/my_debug.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge CompleteArea_Adamant_Tower_10
	goto CompleteArea_Adamant_Tower_4

CompleteArea_Adamant_Tower_8:
# 3362 "data/scripts/my_debug.pory"
	setflag FLAG_AT_ITEM1
# 3363 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Adamant_Tower_7

CompleteArea_Adamant_Tower_10:
# 3378 "data/scripts/my_debug.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto CompleteArea_Adamant_Tower_4

CompleteArea_Adamant_Tower_13:
# 3366 "data/scripts/my_debug.pory"
	setflag FLAG_AT_ITEM2
# 3367 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Adamant_Tower_12

CompleteArea_Adamant_Tower_15:
# 3370 "data/scripts/my_debug.pory"
	setflag FLAG_AT_ITEM3
# 3371 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Adamant_Tower_1


CompleteArea_Route_14::
# 3384 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_14_2
CompleteArea_Route_14_1:
# 3402 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_14_5
CompleteArea_Route_14_4:
	return

CompleteArea_Route_14_2:
# 3385 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM1, CompleteArea_Route_14_8
CompleteArea_Route_14_7:
# 3389 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM2, CompleteArea_Route_14_11
CompleteArea_Route_14_10:
# 3393 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM3, CompleteArea_Route_14_14
CompleteArea_Route_14_13:
# 3397 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM4, CompleteArea_Route_14_16
	goto CompleteArea_Route_14_1

CompleteArea_Route_14_5:
# 3403 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_RUNNING_F
# 3404 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_HIKER
# 3405 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_PARASOLLADY
# 3406 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_FISHER
# 3407 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_PARASOLLADY2
# 3408 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_NINJABOY
# 3409 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_ROCKER
# 3410 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_MANIAC
	goto CompleteArea_Route_14_4

CompleteArea_Route_14_8:
# 3386 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM1
# 3387 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_14_7

CompleteArea_Route_14_11:
# 3390 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM2
# 3391 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_14_10

CompleteArea_Route_14_14:
# 3394 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM3
# 3395 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Route_14_13

CompleteArea_Route_14_16:
# 3398 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM4
# 3399 "data/scripts/my_debug.pory"
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_14_1


CompleteArea_Route_15::
# 3415 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_15_2
CompleteArea_Route_15_1:
# 3455 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_15_5
CompleteArea_Route_15_4:
	return

CompleteArea_Route_15_2:
# 3416 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3417 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3418 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3419 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3420 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3421 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM7, CompleteArea_Route_15_8
CompleteArea_Route_15_7:
# 3425 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM6, CompleteArea_Route_15_16
CompleteArea_Route_15_15:
# 3429 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BERRYFIELDS_ITEM, CompleteArea_Route_15_21
CompleteArea_Route_15_20:
# 3433 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM5, CompleteArea_Route_15_24
CompleteArea_Route_15_23:
# 3437 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM4, CompleteArea_Route_15_27
CompleteArea_Route_15_26:
# 3441 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM3, CompleteArea_Route_15_30
CompleteArea_Route_15_29:
# 3445 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM2, CompleteArea_Route_15_33
CompleteArea_Route_15_32:
# 3449 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM1, CompleteArea_Route_15_35
	goto CompleteArea_Route_15_1

CompleteArea_Route_15_5:
# 3456 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BIRDKEEPER
# 3457 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_RANGERF
# 3458 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_RANGERM
# 3459 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_GENTLEMAN
# 3460 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_NINJABOY1
# 3461 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_NINJABOY2
# 3462 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BUGCATCHER
# 3463 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BUGCATCHER2
# 3464 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BEAUTY
# 3465 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_FISHER
# 3466 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_COOLTRAINER
# 3467 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_LASS
# 3468 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_SCIENTIST
# 3469 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_AROMALADY
# 3470 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_NINJABOY3
# 3471 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_F
	goto_if 0, CompleteArea_Route_15_12
CompleteArea_Route_15_10:
# 3480 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_7
# 3481 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3482 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_2
# 3483 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3484 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_4
# 3485 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3486 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_5
# 3487 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3488 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_3
# 3489 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3490 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_6
# 3491 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3492 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_7
# 3493 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3494 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_2
# 3495 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3496 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_4
# 3497 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3498 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_5
# 3499 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3500 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_3
# 3501 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3502 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_6
# 3503 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3504 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_7
# 3505 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3506 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_2
# 3507 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3508 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_4
# 3509 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3510 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_5
# 3511 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3512 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_3
# 3513 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3514 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_6
# 3515 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_15_4

CompleteArea_Route_15_8:
# 3422 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM7
# 3423 "data/scripts/my_debug.pory"
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_15_7

CompleteArea_Route_15_11:
# 3472 "data/scripts/my_debug.pory"
	additem ITEM_ROCKY_HELMET
# 3473 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_ACETRAINER_F
# 3474 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_ACETRAINER_M
# 3475 "data/scripts/my_debug.pory"
	addbp 25
# 3476 "data/scripts/my_debug.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 7
	goto_if_lt CompleteArea_Route_15_18
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_12:
# 3471 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_M
	goto_if 0, CompleteArea_Route_15_11
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_16:
# 3426 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM6
# 3427 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_15_15

CompleteArea_Route_15_18:
# 3477 "data/scripts/my_debug.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 7
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_21:
# 3430 "data/scripts/my_debug.pory"
	setflag FLAG_BERRYFIELDS_ITEM
# 3431 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_15_20

CompleteArea_Route_15_24:
# 3434 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM5
# 3435 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Route_15_23

CompleteArea_Route_15_27:
# 3438 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM4
# 3439 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_15_26

CompleteArea_Route_15_30:
# 3442 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM3
# 3443 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_15_29

CompleteArea_Route_15_33:
# 3446 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM2
# 3447 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_15_32

CompleteArea_Route_15_35:
# 3450 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM1
# 3451 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Route_15_1


CompleteArea_Fishing_Village::
# 3520 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Fishing_Village_2
CompleteArea_Fishing_Village_1:
	return

CompleteArea_Fishing_Village_2:
# 3521 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_GYARADOSITE, CompleteArea_Fishing_Village_5
CompleteArea_Fishing_Village_4:
	checkitem ITEM_SUPER_POTION
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Fishing_Village_7
	goto CompleteArea_Fishing_Village_1

CompleteArea_Fishing_Village_5:
# 3522 "data/scripts/my_debug.pory"
	setflag FLAG_FISHINGVILLAGE_GYARADOS_REWARD
# 3523 "data/scripts/my_debug.pory"
	additem ITEM_GYARADOSITE
# 3524 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_GYARADOSITE
	goto CompleteArea_Fishing_Village_4

CompleteArea_Fishing_Village_7:
# 3527 "data/scripts/my_debug.pory"
	setflag FLAG_USED_TITANIUM_LINE
# 3528 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_ROD
	checkitem ITEM_TITANIUM_LINE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Fishing_Village_9
	goto CompleteArea_Fishing_Village_1

CompleteArea_Fishing_Village_9:
# 3530 "data/scripts/my_debug.pory"
	additem ITEM_TITANIUM_LINE
	goto CompleteArea_Fishing_Village_1


CompleteArea_Route_23::
# 3537 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_23_2
CompleteArea_Route_23_1:
# 3565 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_23_5
CompleteArea_Route_23_4:
	return

CompleteArea_Route_23_2:
# 3538 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM1, CompleteArea_Route_23_8
CompleteArea_Route_23_7:
# 3542 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM2, CompleteArea_Route_23_13
CompleteArea_Route_23_12:
# 3546 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM3, CompleteArea_Route_23_16
CompleteArea_Route_23_15:
# 3550 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM4, CompleteArea_Route_23_19
CompleteArea_Route_23_18:
# 3555 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_LEPPA_1
# 3556 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3557 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_SOIL
# 3558 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3559 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_LEPPA_2
# 3560 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3561 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3562 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3563 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
	goto CompleteArea_Route_23_1

CompleteArea_Route_23_5:
# 3566 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_BREEDER_M
# 3567 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_MANIAC
# 3568 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_TWINS
# 3569 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_BREEDER_F
# 3570 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_HEXMANIAC_1
# 3571 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_PSYCHIC_M
# 3572 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_HEXMANIAC_2
# 3573 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_TRIATHLETE_F
# 3574 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_FISHERMAN
# 3575 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_BATTLEGIRL
# 3576 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_NINJABOY
# 3577 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R23_ACETRAINER
	goto_if 0, CompleteArea_Route_23_10
	goto CompleteArea_Route_23_4

CompleteArea_Route_23_8:
# 3539 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM1
# 3540 "data/scripts/my_debug.pory"
	additem ITEM_REVIVAL_HERB
	goto CompleteArea_Route_23_7

CompleteArea_Route_23_10:
# 3578 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_ACETRAINER
# 3579 "data/scripts/my_debug.pory"
	additem ITEM_CHOICE_SCARF
# 3580 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_CHOICE_SCARF
# 3581 "data/scripts/my_debug.pory"
	addbp 30
	goto CompleteArea_Route_23_4

CompleteArea_Route_23_13:
# 3543 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM2
# 3544 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Route_23_12

CompleteArea_Route_23_16:
# 3547 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM3
# 3548 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Route_23_15

CompleteArea_Route_23_19:
# 3551 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM4
# 3552 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_23_18


CompleteArea_Drisledge_Town::
# 3587 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Drisledge_Town_2
CompleteArea_Drisledge_Town_1:
# 3593 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Drisledge_Town_5
CompleteArea_Drisledge_Town_4:
	return

CompleteArea_Drisledge_Town_2:
# 3588 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM1, CompleteArea_Drisledge_Town_7
	goto CompleteArea_Drisledge_Town_1

CompleteArea_Drisledge_Town_5:
# 3594 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM2, CompleteArea_Drisledge_Town_10
CompleteArea_Drisledge_Town_9:
# 3598 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM3, CompleteArea_Drisledge_Town_13
CompleteArea_Drisledge_Town_12:
# 3602 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ACEROLA_ITEM, CompleteArea_Drisledge_Town_16
CompleteArea_Drisledge_Town_15:
# 3606 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM4, CompleteArea_Drisledge_Town_19
CompleteArea_Drisledge_Town_18:
# 3610 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_GENGARITE, CompleteArea_Drisledge_Town_21
	goto CompleteArea_Drisledge_Town_4

CompleteArea_Drisledge_Town_7:
# 3589 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM1
# 3590 "data/scripts/my_debug.pory"
	additem ITEM_POKE_DOLL
	goto CompleteArea_Drisledge_Town_1

CompleteArea_Drisledge_Town_10:
# 3595 "data/scripts/my_debug.pory"
	additem ITEM_ORAN_BERRY
# 3596 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM2
	goto CompleteArea_Drisledge_Town_9

CompleteArea_Drisledge_Town_13:
# 3599 "data/scripts/my_debug.pory"
	additem ITEM_COLBUR_BERRY
# 3600 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM3
	goto CompleteArea_Drisledge_Town_12

CompleteArea_Drisledge_Town_16:
# 3603 "data/scripts/my_debug.pory"
	additem ITEM_TM_CAPTIVATE
# 3604 "data/scripts/my_debug.pory"
	setflag FLAG_ACEROLA_ITEM
	goto CompleteArea_Drisledge_Town_15

CompleteArea_Drisledge_Town_19:
# 3607 "data/scripts/my_debug.pory"
	additem ITEM_SPELL_TAG
# 3608 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM4
	goto CompleteArea_Drisledge_Town_18

CompleteArea_Drisledge_Town_21:
# 3611 "data/scripts/my_debug.pory"
	additem ITEM_GENGARITE
# 3612 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_GENGARITE
	goto CompleteArea_Drisledge_Town_4


CompleteArea_Amberock_Town::
# 3618 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Amberock_Town_2
CompleteArea_Amberock_Town_1:
# 3624 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Amberock_Town_5
CompleteArea_Amberock_Town_4:
	return

CompleteArea_Amberock_Town_2:
# 3619 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_GAME_CORNER_TRASHITEM, CompleteArea_Amberock_Town_7
	goto CompleteArea_Amberock_Town_1

CompleteArea_Amberock_Town_5:
	checkitem ITEM_COIN_CASE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Amberock_Town_9
	goto CompleteArea_Amberock_Town_4

CompleteArea_Amberock_Town_7:
# 3620 "data/scripts/my_debug.pory"
	setflag FLAG_GAME_CORNER_TRASHITEM
# 3621 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Amberock_Town_1

CompleteArea_Amberock_Town_9:
# 3626 "data/scripts/my_debug.pory"
	additem ITEM_COIN_CASE
	goto CompleteArea_Amberock_Town_4


CompleteArea_Route_3::
# 3632 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_3_2
CompleteArea_Route_3_1:
# 3658 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_3_5
CompleteArea_Route_3_4:
	return

CompleteArea_Route_3_2:
# 3633 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM1, CompleteArea_Route_3_8
CompleteArea_Route_3_7:
# 3637 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM2, CompleteArea_Route_3_11
CompleteArea_Route_3_10:
# 3641 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM3, CompleteArea_Route_3_14
CompleteArea_Route_3_13:
# 3645 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM4, CompleteArea_Route_3_17
CompleteArea_Route_3_16:
# 3649 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM5, CompleteArea_Route_3_20
CompleteArea_Route_3_19:
# 3653 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM6, CompleteArea_Route_3_22
	goto CompleteArea_Route_3_1

CompleteArea_Route_3_5:
# 3659 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_F
# 3660 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_M
# 3661 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_OLDSIS
# 3662 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_TUBER
# 3663 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_FISHERMAN
# 3664 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_LANDSWIMMER_1
# 3665 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_LANDSWIMMER_2
# 3666 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SAILOR
# 3667 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_M1
# 3668 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_M2
# 3669 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_F1
	goto CompleteArea_Route_3_4

CompleteArea_Route_3_8:
# 3634 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM1
# 3635 "data/scripts/my_debug.pory"
	additem ITEM_STAR_PIECE
	goto CompleteArea_Route_3_7

CompleteArea_Route_3_11:
# 3638 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM2
# 3639 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Route_3_10

CompleteArea_Route_3_14:
# 3642 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM3
# 3643 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_3_13

CompleteArea_Route_3_17:
# 3646 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM4
# 3647 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_3_16

CompleteArea_Route_3_20:
# 3650 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM5
# 3651 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_3_19

CompleteArea_Route_3_22:
# 3654 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM6
# 3655 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_3_1


CompleteArea_Route_9::
# 3674 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_9_2
CompleteArea_Route_9_1:
# 3708 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_9_5
CompleteArea_Route_9_4:
	return

CompleteArea_Route_9_2:
# 3675 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM1, CompleteArea_Route_9_8
CompleteArea_Route_9_7:
# 3679 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM2, CompleteArea_Route_9_11
CompleteArea_Route_9_10:
# 3683 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM3, CompleteArea_Route_9_14
CompleteArea_Route_9_13:
# 3687 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM4, CompleteArea_Route_9_17
CompleteArea_Route_9_16:
# 3691 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM5, CompleteArea_Route_9_20
CompleteArea_Route_9_19:
# 3695 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM6, CompleteArea_Route_9_23
CompleteArea_Route_9_22:
# 3699 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM7, CompleteArea_Route_9_26
CompleteArea_Route_9_25:
# 3703 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM8, CompleteArea_Route_9_28
	goto CompleteArea_Route_9_1

CompleteArea_Route_9_5:
# 3709 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_SWIMMER_M
# 3710 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_BLACKBELT
# 3711 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_BIRDKEEPER
# 3712 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_BATTLEGIRL
# 3713 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_SWIMMER_F
# 3714 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_FISHERMAN
# 3715 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_HIKER
# 3716 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_COLLECTOR
# 3717 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_SWIMMER_M2
# 3718 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_LANDSWIMMER
	goto CompleteArea_Route_9_4

CompleteArea_Route_9_8:
# 3676 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM1
# 3677 "data/scripts/my_debug.pory"
	additem ITEM_TM_FLIP_TURN
	goto CompleteArea_Route_9_7

CompleteArea_Route_9_11:
# 3680 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM2
# 3681 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Route_9_10

CompleteArea_Route_9_14:
# 3684 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM3
# 3685 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Route_9_13

CompleteArea_Route_9_17:
# 3688 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM4
# 3689 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_9_16

CompleteArea_Route_9_20:
# 3692 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM5
# 3693 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_9_19

CompleteArea_Route_9_23:
# 3696 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM6
# 3697 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Route_9_22

CompleteArea_Route_9_26:
# 3700 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM7
# 3701 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_9_25

CompleteArea_Route_9_28:
# 3704 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM8
# 3705 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_9_1


CompleteArea_Route_10::
# 3723 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_10_2
CompleteArea_Route_10_1:
# 3757 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_10_5
CompleteArea_Route_10_4:
# 3774 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_10_11
CompleteArea_Route_10_10:
	return

CompleteArea_Route_10_2:
# 3724 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM8, CompleteArea_Route_10_8
CompleteArea_Route_10_7:
# 3728 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM6, CompleteArea_Route_10_16
CompleteArea_Route_10_15:
# 3732 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM7, CompleteArea_Route_10_22
CompleteArea_Route_10_21:
# 3736 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM5, CompleteArea_Route_10_28
CompleteArea_Route_10_27:
# 3740 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM4, CompleteArea_Route_10_34
CompleteArea_Route_10_33:
# 3744 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM3, CompleteArea_Route_10_40
CompleteArea_Route_10_39:
# 3748 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM2, CompleteArea_Route_10_46
CompleteArea_Route_10_45:
# 3752 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM1, CompleteArea_Route_10_51
	goto CompleteArea_Route_10_1

CompleteArea_Route_10_5:
# 3758 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_F1
# 3759 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_FISHERMAN
# 3760 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_M1
# 3761 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_BLACKBELT
# 3762 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_HIKER
# 3763 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_F2
# 3764 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_M2
# 3765 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_BATTLEGIRL
# 3766 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_TUBER_M
# 3767 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R10_ACESWIMMER
	goto_if 0, CompleteArea_Route_10_13
	goto CompleteArea_Route_10_4

CompleteArea_Route_10_8:
# 3725 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM8
# 3726 "data/scripts/my_debug.pory"
	additem ITEM_DIVE_BALL
	goto CompleteArea_Route_10_7

CompleteArea_Route_10_11:
# 3775 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_1
# 3776 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_2
# 3777 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_3
# 3778 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_4
# 3779 "data/scripts/my_debug.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 4
	goto_if_lt CompleteArea_Route_10_19
CompleteArea_Route_10_18:
# 3782 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM1, CompleteArea_Route_10_25
CompleteArea_Route_10_24:
# 3786 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM2, CompleteArea_Route_10_31
CompleteArea_Route_10_30:
# 3790 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM4, CompleteArea_Route_10_37
CompleteArea_Route_10_36:
# 3794 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM3, CompleteArea_Route_10_43
CompleteArea_Route_10_42:
# 3798 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_DRAGONFANG, CompleteArea_Route_10_49
CompleteArea_Route_10_48:
# 3802 "data/scripts/my_debug.pory"
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto_if_lt CompleteArea_Route_10_54
CompleteArea_Route_10_53:
# 3805 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_CASUAL_IRIS
	goto_if 0, CompleteArea_Route_10_56
	goto CompleteArea_Route_10_10

CompleteArea_Route_10_13:
# 3768 "data/scripts/my_debug.pory"
	additem ITEM_BLUNDER_POLICY
# 3769 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_ACESWIMMER
# 3770 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_BLUNDER_POLICY
# 3771 "data/scripts/my_debug.pory"
	addbp 30
	goto CompleteArea_Route_10_4

CompleteArea_Route_10_16:
# 3729 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM6
# 3730 "data/scripts/my_debug.pory"
	additem ITEM_TM_SCALD
	goto CompleteArea_Route_10_15

CompleteArea_Route_10_19:
# 3780 "data/scripts/my_debug.pory"
	setvar VAR_SERPENTCAVE_WATER_LEVEL, 4
	goto CompleteArea_Route_10_18

CompleteArea_Route_10_22:
# 3733 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM7
# 3734 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_10_21

CompleteArea_Route_10_25:
# 3783 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM1
# 3784 "data/scripts/my_debug.pory"
	additem ITEM_MOON_STONE
	goto CompleteArea_Route_10_24

CompleteArea_Route_10_28:
# 3737 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM5
# 3738 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_10_27

CompleteArea_Route_10_31:
# 3787 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM2
# 3788 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Route_10_30

CompleteArea_Route_10_34:
# 3741 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM4
# 3742 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_10_33

CompleteArea_Route_10_37:
# 3791 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM4
# 3792 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_10_36

CompleteArea_Route_10_40:
# 3745 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM3
# 3746 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Route_10_39

CompleteArea_Route_10_43:
# 3795 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM3
# 3796 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_10_42

CompleteArea_Route_10_46:
# 3749 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM2
# 3750 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Route_10_45

CompleteArea_Route_10_49:
# 3799 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_DRAGONFANG
# 3800 "data/scripts/my_debug.pory"
	additem ITEM_DRAGON_FANG
	goto CompleteArea_Route_10_48

CompleteArea_Route_10_51:
# 3753 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM1
# 3754 "data/scripts/my_debug.pory"
	additem ITEM_BERRY_JUICE
	goto CompleteArea_Route_10_1

CompleteArea_Route_10_54:
# 3803 "data/scripts/my_debug.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto CompleteArea_Route_10_53

CompleteArea_Route_10_56:
# 3806 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CASUAL_IRIS
# 3807 "data/scripts/my_debug.pory"
	additem ITEM_GARCHOMPITE
	goto CompleteArea_Route_10_10


CompleteArea_Windplume_Mountain::
# 3813 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Windplume_Mountain_2
CompleteArea_Windplume_Mountain_1:
	return

CompleteArea_Windplume_Mountain_2:
# 3814 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_2, CompleteArea_Windplume_Mountain_5
CompleteArea_Windplume_Mountain_4:
# 3818 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_4, CompleteArea_Windplume_Mountain_8
CompleteArea_Windplume_Mountain_7:
# 3822 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_3, CompleteArea_Windplume_Mountain_11
CompleteArea_Windplume_Mountain_10:
# 3826 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_5, CompleteArea_Windplume_Mountain_14
CompleteArea_Windplume_Mountain_13:
# 3830 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_6, CompleteArea_Windplume_Mountain_17
CompleteArea_Windplume_Mountain_16:
# 3834 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_7, CompleteArea_Windplume_Mountain_20
CompleteArea_Windplume_Mountain_19:
# 3838 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_8, CompleteArea_Windplume_Mountain_23
CompleteArea_Windplume_Mountain_22:
# 3842 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_9, CompleteArea_Windplume_Mountain_26
CompleteArea_Windplume_Mountain_25:
# 3846 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_10, CompleteArea_Windplume_Mountain_29
CompleteArea_Windplume_Mountain_28:
# 3850 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_11, CompleteArea_Windplume_Mountain_32
CompleteArea_Windplume_Mountain_31:
# 3854 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_12, CompleteArea_Windplume_Mountain_35
CompleteArea_Windplume_Mountain_34:
# 3858 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_13, CompleteArea_Windplume_Mountain_38
CompleteArea_Windplume_Mountain_37:
# 3862 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_14, CompleteArea_Windplume_Mountain_41
CompleteArea_Windplume_Mountain_40:
# 3866 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_15, CompleteArea_Windplume_Mountain_44
CompleteArea_Windplume_Mountain_43:
# 3870 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_16, CompleteArea_Windplume_Mountain_47
CompleteArea_Windplume_Mountain_46:
# 3874 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_17, CompleteArea_Windplume_Mountain_49
	goto CompleteArea_Windplume_Mountain_1

CompleteArea_Windplume_Mountain_5:
# 3815 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_2
# 3816 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Windplume_Mountain_4

CompleteArea_Windplume_Mountain_8:
# 3819 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_4
# 3820 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Windplume_Mountain_7

CompleteArea_Windplume_Mountain_11:
# 3823 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_3
# 3824 "data/scripts/my_debug.pory"
	additem ITEM_MOON_STONE
	goto CompleteArea_Windplume_Mountain_10

CompleteArea_Windplume_Mountain_14:
# 3827 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_5
# 3828 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Windplume_Mountain_13

CompleteArea_Windplume_Mountain_17:
# 3831 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_6
# 3832 "data/scripts/my_debug.pory"
	additem ITEM_TM_FOCUS_BLAST
	goto CompleteArea_Windplume_Mountain_16

CompleteArea_Windplume_Mountain_20:
# 3835 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_7
# 3836 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Windplume_Mountain_19

CompleteArea_Windplume_Mountain_23:
# 3839 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_8
# 3840 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Windplume_Mountain_22

CompleteArea_Windplume_Mountain_26:
# 3843 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_9
# 3844 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Windplume_Mountain_25

CompleteArea_Windplume_Mountain_29:
# 3847 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_10
# 3848 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Windplume_Mountain_28

CompleteArea_Windplume_Mountain_32:
# 3851 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_11
# 3852 "data/scripts/my_debug.pory"
	additem ITEM_BLACK_GLASSES
	goto CompleteArea_Windplume_Mountain_31

CompleteArea_Windplume_Mountain_35:
# 3855 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_12
# 3856 "data/scripts/my_debug.pory"
	additem ITEM_ULTRA_BALL
	goto CompleteArea_Windplume_Mountain_34

CompleteArea_Windplume_Mountain_38:
# 3859 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_13
# 3860 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Windplume_Mountain_37

CompleteArea_Windplume_Mountain_41:
# 3863 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_14
# 3864 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Windplume_Mountain_40

CompleteArea_Windplume_Mountain_44:
# 3867 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_15
# 3868 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Windplume_Mountain_43

CompleteArea_Windplume_Mountain_47:
# 3871 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_16
# 3872 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Windplume_Mountain_46

CompleteArea_Windplume_Mountain_49:
# 3875 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_17
# 3876 "data/scripts/my_debug.pory"
	additem ITEM_FLOAT_STONE
	goto CompleteArea_Windplume_Mountain_1


CompleteArea_Route_16::
# 3882 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_16_2
CompleteArea_Route_16_1:
# 3908 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_16_5
CompleteArea_Route_16_4:
	return

CompleteArea_Route_16_2:
# 3883 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM1, CompleteArea_Route_16_8
CompleteArea_Route_16_7:
# 3887 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM2, CompleteArea_Route_16_11
CompleteArea_Route_16_10:
# 3891 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM3, CompleteArea_Route_16_14
CompleteArea_Route_16_13:
# 3895 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM4, CompleteArea_Route_16_17
CompleteArea_Route_16_16:
# 3899 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM5, CompleteArea_Route_16_20
CompleteArea_Route_16_19:
# 3903 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM6, CompleteArea_Route_16_22
	goto CompleteArea_Route_16_1

CompleteArea_Route_16_5:
# 3909 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_M
# 3910 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_F
# 3911 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_NINJABOY2
# 3912 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_F2
# 3913 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_F3
# 3914 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_GUITARIST
# 3915 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_HIKER
# 3916 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_BEAUTY
# 3917 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_NINJABOY
# 3918 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_EXPERT_F
	goto CompleteArea_Route_16_4

CompleteArea_Route_16_8:
# 3884 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM1
# 3885 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Route_16_7

CompleteArea_Route_16_11:
# 3888 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM2
# 3889 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_16_10

CompleteArea_Route_16_14:
# 3892 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM3
# 3893 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_16_13

CompleteArea_Route_16_17:
# 3896 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM4
# 3897 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Route_16_16

CompleteArea_Route_16_20:
# 3900 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM5
# 3901 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_16_19

CompleteArea_Route_16_22:
# 3904 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM6
# 3905 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Route_16_1


CompleteArea_Basalek_Town::
# 3923 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Basalek_Town_2
CompleteArea_Basalek_Town_1:
# 3953 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Basalek_Town_5
CompleteArea_Basalek_Town_4:
# 3973 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Basalek_Town_11
CompleteArea_Basalek_Town_10:
	return

CompleteArea_Basalek_Town_2:
# 3924 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_ITEM2, CompleteArea_Basalek_Town_8
CompleteArea_Basalek_Town_7:
# 3928 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_ITEM1, CompleteArea_Basalek_Town_16
CompleteArea_Basalek_Town_15:
# 3932 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM3, CompleteArea_Basalek_Town_23
CompleteArea_Basalek_Town_22:
# 3936 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM2, CompleteArea_Basalek_Town_26
CompleteArea_Basalek_Town_25:
# 3940 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM1, CompleteArea_Basalek_Town_29
CompleteArea_Basalek_Town_28:
# 3944 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM4, CompleteArea_Basalek_Town_32
CompleteArea_Basalek_Town_31:
# 3948 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM5, CompleteArea_Basalek_Town_34
	goto CompleteArea_Basalek_Town_1

CompleteArea_Basalek_Town_5:
# 3954 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_HIKER1
# 3955 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BLACKBELT
# 3956 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_PICNICKER
# 3957 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_FIREBREATHER
# 3958 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BLACKBELT2
# 3959 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_CAMPERM
# 3960 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_PICNICKER2
# 3961 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_HIKER2
# 3962 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BEAUTY
# 3963 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_FIREBREATHER2
# 3964 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_HIKER3
# 3965 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BTUN_BROCK
	goto_if 0, CompleteArea_Basalek_Town_13
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_8:
# 3925 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_ITEM2
# 3926 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Basalek_Town_7

CompleteArea_Basalek_Town_11:
# 3974 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_WOMAN_LEMONADE, CompleteArea_Basalek_Town_18
	goto CompleteArea_Basalek_Town_10

CompleteArea_Basalek_Town_13:
# 3966 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BROCK
# 3967 "data/scripts/my_debug.pory"
	giveitem ITEM_HM_ROCK_CLIMB
# 3968 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q38_BASALEK_TUNNELS_START, CompleteArea_Basalek_Town_20
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_16:
# 3929 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_ITEM1
# 3930 "data/scripts/my_debug.pory"
	additem ITEM_BURN_HEAL
	goto CompleteArea_Basalek_Town_15

CompleteArea_Basalek_Town_18:
# 3975 "data/scripts/my_debug.pory"
	additem ITEM_FRESH_WATER
# 3976 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_WOMAN_LEMONADE
	goto CompleteArea_Basalek_Town_10

CompleteArea_Basalek_Town_20:
# 3969 "data/scripts/my_debug.pory"
	completequest FLAG_Q38_BASALEK_TUNNELS_COMPLETE
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_23:
# 3933 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM3
# 3934 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Basalek_Town_22

CompleteArea_Basalek_Town_26:
# 3937 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM2
# 3938 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Basalek_Town_25

CompleteArea_Basalek_Town_29:
# 3941 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM1
# 3942 "data/scripts/my_debug.pory"
	additem ITEM_STEELIXITE
	goto CompleteArea_Basalek_Town_28

CompleteArea_Basalek_Town_32:
# 3945 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM4
# 3946 "data/scripts/my_debug.pory"
	additem ITEM_TM_INCINERATE
	goto CompleteArea_Basalek_Town_31

CompleteArea_Basalek_Town_34:
# 3949 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM5
# 3950 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Basalek_Town_1


CompleteArea_Route_17::
# 3982 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_17_2
CompleteArea_Route_17_1:
# 4000 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_17_5
CompleteArea_Route_17_4:
	return

CompleteArea_Route_17_2:
# 3983 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM1, CompleteArea_Route_17_8
CompleteArea_Route_17_7:
# 3987 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM2, CompleteArea_Route_17_11
CompleteArea_Route_17_10:
# 3991 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM3, CompleteArea_Route_17_14
CompleteArea_Route_17_13:
# 3995 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM4, CompleteArea_Route_17_16
	goto CompleteArea_Route_17_1

CompleteArea_Route_17_5:
# 4001 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_CAMPER_M
# 4002 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_PICNICKER1
# 4003 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_PICNICKER2
# 4004 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_MANIAC
# 4005 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_SCIENTIST
# 4006 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_HIKER1
# 4007 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_HIKER2
# 4008 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_COOLTRAINER
	goto CompleteArea_Route_17_4

CompleteArea_Route_17_8:
# 3984 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM1
# 3985 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_17_7

CompleteArea_Route_17_11:
# 3988 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM2
# 3989 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Route_17_10

CompleteArea_Route_17_14:
# 3992 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM3
# 3993 "data/scripts/my_debug.pory"
	additem ITEM_TM_TOXIC
	goto CompleteArea_Route_17_13

CompleteArea_Route_17_16:
# 3996 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM4
# 3997 "data/scripts/my_debug.pory"
	additem ITEM_HEAVY_BALL
	goto CompleteArea_Route_17_1


CompleteArea_Route_18::
# 4013 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_18_2
CompleteArea_Route_18_1:
# 4035 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_18_5
CompleteArea_Route_18_4:
	return

CompleteArea_Route_18_2:
# 4014 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM1, CompleteArea_Route_18_8
CompleteArea_Route_18_7:
# 4018 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM3, CompleteArea_Route_18_13
CompleteArea_Route_18_12:
# 4022 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM2, CompleteArea_Route_18_16
CompleteArea_Route_18_15:
# 4026 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM4, CompleteArea_Route_18_19
CompleteArea_Route_18_18:
# 4030 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_110_YACHE_1
# 4031 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 4032 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_110_YACHE_2
# 4033 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_18_1

CompleteArea_Route_18_5:
# 4036 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_HIKER1
# 4037 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_RANGER_M
# 4038 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_KINDLER
# 4039 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_HIKER2
# 4040 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_RANGER_F
# 4041 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_SCIENTIST
# 4042 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_POKEMANIAC
# 4043 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_BREEDER_M
# 4044 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R18_ACE_TRAINER_M
	goto_if 0, CompleteArea_Route_18_10
	goto CompleteArea_Route_18_4

CompleteArea_Route_18_8:
# 4015 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM1
# 4016 "data/scripts/my_debug.pory"
	additem ITEM_ICY_ROCK
	goto CompleteArea_Route_18_7

CompleteArea_Route_18_10:
# 4045 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_ACE_TRAINER_M
# 4046 "data/scripts/my_debug.pory"
	additem ITEM_LOADED_DICE
# 4047 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_LOADED_DICE
	goto CompleteArea_Route_18_4

CompleteArea_Route_18_13:
# 4019 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM3
# 4020 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_18_12

CompleteArea_Route_18_16:
# 4023 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM2
# 4024 "data/scripts/my_debug.pory"
	additem ITEM_ICE_HEAL
	goto CompleteArea_Route_18_15

CompleteArea_Route_18_19:
# 4027 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM4
# 4028 "data/scripts/my_debug.pory"
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_18_18


CompleteArea_Frosthearth_City::
# 4053 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Frosthearth_City_2
CompleteArea_Frosthearth_City_1:
# 4091 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Frosthearth_City_5
CompleteArea_Frosthearth_City_4:
	return

CompleteArea_Frosthearth_City_2:
# 4054 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM1, CompleteArea_Frosthearth_City_8
CompleteArea_Frosthearth_City_7:
# 4058 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM2, CompleteArea_Frosthearth_City_14
CompleteArea_Frosthearth_City_13:
# 4062 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM3, CompleteArea_Frosthearth_City_23
CompleteArea_Frosthearth_City_22:
# 4066 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM4, CompleteArea_Frosthearth_City_31
CompleteArea_Frosthearth_City_30:
# 4070 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM5, CompleteArea_Frosthearth_City_38
CompleteArea_Frosthearth_City_37:
# 4074 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM6, CompleteArea_Frosthearth_City_41
CompleteArea_Frosthearth_City_40:
# 4078 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FROSTFIRE_ITEM3, CompleteArea_Frosthearth_City_44
CompleteArea_Frosthearth_City_43:
# 4082 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FROSTFIRE_ITEM2, CompleteArea_Frosthearth_City_47
CompleteArea_Frosthearth_City_46:
# 4086 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FROSTFIRE_ITEM1, CompleteArea_Frosthearth_City_49
	goto CompleteArea_Frosthearth_City_1

CompleteArea_Frosthearth_City_5:
# 4092 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDCAVE_VERDANT_SPHERE, CompleteArea_Frosthearth_City_11
CompleteArea_Frosthearth_City_10:
# 4104 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_CHOCOLATE_FROM_OLD_MAN, CompleteArea_Frosthearth_City_17
CompleteArea_Frosthearth_City_16:
# 4108 "data/scripts/my_debug.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_lt CompleteArea_Frosthearth_City_26
CompleteArea_Frosthearth_City_25:
# 4115 "data/scripts/my_debug.pory"
	compare VAR_FROSTHEARTH_HARD_ROCK, 3
	goto_if_lt CompleteArea_Frosthearth_City_33
	goto CompleteArea_Frosthearth_City_4

CompleteArea_Frosthearth_City_8:
# 4055 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM1
# 4056 "data/scripts/my_debug.pory"
	additem ITEM_TM_HAIL
	goto CompleteArea_Frosthearth_City_7

CompleteArea_Frosthearth_City_11:
# 4093 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDCAVE_VERDANT_SPHERE
# 4094 "data/scripts/my_debug.pory"
	additem ITEM_VERDANT_SPHERE
# 4095 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
# 4096 "data/scripts/my_debug.pory"
	clearflag FLAG_FRIGIDCAVE_DOOR_OPEN
# 4097 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_START, CompleteArea_Frosthearth_City_20
CompleteArea_Frosthearth_City_19:
	checkitem ITEM_STEEL_SPHERE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Frosthearth_City_28
	goto CompleteArea_Frosthearth_City_10

CompleteArea_Frosthearth_City_14:
# 4059 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM2
# 4060 "data/scripts/my_debug.pory"
	additem ITEM_YACHE_BERRY
	goto CompleteArea_Frosthearth_City_13

CompleteArea_Frosthearth_City_17:
# 4105 "data/scripts/my_debug.pory"
	additem ITEM_RAGE_CANDY_BAR
# 4106 "data/scripts/my_debug.pory"
	setflag FLAG_CHOCOLATE_FROM_OLD_MAN
	goto CompleteArea_Frosthearth_City_16

CompleteArea_Frosthearth_City_20:
# 4098 "data/scripts/my_debug.pory"
	completequest FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_COMPLETE
	goto CompleteArea_Frosthearth_City_19

CompleteArea_Frosthearth_City_23:
# 4063 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM3
# 4064 "data/scripts/my_debug.pory"
	additem ITEM_COMET_SHARD
	goto CompleteArea_Frosthearth_City_22

CompleteArea_Frosthearth_City_26:
# 4109 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
# 4110 "data/scripts/my_debug.pory"
	setvar VAR_FROSTHEARTH_RUFFLET, 10
# 4111 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q40_FROSTHEARTH_RUFFLET_START, CompleteArea_Frosthearth_City_35
	goto CompleteArea_Frosthearth_City_25

CompleteArea_Frosthearth_City_28:
# 4101 "data/scripts/my_debug.pory"
	additem ITEM_STEEL_SPHERE
	goto CompleteArea_Frosthearth_City_10

CompleteArea_Frosthearth_City_31:
# 4067 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM4
# 4068 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ELIXIR
	goto CompleteArea_Frosthearth_City_30

CompleteArea_Frosthearth_City_33:
# 4116 "data/scripts/my_debug.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 3
# 4117 "data/scripts/my_debug.pory"
	additem ITEM_HARD_STONE
	goto CompleteArea_Frosthearth_City_4

CompleteArea_Frosthearth_City_35:
# 4112 "data/scripts/my_debug.pory"
	completequest FLAG_Q40_FROSTHEARTH_RUFFLET_COMPLETE
	goto CompleteArea_Frosthearth_City_25

CompleteArea_Frosthearth_City_38:
# 4071 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM5
# 4072 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Frosthearth_City_37

CompleteArea_Frosthearth_City_41:
# 4075 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM6
# 4076 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Frosthearth_City_40

CompleteArea_Frosthearth_City_44:
# 4079 "data/scripts/my_debug.pory"
	setflag FLAG_FROSTFIRE_ITEM3
# 4080 "data/scripts/my_debug.pory"
	additem ITEM_X_SPEED
	goto CompleteArea_Frosthearth_City_43

CompleteArea_Frosthearth_City_47:
# 4083 "data/scripts/my_debug.pory"
	setflag FLAG_FROSTFIRE_ITEM2
# 4084 "data/scripts/my_debug.pory"
	additem ITEM_BURN_HEAL
	goto CompleteArea_Frosthearth_City_46

CompleteArea_Frosthearth_City_49:
# 4087 "data/scripts/my_debug.pory"
	setflag FLAG_FROSTFIRE_ITEM1
# 4088 "data/scripts/my_debug.pory"
	additem ITEM_SNOWBALL
	goto CompleteArea_Frosthearth_City_1


CompleteArea_Rock_Climb::
# 4123 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Rock_Climb_2
CompleteArea_Rock_Climb_1:
# 4169 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Rock_Climb_5
CompleteArea_Rock_Climb_4:
	return

CompleteArea_Rock_Climb_2:
# 4124 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM10, CompleteArea_Rock_Climb_8
CompleteArea_Rock_Climb_7:
# 4128 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE12_SIDEITEM, CompleteArea_Rock_Climb_13
CompleteArea_Rock_Climb_12:
# 4132 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM5, CompleteArea_Rock_Climb_16
CompleteArea_Rock_Climb_15:
# 4136 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AMBEROCK_ITEM2, CompleteArea_Rock_Climb_19
CompleteArea_Rock_Climb_18:
# 4140 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM1, CompleteArea_Rock_Climb_22
CompleteArea_Rock_Climb_21:
# 4144 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM2, CompleteArea_Rock_Climb_25
CompleteArea_Rock_Climb_24:
# 4148 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM3, CompleteArea_Rock_Climb_28
CompleteArea_Rock_Climb_27:
# 4152 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM4, CompleteArea_Rock_Climb_31
CompleteArea_Rock_Climb_30:
# 4156 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM5, CompleteArea_Rock_Climb_34
CompleteArea_Rock_Climb_33:
# 4160 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM6, CompleteArea_Rock_Climb_37
CompleteArea_Rock_Climb_36:
# 4164 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM7, CompleteArea_Rock_Climb_39
	goto CompleteArea_Rock_Climb_1

CompleteArea_Rock_Climb_5:
# 4170 "data/scripts/my_debug.pory"
	compare VAR_HOUNDOOMS_DEFEATED, 4
	goto_if_lt CompleteArea_Rock_Climb_10
	goto CompleteArea_Rock_Climb_4

CompleteArea_Rock_Climb_8:
# 4125 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM10
# 4126 "data/scripts/my_debug.pory"
	additem ITEM_SMOOTH_ROCK
	goto CompleteArea_Rock_Climb_7

CompleteArea_Rock_Climb_10:
# 4171 "data/scripts/my_debug.pory"
	setvar VAR_HOUNDOOMS_DEFEATED, 4
# 4172 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE
# 4173 "data/scripts/my_debug.pory"
	additem ITEM_HOUNDOOMINITE
	goto CompleteArea_Rock_Climb_4

CompleteArea_Rock_Climb_13:
# 4129 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE12_SIDEITEM
# 4130 "data/scripts/my_debug.pory"
	additem ITEM_TM_IRON_TAIL
	goto CompleteArea_Rock_Climb_12

CompleteArea_Rock_Climb_16:
# 4133 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM5
# 4134 "data/scripts/my_debug.pory"
	additem ITEM_PP_MAX
	goto CompleteArea_Rock_Climb_15

CompleteArea_Rock_Climb_19:
# 4137 "data/scripts/my_debug.pory"
	setflag FLAG_AMBEROCK_ITEM2
# 4138 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ELIXIR
	goto CompleteArea_Rock_Climb_18

CompleteArea_Rock_Climb_22:
# 4141 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM1
# 4142 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Rock_Climb_21

CompleteArea_Rock_Climb_25:
# 4145 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM2
# 4146 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Rock_Climb_24

CompleteArea_Rock_Climb_28:
# 4149 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM3
# 4150 "data/scripts/my_debug.pory"
	additem ITEM_STAR_PIECE
	goto CompleteArea_Rock_Climb_27

CompleteArea_Rock_Climb_31:
# 4153 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM4
# 4154 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Rock_Climb_30

CompleteArea_Rock_Climb_34:
# 4157 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM5
# 4158 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Rock_Climb_33

CompleteArea_Rock_Climb_37:
# 4161 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM6
# 4162 "data/scripts/my_debug.pory"
	additem ITEM_TM_DARK_PULSE
	goto CompleteArea_Rock_Climb_36

CompleteArea_Rock_Climb_39:
# 4165 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM7
# 4166 "data/scripts/my_debug.pory"
	additem ITEM_SOUL_DEW
	goto CompleteArea_Rock_Climb_1


CompleteArea_Desert_Ruins::
# 4179 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Desert_Ruins_2
CompleteArea_Desert_Ruins_1:
	return

CompleteArea_Desert_Ruins_2:
	checkitem ITEM_HM_STRENGTH
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_5
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_4:
# 4181 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM1, CompleteArea_Desert_Ruins_9
CompleteArea_Desert_Ruins_8:
# 4185 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM2, CompleteArea_Desert_Ruins_12
CompleteArea_Desert_Ruins_11:
# 4189 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM3, CompleteArea_Desert_Ruins_15
CompleteArea_Desert_Ruins_14:
# 4193 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM4, CompleteArea_Desert_Ruins_18
CompleteArea_Desert_Ruins_17:
# 4197 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM5, CompleteArea_Desert_Ruins_21
CompleteArea_Desert_Ruins_20:
# 4201 "data/scripts/my_debug.pory"
	call DebugFossil
	checkitem ITEM_HM_SURF
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_24
CompleteArea_Desert_Ruins_23:
	checkitem ITEM_HM_ROCK_CLIMB
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_26
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_5:
	checkitem ITEM_HM_ROCK_SMASH
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Desert_Ruins_4
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_9:
# 4182 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM1
# 4183 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_GOLD
	goto CompleteArea_Desert_Ruins_8

CompleteArea_Desert_Ruins_12:
# 4186 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM2
# 4187 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_VASE
	goto CompleteArea_Desert_Ruins_11

CompleteArea_Desert_Ruins_15:
# 4190 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM3
# 4191 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_VASE
	goto CompleteArea_Desert_Ruins_14

CompleteArea_Desert_Ruins_18:
# 4194 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM4
# 4195 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Desert_Ruins_17

CompleteArea_Desert_Ruins_21:
# 4198 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM5
# 4199 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_GOLD
	goto CompleteArea_Desert_Ruins_20

CompleteArea_Desert_Ruins_24:
# 4203 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_UNDERGROUNDRUINS_FULLRESTORE, CompleteArea_Desert_Ruins_28
	goto CompleteArea_Desert_Ruins_23

CompleteArea_Desert_Ruins_26:
# 4209 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RELIC_CROWN, CompleteArea_Desert_Ruins_30
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_28:
# 4204 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_FULLRESTORE
# 4205 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Desert_Ruins_23

CompleteArea_Desert_Ruins_30:
# 4210 "data/scripts/my_debug.pory"
	setflag FLAG_RELIC_CROWN
# 4211 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_CROWN
	goto CompleteArea_Desert_Ruins_1


CompleteArea_Safari_Zone::
# 4219 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Safari_Zone_2
CompleteArea_Safari_Zone_1:
	return

CompleteArea_Safari_Zone_2:
# 4220 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY, CompleteArea_Safari_Zone_5
CompleteArea_Safari_Zone_4:
# 4224 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE, CompleteArea_Safari_Zone_8
CompleteArea_Safari_Zone_7:
# 4228 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP, CompleteArea_Safari_Zone_11
CompleteArea_Safari_Zone_10:
	checkitem ITEM_HM_STRENGTH
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_14
CompleteArea_Safari_Zone_13:
	checkitem ITEM_HM_ROCK_SMASH
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_17
CompleteArea_Safari_Zone_16:
	checkitem ITEM_HM_SURF
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_23
CompleteArea_Safari_Zone_22:
	checkitem ITEM_HM_WATERFALL
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 0
	goto_if_ne CompleteArea_Safari_Zone_31
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_5:
# 4221 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY
# 4222 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Safari_Zone_4

CompleteArea_Safari_Zone_8:
# 4225 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE
# 4226 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Safari_Zone_7

CompleteArea_Safari_Zone_11:
# 4229 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP
# 4230 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Safari_Zone_10

CompleteArea_Safari_Zone_14:
# 4233 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL, CompleteArea_Safari_Zone_20
CompleteArea_Safari_Zone_19:
# 4237 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE, CompleteArea_Safari_Zone_29
CompleteArea_Safari_Zone_28:
# 4241 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY, CompleteArea_Safari_Zone_40
CompleteArea_Safari_Zone_39:
# 4245 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC, CompleteArea_Safari_Zone_52
CompleteArea_Safari_Zone_51:
# 4249 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET, CompleteArea_Safari_Zone_61
	goto CompleteArea_Safari_Zone_13

CompleteArea_Safari_Zone_17:
# 4255 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM1, CompleteArea_Safari_Zone_26
CompleteArea_Safari_Zone_25:
# 4259 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM2, CompleteArea_Safari_Zone_37
CompleteArea_Safari_Zone_36:
# 4263 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM3, CompleteArea_Safari_Zone_49
CompleteArea_Safari_Zone_48:
# 4267 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM4, CompleteArea_Safari_Zone_59
	goto CompleteArea_Safari_Zone_16

CompleteArea_Safari_Zone_20:
# 4234 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL
# 4235 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Safari_Zone_19

CompleteArea_Safari_Zone_23:
# 4273 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM7, CompleteArea_Safari_Zone_34
CompleteArea_Safari_Zone_33:
# 4277 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM6, CompleteArea_Safari_Zone_46
CompleteArea_Safari_Zone_45:
# 4281 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM5, CompleteArea_Safari_Zone_57
CompleteArea_Safari_Zone_56:
# 4285 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM4, CompleteArea_Safari_Zone_64
CompleteArea_Safari_Zone_63:
# 4289 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM3, CompleteArea_Safari_Zone_66
	goto CompleteArea_Safari_Zone_22

CompleteArea_Safari_Zone_26:
# 4256 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM1
# 4257 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Safari_Zone_25

CompleteArea_Safari_Zone_29:
# 4238 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE
# 4239 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Safari_Zone_28

CompleteArea_Safari_Zone_31:
# 4295 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM2, CompleteArea_Safari_Zone_43
CompleteArea_Safari_Zone_42:
# 4299 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM1, CompleteArea_Safari_Zone_54
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_34:
# 4274 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM7
# 4275 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Safari_Zone_33

CompleteArea_Safari_Zone_37:
# 4260 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM2
# 4261 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Safari_Zone_36

CompleteArea_Safari_Zone_40:
# 4242 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY
# 4243 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Safari_Zone_39

CompleteArea_Safari_Zone_43:
# 4296 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM2
# 4297 "data/scripts/my_debug.pory"
	additem ITEM_KINGS_ROCK
	goto CompleteArea_Safari_Zone_42

CompleteArea_Safari_Zone_46:
# 4278 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM6
# 4279 "data/scripts/my_debug.pory"
	additem ITEM_TROPICAL_STONE
	goto CompleteArea_Safari_Zone_45

CompleteArea_Safari_Zone_49:
# 4264 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM3
# 4265 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Safari_Zone_48

CompleteArea_Safari_Zone_52:
# 4246 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC
# 4247 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Safari_Zone_51

CompleteArea_Safari_Zone_54:
# 4300 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM1
# 4301 "data/scripts/my_debug.pory"
	additem ITEM_TM_GIGA_IMPACT
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_57:
# 4282 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM5
# 4283 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Safari_Zone_56

CompleteArea_Safari_Zone_59:
# 4268 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM4
# 4269 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Safari_Zone_16

CompleteArea_Safari_Zone_61:
# 4250 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET
# 4251 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Safari_Zone_13

CompleteArea_Safari_Zone_64:
# 4286 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM4
# 4287 "data/scripts/my_debug.pory"
	additem ITEM_SOFT_SAND
	goto CompleteArea_Safari_Zone_63

CompleteArea_Safari_Zone_66:
# 4290 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM3
# 4291 "data/scripts/my_debug.pory"
	additem ITEM_IRON
	goto CompleteArea_Safari_Zone_22


CompleteArea_Misc_Surfing::
# 4308 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Misc_Surfing_2
CompleteArea_Misc_Surfing_1:
# 4378 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Misc_Surfing_5
CompleteArea_Misc_Surfing_4:
	return

CompleteArea_Misc_Surfing_2:
# 4309 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE1_TM03, CompleteArea_Misc_Surfing_8
CompleteArea_Misc_Surfing_7:
# 4313 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE, CompleteArea_Misc_Surfing_13
CompleteArea_Misc_Surfing_12:
# 4317 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WW_WATERSTONE, CompleteArea_Misc_Surfing_18
CompleteArea_Misc_Surfing_17:
# 4321 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_PIDGEOTITE, CompleteArea_Misc_Surfing_21
CompleteArea_Misc_Surfing_20:
# 4325 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE3_ITEM1, CompleteArea_Misc_Surfing_24
CompleteArea_Misc_Surfing_23:
# 4329 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM4, CompleteArea_Misc_Surfing_27
CompleteArea_Misc_Surfing_26:
# 4333 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_WHITE_HERB, CompleteArea_Misc_Surfing_30
CompleteArea_Misc_Surfing_29:
# 4337 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM4, CompleteArea_Misc_Surfing_33
CompleteArea_Misc_Surfing_32:
# 4341 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SHORESLATE_ITEM2, CompleteArea_Misc_Surfing_36
CompleteArea_Misc_Surfing_35:
# 4345 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM6, CompleteArea_Misc_Surfing_39
CompleteArea_Misc_Surfing_38:
# 4349 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_MARIGORGE_ITEM3, CompleteArea_Misc_Surfing_42
CompleteArea_Misc_Surfing_41:
# 4353 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_MARIGORGE_ITEM1, CompleteArea_Misc_Surfing_45
CompleteArea_Misc_Surfing_44:
# 4357 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_AGGRONITE, CompleteArea_Misc_Surfing_48
CompleteArea_Misc_Surfing_47:
# 4361 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROCKLIFFE_ITEM3, CompleteArea_Misc_Surfing_51
CompleteArea_Misc_Surfing_50:
# 4365 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOODEDCAVE_FOSSIL, CompleteArea_Misc_Surfing_54
CompleteArea_Misc_Surfing_53:
# 4369 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM5, CompleteArea_Misc_Surfing_57
CompleteArea_Misc_Surfing_56:
# 4373 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM6, CompleteArea_Misc_Surfing_59
	goto CompleteArea_Misc_Surfing_1

CompleteArea_Misc_Surfing_5:
# 4379 "data/scripts/my_debug.pory"
	compare VAR_KAOLISLE_BIRDS, 131
	goto_if_lt CompleteArea_Misc_Surfing_10
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_8:
# 4310 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE1_TM03
# 4311 "data/scripts/my_debug.pory"
	additem ITEM_TM_SMART_STRIKE
	goto CompleteArea_Misc_Surfing_7

CompleteArea_Misc_Surfing_10:
# 4380 "data/scripts/my_debug.pory"
	setvar VAR_KAOLISLE_BIRDS, 131
# 4381 "data/scripts/my_debug.pory"
	additem ITEM_TM_BULLET_SEED
# 4382 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q28_KAOLISLE_LOSTBIRDS_START, CompleteArea_Misc_Surfing_15
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_13:
# 4314 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE
# 4315 "data/scripts/my_debug.pory"
	additem ITEM_HARD_STONE
	goto CompleteArea_Misc_Surfing_12

CompleteArea_Misc_Surfing_15:
# 4383 "data/scripts/my_debug.pory"
	completequest FLAG_Q28_KAOLISLE_LOSTBIRDS_COMPLETE
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_18:
# 4318 "data/scripts/my_debug.pory"
	setflag FLAG_WW_WATERSTONE
# 4319 "data/scripts/my_debug.pory"
	additem ITEM_WATER_STONE
	goto CompleteArea_Misc_Surfing_17

CompleteArea_Misc_Surfing_21:
# 4322 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_PIDGEOTITE
# 4323 "data/scripts/my_debug.pory"
	additem ITEM_PIDGEOTITE
	goto CompleteArea_Misc_Surfing_20

CompleteArea_Misc_Surfing_24:
# 4326 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE3_ITEM1
# 4327 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Misc_Surfing_23

CompleteArea_Misc_Surfing_27:
# 4330 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM4
# 4331 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Misc_Surfing_26

CompleteArea_Misc_Surfing_30:
# 4334 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_WHITE_HERB
# 4335 "data/scripts/my_debug.pory"
	additem ITEM_WHITE_HERB
	goto CompleteArea_Misc_Surfing_29

CompleteArea_Misc_Surfing_33:
# 4338 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM4
# 4339 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Misc_Surfing_32

CompleteArea_Misc_Surfing_36:
# 4342 "data/scripts/my_debug.pory"
	setflag FLAG_SHORESLATE_ITEM2
# 4343 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Misc_Surfing_35

CompleteArea_Misc_Surfing_39:
# 4346 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM6
# 4347 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ETHER
	goto CompleteArea_Misc_Surfing_38

CompleteArea_Misc_Surfing_42:
# 4350 "data/scripts/my_debug.pory"
	setflag FLAG_MARIGORGE_ITEM3
# 4351 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Misc_Surfing_41

CompleteArea_Misc_Surfing_45:
# 4354 "data/scripts/my_debug.pory"
	setflag FLAG_MARIGORGE_ITEM1
# 4355 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Misc_Surfing_44

CompleteArea_Misc_Surfing_48:
# 4358 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_AGGRONITE
# 4359 "data/scripts/my_debug.pory"
	additem ITEM_AGGRONITE
	goto CompleteArea_Misc_Surfing_47

CompleteArea_Misc_Surfing_51:
# 4362 "data/scripts/my_debug.pory"
	setflag FLAG_ROCKLIFFE_ITEM3
# 4363 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Misc_Surfing_50

CompleteArea_Misc_Surfing_54:
# 4366 "data/scripts/my_debug.pory"
	setflag FLAG_FLOODEDCAVE_FOSSIL
# 4367 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Misc_Surfing_53

CompleteArea_Misc_Surfing_57:
# 4370 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM5
# 4371 "data/scripts/my_debug.pory"
	additem ITEM_TM_HIDDEN_POWER
	goto CompleteArea_Misc_Surfing_56

CompleteArea_Misc_Surfing_59:
# 4374 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM6
# 4375 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ETHER
	goto CompleteArea_Misc_Surfing_1


TryLootingStrangeSeed::
# 4391 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TryLootingStrangeSeed_2
# 4394 "data/scripts/my_debug.pory"
	trystrangeseed
# 4395 "data/scripts/my_debug.pory"
	compare VAR_0x8004, 60
	goto_if_ge TryLootingStrangeSeed_5
TryLootingStrangeSeed_4:
	return

TryLootingStrangeSeed_2:
	return

TryLootingStrangeSeed_5:
# 4396 "data/scripts/my_debug.pory"
	additem ITEM_STRANGE_SEED
	goto TryLootingStrangeSeed_4


TryCuttingStrangeSeedTree::
# 4401 "data/scripts/my_debug.pory"
	trystrangeseed
# 4402 "data/scripts/my_debug.pory"
	compare VAR_0x8004, 80
	goto_if_ge TryCuttingStrangeSeedTree_1
	return

TryCuttingStrangeSeedTree_1:
# 4403 "data/scripts/my_debug.pory"
	additem ITEM_STRANGE_SEED
	return


GenerateRelic::
# 4407 "data/scripts/my_debug.pory"
	random 100
# 4408 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 65
	goto_if_le GenerateRelic_2
# 4411 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 94
	goto_if_ge GenerateRelic_3
# 4415 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_SILVER
GenerateRelic_1:
	return

GenerateRelic_2:
# 4409 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_COPPER
	goto GenerateRelic_1

GenerateRelic_3:
# 4412 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_GOLD
	goto GenerateRelic_1


DebugFossil::
# 4421 "data/scripts/my_debug.pory"
	random 11
# 4422 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 4423 "data/scripts/my_debug.pory"
	case 0, DebugFossil_3
# 4425 "data/scripts/my_debug.pory"
	case 1, DebugFossil_4
# 4427 "data/scripts/my_debug.pory"
	case 2, DebugFossil_5
# 4429 "data/scripts/my_debug.pory"
	case 3, DebugFossil_6
# 4431 "data/scripts/my_debug.pory"
	case 4, DebugFossil_7
# 4433 "data/scripts/my_debug.pory"
	case 5, DebugFossil_8
# 4435 "data/scripts/my_debug.pory"
	case 6, DebugFossil_9
# 4437 "data/scripts/my_debug.pory"
	case 7, DebugFossil_10
# 4439 "data/scripts/my_debug.pory"
	case 8, DebugFossil_11
# 4441 "data/scripts/my_debug.pory"
	case 9, DebugFossil_12
# 4443 "data/scripts/my_debug.pory"
	case 10, DebugFossil_13
DebugFossil_1:
	return

DebugFossil_3:
# 4424 "data/scripts/my_debug.pory"
	goto LootHelix2
	goto DebugFossil_1

DebugFossil_4:
# 4426 "data/scripts/my_debug.pory"
	goto LootDome2
	goto DebugFossil_1

DebugFossil_5:
# 4428 "data/scripts/my_debug.pory"
	goto LootOldAmber2
	goto DebugFossil_1

DebugFossil_6:
# 4430 "data/scripts/my_debug.pory"
	goto LootRoot2
	goto DebugFossil_1

DebugFossil_7:
# 4432 "data/scripts/my_debug.pory"
	goto LootClaw2
	goto DebugFossil_1

DebugFossil_8:
# 4434 "data/scripts/my_debug.pory"
	goto LootSkull2
	goto DebugFossil_1

DebugFossil_9:
# 4436 "data/scripts/my_debug.pory"
	goto LootArmor2
	goto DebugFossil_1

DebugFossil_10:
# 4438 "data/scripts/my_debug.pory"
	goto LootCover2
	goto DebugFossil_1

DebugFossil_11:
# 4440 "data/scripts/my_debug.pory"
	goto LootPlume2
	goto DebugFossil_1

DebugFossil_12:
# 4442 "data/scripts/my_debug.pory"
	goto LootJaw2
	goto DebugFossil_1

DebugFossil_13:
# 4444 "data/scripts/my_debug.pory"
	goto LootSail2
	goto DebugFossil_1


LootHelix2::
# 4450 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelix2_2
LootHelix2_1:
# 4453 "data/scripts/my_debug.pory"
	additem ITEM_HELIX_FOSSIL
# 4454 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_HELIX_FOSSIL
	return

LootHelix2_2:
# 4451 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootHelix2_1


LootDome2::
# 4458 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDome2_2
LootDome2_1:
# 4461 "data/scripts/my_debug.pory"
	additem ITEM_DOME_FOSSIL
# 4462 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_DOME_FOSSIL
	return

LootDome2_2:
# 4459 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootDome2_1


LootOldAmber2::
# 4466 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmber2_2
LootOldAmber2_1:
# 4469 "data/scripts/my_debug.pory"
	additem ITEM_OLD_AMBER
# 4470 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
	return

LootOldAmber2_2:
# 4467 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootOldAmber2_1


LootRoot2::
# 4474 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRoot2_2
LootRoot2_1:
# 4477 "data/scripts/my_debug.pory"
	additem ITEM_ROOT_FOSSIL
# 4478 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ROOT_FOSSIL
	return

LootRoot2_2:
# 4475 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootRoot2_1


LootClaw2::
# 4482 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClaw2_2
LootClaw2_1:
# 4485 "data/scripts/my_debug.pory"
	additem ITEM_CLAW_FOSSIL
# 4486 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_CLAW_FOSSIL
	return

LootClaw2_2:
# 4483 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootClaw2_1


LootSkull2::
# 4490 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkull2_2
LootSkull2_1:
# 4493 "data/scripts/my_debug.pory"
	additem ITEM_SKULL_FOSSIL
# 4494 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_SKULL_FOSSIL
	return

LootSkull2_2:
# 4491 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootSkull2_1


LootArmor2::
# 4498 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmor2_2
LootArmor2_1:
# 4501 "data/scripts/my_debug.pory"
	additem ITEM_ARMOR_FOSSIL
# 4502 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
	return

LootArmor2_2:
# 4499 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootArmor2_1


LootCover2::
# 4506 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCover2_2
LootCover2_1:
# 4509 "data/scripts/my_debug.pory"
	additem ITEM_COVER_FOSSIL
# 4510 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_COVER_FOSSIL
	return

LootCover2_2:
# 4507 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootCover2_1


LootPlume2::
# 4514 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlume2_2
LootPlume2_1:
# 4517 "data/scripts/my_debug.pory"
	additem ITEM_PLUME_FOSSIL
# 4518 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_PLUME_FOSSIL
	return

LootPlume2_2:
# 4515 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootPlume2_1


LootJaw2::
# 4522 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJaw2_2
LootJaw2_1:
# 4525 "data/scripts/my_debug.pory"
	additem ITEM_JAW_FOSSIL
# 4526 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_JAW_FOSSIL
	return

LootJaw2_2:
# 4523 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootJaw2_1


LootSail2::
# 4530 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSail2_2
LootSail2_1:
# 4533 "data/scripts/my_debug.pory"
	additem ITEM_SAIL_FOSSIL
# 4534 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_SAIL_FOSSIL
	return

LootSail2_2:
# 4531 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootSail2_1


SecretShopScript::
# 4539 "data/scripts/my_debug.pory"
	message SecretShopScript_Text_0
# 4540 "data/scripts/my_debug.pory"
	waitmessage
# 4541 "data/scripts/my_debug.pory"
	setflag FLAG_FREE_MART
# 4542 "data/scripts/my_debug.pory"
	pokemart SecretShopScript_Mart
# 4543 "data/scripts/my_debug.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 4544 "data/scripts/my_debug.pory"
	clearflag FLAG_FREE_MART
# 4545 "data/scripts/my_debug.pory"
	release
	end


	.align 2
# 4549 "data/scripts/my_debug.pory"
SecretShopScript_Mart:
# 4550 "data/scripts/my_debug.pory"
	.2byte ITEM_RARE_CANDY
# 4551 "data/scripts/my_debug.pory"
	.2byte ITEM_EXP_CANDY_XL
# 4552 "data/scripts/my_debug.pory"
	.2byte ITEM_MASTER_BALL
# 4553 "data/scripts/my_debug.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 4554 "data/scripts/my_debug.pory"
	.2byte ITEM_ABILITY_PATCH
# 4555 "data/scripts/my_debug.pory"
	.2byte ITEM_PP_MAX
# 4556 "data/scripts/my_debug.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 4557 "data/scripts/my_debug.pory"
	.2byte ITEM_HP_UP
# 4558 "data/scripts/my_debug.pory"
	.2byte ITEM_PROTEIN
# 4559 "data/scripts/my_debug.pory"
	.2byte ITEM_IRON
# 4560 "data/scripts/my_debug.pory"
	.2byte ITEM_CALCIUM
# 4561 "data/scripts/my_debug.pory"
	.2byte ITEM_ZINC
# 4562 "data/scripts/my_debug.pory"
	.2byte ITEM_CARBOS
	.2byte ITEM_NONE

UpdateGuy_Text_0:
# 230 "data/scripts/my_debug.pory"
	.string "Update Game$"

UpdateGuy_Text_1:
# 232 "data/scripts/my_debug.pory"
	.string "Set Team Level$"

UpdateGuy_Text_2:
# 233 "data/scripts/my_debug.pory"
	.string "Skip Content$"

UpdateGuy_Text_3:
# 234 "data/scripts/my_debug.pory"
	.string "Enter Code$"

UpdateGuy_Text_4:
# 236 "data/scripts/my_debug.pory"
	.string "Obtain Mega Mon$"

UpdateGuy_Text_5:
# 239 "data/scripts/my_debug.pory"
	.string "Secret Shop$"

UpdateGuy_Text_6:
# 241 "data/scripts/my_debug.pory"
	.string "Nevermind$"

UpdateGuy_Text_7:
# 258 "data/scripts/my_debug.pory"
	.string "Goodbye.$"

TestMegaMon_Text_0:
# 335 "data/scripts/my_debug.pory"
	.string "Decidueye$"

TestMegaMon_Text_1:
# 335 "data/scripts/my_debug.pory"
	.string "Empoleon$"

TestMegaMon_Text_2:
# 335 "data/scripts/my_debug.pory"
	.string "Chesnaught$"

TestMegaMon_Text_3:
# 335 "data/scripts/my_debug.pory"
	.string "Incineroar$"

TestMegaMon_Text_4:
# 335 "data/scripts/my_debug.pory"
	.string "Porygon-Z$"

TestMegaMon_Text_5:
# 335 "data/scripts/my_debug.pory"
	.string "Ariados$"

TestMegaMon_Text_6:
# 369 "data/scripts/my_debug.pory"
	.string "Goodbye$"

SkipContent_Text_0:
# 440 "data/scripts/my_debug.pory"
	.string "Route 1$"

SkipContent_Text_1:
# 441 "data/scripts/my_debug.pory"
	.string "Route 2$"

SkipContent_Text_2:
# 442 "data/scripts/my_debug.pory"
	.string "Windy Woods$"

SkipContent_Text_3:
# 443 "data/scripts/my_debug.pory"
	.string "Coralgrove City$"

SkipContent_Text_4:
# 444 "data/scripts/my_debug.pory"
	.string "Azuretide Town$"

SkipContent_Text_5:
# 445 "data/scripts/my_debug.pory"
	.string "Route 4$"

SkipContent_Text_6:
# 446 "data/scripts/my_debug.pory"
	.string "Pokémon Ranch$"

SkipContent_Text_7:
# 447 "data/scripts/my_debug.pory"
	.string "Aldeleaf City$"

SkipContent_Text_8:
# 448 "data/scripts/my_debug.pory"
	.string "Route 30$"

SkipContent_Text_9:
# 449 "data/scripts/my_debug.pory"
	.string "Windplume Valley$"

SkipContent_Text_10:
# 450 "data/scripts/my_debug.pory"
	.string "Route 5$"

SkipContent_Text_11:
# 451 "data/scripts/my_debug.pory"
	.string "Flower Fields$"

SkipContent_Text_12:
# 452 "data/scripts/my_debug.pory"
	.string "Skyloch Village$"

SkipContent_Text_13:
# 453 "data/scripts/my_debug.pory"
	.string "Route 6$"

SkipContent_Text_14:
# 454 "data/scripts/my_debug.pory"
	.string "Route 8$"

SkipContent_Text_15:
# 455 "data/scripts/my_debug.pory"
	.string "Shoreslate City$"

SkipContent_Text_16:
# 456 "data/scripts/my_debug.pory"
	.string "Scorched Desert$"

SkipContent_Text_17:
# 457 "data/scripts/my_debug.pory"
	.string "Route 7$"

SkipContent_Text_18:
# 458 "data/scripts/my_debug.pory"
	.string "Marigorge Town$"

SkipContent_Text_19:
# 459 "data/scripts/my_debug.pory"
	.string "Kaolisle City$"

SkipContent_Text_20:
# 460 "data/scripts/my_debug.pory"
	.string "Rockliffe Town$"

SkipContent_Text_21:
# 461 "data/scripts/my_debug.pory"
	.string "Route 11$"

SkipContent_Text_22:
# 462 "data/scripts/my_debug.pory"
	.string "Route 12$"

SkipContent_Text_23:
# 463 "data/scripts/my_debug.pory"
	.string "Sandstone City$"

SkipContent_Text_24:
# 464 "data/scripts/my_debug.pory"
	.string "Route 13$"

SkipContent_Text_25:
# 465 "data/scripts/my_debug.pory"
	.string "Adamant Tower$"

SkipContent_Text_26:
# 466 "data/scripts/my_debug.pory"
	.string "Route 14$"

SkipContent_Text_27:
# 467 "data/scripts/my_debug.pory"
	.string "Route 15$"

SkipContent_Text_28:
# 468 "data/scripts/my_debug.pory"
	.string "Fishing Village$"

SkipContent_Text_29:
# 469 "data/scripts/my_debug.pory"
	.string "Route 23$"

SkipContent_Text_30:
# 470 "data/scripts/my_debug.pory"
	.string "Drisledge Town$"

SkipContent_Text_31:
# 471 "data/scripts/my_debug.pory"
	.string "Amberock Town$"

SkipContent_Text_32:
# 472 "data/scripts/my_debug.pory"
	.string "Route 3$"

SkipContent_Text_33:
# 473 "data/scripts/my_debug.pory"
	.string "Route 9$"

SkipContent_Text_34:
# 474 "data/scripts/my_debug.pory"
	.string "Route 10$"

SkipContent_Text_35:
# 475 "data/scripts/my_debug.pory"
	.string "Windplume Mountain$"

SkipContent_Text_36:
# 476 "data/scripts/my_debug.pory"
	.string "Route 16$"

SkipContent_Text_37:
# 477 "data/scripts/my_debug.pory"
	.string "Basalek Town$"

SkipContent_Text_38:
# 478 "data/scripts/my_debug.pory"
	.string "Route 17$"

SkipContent_Text_39:
# 479 "data/scripts/my_debug.pory"
	.string "Route 18$"

SkipContent_Text_40:
# 480 "data/scripts/my_debug.pory"
	.string "Frosthearth City$"

SkipContent_Text_41:
# 481 "data/scripts/my_debug.pory"
	.string "Rock Climb(!)$"

SkipContent_Text_42:
# 482 "data/scripts/my_debug.pory"
	.string "Desert Ruins(!)$"

SkipContent_Text_43:
# 483 "data/scripts/my_debug.pory"
	.string "Safari Zone(!)$"

SkipContent_Text_44:
# 484 "data/scripts/my_debug.pory"
	.string "Misc. Surfing(!)$"

SkipContent_Text_45:
# 485 "data/scripts/my_debug.pory"
	.string "Cancel$"

SkipContent_BufferChoices_Text_0:
# 653 "data/scripts/my_debug.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}$"

SkipContent_BufferChoices_Text_1:
# 655 "data/scripts/my_debug.pory"
	.string "{STR_VAR_1}Items$"

SkipContent_BufferChoices_Text_2:
# 658 "data/scripts/my_debug.pory"
	.string "Items$"

SkipContent_BufferChoices_Text_3:
# 662 "data/scripts/my_debug.pory"
	.string "{STR_VAR_1}Trainers$"

SkipContent_BufferChoices_Text_4:
# 665 "data/scripts/my_debug.pory"
	.string "Trainers$"

SkipContent_BufferChoices_Text_5:
# 669 "data/scripts/my_debug.pory"
	.string "{STR_VAR_1}Events$"

SkipContent_BufferChoices_Text_6:
# 672 "data/scripts/my_debug.pory"
	.string "Events$"

SkipContent_BufferChoices_Text_7:
# 676 "data/scripts/my_debug.pory"
	.string "All$"

SkipContent_BufferChoices_Text_8:
# 677 "data/scripts/my_debug.pory"
	.string "Confirm$"

SkipContent_BufferChoices_Text_9:
# 678 "data/scripts/my_debug.pory"
	.string "Back$"

SkipContent_BufferChoices_Text_10:
# 680 "data/scripts/my_debug.pory"
	.string "Anything else?$"

SkipContent_BufferChoices_Text_11:
# 683 "data/scripts/my_debug.pory"
	.string "Please choose the content you\nwant to complete.$"

SkipContent_PokemonRanch_Text_0:
# 812 "data/scripts/my_debug.pory"
	.string "Pokemon Ranch$"

SkipContent_RockClimb_Text_0:
# 1197 "data/scripts/my_debug.pory"
	.string "Rock Climb$"

SkipContent_RockClimb_Text_1:
# 1200 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nmiscellaneous Rock Climb related areas.$"

SkipContent_DesertRuins_Text_0:
# 1206 "data/scripts/my_debug.pory"
	.string "Desert Ruins$"

SkipContent_DesertRuins_Text_1:
# 1209 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nDesert Ruins and only based on\lacquired HMs.$"

SkipContent_SafariZone_Text_0:
# 1215 "data/scripts/my_debug.pory"
	.string "Safari Zone$"

SkipContent_SafariZone_Text_1:
# 1218 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nSafari Zone and only based on\lacquired HMs.$"

SkipContent_MiscSurfing_Text_0:
# 1225 "data/scripts/my_debug.pory"
	.string "Misc. Surfing$"

SkipContent_MiscSurfing_Text_1:
# 1228 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nmiscellaneous Surf related areas.$"

SkipStory_Text_0:
# 1794 "data/scripts/my_debug.pory"
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

SecretShopScript_Text_0:
# 4539 "data/scripts/my_debug.pory"
	.string "What're you buyin?$"

MixupWithTMs::
# 210 "data/scripts/my_debug.pory"
	.string "There has been a mix-up with some\n"
	.string "TM rewards.\p"
	.string "Fixing the mix-up now.$"

NewUpdate::
# 215 "data/scripts/my_debug.pory"
	.string "A new update has been applied.$"

UpdateGuy_Text1::
# 262 "data/scripts/my_debug.pory"
	.string "Hello, I am a debug guy.\p"
	.string "I offer many services that can help\n"
	.string "you with testing this game.$"

UpdateGuy_Text2::
# 267 "data/scripts/my_debug.pory"
	.string "Before I can offer you my services,\n"
	.string "you must acquire a Pokédex.$"

WhatWouldYouLikeToDo::
# 271 "data/scripts/my_debug.pory"
	.string "What would you like to do?$"

GameIsUpToDate::
# 274 "data/scripts/my_debug.pory"
	.string "Your game is now up-to-date.\p"
	.string "If you need anything else,\n"
	.string "let me know.$"

GrottoUpdate::
# 279 "data/scripts/my_debug.pory"
	.string "Any Pokémon you have acquired from\n"
	.string "a grotto has been updated, and will\l"
	.string "now have its hidden ability.$"

UnstuckPlayer_Text::
# 386 "data/scripts/my_debug.pory"
	.string "This unstuck feature is meant to\n"
	.string "avoid softlocking in the overworld.\p"
	.string "Would you like to warp home?$"

Stor::
# 392 "data/scripts/my_debug.pory"
	.string "Story$"

Ite::
# 393 "data/scripts/my_debug.pory"
	.string "Items$"

Trai::
# 394 "data/scripts/my_debug.pory"
	.string "Trainers$"

Even::
# 395 "data/scripts/my_debug.pory"
	.string "Events$"

SkipContent_Text::
# 631 "data/scripts/my_debug.pory"
	.string "This feature allows you to skip\n"
	.string "certain content or mark certain\l"
	.string "things as completed.\p"
	.string "Any story content up to the selected\n"
	.string "area will be automatically completed.\p"
	.string "You can also choose to automatically\n"
	.string "complete other content, like looting\l"
	.string "items, defeating trainers, and\l"
	.string "completing other events in the area.\p"
	.string "Do note that skipping story content\n"
	.string "will also skip the story of all areas\l"
	.string "before it.\p"
	.string "Also, any event with a static\n"
	.string "encounter (legendaries, waking up\l"
	.string "Sudowoodo, etc.) will not be completed.$"

ChooseContentToSkip::
# 648 "data/scripts/my_debug.pory"
	.string "Choose the area you'd like to skip.$"

WantToSkipMultiple::
# 1234 "data/scripts/my_debug.pory"
	.string "You've chosen to skip {STR_VAR_2}.\p"
	.string "All story content up to this area\n"
	.string "will be completed, as well as any\l"
	.string "additional content selected.\p"
	.string "Would you also like to complete any\n"
	.string "selected content from the previous\l"
	.string "areas as well?$"

ContentHasBeenSkipped::
# 1243 "data/scripts/my_debug.pory"
	.string "Content has been skipped.\p"
	.string "It is recommended to check your bag\n"
	.string "for any new items.\p"
	.string "Note that this doesn't automatically\n"
	.string "catch any Pokémon for you.$"
