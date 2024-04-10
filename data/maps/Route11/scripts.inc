Route11_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route11_BrokenBridge
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_BrokenBridge
	.byte 0


Route11_BrokenBridge::
	goto_if_unset FLAG_VISITED_SANDSTONE_CITY, Route11_BrokenBridge_2
Route11_BrokenBridge_1:
	call Route11_TryMoveDayCareMan
	call Common_EventScript_SetupRivalGfxId
	call Common_EventScript_SetupRivalOnBikeGfxId
	end

Route11_BrokenBridge_2:
	setmetatile 82, 8, 0x075, TRUE
	setmetatile 83, 8, 0x075, TRUE
	setmetatile 84, 8, 0x075, TRUE
	setmetatile 85, 8, 0x190, TRUE
	setmetatile 86, 8, 0x170, TRUE
	setmetatile 87, 8, 0x170, TRUE
	setmetatile 88, 8, 0x192, TRUE
	setmetatile 89, 8, 0x073, TRUE
	setmetatile 90, 8, 0x073, TRUE
	setmetatile 91, 8, 0x073, TRUE
	setmetatile 82, 9, 0x075, TRUE
	setmetatile 83, 9, 0x10E, TRUE
	setmetatile 84, 9, 0x075, TRUE
	setmetatile 85, 9, 0x190, TRUE
	setmetatile 86, 9, 0x170, TRUE
	setmetatile 87, 9, 0x170, TRUE
	setmetatile 88, 9, 0x192, TRUE
	setmetatile 89, 9, 0x073, TRUE
	setmetatile 90, 9, 0x10E, TRUE
	setmetatile 91, 9, 0x073, TRUE
	setmetatile 83, 10, 0x116, TRUE
	setmetatile 84, 10, 0x10E, TRUE
	setmetatile 85, 10, 0x190, TRUE
	setmetatile 86, 10, 0x170, TRUE
	setmetatile 87, 10, 0x170, TRUE
	setmetatile 88, 10, 0x192, TRUE
	setmetatile 89, 10, 0x10E, TRUE
	setmetatile 90, 10, 0x116, TRUE
	setmetatile 84, 11, 0x116, TRUE
	setmetatile 85, 11, 0x2C0, TRUE
	setmetatile 86, 11, 0x2E2, TRUE
	setmetatile 87, 11, 0x2E2, TRUE
	setmetatile 88, 11, 0x2C7, TRUE
	setmetatile 89, 11, 0x116, TRUE
	setmetatile 85, 12, 0x2D0, TRUE
	setmetatile 86, 12, 0x2EA, TRUE
	setmetatile 87, 12, 0x2EA, TRUE
	setmetatile 88, 12, 0x2D7, TRUE
	goto Route11_BrokenBridge_1


Route11_UpdateDayCareMan::
	call Route11_TryMoveDayCareMan
	release
	return


Route11_TryMoveDayCareMan::
	goto_if_unset FLAG_PENDING_DAYCARE_EGG, Route11_StopMoveDayCareMan
	setobjectxyperm 4, 68, 6
	return


Route11_StopMoveDayCareMan::
	setobjectxyperm 4, 68, 4
	release
	return


Route11_CaveManiac::
	goto_if_set FLAG_ITEM_ROUTE_11_TORMENT, Route11_CaveManiac_2
	lock
	faceplayer
	msgbox LeaveMeAlone_Torment, MSGBOX_DEFAULT
	checkitemspace ITEM_TM_TORMENT
	compare VAR_RESULT, FALSE
	goto_if_eq Route11_CaveManiac_5
	giveitem ITEM_TM_TORMENT
	waitse
	waitmessage
	setflag FLAG_ITEM_ROUTE_11_TORMENT
	closemessage
	release
	end

Route11_CaveManiac_2:
	msgbox LeaveThisCave, MSGBOX_NPC
	end

Route11_CaveManiac_5:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Route11_RepairGuy::
	msgbox Route11_RepairGuy_Text, MSGBOX_NPC
	end


Route11_Tr1_Lass::
	trainerbattle_single TRAINER_R11_TR1_LASS, R11Tr1_Intro, R11Tr1_Lose, IncreaseR11Var
	msgbox R11Tr1_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr2_Birdkeeper::
	trainerbattle_single TRAINER_R11_TR2_BIRDKEEPER, R11Tr2_Intro, R11Tr2_Lose, IncreaseR11Var
	msgbox R11Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr3_Bugcatcher::
	trainerbattle_single TRAINER_R11_TR3_BUGCATCHER, R11Tr3_Intro, R11Tr3_Lose, IncreaseR11Var
	msgbox R11Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr4_Ninjaboy::
	trainerbattle_single TRAINER_R11_TR4_NINJABOY, R11Tr4_Intro, R11Tr4_Lose, IncreaseR11Var
	msgbox R11Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr5_Pokemaniac::
	trainerbattle_single TRAINER_R11_TR5_POKEMANIAC, R11Tr5_Intro, R11Tr5_Lose, IncreaseR11Var
	msgbox R11Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr6_Triathlete_F::
	trainerbattle_single TRAINER_R11_TR6_TRIATHLETE_F, R11Tr6_Intro, R11Tr6_Lose, IncreaseR11Var
	msgbox R11Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr7_Hiker::
	trainerbattle_single TRAINER_R11_TR7_HIKER, R11Tr7_Intro, R11Tr7_Lose, IncreaseR11Var
	msgbox R11Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr8_Ninjaboy_2::
	trainerbattle_single TRAINER_R11_TR8_NINJABOY_2, R11Tr8_Intro, R11Tr8_Lose, IncreaseR11Var
	msgbox R11Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr9_Ninjaboy_3::
	trainerbattle_single TRAINER_R11_TR9_NINJABOY_3, R11Tr9_Intro, R11Tr9_Lose, IncreaseR11Var
	msgbox R11Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr10_Cycler_M::
	trainerbattle_single TRAINER_R11_TR10_CYCLER_M, R11Tr10_Intro, R11Tr10_Lose, IncreaseR11Var
	msgbox R11Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr11_Blackbelt::
	trainerbattle_single TRAINER_R11_TR11_BLACKBELT, R11Tr11_Intro, R11Tr11_Lose, IncreaseR11Var
	msgbox R11Tr11_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr12_Expert::
	trainerbattle_single TRAINER_R11_TR12_EXPERT, R11Tr12_Intro, R11Tr12_Lose, IncreaseR11Var
	msgbox R11Tr12_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr13_Psychic_F::
	trainerbattle_single TRAINER_R11_TR13_PSYCHIC_F, R11Tr13_Intro, R11Tr13_Lose, IncreaseR11Var
	msgbox R11Tr13_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr14_Acetrainer_F::
	trainerbattle_single TRAINER_R11_TR14_ACETRAINER_F, R11Tr14_Intro, R11Tr14_Lose, IncreaseR11Var
	msgbox R11Tr14_PostBattle, MSGBOX_AUTOCLOSE
	end


IncreaseR11Var::
	addvar VAR_R11_TRAINERS, 1
	end


R11_RivalTrigger1::
	setvar VAR_TEMP_1, 1
	goto R11_RivalEvent
	end


R11_RivalTrigger2::
	setvar VAR_TEMP_1, 2
	goto R11_RivalEvent
	end


R11_RivalEvent::
	lockall
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	turnobject 9, DIR_SOUTH
	delay 70
	compare VAR_TEMP_1, 1
	goto_if_eq R11_RivalEvent_2
	applymovement OBJ_EVENT_ID_PLAYER, R11_Move2
R11_RivalEvent_1:
	waitmovement 0
	checkplayergender
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, R11_RivalEvent_5
	goto R11_RivalNotAngry
	return

R11_RivalEvent_2:
	applymovement OBJ_EVENT_ID_PLAYER, R11_Move1
	goto R11_RivalEvent_1

R11_RivalEvent_5:
	goto R11_RivalAngry
	return


R11_Move1:
	walk_up
	walk_right
	walk_up
	step_end

R11_Move2:
	walk_up
	walk_up
	step_end

KorrinaMove1:
	walk_down
	walk_in_place_right
	face_right
	step_end

KorrinaInPlace:
	walk_in_place_right
	face_right
	step_end

KorrinaMoveBack:
	walk_left
	walk_left
	walk_in_place_right
	face_right
	step_end

KorrinaMoveForward:
	walk_right
	walk_right
	face_right
	step_end

R11KorrinaLeaves:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

R11RivalLeaves:
	walk_up
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

R11_RivalAngry::
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalAngry_2
	msgbox BrendanAngryIntro, MSGBOX_DEFAULT
R11_RivalAngry_1:
	call KorrinaIntro
	msgbox RivalAngry_Text, MSGBOX_DEFAULT
	call KorrinaMovesBack
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalAngry_6
	goto R11_AngryBrendanBattleSetup
R11_RivalAngry_5:
	end

R11_RivalAngry_2:
	msgbox MayAngryIntro, MSGBOX_DEFAULT
	goto R11_RivalAngry_1

R11_RivalAngry_6:
	goto R11_AngryMayBattleSetup
	goto R11_RivalAngry_5


R11_RivalNotAngry::
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalNotAngry_2
	msgbox BrendanNotAngryIntro, MSGBOX_DEFAULT
R11_RivalNotAngry_1:
	call KorrinaIntro
	msgbox RivalNotAngry_Text, MSGBOX_DEFAULT
	call KorrinaMovesBack
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalNotAngry_6
	goto R11_BrendanBattleSetup
R11_RivalNotAngry_5:
	end

R11_RivalNotAngry_2:
	msgbox MayNotAngryIntro, MSGBOX_DEFAULT
	goto R11_RivalNotAngry_1

R11_RivalNotAngry_6:
	goto R11_MayBattleSetup
	goto R11_RivalNotAngry_5


KorrinaIntro::
	closemessage
	playse SE_PIN
	applymovement 8, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	turnobject 8, DIR_WEST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	delay 30
	msgbox ThisPersonIs, MSGBOX_DEFAULT
	closemessage
	delay 20
	applymovement 9, KorrinaMove1
	waitmovement 0
	delay 30
	msgbox KorrinaIntro_Text, MSGBOX_DEFAULT
	closemessage
	delay 30
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	turnobject 8, DIR_SOUTH
	delay 30
	return


KorrinaMovesBack::
	closemessage
	applymovement 9, KorrinaInPlace
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	delay 10
	msgbox KorrinaGiveRoom, MSGBOX_DEFAULT
	closemessage
	applymovement 9, KorrinaMoveBack
	waitmovement 0
	delay 20
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 40
	return


R11_AngryMayBattleSetup::
	goto_if_set FLAG_UNUSED_PICKEDROWLET, R11_AngryMayBattleSetup_2
R11_AngryMayBattleSetup_1:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, R11_AngryMayBattleSetup_5
R11_AngryMayBattleSetup_4:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, R11_AngryMayBattleSetup_7
	return

R11_AngryMayBattleSetup_2:
	trainerbattle_no_intro TRAINER_R11_MAY_ROWLET_ANGRY, R11_AngryMayDefeated
	goto R11_RivalPostBattle
	goto R11_AngryMayBattleSetup_1

R11_AngryMayBattleSetup_5:
	trainerbattle_no_intro TRAINER_R11_MAY_TORCHIC_ANGRY, R11_AngryMayDefeated
	goto R11_RivalPostBattle
	goto R11_AngryMayBattleSetup_4

R11_AngryMayBattleSetup_7:
	trainerbattle_no_intro TRAINER_R11_MAY_PIPLUP_ANGRY, R11_AngryMayDefeated
	goto R11_RivalPostBattle
	return


R11_AngryBrendanBattleSetup::
	goto_if_set FLAG_UNUSED_PICKEDROWLET, R11_AngryBrendanBattleSetup_2
R11_AngryBrendanBattleSetup_1:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, R11_AngryBrendanBattleSetup_5
R11_AngryBrendanBattleSetup_4:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, R11_AngryBrendanBattleSetup_7
	return

R11_AngryBrendanBattleSetup_2:
	trainerbattle_no_intro TRAINER_R11_BRENDAN_ROWLET_ANGRY, R11_AngryBrendanDefeated
	goto R11_RivalPostBattle
	goto R11_AngryBrendanBattleSetup_1

R11_AngryBrendanBattleSetup_5:
	trainerbattle_no_intro TRAINER_R11_BRENDAN_TORCHIC_ANGRY, R11_AngryBrendanDefeated
	goto R11_RivalPostBattle
	goto R11_AngryBrendanBattleSetup_4

R11_AngryBrendanBattleSetup_7:
	trainerbattle_no_intro TRAINER_R11_BRENDAN_PIPLUP_ANGRY, R11_AngryBrendanDefeated
	goto R11_RivalPostBattle
	return


R11_MayBattleSetup::
	goto_if_set FLAG_UNUSED_PICKEDROWLET, R11_MayBattleSetup_2
R11_MayBattleSetup_1:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, R11_MayBattleSetup_5
R11_MayBattleSetup_4:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, R11_MayBattleSetup_7
	return

R11_MayBattleSetup_2:
	trainerbattle_no_intro TRAINER_R11_MAY_ROWLET, R11_MayDefeated
	goto R11_RivalPostBattle
	goto R11_MayBattleSetup_1

R11_MayBattleSetup_5:
	trainerbattle_no_intro TRAINER_R11_MAY_TORHIC, R11_MayDefeated
	goto R11_RivalPostBattle
	goto R11_MayBattleSetup_4

R11_MayBattleSetup_7:
	trainerbattle_no_intro TRAINER_R11_MAY_PIPLUP, R11_MayDefeated
	goto R11_RivalPostBattle
	return


R11_BrendanBattleSetup::
	goto_if_set FLAG_UNUSED_PICKEDROWLET, R11_BrendanBattleSetup_2
R11_BrendanBattleSetup_1:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, R11_BrendanBattleSetup_5
R11_BrendanBattleSetup_4:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, R11_BrendanBattleSetup_7
	return

R11_BrendanBattleSetup_2:
	trainerbattle_no_intro TRAINER_R11_BRENDAN_ROWLET, R11_BrendanDefeated
	goto R11_RivalPostBattle
	goto R11_BrendanBattleSetup_1

R11_BrendanBattleSetup_5:
	trainerbattle_no_intro TRAINER_R11_BRENDAN_TORCHIC, R11_BrendanDefeated
	goto R11_RivalPostBattle
	goto R11_BrendanBattleSetup_4

R11_BrendanBattleSetup_7:
	trainerbattle_no_intro TRAINER_R11_BRENDAN_PIPLUP, R11_BrendanDefeated
	goto R11_RivalPostBattle
	return


R11_RivalPostBattle::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalPostBattle_2
	msgbox R11_BrendanPostText, MSGBOX_DEFAULT
R11_RivalPostBattle_1:
	closemessage
	applymovement 9, KorrinaMoveForward
	waitmovement 0
	delay 10
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	delay 30
	msgbox KorrinaComeChallenge, MSGBOX_DEFAULT
	closemessage
	applymovement 9, R11KorrinaLeaves
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	delay 30
	checkitem ITEM_DOWSING_MACHINE
	compare VAR_RESULT, FALSE
	goto_if_eq R11_RivalPostBattle_6
R11_RivalPostBattle_5:
	goto R11_RivalExits
	return

R11_RivalPostBattle_2:
	msgbox R11_MayPostText, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_1

R11_RivalPostBattle_6:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalPostBattle_9
	msgbox R11_BrendanGiveDowsingMchn, MSGBOX_DEFAULT
R11_RivalPostBattle_8:
	giveitem ITEM_DOWSING_MACHINE
	waitse
	waitmessage
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalPostBattle_12
	msgbox R11_BrendanDowsing, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_5

R11_RivalPostBattle_9:
	msgbox R11_MayGiveDowsingMchn, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_8

R11_RivalPostBattle_12:
	msgbox R11_MayDowsing, MSGBOX_DEFAULT
	goto R11_RivalPostBattle_5


R11_RivalExits::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq R11_RivalExits_2
	msgbox R11BrendanChallengeKorrina, MSGBOX_DEFAULT
	closemessage
	delay 15
R11_RivalExits_1:
	setflag FLAG_HIDE_ROUTE_110_RIVAL
	clearflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	call Common_EventScript_SetupRivalOnBikeGfxId
	hideobjectat 8, MAP_ROUTE11
	addobject 28
	showobjectat 28, MAP_ROUTE11
	special DrawWholeMapView
	delay 40
	applymovement 28, R11RivalLeaves
	waitmovement 0
	setvar VAR_ROUTE11_STATE, 1
	setflag FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE
	removeobject 9
	removeobject 8
	removeobject 28
	savebgm MUS_DUMMY
	fadedefaultbgm
	delay 60
	release
	end

R11_RivalExits_2:
	msgbox R11MayChallengeKorrina, MSGBOX_DEFAULT
	closemessage
	delay 30
	goto R11_RivalExits_1


SetMayOutfit::
	setflag FLAG_PC_CHANGE_COSTUME
	goto_if_set FLAG_MAY_COSTUME_CHANGE, SetMayOutfit_2
	goto_if_unset FLAG_MAY_COSTUME_CHANGE, SetMayOutfit_4
	return

SetMayOutfit_2:
	clearflag FLAG_MAY_COSTUME_CHANGE
	end

SetMayOutfit_4:
	setflag FLAG_MAY_COSTUME_CHANGE
	end


LeaveMeAlone_Torment::
	.string "This is my secret hideout. Will you\n"
	.string "stop pestering me if I give you this?$"

LeaveThisCave::
	.string "Now leave me alone.$"

Route11_RepairGuy_Text::
	.string "We are working hard to get this bridge\n"
	.string "repaired as soon as possible.\p"
	.string "In the meanwhile, you'll have to take\n"
	.string "the longer route through the south.$"

R11Tr1_Intro::
	.string "$"

R11Tr1_Lose::
	.string "$"

R11Tr1_PostBattle::
	.string "$"

R11Tr2_Intro::
	.string "$"

R11Tr2_Lose::
	.string "$"

R11Tr2_PostBattle::
	.string "$"

R11Tr3_Intro::
	.string "$"

R11Tr3_Lose::
	.string "$"

R11Tr3_PostBattle::
	.string "$"

R11Tr4_Intro::
	.string "$"

R11Tr4_Lose::
	.string "$"

R11Tr4_PostBattle::
	.string "$"

R11Tr5_Intro::
	.string "$"

R11Tr5_Lose::
	.string "$"

R11Tr5_PostBattle::
	.string "$"

R11Tr6_Intro::
	.string "$"

R11Tr6_Lose::
	.string "$"

R11Tr6_PostBattle::
	.string "$"

R11Tr7_Intro::
	.string "$"

R11Tr7_Lose::
	.string "$"

R11Tr7_PostBattle::
	.string "$"

R11Tr8_Intro::
	.string "$"

R11Tr8_Lose::
	.string "$"

R11Tr8_PostBattle::
	.string "$"

R11Tr9_Intro::
	.string "$"

R11Tr9_Lose::
	.string "$"

R11Tr9_PostBattle::
	.string "$"

R11Tr10_Intro::
	.string "$"

R11Tr10_Lose::
	.string "$"

R11Tr10_PostBattle::
	.string "$"

R11Tr11_Intro::
	.string "$"

R11Tr11_Lose::
	.string "$"

R11Tr11_PostBattle::
	.string "$"

R11Tr12_Intro::
	.string "$"

R11Tr12_Lose::
	.string "$"

R11Tr12_PostBattle::
	.string "$"

R11Tr13_Intro::
	.string "$"

R11Tr13_Lose::
	.string "$"

R11Tr13_PostBattle::
	.string "$"

R11Tr14_Intro::
	.string "$"

R11Tr14_Lose::
	.string "$"

R11Tr14_PostBattle::
	.string "$"

R11_BrendanDowsing::
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "You can use it to root around for items\n"
	.string "that aren't usually visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.\p"
	.string "Anyway, I'm off to the mainland\n"
	.string "to look for new Pokémon.$"

R11_MayDowsing::
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p"
	.string "Okay, {PLAYER}, let's meet again!\p"
	.string "I know it's a little silly coming from\n"
	.string "me, but I think you should train a lot\l"
	.string "harder for the next time!$"

MayAngryIntro::
	.string "{RIVAL}: I'm angry$"

BrendanAngryIntro::
	.string "{RIVAL}: I'm disappointed$"

RivalAngry_Text::
	.string "{RIVAL}: Still angry\n"
	.string "Let's battle$"

MayNotAngryIntro::
	.string "{RIVAL}: I'm not angry$"

BrendanNotAngryIntro::
	.string "{RIVAL}: I'm not disappointed$"

RivalNotAngry_Text::
	.string "{RIVAL}: Still not angry\n"
	.string "Let's battle$"

ThisPersonIs::
	.string "{RIVAL}: This person is...$"

KorrinaIntro_Text::
	.string "Heyo! I'm Korrina!$"

KorrinaGiveRoom::
	.string "Korrina: This seems fun\n"
	.string "I give you 2 room$"

R11_AngryMayDefeated::
	.string "{RIVAL}: I'm angry and defeated!$"

R11_AngryBrendanDefeated::
	.string "{RIVAL}: I'm angry and disappointed!$"

R11_MayDefeated::
	.string "{RIVAL}: I'm not angry and defeated!$"

R11_BrendanDefeated::
	.string "{RIVAL}: I'm not angry and disappointed!$"

R11_MayPostText::
	.string "{RIVAL}: Wow, -kun, you're strong!$"

R11_BrendanPostText::
	.string "{RIVAL}: Wow, -chan, you're strong!$"

KorrinaComeChallenge::
	.string "Korrina: Good battle\n"
	.string "Find me at my Gym$"

R11_MayGiveDowsingMchn::
	.string "{RIVAL}: Was gonna give this to\n"
	.string "you but then you bailed on me!$"

R11_BrendanGiveDowsingMchn::
	.string "{RIVAL}: Was gonna give this to\n"
	.string "you but then you left me behind$"

R11MayChallengeKorrina::
	.string "{RIVAL}: I'm gonna go challenge Korrina!$"

R11BrendanChallengeKorrina::
	.string "{RIVAL}: Let's go challenge Korrina$"
