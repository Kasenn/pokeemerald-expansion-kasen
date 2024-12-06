Shoreslate_House2_MapScripts::
	.byte 0


Shoreslate_Guesser::
# 4 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_3
Shoreslate_Guesser_1:
# 8 "data/maps/Shoreslate_House2/scripts.pory"
	lockall
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
# 117 "data/maps/Shoreslate_House2/scripts.pory"
	specialvar VAR_RESULT, CheckFireStarter
# 118 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_18
# 215 "data/maps/Shoreslate_House2/scripts.pory"
	specialvar VAR_RESULT, CheckWaterStarter
# 216 "data/maps/Shoreslate_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Shoreslate_Guesser_28
# 311 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Incorrect, MSGBOX_NPC
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
# 43 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_39
Shoreslate_Guesser_37:
# 59 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_70
Shoreslate_Guesser_68:
# 75 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_104
Shoreslate_Guesser_102:
# 91 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_137
Shoreslate_Guesser_135:
# 96 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 97 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
# 98 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 99 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_170
Shoreslate_Guesser_168:
# 104 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 105 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
# 106 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 107 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_195
Shoreslate_Guesser_193:
# 112 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 113 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_18:
# 119 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
# 120 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_32
Shoreslate_Guesser_30:
# 141 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_58
Shoreslate_Guesser_56:
# 157 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_93
Shoreslate_Guesser_91:
# 173 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_126
Shoreslate_Guesser_124:
# 189 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_159
Shoreslate_Guesser_157:
# 194 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 195 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
# 196 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 197 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_188
Shoreslate_Guesser_186:
# 202 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 203 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
# 204 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 205 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_209
Shoreslate_Guesser_207:
# 210 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 211 "data/maps/Shoreslate_House2/scripts.pory"
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
# 217 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_Correct, MSGBOX_DEFAULT
# 218 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_51
Shoreslate_Guesser_49:
# 238 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_81
Shoreslate_Guesser_79:
# 254 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_115
Shoreslate_Guesser_113:
# 270 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_148
Shoreslate_Guesser_146:
# 286 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 287 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
# 288 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 289 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_177
Shoreslate_Guesser_175:
# 294 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_202
Shoreslate_Guesser_200:
# 299 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 300 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
# 301 "data/maps/Shoreslate_House2/scripts.pory"
	end
# 302 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CYNDAQUIL, Shoreslate_Guesser_216
Shoreslate_Guesser_214:
# 307 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 308 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_31:
# 121 "data/maps/Shoreslate_House2/scripts.pory"
	random 3
# 122 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 123 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_65
# 127 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_66
# 131 "data/maps/Shoreslate_House2/scripts.pory"
	case 2, Shoreslate_Guesser_67
Shoreslate_Guesser_63:
# 136 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 137 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_32:
# 120 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_34
	goto Shoreslate_Guesser_30

Shoreslate_Guesser_34:
# 120 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_31
	goto Shoreslate_Guesser_30

Shoreslate_Guesser_38:
# 44 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 45 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 46 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_77
# 50 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_78
Shoreslate_Guesser_75:
# 55 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 56 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_39:
# 43 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_41
	goto Shoreslate_Guesser_37

Shoreslate_Guesser_41:
# 43 "data/maps/Shoreslate_House2/scripts.pory"
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
# 219 "data/maps/Shoreslate_House2/scripts.pory"
	random 3
# 220 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 221 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_88
# 225 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_89
# 229 "data/maps/Shoreslate_House2/scripts.pory"
	case 2, Shoreslate_Guesser_90
Shoreslate_Guesser_86:
# 234 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 235 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_51:
# 218 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_53
	goto Shoreslate_Guesser_49

Shoreslate_Guesser_53:
# 218 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_50
	goto Shoreslate_Guesser_49

Shoreslate_Guesser_57:
# 142 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 143 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_100
# 148 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_101
Shoreslate_Guesser_98:
# 153 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 154 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_58:
# 141 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_60
	goto Shoreslate_Guesser_56

Shoreslate_Guesser_60:
# 141 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_57
	goto Shoreslate_Guesser_56

Shoreslate_Guesser_65:
# 124 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 125 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 126 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_63

Shoreslate_Guesser_66:
# 128 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 129 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 130 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_63

Shoreslate_Guesser_67:
# 132 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 133 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 134 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_63

Shoreslate_Guesser_69:
# 60 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 61 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_111
# 66 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_112
Shoreslate_Guesser_109:
# 71 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 72 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_70:
# 59 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_72
	goto Shoreslate_Guesser_68

Shoreslate_Guesser_72:
# 59 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_69
	goto Shoreslate_Guesser_68

Shoreslate_Guesser_77:
# 47 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 48 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 49 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_75

Shoreslate_Guesser_78:
# 51 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 52 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 53 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_75

Shoreslate_Guesser_80:
# 239 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 240 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_122
# 245 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_123
Shoreslate_Guesser_120:
# 250 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 251 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_81:
# 238 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_83
	goto Shoreslate_Guesser_79

Shoreslate_Guesser_83:
# 238 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_80
	goto Shoreslate_Guesser_79

Shoreslate_Guesser_88:
# 222 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 223 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 224 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_86

Shoreslate_Guesser_89:
# 226 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 227 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 228 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_86

Shoreslate_Guesser_90:
# 230 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 231 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 232 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_86

Shoreslate_Guesser_92:
# 158 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 159 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_133
# 164 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_134
Shoreslate_Guesser_131:
# 169 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 170 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_93:
# 157 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_95
	goto Shoreslate_Guesser_91

Shoreslate_Guesser_95:
# 157 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_92
	goto Shoreslate_Guesser_91

Shoreslate_Guesser_100:
# 145 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 146 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 147 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_98

Shoreslate_Guesser_101:
# 149 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 150 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 151 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_98

Shoreslate_Guesser_103:
# 76 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 77 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 78 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_144
# 82 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_145
Shoreslate_Guesser_142:
# 87 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 88 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_GRASS
	end

Shoreslate_Guesser_104:
# 75 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_106
	goto Shoreslate_Guesser_102

Shoreslate_Guesser_106:
# 75 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_103
	goto Shoreslate_Guesser_102

Shoreslate_Guesser_111:
# 63 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 64 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 65 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_109

Shoreslate_Guesser_112:
# 67 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 68 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 69 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_109

Shoreslate_Guesser_114:
# 255 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 256 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 257 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_155
# 261 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_156
Shoreslate_Guesser_153:
# 266 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 267 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_115:
# 254 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_117
	goto Shoreslate_Guesser_113

Shoreslate_Guesser_117:
# 254 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_114
	goto Shoreslate_Guesser_113

Shoreslate_Guesser_122:
# 242 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 243 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 244 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_120

Shoreslate_Guesser_123:
# 246 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 247 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 248 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_120

Shoreslate_Guesser_125:
# 174 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 175 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_166
# 180 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_167
Shoreslate_Guesser_164:
# 185 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 186 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_FIRE
	end

Shoreslate_Guesser_126:
# 173 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_128
	goto Shoreslate_Guesser_124

Shoreslate_Guesser_128:
# 173 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_125
	goto Shoreslate_Guesser_124

Shoreslate_Guesser_133:
# 161 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 162 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 163 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_134:
# 165 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 166 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 167 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_131

Shoreslate_Guesser_136:
# 92 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 93 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 94 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_135

Shoreslate_Guesser_137:
# 91 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_139
	goto Shoreslate_Guesser_135

Shoreslate_Guesser_139:
# 91 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_136
	goto Shoreslate_Guesser_135

Shoreslate_Guesser_144:
# 79 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 80 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 81 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_145:
# 83 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 84 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 85 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_142

Shoreslate_Guesser_147:
# 271 "data/maps/Shoreslate_House2/scripts.pory"
	random 2
# 272 "data/maps/Shoreslate_House2/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/Shoreslate_House2/scripts.pory"
	case 0, Shoreslate_Guesser_184
# 277 "data/maps/Shoreslate_House2/scripts.pory"
	case 1, Shoreslate_Guesser_185
Shoreslate_Guesser_182:
# 282 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_Starter_TakeCareOfTheEgg, MSGBOX_NPC
# 283 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_SHOWN_WATER
	end

Shoreslate_Guesser_148:
# 270 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_150
	goto Shoreslate_Guesser_146

Shoreslate_Guesser_150:
# 270 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_147
	goto Shoreslate_Guesser_146

Shoreslate_Guesser_155:
# 258 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 259 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 260 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_153

Shoreslate_Guesser_156:
# 262 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 263 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 264 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_153

Shoreslate_Guesser_158:
# 190 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 191 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 192 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_157

Shoreslate_Guesser_159:
# 189 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_161
	goto Shoreslate_Guesser_157

Shoreslate_Guesser_161:
# 189 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_158
	goto Shoreslate_Guesser_157

Shoreslate_Guesser_166:
# 177 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 178 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 179 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_164

Shoreslate_Guesser_167:
# 181 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 182 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 183 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_164

Shoreslate_Guesser_169:
# 100 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 101 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 102 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_168

Shoreslate_Guesser_170:
# 99 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_172
	goto Shoreslate_Guesser_168

Shoreslate_Guesser_172:
# 99 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_169
	goto Shoreslate_Guesser_168

Shoreslate_Guesser_176:
# 290 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 291 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CHIKORITA
# 292 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CHIKORITA
	goto Shoreslate_Guesser_175

Shoreslate_Guesser_177:
# 289 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_179
	goto Shoreslate_Guesser_175

Shoreslate_Guesser_179:
# 289 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_176
	goto Shoreslate_Guesser_175

Shoreslate_Guesser_184:
# 274 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 275 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 276 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_182

Shoreslate_Guesser_185:
# 278 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 279 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 280 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_182

Shoreslate_Guesser_187:
# 198 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 199 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 200 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_188:
# 197 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_190
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_190:
# 197 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_187
	goto Shoreslate_Guesser_186

Shoreslate_Guesser_194:
# 108 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 109 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 110 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_193

Shoreslate_Guesser_195:
# 107 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_197
	goto Shoreslate_Guesser_193

Shoreslate_Guesser_197:
# 107 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_194
	goto Shoreslate_Guesser_193

Shoreslate_Guesser_201:
# 295 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 296 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_TOTODILE
# 297 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_TOTODILE
	goto Shoreslate_Guesser_200

Shoreslate_Guesser_202:
# 294 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_204
	goto Shoreslate_Guesser_200

Shoreslate_Guesser_204:
# 294 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_201
	goto Shoreslate_Guesser_200

Shoreslate_Guesser_208:
# 206 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 207 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 208 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_207

Shoreslate_Guesser_209:
# 205 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_211
	goto Shoreslate_Guesser_207

Shoreslate_Guesser_211:
# 205 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_208
	goto Shoreslate_Guesser_207

Shoreslate_Guesser_215:
# 303 "data/maps/Shoreslate_House2/scripts.pory"
	call ReceivedEggJingle
# 304 "data/maps/Shoreslate_House2/scripts.pory"
	giveegg SPECIES_CYNDAQUIL
# 305 "data/maps/Shoreslate_House2/scripts.pory"
	setflag FLAG_RECEIVED_CYNDAQUIL
	goto Shoreslate_Guesser_214

Shoreslate_Guesser_216:
# 302 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOTODILE, Shoreslate_Guesser_218
	goto Shoreslate_Guesser_214

Shoreslate_Guesser_218:
# 302 "data/maps/Shoreslate_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CHIKORITA, Shoreslate_Guesser_215
	goto Shoreslate_Guesser_214


ReceivedEggJingle::
# 351 "data/maps/Shoreslate_House2/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 352 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox ReceivedEggJingle_Text_0, MSGBOX_AUTOCLOSE
# 353 "data/maps/Shoreslate_House2/scripts.pory"
	waitfanfare
# 354 "data/maps/Shoreslate_House2/scripts.pory"
	waitmessage
# 355 "data/maps/Shoreslate_House2/scripts.pory"
	closemessage
	return


Shoreslate_SmallHouse_Woman::
# 360 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_SmallHouse_Woman_Text, MSGBOX_NPC
	end


Shoreslate_SmallHouse_Man::
# 375 "data/maps/Shoreslate_House2/scripts.pory"
	msgbox Shoreslate_SmallHouse_Man_Text, MSGBOX_NPC
	end


ReceivedEggJingle_Text_0:
# 352 "data/maps/Shoreslate_House2/scripts.pory"
	.string "{PLAYER} received a Pokémon egg\nfrom the gentleman!$"

Shoreslate_Starter_OutOfEggs::
# 316 "data/maps/Shoreslate_House2/scripts.pory"
	.string "I appreciate you sharing your\n"
	.string "collection with me but I no longer\l"
	.string "have any more rewards to give you.\p"
	.string "I hope you take good care of the\n"
	.string "eggs I gave you.$"

Shoreslate_Starter_Intro::
# 323 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Greetings. Would you happen to have\n"
	.string "any of my favorite Pokémon?\p"
	.string "If you can show me one of my top three\n"
	.string "Pokémon, I will give you something nice.$"

Shoreslate_Starter_IntroShort::
# 329 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Do you have a Pokémon to show me?$"

Shoreslate_Starter_Correct::
# 332 "data/maps/Shoreslate_House2/scripts.pory"
	.string "That {STR_VAR_1}…\p"
	.string "Why yes, it is one of my favorite\n"
	.string "Pokémon!\p"
	.string "As a thank you for allowing me to see\n"
	.string "it in person, you may have this egg\l"
	.string "one of Pokémon was carrying.$"

Shoreslate_Starter_TakeCareOfTheEgg::
# 340 "data/maps/Shoreslate_House2/scripts.pory"
	.string "I hope you take good care of that egg.$"

Shoreslate_Starter_Incorrect::
# 343 "data/maps/Shoreslate_House2/scripts.pory"
	.string "That {STR_VAR_1}…\p"
	.string "While not a bad Pokémon, I must say\n"
	.string "it is not one of the Pokémon I'm\l"
	.string "currently hoping to see…$"

Shoreslate_SmallHouse_Woman_Text::
# 364 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Are those running shoes I see you\n"
	.string "sporting?\p"
	.string "They're just one of the many products\n"
	.string "invented by the Devon Corporation,\l"
	.string "the very same corporation whose\l"
	.string "headquarters are located right here\l"
	.string "in Shoreslate!$"

Shoreslate_SmallHouse_Man_Text::
# 379 "data/maps/Shoreslate_House2/scripts.pory"
	.string "Have you been to the Devon\n"
	.string "Corporation's offices?\p"
	.string "Much of their product development\n"
	.string "is kept secret but they do offer\l"
	.string "guided tours to folks every now\l"
	.string "and then.$"
