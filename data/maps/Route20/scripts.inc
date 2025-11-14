Route20_MapScripts::
# 18 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 48 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/Route20/scripts.pory"
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
	goto_if_lt Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/Route20/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 26 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_1, 41
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 39 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 20 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 23 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 27 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 30 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 35 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 1
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 37 "data/maps/Route20/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 40 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
# 44 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 3
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 39 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_2, 27
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 26 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 28 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_17:
# 32 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 41 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 4
	return

Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 49 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, GogoatRace1Failed
# 50 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 2, GogoatRace1RewardCeremony
# 51 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 3, GogoatRace2Failed
# 52 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 4, GogoatRace2RewardCeremony
	.2byte 0


GogoatRace1Failed::
# 57 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 58 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace1RewardCeremony::
# 67 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 68 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
	goto_if_eq GogoatRace1RewardCeremony_2
# 79 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 80 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 81 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 82 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_9
GogoatRace1RewardCeremony_8:
# 85 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 86 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_REWARD_EARNED
GogoatRace1RewardCeremony_1:
# 88 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace1RewardCeremony_2:
# 69 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 70 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward_Again
# 71 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 72 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_6
GogoatRace1RewardCeremony_5:
# 75 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_REWARD_EARNED_AGAIN
# 76 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
	goto GogoatRace1RewardCeremony_1

GogoatRace1RewardCeremony_6:
# 73 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_5

GogoatRace1RewardCeremony_9:
# 83 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_8


GogoatRace2Failed::
# 109 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 110 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace2RewardCeremony::
# 113 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 114 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 115 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 116 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace2RewardCeremony_2
GogoatRace2RewardCeremony_1:
# 119 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
# 120 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace2RewardCeremony_2:
# 117 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace2RewardCeremony_1


Route20_BrotherTrigger1::
# 129 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 1
# 130 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
# 133 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 2
# 134 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
# 137 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 3
# 138 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
# 141 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 4
# 142 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
# 145 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 5
# 146 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
# 149 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 6
# 150 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
# 154 "data/maps/Route20/scripts.pory"
	lockall
# 155 "data/maps/Route20/scripts.pory"
	safefollow
# 156 "data/maps/Route20/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 157 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 158 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_3
# 159 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_3
# 161 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_4
# 162 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_4
# 163 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_4
# 165 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
# 168 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route20/scripts.pory"
	delay 30
# 170 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 171 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_8
# 173 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_9
# 175 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_10
# 177 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_11
# 179 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_12
# 181 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
# 184 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherIntro
# 186 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
# 187 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
# 188 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 189 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_16
# 190 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_16
# 191 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_16
# 193 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_17
# 195 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_18
# 196 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
# 199 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route20/scripts.pory"
	removeobject 2
# 201 "data/maps/Route20/scripts.pory"
	savebgm MUS_DUMMY
# 202 "data/maps/Route20/scripts.pory"
	fadedefaultbgm
# 203 "data/maps/Route20/scripts.pory"
	release
	return

Route20_BrotherTriggerMain_3:
# 160 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
# 164 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
# 166 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
# 172 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
# 174 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
# 176 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
# 178 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
# 180 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
# 182 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
# 192 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
# 194 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
# 197 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Mirrortestnpc::
# 218 "data/maps/Route20/scripts.pory"
	trainerbattle_single TRAINER_CRISSY, Mirrortestnpc_Text_0, Mirrortestnpc_Text_1
# 219 "data/maps/Route20/scripts.pory"
	msgbox Mirrortestnpc_Text_1, MSGBOX_AUTOCLOSE
	return


Route20_Gogoat::
# 223 "data/maps/Route20/scripts.pory"
	lock
# 224 "data/maps/Route20/scripts.pory"
	waitse
# 225 "data/maps/Route20/scripts.pory"
	playmoncry SPECIES_GOGOAT, CRY_MODE_NORMAL
# 226 "data/maps/Route20/scripts.pory"
	waitmoncry
# 227 "data/maps/Route20/scripts.pory"
	release
	return


Route20_Sign::
# 231 "data/maps/Route20/scripts.pory"
	msgbox Route20_Sign_Text, MSGBOX_SIGN
	return


Route20_RanchRace::
# 239 "data/maps/Route20/scripts.pory"
	faceplayer
# 240 "data/maps/Route20/scripts.pory"
	release
# 241 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
	goto_if_eq Route20_RanchRace_2
# 252 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
	goto_if_eq Route20_RanchRace_3
# 263 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 264 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, 0
	goto_if_eq Route20_RanchRace_7
Route20_RanchRace_6:
# 269 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace
# 270 "data/maps/Route20/scripts.pory"
	waitmessage
# 271 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, Route20_RanchRace_Text_0, Route20_RanchRace_Text_1, Route20_RanchRace_Text_2
# 272 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/Route20/scripts.pory"
	case 0, Route20_RanchRace_16
# 279 "data/maps/Route20/scripts.pory"
	case 1, Route20_RanchRace_17
# 283 "data/maps/Route20/scripts.pory"
	case 2, Route20_RanchRace_18
# 284 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, Route20_RanchRace_18
	return

Route20_RanchRace_2:
# 242 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward_Again
# 243 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 244 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RanchRace_10
Route20_RanchRace_9:
# 247 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_REWARD_EARNED_AGAIN
# 248 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 249 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_RanchRace_3:
# 253 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 254 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 255 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RanchRace_13
Route20_RanchRace_12:
# 258 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_REWARD_EARNED
# 259 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 260 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_RanchRace_7:
# 265 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceIntro
# 266 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO
# 267 "data/maps/Route20/scripts.pory"
	callnative ResetGogoatRaceRecords
	goto Route20_RanchRace_6

Route20_RanchRace_10:
# 245 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_RanchRace_9

Route20_RanchRace_13:
# 256 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_RanchRace_12

Route20_RanchRace_16:
# 274 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing
# 275 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
# 276 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 277 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 278 "data/maps/Route20/scripts.pory"
	waitstate
	return

Route20_RanchRace_17:
# 280 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText
# 281 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_B
# 282 "data/maps/Route20/scripts.pory"
	goto Route20_RanchRace
	return

Route20_RanchRace_18:
# 285 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 286 "data/maps/Route20/scripts.pory"
	release
	end


Route20_Race2::
# 292 "data/maps/Route20/scripts.pory"
	lock
# 293 "data/maps/Route20/scripts.pory"
	faceplayer
# 294 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
	goto_if_eq Route20_Race2_2
# 304 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
	goto_if_lt Route20_Race2_5
Route20_Race2_4:
# 308 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_TEMP_C, Route20_Race2_11
# 312 "data/maps/Route20/scripts.pory"
	message WannaGogoat2Race
Route20_Race2_10:
# 314 "data/maps/Route20/scripts.pory"
	waitmessage
# 315 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, Route20_RanchRace_Text_0, Route20_RanchRace_Text_1, Route20_RanchRace_Text_2
# 316 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 317 "data/maps/Route20/scripts.pory"
	case 0, Route20_Race2_15
# 323 "data/maps/Route20/scripts.pory"
	case 1, Route20_Race2_16
# 327 "data/maps/Route20/scripts.pory"
	case 2, Route20_Race2_17
# 328 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, Route20_Race2_17
	return

Route20_Race2_2:
# 295 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 296 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 297 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_Race2_8
Route20_Race2_7:
# 300 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
# 301 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_Race2_5:
# 305 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Intro
# 306 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
	goto Route20_Race2_4

Route20_Race2_8:
# 298 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_Race2_7

Route20_Race2_11:
# 309 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace2Short
	goto Route20_Race2_10

Route20_Race2_15:
# 318 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 319 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
# 320 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 321 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 322 "data/maps/Route20/scripts.pory"
	waitstate
	return

Route20_Race2_16:
# 324 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText2
# 325 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_C
# 326 "data/maps/Route20/scripts.pory"
	goto Route20_Race2
	return

Route20_Race2_17:
# 329 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 330 "data/maps/Route20/scripts.pory"
	release
	end


# 160 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_0:
# 160 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 160 "data/maps/Route20/scripts.pory"
	delay_16
# 160 "data/maps/Route20/scripts.pory"
	delay_16
# 160 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 164 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_1:
# 164 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
# 164 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 164 "data/maps/Route20/scripts.pory"
	delay_16
# 164 "data/maps/Route20/scripts.pory"
	delay_16
# 164 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 166 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_2:
# 166 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_right
# 166 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/Route20/scripts.pory"
	delay_16
# 166 "data/maps/Route20/scripts.pory"
	delay_16
# 166 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 172 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_3:
# 172 "data/maps/Route20/scripts.pory"
	walk_left
	step_end

# 174 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_4:
# 174 "data/maps/Route20/scripts.pory"
	walk_left
# 174 "data/maps/Route20/scripts.pory"
	walk_up
# 174 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
	step_end

# 176 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_5:
# 176 "data/maps/Route20/scripts.pory"
	walk_up
# 176 "data/maps/Route20/scripts.pory"
	walk_left
# 176 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 178 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_6:
# 178 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 180 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_7:
# 180 "data/maps/Route20/scripts.pory"
	walk_up
# 180 "data/maps/Route20/scripts.pory"
	walk_right
# 180 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 182 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_8:
# 182 "data/maps/Route20/scripts.pory"
	walk_right
# 182 "data/maps/Route20/scripts.pory"
	walk_right
# 182 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 192 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_9:
# 192 "data/maps/Route20/scripts.pory"
	walk_right
# 192 "data/maps/Route20/scripts.pory"
	walk_right
# 192 "data/maps/Route20/scripts.pory"
	walk_down
# 192 "data/maps/Route20/scripts.pory"
	walk_down
# 192 "data/maps/Route20/scripts.pory"
	walk_down
# 192 "data/maps/Route20/scripts.pory"
	walk_down
# 192 "data/maps/Route20/scripts.pory"
	walk_down
# 192 "data/maps/Route20/scripts.pory"
	walk_down
# 192 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 194 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_10:
# 194 "data/maps/Route20/scripts.pory"
	walk_right
# 194 "data/maps/Route20/scripts.pory"
	walk_down
# 194 "data/maps/Route20/scripts.pory"
	walk_down
# 194 "data/maps/Route20/scripts.pory"
	walk_down
# 194 "data/maps/Route20/scripts.pory"
	walk_down
# 194 "data/maps/Route20/scripts.pory"
	walk_down
# 194 "data/maps/Route20/scripts.pory"
	walk_down
# 194 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 197 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_11:
# 197 "data/maps/Route20/scripts.pory"
	walk_down
# 197 "data/maps/Route20/scripts.pory"
	walk_down
# 197 "data/maps/Route20/scripts.pory"
	walk_down
# 197 "data/maps/Route20/scripts.pory"
	walk_down
# 197 "data/maps/Route20/scripts.pory"
	walk_down
# 197 "data/maps/Route20/scripts.pory"
	walk_down
# 197 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

Mirrortestnpc_Text_0:
# 218 "data/maps/Route20/scripts.pory"
	.string "Saw you through the mirror!$"

Mirrortestnpc_Text_1:
# 218 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_RanchRace_Text_0:
# 271 "data/maps/Route20/scripts.pory"
	.string "Count me in!$"

Route20_RanchRace_Text_1:
# 271 "data/maps/Route20/scripts.pory"
	.string "Explain rules$"

Route20_RanchRace_Text_2:
# 271 "data/maps/Route20/scripts.pory"
	.string "No thanks$"

GogoatRace1Failed_Text::
# 60 "data/maps/Route20/scripts.pory"
	.string "I hope you enjoyed your time\n"
	.string "Gogoat racing.\p"
	.string "Let me know if you'd like to\n"
	.string "give it another go!$"

GogoatRace1RewardCeremony_Reward::
# 90 "data/maps/Route20/scripts.pory"
	.string "We have a new winner!\p"
	.string "With a record time of {STR_VAR_2} seconds,\n"
	.string "you are our new record holder!\p"
	.string "As a reward, I want you to have this.$"

GogoatRace1RewardCeremony_Reward_Again::
# 96 "data/maps/Route20/scripts.pory"
	.string "We have a winner!\p"
	.string "With a record time of {STR_VAR_2} seconds,\n"
	.string "you are still our new record holder!\p"
	.string "Unfortunately you already received\n"
	.string "the grand prize, so all I've got to offer\l"
	.string "is this consolation prize.$"

GogoatRace1RewardCeremony_WelcomeBackAnyTime::
# 104 "data/maps/Route20/scripts.pory"
	.string "If you'd like to try and improve\n"
	.string "your record, come talk to me!$"

GogoatRace2Failed_Text::
# 123 "data/maps/Route20/scripts.pory"
	.string "Let me know if you'd like to\n"
	.string "try the race again.$"

Route20_BrotherIntro::
# 206 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "wip$"

Route20_BrotherLost::
# 210 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_BrotherPostBat::
# 213 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_Sign_Text::
# 233 "data/maps/Route20/scripts.pory"
	.string "{LEFT_ARROW} Route 19\n"
	.string "{DOWN_ARROW} Crystalpine Town$"

GogoatRace2RewardCeremony_Reward::
# 335 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2RewardCeremony_WelcomeBackAnyTime::
# 338 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2Intro::
# 341 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRace2Short::
# 344 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoat2Race::
# 347 "data/maps/Route20/scripts.pory"
	.string "wip$"

LetsGetGogoatRacing2::
# 350 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceRulesText2::
# 353 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceIntro::
# 357 "data/maps/Route20/scripts.pory"
	.string "Howdy partner!\p"
	.string "Are you here to take part in our\n"
	.string "world-famous Gogoat racing?\p"
	.string "It's real simple: We'll lend you one\n"
	.string "of our Gogoats and set up a bunch of\l"
	.string "flags around the farm.\p"
	.string "All you need to do is grab all the\n"
	.string "flags and then return them to me.\p"
	.string "Sounds real simple, eh?\p"
	.string "Well, our Gogoats are renowned for\n"
	.string "their speed, so it can be real hard\l"
	.string "to control them!\p"
	.string "If you can beat the current record\n"
	.string "holder, we'll even give you a prize!\l"
	.string "The current record is {STR_VAR_2} seconds.$"

WannaGogoatRace::
# 374 "data/maps/Route20/scripts.pory"
	.string "Up for some Gogoat racing?$"

LetsGetGogoatRacing::
# 377 "data/maps/Route20/scripts.pory"
	.string "Alright!\n"
	.string "Let's Gogoat!$"

GogoatRaceRulesText::
# 381 "data/maps/Route20/scripts.pory"
	.string "The rules are real simple:\p"
	.string "We'll lend you one of our Gogoats\n"
	.string "and set up a bunch of flags around\l"
	.string "the farm.\p"
	.string "All you need to do is grab all the\n"
	.string "flags and then return them to me.\p"
	.string "Sounds real simple, eh?\p"
	.string "Well, our Gogoats are renowned for\n"
	.string "their speed, so it can be real hard\l"
	.string "to control them!\p"
	.string "If you can beat the current record\n"
	.string "holder, we'll even give you a prize!\l"
	.string "The current record is {STR_VAR_2} seconds.$"
