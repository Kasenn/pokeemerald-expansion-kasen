Route8_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, InitRoute8
	map_script MAP_SCRIPT_ON_LOAD, LoadMudTile
	.byte 0


InitRoute8::
	goto_if_set FLAG_DEVON_UNDER_ATTACK, InitRoute8_2
InitRoute8_1:
	clearflag FLAG_INCREASED_SHINY_ODDS
	clearflag FLAG_DESERT_STEPS
	checkitem ITEM_SAMPLE_BOX
	end

InitRoute8_2:
	setflag FLAG_DEVON_RESCUED
	goto InitRoute8_1


LoadMudTile::
	checkitem ITEM_SAMPLE_BOX
	compare VAR_MUD_X, 0
	goto_if_eq LoadMudTile_3
LoadMudTile_1:
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x344, FALSE
	return

LoadMudTile_2:
	call RandomizeMudTile
	goto LoadMudTile_1

LoadMudTile_3:
	compare VAR_RESULT, TRUE
	goto_if_eq LoadMudTile_2
	goto LoadMudTile_1


RandomizeMudTile::
	random 155
	switch VAR_RESULT
	case 0, RandomizeMudTile_3
	case 1, RandomizeMudTile_4
	case 2, RandomizeMudTile_5
	case 3, RandomizeMudTile_6
	case 4, RandomizeMudTile_7
	case 6, RandomizeMudTile_8
	case 7, RandomizeMudTile_9
	case 8, RandomizeMudTile_10
	case 9, RandomizeMudTile_11
	case 10, RandomizeMudTile_12
	case 11, RandomizeMudTile_13
	case 12, RandomizeMudTile_14
	case 13, RandomizeMudTile_15
	case 14, RandomizeMudTile_16
	case 15, RandomizeMudTile_17
	case 16, RandomizeMudTile_18
	case 17, RandomizeMudTile_19
	case 18, RandomizeMudTile_20
	case 19, RandomizeMudTile_21
	case 20, RandomizeMudTile_22
	case 21, RandomizeMudTile_23
	case 22, RandomizeMudTile_24
	case 23, RandomizeMudTile_25
	case 24, RandomizeMudTile_26
	case 25, RandomizeMudTile_27
	case 26, RandomizeMudTile_28
	case 27, RandomizeMudTile_29
	case 28, RandomizeMudTile_30
	case 29, RandomizeMudTile_31
	case 30, RandomizeMudTile_32
	case 31, RandomizeMudTile_33
	case 32, RandomizeMudTile_34
	case 33, RandomizeMudTile_35
	case 34, RandomizeMudTile_36
	case 35, RandomizeMudTile_37
	case 36, RandomizeMudTile_38
	case 37, RandomizeMudTile_39
	case 38, RandomizeMudTile_40
	case 39, RandomizeMudTile_41
	case 40, RandomizeMudTile_42
	case 41, RandomizeMudTile_43
	case 42, RandomizeMudTile_44
	case 43, RandomizeMudTile_45
	case 44, RandomizeMudTile_46
	case 45, RandomizeMudTile_47
	case 46, RandomizeMudTile_48
	case 47, RandomizeMudTile_49
	case 48, RandomizeMudTile_50
	case 49, RandomizeMudTile_51
	case 50, RandomizeMudTile_52
	case 51, RandomizeMudTile_53
	case 52, RandomizeMudTile_54
	case 53, RandomizeMudTile_55
	case 54, RandomizeMudTile_56
	case 55, RandomizeMudTile_57
	case 56, RandomizeMudTile_58
	case 57, RandomizeMudTile_59
	case 58, RandomizeMudTile_60
	case 59, RandomizeMudTile_61
	case 60, RandomizeMudTile_62
	case 61, RandomizeMudTile_63
	case 62, RandomizeMudTile_64
	case 63, RandomizeMudTile_65
	case 64, RandomizeMudTile_66
	case 65, RandomizeMudTile_67
	case 66, RandomizeMudTile_68
	case 67, RandomizeMudTile_69
	case 68, RandomizeMudTile_70
	case 69, RandomizeMudTile_71
	case 70, RandomizeMudTile_72
	case 71, RandomizeMudTile_73
	case 72, RandomizeMudTile_74
	case 73, RandomizeMudTile_75
	case 74, RandomizeMudTile_76
	case 75, RandomizeMudTile_77
	case 76, RandomizeMudTile_78
	case 77, RandomizeMudTile_79
	case 78, RandomizeMudTile_80
	case 79, RandomizeMudTile_81
	case 80, RandomizeMudTile_82
	case 81, RandomizeMudTile_83
	case 82, RandomizeMudTile_84
	case 83, RandomizeMudTile_85
	case 84, RandomizeMudTile_86
	case 85, RandomizeMudTile_87
	case 86, RandomizeMudTile_88
	case 87, RandomizeMudTile_89
	case 88, RandomizeMudTile_90
	case 89, RandomizeMudTile_91
	case 90, RandomizeMudTile_92
	case 91, RandomizeMudTile_93
	case 92, RandomizeMudTile_94
	case 93, RandomizeMudTile_95
	case 94, RandomizeMudTile_96
	case 95, RandomizeMudTile_97
	case 96, RandomizeMudTile_98
	case 97, RandomizeMudTile_99
	case 98, RandomizeMudTile_100
	case 99, RandomizeMudTile_101
	case 101, RandomizeMudTile_102
	case 102, RandomizeMudTile_103
	case 103, RandomizeMudTile_104
	case 104, RandomizeMudTile_105
	case 105, RandomizeMudTile_106
	case 106, RandomizeMudTile_107
	case 107, RandomizeMudTile_108
	case 108, RandomizeMudTile_109
	case 109, RandomizeMudTile_110
	case 100, RandomizeMudTile_111
	case 110, RandomizeMudTile_112
	case 111, RandomizeMudTile_113
	case 112, RandomizeMudTile_114
	case 113, RandomizeMudTile_115
	case 114, RandomizeMudTile_116
	case 115, RandomizeMudTile_117
	case 116, RandomizeMudTile_118
	case 117, RandomizeMudTile_119
	case 118, RandomizeMudTile_120
	case 119, RandomizeMudTile_121
	case 120, RandomizeMudTile_122
	case 121, RandomizeMudTile_123
	case 122, RandomizeMudTile_124
	case 123, RandomizeMudTile_125
	case 124, RandomizeMudTile_126
	case 125, RandomizeMudTile_127
	case 126, RandomizeMudTile_128
	case 127, RandomizeMudTile_129
	case 128, RandomizeMudTile_130
	case 129, RandomizeMudTile_131
	case 130, RandomizeMudTile_132
	case 131, RandomizeMudTile_133
	case 132, RandomizeMudTile_134
	case 133, RandomizeMudTile_135
	case 134, RandomizeMudTile_136
	case 135, RandomizeMudTile_137
	case 136, RandomizeMudTile_138
	case 137, RandomizeMudTile_139
	case 138, RandomizeMudTile_140
	case 139, RandomizeMudTile_141
	case 140, RandomizeMudTile_142
	case 141, RandomizeMudTile_143
	case 142, RandomizeMudTile_144
	case 143, RandomizeMudTile_145
	case 144, RandomizeMudTile_146
	case 145, RandomizeMudTile_147
	case 146, RandomizeMudTile_148
	case 147, RandomizeMudTile_149
	case 148, RandomizeMudTile_150
	case 149, RandomizeMudTile_151
	case 150, RandomizeMudTile_152
	case 151, RandomizeMudTile_153
	case 152, RandomizeMudTile_154
	case 153, RandomizeMudTile_155
	case 154, RandomizeMudTile_156
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 35
RandomizeMudTile_1:
	return

RandomizeMudTile_3:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 9
	goto RandomizeMudTile_1

RandomizeMudTile_4:
	setvar VAR_MUD_X, 45
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_5:
	setvar VAR_MUD_X, 36
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_6:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_7:
	setvar VAR_MUD_X, 37
	setvar VAR_MUD_Y, 8
	goto RandomizeMudTile_1

RandomizeMudTile_8:
	setvar VAR_MUD_X, 38
	setvar VAR_MUD_Y, 8
	goto RandomizeMudTile_1

RandomizeMudTile_9:
	setvar VAR_MUD_X, 45
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_10:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_11:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_12:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 7
	goto RandomizeMudTile_1

RandomizeMudTile_13:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 9
	goto RandomizeMudTile_1

RandomizeMudTile_14:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 13
	goto RandomizeMudTile_1

RandomizeMudTile_15:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 13
	goto RandomizeMudTile_1

RandomizeMudTile_16:
	setvar VAR_MUD_X, 45
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_17:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_18:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_19:
	setvar VAR_MUD_X, 45
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_20:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_21:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_22:
	setvar VAR_MUD_X, 44
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_23:
	setvar VAR_MUD_X, 45
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_24:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_25:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_26:
	setvar VAR_MUD_X, 44
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_27:
	setvar VAR_MUD_X, 45
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_28:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_29:
	setvar VAR_MUD_X, 36
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_30:
	setvar VAR_MUD_X, 37
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_31:
	setvar VAR_MUD_X, 38
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_32:
	setvar VAR_MUD_X, 36
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_33:
	setvar VAR_MUD_X, 37
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_34:
	setvar VAR_MUD_X, 38
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_35:
	setvar VAR_MUD_X, 39
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_36:
	setvar VAR_MUD_X, 36
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_37:
	setvar VAR_MUD_X, 37
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_38:
	setvar VAR_MUD_X, 38
	setvar VAR_MUD_Y, 18
	goto RandomizeMudTile_1

RandomizeMudTile_39:
	setvar VAR_MUD_X, 35
	setvar VAR_MUD_Y, 19
	goto RandomizeMudTile_1

RandomizeMudTile_40:
	setvar VAR_MUD_X, 36
	setvar VAR_MUD_Y, 19
	goto RandomizeMudTile_1

RandomizeMudTile_41:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_42:
	setvar VAR_MUD_X, 21
	setvar VAR_MUD_Y, 14
	goto RandomizeMudTile_1

RandomizeMudTile_43:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_44:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_45:
	setvar VAR_MUD_X, 34
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_46:
	setvar VAR_MUD_X, 35
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_47:
	setvar VAR_MUD_X, 34
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_48:
	setvar VAR_MUD_X, 35
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_49:
	setvar VAR_MUD_X, 35
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_50:
	setvar VAR_MUD_X, 36
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_51:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_52:
	setvar VAR_MUD_X, 49
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_53:
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_54:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_55:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_56:
	setvar VAR_MUD_X, 49
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_57:
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_58:
	setvar VAR_MUD_X, 51
	setvar VAR_MUD_Y, 32
	goto RandomizeMudTile_1

RandomizeMudTile_59:
	setvar VAR_MUD_X, 55
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_60:
	setvar VAR_MUD_X, 56
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_61:
	setvar VAR_MUD_X, 57
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_62:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 46
	goto RandomizeMudTile_1

RandomizeMudTile_63:
	setvar VAR_MUD_X, 49
	setvar VAR_MUD_Y, 46
	goto RandomizeMudTile_1

RandomizeMudTile_64:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_65:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_66:
	setvar VAR_MUD_X, 21
	setvar VAR_MUD_Y, 20
	goto RandomizeMudTile_1

RandomizeMudTile_67:
	setvar VAR_MUD_X, 18
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_68:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_69:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_70:
	setvar VAR_MUD_X, 21
	setvar VAR_MUD_Y, 21
	goto RandomizeMudTile_1

RandomizeMudTile_71:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 22
	goto RandomizeMudTile_1

RandomizeMudTile_72:
	setvar VAR_MUD_X, 21
	setvar VAR_MUD_Y, 24
	goto RandomizeMudTile_1

RandomizeMudTile_73:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_74:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_75:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_76:
	setvar VAR_MUD_X, 49
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_77:
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_78:
	setvar VAR_MUD_X, 51
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_79:
	setvar VAR_MUD_X, 22
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_80:
	setvar VAR_MUD_X, 23
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_81:
	setvar VAR_MUD_X, 24
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_82:
	setvar VAR_MUD_X, 25
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_83:
	setvar VAR_MUD_X, 26
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_84:
	setvar VAR_MUD_X, 27
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_85:
	setvar VAR_MUD_X, 28
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_86:
	setvar VAR_MUD_X, 29
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_87:
	setvar VAR_MUD_X, 30
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_88:
	setvar VAR_MUD_X, 61
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_89:
	setvar VAR_MUD_X, 61
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_90:
	setvar VAR_MUD_X, 61
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_91:
	setvar VAR_MUD_X, 61
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_92:
	setvar VAR_MUD_X, 17
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_93:
	setvar VAR_MUD_X, 18
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_94:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 29
	goto RandomizeMudTile_1

RandomizeMudTile_95:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_96:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_97:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_98:
	setvar VAR_MUD_X, 49
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_99:
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_100:
	setvar VAR_MUD_X, 51
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_101:
	setvar VAR_MUD_X, 62
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_102:
	setvar VAR_MUD_X, 62
	setvar VAR_MUD_Y, 37
	goto RandomizeMudTile_1

RandomizeMudTile_103:
	setvar VAR_MUD_X, 62
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_104:
	setvar VAR_MUD_X, 62
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_105:
	setvar VAR_MUD_X, 26
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_106:
	setvar VAR_MUD_X, 27
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_107:
	setvar VAR_MUD_X, 28
	setvar VAR_MUD_Y, 16
	goto RandomizeMudTile_1

RandomizeMudTile_108:
	setvar VAR_MUD_X, 26
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_109:
	setvar VAR_MUD_X, 27
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_110:
	setvar VAR_MUD_X, 28
	setvar VAR_MUD_Y, 17
	goto RandomizeMudTile_1

RandomizeMudTile_111:
	setvar VAR_MUD_X, 42
	setvar VAR_MUD_Y, 33
	goto RandomizeMudTile_1

RandomizeMudTile_112:
	setvar VAR_MUD_X, 41
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_113:
	setvar VAR_MUD_X, 42
	setvar VAR_MUD_Y, 34
	goto RandomizeMudTile_1

RandomizeMudTile_114:
	setvar VAR_MUD_X, 41
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_115:
	setvar VAR_MUD_X, 42
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_116:
	setvar VAR_MUD_X, 18
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_117:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_118:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 30
	goto RandomizeMudTile_1

RandomizeMudTile_119:
	setvar VAR_MUD_X, 17
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_120:
	setvar VAR_MUD_X, 18
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_121:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_122:
	setvar VAR_MUD_X, 17
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_123:
	setvar VAR_MUD_X, 18
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_124:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_125:
	setvar VAR_MUD_X, 48
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_126:
	setvar VAR_MUD_X, 49
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_127:
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 45
	goto RandomizeMudTile_1

RandomizeMudTile_128:
	setvar VAR_MUD_X, 54
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_129:
	setvar VAR_MUD_X, 55
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_130:
	setvar VAR_MUD_X, 56
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_131:
	setvar VAR_MUD_X, 57
	setvar VAR_MUD_Y, 36
	goto RandomizeMudTile_1

RandomizeMudTile_132:
	setvar VAR_MUD_X, 22
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_133:
	setvar VAR_MUD_X, 23
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_134:
	setvar VAR_MUD_X, 24
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_135:
	setvar VAR_MUD_X, 25
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_136:
	setvar VAR_MUD_X, 26
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_137:
	setvar VAR_MUD_X, 55
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_138:
	setvar VAR_MUD_X, 56
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_139:
	setvar VAR_MUD_X, 57
	setvar VAR_MUD_Y, 38
	goto RandomizeMudTile_1

RandomizeMudTile_140:
	setvar VAR_MUD_X, 27
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_141:
	setvar VAR_MUD_X, 29
	setvar VAR_MUD_Y, 15
	goto RandomizeMudTile_1

RandomizeMudTile_142:
	setvar VAR_MUD_X, 18
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_143:
	setvar VAR_MUD_X, 19
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_144:
	setvar VAR_MUD_X, 20
	setvar VAR_MUD_Y, 41
	goto RandomizeMudTile_1

RandomizeMudTile_145:
	setvar VAR_MUD_X, 55
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_146:
	setvar VAR_MUD_X, 56
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_147:
	setvar VAR_MUD_X, 57
	setvar VAR_MUD_Y, 31
	goto RandomizeMudTile_1

RandomizeMudTile_148:
	setvar VAR_MUD_X, 23
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_149:
	setvar VAR_MUD_X, 24
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_150:
	setvar VAR_MUD_X, 25
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_151:
	setvar VAR_MUD_X, 46
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_152:
	setvar VAR_MUD_X, 47
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1

RandomizeMudTile_153:
	setvar VAR_MUD_X, 63
	setvar VAR_MUD_Y, 39
	goto RandomizeMudTile_1

RandomizeMudTile_154:
	setvar VAR_MUD_X, 63
	setvar VAR_MUD_Y, 40
	goto RandomizeMudTile_1

RandomizeMudTile_155:
	setvar VAR_MUD_X, 26
	setvar VAR_MUD_Y, 42
	goto RandomizeMudTile_1

RandomizeMudTile_156:
	setvar VAR_MUD_X, 50
	setvar VAR_MUD_Y, 35
	goto RandomizeMudTile_1


Route8_MudPile::
	compare VAR_MUD_SAMPLES, 30
	goto_if_eq Route8_MudPile_2
	playse SE_SELECT
	waitse
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x291, FALSE
	special DrawWholeMapView
	random 10
	switch VAR_RESULT
	case 0, Route8_MudPile_6
	case 1, Route8_MudPile_6
	case 2, Route8_MudPile_6
	case 3, Route8_MudPile_6
	case 4, Route8_MudPile_6
	case 5, Route8_MudPile_6
	case 6, Route8_MudPile_7
	case 7, Route8_MudPile_7
	case 8, Route8_MudPile_7
	case 9, Route8_MudPile_8
Route8_MudPile_4:
	msgbox PutMudAway
	copyvar VAR_TEMP_A, VAR_MUD_X
	copyvar VAR_TEMP_B, VAR_MUD_X
	copyvar VAR_TEMP_C, VAR_MUD_Y
	copyvar VAR_TEMP_D, VAR_MUD_Y
	addvar VAR_TEMP_A, 9
	subvar VAR_TEMP_B, 9
	addvar VAR_TEMP_C, 7
	subvar VAR_TEMP_D, 7
Route8_MudPile_10:
	compare VAR_MUD_X, VAR_TEMP_A
	goto_if_le Route8_MudPile_13
Route8_MudPile_9:
	setmetatile VAR_MUD_X, VAR_MUD_Y, 0x344, FALSE
	special DrawWholeMapView
	release
	end

Route8_MudPile_2:
	lock
	msgbox ObtainedMud
	msgbox SampleBoxFull
	release
	end

Route8_MudPile_6:
	bufferstring STR_VAR_1, Route8_MudPile_Text_0
	addvar VAR_MUD_SAMPLES, 1
	playfanfare MUS_OBTAIN_ITEM
	message ObtainedMud
	waitfanfare
	goto Route8_MudPile_4

Route8_MudPile_7:
	bufferstring STR_VAR_1, Route8_MudPile_Text_1
	addvar VAR_MUD_SAMPLES, 2
	playfanfare MUS_OBTAIN_ITEM
	message Obtained2Mud
	waitfanfare
	compare VAR_MUD_SAMPLES, 30
	goto_if_ge Route8_MudPile_19
	goto Route8_MudPile_4

Route8_MudPile_8:
	bufferstring STR_VAR_1, Route8_MudPile_Text_1
	addvar VAR_MUD_SAMPLES, 3
	playfanfare MUS_OBTAIN_ITEM
	message Obtained3Mud
	waitfanfare
	compare VAR_MUD_SAMPLES, 30
	goto_if_ge Route8_MudPile_21
	goto Route8_MudPile_4

Route8_MudPile_11:
	call RandomizeMudTile
	goto Route8_MudPile_10

Route8_MudPile_12:
	compare VAR_MUD_Y, VAR_TEMP_C
	goto_if_le Route8_MudPile_16
	goto Route8_MudPile_9

Route8_MudPile_13:
	compare VAR_MUD_X, VAR_TEMP_B
	goto_if_ge Route8_MudPile_12
	goto Route8_MudPile_9

Route8_MudPile_16:
	compare VAR_MUD_Y, VAR_TEMP_D
	goto_if_ge Route8_MudPile_11
	goto Route8_MudPile_9

Route8_MudPile_19:
	setvar VAR_MUD_SAMPLES, 30
	goto Route8_MudPile_4

Route8_MudPile_21:
	setvar VAR_MUD_SAMPLES, 30
	goto Route8_MudPile_4


Route7_Trainer1_Camper::
	trainerbattle_single TRAINER_R7_TR1_CAMPER, Route7_Trainer1_Camper_Intro, Route7_Trainer1_Camper_Defeat
	msgbox Route7_Trainer1_Camper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer2_Picnicker::
	trainerbattle_single TRAINER_R7_TR2_PICNICKER, Route7_Trainer2_Picnicker_Intro, Route7_Trainer2_Picnicker_Defeat
	msgbox Route7_Trainer2_Picnicker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer3_Ninjaboy::
	trainerbattle_single TRAINER_R7_TR3_NINJABOY, Route7_Trainer3_Ninjaboy_Intro, Route7_Trainer3_Ninjaboy_Defeat
	msgbox Route7_Trainer3_Ninjaboy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer4_Birdkeeper::
	trainerbattle_single TRAINER_R7_TR4_BIRDKEEPER, Route7_Trainer4_Birdkeeper_Intro, Route7_Trainer4_Birdkeeper_Defeat
	msgbox Route7_Trainer4_Birdkeeper_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer5_Blackbelt::
	trainerbattle_single TRAINER_R7_TR5_BLACKBELT, Route7_Trainer5_Blackbelt_Intro, Route7_Trainer5_Blackbelt_Defeat
	msgbox Route7_Trainer5_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer6_Picnicker2::
	trainerbattle_single TRAINER_R7_TR6_PICNICKER2, Route7_Trainer6_Picnicker2_Intro, Route7_Trainer6_Picnicker2_Defeat
	msgbox Route7_Trainer6_Picnicker2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer7_Fisherman::
	trainerbattle_single TRAINER_R7_TR7_FISHERMAN, Route7_Trainer7_Fisherman_Intro, Route7_Trainer7_Fisherman_Defeat
	msgbox Route7_Trainer7_Fisherman_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer8_Hiker::
	trainerbattle_single TRAINER_R7_TR8_HIKER, Route7_Trainer8_Hiker_Intro, Route7_Trainer8_Hiker_Defeat
	msgbox Route7_Trainer8_Hiker_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer9_Parasollady::
	trainerbattle_single TRAINER_R7_TR9_PARASOLLADY, Route7_Trainer9_Parasollady_Intro, Route7_Trainer9_Parasollady_Defeat
	msgbox Route7_Trainer9_Parasollady_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Trainer10_NinjaBoy::
	trainerbattle_single TRAINER_R7_TR10_NINJABOY, Route7_Trainer10_NinjaBoy_Intro, Route7_Trainer10_NinjaBoy_Defeat
	msgbox Route7_Trainer10_NinjaBoy_PostBattle, MSGBOX_AUTOCLOSE
	end


Route7_Ball1::
	finditem ITEM_HP_UP
	end


Route7_Ball2::
	finditem ITEM_FULL_HEAL
	end


Route8_SoMuchMud::
	msgbox Route8_SoMuchMud_Text, MSGBOX_NPC
	end


Route8_MudPile_Text_0:
	.string "sample$"

Route8_MudPile_Text_1:
	.string "samples$"

SampleBoxFull::
	.string "Too bad!\n"
	.string "The Sample Box is full…$"

ObtainedMud::
	.string "{PLAYER} obtained a sample of mud!$"

Obtained2Mud::
	.string "{PLAYER} obtained 2 samples of mud!$"

Obtained3Mud::
	.string "{PLAYER} obtained 3 samples of mud!$"

PutMudAway::
	.string "{PLAYER} put away the {STR_VAR_1} of mud\n"
	.string "in the Sample Box.$"

Route7_Trainer1_Camper_Intro::
	.string "Only the strong can get through\n"
	.string "the desert.\l"
	.string "Let's see just how strong you are!$"

Route7_Trainer1_Camper_Defeat::
	.string "Too strong!$"

Route7_Trainer1_Camper_PostBattle::
	.string "I bet you had no trouble getting\n"
	.string "through the desert.$"

Route7_Trainer2_Picnicker_Intro::
	.string "I bought new boots, so I came\n"
	.string "all this way to get them dirty.\p"
	.string "You're right! If I have a battle,\n"
	.string "they may get even dirtier!$"

Route7_Trainer2_Picnicker_Defeat::
	.string "Oh! My boots got completely soaked\n"
	.string "in the battle!$"

Route7_Trainer2_Picnicker_PostBattle::
	.string "I hope you brought some boots as well.\n"
	.string "Wading through all this mud\l"
	.string "without proper gear will be a slog!$"

Route7_Trainer3_Ninjaboy_Intro::
	.string "Ninjas are swift as arrows!\n"
	.string "No amount of mud will stop us!$"

Route7_Trainer3_Ninjaboy_Defeat::
	.string "I may outmatch you in speed,\n"
	.string "but not in strength…$"

Route7_Trainer3_Ninjaboy_PostBattle::
	.string "Ninjas may be fast, but my Pokémon\n"
	.string "clearly got slowed by the mud.$"

Route7_Trainer4_Birdkeeper_Intro::
	.string "The ground Pokémon here have no chance\n"
	.string "against my flying Pokémon!\l"
	.string "And neither do you!$"

Route7_Trainer4_Birdkeeper_Defeat::
	.string "Spoke too soon…$"

Route7_Trainer4_Birdkeeper_PostBattle::
	.string "I could use my Pokémon to fly over this\n"
	.string "dreary place but I prefer doing things\l"
	.string "the hard way.\l"
	.string "Really builds the character.$"

Route7_Trainer5_Blackbelt_Intro::
	.string "Training in the mud has made my Pokémon\n"
	.string "faster than ever.\p"
	.string "Here, let me show you!$"

Route7_Trainer5_Blackbelt_Defeat::
	.string "I will admit my defeat gracefully…$"

Route7_Trainer5_Blackbelt_PostBattle::
	.string "I can't believe I lost after\n"
	.string "all my training.\p"
	.string "I'm a disgrace…$"

Route7_Trainer6_Picnicker2_Intro::
	.string "Pokémon trainers nurture friendship\n"
	.string "with their battles!$"

Route7_Trainer6_Picnicker2_Defeat::
	.string "This feeling of defeat…\n"
	.string "is like a bottomless swamp…$"

Route7_Trainer6_Picnicker2_PostBattle::
	.string "I'm researching what kinds of\n"
	.string "Pokémon live around here.\p"
	.string "That way, I can plan which Pokémon\n"
	.string "I should take along.$"

Route7_Trainer7_Fisherman_Intro::
	.string "I can't and will not stop fishing.\p"
	.string "Though when it comes to battling,\n"
	.string "I can make an exception.$"

Route7_Trainer7_Fisherman_Defeat::
	.string "Battling was a mistake.\n"
	.string "I should just stick to fishing!$"

Route7_Trainer7_Fisherman_PostBattle::
	.string "If I find water, I drop in my\n"
	.string "fishing line.\p"
	.string "Even with a puddle, there may be\n"
	.string "Pokémon that I've never seen.$"

Route7_Trainer8_Hiker_Intro::
	.string "This Hiker wandering the world will\n"
	.string "teach a child like you the harshness\l"
	.string "of life and the difficulty of\l"
	.string "Pokémon battles!$"

Route7_Trainer8_Hiker_Defeat::
	.string "The teacher was schooled…\n"
	.string "You're very strict, aren't you?$"

Route7_Trainer8_Hiker_PostBattle::
	.string "Looks like there is really nothing\n"
	.string "an old hiker like myself can teach you.\l"
	.string "You are the teacher now.$"

Route7_Trainer9_Parasollady_Intro::
	.string "Look! This is my favorite parasol!\n"
	.string "Oh, and my fabulous Pokémon!$"

Route7_Trainer9_Parasollady_Defeat::
	.string "You were only supposed to look…$"

Route7_Trainer9_Parasollady_PostBattle::
	.string "You're probably wondering why I'm\n"
	.string "carrying a parasol here.\p"
	.string "When your Pokémon jumps in a puddle\n"
	.string "of mud, you wish you'd have a parasol\l"
	.string "in hand.$"

Route7_Trainer10_NinjaBoy_Intro::
	.string "I shall become a real ninja when\n"
	.string "I grow up!$"

Route7_Trainer10_NinjaBoy_Defeat::
	.string "Excellent! Excellent!$"

Route7_Trainer10_NinjaBoy_PostBattle::
	.string "So, what's a real ninja supposed to\n"
	.string "do?$"

Route8_SoMuchMud_Text::
	.string "Ugh… Look at all this mud.\p"
	.string "How is a fine lady such as myself\n"
	.string "expected to get across without\l"
	.string "getting my dress dirty?$"
