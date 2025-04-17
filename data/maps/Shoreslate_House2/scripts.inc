Shoreslate_House2_MapScripts::
	.byte 0


Shoreslate_Guesser::
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_3
Shoreslate_Guesser_1:
	lock
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
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_50
Shoreslate_Guesser_49:
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
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_73
Shoreslate_Guesser_71:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_117
Shoreslate_Guesser_115:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_165
Shoreslate_Guesser_163:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_213
Shoreslate_Guesser_211:
	setflag FLAG_SHOWN_GRASS
	end
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_247
Shoreslate_Guesser_245:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_273
Shoreslate_Guesser_271:
	setflag FLAG_SHOWN_GRASS
	end
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_290
Shoreslate_Guesser_288:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_309
Shoreslate_Guesser_307:
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_18:
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_32
Shoreslate_Guesser_30:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_61
Shoreslate_Guesser_59:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_101
Shoreslate_Guesser_99:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_149
Shoreslate_Guesser_147:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_197
Shoreslate_Guesser_195:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_237
Shoreslate_Guesser_235:
	setflag FLAG_SHOWN_FIRE
	end
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_266
Shoreslate_Guesser_264:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_285
Shoreslate_Guesser_283:
	setflag FLAG_SHOWN_FIRE
	end
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_302
Shoreslate_Guesser_300:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_321
Shoreslate_Guesser_319:
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
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_84
Shoreslate_Guesser_82:
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
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_54
Shoreslate_Guesser_52:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_89
Shoreslate_Guesser_87:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_133
Shoreslate_Guesser_131:
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_181
Shoreslate_Guesser_179:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_223
Shoreslate_Guesser_221:
	setflag FLAG_SHOWN_WATER
	end
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_254
Shoreslate_Guesser_252:
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_278
Shoreslate_Guesser_276:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_297
Shoreslate_Guesser_295:
	setflag FLAG_SHOWN_WATER
	end
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_314
Shoreslate_Guesser_312:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_326
Shoreslate_Guesser_324:
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_31:
	random 3
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_68
	case 1, Shoreslate_Guesser_69
	case 2, Shoreslate_Guesser_70
Shoreslate_Guesser_66:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_112
Shoreslate_Guesser_110:
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
	case 0, Shoreslate_Guesser_80
	case 1, Shoreslate_Guesser_81
Shoreslate_Guesser_78:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_128
Shoreslate_Guesser_126:
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
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_START
	special ShowJournalPopupAdd
	goto Shoreslate_Guesser_49

Shoreslate_Guesser_53:
	random 3
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_96
	case 1, Shoreslate_Guesser_97
	case 2, Shoreslate_Guesser_98
Shoreslate_Guesser_94:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_144
Shoreslate_Guesser_142:
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_54:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_56
	goto Shoreslate_Guesser_52

Shoreslate_Guesser_56:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_53
	goto Shoreslate_Guesser_52

Shoreslate_Guesser_60:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_108
	case 1, Shoreslate_Guesser_109
Shoreslate_Guesser_106:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_160
Shoreslate_Guesser_158:
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_61:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_63
	goto Shoreslate_Guesser_59

Shoreslate_Guesser_63:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_60
	goto Shoreslate_Guesser_59

Shoreslate_Guesser_68:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_66

Shoreslate_Guesser_69:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_66

Shoreslate_Guesser_70:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_66

Shoreslate_Guesser_72:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_124
	case 1, Shoreslate_Guesser_125
Shoreslate_Guesser_122:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_176
Shoreslate_Guesser_174:
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_73:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_75
	goto Shoreslate_Guesser_71

Shoreslate_Guesser_75:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_72
	goto Shoreslate_Guesser_71

Shoreslate_Guesser_80:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_78

Shoreslate_Guesser_81:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_78

Shoreslate_Guesser_83:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_82

Shoreslate_Guesser_84:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_83
	goto Shoreslate_Guesser_82

Shoreslate_Guesser_88:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_140
	case 1, Shoreslate_Guesser_141
Shoreslate_Guesser_138:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_192
Shoreslate_Guesser_190:
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_89:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_91
	goto Shoreslate_Guesser_87

Shoreslate_Guesser_91:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_88
	goto Shoreslate_Guesser_87

Shoreslate_Guesser_96:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_94

Shoreslate_Guesser_97:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_94

Shoreslate_Guesser_98:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_94

Shoreslate_Guesser_100:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_156
	case 1, Shoreslate_Guesser_157
Shoreslate_Guesser_154:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_208
Shoreslate_Guesser_206:
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_101:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_103
	goto Shoreslate_Guesser_99

Shoreslate_Guesser_103:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_100
	goto Shoreslate_Guesser_99

Shoreslate_Guesser_108:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_106

Shoreslate_Guesser_109:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_106

Shoreslate_Guesser_111:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_110

Shoreslate_Guesser_112:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_111
	goto Shoreslate_Guesser_110

Shoreslate_Guesser_116:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_172
	case 1, Shoreslate_Guesser_173
Shoreslate_Guesser_170:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_218
Shoreslate_Guesser_216:
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_117:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_119
	goto Shoreslate_Guesser_115

Shoreslate_Guesser_119:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_116
	goto Shoreslate_Guesser_115

Shoreslate_Guesser_124:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_122

Shoreslate_Guesser_125:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_122

Shoreslate_Guesser_127:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_126

Shoreslate_Guesser_128:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_127
	goto Shoreslate_Guesser_126

Shoreslate_Guesser_132:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_188
	case 1, Shoreslate_Guesser_189
Shoreslate_Guesser_186:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_232
Shoreslate_Guesser_230:
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_133:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_135
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_135:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_132
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_140:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_138

Shoreslate_Guesser_141:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_138

Shoreslate_Guesser_143:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_144:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_143
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_148:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_204
	case 1, Shoreslate_Guesser_205
Shoreslate_Guesser_202:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_242
Shoreslate_Guesser_240:
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_149:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_151
	goto Shoreslate_Guesser_147

Shoreslate_Guesser_151:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_148
	goto Shoreslate_Guesser_147

Shoreslate_Guesser_156:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_154

Shoreslate_Guesser_157:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_154

Shoreslate_Guesser_159:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_158

Shoreslate_Guesser_160:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_159
	goto Shoreslate_Guesser_158

Shoreslate_Guesser_164:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_163

Shoreslate_Guesser_165:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_167
	goto Shoreslate_Guesser_163

Shoreslate_Guesser_167:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_164
	goto Shoreslate_Guesser_163

Shoreslate_Guesser_172:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_170

Shoreslate_Guesser_173:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_170

Shoreslate_Guesser_175:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_174

Shoreslate_Guesser_176:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_175
	goto Shoreslate_Guesser_174

Shoreslate_Guesser_180:
	random 2
	switch VAR_RESULT
	case 0, Shoreslate_Guesser_228
	case 1, Shoreslate_Guesser_229
Shoreslate_Guesser_226:
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_261
Shoreslate_Guesser_259:
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_181:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_183
	goto Shoreslate_Guesser_179

Shoreslate_Guesser_183:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_180
	goto Shoreslate_Guesser_179

Shoreslate_Guesser_188:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_189:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_191:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_190

Shoreslate_Guesser_192:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_191
	goto Shoreslate_Guesser_190

Shoreslate_Guesser_196:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_195

Shoreslate_Guesser_197:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_199
	goto Shoreslate_Guesser_195

Shoreslate_Guesser_199:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_196
	goto Shoreslate_Guesser_195

Shoreslate_Guesser_204:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_202

Shoreslate_Guesser_205:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_202

Shoreslate_Guesser_207:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_206

Shoreslate_Guesser_208:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_207
	goto Shoreslate_Guesser_206

Shoreslate_Guesser_212:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_211

Shoreslate_Guesser_213:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_212
	goto Shoreslate_Guesser_211

Shoreslate_Guesser_217:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_216

Shoreslate_Guesser_218:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_217
	goto Shoreslate_Guesser_216

Shoreslate_Guesser_222:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_221

Shoreslate_Guesser_223:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_222
	goto Shoreslate_Guesser_221

Shoreslate_Guesser_228:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_226

Shoreslate_Guesser_229:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_226

Shoreslate_Guesser_231:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_230

Shoreslate_Guesser_232:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_231
	goto Shoreslate_Guesser_230

Shoreslate_Guesser_236:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_235

Shoreslate_Guesser_237:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_236
	goto Shoreslate_Guesser_235

Shoreslate_Guesser_241:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_240

Shoreslate_Guesser_242:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_241
	goto Shoreslate_Guesser_240

Shoreslate_Guesser_246:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_245

Shoreslate_Guesser_247:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_249
	goto Shoreslate_Guesser_245

Shoreslate_Guesser_249:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_246
	goto Shoreslate_Guesser_245

Shoreslate_Guesser_253:
	call ReceivedEggJingle
	giveegg SPECIES_CHIKORITA
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_252

Shoreslate_Guesser_254:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_256
	goto Shoreslate_Guesser_252

Shoreslate_Guesser_256:
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_253
	goto Shoreslate_Guesser_252

Shoreslate_Guesser_260:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_259

Shoreslate_Guesser_261:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_260
	goto Shoreslate_Guesser_259

Shoreslate_Guesser_265:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_264

Shoreslate_Guesser_266:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_268
	goto Shoreslate_Guesser_264

Shoreslate_Guesser_268:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_265
	goto Shoreslate_Guesser_264

Shoreslate_Guesser_272:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_271

Shoreslate_Guesser_273:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_272
	goto Shoreslate_Guesser_271

Shoreslate_Guesser_277:
	call ReceivedEggJingle
	giveegg SPECIES_TOTODILE
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_276

Shoreslate_Guesser_278:
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_280
	goto Shoreslate_Guesser_276

Shoreslate_Guesser_280:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_277
	goto Shoreslate_Guesser_276

Shoreslate_Guesser_284:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_283

Shoreslate_Guesser_285:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_284
	goto Shoreslate_Guesser_283

Shoreslate_Guesser_289:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_288

Shoreslate_Guesser_290:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_292
	goto Shoreslate_Guesser_288

Shoreslate_Guesser_292:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_289
	goto Shoreslate_Guesser_288

Shoreslate_Guesser_296:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_295

Shoreslate_Guesser_297:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_296
	goto Shoreslate_Guesser_295

Shoreslate_Guesser_301:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_300

Shoreslate_Guesser_302:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_304
	goto Shoreslate_Guesser_300

Shoreslate_Guesser_304:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_301
	goto Shoreslate_Guesser_300

Shoreslate_Guesser_308:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_307

Shoreslate_Guesser_309:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_308
	goto Shoreslate_Guesser_307

Shoreslate_Guesser_313:
	call ReceivedEggJingle
	giveegg SPECIES_CYNDAQUIL
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_312

Shoreslate_Guesser_314:
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_316
	goto Shoreslate_Guesser_312

Shoreslate_Guesser_316:
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_313
	goto Shoreslate_Guesser_312

Shoreslate_Guesser_320:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_319

Shoreslate_Guesser_321:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_320
	goto Shoreslate_Guesser_319

Shoreslate_Guesser_325:
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_324

Shoreslate_Guesser_326:
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_325
	goto Shoreslate_Guesser_324


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
