Lab2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lab2_HideRival
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 3, Lab2_Intro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 9, Lab2_DexGet
	.2byte 0


Lab2_HideRival::
	call Common_EventScript_SetupRivalGfxId
	compare VAR_PEARLWOOD_TOWN_STATE, 9
	goto_if_eq Lab2_HideRival_1
	setflag FLAG_UNUSED_LAB_RIVAL
	return

Lab2_HideRival_1:
	clearflag FLAG_UNUSED_LAB_RIVAL
	return


Lab2_Intro::
	goto_if_unset FLAG_UNUSED_0x493, Lab2_Intro_3
Lab2_Intro_2:
	end

Lab2_Intro_1:
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_MyMove
	waitmovement 0
	msgbox Lab2_Intro_Speech
	waitmessage
	closemessage
	delay 20
	applymovement 4, Lab2_TurnRight
	waitmovement 0
	delay 20
	msgbox Lab2_PresentingBalls
	waitmessage
	closemessage
	delay 20
	setvar VAR_PEARLWOOD_TOWN_STATE, 4
	releaseall
	end

Lab2_Intro_3:
	goto_if_unset FLAG_UNUSED_0x494, Lab2_Intro_5
	goto Lab2_Intro_2

Lab2_Intro_5:
	goto_if_unset FLAG_UNUSED_0x495, Lab2_Intro_1
	goto Lab2_Intro_2


Lab2_DexGet::
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_MyMove
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
	playse MUS_RG_OBTAIN_KEY_ITEM
	msgbox Lab2_DexGet_Text_0
	setflag FLAG_SYS_POKEDEX_GET
	special EnableNationalPokedex
	setflag FLAG_ADVENTURE_STARTED
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
	setflag FLAG_UNUSED_LAB_RIVAL
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

Lab2_MyMove:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Lab2_TurnRight:
	face_right
	step_end

Lab2_Birch::
	lockall
	faceplayer
	goto_if_unset FLAG_UNUSED_0x493, Lab2_Birch_4
Lab2_Birch_3:
	msgbox Lab2_Birch_Text_1
Lab2_Birch_1:
	waitmessage
	release
	end

Lab2_Birch_2:
	msgbox Lab2_Birch_Text_0
	goto Lab2_Birch_1

Lab2_Birch_4:
	goto_if_unset FLAG_UNUSED_0x494, Lab2_Birch_6
	goto Lab2_Birch_3

Lab2_Birch_6:
	goto_if_unset FLAG_UNUSED_0x495, Lab2_Birch_2
	goto Lab2_Birch_3


Lab2_Ball1::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, Lab2_Ball1_4
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
	goto_if_unset FLAG_UNUSED_0x494, Lab2_Ball1_6
	goto Lab2_Ball1_3

Lab2_Ball1_6:
	goto_if_unset FLAG_UNUSED_0x495, Lab2_Ball1_2
	goto Lab2_Ball1_3


Lab2_Ball2::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, Lab2_Ball2_4
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
	goto_if_unset FLAG_UNUSED_0x494, Lab2_Ball2_6
	goto Lab2_Ball2_3

Lab2_Ball2_6:
	goto_if_unset FLAG_UNUSED_0x495, Lab2_Ball2_2
	goto Lab2_Ball2_3


Lab2_Ball3::
	lockall
	goto_if_unset FLAG_UNUSED_0x493, Lab2_Ball3_4
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
	goto_if_unset FLAG_UNUSED_0x494, Lab2_Ball3_6
	goto Lab2_Ball3_3

Lab2_Ball3_6:
	goto_if_unset FLAG_UNUSED_0x495, Lab2_Ball3_2
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
	setflag FLAG_UNUSED_0x493
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
	setflag FLAG_UNUSED_0x494
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
	setflag FLAG_UNUSED_0x495
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
	applymovement OBJ_EVENT_ID_PLAYER, Lab2_NoLeaveMove
	waitmovement 0
	release
	end


Lab2_NoLeaveMove:
	walk_up
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
