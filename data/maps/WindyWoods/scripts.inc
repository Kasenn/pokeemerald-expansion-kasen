WindyWoods_MapScripts::
# 2 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 29 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 30 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
	goto_if_ne WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	goto_if_ge WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 14 "data/maps/WindyWoods/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_DIDNT_ENTER
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 17 "data/maps/WindyWoods/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_TALKED_TO_AIDE
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
# 17 "data/maps/WindyWoods/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_ENTERED_HIDDEN_GROTTO
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_15:
# 21 "data/maps/WindyWoods/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_COMPLETE
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_21
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_20:
# 24 "data/maps/WindyWoods/scripts.pory"
	getplayerxy VAR_TEMP_5, VAR_TEMP_6
# 25 "data/maps/WindyWoods/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_ENTERED_HIDDEN_GROTTO
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_25
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_1
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 8 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_3
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 12 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 11 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
	goto_if_le WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 15 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_COMPLETE
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_12

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_16:
# 18 "data/maps/WindyWoods/scripts.pory"
	setobjectxyperm LOCALID_WW_SCIENTIST, 51, 4
# 19 "data/maps/WindyWoods/scripts.pory"
	setobjectmovementtype LOCALID_WW_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_15

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_21:
# 22 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_4
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_20

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_23:
# 26 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_7, 1
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_24:
# 25 "data/maps/WindyWoods/scripts.pory"
	compare VAR_TEMP_6, 4
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_23
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_25:
# 25 "data/maps/WindyWoods/scripts.pory"
	compare VAR_TEMP_5, 52
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_24
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 29 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 29 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 31 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED, WW_BridgeScene2
# 32 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_TEMP_7, 1, WW_HiddenGrottoExitIntro
	.2byte 0


WindyWoods_Bugcatcher1::
# 37 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_BUGCATCHER, WindyWoods_Bugcatcher1Intro, WindyWoods_Bugcatcher1Defeated
# 38 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Bugcatcher1PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Girl2::
# 52 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_LADY, WindyWoods_Girl2Intro, WindyWoods_Girl2Defeated
# 53 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Girl2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Bugcatcher2::
# 67 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_BUGCATCHER_2, WindyWoods_Bugcatcher2Intro, WindyWoods_Bugcatcher2Defeated
# 68 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Bugcatcher2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Camper::
# 82 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_CAMPER, WindyWoods_CamperIntro, WindyWoods_CamperDefeated
# 83 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_CamperPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Lass::
# 97 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_LASS, WindyWoods_LassIntro, WindyWoods_LassDefeated
# 98 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_LassPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Youngster::
# 116 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_YOUNGSTER, WindyWoods_YoungsterIntro, WindyWoods_YoungsterDefeated
# 117 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


WW_CoolTrainer::
# 133 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 1, WW_CoolTrainer_2
WW_CoolTrainer_1:
# 142 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_BUGCATCHER
	goto_if 1, WW_CoolTrainer_7
WW_CoolTrainer_5:
# 151 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Text_1, MSGBOX_NPC
	return

WW_CoolTrainer_2:
# 134 "data/maps/WindyWoods/scripts.pory"
	goto_if_set FLAG_WW_COOLTRAINERREWARD, WW_CoolTrainer_17
# 139 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerPostBattle
	goto WW_CoolTrainer_1

WW_CoolTrainer_4:
# 148 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerEligible
	return

WW_CoolTrainer_6:
# 144 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_BUGCATCHER_2
	goto_if 1, WW_CoolTrainer_11
	goto WW_CoolTrainer_5

WW_CoolTrainer_7:
# 143 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_LADY
	goto_if 1, WW_CoolTrainer_6
	goto WW_CoolTrainer_5

WW_CoolTrainer_10:
# 146 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_LASS
	goto_if 1, WW_CoolTrainer_14
	goto WW_CoolTrainer_5

WW_CoolTrainer_11:
# 145 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_CAMPER
	goto_if 1, WW_CoolTrainer_10
	goto WW_CoolTrainer_5

WW_CoolTrainer_14:
# 147 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_YOUNGSTER
	goto_if 1, WW_CoolTrainer_4
	goto WW_CoolTrainer_5

WW_CoolTrainer_17:
# 135 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Text_0, MSGBOX_NPC
	end


WW_CoolTrainerEligible::
# 156 "data/maps/WindyWoods/scripts.pory"
	lock
# 157 "data/maps/WindyWoods/scripts.pory"
	faceplayer
# 158 "data/maps/WindyWoods/scripts.pory"
	goto_if_set FLAG_TEMP_4, WW_CoolTrainerEligible_2
# 162 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Intro, MSGBOX_YESNO
WW_CoolTrainerEligible_1:
# 164 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WW_CoolTrainerEligible_5
# 170 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_4
# 171 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerEligible_Text_1, MSGBOX_NPC
	return

WW_CoolTrainerEligible_2:
# 159 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Intro_Short, MSGBOX_YESNO
	goto WW_CoolTrainerEligible_1

WW_CoolTrainerEligible_5:
# 165 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerEligible_Text_0
# 166 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WW_ACE_TRAINER, WW_Text_CoolTrainerDefeated
# 167 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerPostBattle
	return


WW_CoolTrainerPostBattle::
# 192 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerReward
# 193 "data/maps/WindyWoods/scripts.pory"
	switch VAR_STARTER_MON
# 194 "data/maps/WindyWoods/scripts.pory"
	case SPECIES_ROWLET, WW_CoolTrainerPostBattle_3
# 196 "data/maps/WindyWoods/scripts.pory"
	case SPECIES_TORCHIC, WW_CoolTrainerPostBattle_4
# 198 "data/maps/WindyWoods/scripts.pory"
	case SPECIES_PIPLUP, WW_CoolTrainerPostBattle_5
WW_CoolTrainerPostBattle_1:
	checkitemspace VAR_TEMP_0
# 0 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WW_CoolTrainerPostBattle_7
WW_CoolTrainerPostBattle_6:
# 204 "data/maps/WindyWoods/scripts.pory"
	giveitem VAR_TEMP_0
# 205 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 206 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerPostBattle_Text_0
# 207 "data/maps/WindyWoods/scripts.pory"
	addbp 10
# 208 "data/maps/WindyWoods/scripts.pory"
	call BpReward
# 209 "data/maps/WindyWoods/scripts.pory"
	release
	return

WW_CoolTrainerPostBattle_3:
# 195 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_MIRACLE_SEED
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_4:
# 197 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_CHARCOAL
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_5:
# 199 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_MYSTIC_WATER
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_7:
# 202 "data/maps/WindyWoods/scripts.pory"
	goto ZeBagIsFull
	goto WW_CoolTrainerPostBattle_6


WW_HelpGirl::
# 223 "data/maps/WindyWoods/scripts.pory"
	lock
# 224 "data/maps/WindyWoods/scripts.pory"
	safefollow
# 225 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_SOUTH
# 226 "data/maps/WindyWoods/scripts.pory"
	playse SE_PIN
# 227 "data/maps/WindyWoods/scripts.pory"
	exclamationmark 5
# 228 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 229 "data/maps/WindyWoods/scripts.pory"
	clearflag FLAG_TEMP_2
# 230 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
# 231 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help, MSGBOX_AUTOCLOSE
	return


WW_LittleGirl::
# 235 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_NOT_STARTED
	goto_if_eq WW_LittleGirl_1
# 241 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help2, MSGBOX_NPC
	return

WW_LittleGirl_1:
# 236 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
# 237 "data/maps/WindyWoods/scripts.pory"
	clearflag FLAG_TEMP_2
# 238 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help, MSGBOX_NPC
	return


WW_RocketStop1::
# 257 "data/maps/WindyWoods/scripts.pory"
	lock
# 258 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 259 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_1ST_STEP_TAKEN
# 260 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop1_Text_0, MSGBOX_SIGN
	return


WW_RocketStop2::
# 263 "data/maps/WindyWoods/scripts.pory"
	lock
# 264 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
# 265 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop2_Text_0, MSGBOX_SIGN
	return


WW_RocketStop3::
# 268 "data/maps/WindyWoods/scripts.pory"
	lock
# 269 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop3_Text_0
# 270 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WW_ROCKET, WW_Text_RocketDefeated
# 271 "data/maps/WindyWoods/scripts.pory"
	goto WW_RockPostBattle
	return


WW_RockPostBattle::
# 277 "data/maps/WindyWoods/scripts.pory"
	lock
# 278 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketReward, MSGBOX_AUTOCLOSE
# 279 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
# 280 "data/maps/WindyWoods/scripts.pory"
	warp MAP_WINDY_WOODS, 40, 13
# 281 "data/maps/WindyWoods/scripts.pory"
	waitstate
# 282 "data/maps/WindyWoods/scripts.pory"
	release
	return


WW_BridgeScene2::
# 285 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 286 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_LittleGirlReward, MSGBOX_AUTOCLOSE
# 287 "data/maps/WindyWoods/scripts.pory"
	delay 40
# 288 "data/maps/WindyWoods/scripts.pory"
	applymovement 12, WW_DevonEnters
# 289 "data/maps/WindyWoods/scripts.pory"
	waitmovement 0
# 290 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_SOUTH
# 291 "data/maps/WindyWoods/scripts.pory"
	msgbox DevonTalk1
# 292 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_EAST
# 293 "data/maps/WindyWoods/scripts.pory"
	turnobject 12, DIR_EAST
	checkplayergender
# 0 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WW_BridgeScene2_2
# 298 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_BridgeScene2_Text_1
WW_BridgeScene2_1:
# 300 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_DevonReward
# 301 "data/maps/WindyWoods/scripts.pory"
	giveitem ITEM_LETTER
# 302 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_DevonTalk2, MSGBOX_AUTOCLOSE
# 303 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 304 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 305 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 306 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_2
# 307 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_3
# 308 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 309 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 310 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 311 "data/maps/WindyWoods/scripts.pory"
	release
	end

WW_BridgeScene2_2:
# 295 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_BridgeScene2_Text_0
	goto WW_BridgeScene2_1


# 321 "data/maps/WindyWoods/scripts.pory"
WW_DevonEnters:
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 322 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 323 "data/maps/WindyWoods/scripts.pory"
	face_up
	step_end

WW_Grotto_Entrance::
# 337 "data/maps/WindyWoods/scripts.pory"
	lock
# 338 "data/maps/WindyWoods/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 339 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WW_Grotto_Entrance_2
# 343 "data/maps/WindyWoods/scripts.pory"
	warp MAP_WW_GROTTO, 6, 19
# 344 "data/maps/WindyWoods/scripts.pory"
	waitstate
# 345 "data/maps/WindyWoods/scripts.pory"
	release
	return

WW_Grotto_Entrance_2:
# 340 "data/maps/WindyWoods/scripts.pory"
	release
	end


WindyWoodsNurse::
# 354 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_NURSE
	goto_if 1, WindyWoodsNurse_2
# 361 "data/maps/WindyWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_GIRL, FALSE
# 362 "data/maps/WindyWoods/scripts.pory"
	faceplayer
# 363 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoodsNurse_Text_2
# 364 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WW_NURSE, WindyWoodsNurse_Text_3
# 365 "data/maps/WindyWoods/scripts.pory"
	goto WindyWoodsNurse
	return

WindyWoodsNurse_2:
# 355 "data/maps/WindyWoods/scripts.pory"
	faceplayer
# 356 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoodsNurse_Text_0, MSGBOX_AUTOCLOSE
# 357 "data/maps/WindyWoods/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 358 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoodsNurse_Text_1, MSGBOX_AUTOCLOSE
	end


HiddenGrottoIntro1::
# 369 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, 1
# 370 "data/maps/WindyWoods/scripts.pory"
	goto HiddenGrottoIntroMain
	return


HiddenGrottoIntro2::
# 373 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, 2
# 374 "data/maps/WindyWoods/scripts.pory"
	goto HiddenGrottoIntroMain
	return


HiddenGrottoIntroScientist::
# 377 "data/maps/WindyWoods/scripts.pory"
	compare VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_TALKED_TO_AIDE
	goto_if_eq HiddenGrottoIntroScientist_2
# 381 "data/maps/WindyWoods/scripts.pory"
	compare STORY_HIDDEN_GROTTO_ENTERED_HIDDEN_GROTTO, 0
	goto_if_ne HiddenGrottoIntroScientist_3
HiddenGrottoIntroScientist_1:
# 384 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, 3
# 385 "data/maps/WindyWoods/scripts.pory"
	goto HiddenGrottoIntroMain
	return

HiddenGrottoIntroScientist_2:
# 378 "data/maps/WindyWoods/scripts.pory"
	msgbox HiddenGrottoIntroScientist_Text, MSGBOX_NPC
	end

HiddenGrottoIntroScientist_3:
# 382 "data/maps/WindyWoods/scripts.pory"
	goto WW_HiddenGrottoExitIntro
	goto HiddenGrottoIntroScientist_1


HiddenGrottoIntroMain::
# 394 "data/maps/WindyWoods/scripts.pory"
	switch VAR_TEMP_0
# 395 "data/maps/WindyWoods/scripts.pory"
	case 1, HiddenGrottoIntroMain_3
# 400 "data/maps/WindyWoods/scripts.pory"
	case 2, HiddenGrottoIntroMain_4
HiddenGrottoIntroMain_1:
# 406 "data/maps/WindyWoods/scripts.pory"
	msgbox HiddenGrottoIntro_Text, MSGBOX_AUTOCLOSE
# 407 "data/maps/WindyWoods/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 408 "data/maps/WindyWoods/scripts.pory"
	applymovement LOCALID_WW_SCIENTIST, WWScientistMove
# 409 "data/maps/WindyWoods/scripts.pory"
	switch VAR_TEMP_0
# 410 "data/maps/WindyWoods/scripts.pory"
	case 1, HiddenGrottoIntroMain_7
# 411 "data/maps/WindyWoods/scripts.pory"
	case 2, HiddenGrottoIntroMain_8
# 412 "data/maps/WindyWoods/scripts.pory"
	case 3, HiddenGrottoIntroMain_9
HiddenGrottoIntroMain_5:
# 414 "data/maps/WindyWoods/scripts.pory"
	waitmovementall
# 415 "data/maps/WindyWoods/scripts.pory"
	msgbox HiddenGrottoIntro_Text2, MSGBOX_AUTOCLOSE
# 416 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_TALKED_TO_AIDE
# 417 "data/maps/WindyWoods/scripts.pory"
	setobjectxyperm LOCALID_WW_SCIENTIST, 51, 4
# 418 "data/maps/WindyWoods/scripts.pory"
	setobjectmovementtype LOCALID_WW_SCIENTIST, MOVEMENT_TYPE_FACE_RIGHT
# 419 "data/maps/WindyWoods/scripts.pory"
	fadedefaultbgm
# 420 "data/maps/WindyWoods/scripts.pory"
	release
	return

HiddenGrottoIntroMain_3:
# 396 "data/maps/WindyWoods/scripts.pory"
	playse SE_PIN
# 397 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_WW_SCIENTIST, DIR_NORTH
# 398 "data/maps/WindyWoods/scripts.pory"
	exclamationmark LOCALID_WW_SCIENTIST
# 399 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_SOUTH
	goto HiddenGrottoIntroMain_1

HiddenGrottoIntroMain_4:
# 401 "data/maps/WindyWoods/scripts.pory"
	playse SE_PIN
# 402 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_WW_SCIENTIST, DIR_SOUTH
# 403 "data/maps/WindyWoods/scripts.pory"
	exclamationmark LOCALID_WW_SCIENTIST
# 404 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto HiddenGrottoIntroMain_1

HiddenGrottoIntroMain_7:
# 410 "data/maps/WindyWoods/scripts.pory"
	applymovement LOCALID_PLAYER, HiddenGrottoIntroMain_Movement_0
	goto HiddenGrottoIntroMain_5

HiddenGrottoIntroMain_8:
# 411 "data/maps/WindyWoods/scripts.pory"
	applymovement LOCALID_PLAYER, HiddenGrottoIntroMain_Movement_1
	goto HiddenGrottoIntroMain_5

HiddenGrottoIntroMain_9:
# 412 "data/maps/WindyWoods/scripts.pory"
	applymovement LOCALID_PLAYER, HiddenGrottoIntroMain_Movement_2
	goto HiddenGrottoIntroMain_5


# 445 "data/maps/WindyWoods/scripts.pory"
WWScientistMove:
# 446 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 447 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 448 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 448 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 448 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 449 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 449 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 450 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 451 "data/maps/WindyWoods/scripts.pory"
	walk_in_place_fast_right
	step_end

WW_HiddenGrottoExitIntro::
# 455 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_7, 0
# 456 "data/maps/WindyWoods/scripts.pory"
	delay 16
# 457 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 458 "data/maps/WindyWoods/scripts.pory"
	delay 8
# 459 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_HiddenGrottoExitIntro_Text
# 460 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_HiddenGrottoExitIntro_Text2, MSGBOX_AUTOCLOSE
# 461 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 462 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 463 "data/maps/WindyWoods/scripts.pory"
	removeobject LOCALID_WW_SCIENTIST
# 464 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 465 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_HIDDEN_GROTTO_INTRO, STORY_HIDDEN_GROTTO_COMPLETE
# 466 "data/maps/WindyWoods/scripts.pory"
	release
	end


# 410 "data/maps/WindyWoods/scripts.pory"
HiddenGrottoIntroMain_Movement_0:
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_down
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 410 "data/maps/WindyWoods/scripts.pory"
	walk_left
	step_end

# 411 "data/maps/WindyWoods/scripts.pory"
HiddenGrottoIntroMain_Movement_1:
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 411 "data/maps/WindyWoods/scripts.pory"
	walk_left
	step_end

# 412 "data/maps/WindyWoods/scripts.pory"
HiddenGrottoIntroMain_Movement_2:
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_up
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 412 "data/maps/WindyWoods/scripts.pory"
	walk_left
	step_end

WW_CoolTrainer_Text_0:
# 135 "data/maps/WindyWoods/scripts.pory"
	.string "Simply spectacular.$"

WW_CoolTrainer_Text_1:
# 151 "data/maps/WindyWoods/scripts.pory"
	.string "All I see are weaklings.\pProve to me that you're not\na weakling and we'll talk.$"

WW_CoolTrainerEligible_Text_0:
# 165 "data/maps/WindyWoods/scripts.pory"
	.string "Good.$"

WW_CoolTrainerEligible_Text_1:
# 171 "data/maps/WindyWoods/scripts.pory"
	.string "Then stop wasting my time.$"

WW_CoolTrainerPostBattle_Text_0:
# 206 "data/maps/WindyWoods/scripts.pory"
	.string "Give that item to your Pokémon to\nboost the power of their attacks.\pTake these as well.$"

WW_RocketStop1_Text_0:
# 260 "data/maps/WindyWoods/scripts.pory"
	.string "That's far enough, pal.$"

WW_RocketStop2_Text_0:
# 265 "data/maps/WindyWoods/scripts.pory"
	.string "I'm warning you!$"

WW_RocketStop3_Text_0:
# 269 "data/maps/WindyWoods/scripts.pory"
	.string "Okay, now you're asking for trouble!$"

WW_BridgeScene2_Text_0:
# 295 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: This brave boy saved me!$"

WW_BridgeScene2_Text_1:
# 298 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: This brave girl saved me!$"

WindyWoodsNurse_Text_0:
# 356 "data/maps/WindyWoods/scripts.pory"
	.string "Your Pokémon seem a bit worn out.\nHere, let me see to them.$"

WindyWoodsNurse_Text_1:
# 358 "data/maps/WindyWoods/scripts.pory"
	.string "Be careful out there.$"

WindyWoodsNurse_Text_2:
# 363 "data/maps/WindyWoods/scripts.pory"
	.string "I'm studying to one day\nbe a full-fledged nurse.\pI'll heal up your Pokémon if you\ncan defeat me in battle. $"

WindyWoodsNurse_Text_3:
# 364 "data/maps/WindyWoods/scripts.pory"
	.string "So strong!$"

WindyWoods_Bugcatcher1Intro::
# 41 "data/maps/WindyWoods/scripts.pory"
	.string "This place is a bug catcher's dream!$"

WindyWoods_Bugcatcher1Defeated::
# 44 "data/maps/WindyWoods/scripts.pory"
	.string "Should've waited for my\nPokémon to evolve…$"

WindyWoods_Bugcatcher1PostBattle::
# 47 "data/maps/WindyWoods/scripts.pory"
	.string "You got lucky I didn't have time\nto fully evolve my Pokémon.$"

WindyWoods_Girl2Intro::
# 56 "data/maps/WindyWoods/scripts.pory"
	.string "Eek!\pNo, you did not just\nsee me playing in the puddle!$"

WindyWoods_Girl2Defeated::
# 59 "data/maps/WindyWoods/scripts.pory"
	.string "Please keep this a secret…$"

WindyWoods_Girl2PostBattle::
# 62 "data/maps/WindyWoods/scripts.pory"
	.string "Please don't tell anyone that\nI'm playing in the puddle!\lI have a reputation to uphold…$"

WindyWoods_Bugcatcher2Intro::
# 71 "data/maps/WindyWoods/scripts.pory"
	.string "I wanna be the very best!$"

WindyWoods_Bugcatcher2Defeated::
# 74 "data/maps/WindyWoods/scripts.pory"
	.string "Should've trained harder for my cause…$"

WindyWoods_Bugcatcher2PostBattle::
# 77 "data/maps/WindyWoods/scripts.pory"
	.string "I will travel across the land,\nsearching for new bug Pokémon.$"

WindyWoods_CamperIntro::
# 86 "data/maps/WindyWoods/scripts.pory"
	.string "Shoo! This is my camping spot!$"

WindyWoods_CamperDefeated::
# 89 "data/maps/WindyWoods/scripts.pory"
	.string "I relent…$"

WindyWoods_CamperPostBattle::
# 92 "data/maps/WindyWoods/scripts.pory"
	.string "I thought of setting up a camp here\nbut then this downpour started…$"

WindyWoods_LassIntro::
# 101 "data/maps/WindyWoods/scripts.pory"
	.string "One person already dashed past me\n"
	.string "when I tried challenging them to a\l"
	.string "Pokémon battle.\p"
	.string "I will not let another pass!$"

WindyWoods_LassDefeated::
# 107 "data/maps/WindyWoods/scripts.pory"
	.string "Why can I never win?!$"

WindyWoods_LassPostBattle::
# 110 "data/maps/WindyWoods/scripts.pory"
	.string "Maybe I need to pick my battles\n"
	.string "more carefully…$"

WindyWoods_YoungsterIntro::
# 120 "data/maps/WindyWoods/scripts.pory"
	.string "This place is giving me the creeps…$"

WindyWoods_YoungsterDefeated::
# 123 "data/maps/WindyWoods/scripts.pory"
	.string "Fine, you win, I guess…$"

WindyWoods_YoungsterPostBattle::
# 126 "data/maps/WindyWoods/scripts.pory"
	.string "I saw this really scary looking guy\npass by me a short while ago.\pHe was dragging a Poochyena on a leash\nbut it looked reluctant to follow.$"

WW_CoolTrainer_Intro_Short::
# 175 "data/maps/WindyWoods/scripts.pory"
	.string "Are you ready for a duel?$"

WW_CoolTrainer_Intro::
# 178 "data/maps/WindyWoods/scripts.pory"
	.string "I see you're not a completely\n"
	.string "lost cause.\p"
	.string "That means you are worthy of my time.\p"
	.string "Care for a Pokémon Battle?\p"
	.string "I warn you, I'm no weakling.$"

WW_Text_CoolTrainerDefeated::
# 186 "data/maps/WindyWoods/scripts.pory"
	.string "Maybe it was I who wasn't worth\n"
	.string "your time…$"

WW_CoolTrainerReward::
# 212 "data/maps/WindyWoods/scripts.pory"
	.string "Well, looks like I got humbled there.\nHere, you deserve this.$"

WW_Help::
# 244 "data/maps/WindyWoods/scripts.pory"
	.string "Please help!\p"
	.string "I was taking my daddy's Poochyena for\n"
	.string "a walk when some mean guy stole it!\p"
	.string "He ran somewhere across this bridge\n"
	.string "but I have no other Pokémon so\l"
	.string "I'm too scared to follow…$"

WW_Help2::
# 252 "data/maps/WindyWoods/scripts.pory"
	.string "Please help…$"

WW_Text_RocketDefeated::
# 273 "data/maps/WindyWoods/scripts.pory"
	.string "Tch…!$"

WW_RocketReward::
# 314 "data/maps/WindyWoods/scripts.pory"
	.string "You want the Poochyena?\nFine, take it.\pIt was too weak for me\nto care about it anyway.$"

WW_LittleGirlReward::
# 318 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: Thank you for getting\nPoochie back!\pI wasn't sure if I would\never see him again…$"

DevonTalk1::
# 326 "data/maps/WindyWoods/scripts.pory"
	.string "Father: Thank god you're safe, honey!$"

WW_DevonReward::
# 329 "data/maps/WindyWoods/scripts.pory"
	.string "Father: Thank you for helping my\ndaughter and saving our family pet.\pI don't have much to offer you\nbut here, take this.$"

WW_DevonTalk2::
# 332 "data/maps/WindyWoods/scripts.pory"
	.string "I work for the Devon Corp.\pShow that letter to the receptionist\nat our offices in Shoreslate City and\lI'm sure they'll reward you.\pThank you again for taking care\nof the situation.\pAlthough, I am a bit concerned about\nthis person clad in dark.\pThe way you described him sounded like\nhe could be a Team Rocket member.\pHowever, Team Rocket was disbanded\nyears ago…\pAnyway, we should head back home.$"

GoInsideGrotto::
# 347 "data/maps/WindyWoods/scripts.pory"
	.string "There looks to be a narrow path\n"
	.string "between the trees!\p"
	.string "Follow the path?$"

HiddenGrottoIntroScientist_Text::
# 388 "data/maps/WindyWoods/scripts.pory"
	.string "Go on, see if you can find\n"
	.string "a Pokémon in there.$"

HiddenGrottoIntro_Text::
# 423 "data/maps/WindyWoods/scripts.pory"
	.string "Hello, I'm one of Prof. Birch's\n"
	.string "aides.\p"
	.string "I'm here to study hidden grottos and\n"
	.string "the Pokémon found in them.\p"
	.string "I bet a trainer such as yourself must\n"
	.string "be curious about this phenomenon\l"
	.string "as well!\p"
	.string "Here, let me show you.$"

HiddenGrottoIntro_Text2::
# 434 "data/maps/WindyWoods/scripts.pory"
	.string "Look here, there's a patch of\n"
	.string "grass between these trees.\p"
	.string "If you crawl in this small space,\n"
	.string "you should be able to find a small\l"
	.string "hidden grotto inhabited by a Pokémon.\p"
	.string "I already finished recording this\n"
	.string "hidden grotto, so don't feel bad about\l"
	.string "capturing the Pokémon within.$"

WW_HiddenGrottoExitIntro_Text::
# 470 "data/maps/WindyWoods/scripts.pory"
	.string "You're back! Did you manage to\n"
	.string "find a Pokémon in there?\p"
	.string "While many of the Pokémon you\n"
	.string "can find in the grottos are\l"
	.string "commonly found elsewhere,\l"
	.string "what makes these Pokémon special is\l"
	.string "that many of them come with\l"
	.string "special abilities that can't be\l"
	.string "found in the wild.$"

WW_HiddenGrottoExitIntro_Text2::
# 482 "data/maps/WindyWoods/scripts.pory"
	.string "Anyway, I am off to find more\n"
	.string "hidden grottos so I may study\l"
	.string "the Pokémon found in them.\p"
	.string "Do keep an eye out for them\n"
	.string "as well.\p"
	.string "While hidden grottos are\n"
	.string "generally found inbetween trees,\l"
	.string "some may be harder to spot than\l"
	.string "others.$"
