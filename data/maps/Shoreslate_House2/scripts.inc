Shoreslate_House2_MapScripts::
	.byte 0


Shoreslate_Guesser::
# 4 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_3
Shoreslate_Guesser_1:
# 8 "data/maps/Shoreslate_House2/scripts.pory"
	lock
# 9 "data/maps/Shoreslate_House2/scripts.pory"
	faceplayer
# 10 "data/maps/Shoreslate_House2/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 12 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq Shoreslate_Guesser_9
Shoreslate_Guesser_8:
# 15 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Shoreslate_Guesser_12
Shoreslate_Guesser_11:
# 18 "data/maps/Shoreslate_House2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/Shoreslate_House2/scripts.pory"
	specialvar VAR_RESULT, CheckGrassStarter
# 21 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_15
# 145 "data/maps/Shoreslate_House2/scripts.pory"
	specialvar VAR_RESULT, CheckFireStarter
# 146 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_18
# 271 "data/maps/Shoreslate_House2/scripts.pory"
	specialvar VAR_RESULT, CheckWaterStarter
# 272 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_28
# 395 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Incorrect, MSGBOX_NPC
# 396 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_50
Shoreslate_Guesser_49:
	end

Shoreslate_Guesser_2:
# 5 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_OutOfEggs, MSGBOX_NPC
	end

Shoreslate_Guesser_3:
# 4 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_5
	goto Shoreslate_Guesser_1

Shoreslate_Guesser_5:
# 4 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_2
	goto Shoreslate_Guesser_1

Shoreslate_Guesser_9:
# 13 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Intro, MSGBOX_DEFAULT
	goto Shoreslate_Guesser_8

Shoreslate_Guesser_12:
# 16 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_IntroShort, MSGBOX_DEFAULT
	goto Shoreslate_Guesser_11

Shoreslate_Guesser_15:
# 22 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
# 23 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_22
Shoreslate_Guesser_20:
# 47 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_39
Shoreslate_Guesser_37:
# 67 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_73
Shoreslate_Guesser_71:
# 87 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_117
Shoreslate_Guesser_115:
# 107 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_165
Shoreslate_Guesser_163:
# 112 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 113 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_213
Shoreslate_Guesser_211:
# 117 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
# 118 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 119 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_247
Shoreslate_Guesser_245:
# 124 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 125 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_273
Shoreslate_Guesser_271:
# 129 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
# 130 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 131 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_290
Shoreslate_Guesser_288:
# 136 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 137 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_309
Shoreslate_Guesser_307:
# 141 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_18:
# 147 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
# 148 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_32
Shoreslate_Guesser_30:
# 173 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_61
Shoreslate_Guesser_59:
# 193 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_101
Shoreslate_Guesser_99:
# 213 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_149
Shoreslate_Guesser_147:
# 233 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_197
Shoreslate_Guesser_195:
# 238 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 239 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_237
Shoreslate_Guesser_235:
# 243 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
# 244 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 245 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_266
Shoreslate_Guesser_264:
# 250 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 251 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_285
Shoreslate_Guesser_283:
# 255 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
# 256 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 257 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_302
Shoreslate_Guesser_300:
# 262 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 263 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_321
Shoreslate_Guesser_319:
# 267 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_21:
# 24 "data/maps/Shoreslate_House2/scripts.pory"
	random 3
# 25 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 26 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_46
# 30 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_47
# 34 "data/maps/Shoreslate_House2/scripts.pory"
	case 2, Shoreslate_Guesser_48
Shoreslate_Guesser_44:
# 39 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 40 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_84
Shoreslate_Guesser_82:
# 44 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_22:
# 23 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_24
	goto Shoreslate_Guesser_20

Shoreslate_Guesser_24:
# 23 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_21
	goto Shoreslate_Guesser_20

Shoreslate_Guesser_28:
# 273 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
# 274 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_54
Shoreslate_Guesser_52:
# 298 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_89
Shoreslate_Guesser_87:
# 318 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_133
Shoreslate_Guesser_131:
# 338 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_181
Shoreslate_Guesser_179:
# 358 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 359 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_223
Shoreslate_Guesser_221:
# 363 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
# 364 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 365 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_254
Shoreslate_Guesser_252:
# 370 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_278
Shoreslate_Guesser_276:
# 375 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 376 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_297
Shoreslate_Guesser_295:
# 380 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
# 381 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 382 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_314
Shoreslate_Guesser_312:
# 387 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 388 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_326
Shoreslate_Guesser_324:
# 392 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_31:
# 149 "data/maps/Shoreslate_House2/scripts.pory"
	random 3
# 150 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_68
# 155 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_69
# 159 "data/maps/Shoreslate_House2/scripts.pory"
	case 2, Shoreslate_Guesser_70
Shoreslate_Guesser_66:
# 164 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 165 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_112
Shoreslate_Guesser_110:
# 169 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_32:
# 148 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_34
	goto Shoreslate_Guesser_30

Shoreslate_Guesser_34:
# 148 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_31
	goto Shoreslate_Guesser_30

Shoreslate_Guesser_38:
# 48 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 49 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 50 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_80
# 54 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_81
Shoreslate_Guesser_78:
# 59 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 60 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_128
Shoreslate_Guesser_126:
# 64 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_39:
# 47 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_41
	goto Shoreslate_Guesser_37

Shoreslate_Guesser_41:
# 47 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_38
	goto Shoreslate_Guesser_37

Shoreslate_Guesser_46:
# 27 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 28 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 29 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_44

Shoreslate_Guesser_47:
# 31 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 32 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 33 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_44

Shoreslate_Guesser_48:
# 35 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 36 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 37 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_44

Shoreslate_Guesser_50:
# 397 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_START
# 398 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupAdd
	goto Shoreslate_Guesser_49

Shoreslate_Guesser_53:
# 275 "data/maps/Shoreslate_House2/scripts.pory"
	random 3
# 276 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_96
# 281 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_97
# 285 "data/maps/Shoreslate_House2/scripts.pory"
	case 2, Shoreslate_Guesser_98
Shoreslate_Guesser_94:
# 290 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 291 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_144
Shoreslate_Guesser_142:
# 295 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_54:
# 274 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_56
	goto Shoreslate_Guesser_52

Shoreslate_Guesser_56:
# 274 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_53
	goto Shoreslate_Guesser_52

Shoreslate_Guesser_60:
# 174 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 175 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_108
# 180 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_109
Shoreslate_Guesser_106:
# 185 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 186 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_160
Shoreslate_Guesser_158:
# 190 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_61:
# 173 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_63
	goto Shoreslate_Guesser_59

Shoreslate_Guesser_63:
# 173 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_60
	goto Shoreslate_Guesser_59

Shoreslate_Guesser_68:
# 152 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 153 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 154 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_66

Shoreslate_Guesser_69:
# 156 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 157 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 158 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_66

Shoreslate_Guesser_70:
# 160 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 161 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 162 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_66

Shoreslate_Guesser_72:
# 68 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 69 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 70 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_124
# 74 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_125
Shoreslate_Guesser_122:
# 79 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 80 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_176
Shoreslate_Guesser_174:
# 84 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_73:
# 67 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_75
	goto Shoreslate_Guesser_71

Shoreslate_Guesser_75:
# 67 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_72
	goto Shoreslate_Guesser_71

Shoreslate_Guesser_80:
# 51 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 52 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 53 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_78

Shoreslate_Guesser_81:
# 55 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 56 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 57 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_78

Shoreslate_Guesser_83:
# 41 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 42 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_82

Shoreslate_Guesser_84:
# 40 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_83
	goto Shoreslate_Guesser_82

Shoreslate_Guesser_88:
# 299 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 300 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 301 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_140
# 305 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_141
Shoreslate_Guesser_138:
# 310 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 311 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_192
Shoreslate_Guesser_190:
# 315 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_89:
# 298 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_91
	goto Shoreslate_Guesser_87

Shoreslate_Guesser_91:
# 298 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_88
	goto Shoreslate_Guesser_87

Shoreslate_Guesser_96:
# 278 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 279 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 280 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_94

Shoreslate_Guesser_97:
# 282 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 283 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 284 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_94

Shoreslate_Guesser_98:
# 286 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 287 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 288 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_94

Shoreslate_Guesser_100:
# 194 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 195 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 196 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_156
# 200 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_157
Shoreslate_Guesser_154:
# 205 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 206 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_208
Shoreslate_Guesser_206:
# 210 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_101:
# 193 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_103
	goto Shoreslate_Guesser_99

Shoreslate_Guesser_103:
# 193 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_100
	goto Shoreslate_Guesser_99

Shoreslate_Guesser_108:
# 177 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 178 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 179 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_106

Shoreslate_Guesser_109:
# 181 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 182 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 183 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_106

Shoreslate_Guesser_111:
# 166 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 167 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_110

Shoreslate_Guesser_112:
# 165 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_111
	goto Shoreslate_Guesser_110

Shoreslate_Guesser_116:
# 88 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 89 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_172
# 94 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_173
Shoreslate_Guesser_170:
# 99 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 100 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_218
Shoreslate_Guesser_216:
# 104 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_117:
# 87 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_119
	goto Shoreslate_Guesser_115

Shoreslate_Guesser_119:
# 87 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_116
	goto Shoreslate_Guesser_115

Shoreslate_Guesser_124:
# 71 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 72 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 73 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_122

Shoreslate_Guesser_125:
# 75 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 76 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 77 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_122

Shoreslate_Guesser_127:
# 61 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 62 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_126

Shoreslate_Guesser_128:
# 60 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_127
	goto Shoreslate_Guesser_126

Shoreslate_Guesser_132:
# 319 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 320 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 321 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_188
# 325 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_189
Shoreslate_Guesser_186:
# 330 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 331 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_232
Shoreslate_Guesser_230:
# 335 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_133:
# 318 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_135
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_135:
# 318 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_132
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_140:
# 302 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 303 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 304 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_138

Shoreslate_Guesser_141:
# 306 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 307 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 308 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_138

Shoreslate_Guesser_143:
# 292 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 293 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_144:
# 291 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_143
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_148:
# 214 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 215 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_204
# 220 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_205
Shoreslate_Guesser_202:
# 225 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 226 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_242
Shoreslate_Guesser_240:
# 230 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_149:
# 213 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_151
	goto Shoreslate_Guesser_147

Shoreslate_Guesser_151:
# 213 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_148
	goto Shoreslate_Guesser_147

Shoreslate_Guesser_156:
# 197 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 198 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 199 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_154

Shoreslate_Guesser_157:
# 201 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 202 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 203 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_154

Shoreslate_Guesser_159:
# 187 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 188 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_158

Shoreslate_Guesser_160:
# 186 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_159
	goto Shoreslate_Guesser_158

Shoreslate_Guesser_164:
# 108 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 109 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 110 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_163

Shoreslate_Guesser_165:
# 107 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_167
	goto Shoreslate_Guesser_163

Shoreslate_Guesser_167:
# 107 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_164
	goto Shoreslate_Guesser_163

Shoreslate_Guesser_172:
# 91 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 92 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 93 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_170

Shoreslate_Guesser_173:
# 95 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 96 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 97 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_170

Shoreslate_Guesser_175:
# 81 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 82 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_174

Shoreslate_Guesser_176:
# 80 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_175
	goto Shoreslate_Guesser_174

Shoreslate_Guesser_180:
# 339 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 340 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 341 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_228
# 345 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_229
Shoreslate_Guesser_226:
# 350 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 351 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_Q14_SHORESLATE_FAVORITEMON_START, Shoreslate_Guesser_261
Shoreslate_Guesser_259:
# 355 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_181:
# 338 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_183
	goto Shoreslate_Guesser_179

Shoreslate_Guesser_183:
# 338 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_180
	goto Shoreslate_Guesser_179

Shoreslate_Guesser_188:
# 322 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 323 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 324 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_189:
# 326 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 327 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 328 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_191:
# 312 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 313 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_190

Shoreslate_Guesser_192:
# 311 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_191
	goto Shoreslate_Guesser_190

Shoreslate_Guesser_196:
# 234 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 235 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 236 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_195

Shoreslate_Guesser_197:
# 233 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_199
	goto Shoreslate_Guesser_195

Shoreslate_Guesser_199:
# 233 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_196
	goto Shoreslate_Guesser_195

Shoreslate_Guesser_204:
# 217 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 218 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 219 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_202

Shoreslate_Guesser_205:
# 221 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 222 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 223 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_202

Shoreslate_Guesser_207:
# 207 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 208 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_206

Shoreslate_Guesser_208:
# 206 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_207
	goto Shoreslate_Guesser_206

Shoreslate_Guesser_212:
# 114 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 115 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_211

Shoreslate_Guesser_213:
# 113 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_212
	goto Shoreslate_Guesser_211

Shoreslate_Guesser_217:
# 101 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 102 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_216

Shoreslate_Guesser_218:
# 100 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_217
	goto Shoreslate_Guesser_216

Shoreslate_Guesser_222:
# 360 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 361 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_221

Shoreslate_Guesser_223:
# 359 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_222
	goto Shoreslate_Guesser_221

Shoreslate_Guesser_228:
# 342 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 343 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 344 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_226

Shoreslate_Guesser_229:
# 346 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 347 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 348 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_226

Shoreslate_Guesser_231:
# 332 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 333 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_230

Shoreslate_Guesser_232:
# 331 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_231
	goto Shoreslate_Guesser_230

Shoreslate_Guesser_236:
# 240 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 241 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_235

Shoreslate_Guesser_237:
# 239 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_236
	goto Shoreslate_Guesser_235

Shoreslate_Guesser_241:
# 227 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 228 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_240

Shoreslate_Guesser_242:
# 226 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_241
	goto Shoreslate_Guesser_240

Shoreslate_Guesser_246:
# 120 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 121 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 122 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_245

Shoreslate_Guesser_247:
# 119 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_249
	goto Shoreslate_Guesser_245

Shoreslate_Guesser_249:
# 119 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_246
	goto Shoreslate_Guesser_245

Shoreslate_Guesser_253:
# 366 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 367 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 368 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_252

Shoreslate_Guesser_254:
# 365 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_256
	goto Shoreslate_Guesser_252

Shoreslate_Guesser_256:
# 365 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_253
	goto Shoreslate_Guesser_252

Shoreslate_Guesser_260:
# 352 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 353 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_259

Shoreslate_Guesser_261:
# 351 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_260
	goto Shoreslate_Guesser_259

Shoreslate_Guesser_265:
# 246 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 247 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 248 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_264

Shoreslate_Guesser_266:
# 245 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_268
	goto Shoreslate_Guesser_264

Shoreslate_Guesser_268:
# 245 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_265
	goto Shoreslate_Guesser_264

Shoreslate_Guesser_272:
# 126 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 127 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_271

Shoreslate_Guesser_273:
# 125 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_272
	goto Shoreslate_Guesser_271

Shoreslate_Guesser_277:
# 371 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 372 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 373 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_276

Shoreslate_Guesser_278:
# 370 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_280
	goto Shoreslate_Guesser_276

Shoreslate_Guesser_280:
# 370 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_277
	goto Shoreslate_Guesser_276

Shoreslate_Guesser_284:
# 252 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 253 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_283

Shoreslate_Guesser_285:
# 251 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_284
	goto Shoreslate_Guesser_283

Shoreslate_Guesser_289:
# 132 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 133 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 134 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_288

Shoreslate_Guesser_290:
# 131 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_292
	goto Shoreslate_Guesser_288

Shoreslate_Guesser_292:
# 131 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_289
	goto Shoreslate_Guesser_288

Shoreslate_Guesser_296:
# 377 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 378 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_295

Shoreslate_Guesser_297:
# 376 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_296
	goto Shoreslate_Guesser_295

Shoreslate_Guesser_301:
# 258 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 259 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 260 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_300

Shoreslate_Guesser_302:
# 257 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_304
	goto Shoreslate_Guesser_300

Shoreslate_Guesser_304:
# 257 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_301
	goto Shoreslate_Guesser_300

Shoreslate_Guesser_308:
# 138 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 139 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_307

Shoreslate_Guesser_309:
# 137 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_308
	goto Shoreslate_Guesser_307

Shoreslate_Guesser_313:
# 383 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 384 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 385 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_312

Shoreslate_Guesser_314:
# 382 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_316
	goto Shoreslate_Guesser_312

Shoreslate_Guesser_316:
# 382 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_313
	goto Shoreslate_Guesser_312

Shoreslate_Guesser_320:
# 264 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 265 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_319

Shoreslate_Guesser_321:
# 263 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_320
	goto Shoreslate_Guesser_319

Shoreslate_Guesser_325:
# 389 "data/maps/Shoreslate_House2/scripts.pory"
	completequest FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE
# 390 "data/maps/Shoreslate_House2/scripts.pory"
	special ShowJournalPopupRemove
	goto Shoreslate_Guesser_324

Shoreslate_Guesser_326:
# 388 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_Q14_SHORESLATE_FAVORITEMON_COMPLETE, Shoreslate_Guesser_325
	goto Shoreslate_Guesser_324


ReceivedEggJingle::
# 439 "data/maps/Shoreslate_House2/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 440 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox ReceivedEggJingle_Text_0, MSGBOX_AUTOCLOSE
# 441 "data/maps/Shoreslate_House2/scripts.pory"
	waitfanfare
# 442 "data/maps/Shoreslate_House2/scripts.pory"
	waitmessage
# 443 "data/maps/Shoreslate_House2/scripts.pory"
	closemessage
	return


Shoreslate_SmallHouse_Woman::
# 448 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_SmallHouse_Woman_Text, MSGBOX_NPC
	end


Shoreslate_SmallHouse_Man::
# 463 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_SmallHouse_Man_Text, MSGBOX_NPC
	end


ReceivedEggJingle_Text_0:
# 440 "data/maps/Shoreslate_House2/scripts.pory"
	.string "{PLAYER} received a Pokémon egg\nfrom the gentleman!$"

Shoreslate_Starter_OutOfEggs::
# 404 "data/maps/Shoreslate_House2/scripts.pory"
	.string "I appreciate you sharing your\n"
	.string "collection with me but I no longer\l"
	.string "have any more rewards to give you.\p"
	.string "I hope you take good care of the\n"
	.string "eggs I gave you.$"

Shoreslate_Starter_Intro::
# 411 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Greetings. Would you happen to have\n"
	.string "any of my favorite Pokémon?\p"
	.string "If you can show me one of my top three\n"
	.string "Pokémon, I will give you something nice.$"

Shoreslate_Starter_IntroShort::
# 417 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Do you have a Pokémon to show me?$"

Shoreslate_Starter_Correct::
# 420 "data/maps/Shoreslate_House2/scripts.pory"
	.string "That {STR_VAR_1}…\p"
	.string "Why yes, it is one of my favorite\n"
	.string "Pokémon!\p"
	.string "As a thank you for allowing me to see\n"
	.string "it in person, you may have this egg\l"
	.string "one of Pokémon was carrying.$"

Shoreslate_Starter_TakeCareOfTheEgg::
# 428 "data/maps/Shoreslate_House2/scripts.pory"
	.string "I hope you take good care of that egg.$"

Shoreslate_Starter_Incorrect::
# 431 "data/maps/Shoreslate_House2/scripts.pory"
	.string "That {STR_VAR_1}…\p"
	.string "While not a bad Pokémon, I must say\n"
	.string "it is not one of the Pokémon I'm\l"
	.string "currently hoping to see…$"

Shoreslate_SmallHouse_Woman_Text::
# 452 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Are those running shoes I see you\n"
	.string "sporting?\p"
	.string "They're just one of the many products\n"
	.string "invented by the Devon Corporation,\l"
	.string "the very same corporation whose\l"
	.string "headquarters are located right here\l"
	.string "in Shoreslate!$"

Shoreslate_SmallHouse_Man_Text::
# 467 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Have you been to the Devon\n"
	.string "Corporation's offices?\p"
	.string "Much of their product development\n"
	.string "is kept secret but they do offer\l"
	.string "guided tours to folks every now\l"
	.string "and then.$"
