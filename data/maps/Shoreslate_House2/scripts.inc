Shoreslate_House2_MapScripts::
	.byte 0


Shoreslate_Guesser::
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_3
Shoreslate_Guesser_1:
	lockall
	faceplayer
	bufferleadmonspeciesname STR_VAR_1
	compare VAR_TEMP_1, 0
	goto_if_eq Shoreslate_Guesser_9
Shoreslate_Guesser_8:
	compare VAR_TEMP_1, 1
	goto_if_eq Shoreslate_Guesser_12
Shoreslate_Guesser_11:
	setvar VAR_TEMP_1, 1
	specialvar VAR_RESULT, CheckGrassStarter
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_15
	specialvar VAR_RESULT, CheckFireStarter
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_18
	specialvar VAR_RESULT, CheckWaterStarter
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_28
	msgbox Shoreslate_Starter_Incorrect, MSGBOX_NPC
	end

Shoreslate_Guesser_2:
	msgbox Shoreslate_Starter_OutOfEggs, MSGBOX_NPC
	end

Shoreslate_Guesser_3:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_5
	goto Shoreslate_Guesser_1

Shoreslate_Guesser_5:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_2
	goto Shoreslate_Guesser_1

Shoreslate_Guesser_9:
	msgbox Shoreslate_Starter_Intro, MSGBOX_DEFAULT
	goto Shoreslate_Guesser_8

Shoreslate_Guesser_12:
	msgbox Shoreslate_Starter_IntroShort, MSGBOX_DEFAULT
	goto Shoreslate_Guesser_11

Shoreslate_Guesser_15:
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_22
Shoreslate_Guesser_20:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_39
Shoreslate_Guesser_37:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_70
Shoreslate_Guesser_68:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_104
Shoreslate_Guesser_102:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_137
Shoreslate_Guesser_135:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_170
Shoreslate_Guesser_168:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_195
Shoreslate_Guesser_193:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_18:
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_32
Shoreslate_Guesser_30:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_58
Shoreslate_Guesser_56:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_93
Shoreslate_Guesser_91:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_126
Shoreslate_Guesser_124:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_159
Shoreslate_Guesser_157:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_188
Shoreslate_Guesser_186:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_209
Shoreslate_Guesser_207:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_21:
	random 3
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_46
	case 1, Shoreslate_Guesser_47
	case 2, Shoreslate_Guesser_48
Shoreslate_Guesser_44:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_22:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_24
	goto Shoreslate_Guesser_20

Shoreslate_Guesser_24:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_21
	goto Shoreslate_Guesser_20

Shoreslate_Guesser_28:
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_51
Shoreslate_Guesser_49:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_81
Shoreslate_Guesser_79:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_115
Shoreslate_Guesser_113:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_148
Shoreslate_Guesser_146:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_177
Shoreslate_Guesser_175:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_202
Shoreslate_Guesser_200:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_216
Shoreslate_Guesser_214:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_31:
	random 3
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_65
	case 1, Shoreslate_Guesser_66
	case 2, Shoreslate_Guesser_67
Shoreslate_Guesser_63:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_32:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_34
	goto Shoreslate_Guesser_30

Shoreslate_Guesser_34:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_31
	goto Shoreslate_Guesser_30

Shoreslate_Guesser_38:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_77
	case 1, Shoreslate_Guesser_78
Shoreslate_Guesser_75:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_39:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_41
	goto Shoreslate_Guesser_37

Shoreslate_Guesser_41:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_38
	goto Shoreslate_Guesser_37

Shoreslate_Guesser_46:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_44

Shoreslate_Guesser_47:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_44

Shoreslate_Guesser_48:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_44

Shoreslate_Guesser_50:
	random 3
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_88
	case 1, Shoreslate_Guesser_89
	case 2, Shoreslate_Guesser_90
Shoreslate_Guesser_86:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_51:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_53
	goto Shoreslate_Guesser_49

Shoreslate_Guesser_53:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_50
	goto Shoreslate_Guesser_49

Shoreslate_Guesser_57:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_100
	case 1, Shoreslate_Guesser_101
Shoreslate_Guesser_98:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_58:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_60
	goto Shoreslate_Guesser_56

Shoreslate_Guesser_60:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_57
	goto Shoreslate_Guesser_56

Shoreslate_Guesser_65:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_63

Shoreslate_Guesser_66:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_63

Shoreslate_Guesser_67:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_63

Shoreslate_Guesser_69:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_111
	case 1, Shoreslate_Guesser_112
Shoreslate_Guesser_109:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_70:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_72
	goto Shoreslate_Guesser_68

Shoreslate_Guesser_72:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_69
	goto Shoreslate_Guesser_68

Shoreslate_Guesser_77:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_75

Shoreslate_Guesser_78:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_75

Shoreslate_Guesser_80:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_122
	case 1, Shoreslate_Guesser_123
Shoreslate_Guesser_120:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_81:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_83
	goto Shoreslate_Guesser_79

Shoreslate_Guesser_83:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_80
	goto Shoreslate_Guesser_79

Shoreslate_Guesser_88:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_86

Shoreslate_Guesser_89:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_86

Shoreslate_Guesser_90:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_86

Shoreslate_Guesser_92:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_133
	case 1, Shoreslate_Guesser_134
Shoreslate_Guesser_131:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_93:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_95
	goto Shoreslate_Guesser_91

Shoreslate_Guesser_95:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_92
	goto Shoreslate_Guesser_91

Shoreslate_Guesser_100:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_98

Shoreslate_Guesser_101:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_98

Shoreslate_Guesser_103:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_144
	case 1, Shoreslate_Guesser_145
Shoreslate_Guesser_142:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_104:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_106
	goto Shoreslate_Guesser_102

Shoreslate_Guesser_106:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_103
	goto Shoreslate_Guesser_102

Shoreslate_Guesser_111:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_109

Shoreslate_Guesser_112:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_109

Shoreslate_Guesser_114:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_155
	case 1, Shoreslate_Guesser_156
Shoreslate_Guesser_153:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_115:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_117
	goto Shoreslate_Guesser_113

Shoreslate_Guesser_117:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_114
	goto Shoreslate_Guesser_113

Shoreslate_Guesser_122:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_120

Shoreslate_Guesser_123:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_120

Shoreslate_Guesser_125:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_166
	case 1, Shoreslate_Guesser_167
Shoreslate_Guesser_164:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_126:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_128
	goto Shoreslate_Guesser_124

Shoreslate_Guesser_128:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_125
	goto Shoreslate_Guesser_124

Shoreslate_Guesser_133:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_134:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_136:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_135

Shoreslate_Guesser_137:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_139
	goto Shoreslate_Guesser_135

Shoreslate_Guesser_139:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_136
	goto Shoreslate_Guesser_135

Shoreslate_Guesser_144:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_145:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_147:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_184
	case 1, Shoreslate_Guesser_185
Shoreslate_Guesser_182:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_148:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_150
	goto Shoreslate_Guesser_146

Shoreslate_Guesser_150:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_147
	goto Shoreslate_Guesser_146

Shoreslate_Guesser_155:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_153

Shoreslate_Guesser_156:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_153

Shoreslate_Guesser_158:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_157

Shoreslate_Guesser_159:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_161
	goto Shoreslate_Guesser_157

Shoreslate_Guesser_161:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_158
	goto Shoreslate_Guesser_157

Shoreslate_Guesser_166:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_164

Shoreslate_Guesser_167:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_164

Shoreslate_Guesser_169:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_168

Shoreslate_Guesser_170:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_172
	goto Shoreslate_Guesser_168

Shoreslate_Guesser_172:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_169
	goto Shoreslate_Guesser_168

Shoreslate_Guesser_176:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_175

Shoreslate_Guesser_177:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_179
	goto Shoreslate_Guesser_175

Shoreslate_Guesser_179:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_176
	goto Shoreslate_Guesser_175

Shoreslate_Guesser_184:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_182

Shoreslate_Guesser_185:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_182

Shoreslate_Guesser_187:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_188:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_190
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_190:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_187
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_194:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_193

Shoreslate_Guesser_195:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_197
	goto Shoreslate_Guesser_193

Shoreslate_Guesser_197:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_194
	goto Shoreslate_Guesser_193

Shoreslate_Guesser_201:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_200

Shoreslate_Guesser_202:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_204
	goto Shoreslate_Guesser_200

Shoreslate_Guesser_204:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_201
	goto Shoreslate_Guesser_200

Shoreslate_Guesser_208:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_207

Shoreslate_Guesser_209:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_211
	goto Shoreslate_Guesser_207

Shoreslate_Guesser_211:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_208
	goto Shoreslate_Guesser_207

Shoreslate_Guesser_215:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_214

Shoreslate_Guesser_216:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_218
	goto Shoreslate_Guesser_214

Shoreslate_Guesser_218:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_215
	goto Shoreslate_Guesser_214


ReceivedEggJingle::
	playfanfare MUS_OBTAIN_TMHM
	msgbox ReceivedEggJingle_Text_0, MSGBOX_AUTOCLOSE
	waitfanfare
	waitmessage
	closemessage
	return


Shoreslate_SmallHouse_Woman::
	msgbox Shoreslate_SmallHouse_Woman_Text, MSGBOX_NPC
	end


Shoreslate_SmallHouse_Man::
	msgbox Shoreslate_SmallHouse_Man_Text, MSGBOX_NPC
	end


ReceivedEggJingle_Text_0:
	.string "{PLAYER} received a Pokémon egg\nfrom the gentleman!$"

Shoreslate_Starter_OutOfEggs::
	.string "I appreciate you sharing your\n"
	.string "collection with me but I no longer\l"
	.string "have any more rewards to give you.\p"
	.string "I hope you take good care of the\n"
	.string "eggs I gave you.$"

Shoreslate_Starter_Intro::
	.string "Greetings. Would you happen to have\n"
	.string "any of my favorite Pokémon?\p"
	.string "If you can show me one of my top three\n"
	.string "Pokémon, I will give you something nice.$"

Shoreslate_Starter_IntroShort::
	.string "Do you have a Pokémon to show me?$"

Shoreslate_Starter_Correct::
	.string "That {STR_VAR_1}…\p"
	.string "Why yes, it is one of my favorite\n"
	.string "Pokémon!\p"
	.string "As a thank you for allowing me to see\n"
	.string "it in person, you may have this egg\l"
	.string "one of Pokémon was carrying.$"

Shoreslate_Starter_TakeCareOfTheEgg::
	.string "I hope you take good care of that egg.$"

Shoreslate_Starter_Incorrect::
	.string "That {STR_VAR_1}…\p"
	.string "While not a bad Pokémon, I must say\n"
	.string "it is not one of the Pokémon I'm\l"
	.string "currently hoping to see…$"

Shoreslate_SmallHouse_Woman_Text::
	.string "Are those running shoes I see you\n"
	.string "sporting?\p"
	.string "They're just one of the many products\n"
	.string "invented by the Devon Corporation,\l"
	.string "the very same corporation whose\l"
	.string "headquarters are located right here\l"
	.string "in Shoreslate!$"

Shoreslate_SmallHouse_Man_Text::
	.string "Have you been to the Devon\n"
	.string "Corporation's offices?\p"
	.string "Much of their product development\n"
	.string "is kept secret but they do offer\l"
	.string "guided tours to folks every now\l"
	.string "and then.$"
