Route20_MapScripts::
# 16 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 42 "data/maps/Route20/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/Route20/scripts.pory"
	checktrainerflag TRAINER_BROTHER_6_ROUTE20
	goto_if 1, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 20 "data/maps/Route20/scripts.pory"
	goto_if_unset FLAG_GOGOAT_RACE_REWARD_1, Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 23 "data/maps/Route20/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 24 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_1, 41
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 33 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_1
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 21 "data/maps/Route20/scripts.pory"
	setflag FLAG_TEMP_2
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 25 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 25 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 29 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 1
Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 31 "data/maps/Route20/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 34 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
# 34 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_2_COMPLETE_AGAIN
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
# 38 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 3
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 33 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_2, 27
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 24 "data/maps/Route20/scripts.pory"
	compare VAR_TEMP_2, 17
	goto_if_eq Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 26 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 2
	goto Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

Route20_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 35 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 4
	return

Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 43 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, GogoatRace1Failed
# 44 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 2, GogoatRace1RewardCeremony
# 45 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 3, GogoatRace2Failed
# 46 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_3, 4, GogoatRace2RewardCeremony
	.2byte 0


GogoatRace1Failed::
# 51 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 52 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace1RewardCeremony::
# 61 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 62 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 63 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
	goto_if_eq GogoatRace1RewardCeremony_2
# 73 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 74 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 75 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_9
GogoatRace1RewardCeremony_8:
# 78 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_1
# 79 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 80 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FIRST_TALK
GogoatRace1RewardCeremony_1:
# 82 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace1RewardCeremony_2:
# 64 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward_Again
# 65 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 66 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_6
GogoatRace1RewardCeremony_5:
# 69 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 70 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
	goto GogoatRace1RewardCeremony_1

GogoatRace1RewardCeremony_6:
# 67 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_5

GogoatRace1RewardCeremony_9:
# 76 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_8


GogoatRace2Failed::
# 103 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 104 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace2RewardCeremony::
# 107 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 108 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 109 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 110 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace2RewardCeremony_2
GogoatRace2RewardCeremony_1:
# 113 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_2
# 114 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
# 115 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace2RewardCeremony_2:
# 111 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace2RewardCeremony_1


Route20_BrotherTrigger1::
# 124 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 1
# 125 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
# 128 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 2
# 129 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
# 132 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 3
# 133 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
# 136 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 4
# 137 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
# 140 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 5
# 141 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
# 144 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 6
# 145 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
# 149 "data/maps/Route20/scripts.pory"
	lockall
# 150 "data/maps/Route20/scripts.pory"
	safefollow
# 151 "data/maps/Route20/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 152 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 153 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_3
# 154 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_3
# 156 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_4
# 157 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_4
# 158 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_4
# 160 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
# 163 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 164 "data/maps/Route20/scripts.pory"
	delay 30
# 165 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 166 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_8
# 168 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_9
# 170 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_10
# 172 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_11
# 174 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_12
# 176 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
# 179 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 180 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherIntro
# 181 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
# 182 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
# 183 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 184 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_16
# 185 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_16
# 186 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_16
# 188 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_17
# 190 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_18
# 191 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
# 194 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route20/scripts.pory"
	removeobject 2
# 196 "data/maps/Route20/scripts.pory"
	savebgm MUS_DUMMY
# 197 "data/maps/Route20/scripts.pory"
	fadedefaultbgm
# 198 "data/maps/Route20/scripts.pory"
	release
	return

Route20_BrotherTriggerMain_3:
# 155 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
# 159 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
# 161 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
# 167 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
# 169 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
# 171 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
# 173 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
# 175 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
# 177 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
# 187 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
# 189 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
# 192 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Route20_Gogoat::
# 237 "data/maps/Route20/scripts.pory"
	lock
# 238 "data/maps/Route20/scripts.pory"
	waitse
# 239 "data/maps/Route20/scripts.pory"
	playmoncry SPECIES_GOGOAT, CRY_MODE_NORMAL
# 240 "data/maps/Route20/scripts.pory"
	waitmoncry
# 241 "data/maps/Route20/scripts.pory"
	release
	return


Route20_Sign::
# 245 "data/maps/Route20/scripts.pory"
	msgbox Route20_Sign_Text, MSGBOX_SIGN
	return


Route20_Race1_NPC::
# 253 "data/maps/Route20/scripts.pory"
	faceplayer
# 254 "data/maps/Route20/scripts.pory"
	release
# 255 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 256 "data/maps/Route20/scripts.pory"
	switch VAR_GOGOAT_RACE
# 258 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FIRST_TALK, Route20_Race1_NPC_2
# 263 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_INTRO, Route20_Race1_NPC_3
# 264 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FAILED, Route20_Race1_NPC_3
# 265 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FAILED, Route20_Race1_NPC_3
# 266 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_INTRO_COMPLETE, Route20_Race1_NPC_3
# 267 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FIRST_TALK, Route20_Race1_NPC_3
# 269 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE, Route20_Race1_NPC_4
# 271 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE_AGAIN, Route20_Race1_NPC_5
# 273 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_REWARD_UNCLAIMED_AGAIN, Route20_Race1_NPC_6
# 275 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE_AGAIN, Route20_Race1_NPC_7
# 276 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE, Route20_Race1_NPC_7
# 277 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_REWARD_UNCLAIMED_AGAIN, Route20_Race1_NPC_7
# 279 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_IN_PROGRESS, Route20_Race1_NPC_8
# 280 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_IN_PROGRESS, Route20_Race1_NPC_8
Route20_Race1_NPC_8:
# 282 "data/maps/Route20/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_GOGOAT_RACE
# 283 "data/maps/Route20/scripts.pory"
	msgbox Route20_Race1_NPC_Text_0
# 284 "data/maps/Route20/scripts.pory"
	release
	end

Route20_Race1_NPC_2:
# 259 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceIntro
# 260 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 261 "data/maps/Route20/scripts.pory"
	callnative ResetGogoatRaceRecords
# 262 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace1
	return

Route20_Race1_NPC_3:
# 268 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace1
	return

Route20_Race1_NPC_4:
# 270 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_RewardCeremony
	return

Route20_Race1_NPC_5:
# 272 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_RewardCeremony2
	return

Route20_Race1_NPC_6:
# 274 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_UnclaimedReward
	return

Route20_Race1_NPC_7:
# 278 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_GoMeetSon
	return


GogoatRace1_GoMeetSon::
# 290 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1_GoMeetSon_Text, MSGBOX_AUTOCLOSE
	end


GogoatRace1_UnclaimedReward::
# 300 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1_UnclaimedReward_Text_0
# 301 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 302 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1_UnclaimedReward_2
GogoatRace1_UnclaimedReward_1:
# 305 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 306 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 307 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

GogoatRace1_UnclaimedReward_2:
# 303 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1_UnclaimedReward_1


GogoatRace1_RewardCeremony2::
# 312 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward_Again
# 313 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 314 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1_RewardCeremony2_2
GogoatRace1_RewardCeremony2_1:
# 317 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 318 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 319 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

GogoatRace1_RewardCeremony2_2:
# 315 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1_RewardCeremony2_1


GogoatRace1_RewardCeremony::
# 324 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 325 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 326 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1_RewardCeremony_2
GogoatRace1_RewardCeremony_1:
# 329 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_1
# 330 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FIRST_TALK
# 331 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 332 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

GogoatRace1_RewardCeremony_2:
# 327 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1_RewardCeremony_1


WannaGogoatRace1::
# 337 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace
# 338 "data/maps/Route20/scripts.pory"
	waitmessage
# 339 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, WannaGogoatRace1_Text_0, WannaGogoatRace1_Text_1, WannaGogoatRace1_Text_2
# 340 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 342 "data/maps/Route20/scripts.pory"
	case 0, WannaGogoatRace1_2
# 348 "data/maps/Route20/scripts.pory"
	case 1, WannaGogoatRace1_3
# 351 "data/maps/Route20/scripts.pory"
	case 2, WannaGogoatRace1_4
# 352 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, WannaGogoatRace1_4
	return

WannaGogoatRace1_2:
# 343 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing
# 344 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
# 345 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 346 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 347 "data/maps/Route20/scripts.pory"
	waitstate
	return

WannaGogoatRace1_3:
# 349 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText
# 350 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace1
	return

WannaGogoatRace1_4:
# 353 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 354 "data/maps/Route20/scripts.pory"
	release
	end


Route20_Race2_NPC::
# 360 "data/maps/Route20/scripts.pory"
	lock
# 361 "data/maps/Route20/scripts.pory"
	faceplayer
# 362 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 363 "data/maps/Route20/scripts.pory"
	switch VAR_GOGOAT_RACE
# 365 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FIRST_TALK, Route20_Race2_NPC_2
# 366 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_INTRO_COMPLETE, Route20_Race2_NPC_2
# 367 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_IN_PROGRESS, Route20_Race2_NPC_2
# 368 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FAILED, Route20_Race2_NPC_2
# 369 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_IN_PROGRESS, Route20_Race2_NPC_2
# 370 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_INTRO, Route20_Race2_NPC_2
# 371 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FAILED, Route20_Race2_NPC_2
# 373 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE, Route20_Race2_NPC_3
# 374 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE_AGAIN, Route20_Race2_NPC_3
# 375 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_REWARD_UNCLAIMED_AGAIN, Route20_Race2_NPC_3
# 378 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FIRST_TALK, Route20_Race2_NPC_4
# 382 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE, Route20_Race2_NPC_5
# 392 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE_AGAIN, Route20_Race2_NPC_6
# 393 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_REWARD_UNCLAIMED_AGAIN, Route20_Race2_NPC_6
	return

Route20_Race2_NPC_2:
# 372 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace2
	return

Route20_Race2_NPC_3:
# 376 "data/maps/Route20/scripts.pory"
	msgbox Route20_Race2_NPC_Text_0, MSGBOX_AUTOCLOSE
	end

Route20_Race2_NPC_4:
# 379 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Intro
# 380 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
# 381 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace2
	return

Route20_Race2_NPC_5:
# 383 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 384 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 385 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_Race2_NPC_8
Route20_Race2_NPC_7:
# 388 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_2
# 389 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
# 390 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_Race2_NPC_6:
# 394 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2_NoRewardToGive, MSGBOX_AUTOCLOSE
# 395 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
	end

Route20_Race2_NPC_8:
# 386 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_Race2_NPC_7


WannaGogoatRace2::
# 401 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_GOGOAT_RACE_REWARD_2, WannaGogoatRace2_2
# 406 "data/maps/Route20/scripts.pory"
	message WannaGogoat2Race
WannaGogoatRace2_1:
# 408 "data/maps/Route20/scripts.pory"
	waitmessage
# 409 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, WannaGogoatRace1_Text_0, WannaGogoatRace1_Text_1, WannaGogoatRace1_Text_2
# 410 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 411 "data/maps/Route20/scripts.pory"
	case 0, WannaGogoatRace2_6
# 417 "data/maps/Route20/scripts.pory"
	case 1, WannaGogoatRace2_7
# 420 "data/maps/Route20/scripts.pory"
	case 2, WannaGogoatRace2_8
# 421 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, WannaGogoatRace2_8
	return

WannaGogoatRace2_2:
# 403 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace2Again
	goto WannaGogoatRace2_1

WannaGogoatRace2_6:
# 412 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 413 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
# 414 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 415 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 416 "data/maps/Route20/scripts.pory"
	waitstate
	return

WannaGogoatRace2_7:
# 418 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText2
# 419 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace2
	return

WannaGogoatRace2_8:
# 422 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 423 "data/maps/Route20/scripts.pory"
	release
	end


GogoatRanch_Boy::
# 512 "data/maps/Route20/scripts.pory"
	msgbox GogoatRanch_Boy_Text, MSGBOX_NPC
	return


GogoatRanch_Girl::
# 521 "data/maps/Route20/scripts.pory"
	msgbox GogoatRanch_Girl_Text, MSGBOX_NPC
	return


GogoatRanch_Woman::
# 528 "data/maps/Route20/scripts.pory"
	msgbox GogoatRanch_Woman_Text, MSGBOX_NPC
	return


# 155 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_0:
# 155 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
# 155 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 155 "data/maps/Route20/scripts.pory"
	delay_16
# 155 "data/maps/Route20/scripts.pory"
	delay_16
# 155 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 159 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_1:
# 159 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
# 159 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/Route20/scripts.pory"
	delay_16
# 159 "data/maps/Route20/scripts.pory"
	delay_16
# 159 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 161 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_2:
# 161 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_right
# 161 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 161 "data/maps/Route20/scripts.pory"
	delay_16
# 161 "data/maps/Route20/scripts.pory"
	delay_16
# 161 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 167 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_3:
# 167 "data/maps/Route20/scripts.pory"
	walk_left
	step_end

# 169 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_4:
# 169 "data/maps/Route20/scripts.pory"
	walk_left
# 169 "data/maps/Route20/scripts.pory"
	walk_up
# 169 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
	step_end

# 171 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_5:
# 171 "data/maps/Route20/scripts.pory"
	walk_up
# 171 "data/maps/Route20/scripts.pory"
	walk_left
# 171 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 173 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_6:
# 173 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 175 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_7:
# 175 "data/maps/Route20/scripts.pory"
	walk_up
# 175 "data/maps/Route20/scripts.pory"
	walk_right
# 175 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 177 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_8:
# 177 "data/maps/Route20/scripts.pory"
	walk_right
# 177 "data/maps/Route20/scripts.pory"
	walk_right
# 177 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 187 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_9:
# 187 "data/maps/Route20/scripts.pory"
	walk_right
# 187 "data/maps/Route20/scripts.pory"
	walk_right
# 187 "data/maps/Route20/scripts.pory"
	walk_down
# 187 "data/maps/Route20/scripts.pory"
	walk_down
# 187 "data/maps/Route20/scripts.pory"
	walk_down
# 187 "data/maps/Route20/scripts.pory"
	walk_down
# 187 "data/maps/Route20/scripts.pory"
	walk_down
# 187 "data/maps/Route20/scripts.pory"
	walk_down
# 187 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 189 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_10:
# 189 "data/maps/Route20/scripts.pory"
	walk_right
# 189 "data/maps/Route20/scripts.pory"
	walk_down
# 189 "data/maps/Route20/scripts.pory"
	walk_down
# 189 "data/maps/Route20/scripts.pory"
	walk_down
# 189 "data/maps/Route20/scripts.pory"
	walk_down
# 189 "data/maps/Route20/scripts.pory"
	walk_down
# 189 "data/maps/Route20/scripts.pory"
	walk_down
# 189 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 192 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_11:
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

Route20_Race1_NPC_Text_0:
# 283 "data/maps/Route20/scripts.pory"
	.string "Error {STR_VAR_3}:\nPlease inform the romhack creator.$"

GogoatRace1_UnclaimedReward_Text_0:
# 300 "data/maps/Route20/scripts.pory"
	.string "Unfortunately you already received\nthe grand prize, so all I've got to offer\lis this consolation prize.$"

WannaGogoatRace1_Text_0:
# 339 "data/maps/Route20/scripts.pory"
	.string "Count me in!$"

WannaGogoatRace1_Text_1:
# 339 "data/maps/Route20/scripts.pory"
	.string "Explain rules$"

WannaGogoatRace1_Text_2:
# 339 "data/maps/Route20/scripts.pory"
	.string "No thanks$"

Route20_Race2_NPC_Text_0:
# 376 "data/maps/Route20/scripts.pory"
	.string "I think my dad was looking for you.\pYou can find him near the middle of\nthe field just north of here.$"

GogoatRace1Failed_Text::
# 54 "data/maps/Route20/scripts.pory"
	.string "I hope you enjoyed your time\n"
	.string "Gogoat racing.\p"
	.string "Let me know if you'd like to\n"
	.string "give it another go!$"

GogoatRace1RewardCeremony_Reward::
# 84 "data/maps/Route20/scripts.pory"
	.string "We have a new winner!\p"
	.string "With a record time of {STR_VAR_2} seconds,\n"
	.string "you are our new record holder!\p"
	.string "As a reward, I want you to have this.$"

GogoatRace1RewardCeremony_Reward_Again::
# 90 "data/maps/Route20/scripts.pory"
	.string "We have a winner!\p"
	.string "With a record time of {STR_VAR_2} seconds,\n"
	.string "you are still our new record holder!\p"
	.string "Unfortunately you already received\n"
	.string "the grand prize, so all I've got to offer\l"
	.string "is this consolation prize.$"

GogoatRace1RewardCeremony_WelcomeBackAnyTime::
# 98 "data/maps/Route20/scripts.pory"
	.string "If you'd like to try and improve\n"
	.string "your record, come talk to me!$"

GogoatRace2Failed_Text::
# 118 "data/maps/Route20/scripts.pory"
	.string "Let me know if you'd like to\n"
	.string "try the race again.$"

Route20_BrotherIntro::
# 201 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I hope you've been seeing lots of\n"
	.string "new Pokémon, because I certainly have.\p"
	.string "How about we have a quick battle?\p"
	.string "I've rearranged my team a bit and\n"
	.string "I'd like to see how well these\l"
	.string "new guys actually perform.$"

Route20_BrotherLost::
# 211 "data/maps/Route20/scripts.pory"
	.string "I really thought I'd be able to\n"
	.string "break through this time.\l"
	.string "Where did I go wrong?$"

Route20_BrotherPostBat::
# 216 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: I don't know how you\n"
	.string "do it, but your team is\l"
	.string "just simply too much.\l"
	.string "I may need to do some soul searching\l"
	.string "to figure out what I'm doing wrong.\p"
	.string "I assume you're heading east towards\n"
	.string "Iceperch City and the Pokémon League?\p"
	.string "Well, don't be in too much of a hurry.\n"
	.string "These battles will be no fun if you\l"
	.string "grow too powerful.\p"
	.string "In fact, I think you should stop by\n"
	.string "in the next town and take part in a\l"
	.string "Pokémon Contest.\l"
	.string "I think I saw {RIVAL} heading there\l"
	.string "not too long ago.\p"
	.string "Anyways, I'm going back to training.\n"
	.string "See ya later!$"

Route20_Sign_Text::
# 247 "data/maps/Route20/scripts.pory"
	.string "{LEFT_ARROW} Route 19\n"
	.string "{DOWN_ARROW} Crystalpine Town$"

GogoatRace1_GoMeetSon_Text::
# 293 "data/maps/Route20/scripts.pory"
	.string "I think my son is trying to get\n"
	.string "your attention.\l"
	.string "He's right there outside the gate.$"

GogoatRace2RewardCeremony_Reward::
# 428 "data/maps/Route20/scripts.pory"
	.string "I really didn't expect anyone to\n"
	.string "come around and beat the record.\p"
	.string "For that feat, I want to reward\n"
	.string "you with this.$"

GogoatRace2RewardCeremony_WelcomeBackAnyTime::
# 434 "data/maps/Route20/scripts.pory"
	.string "I have no other rewards to give you,\n"
	.string "but you're free to try and beat\l"
	.string "your old record any time you want.$"

GogoatRace2Intro::
# 439 "data/maps/Route20/scripts.pory"
	.string "I saw how you raced around the track.\n"
	.string "Very impressive.\p"
	.string "However, if you want a true challenge,\n"
	.string "I have just what you need.$"

WannaGogoatRace2Again::
# 445 "data/maps/Route20/scripts.pory"
	.string "Here to improve your old score?$"

GogoatRace2_NoRewardToGive::
# 448 "data/maps/Route20/scripts.pory"
	.string "You raced well, but unfortunately\n"
	.string "I have no new reward to give you.\p"
	.string "If you'd like to try and improve\n"
	.string "your score, come talk to me.$"

WannaGogoat2Race::
# 454 "data/maps/Route20/scripts.pory"
	.string "How about it,\n"
	.string "want to have some real fun?$"

LetsGetGogoatRacing2::
# 458 "data/maps/Route20/scripts.pory"
	.string "Alright, let's head to the course!$"

GogoatRaceRulesText2::
# 461 "data/maps/Route20/scripts.pory"
	.string "The rules are simple: you'll do your\n"
	.string "best to navigate through a forest\l"
	.string "to a clearing with a flag.\p"
	.string "Grab that flag, then bring it back\n"
	.string "to the starting line. That's all.\p"
	.string "The current fastest time is\n"
	.string "{STR_VAR_2} seconds.$"

GogoatRaceIntro::
# 471 "data/maps/Route20/scripts.pory"
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
# 488 "data/maps/Route20/scripts.pory"
	.string "Up for some Gogoat racing?$"

LetsGetGogoatRacing::
# 491 "data/maps/Route20/scripts.pory"
	.string "Alright!\n"
	.string "Let's Gogoat!$"

GogoatRaceRulesText::
# 495 "data/maps/Route20/scripts.pory"
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

GogoatRanch_Boy_Text::
# 514 "data/maps/Route20/scripts.pory"
	.string "I'm tired of having my life\n"
	.string "revolving around these Gogoats.\p"
	.string "When I'm older, I'm moving\n"
	.string "somewhere with actual civilization.$"

GogoatRanch_Girl_Text::
# 523 "data/maps/Route20/scripts.pory"
	.string "I'm sorry, but I'm busy\n"
	.string "tending to this Gogoat.$"

GogoatRanch_Woman_Text::
# 530 "data/maps/Route20/scripts.pory"
	.string "If you're interested in riding Gogoats,\n"
	.string "you should talk to my husband.$"
