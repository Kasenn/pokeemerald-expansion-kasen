WindyWoods_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
	goto_if_ne WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_EVENT_COMPLETED
	goto_if_eq WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	goto_if_ge WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setflag FLAG_TEMP_1
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	goto WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
	goto_if_le WindyWoods_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_WINDYWOODS_STATE, 4, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	return

WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_WINDYWOODS_STATE, 4, WW_BridgeScene2
	.2byte 0


WindyWoods_Bugcatcher1::
	trainerbattle_single TRAINER_WW_BUGCATCHER, WindyWoods_Bugcatcher1Intro, WindyWoods_Bugcatcher1Defeated
	msgbox WindyWoods_Bugcatcher1PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Girl2::
	trainerbattle_single TRAINER_WW_LADY, WindyWoods_Girl2Intro, WindyWoods_Girl2Defeated
	msgbox WindyWoods_Girl2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Bugcatcher2::
	trainerbattle_single TRAINER_WW_BUGCATCHER_2, WindyWoods_Bugcatcher2Intro, WindyWoods_Bugcatcher2Defeated
	msgbox WindyWoods_Bugcatcher2PostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Camper::
	trainerbattle_single TRAINER_WW_CAMPER, WindyWoods_CamperIntro, WindyWoods_CamperDefeated
	msgbox WindyWoods_CamperPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Lass::
	trainerbattle_single TRAINER_WW_LASS, WindyWoods_LassIntro, WindyWoods_LassDefeated
	msgbox WindyWoods_LassPostBattle, MSGBOX_AUTOCLOSE
	end


WindyWoods_Youngster::
	trainerbattle_single TRAINER_WW_YOUNGSTER, WindyWoods_YoungsterIntro, WindyWoods_YoungsterDefeated
	msgbox WindyWoods_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	end


WW_CoolTrainer::
	checktrainerflag TRAINER_WW_ACE_TRAINER
	goto_if 1, WW_CoolTrainer_2
WW_CoolTrainer_1:
	checktrainerflag TRAINER_WW_BUGCATCHER
	goto_if 1, WW_CoolTrainer_7
WW_CoolTrainer_5:
	msgbox WW_CoolTrainer_Text_1, MSGBOX_NPC
	return

WW_CoolTrainer_2:
	goto_if_set FLAG_WW_COOLTRAINERREWARD, WW_CoolTrainer_17
	goto WW_CoolTrainerPostBattle
	goto WW_CoolTrainer_1

WW_CoolTrainer_4:
	goto WW_CoolTrainerEligible
	return

WW_CoolTrainer_6:
	checktrainerflag TRAINER_WW_BUGCATCHER_2
	goto_if 1, WW_CoolTrainer_11
	goto WW_CoolTrainer_5

WW_CoolTrainer_7:
	checktrainerflag TRAINER_WW_LADY
	goto_if 1, WW_CoolTrainer_6
	goto WW_CoolTrainer_5

WW_CoolTrainer_10:
	checktrainerflag TRAINER_WW_LASS
	goto_if 1, WW_CoolTrainer_14
	goto WW_CoolTrainer_5

WW_CoolTrainer_11:
	checktrainerflag TRAINER_WW_CAMPER
	goto_if 1, WW_CoolTrainer_10
	goto WW_CoolTrainer_5

WW_CoolTrainer_14:
	checktrainerflag TRAINER_WW_YOUNGSTER
	goto_if 1, WW_CoolTrainer_4
	goto WW_CoolTrainer_5

WW_CoolTrainer_17:
	msgbox WW_CoolTrainer_Text_0, MSGBOX_NPC
	end


WW_CoolTrainerEligible::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_4, WW_CoolTrainerEligible_2
	msgbox WW_CoolTrainer_Intro, MSGBOX_YESNO
WW_CoolTrainerEligible_1:
	compare VAR_RESULT, TRUE
	goto_if_eq WW_CoolTrainerEligible_5
	setflag FLAG_TEMP_4
	msgbox WW_CoolTrainerEligible_Text_1, MSGBOX_NPC
	return

WW_CoolTrainerEligible_2:
	msgbox WW_CoolTrainer_Intro_Short, MSGBOX_YESNO
	goto WW_CoolTrainerEligible_1

WW_CoolTrainerEligible_5:
	msgbox WW_CoolTrainerEligible_Text_0
	trainerbattle_no_intro TRAINER_WW_ACE_TRAINER, WW_Text_CoolTrainerDefeated
	goto WW_CoolTrainerPostBattle
	return


WW_CoolTrainerPostBattle::
	msgbox WW_CoolTrainerReward
	switch VAR_STARTER_MON
	case 0, WW_CoolTrainerPostBattle_3
	case 1, WW_CoolTrainerPostBattle_4
	case 2, WW_CoolTrainerPostBattle_5
WW_CoolTrainerPostBattle_1:
	checkitemspace VAR_TEMP_0
	compare VAR_RESULT, FALSE
	goto_if_eq WW_CoolTrainerPostBattle_7
WW_CoolTrainerPostBattle_6:
	giveitem VAR_TEMP_0
	setflag FLAG_WW_COOLTRAINERREWARD
	msgbox WW_CoolTrainerPostBattle_Text_0
	addbp 10
	call BpReward
	release
	return

WW_CoolTrainerPostBattle_3:
	setvar VAR_TEMP_0, ITEM_MIRACLE_SEED
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_4:
	setvar VAR_TEMP_0, ITEM_CHARCOAL
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_5:
	setvar VAR_TEMP_0, ITEM_MYSTIC_WATER
	goto WW_CoolTrainerPostBattle_1

WW_CoolTrainerPostBattle_7:
	goto ZeBagIsFull
	goto WW_CoolTrainerPostBattle_6


WW_HelpGirl::
	lock
	safefollow
	turnobject 5, DIR_SOUTH
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	clearflag FLAG_TEMP_2
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	msgbox WW_Help
	waitmessage
	releaseall
	return


WW_LittleGirl::
	compare VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_NOT_STARTED
	goto_if_eq WW_LittleGirl_1
	msgbox WW_Help2, MSGBOX_NPC
	return

WW_LittleGirl_1:
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_TALKED_TO_GIRL
	clearflag FLAG_TEMP_2
	msgbox WW_Help, MSGBOX_NPC
	return


WW_RocketStop1::
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_1ST_STEP_TAKEN
	msgbox WW_RocketStop1_Text_0, MSGBOX_SIGN
	return


WW_RocketStop2::
	lock
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_2ND_STEP_TAKEN
	msgbox WW_RocketStop2_Text_0, MSGBOX_SIGN
	return


WW_RocketStop3::
	lock
	msgbox WW_RocketStop3_Text_0
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, WW_Text_RocketDefeated
	goto WW_RockPostBattle
	return


WW_RockPostBattle::
	lock
	msgbox WW_RocketReward
	closemessage
	setvar VAR_WINDYWOODS_STATE, STORY_WINDY_WOODS_ROCKET_DEFEATED
	warp MAP_WINDY_WOODS, 40, 13
	waitstate
	release
	return


WW_BridgeScene2::
	delay 25
	msgbox WW_LittleGirlReward
	closemessage
	delay 40
	applymovement 12, WW_DevonEnters
	waitmovement 0
	turnobject 5, DIR_SOUTH
	msgbox DevonTalk1
	turnobject 5, DIR_EAST
	turnobject 12, DIR_EAST
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq WW_BridgeScene2_2
	msgbox WW_BridgeScene2_Text_1
WW_BridgeScene2_1:
	msgbox WW_DevonReward
	giveitem ITEM_LETTER
	msgbox WW_DevonTalk2
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	delay 25
	removeobjectbyflag FLAG_TEMP_1
	removeobjectbyflag FLAG_TEMP_2
	removeobjectbyflag FLAG_TEMP_3
	setvar VAR_WINDYWOODS_STATE, 5
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 25
	release
	end

WW_BridgeScene2_2:
	msgbox WW_BridgeScene2_Text_0
	goto WW_BridgeScene2_1


WW_DevonEnters:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

WW_Grotto_Entrance::
	lock
	msgbox GoInsideGrotto, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq WW_Grotto_Entrance_2
	warp MAP_WW_GROTTO, 6, 19
	waitstate
	release
	return

WW_Grotto_Entrance_2:
	release
	end


FacePlayer:
	face_player
	step_end

WW_CoolTrainer_Text_0:
	.string "Simply spectacular.$"

WW_CoolTrainer_Text_1:
	.string "All I see are weaklings.\pProve to me that you're not\na weakling and we'll talk.$"

WW_CoolTrainerEligible_Text_0:
	.string "Good.$"

WW_CoolTrainerEligible_Text_1:
	.string "Then stop wasting my time.$"

WW_CoolTrainerPostBattle_Text_0:
	.string "Give that item to your Pokémon to\nboost the power of their attacks.\pTake these as well.$"

WW_RocketStop1_Text_0:
	.string "That's far enough, pal.$"

WW_RocketStop2_Text_0:
	.string "I'm warning you!$"

WW_RocketStop3_Text_0:
	.string "Okay, now you're asking for trouble!$"

WW_BridgeScene2_Text_0:
	.string "Little girl: This brave boy saved me!$"

WW_BridgeScene2_Text_1:
	.string "Little girl: This brave girl saved me!$"

WindyWoods_Bugcatcher1Intro::
	.string "This place is a bug catcher's dream!$"

WindyWoods_Bugcatcher1Defeated::
	.string "Should've waited for my\nPokémon to evolve…$"

WindyWoods_Bugcatcher1PostBattle::
	.string "You got lucky I didn't have time\nto fully evolve my Pokémon.$"

WindyWoods_Girl2Intro::
	.string "Eek!\pNo, you did not just\nsee me playing in the puddle!$"

WindyWoods_Girl2Defeated::
	.string "Please keep this a secret…$"

WindyWoods_Girl2PostBattle::
	.string "Please don't tell anyone that\nI'm playing in the puddle!\lI have a reputation to uphold…$"

WindyWoods_Bugcatcher2Intro::
	.string "I wanna be the very best!$"

WindyWoods_Bugcatcher2Defeated::
	.string "Should've trained harder for my cause…$"

WindyWoods_Bugcatcher2PostBattle::
	.string "I will travel across the land,\nsearching for new bug Pokémon.$"

WindyWoods_CamperIntro::
	.string "Shoo! This is my camping spot!$"

WindyWoods_CamperDefeated::
	.string "I relent…$"

WindyWoods_CamperPostBattle::
	.string "I thought of setting up a camp here\nbut then this downpour started…$"

WindyWoods_LassIntro::
	.string "Have you seen any hidden grottos?$"

WindyWoods_LassDefeated::
	.string "Why can I never win!?$"

WindyWoods_LassPostBattle::
	.string "I'm looking for a hidden grotto but\nas the name would suggest,\lit truly is hidden.$"

WindyWoods_YoungsterIntro::
	.string "This place is giving me the creeps…$"

WindyWoods_YoungsterDefeated::
	.string "Fine, you win, I guess…$"

WindyWoods_YoungsterPostBattle::
	.string "I saw this really scary looking guy\nto the northwest earlier.\pHe was dragging a Poochyena on a leash\nbut it looked reluctant to follow.$"

WW_CoolTrainer_Intro_Short::
	.string "Are you ready for a duel?$"

WW_CoolTrainer_Intro::
	.string "I see you're not a completely\n"
	.string "lost cause.\p"
	.string "That means you are worthy of my time.\p"
	.string "Care for a Pokémon Battle?\p"
	.string "I warn you, I'm no weakling.$"

WW_Text_CoolTrainerDefeated::
	.string "Maybe it was I who wasn't worth\n"
	.string "your time…$"

WW_CoolTrainerExplainReward::
	.string "Turning on that item will grant\n"
	.string "all your Pokémon exp from battling,\l"
	.string "even the ones that never participated\l"
	.string "in the battle.\p"
	.string "I want you to have these as well.$"

WW_CoolTrainerReward::
	.string "Well, looks like I got humbled there.\nHere, you deserve this.$"

WW_Help::
	.string "Please help!\p"
	.string "I was taking my daddy's Poochyena for\n"
	.string "a walk when some mean guy stole it!\p"
	.string "He ran somewhere across this bridge\n"
	.string "but I have no other Pokémon so\l"
	.string "I'm too scared to follow…$"

WW_Help2::
	.string "Please help…$"

WW_Text_RocketDefeated::
	.string "Tch…!$"

WW_RocketReward::
	.string "You want the Poochyena?\nFine, take it.\pIt was too weak for me\nto care about it anyway.$"

WW_LittleGirlReward::
	.string "Little girl: Thank you for getting\nPoochie back!\pI wasn't sure if I would\never see him again…$"

DevonTalk1::
	.string "Father: Thank god you're safe, honey!$"

WW_DevonReward::
	.string "Father: Thank you for helping my\ndaughter and saving our family pet.\pI don't have much to offer you\nbut here, take this.$"

WW_DevonTalk2::
	.string "I work for the Devon Corp.\pShow that letter to the receptionist\nat our offices in Shoreslate City and\lI'm sure they'll reward you.\pThank you again for taking care\nof the situation.\pAlthough, I am a bit concerned about\nthis person clad in dark.\pThe way you described him sounded like\nhe could be a Team Rocket member.\pHowever, Team Rocket was disbanded\nyears ago…\pAnyway, we should head back home.$"

GoInsideGrotto::
	.string "There looks to be a narrow path\n"
	.string "between the trees!\p"
	.string "Follow the path?$"
