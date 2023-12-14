WindyWoods_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WWHideDadAndDog
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_WINDYWOODS_STATE, 0 || 1 || 2 || 3, WWHideDadAndDog
	map_script_2 VAR_WINDYWOODS_STATE, 4, WW_BridgeWarp
	.2byte 0

WindyWoods_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_WINDYWOODS_STATE, 4, WW_BridgeScene2
	.2byte 0


WWHideDadAndDog::
	compare VAR_WINDYWOODS_STATE, 4
	goto_if_eq WWHideDadAndDog_1
	setflag FLAG_UNUSED_WW_HIDEDAD
	hideobjectat 12, MAP_WINDY_WOODS
	hideobjectat 14, MAP_WINDY_WOODS
	end

WWHideDadAndDog_1:
	end


WindyWoods_ParlyzHeal::
	finditem ITEM_PARALYZE_HEAL
	return


WindyWoods_Carbos::
	finditem ITEM_CARBOS
	return


WindyWoods_Bugcatcher1::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, WindyWoods_Bugcatcher1Intro, WindyWoods_Bugcatcher1Defeated
	msgbox WindyWoods_Bugcatcher1PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


WindyWoods_Girl2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, WindyWoods_Girl2Intro, WindyWoods_Girl2Defeated
	msgbox WindyWoods_Girl2PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


WindyWoods_Bugcatcher2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, WindyWoods_Bugcatcher2Intro, WindyWoods_Bugcatcher2Defeated
	msgbox WindyWoods_Bugcatcher2PostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


WindyWoods_Camper::
	trainerbattle_single TRAINER_FREDRICK, WindyWoods_CamperIntro, WindyWoods_CamperDefeated
	msgbox WindyWoods_CamperPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


WindyWoods_Lass::
	trainerbattle_single TRAINER_MATT, WindyWoods_LassIntro, WindyWoods_LassDefeated
	msgbox WindyWoods_LassPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


WindyWoods_Youngster::
	trainerbattle_single TRAINER_ZANDER, WindyWoods_YoungsterIntro, WindyWoods_YoungsterDefeated
	msgbox WindyWoods_YoungsterPostBattle, MSGBOX_AUTOCLOSE
	waitmessage
	end


WW_CoolTrainer::
	lockall
	faceplayer
	goto_if_set FLAG_UNUSED_WW_COOLTRAINERREWARD, WW_CoolTrainer_1
	checktrainerflag TRAINER_GRUNT_WEATHER_INST_4
	goto_if 0, WW_CoolTrainer_2
	checktrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_5
	goto_if 0, WW_CoolTrainer_2
	checktrainerflag TRAINER_GRUNT_AQUA_HIDEOUT_6
	goto_if 0, WW_CoolTrainer_2
	checktrainerflag TRAINER_FREDRICK
	goto_if 0, WW_CoolTrainer_2
	checktrainerflag TRAINER_MATT
	goto_if 0, WW_CoolTrainer_2
	checktrainerflag TRAINER_ZANDER
	goto_if 0, WW_CoolTrainer_2
	goto WW_CoolTrainerEligible
	return

WW_CoolTrainer_1:
	msgbox WW_CoolTrainer_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end

WW_CoolTrainer_2:
	msgbox WW_CoolTrainer_Text_1
	waitmessage
	closemessage
	release
	end


WW_CoolTrainerEligible::
	lockall
	faceplayer
	goto_if_unset FLAG_UNUSED_WW_COOLTRAINER, WW_CoolTrainerEligible_1
	msgbox WW_CoolTrainerEligible_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WW_CoolTrainerEligible_8
	compare VAR_RESULT, NO
	goto_if_eq WW_CoolTrainerEligible_12
	return

WW_CoolTrainerEligible_1:
	setflag FLAG_UNUSED_WW_COOLTRAINER
	msgbox WW_CoolTrainerEligible_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WW_CoolTrainerEligible_5
	compare VAR_RESULT, NO
	goto_if_eq WW_CoolTrainerEligible_10
	return

WW_CoolTrainerEligible_5:
	msgbox WW_CoolTrainerEligible_Text_1
	trainerbattle_no_intro TRAINER_SHELLY_WEATHER_INSTITUTE, WW_Text_CoolTrainerDefeated
	goto WW_CoolTrainerPostBattle
	end

WW_CoolTrainerEligible_8:
	msgbox WW_CoolTrainerEligible_Text_1
	trainerbattle_no_intro TRAINER_SHELLY_WEATHER_INSTITUTE, WW_Text_CoolTrainerDefeated
	goto WW_CoolTrainerPostBattle
	end

WW_CoolTrainerEligible_10:
	msgbox WW_CoolTrainerEligible_Text_2
	waitmessage
	closemessage
	release
	end

WW_CoolTrainerEligible_12:
	msgbox WW_CoolTrainerEligible_Text_2
	waitmessage
	closemessage
	release
	end


WW_CoolTrainerPostBattle::
	msgbox WW_CoolTrainerReward, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	msgbox WW_CoolTrainerPostBattle_Text_0, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox WW_CoolTrainerPostBattle_Text_1, MSGBOX_DEFAULT
	goto_if_unset FLAG_UNUSED_BP_INTRO, WW_CoolTrainerPostBattle_2
WW_CoolTrainerPostBattle_1:
	setflag FLAG_UNUSED_WW_COOLTRAINERREWARD
	setflag FLAG_UNUSED_BP_INTRO
	waitmessage
	closemessage
	call WW_GIVEBP
	release
	end

WW_CoolTrainerPostBattle_2:
	msgbox WW_CoolTrainerPostBattle_Text_2
	goto WW_CoolTrainerPostBattle_1


WW_GIVEBP::
	buffernumberstring STR_VAR_1, 10
	setvar VAR_0x8004, 10
	special GiveFrontierBattlePoints
	return


WW_HelpGirl::
	lockall
	applymovement 5, WW_Face
	waitmovement 0
	playse SE_PIN
	applymovement 5, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	applymovement OBJ_EVENT_ID_PLAYER, WW_PlayerFace1
	waitmovement 0
	clearflag FLAG_UNUSED_WW_HIDEROCKET
	setvar VAR_WINDYWOODS_STATE, 1
	msgbox WW_Help
	waitmessage
	releaseall
	return


WW_Face:
	face_player
	step_end

WW_PlayerFace1:
	face_up
	step_end

WW_LittleGirl::
	compare VAR_WINDYWOODS_STATE, 1
	goto_if_eq WW_LittleGirl_1
	setvar VAR_WINDYWOODS_STATE, 1
	setflag FLAG_UNUSED_WW_HIDEDAD
	msgbox WW_Help, MSGBOX_NPC
	clearflag FLAG_UNUSED_WW_HIDEROCKET
	return

WW_LittleGirl_1:
	msgbox WW_Help2, MSGBOX_NPC
	return


WW_RocketStop1::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox WW_RocketStop1_Text_0, MSGBOX_DEFAULT
	setvar VAR_WINDYWOODS_STATE, 2
	waitmessage
	closemessage
	release
	end


WW_RocketStop2::
	lockall
	msgbox WW_RocketStop2_Text_0, MSGBOX_DEFAULT
	setvar VAR_WINDYWOODS_STATE, 3
	waitmessage
	closemessage
	release
	end


WW_RocketStop3::
	lockall
	msgbox WW_RocketStop3_Text_0, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SHELLY_SEAFLOOR_CAVERN, WW_Text_RocketDefeated
	goto WW_RockPostBattle
	return


WW_RockPostBattle::
	lockall
	msgbox WW_RocketReward, MSGBOX_DEFAULT
	waitmessage
	closemessage
	showobjectat 12, MAP_WINDY_WOODS
	showobjectat 14, MAP_WINDY_WOODS
	setvar VAR_WINDYWOODS_STATE, 4
	clearflag FLAG_UNUSED_WW_HIDEDAD
	warp MAP_WINDY_WOODS, 27, 11
	waitstate
	release
	end


WW_BridgeWarp::
	clearflag FLAG_UNUSED_WW_HIDEDAD
	showobjectat 14, MAP_WINDY_WOODS
	setobjectxy 14, 29, 11
	turnobject 14, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	end


WW_BridgeScene2::
	lockall
	delay 25
	msgbox WW_LittleGirlReward, MSGBOX_DEFAULT
	waitmessage
	closemessage
	delay 40
	setobjectxy 12, 20, 12
	showobjectat 12, MAP_WINDY_WOODS
	applymovement 12, WW_DevonEnters
	waitmovement 0
	applymovement 5, WW_GirlFaceDown
	waitmovement 0
	msgbox DevonTalk1, MSGBOX_DEFAULT
	applymovement 5, WW_FaceLeft
	waitmovement 0
	applymovement 12, WW_FaceLeft
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq WW_BridgeScene2_2
	msgbox WW_BridgeScene2_Text_1, MSGBOX_DEFAULT
WW_BridgeScene2_1:
	waitmessage
	msgbox WW_DevonReward, MSGBOX_DEFAULT
	giveitem ITEM_LETTER
	msgbox WW_DevonTalk2, MSGBOX_DEFAULT
	waitmessage
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	delay 25
	removeobject 5
	removeobject 11
	removeobject 12
	removeobject 14
	setflag FLAG_UNUSED_WW_ENDEVENT
	setflag FLAG_UNUSED_WW_HIDEROCKET
	setflag FLAG_UNUSED_WW_HIDEDAD
	setvar VAR_WINDYWOODS_STATE, 5
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 25
	release
	end

WW_BridgeScene2_2:
	msgbox WW_BridgeScene2_Text_0, MSGBOX_DEFAULT
	goto WW_BridgeScene2_1


WW_FaceRight:
	face_right
	step_end

WW_FaceLeft:
	face_left
	step_end

WW_DevonEnters:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

WW_GirlFaceDown:
	face_down
	step_end

WW_CoolTrainer_Text_0:
	.string "Simply spectacular.$"

WW_CoolTrainer_Text_1:
	.string "All I see are weaklings.\pProve to me that you're not\na weakling and we'll talk.$"

WW_CoolTrainerEligible_Text_0:
	.string "I see you're not a completely\nlost cause.\pThat means you are worthy of my time.\pCare for a Pokémon Battle?\pI warn you, I'm no weakling.$"

WW_CoolTrainerEligible_Text_1:
	.string "Good.$"

WW_CoolTrainerEligible_Text_2:
	.string "Then stop wasting my time.$"

WW_CoolTrainerEligible_Text_3:
	.string "Are you ready for a duel?$"

WW_CoolTrainerPostBattle_Text_0:
	.string "Turning on that item will grant\nall your Pokémon exp from battling,\leven the ones that never participated\lin the battle.\pI want you to have these as well.$"

WW_CoolTrainerPostBattle_Text_1:
	.string "Earned 10 BP!$"

WW_CoolTrainerPostBattle_Text_2:
	.string "These are battle points, or BP.\pThey can be used to purchase powerful\nitems at designated stores.\pMany trainers hand out BP\n as an additional reward,\lwith the amount earned increasing\las the trainers get stronger.$"

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

WW_Text_CoolTrainerDefeated::
	.string "Maybe it was I who wasn't worth\nyour time…$"

WW_CoolTrainerReward::
	.string "Well, looks like I got humbled there.\nHere, you deserve this.$"

WW_Help::
	.string "Little girl: Please help!\pI was taking my daddy's Poochyena for\na walk when some mean guy stole it!\pHe ran somewhere across this bridge\nbut I have no other Pokémon so\lI'm too scared to follow…$"

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
