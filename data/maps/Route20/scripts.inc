Route20_MapScripts::
# 18 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 50 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 19 "data/maps/Route20/scripts.pory"
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
	goto_if_lt Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 25 "data/maps/Route20/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 26 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_1, 41
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 38 "data/maps/Route20/scripts.pory"
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
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 30 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_FAILED
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_17
# 33 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
	goto_if_gt Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_18
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 36 "data/maps/Route20/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 39 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_22
# 42 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_FAILED
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
# 45 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_COMPLETE
	goto_if_gt Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 38 "data/maps/Route20/scripts.pory"
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
# 31 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_18:
# 34 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 1
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_22:
# 40 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 4
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 43 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 3
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 46 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 3
	return

Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 51 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, GogoatRace1Failed
# 52 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 2, GogoatRace1RewardCeremony
# 53 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 3, GogoatRace2Failed
# 54 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 4, GogoatRace2RewardCeremony
	.2byte 0


GogoatRace1Failed::
# 59 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace1RewardCeremony::
# 65 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 66 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 67 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 68 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_2
GogoatRace1RewardCeremony_1:
# 71 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
# 72 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 73 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace1RewardCeremony_2:
# 69 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_1


GogoatRace2Failed::
# 82 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace2RewardCeremony::
# 85 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 86 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 87 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 88 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace2RewardCeremony_2
GogoatRace2RewardCeremony_1:
# 91 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_COMPLETE
# 92 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace2RewardCeremony_2:
# 89 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace2RewardCeremony_1


Route20_BrotherTrigger1::
# 100 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 1
# 101 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
# 104 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 2
# 105 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
# 108 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 3
# 109 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
# 112 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 4
# 113 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
# 116 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 5
# 117 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
# 120 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 6
# 121 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
# 125 "data/maps/Route20/scripts.pory"
	lockall
# 126 "data/maps/Route20/scripts.pory"
	safefollow
# 127 "data/maps/Route20/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 128 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 129 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_3
# 130 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_3
# 132 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_4
# 133 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_4
# 134 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_4
# 136 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
# 139 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route20/scripts.pory"
	delay 30
# 141 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 142 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_8
# 144 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_9
# 146 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_10
# 148 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_11
# 150 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_12
# 152 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
# 155 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 156 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherIntro
# 157 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
# 158 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
# 159 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 160 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_16
# 161 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_16
# 162 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_16
# 164 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_17
# 166 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_18
# 167 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
# 170 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 171 "data/maps/Route20/scripts.pory"
	removeobject 2
# 172 "data/maps/Route20/scripts.pory"
	savebgm MUS_DUMMY
# 173 "data/maps/Route20/scripts.pory"
	fadedefaultbgm
# 174 "data/maps/Route20/scripts.pory"
	release
	return

Route20_BrotherTriggerMain_3:
# 131 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
# 135 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
# 137 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
# 143 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
# 145 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
# 147 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
# 149 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
# 151 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
# 153 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
# 163 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
# 165 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
# 168 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Mirrortestnpc::
# 189 "data/maps/Route20/scripts.pory"
	trainerbattle_single TRAINER_CRISSY, Mirrortestnpc_Text_0, Mirrortestnpc_Text_1
# 190 "data/maps/Route20/scripts.pory"
	msgbox Mirrortestnpc_Text_1, MSGBOX_AUTOCLOSE
	return


Route20_Gogoat::
# 194 "data/maps/Route20/scripts.pory"
	lock
# 195 "data/maps/Route20/scripts.pory"
	waitse
# 196 "data/maps/Route20/scripts.pory"
	playmoncry SPECIES_GOGOAT, CRY_MODE_NORMAL
# 197 "data/maps/Route20/scripts.pory"
	waitmoncry
# 198 "data/maps/Route20/scripts.pory"
	release
	return


Route20_Sign::
# 202 "data/maps/Route20/scripts.pory"
	msgbox Route20_Sign_Text, MSGBOX_SIGN
	return


Route20_RanchRace::
# 210 "data/maps/Route20/scripts.pory"
	lock
# 211 "data/maps/Route20/scripts.pory"
	faceplayer
# 212 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
	goto_if_eq Route20_RanchRace_2
# 223 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, 0
	goto_if_eq Route20_RanchRace_5
Route20_RanchRace_4:
# 228 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_TEMP_B, Route20_RanchRace_11
# 232 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace
Route20_RanchRace_10:
# 234 "data/maps/Route20/scripts.pory"
	waitmessage
# 235 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, Route20_RanchRace_Text_0, Route20_RanchRace_Text_1, Route20_RanchRace_Text_2
# 236 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 237 "data/maps/Route20/scripts.pory"
	case 0, Route20_RanchRace_15
# 239 "data/maps/Route20/scripts.pory"
	case 1, Route20_RanchRace_16
# 241 "data/maps/Route20/scripts.pory"
	case 2, Route20_RanchRace_17
# 242 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, Route20_RanchRace_17
	return

Route20_RanchRace_2:
# 213 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 214 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 215 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RanchRace_8
Route20_RanchRace_7:
# 218 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_COMPLETE
# 219 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 220 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_RanchRace_5:
# 224 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceIntro
# 225 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_INTRO
# 226 "data/maps/Route20/scripts.pory"
	callnative ResetGogoatRaceRecords
	goto Route20_RanchRace_4

Route20_RanchRace_8:
# 216 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_RanchRace_7

Route20_RanchRace_11:
# 229 "data/maps/Route20/scripts.pory"
	message WannaGogoatRaceShort
	goto Route20_RanchRace_10

Route20_RanchRace_15:
# 238 "data/maps/Route20/scripts.pory"
	goto GogoatRaceStart
	return

Route20_RanchRace_16:
# 240 "data/maps/Route20/scripts.pory"
	goto GogoatRaceRules
	return

Route20_RanchRace_17:
# 243 "data/maps/Route20/scripts.pory"
	goto GogoatRaceCancel
	return


Route20_Race2::
# 248 "data/maps/Route20/scripts.pory"
	lock
# 249 "data/maps/Route20/scripts.pory"
	faceplayer
# 250 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_COMPLETE
	goto_if_eq Route20_Race2_2
# 260 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_INTRO
	goto_if_lt Route20_Race2_5
Route20_Race2_4:
# 264 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_TEMP_C, Route20_Race2_11
# 268 "data/maps/Route20/scripts.pory"
	message WannaGogoat2Race
Route20_Race2_10:
# 270 "data/maps/Route20/scripts.pory"
	waitmessage
# 271 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, Route20_RanchRace_Text_0, Route20_RanchRace_Text_1, Route20_RanchRace_Text_2
# 272 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 273 "data/maps/Route20/scripts.pory"
	case 0, Route20_Race2_15
# 275 "data/maps/Route20/scripts.pory"
	case 1, Route20_Race2_16
# 277 "data/maps/Route20/scripts.pory"
	case 2, Route20_Race2_17
# 278 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, Route20_Race2_17
	return

Route20_Race2_2:
# 251 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 252 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 253 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_Race2_8
Route20_Race2_7:
# 256 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_COMPLETE
# 257 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_Race2_5:
# 261 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Intro
# 262 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_INTRO
	goto Route20_Race2_4

Route20_Race2_8:
# 254 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_Race2_7

Route20_Race2_11:
# 265 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace2Short
	goto Route20_Race2_10

Route20_Race2_15:
# 274 "data/maps/Route20/scripts.pory"
	goto GogoatRace2Start
	return

Route20_Race2_16:
# 276 "data/maps/Route20/scripts.pory"
	goto GogoatRace2Rules
	return

Route20_Race2_17:
# 279 "data/maps/Route20/scripts.pory"
	goto GogoatRaceCancel
	return


GogoatRaceStart::
# 284 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing
# 285 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_1_IN_PROGRESS
# 286 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 287 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RIDING
# 288 "data/maps/Route20/scripts.pory"
	waitstate
	return


GogoatRaceRules::
# 291 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText
# 292 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_B
# 293 "data/maps/Route20/scripts.pory"
	goto Route20_RanchRace
	return


GogoatRaceCancel::
# 296 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 297 "data/maps/Route20/scripts.pory"
	release
	end


GogoatRace2Start::
# 302 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 303 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_GOGOAT_RACE_2_IN_PROGRESS
# 304 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 305 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RIDING
# 306 "data/maps/Route20/scripts.pory"
	waitstate
	return


GogoatRace2Rules::
# 309 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText2
# 310 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_C
# 311 "data/maps/Route20/scripts.pory"
	goto Route20_Race2
	return


# 131 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_0:
# 131 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
# 131 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 131 "data/maps/Route20/scripts.pory"
	delay_16
# 131 "data/maps/Route20/scripts.pory"
	delay_16
# 131 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 135 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_1:
# 135 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
# 135 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 135 "data/maps/Route20/scripts.pory"
	delay_16
# 135 "data/maps/Route20/scripts.pory"
	delay_16
# 135 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 137 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_2:
# 137 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_right
# 137 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 137 "data/maps/Route20/scripts.pory"
	delay_16
# 137 "data/maps/Route20/scripts.pory"
	delay_16
# 137 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 143 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_3:
# 143 "data/maps/Route20/scripts.pory"
	walk_left
	step_end

# 145 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_4:
# 145 "data/maps/Route20/scripts.pory"
	walk_left
# 145 "data/maps/Route20/scripts.pory"
	walk_up
# 145 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
	step_end

# 147 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_5:
# 147 "data/maps/Route20/scripts.pory"
	walk_up
# 147 "data/maps/Route20/scripts.pory"
	walk_left
# 147 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 149 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_6:
# 149 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 151 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_7:
# 151 "data/maps/Route20/scripts.pory"
	walk_up
# 151 "data/maps/Route20/scripts.pory"
	walk_right
# 151 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 153 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_8:
# 153 "data/maps/Route20/scripts.pory"
	walk_right
# 153 "data/maps/Route20/scripts.pory"
	walk_right
# 153 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_9:
# 163 "data/maps/Route20/scripts.pory"
	walk_right
# 163 "data/maps/Route20/scripts.pory"
	walk_right
# 163 "data/maps/Route20/scripts.pory"
	walk_down
# 163 "data/maps/Route20/scripts.pory"
	walk_down
# 163 "data/maps/Route20/scripts.pory"
	walk_down
# 163 "data/maps/Route20/scripts.pory"
	walk_down
# 163 "data/maps/Route20/scripts.pory"
	walk_down
# 163 "data/maps/Route20/scripts.pory"
	walk_down
# 163 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_10:
# 165 "data/maps/Route20/scripts.pory"
	walk_right
# 165 "data/maps/Route20/scripts.pory"
	walk_down
# 165 "data/maps/Route20/scripts.pory"
	walk_down
# 165 "data/maps/Route20/scripts.pory"
	walk_down
# 165 "data/maps/Route20/scripts.pory"
	walk_down
# 165 "data/maps/Route20/scripts.pory"
	walk_down
# 165 "data/maps/Route20/scripts.pory"
	walk_down
# 165 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 168 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_11:
# 168 "data/maps/Route20/scripts.pory"
	walk_down
# 168 "data/maps/Route20/scripts.pory"
	walk_down
# 168 "data/maps/Route20/scripts.pory"
	walk_down
# 168 "data/maps/Route20/scripts.pory"
	walk_down
# 168 "data/maps/Route20/scripts.pory"
	walk_down
# 168 "data/maps/Route20/scripts.pory"
	walk_down
# 168 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

Mirrortestnpc_Text_0:
# 189 "data/maps/Route20/scripts.pory"
	.string "Saw you through the mirror!$"

Mirrortestnpc_Text_1:
# 189 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_RanchRace_Text_0:
# 235 "data/maps/Route20/scripts.pory"
	.string "Count me in!$"

Route20_RanchRace_Text_1:
# 235 "data/maps/Route20/scripts.pory"
	.string "Explain rules$"

Route20_RanchRace_Text_2:
# 235 "data/maps/Route20/scripts.pory"
	.string "No thanks$"

GogoatRace1Failed_Text::
# 61 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace1RewardCeremony_Reward::
# 75 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace1RewardCeremony_WelcomeBackAnyTime::
# 78 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2Failed_Text::
# 95 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_BrotherIntro::
# 177 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "wip$"

Route20_BrotherLost::
# 181 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_BrotherPostBat::
# 184 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_Sign_Text::
# 204 "data/maps/Route20/scripts.pory"
	.string "{LEFT_ARROW} Route 19\n"
	.string "{DOWN_ARROW} Crystalpine Town$"

GogoatRace2RewardCeremony_Reward::
# 314 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2RewardCeremony_WelcomeBackAnyTime::
# 317 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2Intro::
# 320 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRace2Short::
# 323 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoat2Race::
# 326 "data/maps/Route20/scripts.pory"
	.string "wip$"

LetsGetGogoatRacing2::
# 329 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceRulesText2::
# 332 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceIntro::
# 336 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRaceShort::
# 339 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRace::
# 342 "data/maps/Route20/scripts.pory"
	.string "wip$"

LetsGetGogoatRacing::
# 345 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceRulesText::
# 348 "data/maps/Route20/scripts.pory"
	.string "wip$"
