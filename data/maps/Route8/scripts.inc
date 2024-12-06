Route8_MapScripts::
# 2 "data/maps/Route8/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, InitRoute8
# 3 "data/maps/Route8/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LoadMudTile
	.byte 0


InitRoute8::
# 7 "data/maps/Route8/scripts.pory"
	goto_if_set FLAG_DEVON_UNDER_ATTACK, InitRoute8_2
InitRoute8_1:
# 10 "data/maps/Route8/scripts.pory"
	clearflag FLAG_INCREASED_SHINY_ODDS
# 11 "data/maps/Route8/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 12 "data/maps/Route8/scripts.pory"
	checkitem ITEM_SAMPLE_BOX
	end

InitRoute8_2:
# 8 "data/maps/Route8/scripts.pory"
	setflag FLAG_DEVON_RESCUED
	goto InitRoute8_1


LoadMudTile::
# 17 "data/maps/Route8/scripts.pory"
	checkitem ITEM_SAMPLE_BOX
# 18 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_X, 0
	goto_if_eq LoadMudTile_3
LoadMudTile_1:
# 21 "data/maps/Route8/scripts.pory"
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x344, FALSE
	return

LoadMudTile_2:
# 19 "data/maps/Route8/scripts.pory"
	call RandomizeMudTile
	goto LoadMudTile_1

LoadMudTile_3:
# 18 "data/maps/Route8/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LoadMudTile_2
	goto LoadMudTile_1


RandomizeMudTile::
# 25 "data/maps/Route8/scripts.pory"
	random 155
# 26 "data/maps/Route8/scripts.pory"
	switch VAR_RESULT
# 27 "data/maps/Route8/scripts.pory"
	case 0, RandomizeMudTile_3
# 30 "data/maps/Route8/scripts.pory"
	case 1, RandomizeMudTile_4
# 33 "data/maps/Route8/scripts.pory"
	case 2, RandomizeMudTile_5
# 36 "data/maps/Route8/scripts.pory"
	case 3, RandomizeMudTile_6
# 39 "data/maps/Route8/scripts.pory"
	case 4, RandomizeMudTile_7
# 42 "data/maps/Route8/scripts.pory"
	case 6, RandomizeMudTile_8
# 45 "data/maps/Route8/scripts.pory"
	case 7, RandomizeMudTile_9
# 48 "data/maps/Route8/scripts.pory"
	case 8, RandomizeMudTile_10
# 51 "data/maps/Route8/scripts.pory"
	case 9, RandomizeMudTile_11
# 54 "data/maps/Route8/scripts.pory"
	case 10, RandomizeMudTile_12
# 57 "data/maps/Route8/scripts.pory"
	case 11, RandomizeMudTile_13
# 60 "data/maps/Route8/scripts.pory"
	case 12, RandomizeMudTile_14
# 63 "data/maps/Route8/scripts.pory"
	case 13, RandomizeMudTile_15
# 66 "data/maps/Route8/scripts.pory"
	case 14, RandomizeMudTile_16
# 69 "data/maps/Route8/scripts.pory"
	case 15, RandomizeMudTile_17
# 72 "data/maps/Route8/scripts.pory"
	case 16, RandomizeMudTile_18
# 75 "data/maps/Route8/scripts.pory"
	case 17, RandomizeMudTile_19
# 78 "data/maps/Route8/scripts.pory"
	case 18, RandomizeMudTile_20
# 81 "data/maps/Route8/scripts.pory"
	case 19, RandomizeMudTile_21
# 84 "data/maps/Route8/scripts.pory"
	case 20, RandomizeMudTile_22
# 87 "data/maps/Route8/scripts.pory"
	case 21, RandomizeMudTile_23
# 90 "data/maps/Route8/scripts.pory"
	case 22, RandomizeMudTile_24
# 93 "data/maps/Route8/scripts.pory"
	case 23, RandomizeMudTile_25
# 96 "data/maps/Route8/scripts.pory"
	case 24, RandomizeMudTile_26
# 99 "data/maps/Route8/scripts.pory"
	case 25, RandomizeMudTile_27
# 102 "data/maps/Route8/scripts.pory"
	case 26, RandomizeMudTile_28
# 105 "data/maps/Route8/scripts.pory"
	case 27, RandomizeMudTile_29
# 108 "data/maps/Route8/scripts.pory"
	case 28, RandomizeMudTile_30
# 111 "data/maps/Route8/scripts.pory"
	case 29, RandomizeMudTile_31
# 114 "data/maps/Route8/scripts.pory"
	case 30, RandomizeMudTile_32
# 117 "data/maps/Route8/scripts.pory"
	case 31, RandomizeMudTile_33
# 120 "data/maps/Route8/scripts.pory"
	case 32, RandomizeMudTile_34
# 123 "data/maps/Route8/scripts.pory"
	case 33, RandomizeMudTile_35
# 126 "data/maps/Route8/scripts.pory"
	case 34, RandomizeMudTile_36
# 129 "data/maps/Route8/scripts.pory"
	case 35, RandomizeMudTile_37
# 132 "data/maps/Route8/scripts.pory"
	case 36, RandomizeMudTile_38
# 135 "data/maps/Route8/scripts.pory"
	case 37, RandomizeMudTile_39
# 138 "data/maps/Route8/scripts.pory"
	case 38, RandomizeMudTile_40
# 141 "data/maps/Route8/scripts.pory"
	case 39, RandomizeMudTile_41
# 144 "data/maps/Route8/scripts.pory"
	case 40, RandomizeMudTile_42
# 147 "data/maps/Route8/scripts.pory"
	case 41, RandomizeMudTile_43
# 150 "data/maps/Route8/scripts.pory"
	case 42, RandomizeMudTile_44
# 153 "data/maps/Route8/scripts.pory"
	case 43, RandomizeMudTile_45
# 156 "data/maps/Route8/scripts.pory"
	case 44, RandomizeMudTile_46
# 159 "data/maps/Route8/scripts.pory"
	case 45, RandomizeMudTile_47
# 162 "data/maps/Route8/scripts.pory"
	case 46, RandomizeMudTile_48
# 165 "data/maps/Route8/scripts.pory"
	case 47, RandomizeMudTile_49
# 168 "data/maps/Route8/scripts.pory"
	case 48, RandomizeMudTile_50
# 171 "data/maps/Route8/scripts.pory"
	case 49, RandomizeMudTile_51
# 174 "data/maps/Route8/scripts.pory"
	case 50, RandomizeMudTile_52
# 177 "data/maps/Route8/scripts.pory"
	case 51, RandomizeMudTile_53
# 180 "data/maps/Route8/scripts.pory"
	case 52, RandomizeMudTile_54
# 183 "data/maps/Route8/scripts.pory"
	case 53, RandomizeMudTile_55
# 186 "data/maps/Route8/scripts.pory"
	case 54, RandomizeMudTile_56
# 189 "data/maps/Route8/scripts.pory"
	case 55, RandomizeMudTile_57
# 192 "data/maps/Route8/scripts.pory"
	case 56, RandomizeMudTile_58
# 195 "data/maps/Route8/scripts.pory"
	case 57, RandomizeMudTile_59
# 198 "data/maps/Route8/scripts.pory"
	case 58, RandomizeMudTile_60
# 201 "data/maps/Route8/scripts.pory"
	case 59, RandomizeMudTile_61
# 204 "data/maps/Route8/scripts.pory"
	case 60, RandomizeMudTile_62
# 207 "data/maps/Route8/scripts.pory"
	case 61, RandomizeMudTile_63
# 210 "data/maps/Route8/scripts.pory"
	case 62, RandomizeMudTile_64
# 213 "data/maps/Route8/scripts.pory"
	case 63, RandomizeMudTile_65
# 216 "data/maps/Route8/scripts.pory"
	case 64, RandomizeMudTile_66
# 219 "data/maps/Route8/scripts.pory"
	case 65, RandomizeMudTile_67
# 222 "data/maps/Route8/scripts.pory"
	case 66, RandomizeMudTile_68
# 225 "data/maps/Route8/scripts.pory"
	case 67, RandomizeMudTile_69
# 228 "data/maps/Route8/scripts.pory"
	case 68, RandomizeMudTile_70
# 231 "data/maps/Route8/scripts.pory"
	case 69, RandomizeMudTile_71
# 234 "data/maps/Route8/scripts.pory"
	case 70, RandomizeMudTile_72
# 237 "data/maps/Route8/scripts.pory"
	case 71, RandomizeMudTile_73
# 240 "data/maps/Route8/scripts.pory"
	case 72, RandomizeMudTile_74
# 243 "data/maps/Route8/scripts.pory"
	case 73, RandomizeMudTile_75
# 246 "data/maps/Route8/scripts.pory"
	case 74, RandomizeMudTile_76
# 249 "data/maps/Route8/scripts.pory"
	case 75, RandomizeMudTile_77
# 252 "data/maps/Route8/scripts.pory"
	case 76, RandomizeMudTile_78
# 255 "data/maps/Route8/scripts.pory"
	case 77, RandomizeMudTile_79
# 258 "data/maps/Route8/scripts.pory"
	case 78, RandomizeMudTile_80
# 261 "data/maps/Route8/scripts.pory"
	case 79, RandomizeMudTile_81
# 264 "data/maps/Route8/scripts.pory"
	case 80, RandomizeMudTile_82
# 267 "data/maps/Route8/scripts.pory"
	case 81, RandomizeMudTile_83
# 270 "data/maps/Route8/scripts.pory"
	case 82, RandomizeMudTile_84
# 273 "data/maps/Route8/scripts.pory"
	case 83, RandomizeMudTile_85
# 276 "data/maps/Route8/scripts.pory"
	case 84, RandomizeMudTile_86
# 279 "data/maps/Route8/scripts.pory"
	case 85, RandomizeMudTile_87
# 282 "data/maps/Route8/scripts.pory"
	case 86, RandomizeMudTile_88
# 285 "data/maps/Route8/scripts.pory"
	case 87, RandomizeMudTile_89
# 288 "data/maps/Route8/scripts.pory"
	case 88, RandomizeMudTile_90
# 291 "data/maps/Route8/scripts.pory"
	case 89, RandomizeMudTile_91
# 294 "data/maps/Route8/scripts.pory"
	case 90, RandomizeMudTile_92
# 297 "data/maps/Route8/scripts.pory"
	case 91, RandomizeMudTile_93
# 300 "data/maps/Route8/scripts.pory"
	case 92, RandomizeMudTile_94
# 303 "data/maps/Route8/scripts.pory"
	case 93, RandomizeMudTile_95
# 306 "data/maps/Route8/scripts.pory"
	case 94, RandomizeMudTile_96
# 309 "data/maps/Route8/scripts.pory"
	case 95, RandomizeMudTile_97
# 312 "data/maps/Route8/scripts.pory"
	case 96, RandomizeMudTile_98
# 315 "data/maps/Route8/scripts.pory"
	case 97, RandomizeMudTile_99
# 318 "data/maps/Route8/scripts.pory"
	case 98, RandomizeMudTile_100
# 321 "data/maps/Route8/scripts.pory"
	case 99, RandomizeMudTile_101
# 324 "data/maps/Route8/scripts.pory"
	case 101, RandomizeMudTile_102
# 327 "data/maps/Route8/scripts.pory"
	case 102, RandomizeMudTile_103
# 330 "data/maps/Route8/scripts.pory"
	case 103, RandomizeMudTile_104
# 333 "data/maps/Route8/scripts.pory"
	case 104, RandomizeMudTile_105
# 336 "data/maps/Route8/scripts.pory"
	case 105, RandomizeMudTile_106
# 339 "data/maps/Route8/scripts.pory"
	case 106, RandomizeMudTile_107
# 342 "data/maps/Route8/scripts.pory"
	case 107, RandomizeMudTile_108
# 345 "data/maps/Route8/scripts.pory"
	case 108, RandomizeMudTile_109
# 348 "data/maps/Route8/scripts.pory"
	case 109, RandomizeMudTile_110
# 351 "data/maps/Route8/scripts.pory"
	case 100, RandomizeMudTile_111
# 354 "data/maps/Route8/scripts.pory"
	case 110, RandomizeMudTile_112
# 357 "data/maps/Route8/scripts.pory"
	case 111, RandomizeMudTile_113
# 360 "data/maps/Route8/scripts.pory"
	case 112, RandomizeMudTile_114
# 363 "data/maps/Route8/scripts.pory"
	case 113, RandomizeMudTile_115
# 366 "data/maps/Route8/scripts.pory"
	case 114, RandomizeMudTile_116
# 369 "data/maps/Route8/scripts.pory"
	case 115, RandomizeMudTile_117
# 372 "data/maps/Route8/scripts.pory"
	case 116, RandomizeMudTile_118
# 375 "data/maps/Route8/scripts.pory"
	case 117, RandomizeMudTile_119
# 378 "data/maps/Route8/scripts.pory"
	case 118, RandomizeMudTile_120
# 381 "data/maps/Route8/scripts.pory"
	case 119, RandomizeMudTile_121
# 384 "data/maps/Route8/scripts.pory"
	case 120, RandomizeMudTile_122
# 387 "data/maps/Route8/scripts.pory"
	case 121, RandomizeMudTile_123
# 390 "data/maps/Route8/scripts.pory"
	case 122, RandomizeMudTile_124
# 393 "data/maps/Route8/scripts.pory"
	case 123, RandomizeMudTile_125
# 396 "data/maps/Route8/scripts.pory"
	case 124, RandomizeMudTile_126
# 399 "data/maps/Route8/scripts.pory"
	case 125, RandomizeMudTile_127
# 402 "data/maps/Route8/scripts.pory"
	case 126, RandomizeMudTile_128
# 405 "data/maps/Route8/scripts.pory"
	case 127, RandomizeMudTile_129
# 408 "data/maps/Route8/scripts.pory"
	case 128, RandomizeMudTile_130
# 411 "data/maps/Route8/scripts.pory"
	case 129, RandomizeMudTile_131
# 414 "data/maps/Route8/scripts.pory"
	case 130, RandomizeMudTile_132
# 417 "data/maps/Route8/scripts.pory"
	case 131, RandomizeMudTile_133
# 420 "data/maps/Route8/scripts.pory"
	case 132, RandomizeMudTile_134
# 423 "data/maps/Route8/scripts.pory"
	case 133, RandomizeMudTile_135
# 426 "data/maps/Route8/scripts.pory"
	case 134, RandomizeMudTile_136
# 429 "data/maps/Route8/scripts.pory"
	case 135, RandomizeMudTile_137
# 432 "data/maps/Route8/scripts.pory"
	case 136, RandomizeMudTile_138
# 435 "data/maps/Route8/scripts.pory"
	case 137, RandomizeMudTile_139
# 438 "data/maps/Route8/scripts.pory"
	case 138, RandomizeMudTile_140
# 441 "data/maps/Route8/scripts.pory"
	case 139, RandomizeMudTile_141
# 444 "data/maps/Route8/scripts.pory"
	case 140, RandomizeMudTile_142
# 447 "data/maps/Route8/scripts.pory"
	case 141, RandomizeMudTile_143
# 450 "data/maps/Route8/scripts.pory"
	case 142, RandomizeMudTile_144
# 453 "data/maps/Route8/scripts.pory"
	case 143, RandomizeMudTile_145
# 456 "data/maps/Route8/scripts.pory"
	case 144, RandomizeMudTile_146
# 459 "data/maps/Route8/scripts.pory"
	case 145, RandomizeMudTile_147
# 462 "data/maps/Route8/scripts.pory"
	case 146, RandomizeMudTile_148
# 465 "data/maps/Route8/scripts.pory"
	case 147, RandomizeMudTile_149
# 468 "data/maps/Route8/scripts.pory"
	case 148, RandomizeMudTile_150
# 471 "data/maps/Route8/scripts.pory"
	case 149, RandomizeMudTile_151
# 474 "data/maps/Route8/scripts.pory"
	case 150, RandomizeMudTile_152
# 477 "data/maps/Route8/scripts.pory"
	case 151, RandomizeMudTile_153
# 480 "data/maps/Route8/scripts.pory"
	case 152, RandomizeMudTile_154
# 483 "data/maps/Route8/scripts.pory"
	case 153, RandomizeMudTile_155
# 486 "data/maps/Route8/scripts.pory"
	case 154, RandomizeMudTile_156
# 490 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 491 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
RandomizeMudTile_1:
	return

RandomizeMudTile_3:
# 28 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 29 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 9
	goto RandomizeMudTile_1

RandomizeMudTile_4:
# 31 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 32 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_5:
# 34 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 35 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_6:
# 37 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 38 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_7:
# 40 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 41 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 8
	goto RandomizeMudTile_1

RandomizeMudTile_8:
# 43 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 44 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 8
	goto RandomizeMudTile_1

RandomizeMudTile_9:
# 46 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 47 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_10:
# 49 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 50 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_11:
# 52 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 53 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_12:
# 55 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 56 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_13:
# 58 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 59 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 9
	goto RandomizeMudTile_1

RandomizeMudTile_14:
# 61 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 62 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 13
	goto RandomizeMudTile_1

RandomizeMudTile_15:
# 64 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 65 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 13
	goto RandomizeMudTile_1

RandomizeMudTile_16:
# 67 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 68 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_17:
# 70 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 71 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_18:
# 73 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 74 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_19:
# 76 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 77 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_20:
# 79 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 80 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_21:
# 82 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 83 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_22:
# 85 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 44
# 86 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_23:
# 88 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 89 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_24:
# 91 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 92 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_25:
# 94 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 95 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_26:
# 97 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 44
# 98 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_27:
# 100 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 45
# 101 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_28:
# 103 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 104 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_29:
# 106 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 107 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_30:
# 109 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 110 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_31:
# 112 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 113 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_32:
# 115 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 116 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_33:
# 118 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 119 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_34:
# 121 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 122 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_35:
# 124 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 39
# 125 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_36:
# 127 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 128 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_37:
# 130 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 37
# 131 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_38:
# 133 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 38
# 134 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_39:
# 136 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 137 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 19
	goto RandomizeMudTile_1

RandomizeMudTile_40:
# 139 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 140 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 19
	goto RandomizeMudTile_1

RandomizeMudTile_41:
# 142 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 143 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_42:
# 145 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 146 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_43:
# 148 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 149 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_44:
# 151 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 152 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_45:
# 154 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 34
# 155 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_46:
# 157 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 158 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_47:
# 160 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 34
# 161 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_48:
# 163 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 164 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_49:
# 166 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 35
# 167 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_50:
# 169 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 36
# 170 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_51:
# 172 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 173 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_52:
# 175 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 176 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_53:
# 178 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 179 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_54:
# 181 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 182 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_55:
# 184 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 185 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_56:
# 187 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 188 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_57:
# 190 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 191 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_58:
# 193 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 51
# 194 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_59:
# 196 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 197 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_60:
# 199 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 200 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_61:
# 202 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 203 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_62:
# 205 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 206 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 46
	goto RandomizeMudTile_1

RandomizeMudTile_63:
# 208 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 209 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 46
	goto RandomizeMudTile_1

RandomizeMudTile_64:
# 211 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 212 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_65:
# 214 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 215 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_66:
# 217 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 218 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_67:
# 220 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 221 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_68:
# 223 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 224 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_69:
# 226 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 227 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_70:
# 229 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 230 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_71:
# 232 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 233 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 22
	goto RandomizeMudTile_1

RandomizeMudTile_72:
# 235 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 21
# 236 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 24
	goto RandomizeMudTile_1

RandomizeMudTile_73:
# 238 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 239 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_74:
# 241 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 242 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_75:
# 244 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 245 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_76:
# 247 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 248 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_77:
# 250 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 251 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_78:
# 253 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 51
# 254 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_79:
# 256 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 22
# 257 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_80:
# 259 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 23
# 260 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_81:
# 262 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 24
# 263 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_82:
# 265 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 25
# 266 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_83:
# 268 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 269 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_84:
# 271 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 272 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_85:
# 274 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 28
# 275 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_86:
# 277 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 29
# 278 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_87:
# 280 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 30
# 281 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_88:
# 283 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 284 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_89:
# 286 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 287 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_90:
# 289 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 290 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_91:
# 292 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 61
# 293 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_92:
# 295 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 17
# 296 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_93:
# 298 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 299 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_94:
# 301 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 302 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_95:
# 304 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 305 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_96:
# 307 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 308 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_97:
# 310 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 311 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_98:
# 313 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 314 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_99:
# 316 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 317 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_100:
# 319 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 51
# 320 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_101:
# 322 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 323 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_102:
# 325 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 326 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_103:
# 328 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 329 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_104:
# 331 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 62
# 332 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_105:
# 334 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 335 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_106:
# 337 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 338 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_107:
# 340 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 28
# 341 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_108:
# 343 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 344 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_109:
# 346 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 347 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_110:
# 349 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 28
# 350 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_111:
# 352 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 42
# 353 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_112:
# 355 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 41
# 356 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_113:
# 358 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 42
# 359 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_114:
# 361 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 41
# 362 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_115:
# 364 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 42
# 365 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_116:
# 367 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 368 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_117:
# 370 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 371 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_118:
# 373 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 374 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_119:
# 376 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 17
# 377 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_120:
# 379 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 380 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_121:
# 382 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 383 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_122:
# 385 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 17
# 386 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_123:
# 388 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 389 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_124:
# 391 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 392 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_125:
# 394 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 48
# 395 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_126:
# 397 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 49
# 398 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_127:
# 400 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 401 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_128:
# 403 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 54
# 404 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_129:
# 406 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 407 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_130:
# 409 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 410 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_131:
# 412 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 413 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_132:
# 415 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 22
# 416 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_133:
# 418 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 23
# 419 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_134:
# 421 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 24
# 422 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_135:
# 424 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 25
# 425 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_136:
# 427 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 428 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_137:
# 430 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 431 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_138:
# 433 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 434 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_139:
# 436 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 437 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_140:
# 439 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 27
# 440 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_141:
# 442 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 29
# 443 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_142:
# 445 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 18
# 446 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_143:
# 448 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 19
# 449 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_144:
# 451 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 20
# 452 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_145:
# 454 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 55
# 455 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_146:
# 457 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 56
# 458 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_147:
# 460 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 57
# 461 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_148:
# 463 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 23
# 464 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_149:
# 466 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 24
# 467 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_150:
# 469 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 25
# 470 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_151:
# 472 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 46
# 473 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_152:
# 475 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 47
# 476 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_153:
# 478 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 63
# 479 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_154:
# 481 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 63
# 482 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_155:
# 484 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 26
# 485 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 42
	goto RandomizeMudTile_1

RandomizeMudTile_156:
# 487 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_X, 50
# 488 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1


Route8_MudPile::
# 502 "data/maps/Route8/scripts.pory"
	call RandomizeMudRewards
# 503 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_eq Route8_MudPile_2
# 510 "data/maps/Route8/scripts.pory"
	playse SE_SELECT
# 511 "data/maps/Route8/scripts.pory"
	waitse
# 512 "data/maps/Route8/scripts.pory"
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x291, FALSE
# 513 "data/maps/Route8/scripts.pory"
	special DrawWholeMapView
# 514 "data/maps/Route8/scripts.pory"
	random 10
# 515 "data/maps/Route8/scripts.pory"
	switch VAR_RESULT
# 516 "data/maps/Route8/scripts.pory"
	case 0, Route8_MudPile_6
# 517 "data/maps/Route8/scripts.pory"
	case 1, Route8_MudPile_6
# 518 "data/maps/Route8/scripts.pory"
	case 2, Route8_MudPile_6
# 519 "data/maps/Route8/scripts.pory"
	case 3, Route8_MudPile_6
# 520 "data/maps/Route8/scripts.pory"
	case 4, Route8_MudPile_6
# 521 "data/maps/Route8/scripts.pory"
	case 5, Route8_MudPile_6
# 527 "data/maps/Route8/scripts.pory"
	case 6, Route8_MudPile_7
# 528 "data/maps/Route8/scripts.pory"
	case 7, Route8_MudPile_7
# 529 "data/maps/Route8/scripts.pory"
	case 8, Route8_MudPile_7
# 538 "data/maps/Route8/scripts.pory"
	case 9, Route8_MudPile_8
Route8_MudPile_4:
# 548 "data/maps/Route8/scripts.pory"
	msgbox PutMudAway
# 549 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_A, VAR_MUD_X
# 550 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_B, VAR_MUD_X
# 551 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_C, VAR_MUD_Y
# 552 "data/maps/Route8/scripts.pory"
	copyvar VAR_TEMP_D, VAR_MUD_Y
# 553 "data/maps/Route8/scripts.pory"
	addvar VAR_TEMP_A, 9
# 554 "data/maps/Route8/scripts.pory"
	subvar VAR_TEMP_B, 9
# 555 "data/maps/Route8/scripts.pory"
	addvar VAR_TEMP_C, 7
# 556 "data/maps/Route8/scripts.pory"
	subvar VAR_TEMP_D, 7
Route8_MudPile_10:
# 557 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_X, VAR_TEMP_A
	goto_if_le Route8_MudPile_13
Route8_MudPile_9:
# 561 "data/maps/Route8/scripts.pory"
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x344, FALSE
# 562 "data/maps/Route8/scripts.pory"
	special DrawWholeMapView
# 563 "data/maps/Route8/scripts.pory"
	release
	end

Route8_MudPile_2:
# 504 "data/maps/Route8/scripts.pory"
	lock
# 505 "data/maps/Route8/scripts.pory"
	msgbox ObtainedMud
# 506 "data/maps/Route8/scripts.pory"
	msgbox SampleBoxFull
# 507 "data/maps/Route8/scripts.pory"
	release
	end

Route8_MudPile_6:
# 522 "data/maps/Route8/scripts.pory"
	bufferstring STR_VAR_1, Route8_MudPile_Text_0
# 523 "data/maps/Route8/scripts.pory"
	addvar VAR_MUD_SAMPLES, 1
# 524 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 525 "data/maps/Route8/scripts.pory"
	message ObtainedMud
# 526 "data/maps/Route8/scripts.pory"
	waitfanfare
	goto Route8_MudPile_4

Route8_MudPile_7:
# 530 "data/maps/Route8/scripts.pory"
	bufferstring STR_VAR_1, Route8_MudPile_Text_1
# 531 "data/maps/Route8/scripts.pory"
	addvar VAR_MUD_SAMPLES, 2
# 532 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 533 "data/maps/Route8/scripts.pory"
	message Obtained2Mud
# 534 "data/maps/Route8/scripts.pory"
	waitfanfare
# 535 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_ge Route8_MudPile_19
	goto Route8_MudPile_4

Route8_MudPile_8:
# 539 "data/maps/Route8/scripts.pory"
	bufferstring STR_VAR_1, Route8_MudPile_Text_1
# 540 "data/maps/Route8/scripts.pory"
	addvar VAR_MUD_SAMPLES, 3
# 541 "data/maps/Route8/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 542 "data/maps/Route8/scripts.pory"
	message Obtained3Mud
# 543 "data/maps/Route8/scripts.pory"
	waitfanfare
# 544 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_SAMPLES, 30
	goto_if_ge Route8_MudPile_21
	goto Route8_MudPile_4

Route8_MudPile_11:
# 559 "data/maps/Route8/scripts.pory"
	call RandomizeMudTile
	goto Route8_MudPile_10

Route8_MudPile_12:
# 558 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_Y, VAR_TEMP_C
	goto_if_le Route8_MudPile_16
	goto Route8_MudPile_9

Route8_MudPile_13:
# 557 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_X, VAR_TEMP_B
	goto_if_ge Route8_MudPile_12
	goto Route8_MudPile_9

Route8_MudPile_16:
# 558 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_Y, VAR_TEMP_D
	goto_if_ge Route8_MudPile_11
	goto Route8_MudPile_9

Route8_MudPile_19:
# 536 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_SAMPLES, 30
	goto Route8_MudPile_4

Route8_MudPile_21:
# 545 "data/maps/Route8/scripts.pory"
	setvar VAR_MUD_SAMPLES, 30
	goto Route8_MudPile_4


RandomizeMudRewards::
# 568 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_1, 0
	goto_if_eq RandomizeMudRewards_2
RandomizeMudRewards_1:
# 572 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_2, 0
	goto_if_eq RandomizeMudRewards_5
RandomizeMudRewards_4:
# 576 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_3, 0
	goto_if_eq RandomizeMudRewards_8
RandomizeMudRewards_7:
# 580 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_4, 0
	goto_if_eq RandomizeMudRewards_11
RandomizeMudRewards_10:
# 584 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_5, 0
	goto_if_eq RandomizeMudRewards_14
RandomizeMudRewards_13:
# 588 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_6, 0
	goto_if_eq RandomizeMudRewards_17
RandomizeMudRewards_16:
# 592 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_7, 0
	goto_if_eq RandomizeMudRewards_20
RandomizeMudRewards_19:
# 596 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_8, 0
	goto_if_eq RandomizeMudRewards_23
RandomizeMudRewards_22:
# 600 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_9, 0
	goto_if_eq RandomizeMudRewards_26
RandomizeMudRewards_25:
# 604 "data/maps/Route8/scripts.pory"
	compare VAR_MUD_REWARD_10, 0
	goto_if_eq RandomizeMudRewards_29
RandomizeMudRewards_28:
	return

RandomizeMudRewards_2:
# 569 "data/maps/Route8/scripts.pory"
	random 100
# 570 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_1, VAR_RESULT
	goto RandomizeMudRewards_1

RandomizeMudRewards_5:
# 573 "data/maps/Route8/scripts.pory"
	random 100
# 574 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_2, VAR_RESULT
	goto RandomizeMudRewards_4

RandomizeMudRewards_8:
# 577 "data/maps/Route8/scripts.pory"
	random 100
# 578 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_3, VAR_RESULT
	goto RandomizeMudRewards_7

RandomizeMudRewards_11:
# 581 "data/maps/Route8/scripts.pory"
	random 100
# 582 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_4, VAR_RESULT
	goto RandomizeMudRewards_10

RandomizeMudRewards_14:
# 585 "data/maps/Route8/scripts.pory"
	random 100
# 586 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_5, VAR_RESULT
	goto RandomizeMudRewards_13

RandomizeMudRewards_17:
# 589 "data/maps/Route8/scripts.pory"
	random 100
# 590 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_6, VAR_RESULT
	goto RandomizeMudRewards_16

RandomizeMudRewards_20:
# 593 "data/maps/Route8/scripts.pory"
	random 100
# 594 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_7, VAR_RESULT
	goto RandomizeMudRewards_19

RandomizeMudRewards_23:
# 597 "data/maps/Route8/scripts.pory"
	random 100
# 598 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_8, VAR_RESULT
	goto RandomizeMudRewards_22

RandomizeMudRewards_26:
# 601 "data/maps/Route8/scripts.pory"
	random 100
# 602 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_9, VAR_RESULT
	goto RandomizeMudRewards_25

RandomizeMudRewards_29:
# 605 "data/maps/Route8/scripts.pory"
	random 100
# 606 "data/maps/Route8/scripts.pory"
	copyvar VAR_MUD_REWARD_10, VAR_RESULT
	goto RandomizeMudRewards_28


Route7_Trainer1_Camper::
# 626 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR1_CAMPER, Route7_Trainer1_Camper_Intro, Route7_Trainer1_Camper_Defeat
# 627 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer2_Picnicker::
# 645 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR2_PICNICKER, Route7_Trainer2_Picnicker_Intro, Route7_Trainer2_Picnicker_Defeat
# 646 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer2_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer3_Ninjaboy::
# 667 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR3_NINJABOY, Route7_Trainer3_Ninjaboy_Intro, Route7_Trainer3_Ninjaboy_Defeat
# 668 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer3_Ninjaboy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer4_Birdkeeper::
# 686 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR4_BIRDKEEPER, Route7_Trainer4_Birdkeeper_Intro, Route7_Trainer4_Birdkeeper_Defeat
# 687 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer4_Birdkeeper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer5_Blackbelt::
# 707 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR5_BLACKBELT, Route7_Trainer5_Blackbelt_Intro, Route7_Trainer5_Blackbelt_Defeat
# 708 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer5_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer6_Picnicker2::
# 727 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR6_PICNICKER2, Route7_Trainer6_Picnicker2_Intro, Route7_Trainer6_Picnicker2_Defeat
# 728 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer6_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer7_Fisherman::
# 748 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR7_FISHERMAN, Route7_Trainer7_Fisherman_Intro, Route7_Trainer7_Fisherman_Defeat
# 749 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer7_Fisherman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer8_Hiker::
# 770 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR8_HIKER, Route7_Trainer8_Hiker_Intro, Route7_Trainer8_Hiker_Defeat
# 771 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer8_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer9_Parasollady::
# 792 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR9_PARASOLLADY, Route7_Trainer9_Parasollady_Intro, Route7_Trainer9_Parasollady_Defeat
# 793 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer9_Parasollady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer10_NinjaBoy::
# 813 "data/maps/Route8/scripts.pory"
	trainerbattle_single TRAINER_R7_TR10_NINJABOY, Route7_Trainer10_NinjaBoy_Intro, Route7_Trainer10_NinjaBoy_Defeat
# 814 "data/maps/Route8/scripts.pory"
	msgbox Route7_Trainer10_NinjaBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Ball1::
# 832 "data/maps/Route8/scripts.pory"
	finditem ITEM_HP_UP
	end


Route7_Ball2::
# 836 "data/maps/Route8/scripts.pory"
	finditem ITEM_FULL_HEAL
	end


Route8_SoMuchMud::
# 841 "data/maps/Route8/scripts.pory"
	msgbox Route8_SoMuchMud_Text, MSGBOX_NPC
	end


Route8_MudPile_Text_0:
# 522 "data/maps/Route8/scripts.pory"
	.string "sample$"

Route8_MudPile_Text_1:
# 530 "data/maps/Route8/scripts.pory"
	.string "samples$"

SampleBoxFull::
# 496 "data/maps/Route8/scripts.pory"
	.string "Too bad!\n"
	.string "The Sample Box is full…$"

ObtainedMud::
# 611 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} obtained a sample of mud!$"

Obtained2Mud::
# 614 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} obtained 2 samples of mud!$"

Obtained3Mud::
# 617 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} obtained 3 samples of mud!$"

PutMudAway::
# 620 "data/maps/Route8/scripts.pory"
	.string "{PLAYER} put away the {STR_VAR_1} of mud\n"
	.string "in the Sample Box.$"

Route7_Trainer1_Camper_Intro::
# 631 "data/maps/Route8/scripts.pory"
	.string "Only the strong can get through\n"
	.string "the desert.\l"
	.string "Let's see just how strong you are!$"

Route7_Trainer1_Camper_Defeat::
# 636 "data/maps/Route8/scripts.pory"
	.string "Too strong!$"

Route7_Trainer1_Camper_PostBattle::
# 639 "data/maps/Route8/scripts.pory"
	.string "I bet you had no trouble getting\n"
	.string "through the desert.$"

Route7_Trainer2_Picnicker_Intro::
# 650 "data/maps/Route8/scripts.pory"
	.string "I bought new boots, so I came\n"
	.string "all this way to get them dirty.\p"
	.string "You're right! If I have a battle,\n"
	.string "they may get even dirtier!$"

Route7_Trainer2_Picnicker_Defeat::
# 656 "data/maps/Route8/scripts.pory"
	.string "Oh! My boots got completely soaked\n"
	.string "in the battle!$"

Route7_Trainer2_Picnicker_PostBattle::
# 660 "data/maps/Route8/scripts.pory"
	.string "I hope you brought some boots as well.\n"
	.string "Wading through all this mud\l"
	.string "without proper gear will be a slog!$"

Route7_Trainer3_Ninjaboy_Intro::
# 672 "data/maps/Route8/scripts.pory"
	.string "Ninjas are swift as arrows!\n"
	.string "No amount of mud will stop us!$"

Route7_Trainer3_Ninjaboy_Defeat::
# 676 "data/maps/Route8/scripts.pory"
	.string "I may outmatch you in speed,\n"
	.string "but not in strength…$"

Route7_Trainer3_Ninjaboy_PostBattle::
# 680 "data/maps/Route8/scripts.pory"
	.string "Ninjas may be fast, but my Pokémon\n"
	.string "clearly got slowed by the mud.$"

Route7_Trainer4_Birdkeeper_Intro::
# 691 "data/maps/Route8/scripts.pory"
	.string "The ground Pokémon here have no chance\n"
	.string "against my flying Pokémon!\l"
	.string "And neither do you!$"

Route7_Trainer4_Birdkeeper_Defeat::
# 696 "data/maps/Route8/scripts.pory"
	.string "Spoke too soon…$"

Route7_Trainer4_Birdkeeper_PostBattle::
# 699 "data/maps/Route8/scripts.pory"
	.string "I could use my Pokémon to fly over this\n"
	.string "dreary place but I prefer doing things\l"
	.string "the hard way.\l"
	.string "Really builds the character.$"

Route7_Trainer5_Blackbelt_Intro::
# 712 "data/maps/Route8/scripts.pory"
	.string "Training in the mud has made my Pokémon\n"
	.string "faster than ever.\p"
	.string "Here, let me show you!$"

Route7_Trainer5_Blackbelt_Defeat::
# 717 "data/maps/Route8/scripts.pory"
	.string "I will admit my defeat gracefully…$"

Route7_Trainer5_Blackbelt_PostBattle::
# 720 "data/maps/Route8/scripts.pory"
	.string "I can't believe I lost after\n"
	.string "all my training.\p"
	.string "I'm a disgrace…$"

Route7_Trainer6_Picnicker2_Intro::
# 732 "data/maps/Route8/scripts.pory"
	.string "Pokémon trainers nurture friendship\n"
	.string "with their battles!$"

Route7_Trainer6_Picnicker2_Defeat::
# 736 "data/maps/Route8/scripts.pory"
	.string "This feeling of defeat…\n"
	.string "is like a bottomless swamp…$"

Route7_Trainer6_Picnicker2_PostBattle::
# 740 "data/maps/Route8/scripts.pory"
	.string "I'm researching what kinds of\n"
	.string "Pokémon live around here.\p"
	.string "That way, I can plan which Pokémon\n"
	.string "I should take along.$"

Route7_Trainer7_Fisherman_Intro::
# 753 "data/maps/Route8/scripts.pory"
	.string "I can't and will not stop fishing.\p"
	.string "Though when it comes to battling,\n"
	.string "I can make an exception.$"

Route7_Trainer7_Fisherman_Defeat::
# 758 "data/maps/Route8/scripts.pory"
	.string "Battling was a mistake.\n"
	.string "I should just stick to fishing!$"

Route7_Trainer7_Fisherman_PostBattle::
# 762 "data/maps/Route8/scripts.pory"
	.string "If I find water, I drop in my\n"
	.string "fishing line.\p"
	.string "Even with a puddle, there may be\n"
	.string "Pokémon that I've never seen.$"

Route7_Trainer8_Hiker_Intro::
# 775 "data/maps/Route8/scripts.pory"
	.string "This Hiker wandering the world will\n"
	.string "teach a child like you the harshness\l"
	.string "of life and the difficulty of\l"
	.string "Pokémon battles!$"

Route7_Trainer8_Hiker_Defeat::
# 781 "data/maps/Route8/scripts.pory"
	.string "The teacher was schooled…\n"
	.string "You're very strict, aren't you?$"

Route7_Trainer8_Hiker_PostBattle::
# 785 "data/maps/Route8/scripts.pory"
	.string "Looks like there is really nothing\n"
	.string "an old hiker like myself can teach you.\l"
	.string "You are the teacher now.$"

Route7_Trainer9_Parasollady_Intro::
# 797 "data/maps/Route8/scripts.pory"
	.string "Look! This is my favorite parasol!\n"
	.string "Oh, and my fabulous Pokémon!$"

Route7_Trainer9_Parasollady_Defeat::
# 801 "data/maps/Route8/scripts.pory"
	.string "You were only supposed to look…$"

Route7_Trainer9_Parasollady_PostBattle::
# 804 "data/maps/Route8/scripts.pory"
	.string "You're probably wondering why I'm\n"
	.string "carrying a parasol here.\p"
	.string "When your Pokémon jumps in a puddle\n"
	.string "of mud, you wish you'd have a parasol\l"
	.string "in hand.$"

Route7_Trainer10_NinjaBoy_Intro::
# 818 "data/maps/Route8/scripts.pory"
	.string "I shall become a real ninja when\n"
	.string "I grow up!$"

Route7_Trainer10_NinjaBoy_Defeat::
# 822 "data/maps/Route8/scripts.pory"
	.string "Excellent! Excellent!$"

Route7_Trainer10_NinjaBoy_PostBattle::
# 825 "data/maps/Route8/scripts.pory"
	.string "So, what's a real ninja supposed to\n"
	.string "do?$"

Route8_SoMuchMud_Text::
# 844 "data/maps/Route8/scripts.pory"
	.string "Ugh… Look at all this mud.\p"
	.string "How is a fine lady such as myself\n"
	.string "expected to get across without\l"
	.string "getting my dress dirty?$"
