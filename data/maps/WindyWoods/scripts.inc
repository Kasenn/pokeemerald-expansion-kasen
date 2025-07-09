WindyWoods_MapScripts::
# 2 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/WindyWoods/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 16 "data/maps/WindyWoods/scripts.pory"
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
	goto_if_ge WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
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

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 11 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
	goto_if_le WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 15 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 15 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 16 "data/maps/WindyWoods/scripts.pory"
	map_script_2 VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED, WW_BridgeScene2
	.2byte 0


WindyWoods_Bugcatcher1::
# 20 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_BUGCATCHER, WindyWoods_Bugcatcher1Intro, WindyWoods_Bugcatcher1Defeated
# 21 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Bugcatcher1PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Girl2::
# 35 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_LADY, WindyWoods_Girl2Intro, WindyWoods_Girl2Defeated
# 36 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Girl2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Bugcatcher2::
# 50 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_BUGCATCHER_2, WindyWoods_Bugcatcher2Intro, WindyWoods_Bugcatcher2Defeated
# 51 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_Bugcatcher2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Camper::
# 65 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_CAMPER, WindyWoods_CamperIntro, WindyWoods_CamperDefeated
# 66 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_CamperPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Lass::
# 80 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_LASS, WindyWoods_LassIntro, WindyWoods_LassDefeated
# 81 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_LassPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Youngster::
# 95 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_single TRAINER_WW_YOUNGSTER, WindyWoods_YoungsterIntro, WindyWoods_YoungsterDefeated
# 96 "data/maps/WindyWoods/scripts.pory"
	msgbox WindyWoods_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


WW_CoolTrainer::
# 112 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 1, WW_CoolTrainer_2
WW_CoolTrainer_1:
# 121 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_BUGCATCHER
	goto_if 1, WW_CoolTrainer_7
WW_CoolTrainer_5:
# 130 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Text_1, MSGBOX_NPC
	return

WW_CoolTrainer_2:
# 113 "data/maps/WindyWoods/scripts.pory"
	goto_if_set FLAG_WW_COOLTRAINERREWARD, WW_CoolTrainer_17
# 118 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerPostBattle
	goto WW_CoolTrainer_1

WW_CoolTrainer_4:
# 127 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerEligible
	return

WW_CoolTrainer_6:
# 123 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_BUGCATCHER_2
	goto_if 1, WW_CoolTrainer_11
	goto WW_CoolTrainer_5

WW_CoolTrainer_7:
# 122 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_LADY
	goto_if 1, WW_CoolTrainer_6
	goto WW_CoolTrainer_5

WW_CoolTrainer_10:
# 125 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_LASS
	goto_if 1, WW_CoolTrainer_14
	goto WW_CoolTrainer_5

WW_CoolTrainer_11:
# 124 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_CAMPER
	goto_if 1, WW_CoolTrainer_10
	goto WW_CoolTrainer_5

WW_CoolTrainer_14:
# 126 "data/maps/WindyWoods/scripts.pory"
	checktrainerflag TRAINER_WW_YOUNGSTER
	goto_if 1, WW_CoolTrainer_4
	goto WW_CoolTrainer_5

WW_CoolTrainer_17:
# 114 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Text_0, MSGBOX_NPC
	end


WW_CoolTrainerEligible::
# 135 "data/maps/WindyWoods/scripts.pory"
	lock
# 136 "data/maps/WindyWoods/scripts.pory"
	faceplayer
# 137 "data/maps/WindyWoods/scripts.pory"
	goto_if_set FLAG_TEMP_4, WW_CoolTrainerEligible_2
# 141 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Intro, MSGBOX_YESNO
WW_CoolTrainerEligible_1:
# 143 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq WW_CoolTrainerEligible_5
# 149 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_TEMP_4
# 150 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerEligible_Text_1, MSGBOX_NPC
	return

WW_CoolTrainerEligible_2:
# 138 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainer_Intro_Short, MSGBOX_YESNO
	goto WW_CoolTrainerEligible_1

WW_CoolTrainerEligible_5:
# 144 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerEligible_Text_0
# 145 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_WW_ACE_TRAINER, WW_Text_CoolTrainerDefeated
# 146 "data/maps/WindyWoods/scripts.pory"
	goto WW_CoolTrainerPostBattle
	return


WW_CoolTrainerPostBattle::
# 171 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerReward
# 172 "data/maps/WindyWoods/scripts.pory"
	switch VAR_STARTER_MON
# 173 "data/maps/WindyWoods/scripts.pory"
	case SPECIES_ROWLET, WW_CoolTrainerPostBattle_3
# 175 "data/maps/WindyWoods/scripts.pory"
	case SPECIES_TORCHIC, WW_CoolTrainerPostBattle_4
# 177 "data/maps/WindyWoods/scripts.pory"
	case SPECIES_PIPLUP, WW_CoolTrainerPostBattle_5
WW_CoolTrainerPostBattle_1:
	checkitemspace VAR_TEMP_0
# 0 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WW_CoolTrainerPostBattle_7
WW_CoolTrainerPostBattle_6:
# 183 "data/maps/WindyWoods/scripts.pory"
	giveitem VAR_TEMP_0
# 184 "data/maps/WindyWoods/scripts.pory"
	setflag FLAG_WW_COOLTRAINERREWARD
# 185 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_CoolTrainerPostBattle_Text_0
# 186 "data/maps/WindyWoods/scripts.pory"
	addbp 10
# 187 "data/maps/WindyWoods/scripts.pory"
	call BpReward
# 188 "data/maps/WindyWoods/scripts.pory"
	release
	return

WW_CoolTrainerPostBattle_3:
# 174 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_MIRACLE_SEED
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_4:
# 176 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_CHARCOAL
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_5:
# 178 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_TEMP_0, ITEM_MYSTIC_WATER
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_7:
# 181 "data/maps/WindyWoods/scripts.pory"
	goto ZeBagIsFull
	goto WW_CoolTrainerPostBattle_6


WW_HelpGirl::
# 202 "data/maps/WindyWoods/scripts.pory"
	lock
# 203 "data/maps/WindyWoods/scripts.pory"
	safefollow
# 204 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_SOUTH
# 205 "data/maps/WindyWoods/scripts.pory"
	playse SE_PIN
# 206 "data/maps/WindyWoods/scripts.pory"
	exclamationmark 5
# 207 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 208 "data/maps/WindyWoods/scripts.pory"
	clearflag FLAG_TEMP_2
# 209 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
# 210 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help, MSGBOX_AUTOCLOSE
	return


WW_LittleGirl::
# 214 "data/maps/WindyWoods/scripts.pory"
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_NOT_STARTED
	goto_if_eq WW_LittleGirl_1
# 220 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help2, MSGBOX_NPC
	return

WW_LittleGirl_1:
# 215 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
# 216 "data/maps/WindyWoods/scripts.pory"
	clearflag FLAG_TEMP_2
# 217 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_Help, MSGBOX_NPC
	return


WW_RocketStop1::
# 236 "data/maps/WindyWoods/scripts.pory"
	lock
# 237 "data/maps/WindyWoods/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 238 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_1ST_STEP_TAKEN
# 239 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop1_Text_0, MSGBOX_SIGN
	return


WW_RocketStop2::
# 242 "data/maps/WindyWoods/scripts.pory"
	lock
# 243 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
# 244 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop2_Text_0, MSGBOX_SIGN
	return


WW_RocketStop3::
# 247 "data/maps/WindyWoods/scripts.pory"
	lock
# 248 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketStop3_Text_0
# 249 "data/maps/WindyWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, WW_Text_RocketDefeated
# 250 "data/maps/WindyWoods/scripts.pory"
	goto WW_RockPostBattle
	return


WW_RockPostBattle::
# 256 "data/maps/WindyWoods/scripts.pory"
	lock
# 257 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_RocketReward, MSGBOX_AUTOCLOSE
# 258 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
# 259 "data/maps/WindyWoods/scripts.pory"
	warp MAP_WINDY_WOODS, 40, 13
# 260 "data/maps/WindyWoods/scripts.pory"
	waitstate
# 261 "data/maps/WindyWoods/scripts.pory"
	release
	return


WW_BridgeScene2::
# 264 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 265 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_LittleGirlReward, MSGBOX_AUTOCLOSE
# 266 "data/maps/WindyWoods/scripts.pory"
	delay 40
# 267 "data/maps/WindyWoods/scripts.pory"
	applymovement 12, WW_DevonEnters
# 268 "data/maps/WindyWoods/scripts.pory"
	waitmovement 0
# 269 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_SOUTH
# 270 "data/maps/WindyWoods/scripts.pory"
	msgbox DevonTalk1
# 271 "data/maps/WindyWoods/scripts.pory"
	turnobject 5, DIR_EAST
# 272 "data/maps/WindyWoods/scripts.pory"
	turnobject 12, DIR_EAST
	checkplayergender
# 0 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq WW_BridgeScene2_2
# 277 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_BridgeScene2_Text_1
WW_BridgeScene2_1:
# 279 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_DevonReward
# 280 "data/maps/WindyWoods/scripts.pory"
	giveitem ITEM_LETTER
# 281 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_DevonTalk2, MSGBOX_AUTOCLOSE
# 282 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 283 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 284 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_1
# 285 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_2
# 286 "data/maps/WindyWoods/scripts.pory"
	removeobjectbyflag FLAG_TEMP_3
# 287 "data/maps/WindyWoods/scripts.pory"
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
# 288 "data/maps/WindyWoods/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 289 "data/maps/WindyWoods/scripts.pory"
	delay 25
# 290 "data/maps/WindyWoods/scripts.pory"
	release
	end

WW_BridgeScene2_2:
# 274 "data/maps/WindyWoods/scripts.pory"
	msgbox WW_BridgeScene2_Text_0
	goto WW_BridgeScene2_1


# 300 "data/maps/WindyWoods/scripts.pory"
WW_DevonEnters:
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 301 "data/maps/WindyWoods/scripts.pory"
	walk_left
# 302 "data/maps/WindyWoods/scripts.pory"
	face_up
	step_end

WW_Grotto_Entrance::
# 316 "data/maps/WindyWoods/scripts.pory"
	lock
# 317 "data/maps/WindyWoods/scripts.pory"
	msgbox GoInsideGrotto, MSGBOX_YESNO
# 318 "data/maps/WindyWoods/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WW_Grotto_Entrance_2
# 322 "data/maps/WindyWoods/scripts.pory"
	warp MAP_WW_GROTTO, 6, 19
# 323 "data/maps/WindyWoods/scripts.pory"
	waitstate
# 324 "data/maps/WindyWoods/scripts.pory"
	release
	return

WW_Grotto_Entrance_2:
# 319 "data/maps/WindyWoods/scripts.pory"
	release
	end


WW_CoolTrainer_Text_0:
# 114 "data/maps/WindyWoods/scripts.pory"
	.string "Simply spectacular.$"

WW_CoolTrainer_Text_1:
# 130 "data/maps/WindyWoods/scripts.pory"
	.string "All I see are weaklings.\pProve to me that you're not\na weakling and we'll talk.$"

WW_CoolTrainerEligible_Text_0:
# 144 "data/maps/WindyWoods/scripts.pory"
	.string "Good.$"

WW_CoolTrainerEligible_Text_1:
# 150 "data/maps/WindyWoods/scripts.pory"
	.string "Then stop wasting my time.$"

WW_CoolTrainerPostBattle_Text_0:
# 185 "data/maps/WindyWoods/scripts.pory"
	.string "Give that item to your Pokémon to\nboost the power of their attacks.\pTake these as well.$"

WW_RocketStop1_Text_0:
# 239 "data/maps/WindyWoods/scripts.pory"
	.string "That's far enough, pal.$"

WW_RocketStop2_Text_0:
# 244 "data/maps/WindyWoods/scripts.pory"
	.string "I'm warning you!$"

WW_RocketStop3_Text_0:
# 248 "data/maps/WindyWoods/scripts.pory"
	.string "Okay, now you're asking for trouble!$"

WW_BridgeScene2_Text_0:
# 274 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: This brave boy saved me!$"

WW_BridgeScene2_Text_1:
# 277 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: This brave girl saved me!$"

WindyWoods_Bugcatcher1Intro::
# 24 "data/maps/WindyWoods/scripts.pory"
	.string "This place is a bug catcher's dream!$"

WindyWoods_Bugcatcher1Defeated::
# 27 "data/maps/WindyWoods/scripts.pory"
	.string "Should've waited for my\nPokémon to evolve…$"

WindyWoods_Bugcatcher1PostBattle::
# 30 "data/maps/WindyWoods/scripts.pory"
	.string "You got lucky I didn't have time\nto fully evolve my Pokémon.$"

WindyWoods_Girl2Intro::
# 39 "data/maps/WindyWoods/scripts.pory"
	.string "Eek!\pNo, you did not just\nsee me playing in the puddle!$"

WindyWoods_Girl2Defeated::
# 42 "data/maps/WindyWoods/scripts.pory"
	.string "Please keep this a secret…$"

WindyWoods_Girl2PostBattle::
# 45 "data/maps/WindyWoods/scripts.pory"
	.string "Please don't tell anyone that\nI'm playing in the puddle!\lI have a reputation to uphold…$"

WindyWoods_Bugcatcher2Intro::
# 54 "data/maps/WindyWoods/scripts.pory"
	.string "I wanna be the very best!$"

WindyWoods_Bugcatcher2Defeated::
# 57 "data/maps/WindyWoods/scripts.pory"
	.string "Should've trained harder for my cause…$"

WindyWoods_Bugcatcher2PostBattle::
# 60 "data/maps/WindyWoods/scripts.pory"
	.string "I will travel across the land,\nsearching for new bug Pokémon.$"

WindyWoods_CamperIntro::
# 69 "data/maps/WindyWoods/scripts.pory"
	.string "Shoo! This is my camping spot!$"

WindyWoods_CamperDefeated::
# 72 "data/maps/WindyWoods/scripts.pory"
	.string "I relent…$"

WindyWoods_CamperPostBattle::
# 75 "data/maps/WindyWoods/scripts.pory"
	.string "I thought of setting up a camp here\nbut then this downpour started…$"

WindyWoods_LassIntro::
# 84 "data/maps/WindyWoods/scripts.pory"
	.string "Have you seen any hidden grottos?$"

WindyWoods_LassDefeated::
# 87 "data/maps/WindyWoods/scripts.pory"
	.string "Why can I never win!?$"

WindyWoods_LassPostBattle::
# 90 "data/maps/WindyWoods/scripts.pory"
	.string "I'm looking for a hidden grotto but\nas the name would suggest,\lit truly is hidden.$"

WindyWoods_YoungsterIntro::
# 99 "data/maps/WindyWoods/scripts.pory"
	.string "This place is giving me the creeps…$"

WindyWoods_YoungsterDefeated::
# 102 "data/maps/WindyWoods/scripts.pory"
	.string "Fine, you win, I guess…$"

WindyWoods_YoungsterPostBattle::
# 105 "data/maps/WindyWoods/scripts.pory"
	.string "I saw this really scary looking guy\nto the northwest earlier.\pHe was dragging a Poochyena on a leash\nbut it looked reluctant to follow.$"

WW_CoolTrainer_Intro_Short::
# 154 "data/maps/WindyWoods/scripts.pory"
	.string "Are you ready for a duel?$"

WW_CoolTrainer_Intro::
# 157 "data/maps/WindyWoods/scripts.pory"
	.string "I see you're not a completely\n"
	.string "lost cause.\p"
	.string "That means you are worthy of my time.\p"
	.string "Care for a Pokémon Battle?\p"
	.string "I warn you, I'm no weakling.$"

WW_Text_CoolTrainerDefeated::
# 165 "data/maps/WindyWoods/scripts.pory"
	.string "Maybe it was I who wasn't worth\n"
	.string "your time…$"

WW_CoolTrainerReward::
# 191 "data/maps/WindyWoods/scripts.pory"
	.string "Well, looks like I got humbled there.\nHere, you deserve this.$"

WW_Help::
# 223 "data/maps/WindyWoods/scripts.pory"
	.string "Please help!\p"
	.string "I was taking my daddy's Poochyena for\n"
	.string "a walk when some mean guy stole it!\p"
	.string "He ran somewhere across this bridge\n"
	.string "but I have no other Pokémon so\l"
	.string "I'm too scared to follow…$"

WW_Help2::
# 231 "data/maps/WindyWoods/scripts.pory"
	.string "Please help…$"

WW_Text_RocketDefeated::
# 252 "data/maps/WindyWoods/scripts.pory"
	.string "Tch…!$"

WW_RocketReward::
# 293 "data/maps/WindyWoods/scripts.pory"
	.string "You want the Poochyena?\nFine, take it.\pIt was too weak for me\nto care about it anyway.$"

WW_LittleGirlReward::
# 297 "data/maps/WindyWoods/scripts.pory"
	.string "Little girl: Thank you for getting\nPoochie back!\pI wasn't sure if I would\never see him again…$"

DevonTalk1::
# 305 "data/maps/WindyWoods/scripts.pory"
	.string "Father: Thank god you're safe, honey!$"

WW_DevonReward::
# 308 "data/maps/WindyWoods/scripts.pory"
	.string "Father: Thank you for helping my\ndaughter and saving our family pet.\pI don't have much to offer you\nbut here, take this.$"

WW_DevonTalk2::
# 311 "data/maps/WindyWoods/scripts.pory"
	.string "I work for the Devon Corp.\pShow that letter to the receptionist\nat our offices in Shoreslate City and\lI'm sure they'll reward you.\pThank you again for taking care\nof the situation.\pAlthough, I am a bit concerned about\nthis person clad in dark.\pThe way you described him sounded like\nhe could be a Team Rocket member.\pHowever, Team Rocket was disbanded\nyears ago…\pAnyway, we should head back home.$"

GoInsideGrotto::
# 326 "data/maps/WindyWoods/scripts.pory"
	.string "There looks to be a narrow path\n"
	.string "between the trees!\p"
	.string "Follow the path?$"
