BasaluffTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, BasaluffTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_BASALEK
	call Common_EventScript_SetupRivalGfxId
	getplayerxy VAR_TEMP_3, VAR_TEMP_4
	compare VAR_TEMP_3, 23
	goto_if_eq BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_TEMP_5, 1
	goto_if_eq BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setvar VAR_TEMP_5, 1
	goto BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
	compare VAR_TEMP_4, 16
	goto_if_eq BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BasaluffTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
	setobjectxyperm 10, 24, 16
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_LEFT
	return

BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_TEMP_5, 1, BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

BasaluffTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	turnobject 0xFF, DIR_EAST
	return

BasaluffTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_5, 1, BasaluffAutomaticRivalFight
	.2byte 0


BasaluffAutomaticRivalFight::
	delay 30
	setvar VAR_TEMP_5, 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BasaluffAutomaticRivalFight_2
	msgbox BasaluffBrendan_LetsStart
	switch VAR_STARTER_MON
	case 0, BasaluffAutomaticRivalFight_12
	case 1, BasaluffAutomaticRivalFight_13
	case 2, BasaluffAutomaticRivalFight_14
BasaluffAutomaticRivalFight_10:
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasaluffAutomaticRivalFight_19
	msgbox BasaluffBrendan_NoMegaPostBattle
BasaluffAutomaticRivalFight_18:
	msgbox BasaluffBrendan_Goodbye
BasaluffAutomaticRivalFight_1:
	closemessage
	safefollow
	applymovement 10, BasaluffAutomaticRivalFight_Movement_0
	waitmovement 0
	setflag FLAG_RIVAL_MET_IN_BASALEK
	removeobject 10
	release
	return

BasaluffAutomaticRivalFight_2:
	msgbox BasaluffMay_LetsStart
	switch VAR_STARTER_MON
	case 0, BasaluffAutomaticRivalFight_7
	case 1, BasaluffAutomaticRivalFight_8
	case 2, BasaluffAutomaticRivalFight_9
BasaluffAutomaticRivalFight_5:
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasaluffAutomaticRivalFight_15
	msgbox BasaluffMay_NoMegaPostBattle
	msgbox BasaluffMay_Goodbye2
	goto BasaluffAutomaticRivalFight_1

BasaluffAutomaticRivalFight_7:
	trainerbattle_no_intro TRAINER_BASALEK_MAY_ROWLET, BasalekMay_LostText
	goto BasaluffAutomaticRivalFight_5

BasaluffAutomaticRivalFight_8:
	trainerbattle_no_intro TRAINER_BASALEK_MAY_TORCHIC, BasalekMay_LostText
	goto BasaluffAutomaticRivalFight_5

BasaluffAutomaticRivalFight_9:
	trainerbattle_no_intro TRAINER_BASALEK_MAY_PIPLUP, BasalekMay_LostText
	goto BasaluffAutomaticRivalFight_5

BasaluffAutomaticRivalFight_12:
	trainerbattle_no_intro TRAINER_BASALEK_BRENDAN_ROWLET, BasalekBrendan_LostText
	goto BasaluffAutomaticRivalFight_10

BasaluffAutomaticRivalFight_13:
	trainerbattle_no_intro TRAINER_BASALEK_BRENDAN_TORCHIC, BasalekBrendan_LostText
	goto BasaluffAutomaticRivalFight_10

BasaluffAutomaticRivalFight_14:
	trainerbattle_no_intro TRAINER_BASALEK_BRENDAN_PIPLUP, BasalekBrendan_LostText
	goto BasaluffAutomaticRivalFight_10

BasaluffAutomaticRivalFight_15:
	msgbox BasaluffMay_PostBattle
	msgbox BasaluffMay_Goodbye
	goto BasaluffAutomaticRivalFight_1

BasaluffAutomaticRivalFight_19:
	msgbox BasaluffBrendan_PostBattle
	goto BasaluffAutomaticRivalFight_18


BasalekTown_Sign1::
	msgbox BasalekTown_Sign1_Text, MSGBOX_SIGN
	return


BasalekTown_Sign2::
	msgbox BasalekTown_Sign2_Text, MSGBOX_SIGN
	return


BasalekTown_Man5::
	msgbox BasalekTown_Man5_Text, MSGBOX_NPC
	goto_if_unset FLAG_Q38_BASALEK_TUNNELS_START, BasalekTown_Man5_2
	return

BasalekTown_Man5_1:
	startquest FLAG_Q38_BASALEK_TUNNELS_START
	special ShowJournalPopupAdd
	return

BasalekTown_Man5_2:
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 0, BasalekTown_Man5_1
	return


BasalekTown_RichBoy::
	msgbox BasalekTown_RichBoy_Text, MSGBOX_NPC
	return


BasalekTown_Twin::
	msgbox BasalekTown_Twin_Text, MSGBOX_NPC
	return


BasalekTown_OldMan::
	msgbox BasalekTown_OldMan_Text, MSGBOX_NPC
	return


BasalekTown_HealTrigger::
	lock
	fadescreen FADE_TO_WHITE
	special HealPlayerParty
	setrespawn HEAL_LOCATION_BASALUFF_TOWN
	fadescreen FADE_FROM_WHITE
	msgbox BasalekTown_HealTrigger_Text
	setvar VAR_TEMP_0, 1
	release
	return


BasalekTown_HealTrigger2::
	setvar VAR_TEMP_0, 0
	release
	return


BasalekTown_Beauty::
	msgbox BasalekTown_Beauty_Text, MSGBOX_SIGN
	return


BasalekTown_EggWoman::
	lock
	faceplayer
	checkdexmon SPECIES_EEVEE
	compare VAR_RESULT, TRUE
	goto_if_eq BasalekTown_EggWoman_3
BasalekTown_EggWoman_1:
	goto_if_set FLAG_RECEIVED_LAVARIDGE_EGG, BasalekTown_EggWoman_7
	msgbox BasalekTown_Text_HaveEggWillYouTakeIt, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_EggWoman_10
	getpartysize
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq BasalekTown_EggWoman_13
	msgbox BasalekTown_Text_HopeYoullWalkPlentyWithEgg
	setflag FLAG_RECEIVED_LAVARIDGE_EGG
	playfanfare MUS_OBTAIN_ITEM
	message BasalekTown_Text_ReceivedTheEgg
	waitfanfare
	giveegg SPECIES_EEVEE
	release
	return

BasalekTown_EggWoman_2:
	setflag FLAG_EEVEE_EGG_SHOWN
	msgbox BasalekTown_EggHatched, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_3:
	goto_if_unset FLAG_EEVEE_EGG_SHOWN, BasalekTown_EggWoman_2
	goto BasalekTown_EggWoman_1

BasalekTown_EggWoman_7:
	msgbox BasalekTown_Text_EverySoOftenEggFoundAtDayCare, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_10:
	msgbox BasalekTown_Text_AsYouWishThen, MSGBOX_AUTOCLOSE
	end

BasalekTown_EggWoman_13:
	msgbox BasalekTown_Text_NoRoomForThisEgg, MSGBOX_AUTOCLOSE
	end


BasalekTown_RivalTrigger1::
	setvar VAR_TEMP_2, 1
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalTrigger2::
	setvar VAR_TEMP_2, 2
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalTrigger3::
	setvar VAR_TEMP_2, 3
	goto BasalekTown_RivalScript
	return


BasalekTown_RivalScript::
	lock
	safefollow
	getfollowerxy VAR_TEMP_3, VAR_TEMP_4
	compare VAR_TEMP_3, 0
	goto_if_ne BasalekTown_RivalScript_2
BasalekTown_RivalScript_1:
	delay 5
	opendoor 20, 15
	waitdooranim
	addobject 10
	setobjectxy 10, 20, 15
	turnobject 10, DIR_SOUTH
	delay 16
	applymovement 10, Walk1Down
	waitmovement 0
	closedoor 20, 15
	waitdooranim
	switch VAR_TEMP_2
	case 1, BasalekTown_RivalScript_6
	case 2, BasalekTown_RivalScript_7
	case 3, BasalekTown_RivalScript_8
BasalekTown_RivalScript_4:
	waitmovement 10
	waitmovement 0xFF
	delay 24
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BasalekTown_RivalScript_10
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekTown_RivalScript_23
	msgbox BasaluffTown_Brendan_NoBails
BasalekTown_RivalScript_22:
	switch VAR_STARTER_MON
	case 0, BasalekTown_RivalScript_36
	case 1, BasalekTown_RivalScript_37
	case 2, BasalekTown_RivalScript_38
BasalekTown_RivalScript_34:
	release
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasalekTown_RivalScript_46
	msgbox BasaluffBrendan_NoMegaPostBattle
BasalekTown_RivalScript_45:
	msgbox BasaluffBrendan_Goodbye
BasalekTown_RivalScript_9:
	closemessage
	safefollow
	switch VAR_TEMP_2
	case 1, BasalekTown_RivalScript_15
	case 2, BasalekTown_RivalScript_16
	case 3, BasalekTown_RivalScript_17
BasalekTown_RivalScript_13:
	waitmovement 10
	waitmovement 0xFF
	setflag FLAG_RIVAL_MET_IN_BASALEK
	removeobject 10
	release
	return

BasalekTown_RivalScript_2:
	unlockfollowermovement
	goto BasalekTown_RivalScript_1

BasalekTown_RivalScript_6:
	applymovement 10, BasalekTown_RivalScript_Movement_0
	delay 48
	applymovement 0xFF, BasalekTown_RivalScript_Movement_1
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_1
	unlockfollowermovement
	delay 64
	applymovement 0xFF, BasalekTown_RivalScript_Movement_2
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_2
	unlockfollowermovement
	goto BasalekTown_RivalScript_4

BasalekTown_RivalScript_7:
	applymovement 10, BasalekTown_RivalScript_Movement_3
	delay 64
	applymovement 0xFF, BasalekTown_RivalScript_Movement_1
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_1
	unlockfollowermovement
	delay 64
	applymovement 0xFF, BasalekTown_RivalScript_Movement_2
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_2
	unlockfollowermovement
	goto BasalekTown_RivalScript_4

BasalekTown_RivalScript_8:
	applymovement 10, BasalekTown_RivalScript_Movement_4
	delay 64
	applymovement 0xFF, BasalekTown_RivalScript_Movement_1
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_1
	unlockfollowermovement
	delay 48
	applymovement 0xFF, BasalekTown_RivalScript_Movement_5
	applymovement OBJ_EVENT_ID_FOLLOWER, BasalekTown_RivalScript_Movement_5
	unlockfollowermovement
	goto BasalekTown_RivalScript_4

BasalekTown_RivalScript_10:
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekTown_RivalScript_19
	msgbox BasaluffTown_May_NoBails
BasalekTown_RivalScript_18:
	switch VAR_STARTER_MON
	case 0, BasalekTown_RivalScript_28
	case 1, BasalekTown_RivalScript_29
	case 2, BasalekTown_RivalScript_30
BasalekTown_RivalScript_26:
	release
	goto_if_set FLAG_SPECIAL_USED_MEGA_EVO_IN_BATTLE, BasalekTown_RivalScript_42
	msgbox BasaluffMay_NoMegaPostBattle
	msgbox BasaluffMay_Goodbye2
	goto BasalekTown_RivalScript_9

BasalekTown_RivalScript_15:
	applymovement 10, BasalekTown_RivalScript_Movement_6
	goto BasalekTown_RivalScript_13

BasalekTown_RivalScript_16:
	applymovement 10, BasalekTown_RivalScript_Movement_7
	goto BasalekTown_RivalScript_13

BasalekTown_RivalScript_17:
	applymovement 10, BasalekTown_RivalScript_Movement_8
	applymovement 0xFF, BasalekTown_RivalScript_Movement_9
	goto BasalekTown_RivalScript_13

BasalekTown_RivalScript_19:
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, BasalekTown_RivalScript_31
	msgbox BasaluffTown_May_1Bail
	goto BasalekTown_RivalScript_18

BasalekTown_RivalScript_23:
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, BasalekTown_RivalScript_39
	msgbox BasaluffTown_Brendan_1Bail
	goto BasalekTown_RivalScript_22

BasalekTown_RivalScript_28:
	trainerbattle_no_intro TRAINER_BASALEK_MAY_ROWLET, BasalekMay_LostText
	goto BasalekTown_RivalScript_26

BasalekTown_RivalScript_29:
	trainerbattle_no_intro TRAINER_BASALEK_MAY_TORCHIC, BasalekMay_LostText
	goto BasalekTown_RivalScript_26

BasalekTown_RivalScript_30:
	trainerbattle_no_intro TRAINER_BASALEK_MAY_PIPLUP, BasalekMay_LostText
	goto BasalekTown_RivalScript_26

BasalekTown_RivalScript_31:
	msgbox BasaluffTown_May_2Bails
	goto BasalekTown_RivalScript_18

BasalekTown_RivalScript_36:
	trainerbattle_no_intro TRAINER_BASALEK_BRENDAN_ROWLET, BasalekBrendan_LostText
	goto BasalekTown_RivalScript_34

BasalekTown_RivalScript_37:
	trainerbattle_no_intro TRAINER_BASALEK_BRENDAN_TORCHIC, BasalekBrendan_LostText
	goto BasalekTown_RivalScript_34

BasalekTown_RivalScript_38:
	trainerbattle_no_intro TRAINER_BASALEK_BRENDAN_PIPLUP, BasalekBrendan_LostText
	goto BasalekTown_RivalScript_34

BasalekTown_RivalScript_39:
	msgbox BasaluffTown_Brendan_2Bails
	goto BasalekTown_RivalScript_22

BasalekTown_RivalScript_42:
	msgbox BasaluffMay_PostBattle
	msgbox BasaluffMay_Goodbye
	goto BasalekTown_RivalScript_9

BasalekTown_RivalScript_46:
	msgbox BasaluffBrendan_PostBattle
	goto BasalekTown_RivalScript_45


TurnPlayerAndFollowerRight:
	delay_16
	delay_16
	walk_in_place_fast_right
	step_end

BasalekTown_LevelChecker::
	goto_if_set FLAG_DAILY_BASALEK_CHECKER, BasalekTown_LevelChecker_2
	lock
	faceplayer
	buffernumberstring STR_VAR_1, VAR_BASALEK_LEVEL_CHECK
	msgbox BasalekTown_LevelChecker_NoMatch, MSGBOX_AUTOCLOSE
	matchpartylevel VAR_BASALEK_LEVEL_CHECK
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_LevelChecker_5
	msgbox BasalekTown_LevelChecker_YesMatch
	switch VAR_BASALEK_LEVEL_REWARD
	case 0, BasalekTown_LevelChecker_9
	case 1, BasalekTown_LevelChecker_10
	case 2, BasalekTown_LevelChecker_11
	case 3, BasalekTown_LevelChecker_12
BasalekTown_LevelChecker_7:
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekTown_LevelChecker_17
BasalekTown_LevelChecker_16:
	setflag FLAG_DAILY_BASALEK_CHECKER
	addvar VAR_BASALEK_LEVEL_REWARD, 1
	compare VAR_BASALEK_LEVEL_REWARD, 4
	goto_if_eq BasalekTown_LevelChecker_20
BasalekTown_LevelChecker_19:
	msgbox BasalekTown_LevelChecker_ComeAgain
	goto_if_set FLAG_Q37_BASALEK_LEVELMON_START, BasalekTown_LevelChecker_24
BasalekTown_LevelChecker_22:
	release
	return

BasalekTown_LevelChecker_2:
	msgbox BasalekTown_LevelChecker_ComeAgain, MSGBOX_NPC
	end

BasalekTown_LevelChecker_5:
	goto_if_unset FLAG_Q37_BASALEK_LEVELMON_START, BasalekTown_LevelChecker_14
BasalekTown_LevelChecker_13:
	end

BasalekTown_LevelChecker_9:
	giveitem ITEM_MUSCLE_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_10:
	giveitem ITEM_BINDING_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_11:
	giveitem ITEM_FOCUS_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_12:
	giveitem ITEM_CHOICE_BAND
	goto BasalekTown_LevelChecker_7

BasalekTown_LevelChecker_14:
	startquest FLAG_Q37_BASALEK_LEVELMON_START
	special ShowJournalPopupAdd
	goto BasalekTown_LevelChecker_13

BasalekTown_LevelChecker_17:
	goto ZeBagIsFull
	goto BasalekTown_LevelChecker_16

BasalekTown_LevelChecker_20:
	setvar VAR_BASALEK_LEVEL_CHECK, 0
	goto BasalekTown_LevelChecker_19

BasalekTown_LevelChecker_23:
	completequest FLAG_Q37_BASALEK_LEVELMON_COMPLETE
	special ShowJournalPopupRemove
	goto BasalekTown_LevelChecker_22

BasalekTown_LevelChecker_24:
	goto_if_unset FLAG_Q37_BASALEK_LEVELMON_COMPLETE, BasalekTown_LevelChecker_23
	goto BasalekTown_LevelChecker_22


BasalekHouse1_Woman::
	lock
	faceplayer
	msgbox BasalekHouse1_Woman_Text
	goto_if_set FLAG_BASALEK_WOMAN_LEMONADE, BasalekHouse1_Woman_2
	giveitem ITEM_FRESH_WATER
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekHouse1_Woman_5
	setflag FLAG_BASALEK_WOMAN_LEMONADE
	release
	return

BasalekHouse1_Woman_2:
	release
	end

BasalekHouse1_Woman_5:
	release
	end


BasalekHouse1_Man::
	msgbox BasalekHouse1_Man_Text, MSGBOX_NPC
	return


BasaluffAutomaticRivalFight_Movement_0:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	walk_right
	walk_up
	walk_right
	walk_right
	step_end

BasalekTown_RivalScript_Movement_0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_fast_left
	step_end

BasalekTown_RivalScript_Movement_1:
	walk_in_place_fast_down
	step_end

BasalekTown_RivalScript_Movement_2:
	walk_in_place_fast_right
	step_end

BasalekTown_RivalScript_Movement_3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_fast_left
	step_end

BasalekTown_RivalScript_Movement_4:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_in_place_fast_right
	step_end

BasalekTown_RivalScript_Movement_5:
	walk_in_place_fast_left
	step_end

BasalekTown_RivalScript_Movement_6:
	walk_up
	walk_right
	walk_up
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

BasalekTown_RivalScript_Movement_7:
	walk_up
	walk_right
	walk_up
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

BasalekTown_RivalScript_Movement_8:
	walk_up
	walk_right
	walk_up
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

BasalekTown_RivalScript_Movement_9:
	delay_16
	delay_16
	delay_16
	walk_in_place_fast_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_in_place_fast_right
	step_end

BasaluffMay_LetsStart::
	.string "{RIVAL}: Alright, this should be\n"
	.string "enough space for us to battle.\p"
	.string "Let's go!$"

BasalekMay_LostText::
	.string "Wow!\n"
	.string "{PLAYER}, you're strong!\p"
	.string "I was worried that you might be\n"
	.string "falling behind in your training.$"

BasaluffMay_PostBattle::
	.string "{RIVAL}: Oh wow,\n"
	.string "That was a great battle!\p"
	.string "It's nice to see you put that Mega\n"
	.string "Ring into good use.\p"
	.string "Even if Korrina had only given me\n"
	.string "a ring, I'm not sure I could've\l"
	.string "still beaten you!$"

BasaluffMay_NoMegaPostBattle::
	.string "{RIVAL}: That was a great battle, but\n"
	.string "I must say, I'm a bit disappointed…\p"
	.string "We got these great gifts from\n"
	.string "my dad and Korrina, and you're\l"
	.string "just letting them collect dust.\p"
	.string "Or maybe, was it because I was so\n"
	.string "weak that you didn't see the need\l"
	.string "to use them in the first place…$"

BasaluffMay_Goodbye::
	.string "Anyways, I'm guessing you're\n"
	.string "heading to Frosthearth City to\l"
	.string "challenge the Pokémon Gym there?\p"
	.string "I'm heading that way as well,\n"
	.string "so maybe we'll meet again soon!\p"
	.string "Well, anyway, see you!$"

BasaluffMay_Goodbye2::
	.string "A-Anyways, I'm guessing you're\n"
	.string "heading to Frosthearth City to\l"
	.string "challenge the Pokémon Gym there?\p"
	.string "I'm heading that way as well,\n"
	.string "so maybe we'll meet again soon!\p"
	.string "Well, anyway, see you…$"

BasaluffBrendan_LetsStart::
	.string "{RIVAL}: Okay, this should be\n"
	.string "enough space for us to battle.\p"
	.string "Let's do this!$"

BasalekBrendan_LostText::
	.string "Hmm…\n"
	.string "I see you've been training hard.\p"
	.string "That stings a bit--I had a head start\n"
	.string "on you as a trainer…$"

BasaluffBrendan_PostBattle::
	.string "{RIVAL}: That was a great battle!\p"
	.string "It's nice to see you put that Mega\n"
	.string "Ring into good use.\p"
	.string "I'm not sure if I could've beaten\n"
	.string "you even if you did not have it.$"

BasaluffBrendan_NoMegaPostBattle::
	.string "{RIVAL}: That was a great battle!\p"
	.string "Though I must admit,\n"
	.string "I'm a bit disappointed…\p"
	.string "We got this cool stuff from\n"
	.string "my dad and Korrina, so I was\l"
	.string "kind of expecting to see you\l"
	.string "use them in battle.\p"
	.string "Or perhaps, I was so weak that you\n"
	.string "didn't even see the need to use them\l"
	.string "against me…$"

BasaluffBrendan_Goodbye::
	.string "Anyway, I'm guessing you're\n"
	.string "heading to Frosthearth City to\l"
	.string "challenge the Pokémon Gym there?\p"
	.string "I'm heading that way as well,\n"
	.string "so maybe we'll meet again soon!\p"
	.string "Well, anyway, hang in there!$"

BasalekTown_Sign1_Text::
	.string "BASALEK TOWN\p"
	.string "“Let the hot spring\n"
	.string "wash away your worries!”$"

BasalekTown_Sign2_Text::
	.string "{UP_ARROW} Route 17\n"
	.string "{LEFT_ARROW} Basalek Tunnels\l"
	.string "{DOWN_ARROW} Route 16$"

BasalekTown_Man5_Text::
	.string "See that cave down there?\n"
	.string "That's Basalek Tunnels.\p"
	.string "It's said that due to the oppressing\n"
	.string "atmosphere, training there is more\l"
	.string "efficient than anywhere else.\p"
	.string "This has caused the place to become\n"
	.string "jam-packed with very experienced\l"
	.string "Pokémon trainers.$"

BasalekTown_RichBoy_Text::
	.string "I like warmth as much as the next\n"
	.string "guy, but this is too much.$"

BasalekTown_Twin_Text::
	.string "I'm bored…\p"
	.string "All the adults care about is sitting\n"
	.string "in the hot spring day after day…$"

BasalekTown_OldMan_Text::
	.string "If your Pokémon are feeling worn out,\n"
	.string "hop in to the hot spring and they'll\l"
	.string "be refreshed in no time!\p"
	.string "If you need to access a PC, they've\n"
	.string "set up a station inside the Mart.$"

BasalekTown_HealTrigger_Text::
	.string "The water is perfectly warm.\n"
	.string "It feels exquisite…\p"
	.string "{PLAY_SE SE_USE_ITEM}{PLAYER} and the Pokémon were\n"
	.string "fully refreshed!$"

BasalekTown_Beauty_Text::
	.string "I've got some errands to run,\n"
	.string "but I guess I can stay for\l"
	.string "another five minutes.$"

BasalekTown_Text_HaveEggWillYouTakeIt::
	.string "I recently found my Pokémon carrying\n"
	.string "this egg.\p"
	.string "In the past I would have been ecstatic,\n"
	.string "but I don't think I'm capable of taking\l"
	.string "care of any more Pokémon anymore.\p"
	.string "I saw your battle with your friend,\n"
	.string "and I must say, I'm very impressed.\p"
	.string "You seem like the type of person who\n"
	.string "takes good care of their Pokémon.\p"
	.string "What say you?\n"
	.string "Would you like to care for this egg?$"

BasalekTown_Text_HopeYoullWalkPlentyWithEgg::
	.string "Thank you!\n"
	.string "It warms my heart, knowing it will have\l"
	.string "someone caring for it.$"

BasalekTown_Text_ReceivedTheEgg::
	.string "{PLAYER} received the Pokémon egg.$"

BasalekTown_Text_NoRoomForThisEgg::
	.string "Oh? You've too many Pokémon.\n"
	.string "There's no room for this egg…$"

BasalekTown_Text_AsYouWishThen::
	.string "As you wish, then…\p"
	.string "If you have a change of heart about\n"
	.string "hatching this egg, I will be here.$"

BasalekTown_Text_EverySoOftenEggFoundAtDayCare::
	.string "Every so often, an egg will be found at\n"
	.string "the Pokémon Day Care.\p"
	.string "Or at least that's how the rumor goes.$"

BasalekTown_EggHatched::
	.string "How is the egg doing?\p"
	.string "… … …\p"
	.string "It hatched already?\n"
	.string "That's great to hear.\l"
	.string "I knew I chose a caring trainer.$"

BasaluffTown_Brendan_NoBails::
	.string "{RIVAL}: Oh, hey {PLAYER}!\n"
	.string "It's been a while, huh?\p"
	.string "I was on my way to Route 17, but\n"
	.string "the weather was so unbearably humid\l"
	.string "that I just had to turn back and\l"
	.string "get myself some extra drinks for\l"
	.string "the journey.\p"
	.string "Anyway, enough about me.\p"
	.string "How about we have ourselves\n"
	.string "a Pokémon battle?\p"
	.string "I'm curious to see if you've mastered\n"
	.string "using the Mega Evolution technique.$"

BasaluffTown_Brendan_1Bail::
	.string "{RIVAL}: You weren't trying to\n"
	.string "make a break for it while I was\l"
	.string "patiently waiting inside the Mart,\l"
	.string "were you?\p"
	.string "Well, I hope you're prepared,\n"
	.string "because here I come!$"

BasaluffTown_Brendan_2Bails::
	.string "{RIVAL}: I had a feeling you might\n"
	.string "be walking out on me, just like you did\l"
	.string "back at the Coralgrove Harbor.\p"
	.string "Well, you're not fooling me again.\n"
	.string "Get ready, because here I come!$"

BasaluffTown_May_NoBails::
	.string "{RIVAL}: Oh, hi {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I was on my way to Route 17,\n"
	.string "but  had to turn back just to\l"
	.string "get myself some extra drinks for\l"
	.string "the journey.\p"
	.string "I honestly don't know how people can\n"
	.string "even live in this humid atmosphere.\p"
	.string "Anyways, enough about me.\p"
	.string "How about we have ourselves\n"
	.string "a Pokémon battle?\p"
	.string "I'm curious to see if you've mastered\n"
	.string "using the Mega Evolution technique.$"

BasaluffTown_May_1Bail::
	.string "{RIVAL}: You weren't trying to\n"
	.string "bail on me while I patiently waited\l"
	.string "for you inside the Mart?\p"
	.string "Well, I hope you've prepared yourself,\n"
	.string "because here I come!$"

BasaluffTown_May_2Bails::
	.string "{RIVAL}: Aha!\n"
	.string "I knew you'd try to bail on me!\p"
	.string "I'm not going to let you fool me\n"
	.string "like you fooled me back at the\l"
	.string "Coralgrove Harbor!\p"
	.string "Get ready, because here I come!$"

BasalekTown_LevelChecker_NoMatch::
	.string "…I saw it!\n"
	.string "Today's number is {STR_VAR_1}!\p"
	.string "Show me a Pokémon that's Lv. {STR_VAR_1}.\n"
	.string "If you can, I'll reward you.$"

BasalekTown_LevelChecker_YesMatch::
	.string "…Oh, now, hunh?!\p"
	.string "I see you have a Pokémon\n"
	.string "that is Lv. {STR_VAR_1}.\p"
	.string "Well, I'll be! How remarkable!\p"
	.string "I'll thank you for that visual treat\n"
	.string "with this.$"

BasalekTown_LevelChecker_ComeAgain::
	.string "Come back another day for\n"
	.string "another showcase!$"

BasalekHouse1_Woman_Text::
	.string "It's pretty warm out there.\n"
	.string "Remember to hydrate!$"

BasalekHouse1_Man_Text::
	.string "Thanks to geothermal energy, we can\n"
	.string "cool our houses for next to nothing.$"
