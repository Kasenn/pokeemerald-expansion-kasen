Route8_MapScripts::
# 2 "data/maps/Route8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, InitRoute8
# 3 "data/maps/Route8/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LoadMudTile
	.byte 0


InitRoute8::
# 10 "data/maps/Route8/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, InitRoute8_2
InitRoute8_1:
# 13 "data/maps/Route8/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 14 "data/maps/Route8/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 15 "data/maps/Route8/scripts.pory"
	callnative ScrCmd_GetDayForRoute7
# 16 "data/maps/Route8/scripts.pory"
	compare VAR_0x8000, TRUE
	goto_if_eq InitRoute8_5
# 21 "data/maps/Route8/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE8
# 22 "data/maps/Route8/scripts.pory"
	setflag FLAG_TEMP_1
InitRoute8_4:
# 24 "data/maps/Route8/scripts.pory"
	checkitem ITEM_SAMPLE_BOX
	end

InitRoute8_2:
# 11 "data/maps/Route8/scripts.pory"
	setflag FLAG_DEVON_RESCUED
	goto InitRoute8_1

InitRoute8_5:
# 17 "data/maps/Route8/scripts.pory"
	setmaplayoutindex LAYOUT_ROUTE8_DRY
# 18 "data/maps/Route8/scripts.pory"
	setflag FLAG_TEMP_2
	goto InitRoute8_4


LoadMudTile::
# 29 "data/maps/Route8/scripts.pory"
	checkitem ITEM_SAMPLE_BOX
# 30 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_X, 0
	goto_if_eq LoadMudTile_3
LoadMudTile_1:
# 33 "data/maps/Route8/scripts.pory"
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x344, FALSE
	return

LoadMudTile_2:
# 31 "data/maps/Route8/scripts.pory"
	call RandomizeMudTile
	goto LoadMudTile_1

LoadMudTile_3:
# 30 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LoadMudTile_2
	goto LoadMudTile_1


RandomizeMudTile::
# 37 "data/maps/Route8/scripts.pory"
	random 155
# 38 "data/maps/Route8/scripts.pory"
	switch VAR_RESULT
# 39 "data/maps/Route8/scripts.pory"
	case 0, RandomizeMudTile_3
# 42 "data/maps/Route8/scripts.pory"
	case 1, RandomizeMudTile_4
# 45 "data/maps/Route8/scripts.pory"
	case 2, RandomizeMudTile_5
# 48 "data/maps/Route8/scripts.pory"
	case 3, RandomizeMudTile_6
# 51 "data/maps/Route8/scripts.pory"
	case 4, RandomizeMudTile_7
# 54 "data/maps/Route8/scripts.pory"
	case 6, RandomizeMudTile_8
# 57 "data/maps/Route8/scripts.pory"
	case 7, RandomizeMudTile_9
# 60 "data/maps/Route8/scripts.pory"
	case 8, RandomizeMudTile_10
# 63 "data/maps/Route8/scripts.pory"
	case 9, RandomizeMudTile_11
# 66 "data/maps/Route8/scripts.pory"
	case 10, RandomizeMudTile_12
# 69 "data/maps/Route8/scripts.pory"
	case 11, RandomizeMudTile_13
# 72 "data/maps/Route8/scripts.pory"
	case 12, RandomizeMudTile_14
# 75 "data/maps/Route8/scripts.pory"
	case 13, RandomizeMudTile_15
# 78 "data/maps/Route8/scripts.pory"
	case 14, RandomizeMudTile_16
# 81 "data/maps/Route8/scripts.pory"
	case 15, RandomizeMudTile_17
# 84 "data/maps/Route8/scripts.pory"
	case 16, RandomizeMudTile_18
# 87 "data/maps/Route8/scripts.pory"
	case 17, RandomizeMudTile_19
# 90 "data/maps/Route8/scripts.pory"
	case 18, RandomizeMudTile_20
# 93 "data/maps/Route8/scripts.pory"
	case 19, RandomizeMudTile_21
# 96 "data/maps/Route8/scripts.pory"
	case 20, RandomizeMudTile_22
# 99 "data/maps/Route8/scripts.pory"
	case 21, RandomizeMudTile_23
# 102 "data/maps/Route8/scripts.pory"
	case 22, RandomizeMudTile_24
# 105 "data/maps/Route8/scripts.pory"
	case 23, RandomizeMudTile_25
# 108 "data/maps/Route8/scripts.pory"
	case 24, RandomizeMudTile_26
# 111 "data/maps/Route8/scripts.pory"
	case 25, RandomizeMudTile_27
# 114 "data/maps/Route8/scripts.pory"
	case 26, RandomizeMudTile_28
# 117 "data/maps/Route8/scripts.pory"
	case 27, RandomizeMudTile_29
# 120 "data/maps/Route8/scripts.pory"
	case 28, RandomizeMudTile_30
# 123 "data/maps/Route8/scripts.pory"
	case 29, RandomizeMudTile_31
# 126 "data/maps/Route8/scripts.pory"
	case 30, RandomizeMudTile_32
# 129 "data/maps/Route8/scripts.pory"
	case 31, RandomizeMudTile_33
# 132 "data/maps/Route8/scripts.pory"
	case 32, RandomizeMudTile_34
# 135 "data/maps/Route8/scripts.pory"
	case 33, RandomizeMudTile_35
# 138 "data/maps/Route8/scripts.pory"
	case 34, RandomizeMudTile_36
# 141 "data/maps/Route8/scripts.pory"
	case 35, RandomizeMudTile_37
# 144 "data/maps/Route8/scripts.pory"
	case 36, RandomizeMudTile_38
# 147 "data/maps/Route8/scripts.pory"
	case 37, RandomizeMudTile_39
# 150 "data/maps/Route8/scripts.pory"
	case 38, RandomizeMudTile_40
# 153 "data/maps/Route8/scripts.pory"
	case 39, RandomizeMudTile_41
# 156 "data/maps/Route8/scripts.pory"
	case 40, RandomizeMudTile_42
# 159 "data/maps/Route8/scripts.pory"
	case 41, RandomizeMudTile_43
# 162 "data/maps/Route8/scripts.pory"
	case 42, RandomizeMudTile_44
# 165 "data/maps/Route8/scripts.pory"
	case 43, RandomizeMudTile_45
# 168 "data/maps/Route8/scripts.pory"
	case 44, RandomizeMudTile_46
# 171 "data/maps/Route8/scripts.pory"
	case 45, RandomizeMudTile_47
# 174 "data/maps/Route8/scripts.pory"
	case 46, RandomizeMudTile_48
# 177 "data/maps/Route8/scripts.pory"
	case 47, RandomizeMudTile_49
# 180 "data/maps/Route8/scripts.pory"
	case 48, RandomizeMudTile_50
# 183 "data/maps/Route8/scripts.pory"
	case 49, RandomizeMudTile_51
# 186 "data/maps/Route8/scripts.pory"
	case 50, RandomizeMudTile_52
# 189 "data/maps/Route8/scripts.pory"
	case 51, RandomizeMudTile_53
# 192 "data/maps/Route8/scripts.pory"
	case 52, RandomizeMudTile_54
# 195 "data/maps/Route8/scripts.pory"
	case 53, RandomizeMudTile_55
# 198 "data/maps/Route8/scripts.pory"
	case 54, RandomizeMudTile_56
# 201 "data/maps/Route8/scripts.pory"
	case 55, RandomizeMudTile_57
# 204 "data/maps/Route8/scripts.pory"
	case 56, RandomizeMudTile_58
# 207 "data/maps/Route8/scripts.pory"
	case 57, RandomizeMudTile_59
# 210 "data/maps/Route8/scripts.pory"
	case 58, RandomizeMudTile_60
# 213 "data/maps/Route8/scripts.pory"
	case 59, RandomizeMudTile_61
# 216 "data/maps/Route8/scripts.pory"
	case 60, RandomizeMudTile_62
# 219 "data/maps/Route8/scripts.pory"
	case 61, RandomizeMudTile_63
# 222 "data/maps/Route8/scripts.pory"
	case 62, RandomizeMudTile_64
# 225 "data/maps/Route8/scripts.pory"
	case 63, RandomizeMudTile_65
# 228 "data/maps/Route8/scripts.pory"
	case 64, RandomizeMudTile_66
# 231 "data/maps/Route8/scripts.pory"
	case 65, RandomizeMudTile_67
# 234 "data/maps/Route8/scripts.pory"
	case 66, RandomizeMudTile_68
# 237 "data/maps/Route8/scripts.pory"
	case 67, RandomizeMudTile_69
# 240 "data/maps/Route8/scripts.pory"
	case 68, RandomizeMudTile_70
# 243 "data/maps/Route8/scripts.pory"
	case 69, RandomizeMudTile_71
# 246 "data/maps/Route8/scripts.pory"
	case 70, RandomizeMudTile_72
# 249 "data/maps/Route8/scripts.pory"
	case 71, RandomizeMudTile_73
# 252 "data/maps/Route8/scripts.pory"
	case 72, RandomizeMudTile_74
# 255 "data/maps/Route8/scripts.pory"
	case 73, RandomizeMudTile_75
# 258 "data/maps/Route8/scripts.pory"
	case 74, RandomizeMudTile_76
# 261 "data/maps/Route8/scripts.pory"
	case 75, RandomizeMudTile_77
# 264 "data/maps/Route8/scripts.pory"
	case 76, RandomizeMudTile_78
# 267 "data/maps/Route8/scripts.pory"
	case 77, RandomizeMudTile_79
# 270 "data/maps/Route8/scripts.pory"
	case 78, RandomizeMudTile_80
# 273 "data/maps/Route8/scripts.pory"
	case 79, RandomizeMudTile_81
# 276 "data/maps/Route8/scripts.pory"
	case 80, RandomizeMudTile_82
# 279 "data/maps/Route8/scripts.pory"
	case 81, RandomizeMudTile_83
# 282 "data/maps/Route8/scripts.pory"
	case 82, RandomizeMudTile_84
# 285 "data/maps/Route8/scripts.pory"
	case 83, RandomizeMudTile_85
# 288 "data/maps/Route8/scripts.pory"
	case 84, RandomizeMudTile_86
# 291 "data/maps/Route8/scripts.pory"
	case 85, RandomizeMudTile_87
# 294 "data/maps/Route8/scripts.pory"
	case 86, RandomizeMudTile_88
# 297 "data/maps/Route8/scripts.pory"
	case 87, RandomizeMudTile_89
# 300 "data/maps/Route8/scripts.pory"
	case 88, RandomizeMudTile_90
# 303 "data/maps/Route8/scripts.pory"
	case 89, RandomizeMudTile_91
# 306 "data/maps/Route8/scripts.pory"
	case 90, RandomizeMudTile_92
# 309 "data/maps/Route8/scripts.pory"
	case 91, RandomizeMudTile_93
# 312 "data/maps/Route8/scripts.pory"
	case 92, RandomizeMudTile_94
# 315 "data/maps/Route8/scripts.pory"
	case 93, RandomizeMudTile_95
# 318 "data/maps/Route8/scripts.pory"
	case 94, RandomizeMudTile_96
# 321 "data/maps/Route8/scripts.pory"
	case 95, RandomizeMudTile_97
# 324 "data/maps/Route8/scripts.pory"
	case 96, RandomizeMudTile_98
# 327 "data/maps/Route8/scripts.pory"
	case 97, RandomizeMudTile_99
# 330 "data/maps/Route8/scripts.pory"
	case 98, RandomizeMudTile_100
# 333 "data/maps/Route8/scripts.pory"
	case 99, RandomizeMudTile_101
# 336 "data/maps/Route8/scripts.pory"
	case 101, RandomizeMudTile_102
# 339 "data/maps/Route8/scripts.pory"
	case 102, RandomizeMudTile_103
# 342 "data/maps/Route8/scripts.pory"
	case 103, RandomizeMudTile_104
# 345 "data/maps/Route8/scripts.pory"
	case 104, RandomizeMudTile_105
# 348 "data/maps/Route8/scripts.pory"
	case 105, RandomizeMudTile_106
# 351 "data/maps/Route8/scripts.pory"
	case 106, RandomizeMudTile_107
# 354 "data/maps/Route8/scripts.pory"
	case 107, RandomizeMudTile_108
# 357 "data/maps/Route8/scripts.pory"
	case 108, RandomizeMudTile_109
# 360 "data/maps/Route8/scripts.pory"
	case 109, RandomizeMudTile_110
# 363 "data/maps/Route8/scripts.pory"
	case 100, RandomizeMudTile_111
# 366 "data/maps/Route8/scripts.pory"
	case 110, RandomizeMudTile_112
# 369 "data/maps/Route8/scripts.pory"
	case 111, RandomizeMudTile_113
# 372 "data/maps/Route8/scripts.pory"
	case 112, RandomizeMudTile_114
# 375 "data/maps/Route8/scripts.pory"
	case 113, RandomizeMudTile_115
# 378 "data/maps/Route8/scripts.pory"
	case 114, RandomizeMudTile_116
# 381 "data/maps/Route8/scripts.pory"
	case 115, RandomizeMudTile_117
# 384 "data/maps/Route8/scripts.pory"
	case 116, RandomizeMudTile_118
# 387 "data/maps/Route8/scripts.pory"
	case 117, RandomizeMudTile_119
# 390 "data/maps/Route8/scripts.pory"
	case 118, RandomizeMudTile_120
# 393 "data/maps/Route8/scripts.pory"
	case 119, RandomizeMudTile_121
# 396 "data/maps/Route8/scripts.pory"
	case 120, RandomizeMudTile_122
# 399 "data/maps/Route8/scripts.pory"
	case 121, RandomizeMudTile_123
# 402 "data/maps/Route8/scripts.pory"
	case 122, RandomizeMudTile_124
# 405 "data/maps/Route8/scripts.pory"
	case 123, RandomizeMudTile_125
# 408 "data/maps/Route8/scripts.pory"
	case 124, RandomizeMudTile_126
# 411 "data/maps/Route8/scripts.pory"
	case 125, RandomizeMudTile_127
# 414 "data/maps/Route8/scripts.pory"
	case 126, RandomizeMudTile_128
# 417 "data/maps/Route8/scripts.pory"
	case 127, RandomizeMudTile_129
# 420 "data/maps/Route8/scripts.pory"
	case 128, RandomizeMudTile_130
# 423 "data/maps/Route8/scripts.pory"
	case 129, RandomizeMudTile_131
# 426 "data/maps/Route8/scripts.pory"
	case 130, RandomizeMudTile_132
# 429 "data/maps/Route8/scripts.pory"
	case 131, RandomizeMudTile_133
# 432 "data/maps/Route8/scripts.pory"
	case 132, RandomizeMudTile_134
# 435 "data/maps/Route8/scripts.pory"
	case 133, RandomizeMudTile_135
# 438 "data/maps/Route8/scripts.pory"
	case 134, RandomizeMudTile_136
# 441 "data/maps/Route8/scripts.pory"
	case 135, RandomizeMudTile_137
# 444 "data/maps/Route8/scripts.pory"
	case 136, RandomizeMudTile_138
# 447 "data/maps/Route8/scripts.pory"
	case 137, RandomizeMudTile_139
# 450 "data/maps/Route8/scripts.pory"
	case 138, RandomizeMudTile_140
# 453 "data/maps/Route8/scripts.pory"
	case 139, RandomizeMudTile_141
# 456 "data/maps/Route8/scripts.pory"
	case 140, RandomizeMudTile_142
# 459 "data/maps/Route8/scripts.pory"
	case 141, RandomizeMudTile_143
# 462 "data/maps/Route8/scripts.pory"
	case 142, RandomizeMudTile_144
# 465 "data/maps/Route8/scripts.pory"
	case 143, RandomizeMudTile_145
# 468 "data/maps/Route8/scripts.pory"
	case 144, RandomizeMudTile_146
# 471 "data/maps/Route8/scripts.pory"
	case 145, RandomizeMudTile_147
# 474 "data/maps/Route8/scripts.pory"
	case 146, RandomizeMudTile_148
# 477 "data/maps/Route8/scripts.pory"
	case 147, RandomizeMudTile_149
# 480 "data/maps/Route8/scripts.pory"
	case 148, RandomizeMudTile_150
# 483 "data/maps/Route8/scripts.pory"
	case 149, RandomizeMudTile_151
# 486 "data/maps/Route8/scripts.pory"
	case 150, RandomizeMudTile_152
# 489 "data/maps/Route8/scripts.pory"
	case 151, RandomizeMudTile_153
# 492 "data/maps/Route8/scripts.pory"
	case 152, RandomizeMudTile_154
# 495 "data/maps/Route8/scripts.pory"
	case 153, RandomizeMudTile_155
# 498 "data/maps/Route8/scripts.pory"
	case 154, RandomizeMudTile_156
# 502 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 503 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
RandomizeMudTile_1:
	return

RandomizeMudTile_3:
# 40 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 41 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 9
	goto RandomizeMudTile_1

RandomizeMudTile_4:
# 43 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 44 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_5:
# 46 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 47 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_6:
# 49 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 50 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_7:
# 52 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 53 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 8
	goto RandomizeMudTile_1

RandomizeMudTile_8:
# 55 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 56 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 8
	goto RandomizeMudTile_1

RandomizeMudTile_9:
# 58 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 59 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_10:
# 61 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 62 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_11:
# 64 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 65 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_12:
# 67 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 68 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_13:
# 70 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 71 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 9
	goto RandomizeMudTile_1

RandomizeMudTile_14:
# 73 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 74 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 13
	goto RandomizeMudTile_1

RandomizeMudTile_15:
# 76 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 77 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 13
	goto RandomizeMudTile_1

RandomizeMudTile_16:
# 79 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 80 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_17:
# 82 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 83 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_18:
# 85 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 86 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_19:
# 88 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 89 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_20:
# 91 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 92 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_21:
# 94 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 95 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_22:
# 97 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 44
# 98 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_23:
# 100 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 101 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_24:
# 103 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 104 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_25:
# 106 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 107 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_26:
# 109 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 44
# 110 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_27:
# 112 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 113 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_28:
# 115 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 116 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_29:
# 118 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 119 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_30:
# 121 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 122 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_31:
# 124 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 125 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_32:
# 127 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 128 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_33:
# 130 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 131 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_34:
# 133 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 134 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_35:
# 136 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 39
# 137 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_36:
# 139 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 140 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_37:
# 142 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 143 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_38:
# 145 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 146 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_39:
# 148 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 149 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 19
	goto RandomizeMudTile_1

RandomizeMudTile_40:
# 151 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 152 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 19
	goto RandomizeMudTile_1

RandomizeMudTile_41:
# 154 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 155 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_42:
# 157 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 158 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_43:
# 160 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 161 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_44:
# 163 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 164 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_45:
# 166 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 34
# 167 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_46:
# 169 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 170 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_47:
# 172 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 34
# 173 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_48:
# 175 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 176 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_49:
# 178 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 179 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_50:
# 181 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 182 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_51:
# 184 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 185 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_52:
# 187 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 188 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_53:
# 190 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 191 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_54:
# 193 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 194 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_55:
# 196 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 197 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_56:
# 199 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 200 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_57:
# 202 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 203 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_58:
# 205 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 51
# 206 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_59:
# 208 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 209 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_60:
# 211 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 212 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_61:
# 214 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 215 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_62:
# 217 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 218 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 46
	goto RandomizeMudTile_1

RandomizeMudTile_63:
# 220 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 221 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 46
	goto RandomizeMudTile_1

RandomizeMudTile_64:
# 223 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 224 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_65:
# 226 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 227 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_66:
# 229 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 230 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_67:
# 232 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 233 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_68:
# 235 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 236 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_69:
# 238 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 239 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_70:
# 241 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 242 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_71:
# 244 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 245 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 22
	goto RandomizeMudTile_1

RandomizeMudTile_72:
# 247 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 248 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 24
	goto RandomizeMudTile_1

RandomizeMudTile_73:
# 250 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 251 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_74:
# 253 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 254 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_75:
# 256 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 257 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_76:
# 259 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 260 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_77:
# 262 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 263 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_78:
# 265 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 51
# 266 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_79:
# 268 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 22
# 269 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_80:
# 271 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 23
# 272 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_81:
# 274 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 24
# 275 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_82:
# 277 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 25
# 278 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_83:
# 280 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 281 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_84:
# 283 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 284 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_85:
# 286 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 28
# 287 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_86:
# 289 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 29
# 290 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_87:
# 292 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 30
# 293 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_88:
# 295 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 296 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_89:
# 298 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 299 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_90:
# 301 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 302 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_91:
# 304 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 305 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_92:
# 307 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 17
# 308 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_93:
# 310 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 311 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_94:
# 313 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 314 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_95:
# 316 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 317 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_96:
# 319 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 320 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_97:
# 322 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 323 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_98:
# 325 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 326 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_99:
# 328 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 329 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_100:
# 331 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 51
# 332 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_101:
# 334 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 335 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_102:
# 337 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 338 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_103:
# 340 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 341 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_104:
# 343 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 344 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_105:
# 346 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 347 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_106:
# 349 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 350 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_107:
# 352 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 28
# 353 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_108:
# 355 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 356 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_109:
# 358 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 359 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_110:
# 361 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 28
# 362 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_111:
# 364 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 42
# 365 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_112:
# 367 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 41
# 368 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_113:
# 370 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 42
# 371 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_114:
# 373 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 41
# 374 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_115:
# 376 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 42
# 377 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_116:
# 379 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 380 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_117:
# 382 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 383 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_118:
# 385 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 386 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_119:
# 388 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 17
# 389 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_120:
# 391 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 392 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_121:
# 394 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 395 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_122:
# 397 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 17
# 398 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_123:
# 400 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 401 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_124:
# 403 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 404 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_125:
# 406 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 407 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_126:
# 409 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 410 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_127:
# 412 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 413 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_128:
# 415 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 54
# 416 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_129:
# 418 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 419 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_130:
# 421 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 422 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_131:
# 424 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 425 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_132:
# 427 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 22
# 428 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_133:
# 430 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 23
# 431 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_134:
# 433 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 24
# 434 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_135:
# 436 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 25
# 437 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_136:
# 439 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 440 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_137:
# 442 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 443 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_138:
# 445 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 446 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_139:
# 448 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 449 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_140:
# 451 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 452 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_141:
# 454 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 29
# 455 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_142:
# 457 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 458 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_143:
# 460 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 461 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_144:
# 463 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 464 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_145:
# 466 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 467 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_146:
# 469 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 470 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_147:
# 472 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 473 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_148:
# 475 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 23
# 476 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_149:
# 478 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 24
# 479 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_150:
# 481 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 25
# 482 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_151:
# 484 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 485 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_152:
# 487 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 488 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_153:
# 490 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 63
# 491 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_154:
# 493 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 63
# 494 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_155:
# 496 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 497 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 42
	goto RandomizeMudTile_1

RandomizeMudTile_156:
# 499 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 500 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1


Route8_MudPile::
# 514 "data/maps/Route8/scripts.pory"
	call RandomizeMudRewards
# 515 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_eq Route8_MudPile_2
# 522 "data/maps/Route8/scripts.pory"
	playse SE_SELECT
# 523 "data/maps/Route8/scripts.pory"
	waitse
# 524 "data/maps/Route8/scripts.pory"
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x291, FALSE
# 525 "data/maps/Route8/scripts.pory"
	special DrawWholeMapView
# 526 "data/maps/Route8/scripts.pory"
	random 10
# 527 "data/maps/Route8/scripts.pory"
	switch VAR_RESULT
# 528 "data/maps/Route8/scripts.pory"
	case 0, Route8_MudPile_6
# 529 "data/maps/Route8/scripts.pory"
	case 1, Route8_MudPile_6
# 530 "data/maps/Route8/scripts.pory"
	case 2, Route8_MudPile_6
# 531 "data/maps/Route8/scripts.pory"
	case 3, Route8_MudPile_6
# 532 "data/maps/Route8/scripts.pory"
	case 4, Route8_MudPile_6
# 533 "data/maps/Route8/scripts.pory"
	case 5, Route8_MudPile_6
# 539 "data/maps/Route8/scripts.pory"
	case 6, Route8_MudPile_7
# 540 "data/maps/Route8/scripts.pory"
	case 7, Route8_MudPile_7
# 541 "data/maps/Route8/scripts.pory"
	case 8, Route8_MudPile_7
# 550 "data/maps/Route8/scripts.pory"
	case 9, Route8_MudPile_8
Route8_MudPile_4:
# 560 "data/maps/Route8/scripts.pory"
	msgbox PutMudAway
# 561 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_A, VAR_MUD_X
# 562 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_B, VAR_MUD_X
# 563 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_C, VAR_MUD_Y
# 564 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_D, VAR_MUD_Y
# 565 "data/maps/Route8/scripts.pory"
	addvar VAR_TEMP_A, 9
# 566 "data/maps/Route8/scripts.pory"
	subvar VAR_TEMP_B, 9
# 567 "data/maps/Route8/scripts.pory"
	addvar VAR_TEMP_C, 7
# 568 "data/maps/Route8/scripts.pory"
	subvar VAR_TEMP_D, 7
Route8_MudPile_10:
# 569 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_X, VAR_TEMP_A
	goto_if_le Route8_MudPile_13
Route8_MudPile_9:
# 573 "data/maps/Route8/scripts.pory"
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x344, FALSE
# 574 "data/maps/Route8/scripts.pory"
	special DrawWholeMapView
# 575 "data/maps/Route8/scripts.pory"
	release
	end

Route8_MudPile_2:
# 516 "data/maps/Route8/scripts.pory"
	lock
# 517 "data/maps/Route8/scripts.pory"
	msgbox ObtainedMud
# 518 "data/maps/Route8/scripts.pory"
	msgbox SampleBoxFull
# 519 "data/maps/Route8/scripts.pory"
	release
	end

Route8_MudPile_6:
# 534 "data/maps/Route8/scripts.pory"
	bufferstring STR_VAR_1, Route8_MudPile_Text_0
# 535 "data/maps/Route8/scripts.pory"
	addvar VAR_MUD_SAMPLES, 1
# 536 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 537 "data/maps/Route8/scripts.pory"
	message ObtainedMud
# 538 "data/maps/Route8/scripts.pory"
	waitfanfare
	goto Route8_MudPile_4

Route8_MudPile_7:
# 542 "data/maps/Route8/scripts.pory"
	bufferstring STR_VAR_1, Route8_MudPile_Text_1
# 543 "data/maps/Route8/scripts.pory"
	addvar VAR_MUD_SAMPLES, 2
# 544 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 545 "data/maps/Route8/scripts.pory"
	message Obtained2Mud
# 546 "data/maps/Route8/scripts.pory"
	waitfanfare
# 547 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_ge Route8_MudPile_19
	goto Route8_MudPile_4

Route8_MudPile_8:
# 551 "data/maps/Route8/scripts.pory"
	bufferstring STR_VAR_1, Route8_MudPile_Text_1
# 552 "data/maps/Route8/scripts.pory"
	addvar VAR_MUD_SAMPLES, 3
# 553 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 554 "data/maps/Route8/scripts.pory"
	message Obtained3Mud
# 555 "data/maps/Route8/scripts.pory"
	waitfanfare
# 556 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_ge Route8_MudPile_21
	goto Route8_MudPile_4

Route8_MudPile_11:
# 571 "data/maps/Route8/scripts.pory"
	call RandomizeMudTile
	goto Route8_MudPile_10

Route8_MudPile_12:
# 570 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_Y, VAR_TEMP_C
	goto_if_le Route8_MudPile_16
	goto Route8_MudPile_9

Route8_MudPile_13:
# 569 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_X, VAR_TEMP_B
	goto_if_ge Route8_MudPile_12
	goto Route8_MudPile_9

Route8_MudPile_16:
# 570 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_Y, VAR_TEMP_D
	goto_if_ge Route8_MudPile_11
	goto Route8_MudPile_9

Route8_MudPile_19:
# 548 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_SAMPLES, 30
	goto Route8_MudPile_4

Route8_MudPile_21:
# 557 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_SAMPLES, 30
	goto Route8_MudPile_4


RandomizeMudRewards::
# 580 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_1, 0
	goto_if_eq RandomizeMudRewards_2
RandomizeMudRewards_1:
# 584 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_2, 0
	goto_if_eq RandomizeMudRewards_5
RandomizeMudRewards_4:
# 588 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_3, 0
	goto_if_eq RandomizeMudRewards_8
RandomizeMudRewards_7:
# 592 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_4, 0
	goto_if_eq RandomizeMudRewards_11
RandomizeMudRewards_10:
# 596 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_5, 0
	goto_if_eq RandomizeMudRewards_14
RandomizeMudRewards_13:
# 600 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_6, 0
	goto_if_eq RandomizeMudRewards_17
RandomizeMudRewards_16:
# 604 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_7, 0
	goto_if_eq RandomizeMudRewards_20
RandomizeMudRewards_19:
# 608 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_8, 0
	goto_if_eq RandomizeMudRewards_23
RandomizeMudRewards_22:
# 612 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_9, 0
	goto_if_eq RandomizeMudRewards_26
RandomizeMudRewards_25:
# 616 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_10, 0
	goto_if_eq RandomizeMudRewards_29
RandomizeMudRewards_28:
	return

RandomizeMudRewards_2:
# 581 "data/maps/Route8/scripts.pory"
	random 100
# 582 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_1, VAR_RESULT
	goto RandomizeMudRewards_1

RandomizeMudRewards_5:
# 585 "data/maps/Route8/scripts.pory"
	random 100
# 586 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_2, VAR_RESULT
	goto RandomizeMudRewards_4

RandomizeMudRewards_8:
# 589 "data/maps/Route8/scripts.pory"
	random 100
# 590 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_3, VAR_RESULT
	goto RandomizeMudRewards_7

RandomizeMudRewards_11:
# 593 "data/maps/Route8/scripts.pory"
	random 100
# 594 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_4, VAR_RESULT
	goto RandomizeMudRewards_10

RandomizeMudRewards_14:
# 597 "data/maps/Route8/scripts.pory"
	random 100
# 598 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_5, VAR_RESULT
	goto RandomizeMudRewards_13

RandomizeMudRewards_17:
# 601 "data/maps/Route8/scripts.pory"
	random 100
# 602 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_6, VAR_RESULT
	goto RandomizeMudRewards_16

RandomizeMudRewards_20:
# 605 "data/maps/Route8/scripts.pory"
	random 100
# 606 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_7, VAR_RESULT
	goto RandomizeMudRewards_19

RandomizeMudRewards_23:
# 609 "data/maps/Route8/scripts.pory"
	random 100
# 610 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_8, VAR_RESULT
	goto RandomizeMudRewards_22

RandomizeMudRewards_26:
# 613 "data/maps/Route8/scripts.pory"
	random 100
# 614 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_9, VAR_RESULT
	goto RandomizeMudRewards_25

RandomizeMudRewards_29:
# 617 "data/maps/Route8/scripts.pory"
	random 100
# 618 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_10, VAR_RESULT
	goto RandomizeMudRewards_28


Route7_Trainer1_Camper::
# 638 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR1_CAMPER, Route7_Trainer1_Camper_Intro, Route7_Trainer1_Camper_Defeat
# 639 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer2_Picnicker::
# 657 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR2_PICNICKER, Route7_Trainer2_Picnicker_Intro, Route7_Trainer2_Picnicker_Defeat
# 658 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer2_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer3_Ninjaboy::
# 679 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_UNUSED_172_, Route7_Trainer3_Ninjaboy_Intro, Route7_Trainer3_Ninjaboy_Defeat
# 680 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer3_Ninjaboy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer4_Birdkeeper::
# 698 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR4_BIRDKEEPER, Route7_Trainer4_Birdkeeper_Intro, Route7_Trainer4_Birdkeeper_Defeat
# 699 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer4_Birdkeeper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer5_Blackbelt::
# 719 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR5_BLACKBELT, Route7_Trainer5_Blackbelt_Intro, Route7_Trainer5_Blackbelt_Defeat
# 720 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer5_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer6_Picnicker2::
# 739 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR6_PICNICKER2, Route7_Trainer6_Picnicker2_Intro, Route7_Trainer6_Picnicker2_Defeat
# 740 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer6_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer7_Fisherman::
# 760 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR7_FISHERMAN, Route7_Trainer7_Fisherman_Intro, Route7_Trainer7_Fisherman_Defeat
# 761 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer7_Fisherman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer8_Hiker::
# 782 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR8_HIKER, Route7_Trainer8_Hiker_Intro, Route7_Trainer8_Hiker_Defeat
# 783 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer8_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer9_Parasollady::
# 804 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR9_PARASOLLADY, Route7_Trainer9_Parasollady_Intro, Route7_Trainer9_Parasollady_Defeat
# 805 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer9_Parasollady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer10_NinjaBoy::
# 825 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR10_NINJABOY, Route7_Trainer10_NinjaBoy_Intro, Route7_Trainer10_NinjaBoy_Defeat
# 826 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer10_NinjaBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Ball1::
# 844 "data/maps/Route8/scripts.pory"
	finditem ITEM_HP_UP
	end


Route7_Ball2::
# 848 "data/maps/Route8/scripts.pory"
	finditem ITEM_FULL_HEAL
	end


Route8_SoMuchMud::
# 853 "data/maps/Route8/scripts.pory"
	msgbox Route8_SoMuchMud_Text, MSGBOX_NPC
	end


Route7_Wooper_Wet::
# 864 "data/maps/Route8/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_WOOPER
# 865 "data/maps/Route8/scripts.pory"
	goto Route7_Wooper_Main
	return


Route7_Wooper_Dry::
# 868 "data/maps/Route8/scripts.pory"
	setvar VAR_TEMP_0, SPECIES_WOOPER_OUTSIDER
# 869 "data/maps/Route8/scripts.pory"
	goto Route7_Wooper_Main
	return


Route7_Wooper_Main::
# 872 "data/maps/Route8/scripts.pory"
	lock
# 873 "data/maps/Route8/scripts.pory"
	faceplayer
# 874 "data/maps/Route8/scripts.pory"
	waitse
# 875 "data/maps/Route8/scripts.pory"
	playmoncry VAR_TEMP_0, CRY_MODE_FAINT
# 876 "data/maps/Route8/scripts.pory"
	msgbox Route7_Wooper_Main_Text_0
# 877 "data/maps/Route8/scripts.pory"
	waitmoncry
# 878 "data/maps/Route8/scripts.pory"
	release
	end


Route7_Youngster_Wet::
# 882 "data/maps/Route8/scripts.pory"
	msgbox Route7_Youngster_Wet_Text, MSGBOX_NPC
	return


Route7_Youngster_Dry::
# 885 "data/maps/Route8/scripts.pory"
	msgbox Route7_Youngster_Dry_Text, MSGBOX_NPC
	return


Route8_MudPile_Text_0:
# 534 "data/maps/Route8/scripts.pory"
	.string "sample$"

Route8_MudPile_Text_1:
# 542 "data/maps/Route8/scripts.pory"
	.string "samples$"

Route7_Wooper_Main_Text_0:
# 876 "data/maps/Route8/scripts.pory"
	.string "Wooper: Woop…$"

SampleBoxFull::
# 508 "data/maps/Route8/scripts.pory"
	.string "Too bad!\n"
	.string "The Sample Box is full…$"

ObtainedMud::
# 623 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} obtained a sample of mud!$"

Obtained2Mud::
# 626 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} obtained 2 samples of mud!$"

Obtained3Mud::
# 629 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} obtained 3 samples of mud!$"

PutMudAway::
# 632 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1} of mud\n"
	.string "in the Sample Box.$"

Route7_Trainer1_Camper_Intro::
# 643 "data/maps/Route8/scripts.pory"
	.string "Only the strong can get through\n"
	.string "the desert.\l"
	.string "Let's see just how strong you are!$"

Route7_Trainer1_Camper_Defeat::
# 648 "data/maps/Route8/scripts.pory"
	.string "Too strong!$"

Route7_Trainer1_Camper_PostBattle::
# 651 "data/maps/Route8/scripts.pory"
	.string "I bet you had no trouble getting\n"
	.string "through the desert.$"

Route7_Trainer2_Picnicker_Intro::
# 662 "data/maps/Route8/scripts.pory"
	.string "I bought new boots, so I came\n"
	.string "all this way to get them dirty.\p"
	.string "You're right! If I have a battle,\n"
	.string "they may get even dirtier!$"

Route7_Trainer2_Picnicker_Defeat::
# 668 "data/maps/Route8/scripts.pory"
	.string "Oh! My boots got completely soaked\n"
	.string "in the battle!$"

Route7_Trainer2_Picnicker_PostBattle::
# 672 "data/maps/Route8/scripts.pory"
	.string "I hope you brought some boots as well.\n"
	.string "Wading through all this mud\l"
	.string "without proper gear will be a slog!$"

Route7_Trainer3_Ninjaboy_Intro::
# 684 "data/maps/Route8/scripts.pory"
	.string "Ninjas are swift as arrows!\n"
	.string "No amount of mud will stop us!$"

Route7_Trainer3_Ninjaboy_Defeat::
# 688 "data/maps/Route8/scripts.pory"
	.string "I may outmatch you in speed,\n"
	.string "but not in strength…$"

Route7_Trainer3_Ninjaboy_PostBattle::
# 692 "data/maps/Route8/scripts.pory"
	.string "Ninjas may be fast, but my Pokémon\n"
	.string "clearly got slowed by the mud.$"

Route7_Trainer4_Birdkeeper_Intro::
# 703 "data/maps/Route8/scripts.pory"
	.string "The ground Pokémon here have no chance\n"
	.string "against my flying Pokémon!\l"
	.string "And neither do you!$"

Route7_Trainer4_Birdkeeper_Defeat::
# 708 "data/maps/Route8/scripts.pory"
	.string "Spoke too soon…$"

Route7_Trainer4_Birdkeeper_PostBattle::
# 711 "data/maps/Route8/scripts.pory"
	.string "I could use my Pokémon to fly over this\n"
	.string "dreary place but I prefer doing things\l"
	.string "the hard way.\l"
	.string "Really builds the character.$"

Route7_Trainer5_Blackbelt_Intro::
# 724 "data/maps/Route8/scripts.pory"
	.string "Training in the mud has made my Pokémon\n"
	.string "faster than ever.\p"
	.string "Here, let me show you!$"

Route7_Trainer5_Blackbelt_Defeat::
# 729 "data/maps/Route8/scripts.pory"
	.string "I will admit my defeat gracefully…$"

Route7_Trainer5_Blackbelt_PostBattle::
# 732 "data/maps/Route8/scripts.pory"
	.string "I can't believe I lost after\n"
	.string "all my training.\p"
	.string "I'm a disgrace…$"

Route7_Trainer6_Picnicker2_Intro::
# 744 "data/maps/Route8/scripts.pory"
	.string "Pokémon trainers nurture friendship\n"
	.string "with their battles!$"

Route7_Trainer6_Picnicker2_Defeat::
# 748 "data/maps/Route8/scripts.pory"
	.string "This feeling of defeat…\n"
	.string "is like a bottomless swamp…$"

Route7_Trainer6_Picnicker2_PostBattle::
# 752 "data/maps/Route8/scripts.pory"
	.string "I'm researching what kinds of\n"
	.string "Pokémon live around here.\p"
	.string "That way, I can plan which Pokémon\n"
	.string "I should take along.$"

Route7_Trainer7_Fisherman_Intro::
# 765 "data/maps/Route8/scripts.pory"
	.string "I can't and will not stop fishing.\p"
	.string "Though when it comes to battling,\n"
	.string "I can make an exception.$"

Route7_Trainer7_Fisherman_Defeat::
# 770 "data/maps/Route8/scripts.pory"
	.string "Battling was a mistake.\n"
	.string "I should just stick to fishing!$"

Route7_Trainer7_Fisherman_PostBattle::
# 774 "data/maps/Route8/scripts.pory"
	.string "If I find water, I drop in my\n"
	.string "fishing line.\p"
	.string "Even with a puddle, there may be\n"
	.string "Pokémon that I've never seen.$"

Route7_Trainer8_Hiker_Intro::
# 787 "data/maps/Route8/scripts.pory"
	.string "This Hiker wandering the world will\n"
	.string "teach a child like you the harshness\l"
	.string "of life and the difficulty of\l"
	.string "Pokémon battles!$"

Route7_Trainer8_Hiker_Defeat::
# 793 "data/maps/Route8/scripts.pory"
	.string "The teacher was schooled…\n"
	.string "You're very strict, aren't you?$"

Route7_Trainer8_Hiker_PostBattle::
# 797 "data/maps/Route8/scripts.pory"
	.string "Looks like there is really nothing\n"
	.string "an old hiker like myself can teach you.\l"
	.string "You are the teacher now.$"

Route7_Trainer9_Parasollady_Intro::
# 809 "data/maps/Route8/scripts.pory"
	.string "Look! This is my favorite parasol!\n"
	.string "Oh, and my fabulous Pokémon!$"

Route7_Trainer9_Parasollady_Defeat::
# 813 "data/maps/Route8/scripts.pory"
	.string "You were only supposed to look…$"

Route7_Trainer9_Parasollady_PostBattle::
# 816 "data/maps/Route8/scripts.pory"
	.string "You're probably wondering why I'm\n"
	.string "carrying a parasol here.\p"
	.string "When your Pokémon jumps in a puddle\n"
	.string "of mud, you wish you'd have a parasol\l"
	.string "in hand.$"

Route7_Trainer10_NinjaBoy_Intro::
# 830 "data/maps/Route8/scripts.pory"
	.string "I shall become a real ninja when\n"
	.string "I grow up!$"

Route7_Trainer10_NinjaBoy_Defeat::
# 834 "data/maps/Route8/scripts.pory"
	.string "Excellent! Excellent!$"

Route7_Trainer10_NinjaBoy_PostBattle::
# 837 "data/maps/Route8/scripts.pory"
	.string "So, what's a real ninja supposed to\n"
	.string "do?$"

Route8_SoMuchMud_Text::
# 856 "data/maps/Route8/scripts.pory"
	.string "Ugh… Look at all this mud.\p"
	.string "How is a fine lady such as myself\n"
	.string "expected to get across without\l"
	.string "getting my dress dirty?$"

Route7_Youngster_Wet_Text::
# 887 "data/maps/Route8/scripts.pory"
	.string "I heard there was supposed to be\n"
	.string "a huge pond here that Pokémon could\l"
	.string "freely swim in.\p"
	.string "I guess it's too warm for that\n"
	.string "right now…$"

Route7_Youngster_Dry_Text::
# 894 "data/maps/Route8/scripts.pory"
	.string "I heard there was supposed to be\n"
	.string "a huge mud pool here that Pokémon\l"
	.string "could freely frolic in.\p"
	.string "I guess it's too wet for that\n"
	.string "right now…$"
