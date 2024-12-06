WindyWoods_MapScripts::
# 2 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 16 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 17 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_LANDMARK_WINDY_WOODS
# 4 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
	goto_if_ne WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 11 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	goto_if_ge WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_1
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 8 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_2
# 9 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_3
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 13 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 12 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
	goto_if_le WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 16 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_WINDYWOODS_STATE, 4, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 16 "data/maps/WindyWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_WINDYWOODS_STATE, 4, WW_BridgeScene2
	.2byte 0


WindyWoods_Bugcatcher1::
# 21 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_BUGCATCHER, WindyWoods_Bugcatcher1Intro, WindyWoods_Bugcatcher1Defeated
# 22 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Bugcatcher1PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Girl2::
# 36 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_LADY, WindyWoods_Girl2Intro, WindyWoods_Girl2Defeated
# 37 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Girl2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Bugcatcher2::
# 51 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_BUGCATCHER_2, WindyWoods_Bugcatcher2Intro, WindyWoods_Bugcatcher2Defeated
# 52 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Bugcatcher2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Camper::
# 66 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_CAMPER, WindyWoods_CamperIntro, WindyWoods_CamperDefeated
# 67 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_CamperPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Lass::
# 81 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_LASS, WindyWoods_LassIntro, WindyWoods_LassDefeated
# 82 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_LassPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Youngster::
# 96 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_YOUNGSTER, WindyWoods_YoungsterIntro, WindyWoods_YoungsterDefeated
# 97 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


WW_CoolTrainer::
# 113 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 1, WW_CoolTrainer_2
WW_CoolTrainer_1:
# 122 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_BUGCATCHER
	goto_if 1, WW_CoolTrainer_7
WW_CoolTrainer_5:
# 131 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Text_1, MSGBOX_NPC
	return

WW_CoolTrainer_2:
# 114 "data/maps/WindyWoods/scripts.pory"
	goto_if_set FLAG_WW_COOLTRAINERREWARD, WW_CoolTrainer_17
# 119 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerPostBattle
	goto WW_CoolTrainer_1

WW_CoolTrainer_4:
# 128 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerEligible
	return

WW_CoolTrainer_6:
# 124 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_BUGCATCHER_2
	goto_if 1, WW_CoolTrainer_11
	goto WW_CoolTrainer_5

WW_CoolTrainer_7:
# 123 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_LADY
	goto_if 1, WW_CoolTrainer_6
	goto WW_CoolTrainer_5

WW_CoolTrainer_10:
# 126 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_LASS
	goto_if 1, WW_CoolTrainer_14
	goto WW_CoolTrainer_5

WW_CoolTrainer_11:
# 125 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_CAMPER
	goto_if 1, WW_CoolTrainer_10
	goto WW_CoolTrainer_5

WW_CoolTrainer_14:
# 127 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_YOUNGSTER
	goto_if 1, WW_CoolTrainer_4
	goto WW_CoolTrainer_5

WW_CoolTrainer_17:
# 115 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Text_0, MSGBOX_NPC
	end


WW_CoolTrainerEligible::
# 136 "data/maps/WindyWoods/scripts.pory"
	lock
# 137 "data/maps/WindyWoods/scripts.pory"
	faceplayer
# 138 "data/maps/WindyWoods/scripts.pory"
	goto_if_set FLAG_TEMP_4, WW_CoolTrainerEligible_2
# 142 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Intro, MSGBOX_YESNO
WW_CoolTrainerEligible_1:
# 144 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WW_CoolTrainerEligible_5
# 150 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_4
# 151 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerEligible_Text_1, MSGBOX_NPC
	return

WW_CoolTrainerEligible_2:
# 139 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Intro_Short, MSGBOX_YESNO
	goto WW_CoolTrainerEligible_1

WW_CoolTrainerEligible_5:
# 145 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerEligible_Text_0
# 146 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WW_ACE_TRAINER, WW_Text_CoolTrainerDefeated
# 147 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerPostBattle
	return


WW_CoolTrainerPostBattle::
# 172 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerReward
# 173 "data/maps/WindyWoods/scripts.pory"
	switch VAR_STARTER_MON
# 174 "data/maps/WindyWoods/scripts.pory"
	case 0, WW_CoolTrainerPostBattle_3
# 176 "data/maps/WindyWoods/scripts.pory"
	case 1, WW_CoolTrainerPostBattle_4
# 178 "data/maps/WindyWoods/scripts.pory"
	case 2, WW_CoolTrainerPostBattle_5
WW_CoolTrainerPostBattle_1:
	checkitemspace VAR_TEMP_0
# 0 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne WW_CoolTrainerPostBattle_7
WW_CoolTrainerPostBattle_6:
# 184 "data/maps/WindyWoods/scripts.pory"
	giveitem VAR_TEMP_0
# 185 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 186 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerPostBattle_Text_0
# 187 "data/maps/WindyWoods/scripts.pory"
	addbp 10
# 188 "data/maps/WindyWoods/scripts.pory"
	call BpReward
# 189 "data/maps/WindyWoods/scripts.pory"
	release
	return

WW_CoolTrainerPostBattle_3:
# 175 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_MIRACLE_SEED
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_4:
# 177 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_CHARCOAL
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_5:
# 179 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_MYSTIC_WATER
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_7:
# 182 "data/maps/WindyWoods/scripts.pory"
	goto ZeBagIsFull
	goto WW_CoolTrainerPostBattle_6


WW_HelpGirl::
# 209 "data/maps/WindyWoods/scripts.pory"
	lock
# 210 "data/maps/WindyWoods/scripts.pory"
	safefollow
# 211 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_SOUTH
# 212 "data/maps/WindyWoods/scripts.pory"
	playse SE_PIN
# 213 "data/maps/WindyWoods/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 214 "data/maps/WindyWoods/scripts.pory"
	waitmovement 0
# 215 "data/maps/WindyWoods/scripts.pory"
	delay 48
# 216 "data/maps/WindyWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 217 "data/maps/WindyWoods/scripts.pory"
	clearflag FLAG_TEMP_2
# 218 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
# 219 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help
# 220 "data/maps/WindyWoods/scripts.pory"
	waitmessage
# 221 "data/maps/WindyWoods/scripts.pory"
	releaseall
	return


WW_LittleGirl::
# 225 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_NOT_STARTED
	goto_if_eq WW_LittleGirl_1
# 231 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help2, MSGBOX_NPC
	return

WW_LittleGirl_1:
# 226 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
# 227 "data/maps/WindyWoods/scripts.pory"
	clearflag FLAG_TEMP_2
# 228 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help, MSGBOX_NPC
	return


WW_RocketStop1::
# 247 "data/maps/WindyWoods/scripts.pory"
	lock
# 248 "data/maps/WindyWoods/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 249 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_1ST_STEP_TAKEN
# 250 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop1_Text_0, MSGBOX_SIGN
	return


WW_RocketStop2::
# 253 "data/maps/WindyWoods/scripts.pory"
	lock
# 254 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
# 255 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop2_Text_0, MSGBOX_SIGN
	return


WW_RocketStop3::
# 258 "data/maps/WindyWoods/scripts.pory"
	lock
# 259 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop3_Text_0
# 260 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, WW_Text_RocketDefeated
# 261 "data/maps/WindyWoods/scripts.pory"
	goto WW_RockPostBattle
	return


WW_RockPostBattle::
# 267 "data/maps/WindyWoods/scripts.pory"
	lock
# 268 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketReward
# 269 "data/maps/WindyWoods/scripts.pory"
	closemessage
# 270 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
# 271 "data/maps/WindyWoods/scripts.pory"
	warp MAP_WINDY_WOODS, 37, 13
# 272 "data/maps/WindyWoods/scripts.pory"
	waitstate
# 273 "data/maps/WindyWoods/scripts.pory"
	release
	return


WW_BridgeScene2::
# 276 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 277 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_LittleGirlReward
# 278 "data/maps/WindyWoods/scripts.pory"
	closemessage
# 279 "data/maps/WindyWoods/scripts.pory"
	delay 40
# 280 "data/maps/WindyWoods/scripts.pory"
	applymovement 12, WW_DevonEnters
# 281 "data/maps/WindyWoods/scripts.pory"
	waitmovement 0
# 282 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_SOUTH
# 283 "data/maps/WindyWoods/scripts.pory"
	msgbox DevonTalk1
# 284 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_WEST
# 285 "data/maps/WindyWoods/scripts.pory"
	turnobject 12, DIR_WEST
	checkplayergender
# 0 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WW_BridgeScene2_2
# 290 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_BridgeScene2_Text_1
WW_BridgeScene2_1:
# 292 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_DevonReward
# 293 "data/maps/WindyWoods/scripts.pory"
	giveitem ITEM_LETTER
# 294 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_DevonTalk2
# 295 "data/maps/WindyWoods/scripts.pory"
	closemessage
# 296 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 297 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 298 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 299 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_2
# 300 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_3
# 301 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, 5
# 302 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 303 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 304 "data/maps/WindyWoods/scripts.pory"
	release
	end

WW_BridgeScene2_2:
# 287 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_BridgeScene2_Text_0
	goto WW_BridgeScene2_1


# 314 "data/maps/WindyWoods/scripts.pory"
WW_DevonEnters:
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 315 "data/maps/WindyWoods/scripts.pory"
	walk_right
# 316 "data/maps/WindyWoods/scripts.pory"
	face_up
	step_end

WW_Grotto_Entrance::
# 330 "data/maps/WindyWoods/scripts.pory"
	lock
# 331 "data/maps/WindyWoods/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 332 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WW_Grotto_Entrance_2
# 336 "data/maps/WindyWoods/scripts.pory"
	warp MAP_WW_GROTTO, 6, 19
# 337 "data/maps/WindyWoods/scripts.pory"
	waitstate
# 338 "data/maps/WindyWoods/scripts.pory"
	release
	return

WW_Grotto_Entrance_2:
# 333 "data/maps/WindyWoods/scripts.pory"
	release
	end


# 346 "data/maps/WindyWoods/scripts.pory"
FacePlayer:
# 347 "data/maps/WindyWoods/scripts.pory"
	face_player
	step_end

WW_CoolTrainer_Text_0:
# 115 "data/maps/WindyWoods/scripts.pory"
	.string "Simply spectacular.$"

WW_CoolTrainer_Text_1:
# 131 "data/maps/WindyWoods/scripts.pory"
	.string "All I see are weaklings.\pProve to me that you're not\na weakling and we'll talk.$"

WW_CoolTrainerEligible_Text_0:
# 145 "data/maps/WindyWoods/scripts.pory"
	.string "Good.$"

WW_CoolTrainerEligible_Text_1:
# 151 "data/maps/WindyWoods/scripts.pory"
	.string "Then stop wasting my time.$"

WW_CoolTrainerPostBattle_Text_0:
# 186 "data/maps/WindyWoods/scripts.pory"
	.string "Give that item to your Pokémon to\nboost the power of their attacks.\pTake these as well.$"

WW_RocketStop1_Text_0:
# 250 "data/maps/WindyWoods/scripts.pory"
	.string "That's far enough, pal.$"

WW_RocketStop2_Text_0:
# 255 "data/maps/WindyWoods/scripts.pory"
	.string "I'm warning you!$"

WW_RocketStop3_Text_0:
# 259 "data/maps/WindyWoods/scripts.pory"
	.string "Okay, now you're asking for trouble!$"

WW_BridgeScene2_Text_0:
# 287 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: This brave boy saved me!$"

WW_BridgeScene2_Text_1:
# 290 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: This brave girl saved me!$"

WindyWoods_Bugcatcher1Intro::
# 25 "data/maps/WindyWoods/scripts.pory"
	.string "This place is a bug catcher's dream!$"

WindyWoods_Bugcatcher1Defeated::
# 28 "data/maps/WindyWoods/scripts.pory"
	.string "Should've waited for my\nPokémon to evolve…$"

WindyWoods_Bugcatcher1PostBattle::
# 31 "data/maps/WindyWoods/scripts.pory"
	.string "You got lucky I didn't have time\nto fully evolve my Pokémon.$"

WindyWoods_Girl2Intro::
# 40 "data/maps/WindyWoods/scripts.pory"
	.string "Eek!\pNo, you did not just\nsee me playing in the puddle!$"

WindyWoods_Girl2Defeated::
# 43 "data/maps/WindyWoods/scripts.pory"
	.string "Please keep this a secret…$"

WindyWoods_Girl2PostBattle::
# 46 "data/maps/WindyWoods/scripts.pory"
	.string "Please don't tell anyone that\nI'm playing in the puddle!\lI have a reputation to uphold…$"

WindyWoods_Bugcatcher2Intro::
# 55 "data/maps/WindyWoods/scripts.pory"
	.string "I wanna be the very best!$"

WindyWoods_Bugcatcher2Defeated::
# 58 "data/maps/WindyWoods/scripts.pory"
	.string "Should've trained harder for my cause…$"

WindyWoods_Bugcatcher2PostBattle::
# 61 "data/maps/WindyWoods/scripts.pory"
	.string "I will travel across the land,\nsearching for new bug Pokémon.$"

WindyWoods_CamperIntro::
# 70 "data/maps/WindyWoods/scripts.pory"
	.string "Shoo! This is my camping spot!$"

WindyWoods_CamperDefeated::
# 73 "data/maps/WindyWoods/scripts.pory"
	.string "I relent…$"

WindyWoods_CamperPostBattle::
# 76 "data/maps/WindyWoods/scripts.pory"
	.string "I thought of setting up a camp here\nbut then this downpour started…$"

WindyWoods_LassIntro::
# 85 "data/maps/WindyWoods/scripts.pory"
	.string "Have you seen any hidden grottos?$"

WindyWoods_LassDefeated::
# 88 "data/maps/WindyWoods/scripts.pory"
	.string "Why can I never win!?$"

WindyWoods_LassPostBattle::
# 91 "data/maps/WindyWoods/scripts.pory"
	.string "I'm looking for a hidden grotto but\nas the name would suggest,\lit truly is hidden.$"

WindyWoods_YoungsterIntro::
# 100 "data/maps/WindyWoods/scripts.pory"
	.string "This place is giving me the creeps…$"

WindyWoods_YoungsterDefeated::
# 103 "data/maps/WindyWoods/scripts.pory"
	.string "Fine, you win, I guess…$"

WindyWoods_YoungsterPostBattle::
# 106 "data/maps/WindyWoods/scripts.pory"
	.string "I saw this really scary looking guy\nto the northwest earlier.\pHe was dragging a Poochyena on a leash\nbut it looked reluctant to follow.$"

WW_CoolTrainer_Intro_Short::
# 155 "data/maps/WindyWoods/scripts.pory"
	.string "Are you ready for a duel?$"

WW_CoolTrainer_Intro::
# 158 "data/maps/WindyWoods/scripts.pory"
	.string "I see you're not a completely\n"
	.string "lost cause.\p"
	.string "That means you are worthy of my time.\p"
	.string "Care for a Pokémon Battle?\p"
	.string "I warn you, I'm no weakling.$"

WW_Text_CoolTrainerDefeated::
# 166 "data/maps/WindyWoods/scripts.pory"
	.string "Maybe it was I who wasn't worth\n"
	.string "your time…$"

WW_CoolTrainerExplainReward::
# 191 "data/maps/WindyWoods/scripts.pory"
	.string "Turning on that item will grant\n"
	.string "all your Pokémon exp from battling,\l"
	.string "even the ones that never participated\l"
	.string "in the battle.\p"
	.string "I want you to have these as well.$"

WW_CoolTrainerReward::
# 198 "data/maps/WindyWoods/scripts.pory"
	.string "Well, looks like I got humbled there.\nHere, you deserve this.$"

WW_Help::
# 234 "data/maps/WindyWoods/scripts.pory"
	.string "Please help!\p"
	.string "I was taking my daddy's Poochyena for\n"
	.string "a walk when some mean guy stole it!\p"
	.string "He ran somewhere across this bridge\n"
	.string "but I have no other Pokémon so\l"
	.string "I'm too scared to follow…$"

WW_Help2::
# 242 "data/maps/WindyWoods/scripts.pory"
	.string "Please help…$"

WW_Text_RocketDefeated::
# 263 "data/maps/WindyWoods/scripts.pory"
	.string "Tch…!$"

WW_RocketReward::
# 307 "data/maps/WindyWoods/scripts.pory"
	.string "You want the Poochyena?\nFine, take it.\pIt was too weak for me\nto care about it anyway.$"

WW_LittleGirlReward::
# 311 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: Thank you for getting\nPoochie back!\pI wasn't sure if I would\never see him again…$"

DevonTalk1::
# 319 "data/maps/WindyWoods/scripts.pory"
	.string "Father: Thank god you're safe, honey!$"

WW_DevonReward::
# 322 "data/maps/WindyWoods/scripts.pory"
	.string "Father: Thank you for helping my\ndaughter and saving our family pet.\pI don't have much to offer you\nbut here, take this.$"

WW_DevonTalk2::
# 325 "data/maps/WindyWoods/scripts.pory"
	.string "I work for the Devon Corp.\pShow that letter to the receptionist\nat our offices in Shoreslate City and\lI'm sure they'll reward you.\pThank you again for taking care\nof the situation.\pAlthough, I am a bit concerned about\nthis person clad in dark.\pThe way you described him sounded like\nhe could be a Team Rocket member.\pHowever, Team Rocket was disbanded\nyears ago…\pAnyway, we should head back home.$"

GoInsideGrotto::
# 340 "data/maps/WindyWoods/scripts.pory"
	.string "There looks to be a narrow path\n"
	.string "between the trees!\p"
	.string "Follow the path?$"
