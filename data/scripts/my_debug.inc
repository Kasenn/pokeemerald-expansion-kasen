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
	checktrainerflag TRAINER_UNUSED_7_
	goto_if 1, Update4_22
Update4_21:
# 60 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_8_
	goto_if 1, Update4_25
Update4_24:
# 64 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_9_
	goto_if 1, Update4_28
Update4_27:
# 69 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_UNUSED_10_
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
	cleartrainerflag TRAINER_UNUSED_7_
# 58 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_21

Update4_25:
# 61 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_8_
# 62 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_24

Update4_28:
# 65 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_9_
# 66 "data/scripts/my_debug.pory"
	settrainerflag TRAINER_BROTHER_3_ROUTE28
	goto Update4_27

Update4_31:
# 70 "data/scripts/my_debug.pory"
	cleartrainerflag TRAINER_UNUSED_10_
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
	compare VAR_DEBUG, 6
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
	msgbox GameIsUpToDate
# 315 "data/scripts/my_debug.pory"
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


TestMegaMon::
# 319 "data/scripts/my_debug.pory"
	message WhichMonWouldYouTest
# 320 "data/scripts/my_debug.pory"
	waitmessage
# 321 "data/scripts/my_debug.pory"
	setvar VAR_0x8008, 40
# 322 "data/scripts/my_debug.pory"
	goto_if_set FLAG_BADGE05_GET, TestMegaMon_2
TestMegaMon_1:
# 325 "data/scripts/my_debug.pory"
	goto_if_set FLAG_BADGE06_GET, TestMegaMon_5
TestMegaMon_4:
# 328 "data/scripts/my_debug.pory"
	dynmultichoice 23, 0, FALSE, 5, 0, 0, TestMegaMon_Text_0, TestMegaMon_Text_1, TestMegaMon_Text_2, TestMegaMon_Text_3, TestMegaMon_Text_4, TestMegaMon_Text_5, UpdateGuy_Text_6
# 329 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 330 "data/scripts/my_debug.pory"
	case 0, TestMegaMon_8
# 335 "data/scripts/my_debug.pory"
	case 1, TestMegaMon_9
# 340 "data/scripts/my_debug.pory"
	case 2, TestMegaMon_10
# 345 "data/scripts/my_debug.pory"
	case 3, TestMegaMon_11
# 350 "data/scripts/my_debug.pory"
	case 4, TestMegaMon_12
# 355 "data/scripts/my_debug.pory"
	case 5, TestMegaMon_13
# 360 "data/scripts/my_debug.pory"
	case 6, TestMegaMon_14
# 361 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, TestMegaMon_14
	return

TestMegaMon_2:
# 323 "data/scripts/my_debug.pory"
	setvar VAR_0x8008, 45
	goto TestMegaMon_1

TestMegaMon_5:
# 326 "data/scripts/my_debug.pory"
	setvar VAR_0x8008, 53
	goto TestMegaMon_4

TestMegaMon_8:
# 331 "data/scripts/my_debug.pory"
	givemon SPECIES_DECIDUEYE, VAR_0x8008, ITEM_DECIDUEITE
# 332 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
# 333 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
# 334 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_9:
# 336 "data/scripts/my_debug.pory"
	givemon SPECIES_EMPOLEON, VAR_0x8008, ITEM_EMPOLEONITE
# 337 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
# 338 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
# 339 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_10:
# 341 "data/scripts/my_debug.pory"
	givemon SPECIES_CHESNAUGHT, VAR_0x8008, ITEM_CHESNAUGHTITE
# 342 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
# 343 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
# 344 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_11:
# 346 "data/scripts/my_debug.pory"
	givemon SPECIES_INCINEROAR, VAR_0x8008, ITEM_INCINEROARITE
# 347 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
# 348 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
# 349 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_12:
# 351 "data/scripts/my_debug.pory"
	givemon SPECIES_PORYGON_Z, VAR_0x8008, ITEM_PROCESSOR
# 352 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_PORYGON_Z
# 353 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PORYGON_Z
# 354 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_13:
# 356 "data/scripts/my_debug.pory"
	givemon SPECIES_ARIADOS, VAR_0x8008, ITEM_ARIADOSITE
# 357 "data/scripts/my_debug.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARIADOS
# 358 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARIADOS
# 359 "data/scripts/my_debug.pory"
	goto ReceiveMegaStarter
	return

TestMegaMon_14:
# 362 "data/scripts/my_debug.pory"
	msgbox TestMegaMon_Text_6, MSGBOX_AUTOCLOSE
# 363 "data/scripts/my_debug.pory"
	release
	end


UnstuckPlayer::
	msgbox UnstuckPlayer_Text, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq UnstuckPlayer_2
# 373 "data/scripts/my_debug.pory"
	warp MAP_PEARLWOOD_POINT, 14, 24
# 374 "data/scripts/my_debug.pory"
	waitstate
# 375 "data/scripts/my_debug.pory"
	release
	end

UnstuckPlayer_2:
# 370 "data/scripts/my_debug.pory"
	release
	end


SkipContent::
# 417 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_1, SkipContent_2
SkipContent_1:
# 422 "data/scripts/my_debug.pory"
	message ChooseContentToSkip
# 423 "data/scripts/my_debug.pory"
	waitmessage
# 425 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_3
# 426 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_4
# 427 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_5
# 428 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_6
# 429 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_7
# 430 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_8
# 431 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 0
# 433 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_0, 0
# 434 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_1, 1
# 435 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_2, 2
# 436 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_3, 3
# 437 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_4, 4
# 438 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_5, 5
# 439 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_6, 6
# 440 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_7, 7
# 441 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_8, 8
# 442 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_9, 9
# 443 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_10, 10
# 444 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_11, 11
# 445 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_12, 12
# 446 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_13, 13
# 447 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_14, 14
# 448 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_15, 15
# 449 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_16, 16
# 450 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_17, 17
# 451 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_18, 18
# 452 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_19, 19
# 453 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_20, 20
# 454 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_21, 21
# 455 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_22, 22
# 456 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_23, 23
# 457 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_24, 24
# 458 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_25, 25
# 459 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_26, 26
# 460 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_27, 27
# 461 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_28, 28
# 462 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_29, 29
# 463 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_30, 30
# 464 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_31, 31
# 465 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_32, 32
# 466 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_33, 33
# 467 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_34, 34
# 468 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_35, 35
# 469 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_36, 36
# 470 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_37, 37
# 471 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_38, 38
# 472 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_39, 39
# 473 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_40, 40
# 474 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_41, 41
# 475 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_42, 42
# 476 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_43, 43
# 477 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_44, 44
# 478 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_Text_45, 45
# 479 "data/scripts/my_debug.pory"
	dynmultistack 23, 0, FALSE, 6, 0, VAR_TEMP_A, 0
# 480 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 481 "data/scripts/my_debug.pory"
	case 0, SkipContent_5
# 484 "data/scripts/my_debug.pory"
	case 1, SkipContent_6
# 487 "data/scripts/my_debug.pory"
	case 2, SkipContent_7
# 490 "data/scripts/my_debug.pory"
	case 3, SkipContent_8
# 493 "data/scripts/my_debug.pory"
	case 4, SkipContent_9
# 496 "data/scripts/my_debug.pory"
	case 5, SkipContent_10
# 499 "data/scripts/my_debug.pory"
	case 6, SkipContent_11
# 502 "data/scripts/my_debug.pory"
	case 7, SkipContent_12
# 505 "data/scripts/my_debug.pory"
	case 8, SkipContent_13
# 508 "data/scripts/my_debug.pory"
	case 9, SkipContent_14
# 511 "data/scripts/my_debug.pory"
	case 10, SkipContent_15
# 514 "data/scripts/my_debug.pory"
	case 11, SkipContent_16
# 517 "data/scripts/my_debug.pory"
	case 12, SkipContent_17
# 520 "data/scripts/my_debug.pory"
	case 13, SkipContent_18
# 523 "data/scripts/my_debug.pory"
	case 14, SkipContent_19
# 526 "data/scripts/my_debug.pory"
	case 15, SkipContent_20
# 529 "data/scripts/my_debug.pory"
	case 16, SkipContent_21
# 532 "data/scripts/my_debug.pory"
	case 17, SkipContent_22
# 535 "data/scripts/my_debug.pory"
	case 18, SkipContent_23
# 538 "data/scripts/my_debug.pory"
	case 19, SkipContent_24
# 541 "data/scripts/my_debug.pory"
	case 20, SkipContent_25
# 544 "data/scripts/my_debug.pory"
	case 21, SkipContent_26
# 547 "data/scripts/my_debug.pory"
	case 22, SkipContent_27
# 550 "data/scripts/my_debug.pory"
	case 23, SkipContent_28
# 553 "data/scripts/my_debug.pory"
	case 24, SkipContent_29
# 556 "data/scripts/my_debug.pory"
	case 25, SkipContent_30
# 559 "data/scripts/my_debug.pory"
	case 26, SkipContent_31
# 562 "data/scripts/my_debug.pory"
	case 27, SkipContent_32
# 565 "data/scripts/my_debug.pory"
	case 28, SkipContent_33
# 568 "data/scripts/my_debug.pory"
	case 29, SkipContent_34
# 571 "data/scripts/my_debug.pory"
	case 30, SkipContent_35
# 574 "data/scripts/my_debug.pory"
	case 31, SkipContent_36
# 577 "data/scripts/my_debug.pory"
	case 32, SkipContent_37
# 580 "data/scripts/my_debug.pory"
	case 33, SkipContent_38
# 583 "data/scripts/my_debug.pory"
	case 34, SkipContent_39
# 586 "data/scripts/my_debug.pory"
	case 35, SkipContent_40
# 589 "data/scripts/my_debug.pory"
	case 36, SkipContent_41
# 592 "data/scripts/my_debug.pory"
	case 37, SkipContent_42
# 595 "data/scripts/my_debug.pory"
	case 38, SkipContent_43
# 598 "data/scripts/my_debug.pory"
	case 39, SkipContent_44
# 601 "data/scripts/my_debug.pory"
	case 40, SkipContent_45
# 604 "data/scripts/my_debug.pory"
	case 41, SkipContent_46
# 607 "data/scripts/my_debug.pory"
	case 42, SkipContent_47
# 610 "data/scripts/my_debug.pory"
	case 43, SkipContent_48
# 613 "data/scripts/my_debug.pory"
	case 44, SkipContent_49
# 616 "data/scripts/my_debug.pory"
	case 45, SkipContent_50
# 617 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, SkipContent_50
	return

SkipContent_2:
# 419 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_1
# 420 "data/scripts/my_debug.pory"
	msgbox SkipContent_Text
	goto SkipContent_1

SkipContent_5:
# 482 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 483 "data/scripts/my_debug.pory"
	goto SkipContent_Route1
	return

SkipContent_6:
# 485 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 486 "data/scripts/my_debug.pory"
	goto SkipContent_Route2
	return

SkipContent_7:
# 488 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 489 "data/scripts/my_debug.pory"
	goto SkipContent_WindyWoods
	return

SkipContent_8:
# 491 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 492 "data/scripts/my_debug.pory"
	goto SkipContent_CoralgroveCity
	return

SkipContent_9:
# 494 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 495 "data/scripts/my_debug.pory"
	goto SkipContent_AzuretideTown
	return

SkipContent_10:
# 497 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 498 "data/scripts/my_debug.pory"
	goto SkipContent_Route4
	return

SkipContent_11:
# 500 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 501 "data/scripts/my_debug.pory"
	goto SkipContent_PokemonRanch
	return

SkipContent_12:
# 503 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 504 "data/scripts/my_debug.pory"
	goto SkipContent_AldeleafCity
	return

SkipContent_13:
# 506 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 507 "data/scripts/my_debug.pory"
	goto SkipContent_Route30
	return

SkipContent_14:
# 509 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 510 "data/scripts/my_debug.pory"
	goto SkipContent_WindplumeValley
	return

SkipContent_15:
# 512 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 513 "data/scripts/my_debug.pory"
	goto SkipContent_Route5
	return

SkipContent_16:
# 515 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 516 "data/scripts/my_debug.pory"
	goto SkipContent_FlowerFields
	return

SkipContent_17:
# 518 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 519 "data/scripts/my_debug.pory"
	goto SkipContent_SkylochVillage
	return

SkipContent_18:
# 521 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 522 "data/scripts/my_debug.pory"
	goto SkipContent_Route6
	return

SkipContent_19:
# 524 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 525 "data/scripts/my_debug.pory"
	goto SkipContent_Route8
	return

SkipContent_20:
# 527 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 528 "data/scripts/my_debug.pory"
	goto SkipContent_ShoreslateCity
	return

SkipContent_21:
# 530 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 531 "data/scripts/my_debug.pory"
	goto SkipContent_ScorchedDesert
	return

SkipContent_22:
# 533 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 534 "data/scripts/my_debug.pory"
	goto SkipContent_Route7
	return

SkipContent_23:
# 536 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 537 "data/scripts/my_debug.pory"
	goto SkipContent_MarigorgeTown
	return

SkipContent_24:
# 539 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 540 "data/scripts/my_debug.pory"
	goto SkipContent_KaolisleCity
	return

SkipContent_25:
# 542 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 543 "data/scripts/my_debug.pory"
	goto SkipContent_RockliffeTown
	return

SkipContent_26:
# 545 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 546 "data/scripts/my_debug.pory"
	goto SkipContent_Route11
	return

SkipContent_27:
# 548 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 549 "data/scripts/my_debug.pory"
	goto SkipContent_Route12
	return

SkipContent_28:
# 551 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 552 "data/scripts/my_debug.pory"
	goto SkipContent_SandstoneCity
	return

SkipContent_29:
# 554 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 555 "data/scripts/my_debug.pory"
	goto SkipContent_Route13
	return

SkipContent_30:
# 557 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 558 "data/scripts/my_debug.pory"
	goto SkipContent_AdamantTower
	return

SkipContent_31:
# 560 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 561 "data/scripts/my_debug.pory"
	goto SkipContent_Route14
	return

SkipContent_32:
# 563 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 564 "data/scripts/my_debug.pory"
	goto SkipContent_Route15
	return

SkipContent_33:
# 566 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 567 "data/scripts/my_debug.pory"
	goto SkipContent_FishingVillage
	return

SkipContent_34:
# 569 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 570 "data/scripts/my_debug.pory"
	goto SkipContent_Route23
	return

SkipContent_35:
# 572 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 573 "data/scripts/my_debug.pory"
	goto SkipContent_DrisledgeTown
	return

SkipContent_36:
# 575 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 576 "data/scripts/my_debug.pory"
	goto SkipContent_AmberockTown
	return

SkipContent_37:
# 578 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 579 "data/scripts/my_debug.pory"
	goto SkipContent_Route3
	return

SkipContent_38:
# 581 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 582 "data/scripts/my_debug.pory"
	goto SkipContent_Route9
	return

SkipContent_39:
# 584 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 585 "data/scripts/my_debug.pory"
	goto SkipContent_Route10
	return

SkipContent_40:
# 587 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 588 "data/scripts/my_debug.pory"
	goto SkipContent_WindplumeMountain
	return

SkipContent_41:
# 590 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 591 "data/scripts/my_debug.pory"
	goto SkipContent_Route16
	return

SkipContent_42:
# 593 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 594 "data/scripts/my_debug.pory"
	goto SkipContent_BasalekTown
	return

SkipContent_43:
# 596 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 597 "data/scripts/my_debug.pory"
	goto SkipContent_Route17
	return

SkipContent_44:
# 599 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 600 "data/scripts/my_debug.pory"
	goto SkipContent_Route18
	return

SkipContent_45:
# 602 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 603 "data/scripts/my_debug.pory"
	goto SkipContent_FrosthearthCity
	return

SkipContent_46:
# 605 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 606 "data/scripts/my_debug.pory"
	goto SkipContent_RockClimb
	return

SkipContent_47:
# 608 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 609 "data/scripts/my_debug.pory"
	goto SkipContent_DesertRuins
	return

SkipContent_48:
# 611 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 612 "data/scripts/my_debug.pory"
	goto SkipContent_SafariZone
	return

SkipContent_49:
# 614 "data/scripts/my_debug.pory"
	copyvar VAR_TEMP_A, VAR_RESULT
# 615 "data/scripts/my_debug.pory"
	goto SkipContent_MiscSurfing
	return

SkipContent_50:
# 618 "data/scripts/my_debug.pory"
	msgbox TestMegaMon_Text_6, MSGBOX_AUTOCLOSE
# 619 "data/scripts/my_debug.pory"
	release
	end


SkipContent_BufferChoices::
# 646 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_1, SkipContent_BufferChoices_Text_0
# 647 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, SkipContent_BufferChoices_2
# 651 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_2, 0
SkipContent_BufferChoices_1:
# 654 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, SkipContent_BufferChoices_6
# 658 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_4, 1
SkipContent_BufferChoices_5:
# 661 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, SkipContent_BufferChoices_10
# 665 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_6, 2
SkipContent_BufferChoices_9:
# 669 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_7, 3
# 670 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_8, 4
# 671 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_9, 5
# 672 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_6, SkipContent_BufferChoices_14
# 676 "data/scripts/my_debug.pory"
	message SkipContent_BufferChoices_Text_11
SkipContent_BufferChoices_13:
# 678 "data/scripts/my_debug.pory"
	waitmessage
# 679 "data/scripts/my_debug.pory"
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
# 680 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_6
# 681 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 682 "data/scripts/my_debug.pory"
	case 0, SkipContent_BufferChoices_19
# 684 "data/scripts/my_debug.pory"
	case 1, SkipContent_BufferChoices_20
# 686 "data/scripts/my_debug.pory"
	case 2, SkipContent_BufferChoices_21
# 688 "data/scripts/my_debug.pory"
	case 3, SkipContent_BufferChoices_22
# 690 "data/scripts/my_debug.pory"
	case 5, SkipContent_BufferChoices_23
# 691 "data/scripts/my_debug.pory"
	case MULTI_B_PRESSED, SkipContent_BufferChoices_23
SkipContent_BufferChoices_17:
	return

SkipContent_BufferChoices_2:
# 648 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_1, 0
	goto SkipContent_BufferChoices_1

SkipContent_BufferChoices_6:
# 655 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_3, 1
	goto SkipContent_BufferChoices_5

SkipContent_BufferChoices_10:
# 662 "data/scripts/my_debug.pory"
	dynmultipush SkipContent_BufferChoices_Text_5, 2
	goto SkipContent_BufferChoices_9

SkipContent_BufferChoices_14:
# 673 "data/scripts/my_debug.pory"
	message SkipContent_BufferChoices_Text_10
	goto SkipContent_BufferChoices_13

SkipContent_BufferChoices_19:
# 683 "data/scripts/my_debug.pory"
	goto BufferChoices0
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_20:
# 685 "data/scripts/my_debug.pory"
	goto BufferChoices1
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_21:
# 687 "data/scripts/my_debug.pory"
	goto BufferChoices2
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_22:
# 689 "data/scripts/my_debug.pory"
	goto BufferChoices4
	goto SkipContent_BufferChoices_17

SkipContent_BufferChoices_23:
# 692 "data/scripts/my_debug.pory"
	goto SkipContent
	goto SkipContent_BufferChoices_17


BufferChoices0::
# 698 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_3, BufferChoices0_2
# 702 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_3
BufferChoices0_1:
# 704 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices0_2:
# 699 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_3
	goto BufferChoices0_1


BufferChoices1::
# 707 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_4, BufferChoices1_2
# 711 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_4
BufferChoices1_1:
# 713 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices1_2:
# 708 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_4
	goto BufferChoices1_1


BufferChoices2::
# 716 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_5, BufferChoices2_2
# 720 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_5
BufferChoices2_1:
# 722 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices2_2:
# 717 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_5
	goto BufferChoices2_1


BufferChoices4::
# 725 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_3, BufferChoices4_2
# 725 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_4, BufferChoices4_2
# 725 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_TEMP_5, BufferChoices4_2
# 731 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_3
# 732 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_4
# 733 "data/scripts/my_debug.pory"
	clearflag FLAG_TEMP_5
BufferChoices4_1:
# 735 "data/scripts/my_debug.pory"
	goto SkipContent_BufferChoices
	return

BufferChoices4_2:
# 726 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_3
# 727 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_4
# 728 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_5
	goto BufferChoices4_1


SkipContent_Route1::
# 739 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_0
# 740 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 741 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route1_2
SkipContent_Route1_1:
# 746 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route1
# 747 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route1_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route1_4
	goto SkipContent_Route1_1

SkipContent_Route1_4:
# 743 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route1_1


SkipContent_Route2::
# 750 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_1
# 751 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 752 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route2_2
SkipContent_Route2_1:
# 757 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route2
# 758 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route2_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route2_4
	goto SkipContent_Route2_1

SkipContent_Route2_4:
# 754 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route2_1


SkipContent_WindyWoods::
# 761 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_2
# 762 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 763 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_WindyWoods_2
SkipContent_WindyWoods_1:
# 768 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_WindyWoods
# 769 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_WindyWoods_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_WindyWoods_4
	goto SkipContent_WindyWoods_1

SkipContent_WindyWoods_4:
# 765 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_WindyWoods_1


SkipContent_CoralgroveCity::
# 772 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_3
# 773 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 774 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_CoralgroveCity_2
SkipContent_CoralgroveCity_1:
# 779 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_CoralgroveCity
# 780 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_CoralgroveCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_CoralgroveCity_4
	goto SkipContent_CoralgroveCity_1

SkipContent_CoralgroveCity_4:
# 776 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_CoralgroveCity_1


SkipContent_AzuretideTown::
# 783 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_4
# 784 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 785 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AzuretideTown_2
SkipContent_AzuretideTown_1:
# 790 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AzuretideTown
# 791 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AzuretideTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AzuretideTown_4
	goto SkipContent_AzuretideTown_1

SkipContent_AzuretideTown_4:
# 787 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AzuretideTown_1


SkipContent_Route4::
# 794 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_5
# 795 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 796 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route4_2
SkipContent_Route4_1:
# 801 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route4
# 802 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route4_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route4_4
	goto SkipContent_Route4_1

SkipContent_Route4_4:
# 798 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route4_1


SkipContent_PokemonRanch::
# 805 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_PokemonRanch_Text_0
# 806 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 807 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_PokemonRanch_2
SkipContent_PokemonRanch_1:
# 812 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_PokemonRanch
# 813 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_PokemonRanch_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_PokemonRanch_4
	goto SkipContent_PokemonRanch_1

SkipContent_PokemonRanch_4:
# 809 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_PokemonRanch_1


SkipContent_AldeleafCity::
# 816 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_7
# 817 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 818 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AldeleafCity_2
SkipContent_AldeleafCity_1:
# 823 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AldeleafCity
# 824 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AldeleafCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AldeleafCity_4
	goto SkipContent_AldeleafCity_1

SkipContent_AldeleafCity_4:
# 820 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AldeleafCity_1


SkipContent_Route30::
# 827 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_8
# 828 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 829 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route30_2
SkipContent_Route30_1:
# 834 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route30
# 835 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route30_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route30_4
	goto SkipContent_Route30_1

SkipContent_Route30_4:
# 831 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route30_1


SkipContent_WindplumeValley::
# 838 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_9
# 839 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 840 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_WindplumeValley_2
SkipContent_WindplumeValley_1:
# 845 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_WindplumeValley
# 846 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_WindplumeValley_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_WindplumeValley_4
	goto SkipContent_WindplumeValley_1

SkipContent_WindplumeValley_4:
# 842 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_WindplumeValley_1


SkipContent_Route5::
# 849 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_10
# 850 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 851 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route5_2
SkipContent_Route5_1:
# 856 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route5
# 857 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route5_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route5_4
	goto SkipContent_Route5_1

SkipContent_Route5_4:
# 853 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route5_1


SkipContent_FlowerFields::
# 860 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_11
# 861 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 862 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_FlowerFields_2
SkipContent_FlowerFields_1:
# 867 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_FlowerFields
# 868 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_FlowerFields_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_FlowerFields_4
	goto SkipContent_FlowerFields_1

SkipContent_FlowerFields_4:
# 864 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_FlowerFields_1


SkipContent_SkylochVillage::
# 871 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_12
# 872 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 873 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_SkylochVillage_2
SkipContent_SkylochVillage_1:
# 878 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_SkylochVillage
# 879 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_SkylochVillage_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_SkylochVillage_4
	goto SkipContent_SkylochVillage_1

SkipContent_SkylochVillage_4:
# 875 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_SkylochVillage_1


SkipContent_Route6::
# 882 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_13
# 883 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 884 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route6_2
SkipContent_Route6_1:
# 889 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route6
# 890 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route6_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route6_4
	goto SkipContent_Route6_1

SkipContent_Route6_4:
# 886 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route6_1


SkipContent_Route8::
# 893 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_14
# 894 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 895 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route8_2
SkipContent_Route8_1:
# 900 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route8
# 901 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route8_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route8_4
	goto SkipContent_Route8_1

SkipContent_Route8_4:
# 897 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route8_1


SkipContent_ShoreslateCity::
# 904 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_15
# 905 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 906 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_ShoreslateCity_2
SkipContent_ShoreslateCity_1:
# 911 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_ShoreslateCity
# 912 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_ShoreslateCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_ShoreslateCity_4
	goto SkipContent_ShoreslateCity_1

SkipContent_ShoreslateCity_4:
# 908 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_ShoreslateCity_1


SkipContent_ScorchedDesert::
# 915 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_16
# 916 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 917 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_ScorchedDesert_2
SkipContent_ScorchedDesert_1:
# 922 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_ScorchedDesert
# 923 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_ScorchedDesert_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_ScorchedDesert_4
	goto SkipContent_ScorchedDesert_1

SkipContent_ScorchedDesert_4:
# 919 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_ScorchedDesert_1


SkipContent_Route7::
# 926 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_17
# 927 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 928 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route7_2
SkipContent_Route7_1:
# 933 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route7
# 934 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route7_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route7_4
	goto SkipContent_Route7_1

SkipContent_Route7_4:
# 930 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route7_1


SkipContent_MarigorgeTown::
# 937 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_18
# 938 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 939 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_MarigorgeTown_2
SkipContent_MarigorgeTown_1:
# 944 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_MarigorgeTown
# 945 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_MarigorgeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_MarigorgeTown_4
	goto SkipContent_MarigorgeTown_1

SkipContent_MarigorgeTown_4:
# 941 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_MarigorgeTown_1


SkipContent_KaolisleCity::
# 948 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_19
# 949 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 950 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_KaolisleCity_2
SkipContent_KaolisleCity_1:
# 955 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_KaolisleCity
# 956 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_KaolisleCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_KaolisleCity_4
	goto SkipContent_KaolisleCity_1

SkipContent_KaolisleCity_4:
# 952 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_KaolisleCity_1


SkipContent_RockliffeTown::
# 959 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_20
# 960 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 961 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_RockliffeTown_2
SkipContent_RockliffeTown_1:
# 966 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_RockliffeTown
# 967 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_RockliffeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_RockliffeTown_4
	goto SkipContent_RockliffeTown_1

SkipContent_RockliffeTown_4:
# 963 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_RockliffeTown_1


SkipContent_Route11::
# 970 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_21
# 971 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 972 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route11_2
SkipContent_Route11_1:
# 977 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route11
# 978 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route11_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route11_4
	goto SkipContent_Route11_1

SkipContent_Route11_4:
# 974 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route11_1


SkipContent_Route12::
# 981 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_22
# 982 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 983 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route12_2
SkipContent_Route12_1:
# 988 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route12
# 989 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route12_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route12_4
	goto SkipContent_Route12_1

SkipContent_Route12_4:
# 985 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route12_1


SkipContent_SandstoneCity::
# 992 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_23
# 993 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 994 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_SandstoneCity_2
SkipContent_SandstoneCity_1:
# 999 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_SandstoneCity
# 1000 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_SandstoneCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_SandstoneCity_4
	goto SkipContent_SandstoneCity_1

SkipContent_SandstoneCity_4:
# 996 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_SandstoneCity_1


SkipContent_Route13::
# 1003 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_24
# 1004 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1005 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route13_2
SkipContent_Route13_1:
# 1010 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route13
# 1011 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route13_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route13_4
	goto SkipContent_Route13_1

SkipContent_Route13_4:
# 1007 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route13_1


SkipContent_AdamantTower::
# 1014 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_25
# 1015 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1016 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AdamantTower_2
SkipContent_AdamantTower_1:
# 1021 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AdamantTower
# 1022 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AdamantTower_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AdamantTower_4
	goto SkipContent_AdamantTower_1

SkipContent_AdamantTower_4:
# 1018 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AdamantTower_1


SkipContent_Route14::
# 1025 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_26
# 1026 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1027 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route14_2
SkipContent_Route14_1:
# 1032 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route14
# 1033 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route14_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route14_4
	goto SkipContent_Route14_1

SkipContent_Route14_4:
# 1029 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route14_1


SkipContent_Route15::
# 1036 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_27
# 1037 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1038 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route15_2
SkipContent_Route15_1:
# 1043 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route15
# 1044 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route15_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route15_4
	goto SkipContent_Route15_1

SkipContent_Route15_4:
# 1040 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route15_1


SkipContent_FishingVillage::
# 1047 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_28
# 1048 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1049 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_FishingVillage_2
SkipContent_FishingVillage_1:
# 1054 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_FishingVillage
# 1055 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_FishingVillage_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_FishingVillage_4
	goto SkipContent_FishingVillage_1

SkipContent_FishingVillage_4:
# 1051 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_FishingVillage_1


SkipContent_Route23::
# 1058 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_29
# 1059 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1060 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route23_2
SkipContent_Route23_1:
# 1065 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route23
# 1066 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route23_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route23_4
	goto SkipContent_Route23_1

SkipContent_Route23_4:
# 1062 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route23_1


SkipContent_DrisledgeTown::
# 1069 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_30
# 1070 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1071 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_DrisledgeTown_2
SkipContent_DrisledgeTown_1:
# 1076 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_DrisledgeTown
# 1077 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_DrisledgeTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_DrisledgeTown_4
	goto SkipContent_DrisledgeTown_1

SkipContent_DrisledgeTown_4:
# 1073 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_DrisledgeTown_1


SkipContent_AmberockTown::
# 1080 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_31
# 1081 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1082 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_AmberockTown_2
SkipContent_AmberockTown_1:
# 1087 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_AmberockTown
# 1088 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_AmberockTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_AmberockTown_4
	goto SkipContent_AmberockTown_1

SkipContent_AmberockTown_4:
# 1084 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_AmberockTown_1


SkipContent_Route3::
# 1091 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_32
# 1092 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1093 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route3_2
SkipContent_Route3_1:
# 1098 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route3
# 1099 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route3_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route3_4
	goto SkipContent_Route3_1

SkipContent_Route3_4:
# 1095 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route3_1


SkipContent_Route9::
# 1102 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_33
# 1103 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1104 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route9_2
SkipContent_Route9_1:
# 1109 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route9
# 1110 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route9_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route9_4
	goto SkipContent_Route9_1

SkipContent_Route9_4:
# 1106 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route9_1


SkipContent_Route10::
# 1113 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_34
# 1114 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1115 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route10_2
SkipContent_Route10_1:
# 1120 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route10
# 1121 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route10_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route10_4
	goto SkipContent_Route10_1

SkipContent_Route10_4:
# 1117 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route10_1


SkipContent_WindplumeMountain::
# 1124 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_35
# 1125 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1126 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_WindplumeMountain_2
SkipContent_WindplumeMountain_1:
# 1131 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_WindplumeMountain
# 1132 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_WindplumeMountain_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_WindplumeMountain_4
	goto SkipContent_WindplumeMountain_1

SkipContent_WindplumeMountain_4:
# 1128 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_WindplumeMountain_1


SkipContent_Route16::
# 1135 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_36
# 1136 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1137 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route16_2
SkipContent_Route16_1:
# 1142 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route16
# 1143 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route16_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route16_4
	goto SkipContent_Route16_1

SkipContent_Route16_4:
# 1139 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route16_1


SkipContent_BasalekTown::
# 1146 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_37
# 1147 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1148 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_BasalekTown_2
SkipContent_BasalekTown_1:
# 1153 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_BasalekTown
# 1154 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_BasalekTown_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_BasalekTown_4
	goto SkipContent_BasalekTown_1

SkipContent_BasalekTown_4:
# 1150 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_BasalekTown_1


SkipContent_Route17::
# 1157 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_38
# 1158 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1159 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route17_2
SkipContent_Route17_1:
# 1164 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route17
# 1165 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route17_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route17_4
	goto SkipContent_Route17_1

SkipContent_Route17_4:
# 1161 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route17_1


SkipContent_Route18::
# 1168 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_39
# 1169 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1170 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_Route18_2
SkipContent_Route18_1:
# 1175 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_Route18
# 1176 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_Route18_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_Route18_4
	goto SkipContent_Route18_1

SkipContent_Route18_4:
# 1172 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_Route18_1


SkipContent_FrosthearthCity::
# 1179 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_Text_40
# 1180 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1181 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_FrosthearthCity_2
SkipContent_FrosthearthCity_1:
# 1186 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_FrosthearthCity
# 1187 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_FrosthearthCity_2:
	msgbox WantToSkipMultiple, MSGBOX_YESNO
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipContent_FrosthearthCity_4
	goto SkipContent_FrosthearthCity_1

SkipContent_FrosthearthCity_4:
# 1183 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_7
	goto SkipContent_FrosthearthCity_1


SkipContent_RockClimb::
# 1190 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_RockClimb_Text_0
# 1191 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1192 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_RockClimb_2
SkipContent_RockClimb_1:
# 1195 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_RockClimb
# 1196 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_RockClimb_2:
# 1193 "data/scripts/my_debug.pory"
	msgbox SkipContent_RockClimb_Text_1
	goto SkipContent_RockClimb_1


SkipContent_DesertRuins::
# 1199 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_DesertRuins_Text_0
# 1200 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1201 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_DesertRuins_2
SkipContent_DesertRuins_1:
# 1204 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_DesertRuins
# 1205 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_DesertRuins_2:
# 1202 "data/scripts/my_debug.pory"
	msgbox SkipContent_DesertRuins_Text_1
	goto SkipContent_DesertRuins_1


SkipContent_SafariZone::
# 1208 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_SafariZone_Text_0
# 1209 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1210 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_SafariZone_2
SkipContent_SafariZone_1:
# 1213 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_SafariZone
# 1214 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_SafariZone_2:
# 1211 "data/scripts/my_debug.pory"
	msgbox SkipContent_SafariZone_Text_1
	goto SkipContent_SafariZone_1


SkipContent_MiscSurfing::
# 1218 "data/scripts/my_debug.pory"
	bufferstring STR_VAR_2, SkipContent_MiscSurfing_Text_0
# 1219 "data/scripts/my_debug.pory"
	call SkipContent_BufferChoices
# 1220 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 4
	goto_if_eq SkipContent_MiscSurfing_2
SkipContent_MiscSurfing_1:
# 1223 "data/scripts/my_debug.pory"
	call ContentSkipper_SkipContent_MiscSurfing
# 1224 "data/scripts/my_debug.pory"
	goto SkipContentEnd
	return

SkipContent_MiscSurfing_2:
# 1221 "data/scripts/my_debug.pory"
	msgbox SkipContent_MiscSurfing_Text_1
	goto SkipContent_MiscSurfing_1


SkipContentEnd::
# 1245 "data/scripts/my_debug.pory"
	msgbox ContentHasBeenSkipped
# 1246 "data/scripts/my_debug.pory"
	release
	end


ContentSkipper_SkipContent_Route1::
# 1252 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route1_2
# 1256 "data/scripts/my_debug.pory"
	call CompleteArea_Route_1
ContentSkipper_SkipContent_Route1_1:
	return

ContentSkipper_SkipContent_Route1_2:
# 1253 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route1_1


ContentSkipper_SkipContent_Route2::
# 1262 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route2_2
# 1266 "data/scripts/my_debug.pory"
	call CompleteArea_Route_2
ContentSkipper_SkipContent_Route2_1:
	return

ContentSkipper_SkipContent_Route2_2:
# 1263 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route2_1


ContentSkipper_SkipContent_WindyWoods::
# 1272 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 1
# 1273 "data/scripts/my_debug.pory"
	call SkipStory
# 1274 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindyWoods_2
# 1278 "data/scripts/my_debug.pory"
	call CompleteArea_Windy_Woods
ContentSkipper_SkipContent_WindyWoods_1:
	return

ContentSkipper_SkipContent_WindyWoods_2:
# 1275 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindyWoods_1


ContentSkipper_SkipContent_CoralgroveCity::
# 1284 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 2
# 1285 "data/scripts/my_debug.pory"
	call SkipStory
# 1286 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_CoralgroveCity_2
# 1290 "data/scripts/my_debug.pory"
	call CompleteArea_Coralgrove_City
ContentSkipper_SkipContent_CoralgroveCity_1:
	return

ContentSkipper_SkipContent_CoralgroveCity_2:
# 1287 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_CoralgroveCity_1


ContentSkipper_SkipContent_AzuretideTown::
# 1296 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 2
# 1297 "data/scripts/my_debug.pory"
	call SkipStory
# 1298 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AzuretideTown_2
# 1302 "data/scripts/my_debug.pory"
	call CompleteArea_Azuretide_Town
ContentSkipper_SkipContent_AzuretideTown_1:
	return

ContentSkipper_SkipContent_AzuretideTown_2:
# 1299 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AzuretideTown_1


ContentSkipper_SkipContent_Route4::
# 1308 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 2
# 1309 "data/scripts/my_debug.pory"
	call SkipStory
# 1310 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route4_2
# 1314 "data/scripts/my_debug.pory"
	call CompleteArea_Route_4
ContentSkipper_SkipContent_Route4_1:
	return

ContentSkipper_SkipContent_Route4_2:
# 1311 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route4_1


ContentSkipper_SkipContent_PokemonRanch::
# 1320 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 3
# 1321 "data/scripts/my_debug.pory"
	call SkipStory
# 1322 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_PokemonRanch_2
# 1326 "data/scripts/my_debug.pory"
	call CompleteArea_Pokemon_Ranch
ContentSkipper_SkipContent_PokemonRanch_1:
	return

ContentSkipper_SkipContent_PokemonRanch_2:
# 1323 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_PokemonRanch_1


ContentSkipper_SkipContent_AldeleafCity::
# 1332 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1333 "data/scripts/my_debug.pory"
	call SkipStory
# 1334 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AldeleafCity_2
# 1338 "data/scripts/my_debug.pory"
	call CompleteArea_Aldeleaf_City
ContentSkipper_SkipContent_AldeleafCity_1:
	return

ContentSkipper_SkipContent_AldeleafCity_2:
# 1335 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AldeleafCity_1


ContentSkipper_SkipContent_Route30::
# 1344 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1345 "data/scripts/my_debug.pory"
	call SkipStory
# 1346 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route30_2
# 1350 "data/scripts/my_debug.pory"
	call CompleteArea_Route_30
ContentSkipper_SkipContent_Route30_1:
	return

ContentSkipper_SkipContent_Route30_2:
# 1347 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route30_1


ContentSkipper_SkipContent_WindplumeValley::
# 1356 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1357 "data/scripts/my_debug.pory"
	call SkipStory
# 1358 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindplumeValley_2
# 1362 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Valley
ContentSkipper_SkipContent_WindplumeValley_1:
	return

ContentSkipper_SkipContent_WindplumeValley_2:
# 1359 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindplumeValley_1


ContentSkipper_SkipContent_Route5::
# 1368 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1369 "data/scripts/my_debug.pory"
	call SkipStory
# 1370 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route5_2
# 1374 "data/scripts/my_debug.pory"
	call CompleteArea_Route_5
ContentSkipper_SkipContent_Route5_1:
	return

ContentSkipper_SkipContent_Route5_2:
# 1371 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route5_1


ContentSkipper_SkipContent_FlowerFields::
# 1380 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1381 "data/scripts/my_debug.pory"
	call SkipStory
# 1382 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FlowerFields_2
# 1386 "data/scripts/my_debug.pory"
	call CompleteArea_Flower_Fields
ContentSkipper_SkipContent_FlowerFields_1:
	return

ContentSkipper_SkipContent_FlowerFields_2:
# 1383 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FlowerFields_1


ContentSkipper_SkipContent_SkylochVillage::
# 1392 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1393 "data/scripts/my_debug.pory"
	call SkipStory
# 1394 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SkylochVillage_2
# 1398 "data/scripts/my_debug.pory"
	call CompleteArea_Skyloch_Village
ContentSkipper_SkipContent_SkylochVillage_1:
	return

ContentSkipper_SkipContent_SkylochVillage_2:
# 1395 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SkylochVillage_1


ContentSkipper_SkipContent_Route6::
# 1404 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1405 "data/scripts/my_debug.pory"
	call SkipStory
# 1406 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route6_2
# 1410 "data/scripts/my_debug.pory"
	call CompleteArea_Route_6
ContentSkipper_SkipContent_Route6_1:
	return

ContentSkipper_SkipContent_Route6_2:
# 1407 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route6_1


ContentSkipper_SkipContent_Route8::
# 1416 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 4
# 1417 "data/scripts/my_debug.pory"
	call SkipStory
# 1418 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route8_2
# 1422 "data/scripts/my_debug.pory"
	call CompleteArea_Route_8
ContentSkipper_SkipContent_Route8_1:
	return

ContentSkipper_SkipContent_Route8_2:
# 1419 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route8_1


ContentSkipper_SkipContent_ShoreslateCity::
# 1428 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1429 "data/scripts/my_debug.pory"
	call SkipStory
# 1430 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_ShoreslateCity_2
# 1434 "data/scripts/my_debug.pory"
	call CompleteArea_Shoreslate_City
ContentSkipper_SkipContent_ShoreslateCity_1:
	return

ContentSkipper_SkipContent_ShoreslateCity_2:
# 1431 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_ShoreslateCity_1


ContentSkipper_SkipContent_ScorchedDesert::
# 1440 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1441 "data/scripts/my_debug.pory"
	call SkipStory
# 1442 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_ScorchedDesert_2
# 1446 "data/scripts/my_debug.pory"
	call CompleteArea_Scorched_Desert
ContentSkipper_SkipContent_ScorchedDesert_1:
	return

ContentSkipper_SkipContent_ScorchedDesert_2:
# 1443 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_ScorchedDesert_1


ContentSkipper_SkipContent_Route7::
# 1452 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1453 "data/scripts/my_debug.pory"
	call SkipStory
# 1454 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route7_2
# 1458 "data/scripts/my_debug.pory"
	call CompleteArea_Route_7
ContentSkipper_SkipContent_Route7_1:
	return

ContentSkipper_SkipContent_Route7_2:
# 1455 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route7_1


ContentSkipper_SkipContent_MarigorgeTown::
# 1464 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 5
# 1465 "data/scripts/my_debug.pory"
	call SkipStory
# 1466 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_MarigorgeTown_2
# 1470 "data/scripts/my_debug.pory"
	call CompleteArea_Marigorge_Town
ContentSkipper_SkipContent_MarigorgeTown_1:
	return

ContentSkipper_SkipContent_MarigorgeTown_2:
# 1467 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_MarigorgeTown_1


ContentSkipper_SkipContent_KaolisleCity::
# 1476 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 6
# 1477 "data/scripts/my_debug.pory"
	call SkipStory
# 1478 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_KaolisleCity_2
# 1482 "data/scripts/my_debug.pory"
	call CompleteArea_Kaolisle_City
ContentSkipper_SkipContent_KaolisleCity_1:
	return

ContentSkipper_SkipContent_KaolisleCity_2:
# 1479 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_KaolisleCity_1


ContentSkipper_SkipContent_RockliffeTown::
# 1488 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 6
# 1489 "data/scripts/my_debug.pory"
	call SkipStory
# 1490 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_RockliffeTown_2
# 1494 "data/scripts/my_debug.pory"
	call CompleteArea_Rockliffe_Town
ContentSkipper_SkipContent_RockliffeTown_1:
	return

ContentSkipper_SkipContent_RockliffeTown_2:
# 1491 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_RockliffeTown_1


ContentSkipper_SkipContent_Route11::
# 1500 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 7
# 1501 "data/scripts/my_debug.pory"
	call SkipStory
# 1502 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route11_2
# 1506 "data/scripts/my_debug.pory"
	call CompleteArea_Route_11
ContentSkipper_SkipContent_Route11_1:
	return

ContentSkipper_SkipContent_Route11_2:
# 1503 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route11_1


ContentSkipper_SkipContent_Route12::
# 1512 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 7
# 1513 "data/scripts/my_debug.pory"
	call SkipStory
# 1514 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route12_2
# 1518 "data/scripts/my_debug.pory"
	call CompleteArea_Route_12
ContentSkipper_SkipContent_Route12_1:
	return

ContentSkipper_SkipContent_Route12_2:
# 1515 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route12_1


ContentSkipper_SkipContent_SandstoneCity::
# 1524 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 8
# 1525 "data/scripts/my_debug.pory"
	call SkipStory
# 1526 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_SandstoneCity_2
# 1530 "data/scripts/my_debug.pory"
	call CompleteArea_Sandstone_City
ContentSkipper_SkipContent_SandstoneCity_1:
	return

ContentSkipper_SkipContent_SandstoneCity_2:
# 1527 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_SandstoneCity_1


ContentSkipper_SkipContent_Route13::
# 1536 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 8
# 1537 "data/scripts/my_debug.pory"
	call SkipStory
# 1538 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route13_2
# 1542 "data/scripts/my_debug.pory"
	call CompleteArea_Route_13
ContentSkipper_SkipContent_Route13_1:
	return

ContentSkipper_SkipContent_Route13_2:
# 1539 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route13_1


ContentSkipper_SkipContent_AdamantTower::
# 1548 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 9
# 1549 "data/scripts/my_debug.pory"
	call SkipStory
# 1550 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AdamantTower_2
# 1554 "data/scripts/my_debug.pory"
	call CompleteArea_Adamant_Tower
ContentSkipper_SkipContent_AdamantTower_1:
	return

ContentSkipper_SkipContent_AdamantTower_2:
# 1551 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AdamantTower_1


ContentSkipper_SkipContent_Route14::
# 1560 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 10
# 1561 "data/scripts/my_debug.pory"
	call SkipStory
# 1562 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route14_2
# 1566 "data/scripts/my_debug.pory"
	call CompleteArea_Route_14
ContentSkipper_SkipContent_Route14_1:
	return

ContentSkipper_SkipContent_Route14_2:
# 1563 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route14_1


ContentSkipper_SkipContent_Route15::
# 1572 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 11
# 1573 "data/scripts/my_debug.pory"
	call SkipStory
# 1574 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route15_2
# 1578 "data/scripts/my_debug.pory"
	call CompleteArea_Route_15
ContentSkipper_SkipContent_Route15_1:
	return

ContentSkipper_SkipContent_Route15_2:
# 1575 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route15_1


ContentSkipper_SkipContent_FishingVillage::
# 1584 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 11
# 1585 "data/scripts/my_debug.pory"
	call SkipStory
# 1586 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FishingVillage_2
# 1590 "data/scripts/my_debug.pory"
	call CompleteArea_Fishing_Village
ContentSkipper_SkipContent_FishingVillage_1:
	return

ContentSkipper_SkipContent_FishingVillage_2:
# 1587 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FishingVillage_1


ContentSkipper_SkipContent_Route23::
# 1596 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 11
# 1597 "data/scripts/my_debug.pory"
	call SkipStory
# 1598 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route23_2
# 1602 "data/scripts/my_debug.pory"
	call CompleteArea_Route_23
ContentSkipper_SkipContent_Route23_1:
	return

ContentSkipper_SkipContent_Route23_2:
# 1599 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route23_1


ContentSkipper_SkipContent_DrisledgeTown::
# 1608 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 12
# 1609 "data/scripts/my_debug.pory"
	call SkipStory
# 1610 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_DrisledgeTown_2
# 1614 "data/scripts/my_debug.pory"
	call CompleteArea_Drisledge_Town
ContentSkipper_SkipContent_DrisledgeTown_1:
	return

ContentSkipper_SkipContent_DrisledgeTown_2:
# 1611 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_DrisledgeTown_1


ContentSkipper_SkipContent_AmberockTown::
# 1620 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1621 "data/scripts/my_debug.pory"
	call SkipStory
# 1622 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_AmberockTown_2
# 1626 "data/scripts/my_debug.pory"
	call CompleteArea_Amberock_Town
ContentSkipper_SkipContent_AmberockTown_1:
	return

ContentSkipper_SkipContent_AmberockTown_2:
# 1623 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_AmberockTown_1


ContentSkipper_SkipContent_Route3::
# 1632 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1633 "data/scripts/my_debug.pory"
	call SkipStory
# 1634 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route3_2
# 1638 "data/scripts/my_debug.pory"
	call CompleteArea_Route_3
ContentSkipper_SkipContent_Route3_1:
	return

ContentSkipper_SkipContent_Route3_2:
# 1635 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route3_1


ContentSkipper_SkipContent_Route9::
# 1644 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1645 "data/scripts/my_debug.pory"
	call SkipStory
# 1646 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route9_2
# 1650 "data/scripts/my_debug.pory"
	call CompleteArea_Route_9
ContentSkipper_SkipContent_Route9_1:
	return

ContentSkipper_SkipContent_Route9_2:
# 1647 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route9_1


ContentSkipper_SkipContent_Route10::
# 1656 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1657 "data/scripts/my_debug.pory"
	call SkipStory
# 1658 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route10_2
# 1662 "data/scripts/my_debug.pory"
	call CompleteArea_Route_10
ContentSkipper_SkipContent_Route10_1:
	return

ContentSkipper_SkipContent_Route10_2:
# 1659 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route10_1


ContentSkipper_SkipContent_WindplumeMountain::
# 1668 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1669 "data/scripts/my_debug.pory"
	call SkipStory
# 1670 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_WindplumeMountain_2
# 1674 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Mountain
ContentSkipper_SkipContent_WindplumeMountain_1:
	return

ContentSkipper_SkipContent_WindplumeMountain_2:
# 1671 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_WindplumeMountain_1


ContentSkipper_SkipContent_Route16::
# 1680 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 13
# 1681 "data/scripts/my_debug.pory"
	call SkipStory
# 1682 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route16_2
# 1686 "data/scripts/my_debug.pory"
	call CompleteArea_Route_16
ContentSkipper_SkipContent_Route16_1:
	return

ContentSkipper_SkipContent_Route16_2:
# 1683 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route16_1


ContentSkipper_SkipContent_BasalekTown::
# 1692 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 14
# 1693 "data/scripts/my_debug.pory"
	call SkipStory
# 1694 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_BasalekTown_2
# 1698 "data/scripts/my_debug.pory"
	call CompleteArea_Basalek_Town
ContentSkipper_SkipContent_BasalekTown_1:
	return

ContentSkipper_SkipContent_BasalekTown_2:
# 1695 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_BasalekTown_1


ContentSkipper_SkipContent_Route17::
# 1704 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 14
# 1705 "data/scripts/my_debug.pory"
	call SkipStory
# 1706 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route17_2
# 1710 "data/scripts/my_debug.pory"
	call CompleteArea_Route_17
ContentSkipper_SkipContent_Route17_1:
	return

ContentSkipper_SkipContent_Route17_2:
# 1707 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route17_1


ContentSkipper_SkipContent_Route18::
# 1716 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 14
# 1717 "data/scripts/my_debug.pory"
	call SkipStory
# 1718 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_Route18_2
# 1722 "data/scripts/my_debug.pory"
	call CompleteArea_Route_18
ContentSkipper_SkipContent_Route18_1:
	return

ContentSkipper_SkipContent_Route18_2:
# 1719 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_Route18_1


ContentSkipper_SkipContent_FrosthearthCity::
# 1728 "data/scripts/my_debug.pory"
	setvar VAR_TEMP_B, 15
# 1729 "data/scripts/my_debug.pory"
	call SkipStory
# 1730 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_7, ContentSkipper_SkipContent_FrosthearthCity_2
# 1734 "data/scripts/my_debug.pory"
	call CompleteArea_Frosthearth_City
ContentSkipper_SkipContent_FrosthearthCity_1:
	return

ContentSkipper_SkipContent_FrosthearthCity_2:
# 1731 "data/scripts/my_debug.pory"
	call CompleteAllAreas
	goto ContentSkipper_SkipContent_FrosthearthCity_1


ContentSkipper_SkipContent_RockClimb::
# 1739 "data/scripts/my_debug.pory"
	call CompleteArea_Rock_Climb
	return


ContentSkipper_SkipContent_DesertRuins::
# 1743 "data/scripts/my_debug.pory"
	call CompleteArea_Desert_Ruins
	return


ContentSkipper_SkipContent_SafariZone::
# 1747 "data/scripts/my_debug.pory"
	call CompleteArea_Safari_Zone
	return


ContentSkipper_SkipContent_MiscSurfing::
# 1752 "data/scripts/my_debug.pory"
	call CompleteArea_Misc_Surfing
	return


SkipStory::
# 1757 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_8, SkipStory_2
# 1760 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 1
	goto_if_ge SkipStory_5
SkipStory_4:
# 1769 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 2
	goto_if_ge SkipStory_8
SkipStory_7:
# 1804 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 3
	goto_if_ge SkipStory_14
SkipStory_13:
# 1821 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 4
	goto_if_ge SkipStory_20
SkipStory_19:
# 1851 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 5
	goto_if_ge SkipStory_29
SkipStory_28:
# 1883 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 6
	goto_if_ge SkipStory_39
SkipStory_38:
# 1906 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 7
	goto_if_ge SkipStory_48
SkipStory_47:
# 1932 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 8
	goto_if_ge SkipStory_58
SkipStory_57:
# 1950 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 9
	goto_if_ge SkipStory_70
SkipStory_69:
# 1985 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 10
	goto_if_ge SkipStory_85
SkipStory_84:
# 1990 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 11
	goto_if_ge SkipStory_94
SkipStory_93:
# 1997 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 12
	goto_if_ge SkipStory_101
SkipStory_100:
# 2017 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 13
	goto_if_ge SkipStory_104
SkipStory_103:
# 2042 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 14
	goto_if_ge SkipStory_110
SkipStory_109:
# 2051 "data/scripts/my_debug.pory"
	compare VAR_TEMP_B, 15
	goto_if_ge SkipStory_119
SkipStory_118:
# 2071 "data/scripts/my_debug.pory"
	setflag FLAG_TEMP_8
	return

SkipStory_2:
	return

SkipStory_5:
# 1761 "data/scripts/my_debug.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_lt SkipStory_11
SkipStory_10:
# 1765 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_ROCKET
# 1766 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_WINDY_WOODS
# 1767 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
	goto SkipStory_4

SkipStory_8:
# 1770 "data/scripts/my_debug.pory"
	compare VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	goto_if_lt SkipStory_17
SkipStory_16:
# 1773 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_CORALGROVE_CITY
# 1774 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_1
# 1775 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_2
# 1776 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_3
# 1777 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_4
# 1778 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_5
# 1779 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CORALGYM_6
# 1780 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_AARON
	checkitem ITEM_TM_U_TURN
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_26
SkipStory_25:
# 1784 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE01_GET
# 1785 "data/scripts/my_debug.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 1786 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_MAY_CORALGROVE_ELEVATOR
	goto_if 1, SkipStory_34
# 1786 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BRENDAN_CORALGROVE_ELEVATOR
	goto_if 1, SkipStory_34
	goto SkipStory_7

SkipStory_11:
# 1762 "data/scripts/my_debug.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 1763 "data/scripts/my_debug.pory"
	additem ITEM_LETTER
	goto SkipStory_10

SkipStory_14:
# 1805 "data/scripts/my_debug.pory"
	setflag FLAG_RANCH_EVENT_NPC
# 1806 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_POKE_RANCH
# 1807 "data/scripts/my_debug.pory"
	setflag FLAG_RANCH_HELPED
# 1808 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_RANCH_OWNER
# 1809 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_VOLKNER_2
	checkitem ITEM_HM01
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_23
SkipStory_22:
# 1813 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_VOLKNER_1
# 1814 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_CUT
# 1815 "data/scripts/my_debug.pory"
	setflag FLAG_VOLKNER_HELPED
# 1816 "data/scripts/my_debug.pory"
	setflag FLAG_JASMINE_HELPED
# 1817 "data/scripts/my_debug.pory"
	setvar VAR_POKERANCH, 1
# 1818 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_RANCH_ROCKET
# 1819 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_RANCH_ROCKET2
	goto SkipStory_13

SkipStory_17:
# 1771 "data/scripts/my_debug.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	goto SkipStory_16

SkipStory_20:
# 1822 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_WIP_CITY1
# 1823 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_AMPHAROS
# 1824 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH1
# 1825 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH2
# 1826 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH3
# 1827 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
# 1828 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_1
# 1829 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_2
# 1830 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_3
# 1831 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_4
# 1832 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_5
# 1833 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_6
# 1834 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_7
# 1835 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_8
# 1836 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_9
# 1837 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_10
# 1838 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_11
# 1839 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_12
# 1840 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_13
# 1841 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_14
# 1842 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_15
# 1843 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDEGYM_16
# 1844 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_VOLKNER
# 1845 "data/scripts/my_debug.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
	checkitem ITEM_TM_CHARGE_BEAM
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_32
SkipStory_31:
# 1849 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE02_GET
	goto SkipStory_19

SkipStory_23:
# 1811 "data/scripts/my_debug.pory"
	giveitem ITEM_HM01
	goto SkipStory_22

SkipStory_26:
# 1782 "data/scripts/my_debug.pory"
	additem ITEM_TM_U_TURN
	goto SkipStory_25

SkipStory_29:
# 1852 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_SHORESLATE
# 1853 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 1854 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SHORESLATE_ROCKET
# 1855 "data/scripts/my_debug.pory"
	setvar VAR_DESERT_BYPASS, 1
# 1856 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC1F_ROCKET_1
# 1857 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC1F_ROCKET_2
# 1858 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_1
# 1859 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_2
# 1860 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_3
# 1861 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC_BASEROCKET_4
# 1862 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_1
# 1863 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_2
# 1864 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_3
# 1865 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_4
# 1866 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC2F_ROCKET_5
# 1867 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DC3F_ROCKET_1
# 1868 "data/scripts/my_debug.pory"
	setflag FLAG_DEVON_UNDER_ATTACK
# 1869 "data/scripts/my_debug.pory"
	setflag FLAG_HELPED_DEVON_CORP
# 1870 "data/scripts/my_debug.pory"
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
# 1878 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_BIKE, SkipStory_65
SkipStory_64:
# 1881 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_BIKE
	goto SkipStory_28

SkipStory_32:
# 1847 "data/scripts/my_debug.pory"
	additem ITEM_TM_CHARGE_BEAM
	goto SkipStory_31

SkipStory_34:
# 1787 "data/scripts/my_debug.pory"
	msgbox SkipStory_Text_0, MSGBOX_YESNO
# 1788 "data/scripts/my_debug.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SkipStory_44
# 1800 "data/scripts/my_debug.pory"
	setflag FLAG_RIVAL_HARBOR_ANGRY
	goto SkipStory_7

SkipStory_39:
# 1884 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH1
# 1885 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH2
# 1886 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH3
# 1887 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_GYM_SWITCH4
# 1888 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CAMPER1
# 1889 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_PICNICKER1
# 1890 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER1
# 1891 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CAMPER2
# 1892 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER2
# 1893 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER3
# 1894 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_PICNICKER2
# 1895 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CAMPER3
# 1896 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_PICNICKER3
# 1897 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_HIKER4
# 1898 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KAOLGYM_CLAY
# 1899 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE03_GET
# 1900 "data/scripts/my_debug.pory"
	setvar VAR_KAOLISLE_HOTEL_STATE, 1
# 1901 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDEJASMINE_HOTEL
# 1902 "data/scripts/my_debug.pory"
	additem ITEM_TM_STOMPING_TANTRUM
# 1903 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_KAOLISLE
# 1904 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_BROTHER_INTRO
	goto SkipStory_38

SkipStory_42:
# 1872 "data/scripts/my_debug.pory"
	giveitem ITEM_GO_GOGGLES
# 1873 "data/scripts/my_debug.pory"
	removeitem ITEM_LETTER
	goto SkipStory_41

SkipStory_44:
	checkplayergender
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_54
# 1793 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_CORALGROVE_ELEVATOR
SkipStory_53:
	checkitem ITEM_ITEMFINDER
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_67
	goto SkipStory_7

SkipStory_48:
# 1907 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_SANDSTONE_CITY
	checkplayergender
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_61
# 1917 "data/scripts/my_debug.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, SkipStory_81
# 1921 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_ROUTE_11_NORMAL
SkipStory_60:
	checkitem ITEM_ITEMFINDER
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_76
SkipStory_75:
# 1927 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL
# 1928 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
# 1929 "data/scripts/my_debug.pory"
	setvar VAR_GYM_TELEPORT, 1
# 1930 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	goto SkipStory_47

SkipStory_51:
# 1876 "data/scripts/my_debug.pory"
	giveitem ITEM_HM05
	goto SkipStory_50

SkipStory_54:
# 1790 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_CORALGROVE_ELEVATOR
	goto SkipStory_53

SkipStory_58:
# 1933 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SkipStory_73
SkipStory_72:
# 1936 "data/scripts/my_debug.pory"
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 2
# 1937 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BADGE04_GET, SkipStory_91
SkipStory_90:
# 1940 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE04_GET
# 1941 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_KORRINA
# 1942 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM1
# 1943 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTF1
# 1944 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTF2
# 1945 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM2
# 1946 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTF3
# 1947 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM3
# 1948 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SANDGYM_CYCLISTM4
	goto SkipStory_57

SkipStory_61:
# 1909 "data/scripts/my_debug.pory"
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, SkipStory_78
# 1913 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_ROUTE_11_NORMAL
	goto SkipStory_60

SkipStory_65:
# 1879 "data/scripts/my_debug.pory"
	giveitem ITEM_ACRO_BIKE
	goto SkipStory_64

SkipStory_67:
# 1796 "data/scripts/my_debug.pory"
	additem ITEM_ITEMFINDER
	goto SkipStory_7

SkipStory_70:
# 1951 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_MAN3
# 1952 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_WOMAN5
# 1953 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_PSYCHIC
# 1954 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_2F_MAN5
# 1955 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_EXPERT_M
# 1956 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_EXPERT_F
# 1957 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_HEXMANIAC
# 1958 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_3F_PSYCHICF
# 1959 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_BLACKBELT
# 1960 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_HEXMANIAC
# 1961 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_LASS
# 1962 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_YOUNGSTER
# 1963 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_BATTLEGIRL
# 1964 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_4F_BLACKBELT2
# 1965 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_5F_COOLTRAINER_M
# 1966 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_AT_5F_COOLTRAINER_F
	checkitem ITEM_MEGA_RING
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_88
SkipStory_87:
# 1970 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_MEGA_RING
# 1971 "data/scripts/my_debug.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
# 1972 "data/scripts/my_debug.pory"
	clearflag FLAG_KORRINA_LEAVESGYM
# 1973 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 1974 "data/scripts/my_debug.pory"
	clearflag FLAG_HIDE_LAB_RIVAL
# 1975 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_LIBRARY_BIRCH
# 1976 "data/scripts/my_debug.pory"
	switch VAR_STARTER_MON
# 1977 "data/scripts/my_debug.pory"
	case SPECIES_ROWLET, SkipStory_97
# 1979 "data/scripts/my_debug.pory"
	case SPECIES_TORCHIC, SkipStory_98
# 1981 "data/scripts/my_debug.pory"
	case SPECIES_PIPLUP, SkipStory_99
	goto SkipStory_69

SkipStory_73:
# 1934 "data/scripts/my_debug.pory"
	setflag FLAG_KORRINA_LEAVESGYM
	goto SkipStory_72

SkipStory_76:
# 1925 "data/scripts/my_debug.pory"
	giveitem ITEM_ITEMFINDER
	goto SkipStory_75

SkipStory_78:
# 1910 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_ROUTE_11_ANGRY
	goto SkipStory_60

SkipStory_81:
# 1918 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_ROUTE_11_ANGRY
	goto SkipStory_60

SkipStory_85:
# 1986 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 1987 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_LAB_RIVAL
# 1988 "data/scripts/my_debug.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 3
	goto SkipStory_84

SkipStory_88:
# 1968 "data/scripts/my_debug.pory"
	giveitem ITEM_MEGA_RING
	goto SkipStory_87

SkipStory_91:
# 1938 "data/scripts/my_debug.pory"
	additem ITEM_TM_POWER_UP_PUNCH
	goto SkipStory_90

SkipStory_94:
# 1991 "data/scripts/my_debug.pory"
	setflag FLAG_ACEROLA_TALKED_TO
# 1992 "data/scripts/my_debug.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
# 1993 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BERRYROCKET
# 1994 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BROTHER_5_FISHINGVILLAGE
# 1995 "data/scripts/my_debug.pory"
	setflag FLAG_VISITED_FISHING_VILLAGE
	goto SkipStory_93

SkipStory_97:
# 1978 "data/scripts/my_debug.pory"
	additem ITEM_DECIDUEITE
	goto SkipStory_69

SkipStory_98:
# 1980 "data/scripts/my_debug.pory"
	additem ITEM_BLAZIKENITE
	goto SkipStory_69

SkipStory_99:
# 1982 "data/scripts/my_debug.pory"
	additem ITEM_EMPOLEONITE
	goto SkipStory_69

SkipStory_101:
# 1998 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE05_GET
	checkitem ITEM_TM_SHADOW_CLAW
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_107
SkipStory_106:
# 2002 "data/scripts/my_debug.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_lt SkipStory_116
SkipStory_115:
# 2005 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_1
# 2006 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_2
# 2007 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_3
# 2008 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_4
# 2009 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_5
# 2010 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DRISGYM_6
# 2011 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_ACEROLA
	checkitem ITEM_HM03
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_128
SkipStory_127:
# 2015 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_SURF
	goto SkipStory_100

SkipStory_104:
# 2018 "data/scripts/my_debug.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_STORY_COMPLETE
# 2019 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_1
# 2020 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_2
# 2021 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_3
# 2022 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_4
# 2023 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_5
# 2024 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FACTORY_ROCKET_PETREL
# 2025 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FACTORY_ITEM_1, SkipStory_113
SkipStory_112:
# 2029 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FACTORY_ITEM_2, SkipStory_125
SkipStory_124:
# 2033 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FACTORY_ITEM_3, SkipStory_133
SkipStory_132:
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_135
	goto SkipStory_103

SkipStory_107:
# 2000 "data/scripts/my_debug.pory"
	additem ITEM_TM_SHADOW_CLAW
	goto SkipStory_106

SkipStory_110:
# 2043 "data/scripts/my_debug.pory"
	setflag FLAG_RIVAL_MET_IN_BASALEK
	checkplayergender
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SkipStory_121
# 2048 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BRENDAN_BASALEK_TOWN
	goto SkipStory_109

SkipStory_113:
# 2026 "data/scripts/my_debug.pory"
	setflag FLAG_FACTORY_ITEM_1
# 2027 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ELIXIR
	goto SkipStory_112

SkipStory_116:
# 2003 "data/scripts/my_debug.pory"
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
	goto SkipStory_115

SkipStory_119:
# 2052 "data/scripts/my_debug.pory"
	setflag FLAG_PRYCE_ESCORTED
# 2053 "data/scripts/my_debug.pory"
	addbp 10
# 2054 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_PRYCE
# 2055 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_LEADER_BLAINE
# 2056 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_HIKER1
# 2057 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_KINDLER1
# 2058 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_SENIOR
# 2059 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_JUNIOR
# 2060 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_RANGER_M
# 2061 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_RANGER_F
# 2062 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_MANIAC
# 2063 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_COLLECTOR
# 2064 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_KINDLER2
# 2065 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FROSTGYM_RANGER_F2
# 2066 "data/scripts/my_debug.pory"
	setflag FLAG_BADGE06_GET
	checkitem ITEM_TM_ICE_BURN
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SkipStory_130
	goto SkipStory_118

SkipStory_121:
# 2045 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_MAY_BASALEK_TOWN
	goto SkipStory_109

SkipStory_125:
# 2030 "data/scripts/my_debug.pory"
	setflag FLAG_FACTORY_ITEM_1
# 2031 "data/scripts/my_debug.pory"
	additem ITEM_X_ATTACK
	goto SkipStory_124

SkipStory_128:
# 2013 "data/scripts/my_debug.pory"
	giveitem ITEM_HM03
	goto SkipStory_127

SkipStory_130:
# 2068 "data/scripts/my_debug.pory"
	additem ITEM_TM_ICE_BURN
	goto SkipStory_118

SkipStory_133:
# 2034 "data/scripts/my_debug.pory"
	setflag FLAG_FACTORY_ITEM_1
# 2035 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto SkipStory_132

SkipStory_135:
# 2038 "data/scripts/my_debug.pory"
	removeitem ITEM_RESEARCH_PAPERS
# 2039 "data/scripts/my_debug.pory"
	giveitem ITEM_ZYGARDE_CUBE
	goto SkipStory_103


CompleteAllAreas::
# 2075 "data/scripts/my_debug.pory"
	call CompleteArea_Route_1
# 2076 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 0
	goto_if_eq CompleteAllAreas_2
# 2077 "data/scripts/my_debug.pory"
	call CompleteArea_Route_2
# 2078 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 1
	goto_if_eq CompleteAllAreas_5
# 2079 "data/scripts/my_debug.pory"
	call CompleteArea_Windy_Woods
# 2080 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 2
	goto_if_eq CompleteAllAreas_8
# 2081 "data/scripts/my_debug.pory"
	call CompleteArea_Coralgrove_City
# 2082 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 3
	goto_if_eq CompleteAllAreas_11
# 2083 "data/scripts/my_debug.pory"
	call CompleteArea_Azuretide_Town
# 2084 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 4
	goto_if_eq CompleteAllAreas_14
# 2085 "data/scripts/my_debug.pory"
	call CompleteArea_Route_4
# 2086 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 5
	goto_if_eq CompleteAllAreas_17
# 2087 "data/scripts/my_debug.pory"
	call CompleteArea_Pokemon_Ranch
# 2088 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 6
	goto_if_eq CompleteAllAreas_20
# 2089 "data/scripts/my_debug.pory"
	call CompleteArea_Aldeleaf_City
# 2090 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 7
	goto_if_eq CompleteAllAreas_23
# 2091 "data/scripts/my_debug.pory"
	call CompleteArea_Route_30
# 2092 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 8
	goto_if_eq CompleteAllAreas_26
# 2093 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Valley
# 2094 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 9
	goto_if_eq CompleteAllAreas_29
# 2095 "data/scripts/my_debug.pory"
	call CompleteArea_Route_5
# 2096 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 10
	goto_if_eq CompleteAllAreas_32
# 2097 "data/scripts/my_debug.pory"
	call CompleteArea_Flower_Fields
# 2098 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 11
	goto_if_eq CompleteAllAreas_35
# 2099 "data/scripts/my_debug.pory"
	call CompleteArea_Skyloch_Village
# 2100 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 12
	goto_if_eq CompleteAllAreas_38
# 2101 "data/scripts/my_debug.pory"
	call CompleteArea_Route_6
# 2102 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 13
	goto_if_eq CompleteAllAreas_41
# 2103 "data/scripts/my_debug.pory"
	call CompleteArea_Route_8
# 2104 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 14
	goto_if_eq CompleteAllAreas_44
# 2105 "data/scripts/my_debug.pory"
	call CompleteArea_Shoreslate_City
# 2106 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 15
	goto_if_eq CompleteAllAreas_47
# 2107 "data/scripts/my_debug.pory"
	call CompleteArea_Scorched_Desert
# 2108 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 16
	goto_if_eq CompleteAllAreas_50
# 2109 "data/scripts/my_debug.pory"
	call CompleteArea_Route_7
# 2110 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 17
	goto_if_eq CompleteAllAreas_53
# 2111 "data/scripts/my_debug.pory"
	call CompleteArea_Marigorge_Town
# 2112 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 18
	goto_if_eq CompleteAllAreas_56
# 2113 "data/scripts/my_debug.pory"
	call CompleteArea_Kaolisle_City
# 2114 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 19
	goto_if_eq CompleteAllAreas_59
# 2115 "data/scripts/my_debug.pory"
	call CompleteArea_Rockliffe_Town
# 2116 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 20
	goto_if_eq CompleteAllAreas_62
# 2117 "data/scripts/my_debug.pory"
	call CompleteArea_Route_11
# 2118 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 21
	goto_if_eq CompleteAllAreas_65
# 2119 "data/scripts/my_debug.pory"
	call CompleteArea_Route_12
# 2120 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 22
	goto_if_eq CompleteAllAreas_68
# 2121 "data/scripts/my_debug.pory"
	call CompleteArea_Sandstone_City
# 2122 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 23
	goto_if_eq CompleteAllAreas_71
# 2123 "data/scripts/my_debug.pory"
	call CompleteArea_Route_13
# 2124 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 24
	goto_if_eq CompleteAllAreas_74
# 2125 "data/scripts/my_debug.pory"
	call CompleteArea_Adamant_Tower
# 2126 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 25
	goto_if_eq CompleteAllAreas_77
# 2127 "data/scripts/my_debug.pory"
	call CompleteArea_Route_14
# 2128 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 26
	goto_if_eq CompleteAllAreas_80
# 2129 "data/scripts/my_debug.pory"
	call CompleteArea_Route_15
# 2130 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 27
	goto_if_eq CompleteAllAreas_83
# 2131 "data/scripts/my_debug.pory"
	call CompleteArea_Fishing_Village
# 2132 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 28
	goto_if_eq CompleteAllAreas_86
# 2133 "data/scripts/my_debug.pory"
	call CompleteArea_Route_23
# 2134 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 29
	goto_if_eq CompleteAllAreas_89
# 2135 "data/scripts/my_debug.pory"
	call CompleteArea_Drisledge_Town
# 2136 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 30
	goto_if_eq CompleteAllAreas_92
# 2137 "data/scripts/my_debug.pory"
	call CompleteArea_Amberock_Town
# 2138 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 31
	goto_if_eq CompleteAllAreas_95
# 2139 "data/scripts/my_debug.pory"
	call CompleteArea_Route_3
# 2140 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 32
	goto_if_eq CompleteAllAreas_98
# 2141 "data/scripts/my_debug.pory"
	call CompleteArea_Route_9
# 2142 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 33
	goto_if_eq CompleteAllAreas_101
# 2143 "data/scripts/my_debug.pory"
	call CompleteArea_Route_10
# 2144 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 34
	goto_if_eq CompleteAllAreas_104
# 2145 "data/scripts/my_debug.pory"
	call CompleteArea_Windplume_Mountain
# 2146 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 35
	goto_if_eq CompleteAllAreas_107
# 2147 "data/scripts/my_debug.pory"
	call CompleteArea_Route_16
# 2148 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 36
	goto_if_eq CompleteAllAreas_110
# 2149 "data/scripts/my_debug.pory"
	call CompleteArea_Basalek_Town
# 2150 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 37
	goto_if_eq CompleteAllAreas_113
# 2151 "data/scripts/my_debug.pory"
	call CompleteArea_Route_17
# 2152 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 38
	goto_if_eq CompleteAllAreas_116
# 2153 "data/scripts/my_debug.pory"
	call CompleteArea_Route_18
# 2154 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 39
	goto_if_eq CompleteAllAreas_119
# 2155 "data/scripts/my_debug.pory"
	call CompleteArea_Frosthearth_City
# 2156 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 40
	goto_if_eq CompleteAllAreas_122
# 2157 "data/scripts/my_debug.pory"
	call CompleteArea_Rock_Climb
# 2158 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 41
	goto_if_eq CompleteAllAreas_125
# 2159 "data/scripts/my_debug.pory"
	call CompleteArea_Desert_Ruins
# 2160 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 42
	goto_if_eq CompleteAllAreas_128
# 2161 "data/scripts/my_debug.pory"
	call CompleteArea_Safari_Zone
# 2162 "data/scripts/my_debug.pory"
	compare VAR_TEMP_A, 43
	goto_if_eq CompleteAllAreas_131
# 2163 "data/scripts/my_debug.pory"
	call CompleteArea_Misc_Surfing
# 2164 "data/scripts/my_debug.pory"
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
# 2168 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_1_2
CompleteArea_Route_1_1:
# 2174 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_1_5
CompleteArea_Route_1_4:
# 2185 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_1_10
CompleteArea_Route_1_9:
	return

CompleteArea_Route_1_2:
# 2169 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION, CompleteArea_Route_1_7
	goto CompleteArea_Route_1_1

CompleteArea_Route_1_5:
# 2175 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_YOUNGSTER
# 2176 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_FISHER
# 2177 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_BUG_CATCHER
# 2178 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_TUBER
# 2179 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R1_COOLTRAINER
	goto_if 0, CompleteArea_Route_1_12
	goto CompleteArea_Route_1_4

CompleteArea_Route_1_7:
# 2170 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE1_SUPERPOTION
# 2171 "data/scripts/my_debug.pory"
	additem ITEM_POTION
	goto CompleteArea_Route_1_1

CompleteArea_Route_1_10:
# 2186 "data/scripts/my_debug.pory"
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
# 2187 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, CompleteArea_Route_1_14
	goto CompleteArea_Route_1_9

CompleteArea_Route_1_12:
# 2180 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R1_COOLTRAINER
# 2181 "data/scripts/my_debug.pory"
	addbp 10
# 2182 "data/scripts/my_debug.pory"
	giveitem ITEM_EXP_SHARE
	goto CompleteArea_Route_1_4

CompleteArea_Route_1_14:
# 2188 "data/scripts/my_debug.pory"
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	goto CompleteArea_Route_1_9


CompleteArea_Route_2::
# 2194 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_2_2
CompleteArea_Route_2_1:
# 2226 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_2_5
CompleteArea_Route_2_4:
# 2233 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_2_11
CompleteArea_Route_2_10:
	return

CompleteArea_Route_2_2:
# 2195 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_PEARL1, CompleteArea_Route_2_8
CompleteArea_Route_2_7:
# 2199 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL, CompleteArea_Route_2_14
CompleteArea_Route_2_13:
# 2203 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_PEARL2, CompleteArea_Route_2_19
CompleteArea_Route_2_18:
# 2207 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE2_X_ATTACK, CompleteArea_Route_2_22
CompleteArea_Route_2_21:
# 2211 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL, CompleteArea_Route_2_25
CompleteArea_Route_2_24:
# 2215 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE2_REVIVE, CompleteArea_Route_2_28
CompleteArea_Route_2_27:
# 2219 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_2_PECHA
# 2220 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2221 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_2_ORAN
# 2222 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2223 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_2_CHERI
# 2224 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_2_1

CompleteArea_Route_2_5:
# 2227 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_FISHER
# 2228 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_LASS
# 2229 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_BLACKBELT
# 2230 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_YOUNGSTER
# 2231 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R2_SCHOOL_KID_F
	goto CompleteArea_Route_2_4

CompleteArea_Route_2_8:
# 2196 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL1
# 2197 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_2_7

CompleteArea_Route_2_11:
# 2234 "data/scripts/my_debug.pory"
	setflag FLAG_ORICORIO_SHOWN_TO_MANIAC
# 2235 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q01_PRIMROSE_ORICORIO_START, CompleteArea_Route_2_16
	goto CompleteArea_Route_2_10

CompleteArea_Route_2_14:
# 2200 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_BIGPEARL
# 2201 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_2_13

CompleteArea_Route_2_16:
# 2236 "data/scripts/my_debug.pory"
	completequest FLAG_Q01_PRIMROSE_ORICORIO_COMPLETE
	goto CompleteArea_Route_2_10

CompleteArea_Route_2_19:
# 2204 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_PEARL2
# 2205 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_2_18

CompleteArea_Route_2_22:
# 2208 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE2_X_ATTACK
# 2209 "data/scripts/my_debug.pory"
	additem ITEM_X_ATTACK
	goto CompleteArea_Route_2_21

CompleteArea_Route_2_25:
# 2212 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_GREAT_BALL
# 2213 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_2_24

CompleteArea_Route_2_28:
# 2216 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE2_REVIVE
# 2217 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Route_2_27


CompleteArea_Windy_Woods::
# 2242 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Windy_Woods_2
CompleteArea_Windy_Woods_1:
# 2264 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Windy_Woods_5
CompleteArea_Windy_Woods_4:
# 2285 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Windy_Woods_11
CompleteArea_Windy_Woods_10:
	return

CompleteArea_Windy_Woods_2:
# 2243 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_WW_PARLYZ, CompleteArea_Windy_Woods_8
CompleteArea_Windy_Woods_7:
# 2247 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_WW_DAMP_ROCK, CompleteArea_Windy_Woods_16
CompleteArea_Windy_Woods_15:
# 2251 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_WW_CARBOS, CompleteArea_Windy_Woods_23
CompleteArea_Windy_Woods_22:
# 2255 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_WW_RARE_CANDY, CompleteArea_Windy_Woods_26
CompleteArea_Windy_Woods_25:
# 2259 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_WW_ETHER, CompleteArea_Windy_Woods_28
	goto CompleteArea_Windy_Woods_1

CompleteArea_Windy_Woods_5:
# 2265 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_BUGCATCHER
# 2266 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_LADY
# 2267 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_BUGCATCHER_2
# 2268 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_CAMPER
# 2269 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_LASS
# 2270 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_YOUNGSTER
# 2271 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 0, CompleteArea_Windy_Woods_13
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_8:
# 2244 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_WW_PARLYZ
# 2245 "data/scripts/my_debug.pory"
	additem ITEM_PARALYZE_HEAL
	goto CompleteArea_Windy_Woods_7

CompleteArea_Windy_Woods_11:
# 2286 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_LOST_GLADE
# 2287 "data/scripts/my_debug.pory"
	setflag FLAG_GLADE_PUZZLE
	goto CompleteArea_Windy_Woods_10

CompleteArea_Windy_Woods_13:
# 2272 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WW_ACE_TRAINER
# 2273 "data/scripts/my_debug.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 2274 "data/scripts/my_debug.pory"
	addbp 10
# 2275 "data/scripts/my_debug.pory"
	switch VAR_STARTER_MON
# 2276 "data/scripts/my_debug.pory"
	case SPECIES_ROWLET, CompleteArea_Windy_Woods_19
# 2278 "data/scripts/my_debug.pory"
	case SPECIES_TORCHIC, CompleteArea_Windy_Woods_20
# 2280 "data/scripts/my_debug.pory"
	case SPECIES_PIPLUP, CompleteArea_Windy_Woods_21
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_16:
# 2248 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_WW_DAMP_ROCK
# 2249 "data/scripts/my_debug.pory"
	additem ITEM_DAMP_ROCK
	goto CompleteArea_Windy_Woods_15

CompleteArea_Windy_Woods_19:
# 2277 "data/scripts/my_debug.pory"
	additem ITEM_MIRACLE_SEED
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_20:
# 2279 "data/scripts/my_debug.pory"
	additem ITEM_CHARCOAL
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_21:
# 2281 "data/scripts/my_debug.pory"
	additem ITEM_MYSTIC_WATER
	goto CompleteArea_Windy_Woods_4

CompleteArea_Windy_Woods_23:
# 2252 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_WW_CARBOS
# 2253 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Windy_Woods_22

CompleteArea_Windy_Woods_26:
# 2256 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_WW_RARE_CANDY
# 2257 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Windy_Woods_25

CompleteArea_Windy_Woods_28:
# 2260 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_WW_ETHER
# 2261 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Windy_Woods_1


CompleteArea_Coralgrove_City::
# 2292 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Coralgrove_City_2
CompleteArea_Coralgrove_City_1:
# 2310 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Coralgrove_City_5
CompleteArea_Coralgrove_City_4:
# 2319 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Coralgrove_City_11
CompleteArea_Coralgrove_City_10:
	return

CompleteArea_Coralgrove_City_2:
# 2293 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_CORAL_GREATBALL, CompleteArea_Coralgrove_City_8
CompleteArea_Coralgrove_City_7:
# 2297 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY, CompleteArea_Coralgrove_City_16
CompleteArea_Coralgrove_City_15:
# 2301 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HARBOR_GREATBALL, CompleteArea_Coralgrove_City_22
CompleteArea_Coralgrove_City_21:
# 2305 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HARBOR_PEARL, CompleteArea_Coralgrove_City_27
	goto CompleteArea_Coralgrove_City_1

CompleteArea_Coralgrove_City_5:
# 2311 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_1
# 2312 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_2
# 2313 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_3
# 2314 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_SCHOOLHALL_4
	checkitem ITEM_TM_FALSE_SWIPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Coralgrove_City_13
	goto CompleteArea_Coralgrove_City_4

CompleteArea_Coralgrove_City_8:
# 2294 "data/scripts/my_debug.pory"
	setflag FLAG_CORAL_GREATBALL
# 2295 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Coralgrove_City_7

CompleteArea_Coralgrove_City_11:
# 2320 "data/scripts/my_debug.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 2321 "data/scripts/my_debug.pory"
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
# 2316 "data/scripts/my_debug.pory"
	additem ITEM_TM_FALSE_SWIPE
	goto CompleteArea_Coralgrove_City_4

CompleteArea_Coralgrove_City_16:
# 2298 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_CORALGROVE_RARECANDY
# 2299 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Coralgrove_City_15

CompleteArea_Coralgrove_City_19:
# 2322 "data/scripts/my_debug.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 2323 "data/scripts/my_debug.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
	goto CompleteArea_Coralgrove_City_18

CompleteArea_Coralgrove_City_22:
# 2302 "data/scripts/my_debug.pory"
	setflag FLAG_HARBOR_GREATBALL
# 2303 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Coralgrove_City_21

CompleteArea_Coralgrove_City_25:
# 2326 "data/scripts/my_debug.pory"
	additem ITEM_TM_REST
	goto CompleteArea_Coralgrove_City_24

CompleteArea_Coralgrove_City_27:
# 2306 "data/scripts/my_debug.pory"
	setflag FLAG_HARBOR_PEARL
# 2307 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Coralgrove_City_1

CompleteArea_Coralgrove_City_29:
# 2329 "data/scripts/my_debug.pory"
	additem ITEM_OLD_ROD
	goto CompleteArea_Coralgrove_City_10


CompleteArea_Azuretide_Town::
# 2335 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Azuretide_Town_2
CompleteArea_Azuretide_Town_1:
# 2349 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Azuretide_Town_5
CompleteArea_Azuretide_Town_4:
	return

CompleteArea_Azuretide_Town_2:
# 2336 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COASTTOWN_PEARL, CompleteArea_Azuretide_Town_8
CompleteArea_Azuretide_Town_7:
# 2340 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COASTTOWN_REDSHARD, CompleteArea_Azuretide_Town_14
CompleteArea_Azuretide_Town_13:
# 2344 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COASTTOWN_HEATROCK, CompleteArea_Azuretide_Town_18
	goto CompleteArea_Azuretide_Town_1

CompleteArea_Azuretide_Town_5:
# 2350 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AZURETIDE_HONEY, CompleteArea_Azuretide_Town_11
CompleteArea_Azuretide_Town_10:
	checkitem ITEM_TOWN_MAP
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Azuretide_Town_16
	goto CompleteArea_Azuretide_Town_4

CompleteArea_Azuretide_Town_8:
# 2337 "data/scripts/my_debug.pory"
	setflag FLAG_COASTTOWN_PEARL
# 2338 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Azuretide_Town_7

CompleteArea_Azuretide_Town_11:
# 2351 "data/scripts/my_debug.pory"
	additem ITEM_HONEY, 3
# 2352 "data/scripts/my_debug.pory"
	setflag FLAG_AZURETIDE_HONEY
	goto CompleteArea_Azuretide_Town_10

CompleteArea_Azuretide_Town_14:
# 2341 "data/scripts/my_debug.pory"
	setflag FLAG_COASTTOWN_REDSHARD
# 2342 "data/scripts/my_debug.pory"
	additem ITEM_RED_SHARD
	goto CompleteArea_Azuretide_Town_13

CompleteArea_Azuretide_Town_16:
# 2355 "data/scripts/my_debug.pory"
	additem ITEM_TOWN_MAP
# 2356 "data/scripts/my_debug.pory"
	removemoney 2000
	goto CompleteArea_Azuretide_Town_4

CompleteArea_Azuretide_Town_18:
# 2345 "data/scripts/my_debug.pory"
	setflag FLAG_COASTTOWN_HEATROCK
# 2346 "data/scripts/my_debug.pory"
	additem ITEM_HEAT_ROCK
	goto CompleteArea_Azuretide_Town_1


CompleteArea_Route_4::
# 2362 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_4_2
CompleteArea_Route_4_1:
# 2394 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_4_5
CompleteArea_Route_4_4:
	return

CompleteArea_Route_4_2:
# 2363 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE3_ANTIDOTE, CompleteArea_Route_4_8
CompleteArea_Route_4_7:
# 2367 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL, CompleteArea_Route_4_11
CompleteArea_Route_4_10:
# 2371 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL, CompleteArea_Route_4_14
CompleteArea_Route_4_13:
# 2375 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_REVIVE, CompleteArea_Route_4_17
CompleteArea_Route_4_16:
# 2379 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE3_ETHER, CompleteArea_Route_4_20
CompleteArea_Route_4_19:
# 2383 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE3_GIGADRAIN, CompleteArea_Route_4_23
CompleteArea_Route_4_22:
# 2387 "data/scripts/my_debug.pory"
	pickberrytree 4
# 2388 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2389 "data/scripts/my_debug.pory"
	pickberrytree 6
# 2390 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2391 "data/scripts/my_debug.pory"
	pickberrytree 7
# 2392 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_4_1

CompleteArea_Route_4_5:
# 2395 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_HIKER
# 2396 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_POKEMANIAC
# 2397 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_BUGCATCHER
# 2398 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_TWINS
# 2399 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_TRIATHLETE
# 2400 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_CAMPER
# 2401 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_COOL_F
# 2402 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_COOL_M
# 2403 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER
# 2404 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_YOUNGSTER
# 2405 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_BIRDKEEPER2
# 2406 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_LASS
# 2407 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_YOUNGSTER2
# 2408 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R4_TRIATHLETE2
	goto CompleteArea_Route_4_4

CompleteArea_Route_4_8:
# 2364 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE3_ANTIDOTE
# 2365 "data/scripts/my_debug.pory"
	additem ITEM_ANTIDOTE
	goto CompleteArea_Route_4_7

CompleteArea_Route_4_11:
# 2368 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_POKEBALL
# 2369 "data/scripts/my_debug.pory"
	additem ITEM_POKE_BALL
	goto CompleteArea_Route_4_10

CompleteArea_Route_4_14:
# 2372 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_SUPERREPEL
# 2373 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_4_13

CompleteArea_Route_4_17:
# 2376 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_REVIVE
# 2377 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Route_4_16

CompleteArea_Route_4_20:
# 2380 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE3_ETHER
# 2381 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Route_4_19

CompleteArea_Route_4_23:
# 2384 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE3_GIGADRAIN
# 2385 "data/scripts/my_debug.pory"
	additem ITEM_TM_GRASS_KNOT
	goto CompleteArea_Route_4_22


CompleteArea_Pokemon_Ranch::
# 2413 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Pokemon_Ranch_2
CompleteArea_Pokemon_Ranch_1:
# 2419 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Pokemon_Ranch_5
CompleteArea_Pokemon_Ranch_4:
	return

CompleteArea_Pokemon_Ranch_2:
# 2414 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_RANCH, CompleteArea_Pokemon_Ranch_7
	goto CompleteArea_Pokemon_Ranch_1

CompleteArea_Pokemon_Ranch_5:
# 2420 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Pokemon_Ranch_10
	goto CompleteArea_Pokemon_Ranch_4

CompleteArea_Pokemon_Ranch_7:
# 2415 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_RANCH
# 2416 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Pokemon_Ranch_1

CompleteArea_Pokemon_Ranch_9:
# 2421 "data/scripts/my_debug.pory"
	additem ITEM_AMPHAROSITE
# 2422 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_AMPHAROSITE
	goto CompleteArea_Pokemon_Ranch_4

CompleteArea_Pokemon_Ranch_10:
# 2420 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_AMPHAROSITE, CompleteArea_Pokemon_Ranch_9
	goto CompleteArea_Pokemon_Ranch_4


CompleteArea_Aldeleaf_City::
# 2428 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Aldeleaf_City_2
CompleteArea_Aldeleaf_City_1:
# 2442 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Aldeleaf_City_5
CompleteArea_Aldeleaf_City_4:
# 2449 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Aldeleaf_City_11
CompleteArea_Aldeleaf_City_10:
	return

CompleteArea_Aldeleaf_City_2:
# 2429 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_LOST_KEY, CompleteArea_Aldeleaf_City_8
CompleteArea_Aldeleaf_City_7:
# 2433 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_MUSHROOM2, CompleteArea_Aldeleaf_City_16
CompleteArea_Aldeleaf_City_15:
# 2437 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_MUSHROOM, CompleteArea_Aldeleaf_City_21
	goto CompleteArea_Aldeleaf_City_1

CompleteArea_Aldeleaf_City_5:
# 2443 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_ALDELEAF_MANIAC
	goto_if 0, CompleteArea_Aldeleaf_City_13
	goto CompleteArea_Aldeleaf_City_4

CompleteArea_Aldeleaf_City_8:
# 2430 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 2431 "data/scripts/my_debug.pory"
	additem ITEM_LOST_KEY
	goto CompleteArea_Aldeleaf_City_7

CompleteArea_Aldeleaf_City_11:
# 2450 "data/scripts/my_debug.pory"
	removeitem ITEM_LOST_KEY
# 2451 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_LOST_KEY
# 2452 "data/scripts/my_debug.pory"
	setflag FLAG_KEY_RETURNED
# 2453 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q04_ALDELEAF_LOST_KEYS_START, CompleteArea_Aldeleaf_City_19
CompleteArea_Aldeleaf_City_18:
# 2456 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WHITEFLUTE_RECEIVED, CompleteArea_Aldeleaf_City_24
CompleteArea_Aldeleaf_City_23:
# 2460 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Aldeleaf_City_27
CompleteArea_Aldeleaf_City_26:
# 2469 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ALDELEAF_QUICK_BALL, CompleteArea_Aldeleaf_City_30
CompleteArea_Aldeleaf_City_29:
# 2473 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_LAVA_COOKIE, CompleteArea_Aldeleaf_City_34
	goto CompleteArea_Aldeleaf_City_10

CompleteArea_Aldeleaf_City_13:
# 2444 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_ALDELEAF_MANIAC
# 2445 "data/scripts/my_debug.pory"
	additem ITEM_SHELL_BELL
# 2446 "data/scripts/my_debug.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
	goto CompleteArea_Aldeleaf_City_4

CompleteArea_Aldeleaf_City_16:
# 2434 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_MUSHROOM2
# 2435 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Aldeleaf_City_15

CompleteArea_Aldeleaf_City_19:
# 2454 "data/scripts/my_debug.pory"
	completequest FLAG_Q04_ALDELEAF_LOST_KEYS_COMPLETE
	goto CompleteArea_Aldeleaf_City_18

CompleteArea_Aldeleaf_City_21:
# 2438 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_MUSHROOM
# 2439 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Aldeleaf_City_1

CompleteArea_Aldeleaf_City_24:
# 2457 "data/scripts/my_debug.pory"
	additem ITEM_BLACK_FLUTE, 1
# 2458 "data/scripts/my_debug.pory"
	setflag FLAG_WHITEFLUTE_RECEIVED
	goto CompleteArea_Aldeleaf_City_23

CompleteArea_Aldeleaf_City_27:
# 2461 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_PAINTBRUSH, CompleteArea_Aldeleaf_City_32
	goto CompleteArea_Aldeleaf_City_26

CompleteArea_Aldeleaf_City_30:
# 2470 "data/scripts/my_debug.pory"
	additem ITEM_QUICK_BALL, 1
# 2471 "data/scripts/my_debug.pory"
	setflag FLAG_ALDELEAF_QUICK_BALL
	goto CompleteArea_Aldeleaf_City_29

CompleteArea_Aldeleaf_City_32:
# 2462 "data/scripts/my_debug.pory"
	additem ITEM_PAINTBRUSH
# 2463 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_PAINTBRUSH
# 2464 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q06_MUSEUM_SMEARGLE_START, CompleteArea_Aldeleaf_City_36
	goto CompleteArea_Aldeleaf_City_26

CompleteArea_Aldeleaf_City_34:
# 2474 "data/scripts/my_debug.pory"
	additem ITEM_LAVA_COOKIE, 1
# 2475 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_LAVA_COOKIE
	goto CompleteArea_Aldeleaf_City_10

CompleteArea_Aldeleaf_City_36:
# 2465 "data/scripts/my_debug.pory"
	completequest FLAG_Q06_MUSEUM_SMEARGLE_COMPLETE
	goto CompleteArea_Aldeleaf_City_26


CompleteArea_Route_30::
# 2481 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_30_2
CompleteArea_Route_30_1:
# 2502 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_30_5
CompleteArea_Route_30_4:
# 2508 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_30_11
CompleteArea_Route_30_10:
	return

CompleteArea_Route_30_2:
# 2482 "data/scripts/my_debug.pory"
	pickberrytree 8
# 2483 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2484 "data/scripts/my_debug.pory"
	pickberrytree 10
# 2485 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2486 "data/scripts/my_debug.pory"
	pickberrytree 11
# 2487 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2488 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2489 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE28_TM, CompleteArea_Route_30_8
CompleteArea_Route_30_7:
# 2493 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE28_ITEMBALL, CompleteArea_Route_30_14
CompleteArea_Route_30_13:
# 2497 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE28_HIDDENBALL, CompleteArea_Route_30_16
	goto CompleteArea_Route_30_1

CompleteArea_Route_30_5:
# 2503 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_BUGCATCHER
# 2504 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_HIKER
# 2505 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_NINJABOY
# 2506 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R30_PSYCHIC
	goto CompleteArea_Route_30_4

CompleteArea_Route_30_8:
# 2490 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_TM
# 2491 "data/scripts/my_debug.pory"
	additem ITEM_TM_SECRET_POWER
	goto CompleteArea_Route_30_7

CompleteArea_Route_30_11:
# 2509 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_DESPAWN_BROTHER
# 2510 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BROTHER_4_ROUTE28
	goto CompleteArea_Route_30_10

CompleteArea_Route_30_14:
# 2494 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_ITEMBALL
# 2495 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_30_13

CompleteArea_Route_30_16:
# 2498 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE28_HIDDENBALL
# 2499 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_30_1


CompleteArea_Windplume_Valley::
# 2515 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Windplume_Valley_2
CompleteArea_Windplume_Valley_1:
# 2553 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Windplume_Valley_5
CompleteArea_Windplume_Valley_4:
	return

CompleteArea_Windplume_Valley_2:
# 2516 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER1, CompleteArea_Windplume_Valley_8
CompleteArea_Windplume_Valley_7:
# 2520 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_HYPER_POTION, CompleteArea_Windplume_Valley_13
CompleteArea_Windplume_Valley_12:
# 2524 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER2, CompleteArea_Windplume_Valley_16
CompleteArea_Windplume_Valley_15:
# 2528 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER3, CompleteArea_Windplume_Valley_19
CompleteArea_Windplume_Valley_18:
# 2532 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER4, CompleteArea_Windplume_Valley_22
CompleteArea_Windplume_Valley_21:
# 2536 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_ELIXIR, CompleteArea_Windplume_Valley_25
CompleteArea_Windplume_Valley_24:
# 2540 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_IRON_BALL, CompleteArea_Windplume_Valley_28
CompleteArea_Windplume_Valley_27:
# 2544 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER5, CompleteArea_Windplume_Valley_31
CompleteArea_Windplume_Valley_30:
# 2548 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WPV_FEATHER6, CompleteArea_Windplume_Valley_33
	goto CompleteArea_Windplume_Valley_1

CompleteArea_Windplume_Valley_5:
# 2554 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER
# 2555 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_TRIATH
# 2556 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BATTLEGIRL
# 2557 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_CAMPER
# 2558 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER2
# 2559 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_MANIAC
# 2560 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER3
# 2561 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_NINJABOY
# 2562 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_LASS
# 2563 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_TRIATH2
# 2564 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER4
# 2565 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BATTLEGIRL2
# 2566 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_BIRDKEEPER5
# 2567 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_WPV_TR14_SKYLA
	goto_if 0, CompleteArea_Windplume_Valley_10
	goto CompleteArea_Windplume_Valley_4

CompleteArea_Windplume_Valley_8:
# 2517 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER1
# 2518 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_7

CompleteArea_Windplume_Valley_10:
# 2568 "data/scripts/my_debug.pory"
	giveitem ITEM_HM02
# 2569 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_WPV_TR14_SKYLA
# 2570 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_FLY
	goto CompleteArea_Windplume_Valley_4

CompleteArea_Windplume_Valley_13:
# 2521 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_HYPER_POTION
# 2522 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Windplume_Valley_12

CompleteArea_Windplume_Valley_16:
# 2525 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER2
# 2526 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_15

CompleteArea_Windplume_Valley_19:
# 2529 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER3
# 2530 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_18

CompleteArea_Windplume_Valley_22:
# 2533 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER4
# 2534 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_21

CompleteArea_Windplume_Valley_25:
# 2537 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_ELIXIR
# 2538 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Windplume_Valley_24

CompleteArea_Windplume_Valley_28:
# 2541 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_IRON_BALL
# 2542 "data/scripts/my_debug.pory"
	additem ITEM_IRON_BALL
	goto CompleteArea_Windplume_Valley_27

CompleteArea_Windplume_Valley_31:
# 2545 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER5
# 2546 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_30

CompleteArea_Windplume_Valley_33:
# 2549 "data/scripts/my_debug.pory"
	setflag FLAG_WPV_FEATHER6
# 2550 "data/scripts/my_debug.pory"
	additem ITEM_PRETTY_FEATHER
	goto CompleteArea_Windplume_Valley_1


CompleteArea_Route_5::
# 2576 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_5_2
CompleteArea_Route_5_1:
# 2618 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_5_5
CompleteArea_Route_5_4:
	return

CompleteArea_Route_5_2:
# 2577 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM1, CompleteArea_Route_5_8
CompleteArea_Route_5_7:
# 2581 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM2, CompleteArea_Route_5_13
CompleteArea_Route_5_12:
# 2585 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM3, CompleteArea_Route_5_16
CompleteArea_Route_5_15:
# 2589 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM1, CompleteArea_Route_5_19
CompleteArea_Route_5_18:
# 2593 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM2, CompleteArea_Route_5_22
CompleteArea_Route_5_21:
# 2597 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM3, CompleteArea_Route_5_25
CompleteArea_Route_5_24:
# 2601 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM4, CompleteArea_Route_5_28
CompleteArea_Route_5_27:
# 2605 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_HIDDENITEM5, CompleteArea_Route_5_31
CompleteArea_Route_5_30:
# 2609 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2610 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2611 "data/scripts/my_debug.pory"
	pickberrytree 13
# 2612 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2613 "data/scripts/my_debug.pory"
	pickberrytree 21
# 2614 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2615 "data/scripts/my_debug.pory"
	pickberrytree 31
# 2616 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_5_1

CompleteArea_Route_5_5:
# 2619 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_FISHER
# 2620 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_BEAUTY
# 2621 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_YOUNGCOUPLE
# 2622 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_LASS1
# 2623 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_POKEFAN_F
# 2624 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_LASS2
# 2625 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_GENTLEMAN
# 2626 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_YOUNGSTER
# 2627 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_TRIATHLETE
# 2628 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_RICHBOY
# 2629 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_KINDLER
# 2630 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_BUGCATCHER
# 2631 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_NINJABOY
# 2632 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_HIKER
# 2633 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R5_ACETRAINER
	goto_if 0, CompleteArea_Route_5_10
	goto CompleteArea_Route_5_4

CompleteArea_Route_5_8:
# 2578 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM1
# 2579 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_5_7

CompleteArea_Route_5_10:
# 2634 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R5_ACETRAINER
# 2635 "data/scripts/my_debug.pory"
	additem ITEM_EVIOLITE
# 2636 "data/scripts/my_debug.pory"
	addbp 20
	goto CompleteArea_Route_5_4

CompleteArea_Route_5_13:
# 2582 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM2
# 2583 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_5_12

CompleteArea_Route_5_16:
# 2586 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM3
# 2587 "data/scripts/my_debug.pory"
	additem ITEM_TM_ROCK_TOMB
	goto CompleteArea_Route_5_15

CompleteArea_Route_5_19:
# 2590 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM1
# 2591 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_18

CompleteArea_Route_5_22:
# 2594 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM2
# 2595 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_21

CompleteArea_Route_5_25:
# 2598 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM3
# 2599 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ETHER
	goto CompleteArea_Route_5_24

CompleteArea_Route_5_28:
# 2602 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM4
# 2603 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_27

CompleteArea_Route_5_31:
# 2606 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_HIDDENITEM5
# 2607 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_5_30


CompleteArea_Flower_Fields::
# 2642 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Flower_Fields_2
CompleteArea_Flower_Fields_1:
# 2660 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Flower_Fields_5
CompleteArea_Flower_Fields_4:
	return

CompleteArea_Flower_Fields_2:
# 2643 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HERACRONITE_OBTAINED, CompleteArea_Flower_Fields_9
CompleteArea_Flower_Fields_7:
# 2647 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_1, CompleteArea_Flower_Fields_15
CompleteArea_Flower_Fields_14:
# 2651 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_3, CompleteArea_Flower_Fields_20
CompleteArea_Flower_Fields_19:
# 2655 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOWERFIELDS_ITEM_2, CompleteArea_Flower_Fields_22
	goto CompleteArea_Flower_Fields_1

CompleteArea_Flower_Fields_5:
# 2661 "data/scripts/my_debug.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_lt CompleteArea_Flower_Fields_12
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_8:
# 2644 "data/scripts/my_debug.pory"
	setflag FLAG_HERACRONITE_OBTAINED
# 2645 "data/scripts/my_debug.pory"
	additem ITEM_HERACRONITE
	goto CompleteArea_Flower_Fields_7

CompleteArea_Flower_Fields_9:
# 2643 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Flower_Fields_8
	goto CompleteArea_Flower_Fields_7

CompleteArea_Flower_Fields_12:
# 2662 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
# 2663 "data/scripts/my_debug.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
# 2664 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q08_FLOWER_FIELDS_GRANBULL_START, CompleteArea_Flower_Fields_17
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_15:
# 2648 "data/scripts/my_debug.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_1
# 2649 "data/scripts/my_debug.pory"
	additem ITEM_ORAN_BERRY
	goto CompleteArea_Flower_Fields_14

CompleteArea_Flower_Fields_17:
# 2665 "data/scripts/my_debug.pory"
	completequest FLAG_Q08_FLOWER_FIELDS_GRANBULL_COMPLETE
	goto CompleteArea_Flower_Fields_4

CompleteArea_Flower_Fields_20:
# 2652 "data/scripts/my_debug.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_3
# 2653 "data/scripts/my_debug.pory"
	additem ITEM_HONEY
	goto CompleteArea_Flower_Fields_19

CompleteArea_Flower_Fields_22:
# 2656 "data/scripts/my_debug.pory"
	setflag FLAG_FLOWERFIELDS_ITEM_2
# 2657 "data/scripts/my_debug.pory"
	additem ITEM_HONEY
	goto CompleteArea_Flower_Fields_1


CompleteArea_Skyloch_Village::
# 2672 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Skyloch_Village_2
CompleteArea_Skyloch_Village_1:
# 2678 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Skyloch_Village_5
CompleteArea_Skyloch_Village_4:
	return

CompleteArea_Skyloch_Village_2:
# 2673 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SKYLOCH_JUICE, CompleteArea_Skyloch_Village_7
	goto CompleteArea_Skyloch_Village_1

CompleteArea_Skyloch_Village_5:
# 2679 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SKYLOCH_CASTELIACONE, CompleteArea_Skyloch_Village_10
CompleteArea_Skyloch_Village_9:
# 2686 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_LIGHTBALL, CompleteArea_Skyloch_Village_12
	goto CompleteArea_Skyloch_Village_4

CompleteArea_Skyloch_Village_7:
# 2674 "data/scripts/my_debug.pory"
	setflag FLAG_SKYLOCH_JUICE
# 2675 "data/scripts/my_debug.pory"
	additem ITEM_BERRY_JUICE
	goto CompleteArea_Skyloch_Village_1

CompleteArea_Skyloch_Village_10:
# 2680 "data/scripts/my_debug.pory"
	additem ITEM_OCCA_BERRY, 1
# 2681 "data/scripts/my_debug.pory"
	setflag FLAG_SKYLOCH_CASTELIACONE
# 2682 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q10_SKYLOCH_ICECREAM_START, CompleteArea_Skyloch_Village_14
	goto CompleteArea_Skyloch_Village_9

CompleteArea_Skyloch_Village_12:
# 2687 "data/scripts/my_debug.pory"
	additem ITEM_LIGHT_BALL
# 2688 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_LIGHTBALL
# 2689 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q11_SKYLOCH_RAICHUS_START, CompleteArea_Skyloch_Village_16
	goto CompleteArea_Skyloch_Village_4

CompleteArea_Skyloch_Village_14:
# 2683 "data/scripts/my_debug.pory"
	completequest FLAG_Q10_SKYLOCH_ICECREAM_COMPLETE
	goto CompleteArea_Skyloch_Village_9

CompleteArea_Skyloch_Village_16:
# 2690 "data/scripts/my_debug.pory"
	completequest FLAG_Q11_SKYLOCH_RAICHUS_COMPLETE
	goto CompleteArea_Skyloch_Village_4


CompleteArea_Route_6::
# 2697 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_6_2
CompleteArea_Route_6_1:
	return

CompleteArea_Route_6_2:
# 2698 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_RANGER_M
# 2699 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_CAMPER_F
# 2700 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_HIKER
# 2701 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_CAMPER_M2
# 2702 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R6_KINDLER
	goto CompleteArea_Route_6_1


CompleteArea_Route_8::
# 2707 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_8_2
CompleteArea_Route_8_1:
# 2740 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_8_5
CompleteArea_Route_8_4:
# 2753 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_8_11
CompleteArea_Route_8_10:
	return

CompleteArea_Route_8_2:
# 2708 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2709 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2710 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 2711 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM2, CompleteArea_Route_8_8
CompleteArea_Route_8_7:
# 2715 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM6, CompleteArea_Route_8_14
CompleteArea_Route_8_13:
# 2719 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM3, CompleteArea_Route_8_19
CompleteArea_Route_8_18:
# 2723 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM1, CompleteArea_Route_8_22
CompleteArea_Route_8_21:
# 2727 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM5, CompleteArea_Route_8_25
CompleteArea_Route_8_24:
# 2731 "data/scripts/my_debug.pory"
	pickberrytree 15
# 2732 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2733 "data/scripts/my_debug.pory"
	pickberrytree 22
# 2734 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2735 "data/scripts/my_debug.pory"
	pickberrytree 24
# 2736 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 2737 "data/scripts/my_debug.pory"
	pickberrytree 33
# 2738 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_8_1

CompleteArea_Route_8_5:
# 2741 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_PARASOLLADY
# 2742 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_SRJR
# 2743 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_AROMALADY
# 2744 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_YOUNGSTER
# 2745 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_PSYCHIC_F
# 2746 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_ENTHUSIAST
# 2747 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_TRIATHLETE_M
# 2748 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_GENTLEMAN
# 2749 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_HIKER
# 2750 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_OLDCOUPLE
# 2751 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R8_BIRDKEEPER
	goto CompleteArea_Route_8_4

CompleteArea_Route_8_8:
# 2712 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM2
# 2713 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_8_7

CompleteArea_Route_8_11:
# 2754 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 2755 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, CompleteArea_Route_8_16
	goto CompleteArea_Route_8_10

CompleteArea_Route_8_14:
# 2716 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM6
# 2717 "data/scripts/my_debug.pory"
	additem ITEM_TM_ROCK_POLISH
	goto CompleteArea_Route_8_13

CompleteArea_Route_8_16:
# 2756 "data/scripts/my_debug.pory"
	additem ITEM_WAILMER_PAIL
# 2757 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto CompleteArea_Route_8_10

CompleteArea_Route_8_19:
# 2720 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM3
# 2721 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Route_8_18

CompleteArea_Route_8_22:
# 2724 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM1
# 2725 "data/scripts/my_debug.pory"
	additem ITEM_ORAN_BERRY
	goto CompleteArea_Route_8_21

CompleteArea_Route_8_25:
# 2728 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM5
# 2729 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_8_24


CompleteArea_Shoreslate_City::
# 2763 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Shoreslate_City_2
CompleteArea_Shoreslate_City_1:
# 2777 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Shoreslate_City_5
CompleteArea_Shoreslate_City_4:
	return

CompleteArea_Shoreslate_City_2:
# 2764 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SHORESLATE_ITEM1, CompleteArea_Shoreslate_City_8
CompleteArea_Shoreslate_City_7:
# 2768 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASEMENT_SUPERPOTION, CompleteArea_Shoreslate_City_16
CompleteArea_Shoreslate_City_15:
# 2772 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DEVONCORP_BASEMENT_BALL, CompleteArea_Shoreslate_City_23
	goto CompleteArea_Shoreslate_City_1

CompleteArea_Shoreslate_City_5:
# 2778 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_LUCARIONITE, CompleteArea_Shoreslate_City_12
CompleteArea_Shoreslate_City_10:
# 2785 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_SHORESLATE_POTION, CompleteArea_Shoreslate_City_19
CompleteArea_Shoreslate_City_18:
# 2789 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_GIVEN_CASTELIATOGIRL, CompleteArea_Shoreslate_City_25
	goto CompleteArea_Shoreslate_City_4

CompleteArea_Shoreslate_City_8:
# 2765 "data/scripts/my_debug.pory"
	setflag FLAG_SHORESLATE_ITEM1
# 2766 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Shoreslate_City_7

CompleteArea_Shoreslate_City_11:
# 2779 "data/scripts/my_debug.pory"
	additem ITEM_LUCARIONITE
# 2780 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_LUCARIONITE
# 2781 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q15_SHORESLATE_TOUGHGUY_START, CompleteArea_Shoreslate_City_21
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_12:
# 2778 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Shoreslate_City_11
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_16:
# 2769 "data/scripts/my_debug.pory"
	setflag FLAG_BASEMENT_SUPERPOTION
# 2770 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_POTION
	goto CompleteArea_Shoreslate_City_15

CompleteArea_Shoreslate_City_19:
# 2786 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_SHORESLATE_POTION
# 2787 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_POTION
	goto CompleteArea_Shoreslate_City_18

CompleteArea_Shoreslate_City_21:
# 2782 "data/scripts/my_debug.pory"
	completequest FLAG_Q15_SHORESLATE_TOUGHGUY_COMPLETE
	goto CompleteArea_Shoreslate_City_10

CompleteArea_Shoreslate_City_23:
# 2773 "data/scripts/my_debug.pory"
	setflag FLAG_DEVONCORP_BASEMENT_BALL
# 2774 "data/scripts/my_debug.pory"
	additem ITEM_QUICK_BALL
	goto CompleteArea_Shoreslate_City_1

CompleteArea_Shoreslate_City_25:
# 2790 "data/scripts/my_debug.pory"
	setflag FLAG_GIVEN_CASTELIATOGIRL
# 2791 "data/scripts/my_debug.pory"
	additem ITEM_AIR_BALLOON
# 2792 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q13_SHORESLATE_ICECREAM_START, CompleteArea_Shoreslate_City_27
	goto CompleteArea_Shoreslate_City_4

CompleteArea_Shoreslate_City_27:
# 2793 "data/scripts/my_debug.pory"
	completequest FLAG_Q13_SHORESLATE_ICECREAM_COMPLETE
	goto CompleteArea_Shoreslate_City_4


CompleteArea_Scorched_Desert::
# 2800 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Scorched_Desert_2
CompleteArea_Scorched_Desert_1:
# 2845 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Scorched_Desert_5
CompleteArea_Scorched_Desert_4:
# 2866 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Scorched_Desert_11
CompleteArea_Scorched_Desert_10:
	return

CompleteArea_Scorched_Desert_2:
# 2801 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM1, CompleteArea_Scorched_Desert_8
CompleteArea_Scorched_Desert_7:
# 2805 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM4, CompleteArea_Scorched_Desert_16
CompleteArea_Scorched_Desert_15:
# 2809 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM2, CompleteArea_Scorched_Desert_22
CompleteArea_Scorched_Desert_21:
# 2813 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM3, CompleteArea_Scorched_Desert_32
CompleteArea_Scorched_Desert_31:
# 2817 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM5, CompleteArea_Scorched_Desert_38
CompleteArea_Scorched_Desert_37:
# 2821 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM6, CompleteArea_Scorched_Desert_44
CompleteArea_Scorched_Desert_43:
# 2825 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM7, CompleteArea_Scorched_Desert_47
CompleteArea_Scorched_Desert_46:
# 2829 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM8, CompleteArea_Scorched_Desert_50
CompleteArea_Scorched_Desert_49:
# 2833 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM9, CompleteArea_Scorched_Desert_53
CompleteArea_Scorched_Desert_52:
# 2837 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DESERT_ITEM10, CompleteArea_Scorched_Desert_56
CompleteArea_Scorched_Desert_55:
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_58
	goto CompleteArea_Scorched_Desert_1

CompleteArea_Scorched_Desert_5:
# 2846 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_CAMPER
# 2847 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_CAMPER2
# 2848 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PICNICKER
# 2849 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PICNICKER2
# 2850 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER
# 2851 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_BLACKBELT
# 2852 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PICNICKER3
# 2853 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER2
# 2854 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER3
# 2855 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_KINDLER
# 2856 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_BLACKBELT2
# 2857 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_HIKER4
# 2858 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_PSYCHIC_F
# 2859 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_DESERT_ACETRAINER
	goto_if 0, CompleteArea_Scorched_Desert_13
	goto CompleteArea_Scorched_Desert_4

CompleteArea_Scorched_Desert_8:
# 2802 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM1
# 2803 "data/scripts/my_debug.pory"
	additem ITEM_TM_SANDSTORM
	goto CompleteArea_Scorched_Desert_7

CompleteArea_Scorched_Desert_11:
# 2867 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WEIRDCAVESOLVED, CompleteArea_Scorched_Desert_19
CompleteArea_Scorched_Desert_18:
# 2876 "data/scripts/my_debug.pory"
	setflag FLAG_RECOMMEND_LIBRARY
# 2877 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_RUINS_OPENED
# 2878 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_Q18_DESERT_LIBRARYBOOK_START, CompleteArea_Scorched_Desert_26
CompleteArea_Scorched_Desert_24:
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_35
CompleteArea_Scorched_Desert_34:
# 2884 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM1
# 2885 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM2
# 2886 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM3
# 2887 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM4
# 2888 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM5
# 2889 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM6
# 2890 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM7
# 2891 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_ITEM8
# 2892 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2893 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2894 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2895 "data/scripts/my_debug.pory"
	call GenerateRelic
# 2896 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_COPPER, 2
# 2897 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_SILVER, 2
# 2898 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM, CompleteArea_Scorched_Desert_41
CompleteArea_Scorched_Desert_40:
# 2902 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Scorched_Desert_10

CompleteArea_Scorched_Desert_13:
# 2860 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_DESERT_ACETRAINER
# 2861 "data/scripts/my_debug.pory"
	additem ITEM_SAFETY_GOGGLES
# 2862 "data/scripts/my_debug.pory"
	setvar VAR_DESERT_TRAINERS, 14
# 2863 "data/scripts/my_debug.pory"
	addbp 20
	goto CompleteArea_Scorched_Desert_4

CompleteArea_Scorched_Desert_16:
# 2806 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM4
# 2807 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Scorched_Desert_15

CompleteArea_Scorched_Desert_19:
# 2868 "data/scripts/my_debug.pory"
	additem ITEM_STONE_SPHERE
# 2869 "data/scripts/my_debug.pory"
	setflag FLAG_WEIRDCAVE_STONE
# 2870 "data/scripts/my_debug.pory"
	setvar VAR_WEIRDCAVE_PART2, 3
# 2871 "data/scripts/my_debug.pory"
	setflag FLAG_WEIRDCAVESOLVED
# 2872 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q17_DESERT_WEIRDCAVE_START, CompleteArea_Scorched_Desert_29
	goto CompleteArea_Scorched_Desert_18

CompleteArea_Scorched_Desert_22:
# 2810 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM2
# 2811 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_21

CompleteArea_Scorched_Desert_25:
# 2879 "data/scripts/my_debug.pory"
	startquest FLAG_Q18_DESERT_LIBRARYBOOK_START
	goto CompleteArea_Scorched_Desert_24

CompleteArea_Scorched_Desert_26:
	checkitem ITEM_HISTORY_BOOK
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Scorched_Desert_25
	goto CompleteArea_Scorched_Desert_24

CompleteArea_Scorched_Desert_29:
# 2873 "data/scripts/my_debug.pory"
	completequest FLAG_Q17_DESERT_WEIRDCAVE_COMPLETE
	goto CompleteArea_Scorched_Desert_18

CompleteArea_Scorched_Desert_32:
# 2814 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM3
# 2815 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Scorched_Desert_31

CompleteArea_Scorched_Desert_35:
# 2882 "data/scripts/my_debug.pory"
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Scorched_Desert_34

CompleteArea_Scorched_Desert_38:
# 2818 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM5
# 2819 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_37

CompleteArea_Scorched_Desert_41:
# 2899 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_UNDERGROUNDRUINS_TM_SANDSTORM
# 2900 "data/scripts/my_debug.pory"
	additem ITEM_TM_ROCK_SLIDE
	goto CompleteArea_Scorched_Desert_40

CompleteArea_Scorched_Desert_44:
# 2822 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM6
# 2823 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Scorched_Desert_43

CompleteArea_Scorched_Desert_47:
# 2826 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM7
# 2827 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Scorched_Desert_46

CompleteArea_Scorched_Desert_50:
# 2830 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM8
# 2831 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Scorched_Desert_49

CompleteArea_Scorched_Desert_53:
# 2834 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM9
# 2835 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Scorched_Desert_52

CompleteArea_Scorched_Desert_56:
# 2838 "data/scripts/my_debug.pory"
	setflag FLAG_DESERT_ITEM10
# 2839 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Scorched_Desert_55

CompleteArea_Scorched_Desert_58:
# 2842 "data/scripts/my_debug.pory"
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Scorched_Desert_1


CompleteArea_Route_7::
# 2907 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_7_2
CompleteArea_Route_7_1:
# 2925 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_7_5
CompleteArea_Route_7_4:
# 2936 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_7_11
CompleteArea_Route_7_10:
	return

CompleteArea_Route_7_2:
# 2908 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM4, CompleteArea_Route_7_8
CompleteArea_Route_7_7:
# 2912 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM1, CompleteArea_Route_7_14
CompleteArea_Route_7_13:
# 2916 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM3, CompleteArea_Route_7_19
CompleteArea_Route_7_18:
# 2920 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM2, CompleteArea_Route_7_23
	goto CompleteArea_Route_7_1

CompleteArea_Route_7_5:
# 2926 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_CAMPER
# 2927 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_PICNICKER
# 2928 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_BIRDKEEPER
# 2929 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_BLACKBELT
# 2930 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_PICNICKER2
# 2931 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_FISHERMAN
# 2932 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_HIKER
# 2933 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_PARASOLLADY
# 2934 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R7_NINJABOY
	goto CompleteArea_Route_7_4

CompleteArea_Route_7_8:
# 2909 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM4
# 2910 "data/scripts/my_debug.pory"
	additem ITEM_NET_BALL
	goto CompleteArea_Route_7_7

CompleteArea_Route_7_11:
	checkitem ITEM_SAMPLE_BOX
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Route_7_16
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_14:
# 2913 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM1
# 2914 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Route_7_13

CompleteArea_Route_7_16:
# 2938 "data/scripts/my_debug.pory"
	additem ITEM_SAMPLE_BOX
# 2939 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_Q19_MUDSCIENTIST_START, CompleteArea_Route_7_21
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_19:
# 2917 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM3
# 2918 "data/scripts/my_debug.pory"
	additem ITEM_RARE_BONE
	goto CompleteArea_Route_7_18

CompleteArea_Route_7_21:
# 2940 "data/scripts/my_debug.pory"
	startquest FLAG_Q19_MUDSCIENTIST_START
	goto CompleteArea_Route_7_10

CompleteArea_Route_7_23:
# 2921 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM2
# 2922 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_7_1


CompleteArea_Marigorge_Town::
# 2947 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Marigorge_Town_2
CompleteArea_Marigorge_Town_1:
	return

CompleteArea_Marigorge_Town_2:
# 2948 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_MARIGORGE_ITEM2, CompleteArea_Marigorge_Town_4
	goto CompleteArea_Marigorge_Town_1

CompleteArea_Marigorge_Town_4:
# 2949 "data/scripts/my_debug.pory"
	setflag FLAG_MARIGORGE_ITEM2
# 2950 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Marigorge_Town_1


CompleteArea_Kaolisle_City::
	checkitem ITEM_ESCAPE_ROPE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Kaolisle_City_2
CompleteArea_Kaolisle_City_1:
# 2959 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Kaolisle_City_5
CompleteArea_Kaolisle_City_4:
# 3054 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Kaolisle_City_8
CompleteArea_Kaolisle_City_7:
# 3066 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Kaolisle_City_14
CompleteArea_Kaolisle_City_13:
	return

CompleteArea_Kaolisle_City_2:
# 2957 "data/scripts/my_debug.pory"
	additem ITEM_ESCAPE_ROPE
	goto CompleteArea_Kaolisle_City_1

CompleteArea_Kaolisle_City_5:
# 2960 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM7, CompleteArea_Kaolisle_City_11
CompleteArea_Kaolisle_City_10:
# 2964 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM9, CompleteArea_Kaolisle_City_17
CompleteArea_Kaolisle_City_16:
# 2968 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM8, CompleteArea_Kaolisle_City_23
CompleteArea_Kaolisle_City_22:
# 2972 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM1, CompleteArea_Kaolisle_City_31
CompleteArea_Kaolisle_City_30:
# 2976 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM4, CompleteArea_Kaolisle_City_37
CompleteArea_Kaolisle_City_36:
# 2980 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM5, CompleteArea_Kaolisle_City_45
CompleteArea_Kaolisle_City_44:
# 2984 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM6, CompleteArea_Kaolisle_City_51
CompleteArea_Kaolisle_City_50:
# 2988 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM3, CompleteArea_Kaolisle_City_57
CompleteArea_Kaolisle_City_56:
# 2992 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM2, CompleteArea_Kaolisle_City_63
CompleteArea_Kaolisle_City_62:
# 2997 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM3, CompleteArea_Kaolisle_City_71
CompleteArea_Kaolisle_City_70:
# 3001 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM4, CompleteArea_Kaolisle_City_79
CompleteArea_Kaolisle_City_78:
# 3005 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM1, CompleteArea_Kaolisle_City_84
CompleteArea_Kaolisle_City_83:
# 3009 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM6, CompleteArea_Kaolisle_City_89
CompleteArea_Kaolisle_City_88:
# 3013 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM8, CompleteArea_Kaolisle_City_92
CompleteArea_Kaolisle_City_91:
# 3017 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM10, CompleteArea_Kaolisle_City_95
CompleteArea_Kaolisle_City_94:
# 3021 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM9, CompleteArea_Kaolisle_City_98
CompleteArea_Kaolisle_City_97:
# 3025 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM11, CompleteArea_Kaolisle_City_101
CompleteArea_Kaolisle_City_100:
# 3029 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM12, CompleteArea_Kaolisle_City_104
CompleteArea_Kaolisle_City_103:
# 3033 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM13, CompleteArea_Kaolisle_City_107
CompleteArea_Kaolisle_City_106:
# 3037 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM14, CompleteArea_Kaolisle_City_110
CompleteArea_Kaolisle_City_109:
# 3041 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM2, CompleteArea_Kaolisle_City_113
CompleteArea_Kaolisle_City_112:
# 3045 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM5, CompleteArea_Kaolisle_City_116
CompleteArea_Kaolisle_City_115:
# 3049 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLMINES_ITEM7, CompleteArea_Kaolisle_City_118
	goto CompleteArea_Kaolisle_City_4

CompleteArea_Kaolisle_City_8:
# 3055 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_PICNICKER
# 3056 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_BLACKBELT
# 3057 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_CAMPER
# 3058 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER
# 3059 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER2
# 3060 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER3
# 3061 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_CAMPER2
# 3062 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_PICNICKER2
# 3063 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_BLACKBELT2
# 3064 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_KM_HIKER4
	goto CompleteArea_Kaolisle_City_7

CompleteArea_Kaolisle_City_11:
# 2961 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM7
# 2962 "data/scripts/my_debug.pory"
	additem ITEM_QUICK_BALL
	goto CompleteArea_Kaolisle_City_10

CompleteArea_Kaolisle_City_14:
# 3067 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, CompleteArea_Kaolisle_City_20
CompleteArea_Kaolisle_City_19:
# 3076 "data/scripts/my_debug.pory"
	setflag FLAG_REVEAL_PEARLSTRING
# 3077 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OLDMAN_PEARLSTRING, CompleteArea_Kaolisle_City_26
CompleteArea_Kaolisle_City_25:
# 3081 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_HM_ROCK_SMASH, CompleteArea_Kaolisle_City_34
CompleteArea_Kaolisle_City_33:
# 3090 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_PIANOREWARD, CompleteArea_Kaolisle_City_40
CompleteArea_Kaolisle_City_39:
# 3094 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_BEACHBALL, CompleteArea_Kaolisle_City_48
CompleteArea_Kaolisle_City_47:
# 3098 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HOTEL_FLYINGGEM, CompleteArea_Kaolisle_City_54
CompleteArea_Kaolisle_City_53:
# 3103 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BUFFET_COMPLETE, CompleteArea_Kaolisle_City_60
CompleteArea_Kaolisle_City_59:
# 3111 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_TROPICALSTONE, CompleteArea_Kaolisle_City_66
CompleteArea_Kaolisle_City_65:
# 3118 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_ECHOEDVOICE, CompleteArea_Kaolisle_City_74
CompleteArea_Kaolisle_City_73:
# 3122 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_ROSTEBERRIES, CompleteArea_Kaolisle_City_81
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_17:
# 2965 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM9
# 2966 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Kaolisle_City_16

CompleteArea_Kaolisle_City_20:
# 3068 "data/scripts/my_debug.pory"
	setflag FLAG_QUEST_FOR_GOOD_ROD
# 3069 "data/scripts/my_debug.pory"
	removeitem ITEM_LURE
# 3070 "data/scripts/my_debug.pory"
	additem ITEM_GOOD_ROD
# 3071 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
# 3072 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q22_KAOLISLE_FISHERMAN_START, CompleteArea_Kaolisle_City_28
	goto CompleteArea_Kaolisle_City_19

CompleteArea_Kaolisle_City_23:
# 2969 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM8
# 2970 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Kaolisle_City_22

CompleteArea_Kaolisle_City_26:
# 3078 "data/scripts/my_debug.pory"
	setflag FLAG_OLDMAN_PEARLSTRING
# 3079 "data/scripts/my_debug.pory"
	additem ITEM_PEARL_STRING
	goto CompleteArea_Kaolisle_City_25

CompleteArea_Kaolisle_City_28:
# 3073 "data/scripts/my_debug.pory"
	completequest FLAG_Q22_KAOLISLE_FISHERMAN_COMPLETE
	goto CompleteArea_Kaolisle_City_19

CompleteArea_Kaolisle_City_31:
# 2973 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM1
# 2974 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Kaolisle_City_30

CompleteArea_Kaolisle_City_34:
# 3082 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM2
# 3083 "data/scripts/my_debug.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 3084 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 3085 "data/scripts/my_debug.pory"
	removeitem ITEM_LOST_MEMENTO
# 3086 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q23_KAOLISLE_OLDPENDANT_START, CompleteArea_Kaolisle_City_42
	goto CompleteArea_Kaolisle_City_33

CompleteArea_Kaolisle_City_37:
# 2977 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM4
# 2978 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_36

CompleteArea_Kaolisle_City_40:
# 3091 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE, 2
# 3092 "data/scripts/my_debug.pory"
	setflag FLAG_PIANOREWARD
	goto CompleteArea_Kaolisle_City_39

CompleteArea_Kaolisle_City_42:
# 3087 "data/scripts/my_debug.pory"
	special ShowJournalPopupRemove
	goto CompleteArea_Kaolisle_City_33

CompleteArea_Kaolisle_City_45:
# 2981 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM5
# 2982 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_44

CompleteArea_Kaolisle_City_48:
# 3095 "data/scripts/my_debug.pory"
	additem ITEM_DIVE_BALL
# 3096 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_BEACHBALL
	goto CompleteArea_Kaolisle_City_47

CompleteArea_Kaolisle_City_51:
# 2985 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM6
# 2986 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Kaolisle_City_50

CompleteArea_Kaolisle_City_54:
# 3099 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_HOTEL_BIRDKEEPER
# 3100 "data/scripts/my_debug.pory"
	additem ITEM_FLYING_GEM, 1
# 3101 "data/scripts/my_debug.pory"
	setflag FLAG_HOTEL_FLYINGGEM
	goto CompleteArea_Kaolisle_City_53

CompleteArea_Kaolisle_City_57:
# 2989 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM3
# 2990 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_56

CompleteArea_Kaolisle_City_60:
# 3104 "data/scripts/my_debug.pory"
	additem ITEM_LEFTOVERS
# 3105 "data/scripts/my_debug.pory"
	addbp 30
# 3106 "data/scripts/my_debug.pory"
	setflag FLAG_BUFFET_COMPLETE
# 3107 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q24_BATTLE_BUFFET_START, CompleteArea_Kaolisle_City_68
	goto CompleteArea_Kaolisle_City_59

CompleteArea_Kaolisle_City_63:
# 2993 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM2
# 2994 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Kaolisle_City_62

CompleteArea_Kaolisle_City_66:
# 3112 "data/scripts/my_debug.pory"
	additem ITEM_TROPICAL_STONE
# 3113 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_TROPICALSTONE
# 3114 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q25_HOTEL_TROPICALSTONE_START, CompleteArea_Kaolisle_City_76
	goto CompleteArea_Kaolisle_City_65

CompleteArea_Kaolisle_City_68:
# 3108 "data/scripts/my_debug.pory"
	completequest FLAG_Q24_BATTLE_BUFFET_COMPLETE
	goto CompleteArea_Kaolisle_City_59

CompleteArea_Kaolisle_City_71:
# 2998 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM3
# 2999 "data/scripts/my_debug.pory"
	additem ITEM_DUSK_BALL
	goto CompleteArea_Kaolisle_City_70

CompleteArea_Kaolisle_City_74:
# 3119 "data/scripts/my_debug.pory"
	additem ITEM_TM_ECHOED_VOICE
# 3120 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ECHOEDVOICE
	goto CompleteArea_Kaolisle_City_73

CompleteArea_Kaolisle_City_76:
# 3115 "data/scripts/my_debug.pory"
	completequest FLAG_Q25_HOTEL_TROPICALSTONE_COMPLETE
	goto CompleteArea_Kaolisle_City_65

CompleteArea_Kaolisle_City_79:
# 3002 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM4
# 3003 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Kaolisle_City_78

CompleteArea_Kaolisle_City_81:
# 3123 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_HOTEL_KID1
# 3124 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_HOTEL_KID2
# 3125 "data/scripts/my_debug.pory"
	additem ITEM_ROSTE_BERRY, 2
# 3126 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ROSTEBERRIES
# 3127 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q27_HOTEL_WILDKIDS_START, CompleteArea_Kaolisle_City_86
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_84:
# 3006 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM1
# 3007 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Kaolisle_City_83

CompleteArea_Kaolisle_City_86:
# 3128 "data/scripts/my_debug.pory"
	completequest FLAG_Q27_HOTEL_WILDKIDS_COMPLETE
	goto CompleteArea_Kaolisle_City_13

CompleteArea_Kaolisle_City_89:
# 3010 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM6
# 3011 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Kaolisle_City_88

CompleteArea_Kaolisle_City_92:
# 3014 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM8
# 3015 "data/scripts/my_debug.pory"
	additem ITEM_PROTEIN
	goto CompleteArea_Kaolisle_City_91

CompleteArea_Kaolisle_City_95:
# 3018 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM10
# 3019 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Kaolisle_City_94

CompleteArea_Kaolisle_City_98:
# 3022 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM9
# 3023 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Kaolisle_City_97

CompleteArea_Kaolisle_City_101:
# 3026 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM11
# 3027 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Kaolisle_City_100

CompleteArea_Kaolisle_City_104:
# 3030 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM12
# 3031 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Kaolisle_City_103

CompleteArea_Kaolisle_City_107:
# 3034 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM13
# 3035 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Kaolisle_City_106

CompleteArea_Kaolisle_City_110:
# 3038 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM14
# 3039 "data/scripts/my_debug.pory"
	additem ITEM_TM_DIG
	goto CompleteArea_Kaolisle_City_109

CompleteArea_Kaolisle_City_113:
# 3042 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM2
# 3043 "data/scripts/my_debug.pory"
	additem ITEM_LOST_MEMENTO
	goto CompleteArea_Kaolisle_City_112

CompleteArea_Kaolisle_City_116:
# 3046 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM5
# 3047 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Kaolisle_City_115

CompleteArea_Kaolisle_City_118:
# 3050 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLMINES_ITEM7
# 3051 "data/scripts/my_debug.pory"
	additem ITEM_IRON
	goto CompleteArea_Kaolisle_City_4


CompleteArea_Rockliffe_Town::
# 3135 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Rockliffe_Town_2
CompleteArea_Rockliffe_Town_1:
# 3145 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Rockliffe_Town_5
CompleteArea_Rockliffe_Town_4:
	return

CompleteArea_Rockliffe_Town_2:
# 3136 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROCKLIFFE_ITEM2, CompleteArea_Rockliffe_Town_8
CompleteArea_Rockliffe_Town_7:
# 3140 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROCKLIFFE_ITEM1, CompleteArea_Rockliffe_Town_15
	goto CompleteArea_Rockliffe_Town_1

CompleteArea_Rockliffe_Town_5:
# 3146 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_BEEDRILLITE, CompleteArea_Rockliffe_Town_12
CompleteArea_Rockliffe_Town_10:
# 3153 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_METAL_COAT, CompleteArea_Rockliffe_Town_18
CompleteArea_Rockliffe_Town_17:
# 3160 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_TM_FLING, CompleteArea_Rockliffe_Town_22
	goto CompleteArea_Rockliffe_Town_4

CompleteArea_Rockliffe_Town_8:
# 3137 "data/scripts/my_debug.pory"
	setflag FLAG_ROCKLIFFE_ITEM2
# 3138 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Rockliffe_Town_7

CompleteArea_Rockliffe_Town_11:
# 3147 "data/scripts/my_debug.pory"
	additem ITEM_BEEDRILLITE
# 3148 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_BEEDRILLITE
# 3149 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, CompleteArea_Rockliffe_Town_20
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_12:
# 3146 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, CompleteArea_Rockliffe_Town_11
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_15:
# 3141 "data/scripts/my_debug.pory"
	setflag FLAG_ROCKLIFFE_ITEM1
# 3142 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_POTION
	goto CompleteArea_Rockliffe_Town_1

CompleteArea_Rockliffe_Town_18:
# 3154 "data/scripts/my_debug.pory"
	additem ITEM_METAL_COAT
# 3155 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_METAL_COAT
# 3156 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q29_ROCKLIFFE_HEAVYMON_START, CompleteArea_Rockliffe_Town_24
	goto CompleteArea_Rockliffe_Town_17

CompleteArea_Rockliffe_Town_20:
# 3150 "data/scripts/my_debug.pory"
	completequest FLAG_Q30_ROCKLIFFE_BEEDRILLS_COMPLETE
	goto CompleteArea_Rockliffe_Town_10

CompleteArea_Rockliffe_Town_22:
# 3161 "data/scripts/my_debug.pory"
	additem ITEM_TM_FLING
# 3162 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_TM_FLING
	goto CompleteArea_Rockliffe_Town_4

CompleteArea_Rockliffe_Town_24:
# 3157 "data/scripts/my_debug.pory"
	completequest FLAG_Q29_ROCKLIFFE_HEAVYMON_COMPLETE
	goto CompleteArea_Rockliffe_Town_17


CompleteArea_Route_11::
# 3168 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_11_2
CompleteArea_Route_11_1:
# 3202 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_11_5
CompleteArea_Route_11_4:
# 3223 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_11_11
CompleteArea_Route_11_10:
	return

CompleteArea_Route_11_2:
# 3169 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_SUPER_REPEL, CompleteArea_Route_11_8
CompleteArea_Route_11_7:
# 3173 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_ZINC, CompleteArea_Route_11_16
CompleteArea_Route_11_15:
# 3177 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_HYPER_POTION, CompleteArea_Route_11_21
CompleteArea_Route_11_20:
# 3181 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE11_GREATBALL, CompleteArea_Route_11_24
CompleteArea_Route_11_23:
# 3185 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE11_HONEY, CompleteArea_Route_11_27
CompleteArea_Route_11_26:
# 3189 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE11_RARECANDY, CompleteArea_Route_11_30
CompleteArea_Route_11_29:
# 3193 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_ELIXIR, CompleteArea_Route_11_33
CompleteArea_Route_11_32:
# 3197 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3198 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3199 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3200 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
	goto CompleteArea_Route_11_1

CompleteArea_Route_11_5:
# 3203 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_LASS
# 3204 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_BIRDKEEPER
# 3205 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_BUGCATCHER
# 3206 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_NINJABOY
# 3207 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_POKEMANIAC
# 3208 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_TRIATHLETE_F
# 3209 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_HIKER
# 3210 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_NINJABOY_2
# 3211 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_NINJABOY_3
# 3212 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_CYCLER_M
# 3213 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_BLACKBELT
# 3214 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_EXPERT
# 3215 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_PSYCHIC_F
# 3216 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R11_ACETRAINER_F
	goto_if 0, CompleteArea_Route_11_13
	goto CompleteArea_Route_11_4

CompleteArea_Route_11_8:
# 3170 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_SUPER_REPEL
# 3171 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Route_11_7

CompleteArea_Route_11_11:
# 3224 "data/scripts/my_debug.pory"
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
# 3225 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE_11_TORMENT, CompleteArea_Route_11_18
	goto CompleteArea_Route_11_10

CompleteArea_Route_11_13:
# 3217 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R11_ACETRAINER_F
# 3218 "data/scripts/my_debug.pory"
	additem ITEM_LUCKY_EGG
# 3219 "data/scripts/my_debug.pory"
	setvar VAR_R11_TRAINERS, 12
# 3220 "data/scripts/my_debug.pory"
	addbp 25
	goto CompleteArea_Route_11_4

CompleteArea_Route_11_16:
# 3174 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_ZINC
# 3175 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Route_11_15

CompleteArea_Route_11_18:
# 3226 "data/scripts/my_debug.pory"
	additem ITEM_TM_TORMENT
# 3227 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_TORMENT
	goto CompleteArea_Route_11_10

CompleteArea_Route_11_21:
# 3178 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_HYPER_POTION
# 3179 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_11_20

CompleteArea_Route_11_24:
# 3182 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE11_GREATBALL
# 3183 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Route_11_23

CompleteArea_Route_11_27:
# 3186 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE11_HONEY
# 3187 "data/scripts/my_debug.pory"
	additem ITEM_HONEY
	goto CompleteArea_Route_11_26

CompleteArea_Route_11_30:
# 3190 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE11_RARECANDY
# 3191 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Route_11_29

CompleteArea_Route_11_33:
# 3194 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE_11_ELIXIR
# 3195 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Route_11_32


CompleteArea_Route_12::
# 3233 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_12_2
CompleteArea_Route_12_1:
# 3263 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_12_5
CompleteArea_Route_12_4:
# 3280 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_12_11
CompleteArea_Route_12_10:
	return

CompleteArea_Route_12_2:
# 3234 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_ITEM3, CompleteArea_Route_12_8
CompleteArea_Route_12_7:
# 3238 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_ITEM2, CompleteArea_Route_12_14
CompleteArea_Route_12_13:
# 3242 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_ITEM1, CompleteArea_Route_12_20
CompleteArea_Route_12_19:
# 3246 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM1, CompleteArea_Route_12_26
CompleteArea_Route_12_25:
# 3250 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM2, CompleteArea_Route_12_34
CompleteArea_Route_12_33:
# 3254 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM3, CompleteArea_Route_12_39
CompleteArea_Route_12_38:
# 3258 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_ITEM4, CompleteArea_Route_12_41
	goto CompleteArea_Route_12_1

CompleteArea_Route_12_5:
# 3264 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_F
# 3265 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_M
# 3266 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_F2
# 3267 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_M2
# 3268 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_M3
# 3269 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_TRIATHLETE_F3
# 3270 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_PSYCHIC_M
# 3271 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_HIKER
# 3272 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_LASS
# 3273 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_BUGMANIAC
# 3274 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R12_NINJABOY
# 3275 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_BLACKBELT
# 3276 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_BATTLEGIRL
# 3277 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_CAMPER
# 3278 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_FC_HIKER
	goto CompleteArea_Route_12_4

CompleteArea_Route_12_8:
# 3235 "data/scripts/my_debug.pory"
	setflag FLAG_R12_ITEM3
# 3236 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_12_7

CompleteArea_Route_12_11:
# 3281 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_HM_STRENGTH, CompleteArea_Route_12_17
CompleteArea_Route_12_16:
# 3285 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FC_LOOTEDROCK, CompleteArea_Route_12_23
CompleteArea_Route_12_22:
# 3297 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R12_XSPEED, CompleteArea_Route_12_28
	goto CompleteArea_Route_12_10

CompleteArea_Route_12_14:
# 3239 "data/scripts/my_debug.pory"
	setflag FLAG_R12_ITEM2
# 3240 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_12_13

CompleteArea_Route_12_17:
# 3282 "data/scripts/my_debug.pory"
	giveitem ITEM_HM_STRENGTH
# 3283 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
	goto CompleteArea_Route_12_16

CompleteArea_Route_12_20:
# 3243 "data/scripts/my_debug.pory"
	setflag FLAG_R12_ITEM1
# 3244 "data/scripts/my_debug.pory"
	additem ITEM_TM42
	goto CompleteArea_Route_12_19

CompleteArea_Route_12_23:
# 3286 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_STONE_SPHERE_FC
	checkitem ITEM_STONE_SPHERE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Route_12_31
CompleteArea_Route_12_30:
# 3290 "data/scripts/my_debug.pory"
	setflag FLAG_FC_LOOTEDROCK
# 3291 "data/scripts/my_debug.pory"
	additem ITEM_STEEL_SPHERE
# 3292 "data/scripts/my_debug.pory"
	setvar VAR_FCCAVE, 3
# 3293 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q31_ROUTE12_WEIRDCAVE_START, CompleteArea_Route_12_36
	goto CompleteArea_Route_12_22

CompleteArea_Route_12_26:
# 3247 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM1
# 3248 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_12_25

CompleteArea_Route_12_28:
# 3298 "data/scripts/my_debug.pory"
	additem ITEM_X_SPEED
# 3299 "data/scripts/my_debug.pory"
	setflag FLAG_R12_XSPEED
	goto CompleteArea_Route_12_10

CompleteArea_Route_12_31:
# 3288 "data/scripts/my_debug.pory"
	additem ITEM_STONE_SPHERE
	goto CompleteArea_Route_12_30

CompleteArea_Route_12_34:
# 3251 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM2
# 3252 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_12_33

CompleteArea_Route_12_36:
# 3294 "data/scripts/my_debug.pory"
	completequest FLAG_Q31_ROUTE12_WEIRDCAVE_COMPLETE
	goto CompleteArea_Route_12_22

CompleteArea_Route_12_39:
# 3255 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM3
# 3256 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_12_38

CompleteArea_Route_12_41:
# 3259 "data/scripts/my_debug.pory"
	setflag FLAG_FC_ITEM4
# 3260 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Route_12_1


CompleteArea_Sandstone_City::
# 3305 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Sandstone_City_2
CompleteArea_Sandstone_City_1:
# 3315 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Sandstone_City_5
CompleteArea_Sandstone_City_4:
	return

CompleteArea_Sandstone_City_2:
# 3306 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_HIDDENITEM_1, CompleteArea_Sandstone_City_8
CompleteArea_Sandstone_City_7:
# 3310 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_HIDDENITEM_2, CompleteArea_Sandstone_City_13
	goto CompleteArea_Sandstone_City_1

CompleteArea_Sandstone_City_5:
# 3316 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_BALLOON, CompleteArea_Sandstone_City_11
CompleteArea_Sandstone_City_10:
# 3320 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_ULTRABALL, CompleteArea_Sandstone_City_16
CompleteArea_Sandstone_City_15:
# 3324 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_LAVACOOKIE, CompleteArea_Sandstone_City_19
CompleteArea_Sandstone_City_18:
# 3328 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SANDSTONE_DUSKBALLS, CompleteArea_Sandstone_City_22
CompleteArea_Sandstone_City_21:
# 3332 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_SANDSTONE_BERRY, CompleteArea_Sandstone_City_24
	goto CompleteArea_Sandstone_City_4

CompleteArea_Sandstone_City_8:
# 3307 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_HIDDENITEM_1
# 3308 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_REPEL
	goto CompleteArea_Sandstone_City_7

CompleteArea_Sandstone_City_11:
# 3317 "data/scripts/my_debug.pory"
	additem ITEM_AIR_BALLOON
# 3318 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_BALLOON
	goto CompleteArea_Sandstone_City_10

CompleteArea_Sandstone_City_13:
# 3311 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_HIDDENITEM_2
# 3312 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Sandstone_City_1

CompleteArea_Sandstone_City_16:
# 3321 "data/scripts/my_debug.pory"
	additem ITEM_ULTRA_BALL
# 3322 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_ULTRABALL
	goto CompleteArea_Sandstone_City_15

CompleteArea_Sandstone_City_19:
# 3325 "data/scripts/my_debug.pory"
	additem ITEM_LAVA_COOKIE
# 3326 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_LAVACOOKIE
	goto CompleteArea_Sandstone_City_18

CompleteArea_Sandstone_City_22:
# 3329 "data/scripts/my_debug.pory"
	additem ITEM_DUSK_BALL, 2
# 3330 "data/scripts/my_debug.pory"
	setflag FLAG_SANDSTONE_DUSKBALLS
	goto CompleteArea_Sandstone_City_21

CompleteArea_Sandstone_City_24:
# 3333 "data/scripts/my_debug.pory"
	additem ITEM_CHOPLE_BERRY
# 3334 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_SANDSTONE_BERRY
	goto CompleteArea_Sandstone_City_4


CompleteArea_Route_13::
# 3340 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_13_2
CompleteArea_Route_13_1:
	return

CompleteArea_Route_13_2:
# 3341 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R13_ITEM1, CompleteArea_Route_13_4
	goto CompleteArea_Route_13_1

CompleteArea_Route_13_4:
# 3342 "data/scripts/my_debug.pory"
	setflag FLAG_R13_ITEM1
# 3343 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_13_1


CompleteArea_Adamant_Tower::
# 3349 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Adamant_Tower_2
CompleteArea_Adamant_Tower_1:
# 3363 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Adamant_Tower_5
CompleteArea_Adamant_Tower_4:
	return

CompleteArea_Adamant_Tower_2:
# 3350 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AT_ITEM1, CompleteArea_Adamant_Tower_8
CompleteArea_Adamant_Tower_7:
# 3354 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AT_ITEM2, CompleteArea_Adamant_Tower_13
CompleteArea_Adamant_Tower_12:
# 3358 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AT_ITEM3, CompleteArea_Adamant_Tower_15
	goto CompleteArea_Adamant_Tower_1

CompleteArea_Adamant_Tower_5:
# 3364 "data/scripts/my_debug.pory"
	setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
# 3365 "data/scripts/my_debug.pory"
	additem ITEM_ABILITY_CAPSULE
# 3366 "data/scripts/my_debug.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge CompleteArea_Adamant_Tower_10
	goto CompleteArea_Adamant_Tower_4

CompleteArea_Adamant_Tower_8:
# 3351 "data/scripts/my_debug.pory"
	setflag FLAG_AT_ITEM1
# 3352 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Adamant_Tower_7

CompleteArea_Adamant_Tower_10:
# 3367 "data/scripts/my_debug.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto CompleteArea_Adamant_Tower_4

CompleteArea_Adamant_Tower_13:
# 3355 "data/scripts/my_debug.pory"
	setflag FLAG_AT_ITEM2
# 3356 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Adamant_Tower_12

CompleteArea_Adamant_Tower_15:
# 3359 "data/scripts/my_debug.pory"
	setflag FLAG_AT_ITEM3
# 3360 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Adamant_Tower_1


CompleteArea_Route_14::
# 3373 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_14_2
CompleteArea_Route_14_1:
# 3391 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_14_5
CompleteArea_Route_14_4:
	return

CompleteArea_Route_14_2:
# 3374 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM1, CompleteArea_Route_14_8
CompleteArea_Route_14_7:
# 3378 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM2, CompleteArea_Route_14_11
CompleteArea_Route_14_10:
# 3382 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM3, CompleteArea_Route_14_14
CompleteArea_Route_14_13:
# 3386 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM4, CompleteArea_Route_14_16
	goto CompleteArea_Route_14_1

CompleteArea_Route_14_5:
# 3392 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_RUNNING_F
# 3393 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_HIKER
# 3394 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_PARASOLLADY
# 3395 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_FISHER
# 3396 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_PARASOLLADY2
# 3397 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_NINJABOY
# 3398 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_ROCKER
# 3399 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R14_MANIAC
	goto CompleteArea_Route_14_4

CompleteArea_Route_14_8:
# 3375 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM1
# 3376 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_14_7

CompleteArea_Route_14_11:
# 3379 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM2
# 3380 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_14_10

CompleteArea_Route_14_14:
# 3383 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM3
# 3384 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Route_14_13

CompleteArea_Route_14_16:
# 3387 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM4
# 3388 "data/scripts/my_debug.pory"
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_14_1


CompleteArea_Route_15::
# 3404 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_15_2
CompleteArea_Route_15_1:
# 3444 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_15_5
CompleteArea_Route_15_4:
	return

CompleteArea_Route_15_2:
# 3405 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3406 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3407 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3408 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3409 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3410 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM7, CompleteArea_Route_15_8
CompleteArea_Route_15_7:
# 3414 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM6, CompleteArea_Route_15_16
CompleteArea_Route_15_15:
# 3418 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BERRYFIELDS_ITEM, CompleteArea_Route_15_21
CompleteArea_Route_15_20:
# 3422 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM5, CompleteArea_Route_15_24
CompleteArea_Route_15_23:
# 3426 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM4, CompleteArea_Route_15_27
CompleteArea_Route_15_26:
# 3430 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM3, CompleteArea_Route_15_30
CompleteArea_Route_15_29:
# 3434 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM2, CompleteArea_Route_15_33
CompleteArea_Route_15_32:
# 3438 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE15_ITEM1, CompleteArea_Route_15_35
	goto CompleteArea_Route_15_1

CompleteArea_Route_15_5:
# 3445 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BIRDKEEPER
# 3446 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_RANGERF
# 3447 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_RANGERM
# 3448 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_GENTLEMAN
# 3449 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_NINJABOY1
# 3450 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_NINJABOY2
# 3451 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BUGCATCHER
# 3452 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BUGCATCHER2
# 3453 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_BEAUTY
# 3454 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_FISHER
# 3455 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_COOLTRAINER
# 3456 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_LASS
# 3457 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_SCIENTIST
# 3458 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_AROMALADY
# 3459 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_NINJABOY3
# 3460 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_F
	goto_if 0, CompleteArea_Route_15_12
CompleteArea_Route_15_10:
# 3469 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_7
# 3470 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3471 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_2
# 3472 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3473 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_4
# 3474 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3475 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_5
# 3476 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3477 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_3
# 3478 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3479 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_POMEG_6
# 3480 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3481 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_7
# 3482 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3483 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_2
# 3484 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3485 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_4
# 3486 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3487 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_5
# 3488 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3489 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_3
# 3490 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3491 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_GREPA_6
# 3492 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3493 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_7
# 3494 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3495 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_2
# 3496 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3497 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_4
# 3498 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3499 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_5
# 3500 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3501 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_3
# 3502 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3503 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_QUALOT_6
# 3504 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_15_4

CompleteArea_Route_15_8:
# 3411 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM7
# 3412 "data/scripts/my_debug.pory"
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_15_7

CompleteArea_Route_15_11:
# 3461 "data/scripts/my_debug.pory"
	additem ITEM_ROCKY_HELMET
# 3462 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_ACETRAINER_F
# 3463 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R15_ACETRAINER_M
# 3464 "data/scripts/my_debug.pory"
	addbp 25
# 3465 "data/scripts/my_debug.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 7
	goto_if_lt CompleteArea_Route_15_18
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_12:
# 3460 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R15_ACETRAINER_M
	goto_if 0, CompleteArea_Route_15_11
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_16:
# 3415 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM6
# 3416 "data/scripts/my_debug.pory"
	additem ITEM_TINY_MUSHROOM
	goto CompleteArea_Route_15_15

CompleteArea_Route_15_18:
# 3466 "data/scripts/my_debug.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 7
	goto CompleteArea_Route_15_10

CompleteArea_Route_15_21:
# 3419 "data/scripts/my_debug.pory"
	setflag FLAG_BERRYFIELDS_ITEM
# 3420 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_15_20

CompleteArea_Route_15_24:
# 3423 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM5
# 3424 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Route_15_23

CompleteArea_Route_15_27:
# 3427 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM4
# 3428 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_15_26

CompleteArea_Route_15_30:
# 3431 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM3
# 3432 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_15_29

CompleteArea_Route_15_33:
# 3435 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM2
# 3436 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_15_32

CompleteArea_Route_15_35:
# 3439 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE15_ITEM1
# 3440 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Route_15_1


CompleteArea_Fishing_Village::
# 3509 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Fishing_Village_2
CompleteArea_Fishing_Village_1:
	return

CompleteArea_Fishing_Village_2:
# 3510 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RECEIVED_GYARADOSITE, CompleteArea_Fishing_Village_5
CompleteArea_Fishing_Village_4:
	checkitem ITEM_SUPER_POTION
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Fishing_Village_7
	goto CompleteArea_Fishing_Village_1

CompleteArea_Fishing_Village_5:
# 3511 "data/scripts/my_debug.pory"
	setflag FLAG_FISHINGVILLAGE_GYARADOS_REWARD
# 3512 "data/scripts/my_debug.pory"
	additem ITEM_GYARADOSITE
# 3513 "data/scripts/my_debug.pory"
	setflag FLAG_RECEIVED_GYARADOSITE
	goto CompleteArea_Fishing_Village_4

CompleteArea_Fishing_Village_7:
# 3516 "data/scripts/my_debug.pory"
	setflag FLAG_USED_TITANIUM_LINE
# 3517 "data/scripts/my_debug.pory"
	additem ITEM_SUPER_ROD
	checkitem ITEM_TITANIUM_LINE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Fishing_Village_9
	goto CompleteArea_Fishing_Village_1

CompleteArea_Fishing_Village_9:
# 3519 "data/scripts/my_debug.pory"
	additem ITEM_TITANIUM_LINE
	goto CompleteArea_Fishing_Village_1


CompleteArea_Route_23::
# 3526 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_23_2
CompleteArea_Route_23_1:
# 3554 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_23_5
CompleteArea_Route_23_4:
	return

CompleteArea_Route_23_2:
# 3527 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM1, CompleteArea_Route_23_8
CompleteArea_Route_23_7:
# 3531 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM2, CompleteArea_Route_23_13
CompleteArea_Route_23_12:
# 3535 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM3, CompleteArea_Route_23_16
CompleteArea_Route_23_15:
# 3539 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM4, CompleteArea_Route_23_19
CompleteArea_Route_23_18:
# 3544 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_LEPPA_1
# 3545 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3546 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_SOIL
# 3547 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3548 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_123_LEPPA_2
# 3549 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 3550 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3551 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
# 3552 "data/scripts/my_debug.pory"
	call TryCuttingStrangeSeedTree
	goto CompleteArea_Route_23_1

CompleteArea_Route_23_5:
# 3555 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_BREEDER_M
# 3556 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_MANIAC
# 3557 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_TWINS
# 3558 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_BREEDER_F
# 3559 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_HEXMANIAC_1
# 3560 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_PSYCHIC_M
# 3561 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_HEXMANIAC_2
# 3562 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_TRIATHLETE_F
# 3563 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_FISHERMAN
# 3564 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_BATTLEGIRL
# 3565 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_NINJABOY
# 3566 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R23_ACETRAINER
	goto_if 0, CompleteArea_Route_23_10
	goto CompleteArea_Route_23_4

CompleteArea_Route_23_8:
# 3528 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM1
# 3529 "data/scripts/my_debug.pory"
	additem ITEM_REVIVAL_HERB
	goto CompleteArea_Route_23_7

CompleteArea_Route_23_10:
# 3567 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R23_ACETRAINER
# 3568 "data/scripts/my_debug.pory"
	additem ITEM_CHOICE_SCARF
# 3569 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_CHOICE_SCARF
# 3570 "data/scripts/my_debug.pory"
	addbp 30
	goto CompleteArea_Route_23_4

CompleteArea_Route_23_13:
# 3532 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM2
# 3533 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Route_23_12

CompleteArea_Route_23_16:
# 3536 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM3
# 3537 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Route_23_15

CompleteArea_Route_23_19:
# 3540 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM4
# 3541 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_23_18


CompleteArea_Drisledge_Town::
# 3576 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Drisledge_Town_2
CompleteArea_Drisledge_Town_1:
# 3582 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Drisledge_Town_5
CompleteArea_Drisledge_Town_4:
	return

CompleteArea_Drisledge_Town_2:
# 3577 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM1, CompleteArea_Drisledge_Town_7
	goto CompleteArea_Drisledge_Town_1

CompleteArea_Drisledge_Town_5:
# 3583 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM2, CompleteArea_Drisledge_Town_10
CompleteArea_Drisledge_Town_9:
# 3587 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM3, CompleteArea_Drisledge_Town_13
CompleteArea_Drisledge_Town_12:
# 3591 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ACEROLA_ITEM, CompleteArea_Drisledge_Town_16
CompleteArea_Drisledge_Town_15:
# 3595 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_DRISLEDGE_ITEM4, CompleteArea_Drisledge_Town_19
CompleteArea_Drisledge_Town_18:
# 3599 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_GENGARITE, CompleteArea_Drisledge_Town_21
	goto CompleteArea_Drisledge_Town_4

CompleteArea_Drisledge_Town_7:
# 3578 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM1
# 3579 "data/scripts/my_debug.pory"
	additem ITEM_POKE_DOLL
	goto CompleteArea_Drisledge_Town_1

CompleteArea_Drisledge_Town_10:
# 3584 "data/scripts/my_debug.pory"
	additem ITEM_ORAN_BERRY
# 3585 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM2
	goto CompleteArea_Drisledge_Town_9

CompleteArea_Drisledge_Town_13:
# 3588 "data/scripts/my_debug.pory"
	additem ITEM_COLBUR_BERRY
# 3589 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM3
	goto CompleteArea_Drisledge_Town_12

CompleteArea_Drisledge_Town_16:
# 3592 "data/scripts/my_debug.pory"
	additem ITEM_TM_CAPTIVATE
# 3593 "data/scripts/my_debug.pory"
	setflag FLAG_ACEROLA_ITEM
	goto CompleteArea_Drisledge_Town_15

CompleteArea_Drisledge_Town_19:
# 3596 "data/scripts/my_debug.pory"
	additem ITEM_SPELL_TAG
# 3597 "data/scripts/my_debug.pory"
	setflag FLAG_DRISLEDGE_ITEM4
	goto CompleteArea_Drisledge_Town_18

CompleteArea_Drisledge_Town_21:
# 3600 "data/scripts/my_debug.pory"
	additem ITEM_GENGARITE
# 3601 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_GENGARITE
	goto CompleteArea_Drisledge_Town_4


CompleteArea_Amberock_Town::
# 3607 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Amberock_Town_2
CompleteArea_Amberock_Town_1:
# 3613 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Amberock_Town_5
CompleteArea_Amberock_Town_4:
	return

CompleteArea_Amberock_Town_2:
# 3608 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_GAME_CORNER_TRASHITEM, CompleteArea_Amberock_Town_7
	goto CompleteArea_Amberock_Town_1

CompleteArea_Amberock_Town_5:
	checkitem ITEM_COIN_CASE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Amberock_Town_9
	goto CompleteArea_Amberock_Town_4

CompleteArea_Amberock_Town_7:
# 3609 "data/scripts/my_debug.pory"
	setflag FLAG_GAME_CORNER_TRASHITEM
# 3610 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Amberock_Town_1

CompleteArea_Amberock_Town_9:
# 3615 "data/scripts/my_debug.pory"
	additem ITEM_COIN_CASE
	goto CompleteArea_Amberock_Town_4


CompleteArea_Route_3::
# 3621 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_3_2
CompleteArea_Route_3_1:
# 3647 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_3_5
CompleteArea_Route_3_4:
	return

CompleteArea_Route_3_2:
# 3622 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM1, CompleteArea_Route_3_8
CompleteArea_Route_3_7:
# 3626 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM2, CompleteArea_Route_3_11
CompleteArea_Route_3_10:
# 3630 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM3, CompleteArea_Route_3_14
CompleteArea_Route_3_13:
# 3634 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM4, CompleteArea_Route_3_17
CompleteArea_Route_3_16:
# 3638 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM5, CompleteArea_Route_3_20
CompleteArea_Route_3_19:
# 3642 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_COAST_ITEM6, CompleteArea_Route_3_22
	goto CompleteArea_Route_3_1

CompleteArea_Route_3_5:
# 3648 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_F
# 3649 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_M
# 3650 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_OLDSIS
# 3651 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_TUBER
# 3652 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_FISHERMAN
# 3653 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_LANDSWIMMER_1
# 3654 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_LANDSWIMMER_2
# 3655 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SAILOR
# 3656 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_M1
# 3657 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_M2
# 3658 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R3_SWIMMER_F1
	goto CompleteArea_Route_3_4

CompleteArea_Route_3_8:
# 3623 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM1
# 3624 "data/scripts/my_debug.pory"
	additem ITEM_STAR_PIECE
	goto CompleteArea_Route_3_7

CompleteArea_Route_3_11:
# 3627 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM2
# 3628 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Route_3_10

CompleteArea_Route_3_14:
# 3631 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM3
# 3632 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_3_13

CompleteArea_Route_3_17:
# 3635 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM4
# 3636 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_3_16

CompleteArea_Route_3_20:
# 3639 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM5
# 3640 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Route_3_19

CompleteArea_Route_3_22:
# 3643 "data/scripts/my_debug.pory"
	setflag FLAG_COAST_ITEM6
# 3644 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_3_1


CompleteArea_Route_9::
# 3663 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_9_2
CompleteArea_Route_9_1:
# 3697 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_9_5
CompleteArea_Route_9_4:
	return

CompleteArea_Route_9_2:
# 3664 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM1, CompleteArea_Route_9_8
CompleteArea_Route_9_7:
# 3668 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM2, CompleteArea_Route_9_11
CompleteArea_Route_9_10:
# 3672 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM3, CompleteArea_Route_9_14
CompleteArea_Route_9_13:
# 3676 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM4, CompleteArea_Route_9_17
CompleteArea_Route_9_16:
# 3680 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM5, CompleteArea_Route_9_20
CompleteArea_Route_9_19:
# 3684 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM6, CompleteArea_Route_9_23
CompleteArea_Route_9_22:
# 3688 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM7, CompleteArea_Route_9_26
CompleteArea_Route_9_25:
# 3692 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE9_ITEM8, CompleteArea_Route_9_28
	goto CompleteArea_Route_9_1

CompleteArea_Route_9_5:
# 3698 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_SWIMMER_M
# 3699 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_BLACKBELT
# 3700 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_BIRDKEEPER
# 3701 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_BATTLEGIRL
# 3702 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_SWIMMER_F
# 3703 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_FISHERMAN
# 3704 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_HIKER
# 3705 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_COLLECTOR
# 3706 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_SWIMMER_M2
# 3707 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R9_LANDSWIMMER
	goto CompleteArea_Route_9_4

CompleteArea_Route_9_8:
# 3665 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM1
# 3666 "data/scripts/my_debug.pory"
	additem ITEM_TM_FLIP_TURN
	goto CompleteArea_Route_9_7

CompleteArea_Route_9_11:
# 3669 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM2
# 3670 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Route_9_10

CompleteArea_Route_9_14:
# 3673 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM3
# 3674 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Route_9_13

CompleteArea_Route_9_17:
# 3677 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM4
# 3678 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_9_16

CompleteArea_Route_9_20:
# 3681 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM5
# 3682 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_9_19

CompleteArea_Route_9_23:
# 3685 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM6
# 3686 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Route_9_22

CompleteArea_Route_9_26:
# 3689 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM7
# 3690 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_9_25

CompleteArea_Route_9_28:
# 3693 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE9_ITEM8
# 3694 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Route_9_1


CompleteArea_Route_10::
# 3712 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_10_2
CompleteArea_Route_10_1:
# 3746 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_10_5
CompleteArea_Route_10_4:
# 3763 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Route_10_11
CompleteArea_Route_10_10:
	return

CompleteArea_Route_10_2:
# 3713 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM8, CompleteArea_Route_10_8
CompleteArea_Route_10_7:
# 3717 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM6, CompleteArea_Route_10_16
CompleteArea_Route_10_15:
# 3721 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM7, CompleteArea_Route_10_22
CompleteArea_Route_10_21:
# 3725 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM5, CompleteArea_Route_10_28
CompleteArea_Route_10_27:
# 3729 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM4, CompleteArea_Route_10_34
CompleteArea_Route_10_33:
# 3733 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM3, CompleteArea_Route_10_40
CompleteArea_Route_10_39:
# 3737 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM2, CompleteArea_Route_10_46
CompleteArea_Route_10_45:
# 3741 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE10_ITEM1, CompleteArea_Route_10_51
	goto CompleteArea_Route_10_1

CompleteArea_Route_10_5:
# 3747 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_F1
# 3748 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_FISHERMAN
# 3749 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_M1
# 3750 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_BLACKBELT
# 3751 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_HIKER
# 3752 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_F2
# 3753 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_SWIMMER_M2
# 3754 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_BATTLEGIRL
# 3755 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_TUBER_M
# 3756 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R10_ACESWIMMER
	goto_if 0, CompleteArea_Route_10_13
	goto CompleteArea_Route_10_4

CompleteArea_Route_10_8:
# 3714 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM8
# 3715 "data/scripts/my_debug.pory"
	additem ITEM_DIVE_BALL
	goto CompleteArea_Route_10_7

CompleteArea_Route_10_11:
# 3764 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_1
# 3765 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_2
# 3766 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_3
# 3767 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_BOULDER_4
# 3768 "data/scripts/my_debug.pory"
	compare VAR_SERPENTCAVE_WATER_LEVEL, 4
	goto_if_lt CompleteArea_Route_10_19
CompleteArea_Route_10_18:
# 3771 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM1, CompleteArea_Route_10_25
CompleteArea_Route_10_24:
# 3775 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM2, CompleteArea_Route_10_31
CompleteArea_Route_10_30:
# 3779 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM4, CompleteArea_Route_10_37
CompleteArea_Route_10_36:
# 3783 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_ITEM3, CompleteArea_Route_10_43
CompleteArea_Route_10_42:
# 3787 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SERPENTCAVE_DRAGONFANG, CompleteArea_Route_10_49
CompleteArea_Route_10_48:
# 3791 "data/scripts/my_debug.pory"
	compare VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto_if_lt CompleteArea_Route_10_54
CompleteArea_Route_10_53:
# 3794 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_CASUAL_IRIS
	goto_if 0, CompleteArea_Route_10_56
	goto CompleteArea_Route_10_10

CompleteArea_Route_10_13:
# 3757 "data/scripts/my_debug.pory"
	additem ITEM_BLUNDER_POLICY
# 3758 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R10_ACESWIMMER
# 3759 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_BLUNDER_POLICY
# 3760 "data/scripts/my_debug.pory"
	addbp 30
	goto CompleteArea_Route_10_4

CompleteArea_Route_10_16:
# 3718 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM6
# 3719 "data/scripts/my_debug.pory"
	additem ITEM_TM_SCALD
	goto CompleteArea_Route_10_15

CompleteArea_Route_10_19:
# 3769 "data/scripts/my_debug.pory"
	setvar VAR_SERPENTCAVE_WATER_LEVEL, 4
	goto CompleteArea_Route_10_18

CompleteArea_Route_10_22:
# 3722 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM7
# 3723 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_10_21

CompleteArea_Route_10_25:
# 3772 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM1
# 3773 "data/scripts/my_debug.pory"
	additem ITEM_MOON_STONE
	goto CompleteArea_Route_10_24

CompleteArea_Route_10_28:
# 3726 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM5
# 3727 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_10_27

CompleteArea_Route_10_31:
# 3776 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM2
# 3777 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Route_10_30

CompleteArea_Route_10_34:
# 3730 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM4
# 3731 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
	goto CompleteArea_Route_10_33

CompleteArea_Route_10_37:
# 3780 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM4
# 3781 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_10_36

CompleteArea_Route_10_40:
# 3734 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM3
# 3735 "data/scripts/my_debug.pory"
	additem ITEM_CALCIUM
	goto CompleteArea_Route_10_39

CompleteArea_Route_10_43:
# 3784 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_ITEM3
# 3785 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_10_42

CompleteArea_Route_10_46:
# 3738 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM2
# 3739 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Route_10_45

CompleteArea_Route_10_49:
# 3788 "data/scripts/my_debug.pory"
	setflag FLAG_SERPENTCAVE_DRAGONFANG
# 3789 "data/scripts/my_debug.pory"
	additem ITEM_DRAGON_FANG
	goto CompleteArea_Route_10_48

CompleteArea_Route_10_51:
# 3742 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE10_ITEM1
# 3743 "data/scripts/my_debug.pory"
	additem ITEM_BERRY_JUICE
	goto CompleteArea_Route_10_1

CompleteArea_Route_10_54:
# 3792 "data/scripts/my_debug.pory"
	setvar VAR_SERPENTCAVE_STORY, STORY_SERPENTCAVE_OBTAINED_MEGA_STONE
	goto CompleteArea_Route_10_53

CompleteArea_Route_10_56:
# 3795 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_CASUAL_IRIS
# 3796 "data/scripts/my_debug.pory"
	additem ITEM_GARCHOMPITE
	goto CompleteArea_Route_10_10


CompleteArea_Windplume_Mountain::
# 3802 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Windplume_Mountain_2
CompleteArea_Windplume_Mountain_1:
	return

CompleteArea_Windplume_Mountain_2:
# 3803 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_2, CompleteArea_Windplume_Mountain_5
CompleteArea_Windplume_Mountain_4:
# 3807 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_4, CompleteArea_Windplume_Mountain_8
CompleteArea_Windplume_Mountain_7:
# 3811 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_3, CompleteArea_Windplume_Mountain_11
CompleteArea_Windplume_Mountain_10:
# 3815 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_5, CompleteArea_Windplume_Mountain_14
CompleteArea_Windplume_Mountain_13:
# 3819 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_6, CompleteArea_Windplume_Mountain_17
CompleteArea_Windplume_Mountain_16:
# 3823 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_7, CompleteArea_Windplume_Mountain_20
CompleteArea_Windplume_Mountain_19:
# 3827 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_8, CompleteArea_Windplume_Mountain_23
CompleteArea_Windplume_Mountain_22:
# 3831 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_9, CompleteArea_Windplume_Mountain_26
CompleteArea_Windplume_Mountain_25:
# 3835 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_10, CompleteArea_Windplume_Mountain_29
CompleteArea_Windplume_Mountain_28:
# 3839 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_11, CompleteArea_Windplume_Mountain_32
CompleteArea_Windplume_Mountain_31:
# 3843 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_12, CompleteArea_Windplume_Mountain_35
CompleteArea_Windplume_Mountain_34:
# 3847 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_13, CompleteArea_Windplume_Mountain_38
CompleteArea_Windplume_Mountain_37:
# 3851 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_14, CompleteArea_Windplume_Mountain_41
CompleteArea_Windplume_Mountain_40:
# 3855 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_15, CompleteArea_Windplume_Mountain_44
CompleteArea_Windplume_Mountain_43:
# 3859 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_16, CompleteArea_Windplume_Mountain_47
CompleteArea_Windplume_Mountain_46:
# 3863 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WINDPLUME_MT_ITEM_17, CompleteArea_Windplume_Mountain_49
	goto CompleteArea_Windplume_Mountain_1

CompleteArea_Windplume_Mountain_5:
# 3804 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_2
# 3805 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Windplume_Mountain_4

CompleteArea_Windplume_Mountain_8:
# 3808 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_4
# 3809 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Windplume_Mountain_7

CompleteArea_Windplume_Mountain_11:
# 3812 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_3
# 3813 "data/scripts/my_debug.pory"
	additem ITEM_MOON_STONE
	goto CompleteArea_Windplume_Mountain_10

CompleteArea_Windplume_Mountain_14:
# 3816 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_5
# 3817 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Windplume_Mountain_13

CompleteArea_Windplume_Mountain_17:
# 3820 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_6
# 3821 "data/scripts/my_debug.pory"
	additem ITEM_TM_FOCUS_BLAST
	goto CompleteArea_Windplume_Mountain_16

CompleteArea_Windplume_Mountain_20:
# 3824 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_7
# 3825 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Windplume_Mountain_19

CompleteArea_Windplume_Mountain_23:
# 3828 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_8
# 3829 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Windplume_Mountain_22

CompleteArea_Windplume_Mountain_26:
# 3832 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_9
# 3833 "data/scripts/my_debug.pory"
	additem ITEM_REVIVE
	goto CompleteArea_Windplume_Mountain_25

CompleteArea_Windplume_Mountain_29:
# 3836 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_10
# 3837 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Windplume_Mountain_28

CompleteArea_Windplume_Mountain_32:
# 3840 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_11
# 3841 "data/scripts/my_debug.pory"
	additem ITEM_BLACK_GLASSES
	goto CompleteArea_Windplume_Mountain_31

CompleteArea_Windplume_Mountain_35:
# 3844 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_12
# 3845 "data/scripts/my_debug.pory"
	additem ITEM_ULTRA_BALL
	goto CompleteArea_Windplume_Mountain_34

CompleteArea_Windplume_Mountain_38:
# 3848 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_13
# 3849 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Windplume_Mountain_37

CompleteArea_Windplume_Mountain_41:
# 3852 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_14
# 3853 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Windplume_Mountain_40

CompleteArea_Windplume_Mountain_44:
# 3856 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_15
# 3857 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Windplume_Mountain_43

CompleteArea_Windplume_Mountain_47:
# 3860 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_16
# 3861 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Windplume_Mountain_46

CompleteArea_Windplume_Mountain_49:
# 3864 "data/scripts/my_debug.pory"
	setflag FLAG_WINDPLUME_MT_ITEM_17
# 3865 "data/scripts/my_debug.pory"
	additem ITEM_FLOAT_STONE
	goto CompleteArea_Windplume_Mountain_1


CompleteArea_Route_16::
# 3871 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_16_2
CompleteArea_Route_16_1:
# 3897 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_16_5
CompleteArea_Route_16_4:
	return

CompleteArea_Route_16_2:
# 3872 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM1, CompleteArea_Route_16_8
CompleteArea_Route_16_7:
# 3876 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM2, CompleteArea_Route_16_11
CompleteArea_Route_16_10:
# 3880 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM3, CompleteArea_Route_16_14
CompleteArea_Route_16_13:
# 3884 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM4, CompleteArea_Route_16_17
CompleteArea_Route_16_16:
# 3888 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM5, CompleteArea_Route_16_20
CompleteArea_Route_16_19:
# 3892 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE16_ITEM6, CompleteArea_Route_16_22
	goto CompleteArea_Route_16_1

CompleteArea_Route_16_5:
# 3898 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_M
# 3899 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_F
# 3900 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_NINJABOY2
# 3901 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_F2
# 3902 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_SWIMMER_F3
# 3903 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_GUITARIST
# 3904 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_HIKER
# 3905 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_BEAUTY
# 3906 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_NINJABOY
# 3907 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R16_EXPERT_F
	goto CompleteArea_Route_16_4

CompleteArea_Route_16_8:
# 3873 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM1
# 3874 "data/scripts/my_debug.pory"
	additem ITEM_STARDUST
	goto CompleteArea_Route_16_7

CompleteArea_Route_16_11:
# 3877 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM2
# 3878 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Route_16_10

CompleteArea_Route_16_14:
# 3881 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM3
# 3882 "data/scripts/my_debug.pory"
	additem ITEM_FULL_HEAL
	goto CompleteArea_Route_16_13

CompleteArea_Route_16_17:
# 3885 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM4
# 3886 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Route_16_16

CompleteArea_Route_16_20:
# 3889 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM5
# 3890 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Route_16_19

CompleteArea_Route_16_22:
# 3893 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE16_ITEM6
# 3894 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Route_16_1


CompleteArea_Basalek_Town::
# 3912 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Basalek_Town_2
CompleteArea_Basalek_Town_1:
# 3942 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Basalek_Town_5
CompleteArea_Basalek_Town_4:
# 3962 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Basalek_Town_11
CompleteArea_Basalek_Town_10:
	return

CompleteArea_Basalek_Town_2:
# 3913 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_ITEM2, CompleteArea_Basalek_Town_8
CompleteArea_Basalek_Town_7:
# 3917 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_ITEM1, CompleteArea_Basalek_Town_16
CompleteArea_Basalek_Town_15:
# 3921 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM3, CompleteArea_Basalek_Town_23
CompleteArea_Basalek_Town_22:
# 3925 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM2, CompleteArea_Basalek_Town_26
CompleteArea_Basalek_Town_25:
# 3929 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM1, CompleteArea_Basalek_Town_29
CompleteArea_Basalek_Town_28:
# 3933 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM4, CompleteArea_Basalek_Town_32
CompleteArea_Basalek_Town_31:
# 3937 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_TUNNEL_ITEM5, CompleteArea_Basalek_Town_34
	goto CompleteArea_Basalek_Town_1

CompleteArea_Basalek_Town_5:
# 3943 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_HIKER1
# 3944 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BLACKBELT
# 3945 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_PICNICKER
# 3946 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_FIREBREATHER
# 3947 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BLACKBELT2
# 3948 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_CAMPERM
# 3949 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_PICNICKER2
# 3950 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_HIKER2
# 3951 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BEAUTY
# 3952 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_FIREBREATHER2
# 3953 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_HIKER3
# 3954 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_BTUN_BROCK
	goto_if 0, CompleteArea_Basalek_Town_13
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_8:
# 3914 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_ITEM2
# 3915 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Basalek_Town_7

CompleteArea_Basalek_Town_11:
# 3963 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_BASALEK_WOMAN_LEMONADE, CompleteArea_Basalek_Town_18
	goto CompleteArea_Basalek_Town_10

CompleteArea_Basalek_Town_13:
# 3955 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_BTUN_BROCK
# 3956 "data/scripts/my_debug.pory"
	giveitem ITEM_HM_ROCK_CLIMB
# 3957 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q38_BASALEK_TUNNELS_START, CompleteArea_Basalek_Town_20
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_16:
# 3918 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_ITEM1
# 3919 "data/scripts/my_debug.pory"
	additem ITEM_BURN_HEAL
	goto CompleteArea_Basalek_Town_15

CompleteArea_Basalek_Town_18:
# 3964 "data/scripts/my_debug.pory"
	additem ITEM_FRESH_WATER
# 3965 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_WOMAN_LEMONADE
	goto CompleteArea_Basalek_Town_10

CompleteArea_Basalek_Town_20:
# 3958 "data/scripts/my_debug.pory"
	completequest FLAG_Q38_BASALEK_TUNNELS_COMPLETE
	goto CompleteArea_Basalek_Town_4

CompleteArea_Basalek_Town_23:
# 3922 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM3
# 3923 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Basalek_Town_22

CompleteArea_Basalek_Town_26:
# 3926 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM2
# 3927 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Basalek_Town_25

CompleteArea_Basalek_Town_29:
# 3930 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM1
# 3931 "data/scripts/my_debug.pory"
	additem ITEM_STEELIXITE
	goto CompleteArea_Basalek_Town_28

CompleteArea_Basalek_Town_32:
# 3934 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM4
# 3935 "data/scripts/my_debug.pory"
	additem ITEM_TM_INCINERATE
	goto CompleteArea_Basalek_Town_31

CompleteArea_Basalek_Town_34:
# 3938 "data/scripts/my_debug.pory"
	setflag FLAG_BASALEK_TUNNEL_ITEM5
# 3939 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Basalek_Town_1


CompleteArea_Route_17::
# 3971 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_17_2
CompleteArea_Route_17_1:
# 3989 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_17_5
CompleteArea_Route_17_4:
	return

CompleteArea_Route_17_2:
# 3972 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM1, CompleteArea_Route_17_8
CompleteArea_Route_17_7:
# 3976 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM2, CompleteArea_Route_17_11
CompleteArea_Route_17_10:
# 3980 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM3, CompleteArea_Route_17_14
CompleteArea_Route_17_13:
# 3984 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE17_ITEM4, CompleteArea_Route_17_16
	goto CompleteArea_Route_17_1

CompleteArea_Route_17_5:
# 3990 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_CAMPER_M
# 3991 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_PICNICKER1
# 3992 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_PICNICKER2
# 3993 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_MANIAC
# 3994 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_SCIENTIST
# 3995 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_HIKER1
# 3996 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_HIKER2
# 3997 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R17_COOLTRAINER
	goto CompleteArea_Route_17_4

CompleteArea_Route_17_8:
# 3973 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM1
# 3974 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_17_7

CompleteArea_Route_17_11:
# 3977 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM2
# 3978 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Route_17_10

CompleteArea_Route_17_14:
# 3981 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM3
# 3982 "data/scripts/my_debug.pory"
	additem ITEM_TM_TOXIC
	goto CompleteArea_Route_17_13

CompleteArea_Route_17_16:
# 3985 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE17_ITEM4
# 3986 "data/scripts/my_debug.pory"
	additem ITEM_HEAVY_BALL
	goto CompleteArea_Route_17_1


CompleteArea_Route_18::
# 4002 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Route_18_2
CompleteArea_Route_18_1:
# 4024 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_4, CompleteArea_Route_18_5
CompleteArea_Route_18_4:
	return

CompleteArea_Route_18_2:
# 4003 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM1, CompleteArea_Route_18_8
CompleteArea_Route_18_7:
# 4007 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM3, CompleteArea_Route_18_13
CompleteArea_Route_18_12:
# 4011 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM2, CompleteArea_Route_18_16
CompleteArea_Route_18_15:
# 4015 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE18_ITEM4, CompleteArea_Route_18_19
CompleteArea_Route_18_18:
# 4019 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_110_YACHE_1
# 4020 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
# 4021 "data/scripts/my_debug.pory"
	pickberrytree BERRY_TREE_ROUTE_110_YACHE_2
# 4022 "data/scripts/my_debug.pory"
	call TryLootingStrangeSeed
	goto CompleteArea_Route_18_1

CompleteArea_Route_18_5:
# 4025 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_HIKER1
# 4026 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_RANGER_M
# 4027 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_KINDLER
# 4028 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_HIKER2
# 4029 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_RANGER_F
# 4030 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_SCIENTIST
# 4031 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_POKEMANIAC
# 4032 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_BREEDER_M
# 4033 "data/scripts/my_debug.pory"
	checktrainerflag TRAINER_R18_ACE_TRAINER_M
	goto_if 0, CompleteArea_Route_18_10
	goto CompleteArea_Route_18_4

CompleteArea_Route_18_8:
# 4004 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM1
# 4005 "data/scripts/my_debug.pory"
	additem ITEM_ICY_ROCK
	goto CompleteArea_Route_18_7

CompleteArea_Route_18_10:
# 4034 "data/scripts/my_debug.pory"
	defeattrainer TRAINER_R18_ACE_TRAINER_M
# 4035 "data/scripts/my_debug.pory"
	additem ITEM_LOADED_DICE
# 4036 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_LOADED_DICE
	goto CompleteArea_Route_18_4

CompleteArea_Route_18_13:
# 4008 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM3
# 4009 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Route_18_12

CompleteArea_Route_18_16:
# 4012 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM2
# 4013 "data/scripts/my_debug.pory"
	additem ITEM_ICE_HEAL
	goto CompleteArea_Route_18_15

CompleteArea_Route_18_19:
# 4016 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE18_ITEM4
# 4017 "data/scripts/my_debug.pory"
	additem ITEM_BIG_MUSHROOM
	goto CompleteArea_Route_18_18


CompleteArea_Frosthearth_City::
# 4042 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Frosthearth_City_2
CompleteArea_Frosthearth_City_1:
# 4080 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Frosthearth_City_5
CompleteArea_Frosthearth_City_4:
	return

CompleteArea_Frosthearth_City_2:
# 4043 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM1, CompleteArea_Frosthearth_City_8
CompleteArea_Frosthearth_City_7:
# 4047 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM2, CompleteArea_Frosthearth_City_14
CompleteArea_Frosthearth_City_13:
# 4051 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM3, CompleteArea_Frosthearth_City_23
CompleteArea_Frosthearth_City_22:
# 4055 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM4, CompleteArea_Frosthearth_City_31
CompleteArea_Frosthearth_City_30:
# 4059 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM5, CompleteArea_Frosthearth_City_38
CompleteArea_Frosthearth_City_37:
# 4063 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDFRONTIER_ITEM6, CompleteArea_Frosthearth_City_41
CompleteArea_Frosthearth_City_40:
# 4067 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FROSTFIRE_ITEM3, CompleteArea_Frosthearth_City_44
CompleteArea_Frosthearth_City_43:
# 4071 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FROSTFIRE_ITEM2, CompleteArea_Frosthearth_City_47
CompleteArea_Frosthearth_City_46:
# 4075 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FROSTFIRE_ITEM1, CompleteArea_Frosthearth_City_49
	goto CompleteArea_Frosthearth_City_1

CompleteArea_Frosthearth_City_5:
# 4081 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FRIGIDCAVE_VERDANT_SPHERE, CompleteArea_Frosthearth_City_11
CompleteArea_Frosthearth_City_10:
# 4093 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_CHOCOLATE_FROM_OLD_MAN, CompleteArea_Frosthearth_City_17
CompleteArea_Frosthearth_City_16:
# 4097 "data/scripts/my_debug.pory"
	compare VAR_FROSTHEARTH_RUFFLET, 10
	goto_if_lt CompleteArea_Frosthearth_City_26
CompleteArea_Frosthearth_City_25:
# 4104 "data/scripts/my_debug.pory"
	compare VAR_FROSTHEARTH_HARD_ROCK, 3
	goto_if_lt CompleteArea_Frosthearth_City_33
	goto CompleteArea_Frosthearth_City_4

CompleteArea_Frosthearth_City_8:
# 4044 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM1
# 4045 "data/scripts/my_debug.pory"
	additem ITEM_TM_HAIL
	goto CompleteArea_Frosthearth_City_7

CompleteArea_Frosthearth_City_11:
# 4082 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDCAVE_VERDANT_SPHERE
# 4083 "data/scripts/my_debug.pory"
	additem ITEM_VERDANT_SPHERE
# 4084 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDCAVE_HIDE_STEEL_SPHERE
# 4085 "data/scripts/my_debug.pory"
	clearflag FLAG_FRIGIDCAVE_DOOR_OPEN
# 4086 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_START, CompleteArea_Frosthearth_City_20
CompleteArea_Frosthearth_City_19:
	checkitem ITEM_STEEL_SPHERE
# 0 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CompleteArea_Frosthearth_City_28
	goto CompleteArea_Frosthearth_City_10

CompleteArea_Frosthearth_City_14:
# 4048 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM2
# 4049 "data/scripts/my_debug.pory"
	additem ITEM_YACHE_BERRY
	goto CompleteArea_Frosthearth_City_13

CompleteArea_Frosthearth_City_17:
# 4094 "data/scripts/my_debug.pory"
	additem ITEM_RAGE_CANDY_BAR
# 4095 "data/scripts/my_debug.pory"
	setflag FLAG_CHOCOLATE_FROM_OLD_MAN
	goto CompleteArea_Frosthearth_City_16

CompleteArea_Frosthearth_City_20:
# 4087 "data/scripts/my_debug.pory"
	completequest FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_COMPLETE
	goto CompleteArea_Frosthearth_City_19

CompleteArea_Frosthearth_City_23:
# 4052 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM3
# 4053 "data/scripts/my_debug.pory"
	additem ITEM_COMET_SHARD
	goto CompleteArea_Frosthearth_City_22

CompleteArea_Frosthearth_City_26:
# 4098 "data/scripts/my_debug.pory"
	additem ITEM_HEART_SCALE
# 4099 "data/scripts/my_debug.pory"
	setvar VAR_FROSTHEARTH_RUFFLET, 10
# 4100 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q40_FROSTHEARTH_RUFFLET_START, CompleteArea_Frosthearth_City_35
	goto CompleteArea_Frosthearth_City_25

CompleteArea_Frosthearth_City_28:
# 4090 "data/scripts/my_debug.pory"
	additem ITEM_STEEL_SPHERE
	goto CompleteArea_Frosthearth_City_10

CompleteArea_Frosthearth_City_31:
# 4056 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM4
# 4057 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ELIXIR
	goto CompleteArea_Frosthearth_City_30

CompleteArea_Frosthearth_City_33:
# 4105 "data/scripts/my_debug.pory"
	setvar VAR_FROSTHEARTH_HARD_ROCK, 3
# 4106 "data/scripts/my_debug.pory"
	additem ITEM_HARD_STONE
	goto CompleteArea_Frosthearth_City_4

CompleteArea_Frosthearth_City_35:
# 4101 "data/scripts/my_debug.pory"
	completequest FLAG_Q40_FROSTHEARTH_RUFFLET_COMPLETE
	goto CompleteArea_Frosthearth_City_25

CompleteArea_Frosthearth_City_38:
# 4060 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM5
# 4061 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Frosthearth_City_37

CompleteArea_Frosthearth_City_41:
# 4064 "data/scripts/my_debug.pory"
	setflag FLAG_FRIGIDFRONTIER_ITEM6
# 4065 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Frosthearth_City_40

CompleteArea_Frosthearth_City_44:
# 4068 "data/scripts/my_debug.pory"
	setflag FLAG_FROSTFIRE_ITEM3
# 4069 "data/scripts/my_debug.pory"
	additem ITEM_X_SPEED
	goto CompleteArea_Frosthearth_City_43

CompleteArea_Frosthearth_City_47:
# 4072 "data/scripts/my_debug.pory"
	setflag FLAG_FROSTFIRE_ITEM2
# 4073 "data/scripts/my_debug.pory"
	additem ITEM_BURN_HEAL
	goto CompleteArea_Frosthearth_City_46

CompleteArea_Frosthearth_City_49:
# 4076 "data/scripts/my_debug.pory"
	setflag FLAG_FROSTFIRE_ITEM1
# 4077 "data/scripts/my_debug.pory"
	additem ITEM_SNOWBALL
	goto CompleteArea_Frosthearth_City_1


CompleteArea_Rock_Climb::
# 4112 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Rock_Climb_2
CompleteArea_Rock_Climb_1:
# 4158 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Rock_Climb_5
CompleteArea_Rock_Climb_4:
	return

CompleteArea_Rock_Climb_2:
# 4113 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_KAOLISLE_ITEM10, CompleteArea_Rock_Climb_8
CompleteArea_Rock_Climb_7:
# 4117 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE12_SIDEITEM, CompleteArea_Rock_Climb_13
CompleteArea_Rock_Climb_12:
# 4121 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE23_ITEM5, CompleteArea_Rock_Climb_16
CompleteArea_Rock_Climb_15:
# 4125 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_AMBEROCK_ITEM2, CompleteArea_Rock_Climb_19
CompleteArea_Rock_Climb_18:
# 4129 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM1, CompleteArea_Rock_Climb_22
CompleteArea_Rock_Climb_21:
# 4133 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM2, CompleteArea_Rock_Climb_25
CompleteArea_Rock_Climb_24:
# 4137 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM3, CompleteArea_Rock_Climb_28
CompleteArea_Rock_Climb_27:
# 4141 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM4, CompleteArea_Rock_Climb_31
CompleteArea_Rock_Climb_30:
# 4145 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM5, CompleteArea_Rock_Climb_34
CompleteArea_Rock_Climb_33:
# 4149 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM6, CompleteArea_Rock_Climb_37
CompleteArea_Rock_Climb_36:
# 4153 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SUNKEN_CAVERN_ITEM7, CompleteArea_Rock_Climb_39
	goto CompleteArea_Rock_Climb_1

CompleteArea_Rock_Climb_5:
# 4159 "data/scripts/my_debug.pory"
	compare VAR_HOUNDOOMS_DEFEATED, 4
	goto_if_lt CompleteArea_Rock_Climb_10
	goto CompleteArea_Rock_Climb_4

CompleteArea_Rock_Climb_8:
# 4114 "data/scripts/my_debug.pory"
	setflag FLAG_KAOLISLE_ITEM10
# 4115 "data/scripts/my_debug.pory"
	additem ITEM_SMOOTH_ROCK
	goto CompleteArea_Rock_Climb_7

CompleteArea_Rock_Climb_10:
# 4160 "data/scripts/my_debug.pory"
	setvar VAR_HOUNDOOMS_DEFEATED, 4
# 4161 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_HOUNDOOMINITE
# 4162 "data/scripts/my_debug.pory"
	additem ITEM_HOUNDOOMINITE
	goto CompleteArea_Rock_Climb_4

CompleteArea_Rock_Climb_13:
# 4118 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE12_SIDEITEM
# 4119 "data/scripts/my_debug.pory"
	additem ITEM_TM_IRON_TAIL
	goto CompleteArea_Rock_Climb_12

CompleteArea_Rock_Climb_16:
# 4122 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE23_ITEM5
# 4123 "data/scripts/my_debug.pory"
	additem ITEM_PP_MAX
	goto CompleteArea_Rock_Climb_15

CompleteArea_Rock_Climb_19:
# 4126 "data/scripts/my_debug.pory"
	setflag FLAG_AMBEROCK_ITEM2
# 4127 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ELIXIR
	goto CompleteArea_Rock_Climb_18

CompleteArea_Rock_Climb_22:
# 4130 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM1
# 4131 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REPEL
	goto CompleteArea_Rock_Climb_21

CompleteArea_Rock_Climb_25:
# 4134 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM2
# 4135 "data/scripts/my_debug.pory"
	additem ITEM_CARBOS
	goto CompleteArea_Rock_Climb_24

CompleteArea_Rock_Climb_28:
# 4138 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM3
# 4139 "data/scripts/my_debug.pory"
	additem ITEM_STAR_PIECE
	goto CompleteArea_Rock_Climb_27

CompleteArea_Rock_Climb_31:
# 4142 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM4
# 4143 "data/scripts/my_debug.pory"
	additem ITEM_MAX_POTION
	goto CompleteArea_Rock_Climb_30

CompleteArea_Rock_Climb_34:
# 4146 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM5
# 4147 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Rock_Climb_33

CompleteArea_Rock_Climb_37:
# 4150 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM6
# 4151 "data/scripts/my_debug.pory"
	additem ITEM_TM_DARK_PULSE
	goto CompleteArea_Rock_Climb_36

CompleteArea_Rock_Climb_39:
# 4154 "data/scripts/my_debug.pory"
	setflag FLAG_SUNKEN_CAVERN_ITEM7
# 4155 "data/scripts/my_debug.pory"
	additem ITEM_SOUL_DEW
	goto CompleteArea_Rock_Climb_1


CompleteArea_Desert_Ruins::
# 4168 "data/scripts/my_debug.pory"
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
# 4170 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM1, CompleteArea_Desert_Ruins_9
CompleteArea_Desert_Ruins_8:
# 4174 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM2, CompleteArea_Desert_Ruins_12
CompleteArea_Desert_Ruins_11:
# 4178 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM3, CompleteArea_Desert_Ruins_15
CompleteArea_Desert_Ruins_14:
# 4182 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM4, CompleteArea_Desert_Ruins_18
CompleteArea_Desert_Ruins_17:
# 4186 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RUINS_4F_ITEM5, CompleteArea_Desert_Ruins_21
CompleteArea_Desert_Ruins_20:
# 4190 "data/scripts/my_debug.pory"
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
# 4171 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM1
# 4172 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_GOLD
	goto CompleteArea_Desert_Ruins_8

CompleteArea_Desert_Ruins_12:
# 4175 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM2
# 4176 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_VASE
	goto CompleteArea_Desert_Ruins_11

CompleteArea_Desert_Ruins_15:
# 4179 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM3
# 4180 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_VASE
	goto CompleteArea_Desert_Ruins_14

CompleteArea_Desert_Ruins_18:
# 4183 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM4
# 4184 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Desert_Ruins_17

CompleteArea_Desert_Ruins_21:
# 4187 "data/scripts/my_debug.pory"
	setflag FLAG_RUINS_4F_ITEM5
# 4188 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_GOLD
	goto CompleteArea_Desert_Ruins_20

CompleteArea_Desert_Ruins_24:
# 4192 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_UNDERGROUNDRUINS_FULLRESTORE, CompleteArea_Desert_Ruins_28
	goto CompleteArea_Desert_Ruins_23

CompleteArea_Desert_Ruins_26:
# 4198 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_RELIC_CROWN, CompleteArea_Desert_Ruins_30
	goto CompleteArea_Desert_Ruins_1

CompleteArea_Desert_Ruins_28:
# 4193 "data/scripts/my_debug.pory"
	setflag FLAG_UNDERGROUNDRUINS_FULLRESTORE
# 4194 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Desert_Ruins_23

CompleteArea_Desert_Ruins_30:
# 4199 "data/scripts/my_debug.pory"
	setflag FLAG_RELIC_CROWN
# 4200 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_CROWN
	goto CompleteArea_Desert_Ruins_1


CompleteArea_Safari_Zone::
# 4208 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Safari_Zone_2
CompleteArea_Safari_Zone_1:
	return

CompleteArea_Safari_Zone_2:
# 4209 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY, CompleteArea_Safari_Zone_5
CompleteArea_Safari_Zone_4:
# 4213 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE, CompleteArea_Safari_Zone_8
CompleteArea_Safari_Zone_7:
# 4217 "data/scripts/my_debug.pory"
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
# 4210 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_SOUTH_RARE_CANDY
# 4211 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Safari_Zone_4

CompleteArea_Safari_Zone_8:
# 4214 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE
# 4215 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Safari_Zone_7

CompleteArea_Safari_Zone_11:
# 4218 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP
# 4219 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Safari_Zone_10

CompleteArea_Safari_Zone_14:
# 4222 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL, CompleteArea_Safari_Zone_20
CompleteArea_Safari_Zone_19:
# 4226 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE, CompleteArea_Safari_Zone_29
CompleteArea_Safari_Zone_28:
# 4230 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY, CompleteArea_Safari_Zone_40
CompleteArea_Safari_Zone_39:
# 4234 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC, CompleteArea_Safari_Zone_52
CompleteArea_Safari_Zone_51:
# 4238 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET, CompleteArea_Safari_Zone_61
	goto CompleteArea_Safari_Zone_13

CompleteArea_Safari_Zone_17:
# 4244 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM1, CompleteArea_Safari_Zone_26
CompleteArea_Safari_Zone_25:
# 4248 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM2, CompleteArea_Safari_Zone_37
CompleteArea_Safari_Zone_36:
# 4252 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM3, CompleteArea_Safari_Zone_49
CompleteArea_Safari_Zone_48:
# 4256 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARI_NW_ITEM4, CompleteArea_Safari_Zone_59
	goto CompleteArea_Safari_Zone_16

CompleteArea_Safari_Zone_20:
# 4223 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL
# 4224 "data/scripts/my_debug.pory"
	additem ITEM_BIG_PEARL
	goto CompleteArea_Safari_Zone_19

CompleteArea_Safari_Zone_23:
# 4262 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM7, CompleteArea_Safari_Zone_34
CompleteArea_Safari_Zone_33:
# 4266 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM6, CompleteArea_Safari_Zone_46
CompleteArea_Safari_Zone_45:
# 4270 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM5, CompleteArea_Safari_Zone_57
CompleteArea_Safari_Zone_56:
# 4274 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM4, CompleteArea_Safari_Zone_64
CompleteArea_Safari_Zone_63:
# 4278 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM3, CompleteArea_Safari_Zone_66
	goto CompleteArea_Safari_Zone_22

CompleteArea_Safari_Zone_26:
# 4245 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM1
# 4246 "data/scripts/my_debug.pory"
	additem ITEM_HYPER_POTION
	goto CompleteArea_Safari_Zone_25

CompleteArea_Safari_Zone_29:
# 4227 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE
# 4228 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Safari_Zone_28

CompleteArea_Safari_Zone_31:
# 4284 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM2, CompleteArea_Safari_Zone_43
CompleteArea_Safari_Zone_42:
# 4288 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SAFARIMOUNTAIN_ITEM1, CompleteArea_Safari_Zone_54
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_34:
# 4263 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM7
# 4264 "data/scripts/my_debug.pory"
	additem ITEM_PEARL
	goto CompleteArea_Safari_Zone_33

CompleteArea_Safari_Zone_37:
# 4249 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM2
# 4250 "data/scripts/my_debug.pory"
	additem ITEM_MAX_REVIVE
	goto CompleteArea_Safari_Zone_36

CompleteArea_Safari_Zone_40:
# 4231 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY
# 4232 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Safari_Zone_39

CompleteArea_Safari_Zone_43:
# 4285 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM2
# 4286 "data/scripts/my_debug.pory"
	additem ITEM_KINGS_ROCK
	goto CompleteArea_Safari_Zone_42

CompleteArea_Safari_Zone_46:
# 4267 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM6
# 4268 "data/scripts/my_debug.pory"
	additem ITEM_TROPICAL_STONE
	goto CompleteArea_Safari_Zone_45

CompleteArea_Safari_Zone_49:
# 4253 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM3
# 4254 "data/scripts/my_debug.pory"
	additem ITEM_GREAT_BALL
	goto CompleteArea_Safari_Zone_48

CompleteArea_Safari_Zone_52:
# 4235 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC
# 4236 "data/scripts/my_debug.pory"
	additem ITEM_ZINC
	goto CompleteArea_Safari_Zone_51

CompleteArea_Safari_Zone_54:
# 4289 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM1
# 4290 "data/scripts/my_debug.pory"
	additem ITEM_TM_GIGA_IMPACT
	goto CompleteArea_Safari_Zone_1

CompleteArea_Safari_Zone_57:
# 4271 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM5
# 4272 "data/scripts/my_debug.pory"
	additem ITEM_FULL_RESTORE
	goto CompleteArea_Safari_Zone_56

CompleteArea_Safari_Zone_59:
# 4257 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARI_NW_ITEM4
# 4258 "data/scripts/my_debug.pory"
	additem ITEM_ETHER
	goto CompleteArea_Safari_Zone_16

CompleteArea_Safari_Zone_61:
# 4239 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET
# 4240 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Safari_Zone_13

CompleteArea_Safari_Zone_64:
# 4275 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM4
# 4276 "data/scripts/my_debug.pory"
	additem ITEM_SOFT_SAND
	goto CompleteArea_Safari_Zone_63

CompleteArea_Safari_Zone_66:
# 4279 "data/scripts/my_debug.pory"
	setflag FLAG_SAFARIMOUNTAIN_ITEM3
# 4280 "data/scripts/my_debug.pory"
	additem ITEM_IRON
	goto CompleteArea_Safari_Zone_22


CompleteArea_Misc_Surfing::
# 4297 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_3, CompleteArea_Misc_Surfing_2
CompleteArea_Misc_Surfing_1:
# 4367 "data/scripts/my_debug.pory"
	goto_if_set FLAG_TEMP_5, CompleteArea_Misc_Surfing_5
CompleteArea_Misc_Surfing_4:
	return

CompleteArea_Misc_Surfing_2:
# 4298 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ITEM_ROUTE1_TM03, CompleteArea_Misc_Surfing_8
CompleteArea_Misc_Surfing_7:
# 4302 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE, CompleteArea_Misc_Surfing_13
CompleteArea_Misc_Surfing_12:
# 4306 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_WW_WATERSTONE, CompleteArea_Misc_Surfing_18
CompleteArea_Misc_Surfing_17:
# 4310 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_PIDGEOTITE, CompleteArea_Misc_Surfing_21
CompleteArea_Misc_Surfing_20:
# 4314 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE3_ITEM1, CompleteArea_Misc_Surfing_24
CompleteArea_Misc_Surfing_23:
# 4318 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE5_ITEM4, CompleteArea_Misc_Surfing_27
CompleteArea_Misc_Surfing_26:
# 4322 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_WHITE_HERB, CompleteArea_Misc_Surfing_30
CompleteArea_Misc_Surfing_29:
# 4326 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE8_ITEM4, CompleteArea_Misc_Surfing_33
CompleteArea_Misc_Surfing_32:
# 4330 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_SHORESLATE_ITEM2, CompleteArea_Misc_Surfing_36
CompleteArea_Misc_Surfing_35:
# 4334 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROUTE7_ITEM6, CompleteArea_Misc_Surfing_39
CompleteArea_Misc_Surfing_38:
# 4338 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_MARIGORGE_ITEM3, CompleteArea_Misc_Surfing_42
CompleteArea_Misc_Surfing_41:
# 4342 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_MARIGORGE_ITEM1, CompleteArea_Misc_Surfing_45
CompleteArea_Misc_Surfing_44:
# 4346 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_OBTAINED_AGGRONITE, CompleteArea_Misc_Surfing_48
CompleteArea_Misc_Surfing_47:
# 4350 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_ROCKLIFFE_ITEM3, CompleteArea_Misc_Surfing_51
CompleteArea_Misc_Surfing_50:
# 4354 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_FLOODEDCAVE_FOSSIL, CompleteArea_Misc_Surfing_54
CompleteArea_Misc_Surfing_53:
# 4358 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM5, CompleteArea_Misc_Surfing_57
CompleteArea_Misc_Surfing_56:
# 4362 "data/scripts/my_debug.pory"
	goto_if_unset FLAG_R14_ITEM6, CompleteArea_Misc_Surfing_59
	goto CompleteArea_Misc_Surfing_1

CompleteArea_Misc_Surfing_5:
# 4368 "data/scripts/my_debug.pory"
	compare VAR_KAOLISLE_BIRDS, 131
	goto_if_lt CompleteArea_Misc_Surfing_10
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_8:
# 4299 "data/scripts/my_debug.pory"
	setflag FLAG_ITEM_ROUTE1_TM03
# 4300 "data/scripts/my_debug.pory"
	additem ITEM_TM_SMART_STRIKE
	goto CompleteArea_Misc_Surfing_7

CompleteArea_Misc_Surfing_10:
# 4369 "data/scripts/my_debug.pory"
	setvar VAR_KAOLISLE_BIRDS, 131
# 4370 "data/scripts/my_debug.pory"
	additem ITEM_TM_BULLET_SEED
# 4371 "data/scripts/my_debug.pory"
	goto_if_set FLAG_Q28_KAOLISLE_LOSTBIRDS_START, CompleteArea_Misc_Surfing_15
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_13:
# 4303 "data/scripts/my_debug.pory"
	setflag FLAG_HIDDEN_ITEM_ROUTE2_HARDSTONE
# 4304 "data/scripts/my_debug.pory"
	additem ITEM_HARD_STONE
	goto CompleteArea_Misc_Surfing_12

CompleteArea_Misc_Surfing_15:
# 4372 "data/scripts/my_debug.pory"
	completequest FLAG_Q28_KAOLISLE_LOSTBIRDS_COMPLETE
	goto CompleteArea_Misc_Surfing_4

CompleteArea_Misc_Surfing_18:
# 4307 "data/scripts/my_debug.pory"
	setflag FLAG_WW_WATERSTONE
# 4308 "data/scripts/my_debug.pory"
	additem ITEM_WATER_STONE
	goto CompleteArea_Misc_Surfing_17

CompleteArea_Misc_Surfing_21:
# 4311 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_PIDGEOTITE
# 4312 "data/scripts/my_debug.pory"
	additem ITEM_PIDGEOTITE
	goto CompleteArea_Misc_Surfing_20

CompleteArea_Misc_Surfing_24:
# 4315 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE3_ITEM1
# 4316 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Misc_Surfing_23

CompleteArea_Misc_Surfing_27:
# 4319 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE5_ITEM4
# 4320 "data/scripts/my_debug.pory"
	additem ITEM_NUGGET
	goto CompleteArea_Misc_Surfing_26

CompleteArea_Misc_Surfing_30:
# 4323 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_WHITE_HERB
# 4324 "data/scripts/my_debug.pory"
	additem ITEM_WHITE_HERB
	goto CompleteArea_Misc_Surfing_29

CompleteArea_Misc_Surfing_33:
# 4327 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE8_ITEM4
# 4328 "data/scripts/my_debug.pory"
	additem ITEM_HP_UP
	goto CompleteArea_Misc_Surfing_32

CompleteArea_Misc_Surfing_36:
# 4331 "data/scripts/my_debug.pory"
	setflag FLAG_SHORESLATE_ITEM2
# 4332 "data/scripts/my_debug.pory"
	additem ITEM_ELIXIR
	goto CompleteArea_Misc_Surfing_35

CompleteArea_Misc_Surfing_39:
# 4335 "data/scripts/my_debug.pory"
	setflag FLAG_ROUTE7_ITEM6
# 4336 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ETHER
	goto CompleteArea_Misc_Surfing_38

CompleteArea_Misc_Surfing_42:
# 4339 "data/scripts/my_debug.pory"
	setflag FLAG_MARIGORGE_ITEM3
# 4340 "data/scripts/my_debug.pory"
	additem ITEM_PP_UP
	goto CompleteArea_Misc_Surfing_41

CompleteArea_Misc_Surfing_45:
# 4343 "data/scripts/my_debug.pory"
	setflag FLAG_MARIGORGE_ITEM1
# 4344 "data/scripts/my_debug.pory"
	additem ITEM_SUN_STONE
	goto CompleteArea_Misc_Surfing_44

CompleteArea_Misc_Surfing_48:
# 4347 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_AGGRONITE
# 4348 "data/scripts/my_debug.pory"
	additem ITEM_AGGRONITE
	goto CompleteArea_Misc_Surfing_47

CompleteArea_Misc_Surfing_51:
# 4351 "data/scripts/my_debug.pory"
	setflag FLAG_ROCKLIFFE_ITEM3
# 4352 "data/scripts/my_debug.pory"
	additem ITEM_RARE_CANDY
	goto CompleteArea_Misc_Surfing_50

CompleteArea_Misc_Surfing_54:
# 4355 "data/scripts/my_debug.pory"
	setflag FLAG_FLOODEDCAVE_FOSSIL
# 4356 "data/scripts/my_debug.pory"
	call DebugFossil
	goto CompleteArea_Misc_Surfing_53

CompleteArea_Misc_Surfing_57:
# 4359 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM5
# 4360 "data/scripts/my_debug.pory"
	additem ITEM_TM_HIDDEN_POWER
	goto CompleteArea_Misc_Surfing_56

CompleteArea_Misc_Surfing_59:
# 4363 "data/scripts/my_debug.pory"
	setflag FLAG_R14_ITEM6
# 4364 "data/scripts/my_debug.pory"
	additem ITEM_MAX_ETHER
	goto CompleteArea_Misc_Surfing_1


TryLootingStrangeSeed::
# 4380 "data/scripts/my_debug.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TryLootingStrangeSeed_2
# 4383 "data/scripts/my_debug.pory"
	trystrangeseed
# 4384 "data/scripts/my_debug.pory"
	compare VAR_0x8004, 60
	goto_if_ge TryLootingStrangeSeed_5
TryLootingStrangeSeed_4:
	return

TryLootingStrangeSeed_2:
	return

TryLootingStrangeSeed_5:
# 4385 "data/scripts/my_debug.pory"
	additem ITEM_STRANGE_SEED
	goto TryLootingStrangeSeed_4


TryCuttingStrangeSeedTree::
# 4390 "data/scripts/my_debug.pory"
	trystrangeseed
# 4391 "data/scripts/my_debug.pory"
	compare VAR_0x8004, 80
	goto_if_ge TryCuttingStrangeSeedTree_1
	return

TryCuttingStrangeSeedTree_1:
# 4392 "data/scripts/my_debug.pory"
	additem ITEM_STRANGE_SEED
	return


GenerateRelic::
# 4396 "data/scripts/my_debug.pory"
	random 100
# 4397 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 65
	goto_if_le GenerateRelic_2
# 4400 "data/scripts/my_debug.pory"
	compare VAR_RESULT, 94
	goto_if_ge GenerateRelic_3
# 4404 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_SILVER
GenerateRelic_1:
	return

GenerateRelic_2:
# 4398 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_COPPER
	goto GenerateRelic_1

GenerateRelic_3:
# 4401 "data/scripts/my_debug.pory"
	additem ITEM_RELIC_GOLD
	goto GenerateRelic_1


DebugFossil::
# 4410 "data/scripts/my_debug.pory"
	random 11
# 4411 "data/scripts/my_debug.pory"
	switch VAR_RESULT
# 4412 "data/scripts/my_debug.pory"
	case 0, DebugFossil_3
# 4414 "data/scripts/my_debug.pory"
	case 1, DebugFossil_4
# 4416 "data/scripts/my_debug.pory"
	case 2, DebugFossil_5
# 4418 "data/scripts/my_debug.pory"
	case 3, DebugFossil_6
# 4420 "data/scripts/my_debug.pory"
	case 4, DebugFossil_7
# 4422 "data/scripts/my_debug.pory"
	case 5, DebugFossil_8
# 4424 "data/scripts/my_debug.pory"
	case 6, DebugFossil_9
# 4426 "data/scripts/my_debug.pory"
	case 7, DebugFossil_10
# 4428 "data/scripts/my_debug.pory"
	case 8, DebugFossil_11
# 4430 "data/scripts/my_debug.pory"
	case 9, DebugFossil_12
# 4432 "data/scripts/my_debug.pory"
	case 10, DebugFossil_13
DebugFossil_1:
	return

DebugFossil_3:
# 4413 "data/scripts/my_debug.pory"
	goto LootHelix2
	goto DebugFossil_1

DebugFossil_4:
# 4415 "data/scripts/my_debug.pory"
	goto LootDome2
	goto DebugFossil_1

DebugFossil_5:
# 4417 "data/scripts/my_debug.pory"
	goto LootOldAmber2
	goto DebugFossil_1

DebugFossil_6:
# 4419 "data/scripts/my_debug.pory"
	goto LootRoot2
	goto DebugFossil_1

DebugFossil_7:
# 4421 "data/scripts/my_debug.pory"
	goto LootClaw2
	goto DebugFossil_1

DebugFossil_8:
# 4423 "data/scripts/my_debug.pory"
	goto LootSkull2
	goto DebugFossil_1

DebugFossil_9:
# 4425 "data/scripts/my_debug.pory"
	goto LootArmor2
	goto DebugFossil_1

DebugFossil_10:
# 4427 "data/scripts/my_debug.pory"
	goto LootCover2
	goto DebugFossil_1

DebugFossil_11:
# 4429 "data/scripts/my_debug.pory"
	goto LootPlume2
	goto DebugFossil_1

DebugFossil_12:
# 4431 "data/scripts/my_debug.pory"
	goto LootJaw2
	goto DebugFossil_1

DebugFossil_13:
# 4433 "data/scripts/my_debug.pory"
	goto LootSail2
	goto DebugFossil_1


LootHelix2::
# 4439 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelix2_2
LootHelix2_1:
# 4442 "data/scripts/my_debug.pory"
	additem ITEM_HELIX_FOSSIL
# 4443 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_HELIX_FOSSIL
	return

LootHelix2_2:
# 4440 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootHelix2_1


LootDome2::
# 4447 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDome2_2
LootDome2_1:
# 4450 "data/scripts/my_debug.pory"
	additem ITEM_DOME_FOSSIL
# 4451 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_DOME_FOSSIL
	return

LootDome2_2:
# 4448 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootDome2_1


LootOldAmber2::
# 4455 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmber2_2
LootOldAmber2_1:
# 4458 "data/scripts/my_debug.pory"
	additem ITEM_OLD_AMBER
# 4459 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
	return

LootOldAmber2_2:
# 4456 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootOldAmber2_1


LootRoot2::
# 4463 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRoot2_2
LootRoot2_1:
# 4466 "data/scripts/my_debug.pory"
	additem ITEM_ROOT_FOSSIL
# 4467 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ROOT_FOSSIL
	return

LootRoot2_2:
# 4464 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootRoot2_1


LootClaw2::
# 4471 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClaw2_2
LootClaw2_1:
# 4474 "data/scripts/my_debug.pory"
	additem ITEM_CLAW_FOSSIL
# 4475 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_CLAW_FOSSIL
	return

LootClaw2_2:
# 4472 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootClaw2_1


LootSkull2::
# 4479 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkull2_2
LootSkull2_1:
# 4482 "data/scripts/my_debug.pory"
	additem ITEM_SKULL_FOSSIL
# 4483 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_SKULL_FOSSIL
	return

LootSkull2_2:
# 4480 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootSkull2_1


LootArmor2::
# 4487 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmor2_2
LootArmor2_1:
# 4490 "data/scripts/my_debug.pory"
	additem ITEM_ARMOR_FOSSIL
# 4491 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
	return

LootArmor2_2:
# 4488 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootArmor2_1


LootCover2::
# 4495 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCover2_2
LootCover2_1:
# 4498 "data/scripts/my_debug.pory"
	additem ITEM_COVER_FOSSIL
# 4499 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_COVER_FOSSIL
	return

LootCover2_2:
# 4496 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootCover2_1


LootPlume2::
# 4503 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlume2_2
LootPlume2_1:
# 4506 "data/scripts/my_debug.pory"
	additem ITEM_PLUME_FOSSIL
# 4507 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_PLUME_FOSSIL
	return

LootPlume2_2:
# 4504 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootPlume2_1


LootJaw2::
# 4511 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJaw2_2
LootJaw2_1:
# 4514 "data/scripts/my_debug.pory"
	additem ITEM_JAW_FOSSIL
# 4515 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_JAW_FOSSIL
	return

LootJaw2_2:
# 4512 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootJaw2_1


LootSail2::
# 4519 "data/scripts/my_debug.pory"
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSail2_2
LootSail2_1:
# 4522 "data/scripts/my_debug.pory"
	additem ITEM_SAIL_FOSSIL
# 4523 "data/scripts/my_debug.pory"
	setflag FLAG_OBTAINED_SAIL_FOSSIL
	return

LootSail2_2:
# 4520 "data/scripts/my_debug.pory"
	goto DebugFossil
	goto LootSail2_1


SecretShopScript::
# 4528 "data/scripts/my_debug.pory"
	message SecretShopScript_Text_0
# 4529 "data/scripts/my_debug.pory"
	waitmessage
# 4530 "data/scripts/my_debug.pory"
	setflag FLAG_FREE_MART
# 4531 "data/scripts/my_debug.pory"
	pokemart SecretShopScript_Mart
# 4532 "data/scripts/my_debug.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 4533 "data/scripts/my_debug.pory"
	clearflag FLAG_FREE_MART
# 4534 "data/scripts/my_debug.pory"
	release
	end


	.align 2
# 4538 "data/scripts/my_debug.pory"
SecretShopScript_Mart:
# 4539 "data/scripts/my_debug.pory"
	.2byte ITEM_RARE_CANDY
# 4540 "data/scripts/my_debug.pory"
	.2byte ITEM_EXP_CANDY_XL
# 4541 "data/scripts/my_debug.pory"
	.2byte ITEM_MASTER_BALL
# 4542 "data/scripts/my_debug.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 4543 "data/scripts/my_debug.pory"
	.2byte ITEM_ABILITY_PATCH
# 4544 "data/scripts/my_debug.pory"
	.2byte ITEM_PP_MAX
# 4545 "data/scripts/my_debug.pory"
	.2byte ITEM_FRESH_START_MOCHI
# 4546 "data/scripts/my_debug.pory"
	.2byte ITEM_HP_UP
# 4547 "data/scripts/my_debug.pory"
	.2byte ITEM_PROTEIN
# 4548 "data/scripts/my_debug.pory"
	.2byte ITEM_IRON
# 4549 "data/scripts/my_debug.pory"
	.2byte ITEM_CALCIUM
# 4550 "data/scripts/my_debug.pory"
	.2byte ITEM_ZINC
# 4551 "data/scripts/my_debug.pory"
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
# 328 "data/scripts/my_debug.pory"
	.string "Decidueye$"

TestMegaMon_Text_1:
# 328 "data/scripts/my_debug.pory"
	.string "Empoleon$"

TestMegaMon_Text_2:
# 328 "data/scripts/my_debug.pory"
	.string "Chesnaught$"

TestMegaMon_Text_3:
# 328 "data/scripts/my_debug.pory"
	.string "Incineroar$"

TestMegaMon_Text_4:
# 328 "data/scripts/my_debug.pory"
	.string "Porygon-Z$"

TestMegaMon_Text_5:
# 328 "data/scripts/my_debug.pory"
	.string "Ariados$"

TestMegaMon_Text_6:
# 362 "data/scripts/my_debug.pory"
	.string "Goodbye$"

SkipContent_Text_0:
# 433 "data/scripts/my_debug.pory"
	.string "Route 1$"

SkipContent_Text_1:
# 434 "data/scripts/my_debug.pory"
	.string "Route 2$"

SkipContent_Text_2:
# 435 "data/scripts/my_debug.pory"
	.string "Windy Woods$"

SkipContent_Text_3:
# 436 "data/scripts/my_debug.pory"
	.string "Coralgrove City$"

SkipContent_Text_4:
# 437 "data/scripts/my_debug.pory"
	.string "Azuretide Town$"

SkipContent_Text_5:
# 438 "data/scripts/my_debug.pory"
	.string "Route 4$"

SkipContent_Text_6:
# 439 "data/scripts/my_debug.pory"
	.string "Pokémon Ranch$"

SkipContent_Text_7:
# 440 "data/scripts/my_debug.pory"
	.string "Aldeleaf City$"

SkipContent_Text_8:
# 441 "data/scripts/my_debug.pory"
	.string "Route 30$"

SkipContent_Text_9:
# 442 "data/scripts/my_debug.pory"
	.string "Windplume Valley$"

SkipContent_Text_10:
# 443 "data/scripts/my_debug.pory"
	.string "Route 5$"

SkipContent_Text_11:
# 444 "data/scripts/my_debug.pory"
	.string "Flower Fields$"

SkipContent_Text_12:
# 445 "data/scripts/my_debug.pory"
	.string "Skyloch Village$"

SkipContent_Text_13:
# 446 "data/scripts/my_debug.pory"
	.string "Route 6$"

SkipContent_Text_14:
# 447 "data/scripts/my_debug.pory"
	.string "Route 8$"

SkipContent_Text_15:
# 448 "data/scripts/my_debug.pory"
	.string "Shoreslate City$"

SkipContent_Text_16:
# 449 "data/scripts/my_debug.pory"
	.string "Scorched Desert$"

SkipContent_Text_17:
# 450 "data/scripts/my_debug.pory"
	.string "Route 7$"

SkipContent_Text_18:
# 451 "data/scripts/my_debug.pory"
	.string "Marigorge Town$"

SkipContent_Text_19:
# 452 "data/scripts/my_debug.pory"
	.string "Kaolisle City$"

SkipContent_Text_20:
# 453 "data/scripts/my_debug.pory"
	.string "Rockliffe Town$"

SkipContent_Text_21:
# 454 "data/scripts/my_debug.pory"
	.string "Route 11$"

SkipContent_Text_22:
# 455 "data/scripts/my_debug.pory"
	.string "Route 12$"

SkipContent_Text_23:
# 456 "data/scripts/my_debug.pory"
	.string "Sandstone City$"

SkipContent_Text_24:
# 457 "data/scripts/my_debug.pory"
	.string "Route 13$"

SkipContent_Text_25:
# 458 "data/scripts/my_debug.pory"
	.string "Adamant Tower$"

SkipContent_Text_26:
# 459 "data/scripts/my_debug.pory"
	.string "Route 14$"

SkipContent_Text_27:
# 460 "data/scripts/my_debug.pory"
	.string "Route 15$"

SkipContent_Text_28:
# 461 "data/scripts/my_debug.pory"
	.string "Fishing Village$"

SkipContent_Text_29:
# 462 "data/scripts/my_debug.pory"
	.string "Route 23$"

SkipContent_Text_30:
# 463 "data/scripts/my_debug.pory"
	.string "Drisledge Town$"

SkipContent_Text_31:
# 464 "data/scripts/my_debug.pory"
	.string "Amberock Town$"

SkipContent_Text_32:
# 465 "data/scripts/my_debug.pory"
	.string "Route 3$"

SkipContent_Text_33:
# 466 "data/scripts/my_debug.pory"
	.string "Route 9$"

SkipContent_Text_34:
# 467 "data/scripts/my_debug.pory"
	.string "Route 10$"

SkipContent_Text_35:
# 468 "data/scripts/my_debug.pory"
	.string "Windplume Mountain$"

SkipContent_Text_36:
# 469 "data/scripts/my_debug.pory"
	.string "Route 16$"

SkipContent_Text_37:
# 470 "data/scripts/my_debug.pory"
	.string "Basalek Town$"

SkipContent_Text_38:
# 471 "data/scripts/my_debug.pory"
	.string "Route 17$"

SkipContent_Text_39:
# 472 "data/scripts/my_debug.pory"
	.string "Route 18$"

SkipContent_Text_40:
# 473 "data/scripts/my_debug.pory"
	.string "Frosthearth City$"

SkipContent_Text_41:
# 474 "data/scripts/my_debug.pory"
	.string "Rock Climb(!)$"

SkipContent_Text_42:
# 475 "data/scripts/my_debug.pory"
	.string "Desert Ruins(!)$"

SkipContent_Text_43:
# 476 "data/scripts/my_debug.pory"
	.string "Safari Zone(!)$"

SkipContent_Text_44:
# 477 "data/scripts/my_debug.pory"
	.string "Misc. Surfing(!)$"

SkipContent_Text_45:
# 478 "data/scripts/my_debug.pory"
	.string "Cancel$"

SkipContent_BufferChoices_Text_0:
# 646 "data/scripts/my_debug.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}$"

SkipContent_BufferChoices_Text_1:
# 648 "data/scripts/my_debug.pory"
	.string "{STR_VAR_1}Items$"

SkipContent_BufferChoices_Text_2:
# 651 "data/scripts/my_debug.pory"
	.string "Items$"

SkipContent_BufferChoices_Text_3:
# 655 "data/scripts/my_debug.pory"
	.string "{STR_VAR_1}Trainers$"

SkipContent_BufferChoices_Text_4:
# 658 "data/scripts/my_debug.pory"
	.string "Trainers$"

SkipContent_BufferChoices_Text_5:
# 662 "data/scripts/my_debug.pory"
	.string "{STR_VAR_1}Events$"

SkipContent_BufferChoices_Text_6:
# 665 "data/scripts/my_debug.pory"
	.string "Events$"

SkipContent_BufferChoices_Text_7:
# 669 "data/scripts/my_debug.pory"
	.string "All$"

SkipContent_BufferChoices_Text_8:
# 670 "data/scripts/my_debug.pory"
	.string "Confirm$"

SkipContent_BufferChoices_Text_9:
# 671 "data/scripts/my_debug.pory"
	.string "Back$"

SkipContent_BufferChoices_Text_10:
# 673 "data/scripts/my_debug.pory"
	.string "Anything else?$"

SkipContent_BufferChoices_Text_11:
# 676 "data/scripts/my_debug.pory"
	.string "Please choose the content you\nwant to complete.$"

SkipContent_PokemonRanch_Text_0:
# 805 "data/scripts/my_debug.pory"
	.string "Pokemon Ranch$"

SkipContent_RockClimb_Text_0:
# 1190 "data/scripts/my_debug.pory"
	.string "Rock Climb$"

SkipContent_RockClimb_Text_1:
# 1193 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nmiscellaneous Rock Climb related areas.$"

SkipContent_DesertRuins_Text_0:
# 1199 "data/scripts/my_debug.pory"
	.string "Desert Ruins$"

SkipContent_DesertRuins_Text_1:
# 1202 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nDesert Ruins and only based on\lacquired HMs.$"

SkipContent_SafariZone_Text_0:
# 1208 "data/scripts/my_debug.pory"
	.string "Safari Zone$"

SkipContent_SafariZone_Text_1:
# 1211 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nSafari Zone and only based on\lacquired HMs.$"

SkipContent_MiscSurfing_Text_0:
# 1218 "data/scripts/my_debug.pory"
	.string "Misc. Surfing$"

SkipContent_MiscSurfing_Text_1:
# 1221 "data/scripts/my_debug.pory"
	.string "Do note that this option only skips\nmiscellaneous Surf related areas.$"

SkipStory_Text_0:
# 1787 "data/scripts/my_debug.pory"
	.string "Was {RIVAL} defeated in\nCoralgrove Harbor?$"

SecretShopScript_Text_0:
# 4528 "data/scripts/my_debug.pory"
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
# 379 "data/scripts/my_debug.pory"
	.string "This unstuck feature is meant to\n"
	.string "avoid softlocking in the overworld.\p"
	.string "Would you like to warp home?$"

Stor::
# 385 "data/scripts/my_debug.pory"
	.string "Story$"

Ite::
# 386 "data/scripts/my_debug.pory"
	.string "Items$"

Trai::
# 387 "data/scripts/my_debug.pory"
	.string "Trainers$"

Even::
# 388 "data/scripts/my_debug.pory"
	.string "Events$"

SkipContent_Text::
# 624 "data/scripts/my_debug.pory"
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
# 641 "data/scripts/my_debug.pory"
	.string "Choose the area you'd like to skip.$"

WantToSkipMultiple::
# 1227 "data/scripts/my_debug.pory"
	.string "You've chosen to skip {STR_VAR_2}.\p"
	.string "All story content up to this area\n"
	.string "will be completed, as well as any\l"
	.string "additional content selected.\p"
	.string "Would you also like to complete any\n"
	.string "selected content from the previous\l"
	.string "areas as well?$"

ContentHasBeenSkipped::
# 1236 "data/scripts/my_debug.pory"
	.string "Content has been skipped.\p"
	.string "It is recommended to check your bag\n"
	.string "for any new items.\p"
	.string "Note that this doesn't automatically\n"
	.string "catch any Pokémon for you.$"
