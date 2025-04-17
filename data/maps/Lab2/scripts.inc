Lab2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lab2_On_Transition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES, Lab2_Intro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL, Lab2_Intro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW, Lab2_DexGet
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED, Lab2_GetMegaStone
	.2byte 0


Lab2_On_Transition::
	goto_if_set FLAG_SYS_POKEMON_GET, Lab2_On_Transition_2
Lab2_On_Transition_1:
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	goto_if_ge Lab2_On_Transition_5
Lab2_On_Transition_4:
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	goto_if_eq Lab2_On_Transition_11
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_eq Lab2_On_Transition_11
	setflag FLAG_HIDE_LAB_RIVAL
	return

Lab2_On_Transition_2:
	switch VAR_STARTER_MON
	case 0, Lab2_On_Transition_8
	case 1, Lab2_On_Transition_9
	case 2, Lab2_On_Transition_10
	goto Lab2_On_Transition_1

Lab2_On_Transition_5:
	setobjectxyperm 1, 20, 0
	setobjectxyperm 2, 20, 0
	setobjectxyperm 3, 20, 0
	goto Lab2_On_Transition_4

Lab2_On_Transition_8:
	setobjectxyperm 1, 20, 0
	goto Lab2_On_Transition_1

Lab2_On_Transition_9:
	setobjectxyperm 2, 20, 0
	goto Lab2_On_Transition_1

Lab2_On_Transition_10:
	setobjectxyperm 3, 20, 0
	goto Lab2_On_Transition_1

Lab2_On_Transition_11:
	call Common_EventScript_SetupRivalGfxId
	clearflag FLAG_HIDE_LAB_RIVAL
	return


Lab2_Intro::
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
	lock
	msgbox Lab2_Intro_Speech
	closemessage
	delay 20
	turnobject 4, DIR_EAST
	delay 20
	msgbox Lab2_PresentingBalls
	closemessage
	delay 20
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PROF_INTRO
	release
	return


Lab2_DexGet::
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
	unlockfollowermovement
	lock
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_2
Lab2_DexGet_1:
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab2_DexGet_5
Lab2_DexGet_4:
	closemessage
	playfanfare MUS_OBTAIN_TMHM
	message Lab2_DexGet_Text_0
	waitmessage
	waitfanfare
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 5, DIR_WEST
	msgbox Lab2_DexGet_Text_1
	giveitem ITEM_POKE_BALL, 5
	msgbox Lab2_DexGet_Text_2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_8
	msgbox Lab2_DexGet_Text_4
Lab2_DexGet_7:
	closemessage
	applymovement OBJ_EVENT_ID_FOLLOWER, Lab2FaceDown
	applymovement OBJ_EVENT_ID_PLAYER, Lab2FaceDown
	applymovement 5, Lab2_Movement_RivalExit1
	waitmovement 0
	delay 60
	removeobject 5
	savebgm MUS_DUMMY
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	fadedefaultbgm
	delay 25
	msgbox Lab2_DexGet_Text_5, MSGBOX_DEFAULT
	special SetUnlockedPokedexFlags
	setflag FLAG_SYS_POKEDEX_GET
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	release
	end

Lab2_DexGet_2:
	msgbox Lab2_DexTalkMayA
	msgbox Lab2_DexTalkMayB
	msgbox Lab2_DexTalkMayC
	msgbox Lab2_DexTalkMayD
	msgbox Lab2_DexTalkMayE
	msgbox Lab2_DexTalkMayF
	msgbox Lab2_DexTalkMayG
	msgbox Lab2_DexTalkMayH
	goto Lab2_DexGet_1

Lab2_DexGet_5:
	msgbox Lab2_DexTalkBrendanA
	msgbox Lab2_DexTalkBrendanB
	msgbox Lab2_DexTalkBrendanC
	msgbox Lab2_DexTalkBrendanD
	msgbox Lab2_DexTalkBrendanE
	msgbox Lab2_DexTalkBrendanF
	msgbox Lab2_DexTalkBrendanG
	msgbox Lab2_DexTalkBrendanH
	goto Lab2_DexGet_4

Lab2_DexGet_8:
	msgbox Lab2_DexGet_Text_3
	goto Lab2_DexGet_7


Lab2_GetMegaStone::
	safefollow
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_2
	msgbox LabMegaStones
Lab2_GetMegaStone_1:
	closemessage
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab2_GetMegaStone_6
Lab2_GetMegaStone_5:
	checkitemspace ITEM_DECIDUEITE
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_GetMegaStone_9
	switch VAR_STARTER_MON
	case 0, Lab2_GetMegaStone_21
	case 1, Lab2_GetMegaStone_22
	case 2, Lab2_GetMegaStone_23
Lab2_GetMegaStone_19:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_GetMegaStone_33
Lab2_GetMegaStone_31:
	waitse
Lab2_GetMegaStone_8:
	goto_if_unset FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_13
Lab2_GetMegaStone_12:
	release
	goto_if_set FLAG_Q33_PROF_BIRCH_MEGASTONE_START, Lab2_GetMegaStone_25
Lab2_GetMegaStone_24:
	end

Lab2_GetMegaStone_2:
	msgbox LabMegaStonesWithoutRival
	goto Lab2_GetMegaStone_1

Lab2_GetMegaStone_6:
	playse SE_PIN
	applymovement 4, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	msgbox TradedAwayStarter
	closemessage
	goto Lab2_GetMegaStone_5

Lab2_GetMegaStone_9:
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab2_GetMegaStone_16
	msgbox ComeGetYourStoneLater
Lab2_GetMegaStone_15:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto Lab2_GetMegaStone_8

Lab2_GetMegaStone_13:
	closemessage
	delay 24
	applymovement 4, ProfBackAndForth
	waitmovement 0
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_GetMegaStone_28
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_GetMegaStone_39
	msgbox GonnaTakeMyLeave_Brendan
Lab2_GetMegaStone_27:
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ThanksDadBirch
	closemessage
	applymovement 5, RivalLeavesLab
	applymovement OBJ_EVENT_ID_PLAYER, TurnPlayer
	waitmovement 5
	removeobject 5
	goto Lab2_GetMegaStone_12

Lab2_GetMegaStone_16:
	msgbox ComeGetYourStoneLaterWithoutRival
	goto Lab2_GetMegaStone_15

Lab2_GetMegaStone_21:
	giveitem ITEM_DECIDUEITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_22:
	giveitem ITEM_BLAZIKENITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_23:
	giveitem ITEM_EMPOLEONITE
	goto Lab2_GetMegaStone_19

Lab2_GetMegaStone_25:
	completequest FLAG_Q33_PROF_BIRCH_MEGASTONE_COMPLETE
	special ShowJournalPopupRemove
	goto Lab2_GetMegaStone_24

Lab2_GetMegaStone_28:
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_GetMegaStone_36
	msgbox GonnaTakeMyLeave_May
	goto Lab2_GetMegaStone_27

Lab2_GetMegaStone_32:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab2_GetMegaStone_31

Lab2_GetMegaStone_33:
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_GetMegaStone_32
	goto Lab2_GetMegaStone_31

Lab2_GetMegaStone_36:
	msgbox GonnaGoAhead_May
	goto Lab2_GetMegaStone_27

Lab2_GetMegaStone_39:
	msgbox GonnaGoAhead_Brendan
	goto Lab2_GetMegaStone_27


Lab2_Birch::
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PROF_INTRO
	goto_if_eq Lab2_Birch_2
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	goto_if_le Lab2_Birch_3
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_Birch_4
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GET_MEGA_STONE_LATER
	goto_if_eq Lab2_Birch_5
	call ProfBirch_EventScript_RatePokedexOrRegister
Lab2_Birch_1:
	release
	end

Lab2_Birch_2:
	msgbox PickABall, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_3:
	msgbox TakeCareOfPokemon, MSGBOX_NPC
	goto Lab2_Birch_1

Lab2_Birch_4:
	msgbox YourFatherIsInTown, MSGBOX_NPC
	goto_if_unset FLAG_Q34_DADS_HOME_START, Lab2_Birch_11
	goto Lab2_Birch_1

Lab2_Birch_5:
	lock
	faceplayer
	msgbox HeresYourStoneNow
	checkitemspace ITEM_DECIDUEITE
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_Birch_13
	switch VAR_STARTER_MON
	case 0, Lab2_Birch_18
	case 1, Lab2_Birch_19
	case 2, Lab2_Birch_20
Lab2_Birch_16:
	waitse
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq Lab2_Birch_22
	goto Lab2_Birch_1

Lab2_Birch_11:
	startquest FLAG_Q34_DADS_HOME_START
	special ShowJournalPopupAdd
	goto Lab2_Birch_1

Lab2_Birch_13:
	msgbox ComeGetYourStoneLaterShort, MSGBOX_NPC
	end

Lab2_Birch_18:
	giveitem ITEM_DECIDUEITE
	goto Lab2_Birch_16

Lab2_Birch_19:
	giveitem ITEM_BLAZIKENITE
	goto Lab2_Birch_16

Lab2_Birch_20:
	giveitem ITEM_EMPOLEONITE
	goto Lab2_Birch_16

Lab2_Birch_21:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab2_Birch_1

Lab2_Birch_22:
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_Birch_21
	goto Lab2_Birch_1


Lab2_Ball1::
	setvar VAR_TEMP_3, SPECIES_ROWLET
	goto Lab_BallMain
	return


Lab2_Ball2::
	setvar VAR_TEMP_3, SPECIES_TORCHIC
	goto Lab_BallMain
	return


Lab2_Ball3::
	setvar VAR_TEMP_3, SPECIES_PIPLUP
	goto Lab_BallMain
	return


Lab_BallMain::
	goto_if_set FLAG_SYS_POKEMON_GET, Lab_BallMain_2
	lock
	waitse
	playmoncry VAR_TEMP_3, CRY_MODE_NORMAL
	showmonpic VAR_TEMP_3, 10, 3
	waitmoncry
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
	msgbox Lab_BallMain_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Lab_BallMain_5
	givemon VAR_TEMP_3, 5
	playfanfare MUS_OBTAIN_ITEM
	message Lab_BallMain_Text_2
	waitmessage
	waitfanfare
	setobjectxy VAR_LAST_TALKED, 20, 0
	setobjectxyperm VAR_LAST_TALKED, 20, 0
	applymovement VAR_LAST_TALKED, Walk1Up
	switch VAR_TEMP_3
	case SPECIES_ROWLET, Lab_BallMain_9
	case SPECIES_TORCHIC, Lab_BallMain_10
	case SPECIES_PIPLUP, Lab_BallMain_11
Lab_BallMain_7:
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_HEAL_AFTER_BATTLE
	setvar VAR_TEMP_5, 1
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
	msgbox Lab_BallMain_Text_3, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq Lab_BallMain_13
Lab_BallMain_12:
	callnative UpdateFollowingPokemon
	release
	return

Lab_BallMain_2:
	msgbox Lab_BallMain_Text_0, MSGBOX_SIGN
	end

Lab_BallMain_5:
	hidemonpic
	msgbox Lab2_NotChosen
	release
	end

Lab_BallMain_9:
	setvar VAR_STARTER_MON, 0
	goto Lab_BallMain_7

Lab_BallMain_10:
	setvar VAR_STARTER_MON, 1
	goto Lab_BallMain_7

Lab_BallMain_11:
	setvar VAR_STARTER_MON, 2
	goto Lab_BallMain_7

Lab_BallMain_13:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Lab_BallMain_12


Lab_FollowerEvent2::
	setflag FLAG_TEMP_10
	goto Lab_FollowerEvent
	return


Lab_FollowerEvent::
	safefollow
	unlockfollowermovement
	lock
	playse SE_PIN
	goto_if_set FLAG_TEMP_10, Lab_FollowerEvent_2
	turnobject 4, DIR_EAST
Lab_FollowerEvent_1:
	applymovement 4, ExclamationMark
	waitmovement 0
	delay 48
	msgbox BirchSurprised
	msgbox Lab_FollowerEvent_Text_0
	setvar VAR_TEMP_5, 0
	clearflag FLAG_HEAL_AFTER_BATTLE
	release
	return

Lab_FollowerEvent_2:
	turnobject 4, DIR_NORTH
	goto Lab_FollowerEvent_1


Lab2_NoLeave::
	lock
	msgbox Lab2_NoLeave_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	release
	return


SpawnFollower:
	set_visible
	exit_pokeball
	step_end

Lab2_Movement_RivalExit1:
	player_run_down
	player_run_down
	player_run_down
	player_run_left
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	player_run_down
	step_end

Lab2FaceDown:
	delay_16
	walk_in_place_faster_down
	step_end

ProfBackAndForth:
	walk_right
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_in_place_faster_down
	step_end

RivalLeavesLab:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

TurnPlayer:
	walk_in_place_faster_right
	walk_in_place_faster_down
	step_end

Lab2_DexGet_Text_0:
	.string "Obtained the Pokédex!$"

Lab2_DexGet_Text_1:
	.string "{RIVAL}: Here, you can have\nthese as well.$"

Lab2_DexGet_Text_2:
	.string "{RIVAL}: Now you can start catching\nyour own Pokémon and we can see which\lof us can fill our Pokédex faster!$"

Lab2_DexGet_Text_3:
	.string "Last one out the door is a rotten egg!$"

Lab2_DexGet_Text_4:
	.string "Come on, let's go catch some Pokémon!$"

Lab2_DexGet_Text_5:
	.string "Prof. Birch: Sigh…\pSometimes I wonder\nwhere {RIVAL} gets all that energy…$"

Lab_BallMain_Text_0:
	.string "You already received a Pokémon.$"

Lab_BallMain_Text_1:
	.string "Do you want to choose {STR_VAR_1}?$"

Lab_BallMain_Text_2:
	.string "{PLAYER} received the {STR_VAR_1}!$"

Lab_BallMain_Text_3:
	.string "Do you want to give a nickname\nto your new Pokémon?$"

Lab_FollowerEvent_Text_0:
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can use the party menu to set\na preferred Pokémon, withdraw your\lcurrent one, or let another one out.$"

Lab2_NoLeave_Text_0:
	.string "{COLOR RED}{SHADOW LIGHT_RED}You haven't chosen a Pokémon yet!$"

Lab2_Intro_Speech::
	.string "Prof. Birch: Hello!\n"
	.string "You must be {PLAYER}!\p"
	.string "As you may know, it is customary in\n"
	.string "this town for every young person to\l"
	.string "be given their very first Pokémon.\p"
	.string "Some people use this opportunity to\n"
	.string "go on a journey of self-discovery\l"
	.string "while some are content with\l"
	.string "where they are now.\p"
	.string "What you do with your Pokémon is\n"
	.string "your decision.$"

Lab2_PresentingBalls::
	.string "Over there on the table lies three\n"
	.string "Poké Balls. Each of them stores\l"
	.string "some very rare Pokémon.\p"
	.string "You may now go and choose one of\n"
	.string "them as your own.\p"
	.string "You may only choose one so make\n"
	.string "sure you decide carefully!$"

Lab2_DexTalkMayA::
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab2_DexTalkMayB::
	.string "{RIVAL}: Oh boy, is there…\p"
	.string "You gave {PLAYER} a Pokémon but\n"
	.string "never gave him a Pokédex, dad!\p"
	.string "How do you expect him to become\n"
	.string "a great trainer without one?!$"

Lab2_DexTalkMayC::
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab2_DexTalkMayD::
	.string "{RIVAL}: Slipped your mind?!\n"
	.string "You're a Pokémon professor!\p"
	.string "Surely you realize that giving one to\n"
	.string "{PLAYER} helps your research as well?$"

Lab2_DexTalkMayE::
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab2_DexTalkMayF::
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?!$"

Lab2_DexTalkMayG::
	.string "Prof. Birch: Here, {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab2_DexTalkMayH::
	.string "{RIVAL}: Yay! Thanks, dad!$"

Lab2_DexTalkBrendanA::
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab2_DexTalkBrendanB::
	.string "{RIVAL}: As a matter of fact, there is.\n"
	.string "You never gave {PLAYER} a Pokédex!\p"
	.string "How do you expect her to become\n"
	.string "a great trainer without one?$"

Lab2_DexTalkBrendanC::
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab2_DexTalkBrendanD::
	.string "{RIVAL}: Slipped your mind?\n"
	.string "Aren't you a Pokémon professor?\p"
	.string "Surely giving one to {PLAYER}\n"
	.string "helps your research as well.$"

Lab2_DexTalkBrendanE::
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab2_DexTalkBrendanF::
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?$"

Lab2_DexTalkBrendanG::
	.string "Prof. Birch: Yes, I know. {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab2_DexTalkBrendanH::
	.string "{RIVAL}: You're the best, dad!$"

LabMegaStones::
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "what a pleasant surprise.\l"
	.string "I was hoping to see you two soon.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor\l"
	.string "Sycamore of Kalos, I have been\l"
	.string "able to greatly further my research.\p"
	.string "This is where you two come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "Evolution within certain Pokémon.\p"
	.string "I would like you two to test out my\n"
	.string "theory, and see if your Pokémon are\l"
	.string "able to somehow interact with these\l"
	.string "Mega Stones.\p"
	.string "I want you both to have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I have given you.$"

LabMegaStonesWithoutRival::
	.string "Prof. Birch: Oh, hello, {PLAYER}.\n"
	.string "what a pleasant surprise.\p"
	.string "I must say, I was expecting to see\n"
	.string "you here a bit earlier, but I digress.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor\l"
	.string "Sycamore of Kalos, I have been\l"
	.string "able to greatly further my research.\p"
	.string "This is where you and {RIVAL} come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "Evolution within certain Pokémon.\p"
	.string "I would like you to test out my\n"
	.string "theory, and see if your Pokémon is\l"
	.string "able to somehow interact with one of\l"
	.string "these Mega Stones.\p"
	.string "I already gave {RIVAL} a stone, and\n"
	.string "I want you to also have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I have given you.$"

TradedAwayStarter::
	.string "Prof. Birch: Oh, you haven't traded my\n"
	.string "magnanimous gift away, have you?\p"
	.string "Don't worry, I'm just kidding.\p"
	.string "I can still give you the stone that's\n"
	.string "associated with the Pokémon I gave you,\l"
	.string "but you'll have to figure out where to\l"
	.string "get the stone for the Pokémon you\l"
	.string "currently have by yourself.\p"
	.string "Maybe you could try checking with the\n"
	.string "person who traded you it originally?\p"
	.string "In any case, here you go.$"

ComeGetYourStoneLater::
	.string "Prof. Birch: It seems your bag is\n"
	.string "currently too full to carry this stone.\p"
	.string "I will give {RIVAL}'s stone to them,\n"
	.string "and once you've made enough space in\l"
	.string "your bag, you too can have yours.$"

ComeGetYourStoneLaterWithoutRival::
	.string "Prof. Birch: It seems your bag is\n"
	.string "currently too full to carry this stone.\p"
	.string "You will need to clear some space in\n"
	.string "your bag before I can give this to you.$"

GonnaGoAhead_May::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You make sure you grab yours as well,\n"
	.string "{PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaTakeMyLeave_May::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You better train your Pokémon to use\n"
	.string "the stone, {PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaGoAhead_Brendan::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "Make sure you grab yours before you\n"
	.string "leave, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

GonnaTakeMyLeave_Brendan::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "I hope you train your Pokémon to get\n"
	.string "the most out of that stone, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

ThanksDadBirch::
	.string "{RIVAL}: Thanks dad! I'm going to go\n"
	.string "and give this thing a try right away!$"

PickABall::
	.string "Prof. Birch: Go on, pick one of the\n"
	.string "balls from the table.$"

TakeCareOfPokemon::
	.string "Prof. Birch: I hope you take\n"
	.string "good care of your new companion.$"

YourFatherIsInTown::
	.string "Prof. Birch: Oh, I almost forgot!\n"
	.string "Your father is currently in town.\p"
	.string "I know he's a busy man. You may want\n"
	.string "to dash on home before he leaves.$"

HeresYourStoneNow::
	.string "Prof. Birch: I hope you've made enough\n"
	.string "space in your bag to hold this stone.$"

ComeGetYourStoneLaterShort::
	.string "No, looks like your bag is still full.\p"
	.string "You will need to make some room in your\n"
	.string "bag before I can give this to you.$"

BirchSurprised::
	.string "Prof. Birch: Oh my!\p"
	.string "I knew these little fellas were\n"
	.string "energetic, but I never expected one\l"
	.string "to bust out of its ball like that!\p"
	.string "Now that you two are partners,\n"
	.string "I'm sure it will go back inside\l"
	.string "its ball if you simply ask it nicely.$"

Lab2_NotChosen::
	.string "Take your time.$"
