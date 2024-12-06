OldaleTown_PokemonCenter_2F_MapScripts::
	.byte 0


EvTraining::
# 4 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_unset FLAG_VISITED_RUSTBORO_CITY, EvTraining_2
# 8 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 9 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 5
# 10 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 11 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 12 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, EvTraining_Setup
# 13 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox Training_NotEnoughPoints
# 14 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	end

EvTraining_2:
# 5 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	end


EvTraining_Setup::
# 19 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox EVTraining_Intro
# 20 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special ShowBattlePointsWindow
# 21 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	message EVTraining_Type
# 22 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmessage
# 23 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	multichoice 21, 0, 114, 0
# 24 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	closemessage
# 25 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
# 26 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq EvTraining_Setup_1
# 31 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq EvTraining_Setup_2
# 35 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq EvTraining_Setup_3
# 39 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq EvTraining_Setup_4
# 43 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq EvTraining_Setup_5
# 47 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq EvTraining_Setup_6
# 52 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	end

EvTraining_Setup_1:
# 28 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 29 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_FELIX, TrainingFinished
	return

EvTraining_Setup_2:
# 32 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_VIOLET, TrainingFinished
	return

EvTraining_Setup_3:
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_2, TrainingFinished
	return

EvTraining_Setup_4:
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_3, TrainingFinished
	return

EvTraining_Setup_5:
# 44 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_4, TrainingFinished
	return

EvTraining_Setup_6:
# 48 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 49 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ROSE_5, TrainingFinished
	return


LevelTraining1::
# 93 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_unset FLAG_VISITED_RUSTBORO_CITY, LevelTraining1_2
# 97 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 1
# 98 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 2
# 99 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return

LevelTraining1_2:
# 94 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	end


LevelTraining2::
# 102 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 2
# 103 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 3
# 104 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTraining3::
# 107 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 3
# 108 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 3
# 109 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTraining4::
# 112 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 4
# 113 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 5
# 114 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTraining5::
# 117 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 5
# 118 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 7
# 119 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTraining6::
# 122 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 6
# 123 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 8
# 124 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTraining7::
# 127 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 7
# 128 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 9
# 129 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTraining8::
# 132 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 8
# 133 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 10
# 134 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTrainingCheck::
# 138 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 139 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 140 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 141 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingMain
# 142 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox Training_NotEnoughPoints, MSGBOX_DEFAULT
# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	end


LevelTrainingMain::
# 148 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special ShowBattlePointsWindow
# 149 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_POKECENTER_TRAINING
# 150 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, LevelTrainingMain_3
# 153 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, LevelTrainingMain_4
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 3, LevelTrainingMain_5
# 159 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 4, LevelTrainingMain_6
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 5, LevelTrainingMain_7
# 165 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 6, LevelTrainingMain_8
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 7, LevelTrainingMain_9
# 171 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 8, LevelTrainingMain_10
LevelTrainingMain_1:
# 175 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox RecommendedLevel, MSGBOX_YESNO
# 176 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingMain_11
# 229 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
# 230 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
# 231 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	end

LevelTrainingMain_3:
# 151 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 6
# 152 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 11
	goto LevelTrainingMain_1

LevelTrainingMain_4:
# 154 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 8
# 155 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 13
	goto LevelTrainingMain_1

LevelTrainingMain_5:
# 157 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 16
# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 21
	goto LevelTrainingMain_1

LevelTrainingMain_6:
# 160 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 25
# 161 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 28
	goto LevelTrainingMain_1

LevelTrainingMain_7:
# 163 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 30
# 164 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 33
	goto LevelTrainingMain_1

LevelTrainingMain_8:
# 166 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 30
# 167 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 33
	goto LevelTrainingMain_1

LevelTrainingMain_9:
# 169 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 33
# 170 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 37
	goto LevelTrainingMain_1

LevelTrainingMain_10:
# 172 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 40
# 173 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 44
	goto LevelTrainingMain_1

LevelTrainingMain_11:
# 177 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_POKECENTER_TRAINING
# 178 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, LevelTrainingMain_16
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, LevelTrainingMain_17
# 182 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 3, LevelTrainingMain_18
# 184 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 4, LevelTrainingMain_19
# 186 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 5, LevelTrainingMain_20
# 188 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 6, LevelTrainingMain_21
# 190 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 7, LevelTrainingMain_22
# 192 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 8, LevelTrainingMain_23
LevelTrainingMain_14:
# 195 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTrainingMain_25
LevelTrainingMain_24:
# 204 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
# 205 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 206 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 207 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_POKECENTER_TRAINING
# 208 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, LevelTrainingMain_29
# 210 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, LevelTrainingMain_30
# 212 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 3, LevelTrainingMain_31
# 214 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 4, LevelTrainingMain_32
# 216 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 5, LevelTrainingMain_33
# 218 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 6, LevelTrainingMain_34
# 220 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 7, LevelTrainingMain_35
# 222 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 8, LevelTrainingMain_36
LevelTrainingMain_27:
# 225 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
	end

LevelTrainingMain_16:
# 179 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 12
	goto LevelTrainingMain_14

LevelTrainingMain_17:
# 181 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 14
	goto LevelTrainingMain_14

LevelTrainingMain_18:
# 183 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 22
	goto LevelTrainingMain_14

LevelTrainingMain_19:
# 185 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 29
	goto LevelTrainingMain_14

LevelTrainingMain_20:
# 187 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 34
	goto LevelTrainingMain_14

LevelTrainingMain_21:
# 189 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 34
	goto LevelTrainingMain_14

LevelTrainingMain_22:
# 191 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 38
	goto LevelTrainingMain_14

LevelTrainingMain_23:
# 193 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 45
	goto LevelTrainingMain_14

LevelTrainingMain_25:
# 196 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
# 197 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTrainingMain_37
	goto LevelTrainingMain_24

LevelTrainingMain_29:
# 209 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_DUSTY_1, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_30:
# 211 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_GABBY_AND_TY_2, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_31:
# 213 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RANDALL, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_32:
# 215 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SHORESLATE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_33:
# 217 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIGORGE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_34:
# 219 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ROCKLIFFE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_35:
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SANDSTONE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_36:
# 223 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_DRISLEDGE_NURSE, TrainingFinished
	goto LevelTrainingMain_27

LevelTrainingMain_37:
# 198 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
# 199 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
# 200 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
	end


IvTrainingIntro::
# 237 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_unset FLAG_VISITED_RUSTBORO_CITY, IvTrainingIntro_2
# 241 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 242 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox WelcomeToTrainingClub
# 243 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubNpc
	return

IvTrainingIntro_2:
# 238 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	end


TrainingClubNpc::
# 246 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	message TrainingClubMessage
# 247 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmessage
# 248 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultipush TrainingClubNpc_Text_0, 0
# 249 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultipush TrainingClubNpc_Text_1, 1
# 250 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultipush TrainingClubNpc_Text_2, 2
# 251 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
# 252 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_RESULT
# 253 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 0, TrainingClubNpc_2
# 255 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, TrainingClubNpc_3
# 257 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, TrainingClubNpc_4
# 259 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case MULTI_B_PRESSED, TrainingClubNpc_5
	return

TrainingClubNpc_2:
# 254 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto EVTrainingDescription
	return

TrainingClubNpc_3:
# 256 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingDescription
	return

TrainingClubNpc_4:
# 258 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubGoodbye
	return

TrainingClubNpc_5:
# 260 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubGoodbye
	return


EVTrainingDescription::
# 277 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox EVTrainingDescription_Text
# 278 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubNpc
	return


LevelTrainingDescription::
# 281 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox LevelTrainingDescription_Text
# 282 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubNpc
	return


TrainingClubGoodbye::
# 285 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox TrainingClubGoodbye_Text
# 286 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


TrainingClubNpc_Text_0:
# 248 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "EV Training$"

TrainingClubNpc_Text_1:
# 249 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Level Training$"

TrainingClubNpc_Text_2:
# 250 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Nevermind$"

EVTraining_Intro::
# 57 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "This is the EV Training Service.\n"
	.string "Each round of training costs\l"
	.string "5 Battle Points.$"

EVTraining_Type::
# 62 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Which type of training would\n"
	.string "you like to have?$"

TrainingFinished::
# 67 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Thank you, please come again.$"

Training_NotEnoughPoints::
# 70 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "This service costs\n"
	.string "{STR_VAR_1} Battle Points.\p"
	.string "I'm sorry, but you don't have enough\n"
	.string "Battle Points…$"

RecommendedLevel::
# 76 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "This is the Level Training Service.\p"
	.string "The team in this Training Club is set\n"
	.string "to level {STR_VAR_3} and is intended for teams\l"
	.string "up to level {STR_VAR_2}.\p"
	.string "Would you like to use the service?\p"
	.string "Each use of the service costs\n"
	.string "{STR_VAR_1} Battle Points.$"

YourPokemonIsAboveLevel::
# 85 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "You have Pokémon that are above the\n"
	.string "level cap of this Training Club and\l"
	.string "thus do not gain any experience.\p"
	.string "Are you sure you want to continue?$"

WelcomeToTrainingClub::
# 264 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Hello, and welcome to the\n"
	.string "Pokémon Center PokéTraining Club.\p"
	.string "Here trainers may train their Pokémon\n"
	.string "by battling in a controlled environment.$"

TrainingClubMessage::
# 271 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Would you like to know more about\n"
	.string "our services?$"

EVTrainingDescription_Text::
# 288 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The person to my left offers\n"
	.string "EV training.\p"
	.string "She has 5 training bots, with each\n"
	.string "granting 10 EV in the specified stat.\p"
	.string "The cost of this service and the\n"
	.string "quality of the bots is consistent\l"
	.string "between every training club, so you're\l"
	.string "free to use the service as you see fit.$"

LevelTrainingDescription_Text::
# 298 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The person to my right offers\n"
	.string "level training, employing a team\l"
	.string "of bots that are tuned for quickly\l"
	.string "training your weaker party members.\p"
	.string "Do note that the level of the robots\n"
	.string "may vary between training clubs,\l"
	.string "and the higher the level, the costlier\l"
	.string "the training will become.\p"
	.string "Every training club also has a limit\n"
	.string "on how far it is able to train your\l"
	.string "Pokémon, so you may need to visit\l"
	.string "another training club to progress.$"

TrainingClubGoodbye_Text::
# 312 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I hope you find our services useful.$"
