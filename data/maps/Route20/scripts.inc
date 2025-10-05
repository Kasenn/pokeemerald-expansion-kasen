Route20_MapScripts::
# 18 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 44 "data/maps/Route20/scripts.pory"
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
# 35 "data/maps/Route20/scripts.pory"
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
# 31 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 1
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 33 "data/maps/Route20/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 36 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_19
# 40 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 3
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 35 "data/maps/Route20/scripts.pory"
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

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_19:
# 37 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 4
	return

Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 45 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, GogoatRace1Failed
# 46 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 2, GogoatRace1RewardCeremony
# 47 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 3, GogoatRace2Failed
# 48 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 4, GogoatRace2RewardCeremony
	.2byte 0


GogoatRace1Failed::
# 53 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 54 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace1RewardCeremony::
# 60 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 61 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 62 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 63 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_2
GogoatRace1RewardCeremony_1:
# 66 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
# 67 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 68 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace1RewardCeremony_2:
# 64 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_1


GogoatRace2Failed::
# 77 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 78 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace2RewardCeremony::
# 81 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 82 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 83 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 84 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace2RewardCeremony_2
GogoatRace2RewardCeremony_1:
# 87 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
# 88 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace2RewardCeremony_2:
# 85 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace2RewardCeremony_1


Route20_BrotherTrigger1::
# 96 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 1
# 97 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
# 100 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 2
# 101 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
# 104 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 3
# 105 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
# 108 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 4
# 109 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
# 112 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 5
# 113 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
# 116 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 6
# 117 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
# 121 "data/maps/Route20/scripts.pory"
	lockall
# 122 "data/maps/Route20/scripts.pory"
	safefollow
# 123 "data/maps/Route20/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 124 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 125 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_3
# 126 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_3
# 128 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_4
# 129 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_4
# 130 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_4
# 132 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
# 135 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 136 "data/maps/Route20/scripts.pory"
	delay 30
# 137 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 138 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_8
# 140 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_9
# 142 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_10
# 144 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_11
# 146 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_12
# 148 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
# 151 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherIntro
# 153 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
# 154 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 156 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_16
# 157 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_16
# 158 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_16
# 160 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_17
# 162 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_18
# 163 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
# 166 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 167 "data/maps/Route20/scripts.pory"
	removeobject 2
# 168 "data/maps/Route20/scripts.pory"
	savebgm MUS_DUMMY
# 169 "data/maps/Route20/scripts.pory"
	fadedefaultbgm
# 170 "data/maps/Route20/scripts.pory"
	release
	return

Route20_BrotherTriggerMain_3:
# 127 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
# 131 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
# 133 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
# 139 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
# 141 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
# 143 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
# 145 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
# 147 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
# 149 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
# 159 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
# 161 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
# 164 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Mirrortestnpc::
# 185 "data/maps/Route20/scripts.pory"
	trainerbattle_single TRAINER_CRISSY, Mirrortestnpc_Text_0, Mirrortestnpc_Text_1
# 186 "data/maps/Route20/scripts.pory"
	msgbox Mirrortestnpc_Text_1, MSGBOX_AUTOCLOSE
	return


Route20_Gogoat::
# 190 "data/maps/Route20/scripts.pory"
	lock
# 191 "data/maps/Route20/scripts.pory"
	waitse
# 192 "data/maps/Route20/scripts.pory"
	playmoncry SPECIES_GOGOAT, CRY_MODE_NORMAL
# 193 "data/maps/Route20/scripts.pory"
	waitmoncry
# 194 "data/maps/Route20/scripts.pory"
	release
	return


Route20_Sign::
# 198 "data/maps/Route20/scripts.pory"
	msgbox Route20_Sign_Text, MSGBOX_SIGN
	return


Route20_RanchRace::
# 206 "data/maps/Route20/scripts.pory"
	lock
# 207 "data/maps/Route20/scripts.pory"
	faceplayer
# 208 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
	goto_if_eq Route20_RanchRace_2
# 219 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, 0
	goto_if_eq Route20_RanchRace_5
Route20_RanchRace_4:
# 224 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_TEMP_B, Route20_RanchRace_11
# 228 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace
Route20_RanchRace_10:
# 230 "data/maps/Route20/scripts.pory"
	waitmessage
# 231 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, Route20_RanchRace_Text_0, Route20_RanchRace_Text_1, Route20_RanchRace_Text_2
# 232 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/Route20/scripts.pory"
	case 0, Route20_RanchRace_15
# 239 "data/maps/Route20/scripts.pory"
	case 1, Route20_RanchRace_16
# 243 "data/maps/Route20/scripts.pory"
	case 2, Route20_RanchRace_17
# 244 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, Route20_RanchRace_17
	return

Route20_RanchRace_2:
# 209 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 210 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 211 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_RanchRace_8
Route20_RanchRace_7:
# 214 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
# 215 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 216 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_RanchRace_5:
# 220 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceIntro
# 221 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO
# 222 "data/maps/Route20/scripts.pory"
	callnative ResetGogoatRaceRecords
	goto Route20_RanchRace_4

Route20_RanchRace_8:
# 212 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_RanchRace_7

Route20_RanchRace_11:
# 225 "data/maps/Route20/scripts.pory"
	message WannaGogoatRaceShort
	goto Route20_RanchRace_10

Route20_RanchRace_15:
# 234 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing
# 235 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
# 236 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 237 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 238 "data/maps/Route20/scripts.pory"
	waitstate
	return

Route20_RanchRace_16:
# 240 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText
# 241 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_B
# 242 "data/maps/Route20/scripts.pory"
	goto Route20_RanchRace
	return

Route20_RanchRace_17:
# 245 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 246 "data/maps/Route20/scripts.pory"
	release
	end


Route20_Race2::
# 252 "data/maps/Route20/scripts.pory"
	lock
# 253 "data/maps/Route20/scripts.pory"
	faceplayer
# 254 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
	goto_if_eq Route20_Race2_2
# 264 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
	goto_if_lt Route20_Race2_5
Route20_Race2_4:
# 268 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_TEMP_C, Route20_Race2_11
# 272 "data/maps/Route20/scripts.pory"
	message WannaGogoat2Race
Route20_Race2_10:
# 274 "data/maps/Route20/scripts.pory"
	waitmessage
# 275 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, Route20_RanchRace_Text_0, Route20_RanchRace_Text_1, Route20_RanchRace_Text_2
# 276 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 277 "data/maps/Route20/scripts.pory"
	case 0, Route20_Race2_15
# 283 "data/maps/Route20/scripts.pory"
	case 1, Route20_Race2_16
# 287 "data/maps/Route20/scripts.pory"
	case 2, Route20_Race2_17
# 288 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, Route20_Race2_17
	return

Route20_Race2_2:
# 255 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 256 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 257 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_Race2_8
Route20_Race2_7:
# 260 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
# 261 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_Race2_5:
# 265 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Intro
# 266 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
	goto Route20_Race2_4

Route20_Race2_8:
# 258 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_Race2_7

Route20_Race2_11:
# 269 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace2Short
	goto Route20_Race2_10

Route20_Race2_15:
# 278 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 279 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
# 280 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 281 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 282 "data/maps/Route20/scripts.pory"
	waitstate
	return

Route20_Race2_16:
# 284 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText2
# 285 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_C
# 286 "data/maps/Route20/scripts.pory"
	goto Route20_Race2
	return

Route20_Race2_17:
# 289 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 290 "data/maps/Route20/scripts.pory"
	release
	end


# 127 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_0:
# 127 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
# 127 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 127 "data/maps/Route20/scripts.pory"
	delay_16
# 127 "data/maps/Route20/scripts.pory"
	delay_16
# 127 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 131 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_1:
# 131 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
# 131 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 131 "data/maps/Route20/scripts.pory"
	delay_16
# 131 "data/maps/Route20/scripts.pory"
	delay_16
# 131 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 133 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_2:
# 133 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_right
# 133 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/Route20/scripts.pory"
	delay_16
# 133 "data/maps/Route20/scripts.pory"
	delay_16
# 133 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 139 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_3:
# 139 "data/maps/Route20/scripts.pory"
	walk_left
	step_end

# 141 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_4:
# 141 "data/maps/Route20/scripts.pory"
	walk_left
# 141 "data/maps/Route20/scripts.pory"
	walk_up
# 141 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
	step_end

# 143 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_5:
# 143 "data/maps/Route20/scripts.pory"
	walk_up
# 143 "data/maps/Route20/scripts.pory"
	walk_left
# 143 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 145 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_6:
# 145 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_7:
# 147 "data/maps/Route20/scripts.pory"
	walk_up
# 147 "data/maps/Route20/scripts.pory"
	walk_right
# 147 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 149 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_8:
# 149 "data/maps/Route20/scripts.pory"
	walk_right
# 149 "data/maps/Route20/scripts.pory"
	walk_right
# 149 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 159 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_9:
# 159 "data/maps/Route20/scripts.pory"
	walk_right
# 159 "data/maps/Route20/scripts.pory"
	walk_right
# 159 "data/maps/Route20/scripts.pory"
	walk_down
# 159 "data/maps/Route20/scripts.pory"
	walk_down
# 159 "data/maps/Route20/scripts.pory"
	walk_down
# 159 "data/maps/Route20/scripts.pory"
	walk_down
# 159 "data/maps/Route20/scripts.pory"
	walk_down
# 159 "data/maps/Route20/scripts.pory"
	walk_down
# 159 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 161 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_10:
# 161 "data/maps/Route20/scripts.pory"
	walk_right
# 161 "data/maps/Route20/scripts.pory"
	walk_down
# 161 "data/maps/Route20/scripts.pory"
	walk_down
# 161 "data/maps/Route20/scripts.pory"
	walk_down
# 161 "data/maps/Route20/scripts.pory"
	walk_down
# 161 "data/maps/Route20/scripts.pory"
	walk_down
# 161 "data/maps/Route20/scripts.pory"
	walk_down
# 161 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_11:
# 164 "data/maps/Route20/scripts.pory"
	walk_down
# 164 "data/maps/Route20/scripts.pory"
	walk_down
# 164 "data/maps/Route20/scripts.pory"
	walk_down
# 164 "data/maps/Route20/scripts.pory"
	walk_down
# 164 "data/maps/Route20/scripts.pory"
	walk_down
# 164 "data/maps/Route20/scripts.pory"
	walk_down
# 164 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

Mirrortestnpc_Text_0:
# 185 "data/maps/Route20/scripts.pory"
	.string "Saw you through the mirror!$"

Mirrortestnpc_Text_1:
# 185 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_RanchRace_Text_0:
# 231 "data/maps/Route20/scripts.pory"
	.string "Count me in!$"

Route20_RanchRace_Text_1:
# 231 "data/maps/Route20/scripts.pory"
	.string "Explain rules$"

Route20_RanchRace_Text_2:
# 231 "data/maps/Route20/scripts.pory"
	.string "No thanks$"

GogoatRace1Failed_Text::
# 56 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace1RewardCeremony_Reward::
# 70 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace1RewardCeremony_WelcomeBackAnyTime::
# 73 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2Failed_Text::
# 91 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_BrotherIntro::
# 173 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "wip$"

Route20_BrotherLost::
# 177 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_BrotherPostBat::
# 180 "data/maps/Route20/scripts.pory"
	.string "wip$"

Route20_Sign_Text::
# 200 "data/maps/Route20/scripts.pory"
	.string "{LEFT_ARROW} Route 19\n"
	.string "{DOWN_ARROW} Crystalpine Town$"

GogoatRace2RewardCeremony_Reward::
# 295 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2RewardCeremony_WelcomeBackAnyTime::
# 298 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRace2Intro::
# 301 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRace2Short::
# 304 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoat2Race::
# 307 "data/maps/Route20/scripts.pory"
	.string "wip$"

LetsGetGogoatRacing2::
# 310 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceRulesText2::
# 313 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceIntro::
# 317 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRaceShort::
# 320 "data/maps/Route20/scripts.pory"
	.string "wip$"

WannaGogoatRace::
# 323 "data/maps/Route20/scripts.pory"
	.string "wip$"

LetsGetGogoatRacing::
# 326 "data/maps/Route20/scripts.pory"
	.string "wip$"

GogoatRaceRulesText::
# 329 "data/maps/Route20/scripts.pory"
	.string "wip$"
