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
	trainerbattle_no_intro TRAINER_EV_TRAINING_HP, TrainingFinished
	return

EvTraining_Setup_2:
# 32 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 33 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EV_TRAINING_ATK, TrainingFinished
	return

EvTraining_Setup_3:
# 36 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 37 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EV_TRAINING_DEF, TrainingFinished
	return

EvTraining_Setup_4:
# 40 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 41 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EV_TRAINING_SPATK, TrainingFinished
	return

EvTraining_Setup_5:
# 44 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 45 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EV_TRAINING_SPDEF, TrainingFinished
	return

EvTraining_Setup_6:
# 48 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 49 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EV_TRAINING_SPEED, TrainingFinished
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


LevelTraining9::
# 137 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 9
# 138 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_0x8008, 10
# 139 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingCheck
	return


LevelTrainingCheck::
# 143 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 144 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 145 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 146 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, LevelTrainingMain
# 147 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox Training_NotEnoughPoints, MSGBOX_DEFAULT
# 148 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
# 149 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	end


LevelTrainingMain::
# 153 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special ShowBattlePointsWindow
# 154 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_POKECENTER_TRAINING
# 155 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, LevelTrainingMain_3
# 158 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, LevelTrainingMain_4
# 161 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 3, LevelTrainingMain_5
# 164 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 4, LevelTrainingMain_6
# 167 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 5, LevelTrainingMain_7
# 170 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 6, LevelTrainingMain_8
# 173 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 7, LevelTrainingMain_9
# 176 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 8, LevelTrainingMain_10
# 179 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 9, LevelTrainingMain_11
LevelTrainingMain_1:
# 183 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox RecommendedLevel, MSGBOX_YESNO
# 184 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LevelTrainingMain_12
# 241 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
# 242 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
# 243 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	end

LevelTrainingMain_3:
# 156 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 6
# 157 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 11
	goto LevelTrainingMain_1

LevelTrainingMain_4:
# 159 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 8
# 160 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 13
	goto LevelTrainingMain_1

LevelTrainingMain_5:
# 162 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 16
# 163 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 21
	goto LevelTrainingMain_1

LevelTrainingMain_6:
# 165 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 25
# 166 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 28
	goto LevelTrainingMain_1

LevelTrainingMain_7:
# 168 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 30
# 169 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 33
	goto LevelTrainingMain_1

LevelTrainingMain_8:
# 171 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 30
# 172 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 33
	goto LevelTrainingMain_1

LevelTrainingMain_9:
# 174 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 33
# 175 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 37
	goto LevelTrainingMain_1

LevelTrainingMain_10:
# 177 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 40
# 178 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 44
	goto LevelTrainingMain_1

LevelTrainingMain_11:
# 180 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_3, 45
# 181 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	buffernumberstring STR_VAR_2, 52
	goto LevelTrainingMain_1

LevelTrainingMain_12:
# 185 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_POKECENTER_TRAINING
# 186 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, LevelTrainingMain_17
# 188 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, LevelTrainingMain_18
# 190 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 3, LevelTrainingMain_19
# 192 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 4, LevelTrainingMain_20
# 194 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 5, LevelTrainingMain_21
# 196 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 6, LevelTrainingMain_22
# 198 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 7, LevelTrainingMain_23
# 200 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 8, LevelTrainingMain_24
# 202 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 9, LevelTrainingMain_25
LevelTrainingMain_15:
# 205 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq LevelTrainingMain_27
LevelTrainingMain_26:
# 214 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
# 215 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 216 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special TakeFrontierBattlePoints
# 217 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_POKECENTER_TRAINING
# 218 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, LevelTrainingMain_31
# 220 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, LevelTrainingMain_32
# 222 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 3, LevelTrainingMain_33
# 224 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 4, LevelTrainingMain_34
# 226 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 5, LevelTrainingMain_35
# 228 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 6, LevelTrainingMain_36
# 230 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 7, LevelTrainingMain_37
# 232 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 8, LevelTrainingMain_38
# 234 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 9, LevelTrainingMain_39
LevelTrainingMain_29:
# 237 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
	end

LevelTrainingMain_17:
# 187 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 12
	goto LevelTrainingMain_15

LevelTrainingMain_18:
# 189 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 14
	goto LevelTrainingMain_15

LevelTrainingMain_19:
# 191 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 22
	goto LevelTrainingMain_15

LevelTrainingMain_20:
# 193 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 29
	goto LevelTrainingMain_15

LevelTrainingMain_21:
# 195 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 34
	goto LevelTrainingMain_15

LevelTrainingMain_22:
# 197 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 34
	goto LevelTrainingMain_15

LevelTrainingMain_23:
# 199 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 38
	goto LevelTrainingMain_15

LevelTrainingMain_24:
# 201 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 45
	goto LevelTrainingMain_15

LevelTrainingMain_25:
# 203 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	checkpartylevel 53
	goto LevelTrainingMain_15

LevelTrainingMain_27:
# 206 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox YourPokemonIsAboveLevel, MSGBOX_YESNO
# 207 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq LevelTrainingMain_40
	goto LevelTrainingMain_26

LevelTrainingMain_31:
# 219 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EXPBOT_1, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_32:
# 221 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_EXPBOT_2, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_33:
# 223 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_RANDALL, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_34:
# 225 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SHORESLATE_NURSE, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_35:
# 227 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_MARIGORGE_NURSE, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_36:
# 229 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_ROCKLIFFE_NURSE, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_37:
# 231 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_SANDSTONE_NURSE, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_38:
# 233 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_DRISLEDGE_NURSE, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_39:
# 235 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	trainerbattle_no_intro TRAINER_FROSTHEARTH_NURSE, TrainingFinished
	goto LevelTrainingMain_29

LevelTrainingMain_40:
# 208 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	setvar VAR_POKECENTER_TRAINING, 0
# 209 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
# 210 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	special CloseBattlePointsWindow
	end


IvTrainingIntro::
# 249 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto_if_unset FLAG_VISITED_RUSTBORO_CITY, IvTrainingIntro_2
# 253 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	lock
# 254 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox WelcomeToTrainingClub
# 255 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubNpc
	return

IvTrainingIntro_2:
# 250 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox OldaleTown_PokemonCenter_1F_Text_Train, MSGBOX_NPC
	end


TrainingClubNpc::
# 258 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	message TrainingClubMessage
# 259 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	waitmessage
# 260 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultipush TrainingClubNpc_Text_0, 0
# 261 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultipush TrainingClubNpc_Text_1, 1
# 262 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultipush TrainingClubNpc_Text_2, 2
# 263 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 3, FALSE, 0, NULL
# 264 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 0, TrainingClubNpc_2
# 267 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 1, TrainingClubNpc_3
# 269 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case 2, TrainingClubNpc_4
# 271 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	case MULTI_B_PRESSED, TrainingClubNpc_5
	return

TrainingClubNpc_2:
# 266 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto EVTrainingDescription
	return

TrainingClubNpc_3:
# 268 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto LevelTrainingDescription
	return

TrainingClubNpc_4:
# 270 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubGoodbye
	return

TrainingClubNpc_5:
# 272 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubGoodbye
	return


EVTrainingDescription::
# 289 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox EVTrainingDescription_Text
# 290 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubNpc
	return


LevelTrainingDescription::
# 293 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox LevelTrainingDescription_Text
# 294 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	goto TrainingClubNpc
	return


TrainingClubGoodbye::
# 297 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	msgbox TrainingClubGoodbye_Text
# 298 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	release
	return


TrainingClubNpc_Text_0:
# 260 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "EV Training$"

TrainingClubNpc_Text_1:
# 261 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Level Training$"

TrainingClubNpc_Text_2:
# 262 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Never mind$"

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
# 276 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Hello, and welcome to the\n"
	.string "Pokémon Center PokéTraining Club.\p"
	.string "Here trainers may train their Pokémon\n"
	.string "by battling in a controlled environment.$"

TrainingClubMessage::
# 283 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "Would you like to know more about\n"
	.string "our services?$"

EVTrainingDescription_Text::
# 300 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "The person to my left offers\n"
	.string "EV training.\p"
	.string "She has 5 training bots, with each\n"
	.string "granting 5 EV in the specified stat.\p"
	.string "The cost of this service and the\n"
	.string "quality of the bots is consistent\l"
	.string "between every training club, so you're\l"
	.string "free to use the service as you see fit.$"

LevelTrainingDescription_Text::
# 310 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
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
# 324 "data/maps/OldaleTown_PokemonCenter_2F/scripts.pory"
	.string "I hope you find our services useful.$"
