CoralgroveElevator2_MapScripts::
# 2 "data/maps/CoralgroveElevator2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetupRivalGfxId
	.byte 0


CoralgroveElevator2_Bail::
# 6 "data/maps/CoralgroveElevator2/scripts.pory"
	lock
# 7 "data/maps/CoralgroveElevator2/scripts.pory"
	safefollow
# 8 "data/maps/CoralgroveElevator2/scripts.pory"
	turnobject 1, DIR_NORTH
# 9 "data/maps/CoralgroveElevator2/scripts.pory"
	checkplayergender
# 10 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CoralgroveElevator2_Bail_2
# 14 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Bail_Female, MSGBOX_DEFAULT
CoralgroveElevator2_Bail_1:
# 16 "data/maps/CoralgroveElevator2/scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
# 17 "data/maps/CoralgroveElevator2/scripts.pory"
	release
	end

CoralgroveElevator2_Bail_2:
# 11 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Bail_Male, MSGBOX_DEFAULT
	goto CoralgroveElevator2_Bail_1


CoralgroveElevator2_Trigger1::
# 31 "data/maps/CoralgroveElevator2/scripts.pory"
	lock
# 32 "data/maps/CoralgroveElevator2/scripts.pory"
	safefollow
# 33 "data/maps/CoralgroveElevator2/scripts.pory"
	turnobject 1, DIR_WEST
# 34 "data/maps/CoralgroveElevator2/scripts.pory"
	playse SE_PIN
# 35 "data/maps/CoralgroveElevator2/scripts.pory"
	exclamationmark 1
# 36 "data/maps/CoralgroveElevator2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 37 "data/maps/CoralgroveElevator2/scripts.pory"
	waitmovement 0
# 38 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival
	return


CoralgroveElevator2_Trigger2::
# 41 "data/maps/CoralgroveElevator2/scripts.pory"
	lock
# 42 "data/maps/CoralgroveElevator2/scripts.pory"
	safefollow
# 43 "data/maps/CoralgroveElevator2/scripts.pory"
	turnobject 1, DIR_EAST
# 44 "data/maps/CoralgroveElevator2/scripts.pory"
	playse SE_PIN
# 45 "data/maps/CoralgroveElevator2/scripts.pory"
	exclamationmark 1
# 46 "data/maps/CoralgroveElevator2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 47 "data/maps/CoralgroveElevator2/scripts.pory"
	waitmovement 0
# 48 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival
	return


CoralgroveElevator2_Rival::
# 51 "data/maps/CoralgroveElevator2/scripts.pory"
	lock
# 52 "data/maps/CoralgroveElevator2/scripts.pory"
	safefollow
# 53 "data/maps/CoralgroveElevator2/scripts.pory"
	applymovement 1, FacePlayer
# 54 "data/maps/CoralgroveElevator2/scripts.pory"
	waitmovement 0
# 55 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_MAIN_STORY_BITS, STORY_DEFEATED_GYM_1
	goto_if_eq CoralgroveElevator2_Rival_1
# 65 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_Text_0, MSGBOX_YESNO
# 66 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CoralgroveElevator2_Rival_7
# 70 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_Text_1
# 71 "data/maps/CoralgroveElevator2/scripts.pory"
	waitmessage
# 72 "data/maps/CoralgroveElevator2/scripts.pory"
	closemessage
# 73 "data/maps/CoralgroveElevator2/scripts.pory"
	release
	end

CoralgroveElevator2_Rival_1:
# 56 "data/maps/CoralgroveElevator2/scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_MET_AT_CORALGROVE_ELEVATOR
	checkplayergender
# 0 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CoralgroveElevator2_Rival_4
# 61 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival_Brendan
	return

CoralgroveElevator2_Rival_4:
# 58 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival_May
	return

CoralgroveElevator2_Rival_7:
# 67 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival_BATTLECONFIG
	return


CoralgroveElevator2_Rival_May::
# 84 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_May_Speech, MSGBOX_YESNO
# 85 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CoralgroveElevator2_Rival_May_1
# 90 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_May_Text_1
# 91 "data/maps/CoralgroveElevator2/scripts.pory"
	release
# 92 "data/maps/CoralgroveElevator2/scripts.pory"
	goto_if_unset FLAG_Q02_ELEVATOR_RIVAL_START, CoralgroveElevator2_Rival_May_5
CoralgroveElevator2_Rival_May_4:
	end

CoralgroveElevator2_Rival_May_1:
# 86 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_May_Text_0, MSGBOX_DEFAULT
# 87 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival_BATTLECONFIG
	return

CoralgroveElevator2_Rival_May_5:
# 93 "data/maps/CoralgroveElevator2/scripts.pory"
	startquest FLAG_Q02_ELEVATOR_RIVAL_START
# 94 "data/maps/CoralgroveElevator2/scripts.pory"
	special ShowJournalPopupAdd
	goto CoralgroveElevator2_Rival_May_4


CoralgroveElevator2_Rival_Brendan::
# 119 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_Brendan_Speech, MSGBOX_YESNO
# 120 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CoralgroveElevator2_Rival_Brendan_1
# 125 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_Brendan_Text_0
# 126 "data/maps/CoralgroveElevator2/scripts.pory"
	release
# 127 "data/maps/CoralgroveElevator2/scripts.pory"
	goto_if_unset FLAG_Q02_ELEVATOR_RIVAL_START, CoralgroveElevator2_Rival_Brendan_5
CoralgroveElevator2_Rival_Brendan_4:
	end

CoralgroveElevator2_Rival_Brendan_1:
# 121 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_Rival_May_Text_0, MSGBOX_DEFAULT
# 122 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_Rival_BATTLECONFIG
	return

CoralgroveElevator2_Rival_Brendan_5:
# 128 "data/maps/CoralgroveElevator2/scripts.pory"
	startquest FLAG_Q02_ELEVATOR_RIVAL_START
# 129 "data/maps/CoralgroveElevator2/scripts.pory"
	special ShowJournalPopupAdd
	goto CoralgroveElevator2_Rival_Brendan_4


CoralgroveElevator2_Rival_BATTLECONFIG::
	checkplayergender
# 0 "data/maps/CoralgroveElevator2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq CoralgroveElevator2_Rival_BATTLECONFIG_1
# 158 "data/maps/CoralgroveElevator2/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_CORALGROVE_ELEVATOR, CoralgroveElevator2_RivalDefeated
# 159 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_AfterBrendanBattle
	return

CoralgroveElevator2_Rival_BATTLECONFIG_1:
# 154 "data/maps/CoralgroveElevator2/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_CORALGROVE_ELEVATOR, CoralgroveElevator2_RivalDefeated
# 155 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_AfterMayBattle
	return


CoralgroveElevator2_AfterMayBattle::
# 167 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_MayContinueOn, MSGBOX_DEFAULT
# 168 "data/maps/CoralgroveElevator2/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 169 "data/maps/CoralgroveElevator2/scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
# 170 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_MayDowsing
# 171 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_RivalExit
	end


CoralgroveElevator2_AfterBrendanBattle::
# 175 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_BrendanContinueOn, MSGBOX_DEFAULT
# 176 "data/maps/CoralgroveElevator2/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 177 "data/maps/CoralgroveElevator2/scripts.pory"
	setvar VAR_MAIN_STORY_BITS, STORY_RIVAL_DEFEATED_OR_BAILED_ON
# 178 "data/maps/CoralgroveElevator2/scripts.pory"
	msgbox CoralgroveElevator2_BrendanDowsing
# 179 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_RivalExit
	end


CoralgroveElevator2_RivalExit::
# 229 "data/maps/CoralgroveElevator2/scripts.pory"
	safefollow
# 230 "data/maps/CoralgroveElevator2/scripts.pory"
	closemessage
# 231 "data/maps/CoralgroveElevator2/scripts.pory"
	applymovement 1, Harbor_Movement_RivalExit1
# 232 "data/maps/CoralgroveElevator2/scripts.pory"
	waitmovement 0
# 233 "data/maps/CoralgroveElevator2/scripts.pory"
	goto CoralgroveElevator2_RivalEnd
	end


CoralgroveElevator2_RivalEnd::
# 237 "data/maps/CoralgroveElevator2/scripts.pory"
	removeobject 1
# 238 "data/maps/CoralgroveElevator2/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_HARBOR
# 239 "data/maps/CoralgroveElevator2/scripts.pory"
	savebgm MUS_DUMMY
# 240 "data/maps/CoralgroveElevator2/scripts.pory"
	fadedefaultbgm
# 241 "data/maps/CoralgroveElevator2/scripts.pory"
	releaseall
# 242 "data/maps/CoralgroveElevator2/scripts.pory"
	goto_if_set FLAG_Q02_ELEVATOR_RIVAL_START, CoralgroveElevator2_RivalEnd_2
CoralgroveElevator2_RivalEnd_1:
	end

CoralgroveElevator2_RivalEnd_2:
# 243 "data/maps/CoralgroveElevator2/scripts.pory"
	completequest FLAG_Q02_ELEVATOR_RIVAL_COMPLETE
# 244 "data/maps/CoralgroveElevator2/scripts.pory"
	special ShowJournalPopupRemove
	goto CoralgroveElevator2_RivalEnd_1


# 248 "data/maps/CoralgroveElevator2/scripts.pory"
Harbor_Movement_RivalExit1:
# 249 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_up
# 249 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_up
# 249 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_up
# 249 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_up
# 250 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_right
# 250 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_right
# 250 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_right
# 251 "data/maps/CoralgroveElevator2/scripts.pory"
	walk_down
	step_end

CoralgroveElevator2_Rival_Text_0:
# 65 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "{RIVAL}: Ready for a duel?$"

CoralgroveElevator2_Rival_Text_1:
# 70 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "Let me know when you're ready.$"

CoralgroveElevator2_Rival_May_Text_0:
# 86 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "Okay, let's go!$"

CoralgroveElevator2_Rival_May_Text_1:
# 90 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "I get it, you want to prepare.\pWell, don't leave me hanging!$"

CoralgroveElevator2_Rival_Brendan_Text_0:
# 125 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "It's okay, take your time.\pI'll be waiting here.$"

CoralgroveElevator2_Bail_Male::
# 20 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "{RIVAL}: Hey!\p"
	.string "You're not planning to bail on me,\n"
	.string "are you!?$"

CoralgroveElevator2_Bail_Female::
# 25 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "{RIVAL}: You're not planning to bail\n"
	.string "on me, are you?$"

CoralgroveElevator2_Rival_PostBattleMessage::
# 79 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "Next time I won't lose!$"

CoralgroveElevator2_Rival_May_Speech::
# 99 "data/maps/CoralgroveElevator2/scripts.pory"
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
# 134 "data/maps/CoralgroveElevator2/scripts.pory"
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
# 163 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "Still can't defeat you, huh…$"

CoralgroveElevator2_MayContinueOn::
# 183 "data/maps/CoralgroveElevator2/scripts.pory"
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
# 196 "data/maps/CoralgroveElevator2/scripts.pory"
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
# 209 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "You can use it to root around for items\n"
	.string "that aren't usually visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to the mainland\n"
	.string "to look for new Pokémon.$"

CoralgroveElevator2_MayDowsing::
# 218 "data/maps/CoralgroveElevator2/scripts.pory"
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time!$"
