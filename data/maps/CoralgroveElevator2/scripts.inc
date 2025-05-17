CoralgroveElevator2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Common_EventScript_SetupRivalGfxId
	.byte 0


CoralgroveElevator2_Bail::
	lock
	safefollow
	turnobject 1, DIR_NORTH
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq CoralgroveElevator2_Bail_2
	msgbox CoralgroveElevator2_Bail_Female, MSGBOX_DEFAULT
CoralgroveElevator2_Bail_1:
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	release
	end

CoralgroveElevator2_Bail_2:
	msgbox CoralgroveElevator2_Bail_Male, MSGBOX_DEFAULT
	goto CoralgroveElevator2_Bail_1


CoralgroveElevator2_Trigger1::
	lock
	safefollow
	turnobject 1, DIR_WEST
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	waitmovement 0
	goto CoralgroveElevator2_Rival
	return


CoralgroveElevator2_Trigger2::
	lock
	safefollow
	turnobject 1, DIR_EAST
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	waitmovement 0
	goto CoralgroveElevator2_Rival
	return


CoralgroveElevator2_Rival::
	lock
	safefollow
	applymovement 1, FacePlayer
	waitmovement 0
	compare VAR_MAIN_STORY_BITS, STORY_DEFEATED_GYM_1
	goto_if_eq CoralgroveElevator2_Rival_1
	msgbox CoralgroveElevator2_Rival_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoralgroveElevator2_Rival_7
	msgbox CoralgroveElevator2_Rival_Text_1
	waitmessage
	closemessage
	release
	end

CoralgroveElevator2_Rival_1:
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_MET_AT_CORALGROVE_ELEVATOR
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq CoralgroveElevator2_Rival_4
	goto CoralgroveElevator2_Rival_Brendan
	return

CoralgroveElevator2_Rival_4:
	goto CoralgroveElevator2_Rival_May
	return

CoralgroveElevator2_Rival_7:
	goto CoralgroveElevator2_Rival_BATTLECONFIG
	return


CoralgroveElevator2_Rival_May::
	msgbox CoralgroveElevator2_Rival_May_Speech, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoralgroveElevator2_Rival_May_1
	msgbox CoralgroveElevator2_Rival_May_Text_1
	release
	goto_if_unset FLAG_Q02_ELEVATOR_RIVAL_START, CoralgroveElevator2_Rival_May_5
CoralgroveElevator2_Rival_May_4:
	end

CoralgroveElevator2_Rival_May_1:
	msgbox CoralgroveElevator2_Rival_May_Text_0, MSGBOX_DEFAULT
	goto CoralgroveElevator2_Rival_BATTLECONFIG
	return

CoralgroveElevator2_Rival_May_5:
	startquest FLAG_Q02_ELEVATOR_RIVAL_START
	special ShowJournalPopupAdd
	goto CoralgroveElevator2_Rival_May_4


CoralgroveElevator2_Rival_Brendan::
	msgbox CoralgroveElevator2_Rival_Brendan_Speech, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CoralgroveElevator2_Rival_Brendan_1
	msgbox CoralgroveElevator2_Rival_Brendan_Text_0
	release
	goto_if_unset FLAG_Q02_ELEVATOR_RIVAL_START, CoralgroveElevator2_Rival_Brendan_5
CoralgroveElevator2_Rival_Brendan_4:
	end

CoralgroveElevator2_Rival_Brendan_1:
	msgbox CoralgroveElevator2_Rival_May_Text_0, MSGBOX_DEFAULT
	goto CoralgroveElevator2_Rival_BATTLECONFIG
	return

CoralgroveElevator2_Rival_Brendan_5:
	startquest FLAG_Q02_ELEVATOR_RIVAL_START
	special ShowJournalPopupAdd
	goto CoralgroveElevator2_Rival_Brendan_4


CoralgroveElevator2_Rival_BATTLECONFIG::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq CoralgroveElevator2_Rival_BATTLECONFIG_1
	trainerbattle_no_intro TRAINER_BRENDAN_CORALGROVE_ELEVATOR, CoralgroveElevator2_RivalDefeated
	goto CoralgroveElevator2_AfterBrendanBattle
	return

CoralgroveElevator2_Rival_BATTLECONFIG_1:
	trainerbattle_no_intro TRAINER_MAY_CORALGROVE_ELEVATOR, CoralgroveElevator2_RivalDefeated
	goto CoralgroveElevator2_AfterMayBattle
	return


CoralgroveElevator2_AfterMayBattle::
	msgbox CoralgroveElevator2_MayContinueOn, MSGBOX_DEFAULT
	giveitem ITEM_DOWSING_MACHINE
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	msgbox CoralgroveElevator2_MayDowsing
	goto CoralgroveElevator2_RivalExit
	end


CoralgroveElevator2_AfterBrendanBattle::
	msgbox CoralgroveElevator2_BrendanContinueOn, MSGBOX_DEFAULT
	giveitem ITEM_DOWSING_MACHINE
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
	msgbox CoralgroveElevator2_BrendanDowsing
	goto CoralgroveElevator2_RivalExit
	end


CoralgroveElevator2_RivalExit::
	safefollow
	closemessage
	applymovement 1, Harbor_Movement_RivalExit1
	waitmovement 0
	goto CoralgroveElevator2_RivalEnd
	end


CoralgroveElevator2_RivalEnd::
	removeobject 1
	setflag FLAG_DEFEATED_RIVAL_HARBOR
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	goto_if_set FLAG_Q02_ELEVATOR_RIVAL_START, CoralgroveElevator2_RivalEnd_2
CoralgroveElevator2_RivalEnd_1:
	end

CoralgroveElevator2_RivalEnd_2:
	completequest FLAG_Q02_ELEVATOR_RIVAL_COMPLETE
	special ShowJournalPopupRemove
	goto CoralgroveElevator2_RivalEnd_1


Harbor_Movement_RivalExit1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

CoralgroveElevator2_Rival_Text_0:
	.string "{RIVAL}: Ready for a duel?$"

CoralgroveElevator2_Rival_Text_1:
	.string "Let me know when you're ready.$"

CoralgroveElevator2_Rival_May_Text_0:
	.string "Okay, let's go!$"

CoralgroveElevator2_Rival_May_Text_1:
	.string "I get it, you want to prepare.\pWell, don't leave me hanging!$"

CoralgroveElevator2_Rival_Brendan_Text_0:
	.string "It's okay, take your time.\pI'll be waiting here.$"

CoralgroveElevator2_Bail_Male::
	.string "{RIVAL}: Hey!\p"
	.string "You're not planning to bail on me,\n"
	.string "are you!?$"

CoralgroveElevator2_Bail_Female::
	.string "{RIVAL}: You're not planning to bail\n"
	.string "on me, are you?$"

CoralgroveElevator2_Rival_PostBattleMessage::
	.string "Next time I won't lose!$"

CoralgroveElevator2_Rival_May_Speech::
	.string "{RIVAL}: Hello {PLAYER}!\n"
	.string "I knew you'd be here soon!\p"
	.string "Luckily I didn't have to wait\n"
	.string "for too long.\p"
	.string "Your brother also came through\n"
	.string "here recently.\p"
	.string "I was hoping we could all go to the\n"
	.string "mainland together but he was like\l"
	.string "“Can't waste time or he might catch\l"
	.string "up to me.”\p"
	.string "Seriously, that guy gets on my\n"
	.string "nerves sometimes!\p"
	.string "Anyway, I see you too obtained\n"
	.string "the Hive Badge.\p"
	.string "Wanna have a duel and see which of us\n"
	.string "is stronger?$"

CoralgroveElevator2_Rival_Brendan_Speech::
	.string "{RIVAL}: Hi neighbor!\n"
	.string "I hoped you'd be here soon.\p"
	.string "Luckily I didn't have to wait\n"
	.string "for too long.\p"
	.string "Your brother also came through\n"
	.string "here recently.\p"
	.string "I was hoping we could all go to the\n"
	.string "mainland together but he said he\l"
	.string "couldn't waste time or we might\l"
	.string "catch up to him.\p"
	.string "I honestly don't get what goes on\n"
	.string "in his mind sometimes…\p"
	.string "Anyway, I see you too obtained\n"
	.string "the Hive Badge.\p"
	.string "Wanna have a duel and see which of us\n"
	.string "is stronger?$"

CoralgroveElevator2_RivalDefeated::
	.string "Still can't defeat you, huh…$"

CoralgroveElevator2_MayContinueOn::
	.string "I see what your brother meant by\n"
	.string "you catching up to him.\p"
	.string "You're making some serious\n"
	.string "progress as a trainer!\p"
	.string "I wouldn't be surprised if one day\n"
	.string "you were taking on the actual\l"
	.string "Pokémon League!\p"
	.string "Anyway, I was doing some shopping\n"
	.string "when I came across a pair of these.\p"
	.string "I thought you might find it useful so\n"
	.string "here you go!$"

CoralgroveElevator2_BrendanContinueOn::
	.string "I see what your brother meant by\n"
	.string "you catching up to him.\p"
	.string "You're quickly becoming\n"
	.string "a truly outstanding trainer!\p"
	.string "If someone in your family were to one\n"
	.string "day become the League Champion,\l"
	.string "it wouldn't surprise me if it was you.\p"
	.string "Anyway, I was doing some shopping\n"
	.string "when I came across a pair of these.\p"
	.string "I thought you might find it useful so\n"
	.string "here, I want you to have this.$"

CoralgroveElevator2_BrendanDowsing::
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "You can use it to root around for items\n"
	.string "that aren't usually visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to the mainland\n"
	.string "to look for new Pokémon.$"

CoralgroveElevator2_MayDowsing::
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time!$"
