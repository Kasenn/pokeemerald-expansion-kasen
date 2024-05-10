Lab2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lab2_HideRival
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 3, Lab2_Intro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 9, Lab2_DexGet
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 11, Lab2_GetMegaStone
	.2byte 0


Lab2_GetMegaStone::
	clearflag FLAG_HIDE_LAB_RIVAL
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_MovePlayerUp
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
	setvar VAR_PEARLWOOD_TOWN_STATE, 13
	waitse
Lab2_GetMegaStone_4:
	delay 24
	applymovement 4, ProfBackAndForth
	waitmovement 0
	applymovement 5, Common_Movement_WalkInPlaceFasterLeft
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_GetMegaStone_9
	compare VAR_PEARLWOOD_TOWN_STATE, 12
	goto_if_eq Lab2_GetMegaStone_20
	msgbox GonnaTakeMyLeave_Brendan
	applymovement 5, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox ThanksDadBirch
Lab2_GetMegaStone_8:
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
	setvar VAR_PEARLWOOD_TOWN_STATE, 12
	goto Lab2_GetMegaStone_4

Lab2_GetMegaStone_9:
	compare VAR_PEARLWOOD_TOWN_STATE, 12
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
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_MovePlayerUp
	waitmovement 0
	msgbox Lab2_Intro_Speech, MSGBOX_DEFAULT
	closemessage
	delay 20
	turnobject 4, DIR_EAST
	delay 20
	msgbox Lab2_PresentingBalls, MSGBOX_DEFAULT
	closemessage
	delay 20
	setvar VAR_PEARLWOOD_TOWN_STATE, 4
	releaseall
	end


Lab2_MovePlayerUp:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Lab2_HideRival::
	call Common_EventScript_SetupRivalGfxId
	compare VAR_PEARLWOOD_TOWN_STATE, 9
	goto_if_eq Lab2_HideRival_1
	setflag FLAG_HIDE_LAB_RIVAL
	return

Lab2_HideRival_1:
	clearflag FLAG_HIDE_LAB_RIVAL
	return


Lab2_DexGet::
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_MovePlayerUp
	waitmovement 0
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_2
Lab2_DexGet_1:
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab2_DexGet_5
Lab2_DexGet_4:
	waitmessage
	closemessage
	playse MUS_OBTAIN_ITEM
	msgbox Lab2_DexGet_Text_0
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special EnableNationalPokedex
	setflag FLAG_ADVENTURE_STARTED
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
	setvar VAR_OLDALE_TOWN_STATE, 1
	waitfanfare
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_TurnRight
	applymovement 5, Lab2_TurnLeft
	waitmovement 0
	msgbox Lab2_DexGet_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	waitmessage
	msgbox Lab2_DexGet_Text_2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Lab2_DexGet_8
Lab2_DexGet_7:
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab2_DexGet_11
Lab2_DexGet_10:
	applymovement OBJ_EVENT_ID_PLAYER, Lab2FaceDown
	applymovement 5, Lab2_Movement_RivalExit1
	waitmovement 0
	closemessage
	delay 60
	goto Lab2_RivalEnd
	end

Lab2_DexGet_2:
	msgbox Lab2_DexTalkMay, MSGBOX_DEFAULT
	goto Lab2_DexGet_1

Lab2_DexGet_5:
	msgbox Lab2_DexTalkBrendan, MSGBOX_DEFAULT
	goto Lab2_DexGet_4

Lab2_DexGet_8:
	msgbox Lab2_DexGet_Text_3
	goto Lab2_DexGet_7

Lab2_DexGet_11:
	msgbox Lab2_DexGet_Text_4
	goto Lab2_DexGet_10


Lab2_RivalEnd::
	removeobject 5
	setflag FLAG_HIDE_LAB_RIVAL
	setvar VAR_PEARLWOOD_TOWN_STATE, 10
	clearflag FLAG_ROUTE1_STATE
	savebgm MUS_DUMMY
	applymovement OBJ_EVENT_ID_PLAYER, Lab2FaceUp
	waitmovement 0
	fadedefaultbgm
	delay 25
	msgbox Lab2_RivalEnd_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end


Lab2_TurnLeft:
	face_left
	step_end

Lab2FaceUp:
	face_up
	step_end

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

Lab2_TurnRight:
	face_right
	step_end

Lab2_Birch::
	lockall
	faceplayer
	compare VAR_PEARLWOOD_TOWN_STATE, 14
	goto_if_eq Lab2_Birch_2
	compare VAR_PEARLWOOD_TOWN_STATE, 13
	goto_if_eq Lab2_Birch_5
	compare VAR_PEARLWOOD_TOWN_STATE, 12
	goto_if_eq Lab2_Birch_8
	goto_if_unset FLAG_UNUSED_PICKEDROWLET, Lab2_Birch_13
Lab2_Birch_12:
	msgbox Lab2_Birch_Text_1
Lab2_Birch_10:
	waitmessage
	release
	end

Lab2_Birch_2:
	call ProfBirch_EventScript_RatePokedexOrRegister
	end

Lab2_Birch_5:
	msgbox YourFatherIsInTown, MSGBOX_NPC
	end

Lab2_Birch_8:
	msgbox HeresYourStoneNow
	closemessage
	checkitemspace ITEM_DECIDUEITE
	compare VAR_RESULT, FALSE
	goto_if_eq Lab2_Birch_18
	switch VAR_STARTER_MON
	case 0, Lab2_Birch_23
	case 1, Lab2_Birch_24
	case 2, Lab2_Birch_25
Lab2_Birch_21:
	setvar VAR_PEARLWOOD_TOWN_STATE, 13
	waitse
	release
	end

Lab2_Birch_11:
	msgbox Lab2_Birch_Text_0
	goto Lab2_Birch_10

Lab2_Birch_13:
	goto_if_unset FLAG_UNUSED_PICKEDTORCHIC, Lab2_Birch_15
	goto Lab2_Birch_12

Lab2_Birch_15:
	goto_if_unset FLAG_UNUSED_PICKEDPIPLUP, Lab2_Birch_11
	goto Lab2_Birch_12

Lab2_Birch_18:
	msgbox ComeGetYourStoneLaterShort, MSGBOX_NPC
	end

Lab2_Birch_23:
	giveitem ITEM_DECIDUEITE
	goto Lab2_Birch_21

Lab2_Birch_24:
	giveitem ITEM_BLAZIKENITE
	goto Lab2_Birch_21

Lab2_Birch_25:
	giveitem ITEM_EMPOLEONITE
	goto Lab2_Birch_21


Lab2_Ball1::
	lockall
	goto_if_unset FLAG_UNUSED_PICKEDROWLET, Lab2_Ball1_4
Lab2_Ball1_3:
	msgbox Lab2_Ball1_Text_0
Lab2_Ball1_1:
	waitmessage
	release
	end

Lab2_Ball1_2:
	call Lab2_Rowlet
	goto Lab2_Ball1_1

Lab2_Ball1_4:
	goto_if_unset FLAG_UNUSED_PICKEDTORCHIC, Lab2_Ball1_6
	goto Lab2_Ball1_3

Lab2_Ball1_6:
	goto_if_unset FLAG_UNUSED_PICKEDPIPLUP, Lab2_Ball1_2
	goto Lab2_Ball1_3


Lab2_Ball2::
	lockall
	goto_if_unset FLAG_UNUSED_PICKEDROWLET, Lab2_Ball2_4
Lab2_Ball2_3:
	msgbox Lab2_Ball1_Text_0
Lab2_Ball2_1:
	waitmessage
	release
	end

Lab2_Ball2_2:
	call Lab2_Torchic
	goto Lab2_Ball2_1

Lab2_Ball2_4:
	goto_if_unset FLAG_UNUSED_PICKEDTORCHIC, Lab2_Ball2_6
	goto Lab2_Ball2_3

Lab2_Ball2_6:
	goto_if_unset FLAG_UNUSED_PICKEDPIPLUP, Lab2_Ball2_2
	goto Lab2_Ball2_3


Lab2_Ball3::
	lockall
	goto_if_unset FLAG_UNUSED_PICKEDROWLET, Lab2_Ball3_4
Lab2_Ball3_3:
	msgbox Lab2_Ball1_Text_0
Lab2_Ball3_1:
	waitmessage
	release
	end

Lab2_Ball3_2:
	call Lab2_Piplup
	goto Lab2_Ball3_1

Lab2_Ball3_4:
	goto_if_unset FLAG_UNUSED_PICKEDTORCHIC, Lab2_Ball3_6
	goto Lab2_Ball3_3

Lab2_Ball3_6:
	goto_if_unset FLAG_UNUSED_PICKEDPIPLUP, Lab2_Ball3_2
	goto Lab2_Ball3_3


Lab2_Rowlet::
	lockall
	showmonpic SPECIES_ROWLET, 10, 3
	msgbox Lab2_Rowlet_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Lab2_Rowlet_2
	hidemonpic
	msgbox Lab2_NotChosen
Lab2_Rowlet_1:
	waitmessage
	release
	end

Lab2_Rowlet_2:
	givemon SPECIES_ROWLET, 5, 0
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lab2_Rowlet_5
	goto Lab2_Rowlet_1

Lab2_Rowlet_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Lab2_Rowlet_Text_1
	removeobject 1
	setflag FLAG_UNUSED_PICKEDROWLET
	setvar VAR_STARTER_MON, 0
	call Lab2SetFlags
	call NicknamePartyMon
	goto Lab2_Rowlet_1


Lab2_Torchic::
	lockall
	showmonpic SPECIES_TORCHIC, 10, 3
	msgbox Lab2_Torchic_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Lab2_Torchic_2
	hidemonpic
	msgbox Lab2_NotChosen
Lab2_Torchic_1:
	waitmessage
	release
	end

Lab2_Torchic_2:
	givemon SPECIES_TORCHIC, 5, 0
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lab2_Torchic_5
	goto Lab2_Torchic_1

Lab2_Torchic_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Lab2_Torchic_Text_1
	removeobject 2
	setflag FLAG_UNUSED_PICKEDTORCHIC
	setvar VAR_STARTER_MON, 1
	call Lab2SetFlags
	call NicknamePartyMon
	goto Lab2_Torchic_1


Lab2_Piplup::
	lockall
	showmonpic SPECIES_PIPLUP, 10, 3
	msgbox Lab2_Piplup_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Lab2_Piplup_2
	hidemonpic
	msgbox Lab2_NotChosen
Lab2_Piplup_1:
	waitmessage
	release
	end

Lab2_Piplup_2:
	givemon SPECIES_PIPLUP, 5, 0
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Lab2_Piplup_5
	goto Lab2_Piplup_1

Lab2_Piplup_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox Lab2_Piplup_Text_1
	removeobject 3
	setflag FLAG_UNUSED_PICKEDPIPLUP
	setvar VAR_STARTER_MON, 2
	call Lab2SetFlags
	call NicknamePartyMon
	goto Lab2_Piplup_1


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


Lab2SetFlags::
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_UNUSED_STARTER_GET
	setflag FLAG_ROUTE1_STATE
	clearflag FLAG_UNUSED_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 5
	return


Lab2_NoLeave::
	lockall
	msgbox Lab2_NoLeave_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	release
	end


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

Lab2_RivalEnd_Text_0:
	.string "Prof. Birch: Sigh…\pSometimes I wonder\nwhere {RIVAL} gets all that energy…$"

Lab2_Birch_Text_0:
	.string "Prof. Birch: Go on, pick one of the\nballs from the table.$"

Lab2_Birch_Text_1:
	.string "Prof. Birch: I hope you take\ngood care of your new companion.$"

Lab2_Ball1_Text_0:
	.string "You already received a Pokémon.$"

Lab2_Rowlet_Text_0:
	.string "Do you want to choose Rowlet?$"

Lab2_Rowlet_Text_1:
	.string "{PLAYER} received the Rowlet!$"

Lab2_Torchic_Text_0:
	.string "Do you want to choose Torchic?$"

Lab2_Torchic_Text_1:
	.string "{PLAYER} received the Torchic!$"

Lab2_Piplup_Text_0:
	.string "Do you want to choose Piplup?$"

Lab2_Piplup_Text_1:
	.string "{PLAYER} received the Piplup!$"

NicknamePartyMon_Text_0:
	.string "Do you want to give a nickname \nto your new Pokémon?$"

Lab2_NoLeave_Text_0:
	.string "You haven't chosen a Pokémon yet!$"

LabMegaStones::
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "what a pleasant surprise.\l"
	.string "I was hoping to see you two soon.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor Sycamore\l"
	.string "of Kalos, I have been able to greatly\l"
	.string "further my research.\p"
	.string "This is where you two come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "evolution within certain Pokémon.\p"
	.string "I would like you two to test out my\n"
	.string "theory, and see if your Pokémon are\l"
	.string "able to somehow interact with these\l"
	.string "Mega Stones.\p"
	.string "I want you both to have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I gave you.$"

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

GonnaGoAhead_May::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You make sure you grab yours as well,\n"
	.string "{PLAYER}!"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't have access\l"
	.string "to Mega Evolution!$"

GonnaTakeMyLeave_May::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You better train your Pokémon to use\n"
	.string "the stone, {PLAYER}!"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't have access\l"
	.string "to Mega Evolution!$"

GonnaGoAhead_Brendan::
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "Make sure you grab yours before you\n"
	.string "leave, {PLAYER}."
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
	.string "Prof. Birch: Hello!\nYou must be {PLAYER}!\pAs you may know, it is customary in\nthis town for every young person to\lbe given their very first Pokémon.\pSome people use this opportunity to\ngo on a journey of self-discovery\lwhile some are content with\lwhere they are now.\pWhat you do with your Pokémon is\nyour decision.$"

Lab2_PresentingBalls::
	.string "Over there on the table lies three\nPoké Balls. Each of them stores\lsome very rare Pokémon.\pYou may now go and choose one of them\nas your own.\pYou may only choose one so make sure\nyou decide carefully!$"

Lab2_NotChosen::
	.string "Take your time.$"
