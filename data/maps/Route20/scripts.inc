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
# 47 "data/maps/Route20/scripts.pory"
	map_script_2 VAR_TEMP_4, 0, Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4
	.2byte 0

Route20_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_4:
# 48 "data/maps/Route20/scripts.pory"
	msgbox EndOfBetaNotice, MSGBOX_AUTOCLOSE
# 49 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_4, 1
	return


GogoatRace1Failed::
# 55 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 56 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace1RewardCeremony::
# 65 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 66 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 67 "data/maps/Route20/scripts.pory"
	compare VAR_GOGOAT_RACE, STORY_RACE_1_COMPLETE_AGAIN
	goto_if_eq GogoatRace1RewardCeremony_2
# 77 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 78 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 79 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_9
GogoatRace1RewardCeremony_8:
# 82 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_1
# 83 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 84 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FIRST_TALK
GogoatRace1RewardCeremony_1:
# 86 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace1RewardCeremony_2:
# 68 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward_Again
# 69 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 70 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1RewardCeremony_6
GogoatRace1RewardCeremony_5:
# 73 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 74 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
	goto GogoatRace1RewardCeremony_1

GogoatRace1RewardCeremony_6:
# 71 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_5

GogoatRace1RewardCeremony_9:
# 80 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1RewardCeremony_8


GogoatRace2Failed::
# 107 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 108 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Failed_Text, MSGBOX_AUTOCLOSE
	return


GogoatRace2RewardCeremony::
# 111 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_3, 0
# 112 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 113 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 114 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace2RewardCeremony_2
GogoatRace2RewardCeremony_1:
# 117 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_2
# 118 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
# 119 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	return

GogoatRace2RewardCeremony_2:
# 115 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace2RewardCeremony_1


Route20_BrotherTrigger1::
# 128 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 1
# 129 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger2::
# 132 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 2
# 133 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger3::
# 136 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 3
# 137 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger4::
# 140 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 4
# 141 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger5::
# 144 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 5
# 145 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTrigger6::
# 148 "data/maps/Route20/scripts.pory"
	setvar VAR_TEMP_0, 6
# 149 "data/maps/Route20/scripts.pory"
	goto Route20_BrotherTriggerMain
	return


Route20_BrotherTriggerMain::
# 153 "data/maps/Route20/scripts.pory"
	lockall
# 154 "data/maps/Route20/scripts.pory"
	safefollow
# 155 "data/maps/Route20/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 156 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 157 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_3
# 158 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_3
# 160 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_4
# 161 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_4
# 162 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_4
# 164 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_5
Route20_BrotherTriggerMain_1:
# 167 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 168 "data/maps/Route20/scripts.pory"
	delay 30
# 169 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 170 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_8
# 172 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_9
# 174 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_10
# 176 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_11
# 178 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_12
# 180 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_13
Route20_BrotherTriggerMain_6:
# 183 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherIntro
# 185 "data/maps/Route20/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER_6_ROUTE20, Route20_BrotherLost
# 186 "data/maps/Route20/scripts.pory"
	msgbox Route20_BrotherPostBat, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route20/scripts.pory"
	switch VAR_TEMP_0
# 188 "data/maps/Route20/scripts.pory"
	case 1, Route20_BrotherTriggerMain_16
# 189 "data/maps/Route20/scripts.pory"
	case 2, Route20_BrotherTriggerMain_16
# 190 "data/maps/Route20/scripts.pory"
	case 3, Route20_BrotherTriggerMain_16
# 192 "data/maps/Route20/scripts.pory"
	case 4, Route20_BrotherTriggerMain_17
# 194 "data/maps/Route20/scripts.pory"
	case 5, Route20_BrotherTriggerMain_18
# 195 "data/maps/Route20/scripts.pory"
	case 6, Route20_BrotherTriggerMain_18
Route20_BrotherTriggerMain_14:
# 198 "data/maps/Route20/scripts.pory"
	waitmovement 0
# 199 "data/maps/Route20/scripts.pory"
	removeobject 2
# 200 "data/maps/Route20/scripts.pory"
	savebgm MUS_DUMMY
# 201 "data/maps/Route20/scripts.pory"
	fadedefaultbgm
# 202 "data/maps/Route20/scripts.pory"
	release
	return

Route20_BrotherTriggerMain_3:
# 159 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_0
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_4:
# 163 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_1
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_5:
# 165 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_2
	goto Route20_BrotherTriggerMain_1

Route20_BrotherTriggerMain_8:
# 171 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_3
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_9:
# 173 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_4
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_10:
# 175 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_5
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_11:
# 177 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_6
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_12:
# 179 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_7
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_13:
# 181 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_8
	goto Route20_BrotherTriggerMain_6

Route20_BrotherTriggerMain_16:
# 191 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_9
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_17:
# 193 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_10
	goto Route20_BrotherTriggerMain_14

Route20_BrotherTriggerMain_18:
# 196 "data/maps/Route20/scripts.pory"
	applymovement 2, Route20_BrotherTriggerMain_Movement_11
	goto Route20_BrotherTriggerMain_14


Route20_Gogoat::
# 241 "data/maps/Route20/scripts.pory"
	lock
# 242 "data/maps/Route20/scripts.pory"
	waitse
# 243 "data/maps/Route20/scripts.pory"
	playmoncry SPECIES_GOGOAT, CRY_MODE_NORMAL
# 244 "data/maps/Route20/scripts.pory"
	waitmoncry
# 245 "data/maps/Route20/scripts.pory"
	release
	return


Route20_Sign::
# 249 "data/maps/Route20/scripts.pory"
	msgbox Route20_Sign_Text, MSGBOX_SIGN
	return


Route20_Race1_NPC::
# 257 "data/maps/Route20/scripts.pory"
	faceplayer
# 258 "data/maps/Route20/scripts.pory"
	release
# 259 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 260 "data/maps/Route20/scripts.pory"
	switch VAR_GOGOAT_RACE
# 262 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FIRST_TALK, Route20_Race1_NPC_2
# 267 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_INTRO, Route20_Race1_NPC_3
# 268 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FAILED, Route20_Race1_NPC_3
# 269 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FAILED, Route20_Race1_NPC_3
# 270 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_INTRO_COMPLETE, Route20_Race1_NPC_3
# 271 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FIRST_TALK, Route20_Race1_NPC_3
# 273 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE, Route20_Race1_NPC_4
# 275 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE_AGAIN, Route20_Race1_NPC_5
# 277 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_REWARD_UNCLAIMED_AGAIN, Route20_Race1_NPC_6
# 279 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE_AGAIN, Route20_Race1_NPC_7
# 280 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE, Route20_Race1_NPC_7
# 281 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_REWARD_UNCLAIMED_AGAIN, Route20_Race1_NPC_7
# 283 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_IN_PROGRESS, Route20_Race1_NPC_8
# 284 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_IN_PROGRESS, Route20_Race1_NPC_8
Route20_Race1_NPC_8:
# 286 "data/maps/Route20/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_GOGOAT_RACE
# 287 "data/maps/Route20/scripts.pory"
	msgbox Route20_Race1_NPC_Text_0
# 288 "data/maps/Route20/scripts.pory"
	release
	end

Route20_Race1_NPC_2:
# 263 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceIntro
# 264 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 265 "data/maps/Route20/scripts.pory"
	callnative ResetGogoatRaceRecords
# 266 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace1
	return

Route20_Race1_NPC_3:
# 272 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace1
	return

Route20_Race1_NPC_4:
# 274 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_RewardCeremony
	return

Route20_Race1_NPC_5:
# 276 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_RewardCeremony2
	return

Route20_Race1_NPC_6:
# 278 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_UnclaimedReward
	return

Route20_Race1_NPC_7:
# 282 "data/maps/Route20/scripts.pory"
	goto GogoatRace1_GoMeetSon
	return


GogoatRace1_GoMeetSon::
# 294 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1_GoMeetSon_Text, MSGBOX_AUTOCLOSE
	end


GogoatRace1_UnclaimedReward::
# 304 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1_UnclaimedReward_Text_0
# 305 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 306 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1_UnclaimedReward_2
GogoatRace1_UnclaimedReward_1:
# 309 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 310 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 311 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

GogoatRace1_UnclaimedReward_2:
# 307 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1_UnclaimedReward_1


GogoatRace1_RewardCeremony2::
# 316 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward_Again
# 317 "data/maps/Route20/scripts.pory"
	giveitem ITEM_LEMONADE
# 318 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1_RewardCeremony2_2
GogoatRace1_RewardCeremony2_1:
# 321 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_INTRO_COMPLETE
# 322 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 323 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

GogoatRace1_RewardCeremony2_2:
# 319 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1_RewardCeremony2_1


GogoatRace1_RewardCeremony::
# 328 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_Reward
# 329 "data/maps/Route20/scripts.pory"
	giveitem ITEM_PP_UP
# 330 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GogoatRace1_RewardCeremony_2
GogoatRace1_RewardCeremony_1:
# 333 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_1
# 334 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_FIRST_TALK
# 335 "data/maps/Route20/scripts.pory"
	clearflag FLAG_TEMP_2
# 336 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace1RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

GogoatRace1_RewardCeremony_2:
# 331 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto GogoatRace1_RewardCeremony_1


WannaGogoatRace1::
# 341 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace
# 342 "data/maps/Route20/scripts.pory"
	waitmessage
# 343 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, WannaGogoatRace1_Text_0, WannaGogoatRace1_Text_1, WannaGogoatRace1_Text_2
# 344 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 346 "data/maps/Route20/scripts.pory"
	case 0, WannaGogoatRace1_2
# 352 "data/maps/Route20/scripts.pory"
	case 1, WannaGogoatRace1_3
# 355 "data/maps/Route20/scripts.pory"
	case 2, WannaGogoatRace1_4
# 356 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, WannaGogoatRace1_4
	return

WannaGogoatRace1_2:
# 347 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing
# 348 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_1_IN_PROGRESS
# 349 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RANCH_RACE, 0
# 350 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 351 "data/maps/Route20/scripts.pory"
	waitstate
	return

WannaGogoatRace1_3:
# 353 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText
# 354 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace1
	return

WannaGogoatRace1_4:
# 357 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 358 "data/maps/Route20/scripts.pory"
	release
	end


Route20_Race2_NPC::
# 364 "data/maps/Route20/scripts.pory"
	lock
# 365 "data/maps/Route20/scripts.pory"
	faceplayer
# 366 "data/maps/Route20/scripts.pory"
	callnative BufferGogoatRecordTime
# 367 "data/maps/Route20/scripts.pory"
	switch VAR_GOGOAT_RACE
# 369 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FIRST_TALK, Route20_Race2_NPC_2
# 370 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_INTRO_COMPLETE, Route20_Race2_NPC_2
# 371 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_IN_PROGRESS, Route20_Race2_NPC_2
# 372 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_FAILED, Route20_Race2_NPC_2
# 373 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_IN_PROGRESS, Route20_Race2_NPC_2
# 374 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_INTRO, Route20_Race2_NPC_2
# 375 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FAILED, Route20_Race2_NPC_2
# 377 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE, Route20_Race2_NPC_3
# 378 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_COMPLETE_AGAIN, Route20_Race2_NPC_3
# 379 "data/maps/Route20/scripts.pory"
	case STORY_RACE_1_REWARD_UNCLAIMED_AGAIN, Route20_Race2_NPC_3
# 382 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_FIRST_TALK, Route20_Race2_NPC_4
# 386 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE, Route20_Race2_NPC_5
# 396 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_COMPLETE_AGAIN, Route20_Race2_NPC_6
# 397 "data/maps/Route20/scripts.pory"
	case STORY_RACE_2_REWARD_UNCLAIMED_AGAIN, Route20_Race2_NPC_6
	return

Route20_Race2_NPC_2:
# 376 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace2
	return

Route20_Race2_NPC_3:
# 380 "data/maps/Route20/scripts.pory"
	msgbox Route20_Race2_NPC_Text_0, MSGBOX_AUTOCLOSE
	end

Route20_Race2_NPC_4:
# 383 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2Intro
# 384 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
# 385 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace2
	return

Route20_Race2_NPC_5:
# 387 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_Reward
# 388 "data/maps/Route20/scripts.pory"
	giveitem ITEM_BOND_ANKLET
# 389 "data/maps/Route20/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route20_Race2_NPC_8
Route20_Race2_NPC_7:
# 392 "data/maps/Route20/scripts.pory"
	setflag FLAG_GOGOAT_RACE_REWARD_2
# 393 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
# 394 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2RewardCeremony_WelcomeBackAnyTime, MSGBOX_AUTOCLOSE
	end

Route20_Race2_NPC_6:
# 398 "data/maps/Route20/scripts.pory"
	msgbox GogoatRace2_NoRewardToGive, MSGBOX_AUTOCLOSE
# 399 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_INTRO
	end

Route20_Race2_NPC_8:
# 390 "data/maps/Route20/scripts.pory"
	goto ZeBagIsFull
	goto Route20_Race2_NPC_7


WannaGogoatRace2::
# 405 "data/maps/Route20/scripts.pory"
	goto_if_set FLAG_GOGOAT_RACE_REWARD_2, WannaGogoatRace2_2
# 410 "data/maps/Route20/scripts.pory"
	message WannaGogoat2Race
WannaGogoatRace2_1:
# 412 "data/maps/Route20/scripts.pory"
	waitmessage
# 413 "data/maps/Route20/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, WannaGogoatRace1_Text_0, WannaGogoatRace1_Text_1, WannaGogoatRace1_Text_2
# 414 "data/maps/Route20/scripts.pory"
	switch VAR_RESULT
# 415 "data/maps/Route20/scripts.pory"
	case 0, WannaGogoatRace2_6
# 421 "data/maps/Route20/scripts.pory"
	case 1, WannaGogoatRace2_7
# 424 "data/maps/Route20/scripts.pory"
	case 2, WannaGogoatRace2_8
# 425 "data/maps/Route20/scripts.pory"
	case MULTI_B_PRESSED, WannaGogoatRace2_8
	return

WannaGogoatRace2_2:
# 407 "data/maps/Route20/scripts.pory"
	message WannaGogoatRace2Again
	goto WannaGogoatRace2_1

WannaGogoatRace2_6:
# 416 "data/maps/Route20/scripts.pory"
	msgbox LetsGetGogoatRacing2
# 417 "data/maps/Route20/scripts.pory"
	setvar VAR_GOGOAT_RACE, STORY_RACE_2_IN_PROGRESS
# 418 "data/maps/Route20/scripts.pory"
	warp MAP_ROUTE20_RACE_COURSE, 0
# 419 "data/maps/Route20/scripts.pory"
	callnative TurnBikeToGogoat
# 420 "data/maps/Route20/scripts.pory"
	waitstate
	return

WannaGogoatRace2_7:
# 422 "data/maps/Route20/scripts.pory"
	msgbox GogoatRaceRulesText2
# 423 "data/maps/Route20/scripts.pory"
	goto WannaGogoatRace2
	return

WannaGogoatRace2_8:
# 426 "data/maps/Route20/scripts.pory"
	msgbox ThatsAShame
# 427 "data/maps/Route20/scripts.pory"
	release
	end


GogoatRanch_Boy::
# 516 "data/maps/Route20/scripts.pory"
	msgbox GogoatRanch_Boy_Text, MSGBOX_NPC
	return


GogoatRanch_Girl::
# 525 "data/maps/Route20/scripts.pory"
	msgbox GogoatRanch_Girl_Text, MSGBOX_NPC
	return


GogoatRanch_Woman::
# 532 "data/maps/Route20/scripts.pory"
	msgbox GogoatRanch_Woman_Text, MSGBOX_NPC
	return


# 159 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_0:
# 159 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
# 159 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 159 "data/maps/Route20/scripts.pory"
	delay_16
# 159 "data/maps/Route20/scripts.pory"
	delay_16
# 159 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 163 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_1:
# 163 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
# 163 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 163 "data/maps/Route20/scripts.pory"
	delay_16
# 163 "data/maps/Route20/scripts.pory"
	delay_16
# 163 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 165 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_2:
# 165 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_right
# 165 "data/maps/Route20/scripts.pory"
	emote_exclamation_mark
# 165 "data/maps/Route20/scripts.pory"
	delay_16
# 165 "data/maps/Route20/scripts.pory"
	delay_16
# 165 "data/maps/Route20/scripts.pory"
	delay_16
	step_end

# 171 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_3:
# 171 "data/maps/Route20/scripts.pory"
	walk_left
	step_end

# 173 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_4:
# 173 "data/maps/Route20/scripts.pory"
	walk_left
# 173 "data/maps/Route20/scripts.pory"
	walk_up
# 173 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_left
	step_end

# 175 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_5:
# 175 "data/maps/Route20/scripts.pory"
	walk_up
# 175 "data/maps/Route20/scripts.pory"
	walk_left
# 175 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 177 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_6:
# 177 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 179 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_7:
# 179 "data/maps/Route20/scripts.pory"
	walk_up
# 179 "data/maps/Route20/scripts.pory"
	walk_right
# 179 "data/maps/Route20/scripts.pory"
	walk_in_place_faster_up
	step_end

# 181 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_8:
# 181 "data/maps/Route20/scripts.pory"
	walk_right
# 181 "data/maps/Route20/scripts.pory"
	walk_right
# 181 "data/maps/Route20/scripts.pory"
	walk_up
	step_end

# 191 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_9:
# 191 "data/maps/Route20/scripts.pory"
	walk_right
# 191 "data/maps/Route20/scripts.pory"
	walk_right
# 191 "data/maps/Route20/scripts.pory"
	walk_down
# 191 "data/maps/Route20/scripts.pory"
	walk_down
# 191 "data/maps/Route20/scripts.pory"
	walk_down
# 191 "data/maps/Route20/scripts.pory"
	walk_down
# 191 "data/maps/Route20/scripts.pory"
	walk_down
# 191 "data/maps/Route20/scripts.pory"
	walk_down
# 191 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 193 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_10:
# 193 "data/maps/Route20/scripts.pory"
	walk_right
# 193 "data/maps/Route20/scripts.pory"
	walk_down
# 193 "data/maps/Route20/scripts.pory"
	walk_down
# 193 "data/maps/Route20/scripts.pory"
	walk_down
# 193 "data/maps/Route20/scripts.pory"
	walk_down
# 193 "data/maps/Route20/scripts.pory"
	walk_down
# 193 "data/maps/Route20/scripts.pory"
	walk_down
# 193 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

# 196 "data/maps/Route20/scripts.pory"
Route20_BrotherTriggerMain_Movement_11:
# 196 "data/maps/Route20/scripts.pory"
	walk_down
# 196 "data/maps/Route20/scripts.pory"
	walk_down
# 196 "data/maps/Route20/scripts.pory"
	walk_down
# 196 "data/maps/Route20/scripts.pory"
	walk_down
# 196 "data/maps/Route20/scripts.pory"
	walk_down
# 196 "data/maps/Route20/scripts.pory"
	walk_down
# 196 "data/maps/Route20/scripts.pory"
	walk_down
	step_end

Route20_Race1_NPC_Text_0:
# 287 "data/maps/Route20/scripts.pory"
	.string "Error {STR_VAR_3}:\nPlease inform the romhack creator.$"

GogoatRace1_UnclaimedReward_Text_0:
# 304 "data/maps/Route20/scripts.pory"
	.string "Unfortunately you already received\nthe grand prize, so all I've got to offer\lis this consolation prize.$"

WannaGogoatRace1_Text_0:
# 343 "data/maps/Route20/scripts.pory"
	.string "Count me in!$"

WannaGogoatRace1_Text_1:
# 343 "data/maps/Route20/scripts.pory"
	.string "Explain rules$"

WannaGogoatRace1_Text_2:
# 343 "data/maps/Route20/scripts.pory"
	.string "No thanks$"

Route20_Race2_NPC_Text_0:
# 380 "data/maps/Route20/scripts.pory"
	.string "I think my dad was looking for you.\pYou can find him near the middle of\nthe field just north of here.$"

GogoatRace1Failed_Text::
# 58 "data/maps/Route20/scripts.pory"
	.string "I hope you enjoyed your time\n"
	.string "Gogoat racing.\p"
	.string "Let me know if you'd like to\n"
	.string "give it another go!$"

GogoatRace1RewardCeremony_Reward::
# 88 "data/maps/Route20/scripts.pory"
	.string "We have a new winner!\p"
	.string "With a record time of {STR_VAR_2} seconds,\n"
	.string "you are our new record holder!\p"
	.string "As a reward, I want you to have this.$"

GogoatRace1RewardCeremony_Reward_Again::
# 94 "data/maps/Route20/scripts.pory"
	.string "We have a winner!\p"
	.string "With a record time of {STR_VAR_2} seconds,\n"
	.string "you are still our new record holder!\p"
	.string "Unfortunately you already received\n"
	.string "the grand prize, so all I've got to offer\l"
	.string "is this consolation prize.$"

GogoatRace1RewardCeremony_WelcomeBackAnyTime::
# 102 "data/maps/Route20/scripts.pory"
	.string "If you'd like to try and improve\n"
	.string "your record, come talk to me!$"

GogoatRace2Failed_Text::
# 122 "data/maps/Route20/scripts.pory"
	.string "Let me know if you'd like to\n"
	.string "try the race again.$"

Route20_BrotherIntro::
# 205 "data/maps/Route20/scripts.pory"
	.string "{BROTHER}: Yo, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I hope you've been seeing lots of\n"
	.string "new Pokémon, because I certainly have.\p"
	.string "How about we have a quick battle?\p"
	.string "I've rearranged my team a bit and\n"
	.string "I'd like to see how well these\l"
	.string "new guys actually perform.$"

Route20_BrotherLost::
# 215 "data/maps/Route20/scripts.pory"
	.string "I really thought I'd be able to\n"
	.string "break through this time.\l"
	.string "Where did I go wrong?$"

Route20_BrotherPostBat::
# 220 "data/maps/Route20/scripts.pory"
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
# 251 "data/maps/Route20/scripts.pory"
	.string "{LEFT_ARROW} Route 19\n"
	.string "{DOWN_ARROW} Crystalpine Town$"

GogoatRace1_GoMeetSon_Text::
# 297 "data/maps/Route20/scripts.pory"
	.string "I think my son is trying to get\n"
	.string "your attention.\l"
	.string "He's right there outside the gate.$"

GogoatRace2RewardCeremony_Reward::
# 432 "data/maps/Route20/scripts.pory"
	.string "I really didn't expect anyone to\n"
	.string "come around and beat the record.\p"
	.string "For that feat, I want to reward\n"
	.string "you with this.$"

GogoatRace2RewardCeremony_WelcomeBackAnyTime::
# 438 "data/maps/Route20/scripts.pory"
	.string "I have no other rewards to give you,\n"
	.string "but you're free to try and beat\l"
	.string "your old record any time you want.$"

GogoatRace2Intro::
# 443 "data/maps/Route20/scripts.pory"
	.string "I saw how you raced around the track.\n"
	.string "Very impressive.\p"
	.string "However, if you want a true challenge,\n"
	.string "I have just what you need.$"

WannaGogoatRace2Again::
# 449 "data/maps/Route20/scripts.pory"
	.string "Here to improve your old score?$"

GogoatRace2_NoRewardToGive::
# 452 "data/maps/Route20/scripts.pory"
	.string "You raced well, but unfortunately\n"
	.string "I have no new reward to give you.\p"
	.string "If you'd like to try and improve\n"
	.string "your score, come talk to me.$"

WannaGogoat2Race::
# 458 "data/maps/Route20/scripts.pory"
	.string "How about it,\n"
	.string "want to have some real fun?$"

LetsGetGogoatRacing2::
# 462 "data/maps/Route20/scripts.pory"
	.string "Alright, let's head to the course!$"

GogoatRaceRulesText2::
# 465 "data/maps/Route20/scripts.pory"
	.string "The rules are simple: you'll do your\n"
	.string "best to navigate through a forest\l"
	.string "to a clearing with a flag.\p"
	.string "Grab that flag, then bring it back\n"
	.string "to the starting line. That's all.\p"
	.string "The current fastest time is\n"
	.string "{STR_VAR_2} seconds.$"

GogoatRaceIntro::
# 475 "data/maps/Route20/scripts.pory"
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
# 492 "data/maps/Route20/scripts.pory"
	.string "Up for some Gogoat racing?$"

LetsGetGogoatRacing::
# 495 "data/maps/Route20/scripts.pory"
	.string "Alright!\n"
	.string "Let's Gogoat!$"

GogoatRaceRulesText::
# 499 "data/maps/Route20/scripts.pory"
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
# 518 "data/maps/Route20/scripts.pory"
	.string "I'm tired of having my life\n"
	.string "revolving around these Gogoats.\p"
	.string "When I'm older, I'm moving\n"
	.string "somewhere with actual civilization.$"

GogoatRanch_Girl_Text::
# 527 "data/maps/Route20/scripts.pory"
	.string "I'm sorry, but I'm busy\n"
	.string "tending to this Gogoat.$"

GogoatRanch_Woman_Text::
# 534 "data/maps/Route20/scripts.pory"
	.string "If you're interested in riding Gogoats,\n"
	.string "you should talk to my husband.$"
