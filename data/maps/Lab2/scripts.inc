Lab2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lab2_HideRival
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 2, Lab2_Intro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 3, Lab2_Intro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 8, Lab2_DexGet
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 10, Lab2_GetMegaStone
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 15, Lab2_GetMegaStoneWithoutRival
	.2byte 0


Lab2_GetMegaStoneWithoutRival::
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
	msgbox LabMegaStonesWithoutRival
	closemessage
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab2_GetMegaStoneWithoutRival_2
Lab2_GetMegaStoneWithoutRival_1:
	checkitemspace ITEM_DECIDUEITE
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_GetMegaStoneWithoutRival_5
	switch VAR_STARTER_MON
	case 0, Lab2_GetMegaStoneWithoutRival_10
	case 1, Lab2_GetMegaStoneWithoutRival_11
	case 2, Lab2_GetMegaStoneWithoutRival_12
Lab2_GetMegaStoneWithoutRival_8:
	setvar VAR_PEARLWOOD_TOWN_STATE, 20
	waitse
Lab2_GetMegaStoneWithoutRival_4:
	release
	end

Lab2_GetMegaStoneWithoutRival_2:
	playse SE_PIN
	applymovement 4, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	msgbox TradedAwayStarter
	closemessage
	goto Lab2_GetMegaStoneWithoutRival_1

Lab2_GetMegaStoneWithoutRival_5:
	msgbox ComeGetYourStoneLaterWithoutRival
	setvar VAR_PEARLWOOD_TOWN_STATE, 16
	goto Lab2_GetMegaStoneWithoutRival_4

Lab2_GetMegaStoneWithoutRival_10:
	giveitem ITEM_DECIDUEITE
	goto Lab2_GetMegaStoneWithoutRival_8

Lab2_GetMegaStoneWithoutRival_11:
	giveitem ITEM_BLAZIKENITE
	goto Lab2_GetMegaStoneWithoutRival_8

Lab2_GetMegaStoneWithoutRival_12:
	giveitem ITEM_EMPOLEONITE
	goto Lab2_GetMegaStoneWithoutRival_8


Lab2_GetMegaStone::
	clearflag FLAG_HIDE_LAB_RIVAL
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
	msgbox LabMegaStones
	closemessage
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab2_GetMegaStone_2
Lab2_GetMegaStone_1:
	checkitemspace ITEM_DECIDUEITE
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_GetMegaStone_5
	switch VAR_STARTER_MON
	case 0, Lab2_GetMegaStone_14
	case 1, Lab2_GetMegaStone_15
	case 2, Lab2_GetMegaStone_16
Lab2_GetMegaStone_12:
	setvar VAR_PEARLWOOD_TOWN_STATE, 12
	waitse
Lab2_GetMegaStone_4:
	delay 24
	closemessage
	applymovement 4, ProfBackAndForth
	waitmovement 0
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_GetMegaStone_9
	compare VAR_PEARLWOOD_TOWN_STATE, 11
	goto_if_eq Lab2_GetMegaStone_20
	msgbox GonnaTakeMyLeave_Brendan
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ThanksDadBirch
Lab2_GetMegaStone_8:
	closemessage
	applymovement 5, RivalLeavesLab
	applymovement OBJ_EVENT_ID_PLAYER, TurnPlayer
	waitmovement 5
	removeobject 5
	release
	end

Lab2_GetMegaStone_2:
	playse SE_PIN
	applymovement 4, Common_Movement_QuestionMark
	waitmovement 0
	delay 30
	msgbox TradedAwayStarter
	closemessage
	goto Lab2_GetMegaStone_1

Lab2_GetMegaStone_5:
	msgbox ComeGetYourStoneLater
	setvar VAR_PEARLWOOD_TOWN_STATE, 11
	goto Lab2_GetMegaStone_4

Lab2_GetMegaStone_9:
	compare VAR_PEARLWOOD_TOWN_STATE, 11
	goto_if_eq Lab2_GetMegaStone_17
	msgbox GonnaTakeMyLeave_May
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ThanksDadBirch
	goto Lab2_GetMegaStone_8

Lab2_GetMegaStone_14:
	giveitem ITEM_DECIDUEITE
	goto Lab2_GetMegaStone_12

Lab2_GetMegaStone_15:
	giveitem ITEM_BLAZIKENITE
	goto Lab2_GetMegaStone_12

Lab2_GetMegaStone_16:
	giveitem ITEM_EMPOLEONITE
	goto Lab2_GetMegaStone_12

Lab2_GetMegaStone_17:
	msgbox GonnaGoAhead_May
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ThanksDadBirch
	goto Lab2_GetMegaStone_8

Lab2_GetMegaStone_20:
	msgbox GonnaGoAhead_Brendan
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ThanksDadBirch
	goto Lab2_GetMegaStone_8


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

Lab2_Intro::
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
	lockall
	msgbox Lab2_Intro_Speech
	closemessage
	delay 20
	turnobject 4, DIR_EAST
	delay 20
	msgbox Lab2_PresentingBalls
	closemessage
	delay 20
	setvar VAR_PEARLWOOD_TOWN_STATE, 4
	release
	return


Lab2_HideRival::
	call Common_EventScript_SetupRivalGfxId
	goto_if_set FLAG_SYS_POKEMON_GET, Lab2_HideRival_2
Lab2_HideRival_1:
	compare VAR_PEARLWOOD_TOWN_STATE, 8
	goto_if_eq Lab2_HideRival_4
	setflag FLAG_HIDE_LAB_RIVAL
	return

Lab2_HideRival_2:
	switch VAR_STARTER_MON
	case 0, Lab2_HideRival_8
	case 1, Lab2_HideRival_9
	case 2, Lab2_HideRival_10
	goto Lab2_HideRival_1

Lab2_HideRival_4:
	clearflag FLAG_HIDE_LAB_RIVAL
	return

Lab2_HideRival_8:
	setobjectxyperm 1, 20, 0
	goto Lab2_HideRival_1

Lab2_HideRival_9:
	setobjectxyperm 2, 20, 0
	goto Lab2_HideRival_1

Lab2_HideRival_10:
	setobjectxyperm 3, 20, 0
	goto Lab2_HideRival_1


Lab2_DexGet::
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
	waitmovement 0
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
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	setvar VAR_OLDALE_TOWN_STATE, 1
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 5, DIR_WEST
	msgbox Lab2_DexGet_Text_1
	giveitem ITEM_POKE_BALL, 5
	msgbox Lab2_DexGet_Text_2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_8
Lab2_DexGet_7:
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab2_DexGet_11
Lab2_DexGet_10:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Lab2FaceDown
	applymovement 5, Lab2_Movement_RivalExit1
	waitmovement 0
	delay 60
	removeobject 5
	setvar VAR_PEARLWOOD_TOWN_STATE, 9
	clearflag FLAG_ROUTE1_STATE
	savebgm MUS_DUMMY
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	fadedefaultbgm
	delay 25
	msgbox Lab2_DexGet_Text_5, MSGBOX_DEFAULT
	release
	return

Lab2_DexGet_2:
	msgbox Lab2_DexTalkMay
	goto Lab2_DexGet_1

Lab2_DexGet_5:
	msgbox Lab2_DexTalkBrendan
	goto Lab2_DexGet_4

Lab2_DexGet_8:
	msgbox Lab2_DexGet_Text_3
	goto Lab2_DexGet_7

Lab2_DexGet_11:
	msgbox Lab2_DexGet_Text_4
	goto Lab2_DexGet_10


Lab2_Movement_RivalExit1:
	player_run_down
	player_run_left
	player_run_down
	player_run_down
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

Lab2_Birch::
	lockall
	faceplayer
	compare VAR_PEARLWOOD_TOWN_STATE, 13
	goto_if_eq Lab2_Birch_2
	compare VAR_PEARLWOOD_TOWN_STATE, 20
	goto_if_eq Lab2_Birch_2
	compare VAR_PEARLWOOD_TOWN_STATE, 9
	goto_if_eq Lab2_Birch_2
	compare VAR_PEARLWOOD_TOWN_STATE, 12
	goto_if_eq Lab2_Birch_9
	compare VAR_PEARLWOOD_TOWN_STATE, 11
	goto_if_eq Lab2_Birch_12
	compare VAR_PEARLWOOD_TOWN_STATE, 16
	goto_if_eq Lab2_Birch_12
	goto_if_unset FLAG_SYS_POKEMON_GET, Lab2_Birch_20
	msgbox Lab2_Birch_Text_1
Lab2_Birch_19:
	waitmessage
	release
	end

Lab2_Birch_2:
	call ProfBirch_EventScript_RatePokedexOrRegister
	end

Lab2_Birch_9:
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab2_Birch_17
	msgbox YourFatherIsInTown, MSGBOX_NPC
	end

Lab2_Birch_12:
	msgbox HeresYourStoneNow
	closemessage
	checkitemspace ITEM_DECIDUEITE
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_Birch_23
	switch VAR_STARTER_MON
	case 0, Lab2_Birch_28
	case 1, Lab2_Birch_29
	case 2, Lab2_Birch_30
Lab2_Birch_26:
	compare VAR_PEARLWOOD_TOWN_STATE, 16
	goto_if_eq Lab2_Birch_32
	setvar VAR_PEARLWOOD_TOWN_STATE, 12
Lab2_Birch_31:
	waitse
	release
	end

Lab2_Birch_17:
	call ProfBirch_EventScript_RatePokedexOrRegister
	end

Lab2_Birch_20:
	msgbox Lab2_Birch_Text_0
	goto Lab2_Birch_19

Lab2_Birch_23:
	msgbox ComeGetYourStoneLaterShort, MSGBOX_NPC
	end

Lab2_Birch_28:
	giveitem ITEM_DECIDUEITE
	goto Lab2_Birch_26

Lab2_Birch_29:
	giveitem ITEM_BLAZIKENITE
	goto Lab2_Birch_26

Lab2_Birch_30:
	giveitem ITEM_EMPOLEONITE
	goto Lab2_Birch_26

Lab2_Birch_32:
	setvar VAR_PEARLWOOD_TOWN_STATE, 20
	goto Lab2_Birch_31


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
	setflag FLAG_ROUTE1_STATE
	clearflag FLAG_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 5
	msgbox Lab_BallMain_Text_3, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq Lab_BallMain_13
Lab_BallMain_12:
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


Lab2_NoLeave::
	lock
	msgbox Lab2_NoLeave_Text_0
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	release
	return


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

Lab2_Birch_Text_0:
	.string "Prof. Birch: Go on, pick one of the\nballs from the table.$"

Lab2_Birch_Text_1:
	.string "Prof. Birch: I hope you take\ngood care of your new companion.$"

Lab_BallMain_Text_0:
	.string "You already received a Pokémon.$"

Lab_BallMain_Text_1:
	.string "Do you want to choose {STR_VAR_1}?$"

Lab_BallMain_Text_2:
	.string "{PLAYER} received the {STR_VAR_1}!$"

Lab_BallMain_Text_3:
	.string "Do you want to give a nickname\nto your new Pokémon?$"

Lab2_NoLeave_Text_0:
	.string "{COLOR RED}{SHADOW LIGHT_RED}You haven't chosen a Pokémon yet!$"

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

Lab2_DexTalkMay::
	.string "Prof. Birch: {RIVAL}, {PLAYER},\nis there something you need?\p"
	.string "{RIVAL}: Oh boy, is there…\pYou gave {PLAYER} a Pokémon but\nnever gave him a Pokédex, dad!\pHow do you expect him to become\n a great trainer without one!?\p"
	.string "Prof. Birch: Oh, it must've\nslipped my mind…\p"
	.string "{RIVAL}: Slipped your mind!?\nYou're a Pokémon professor!\p"
	.string "Surely you realize that giving one to\n{PLAYER} helps your research as well?\p"
	.string "Prof. Birch: I know, I know.\nI'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\l… … … …\pAh, darn it.\pLooks like I don't have any extra\nlying around at this time…\p"
	.string "{RIVAL}: Well we can't have {PLAYER}\nleaving empty-handed, now can we!?\p"
	.string "Prof. Birch: Here, {PLAYER},\nyou can have mine.\lI'll order myself a new one.\p"
	.string "{RIVAL}: Yay! Thanks, dad!\n$"

Lab2_DexTalkBrendan::
	.string "Prof. Birch: {RIVAL}, {PLAYER},\nis there something you need?\p"
	.string "{RIVAL}: As a matter of fact, there is.\nYou never gave {PLAYER} a Pokédex!\p"
	.string "How do you expect her to become\n a great trainer without one?\p"
	.string "Prof. Birch: Oh, it must've\nslipped my mind…\p"
	.string "{RIVAL}: Slipped your mind?\nAren't you a Pokémon professor?\p"
	.string "Surely giving one to {PLAYER}\nhelps your research as well.\p"
	.string "Prof. Birch: I know, I know.\nI'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\l… … … …\pAh, darn it.\pLooks like I don't have any extra\nlying around at this time…\p"
	.string "{RIVAL}: Well we can't have {PLAYER}\nleaving empty-handed, now can we?\p"
	.string "Prof. Birch: Yes, I know. {PLAYER},\nyou can have mine.\lI'll order myself a new one.\p"
	.string "{RIVAL}: You're the best, dad!\n$"

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

Lab2_NotChosen::
	.string "Take your time.$"
