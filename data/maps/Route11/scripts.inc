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
	trainerbattle_single TRAINER_R11_TR8_NINJABOY_2, R11Tr8_Intro, R11Tr8_Lose
	msgbox R11Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route11_Tr9_Ninjaboy_3::
	trainerbattle_single TRAINER_R11_TR9_NINJABOY_3, R11Tr9_Intro, R11Tr9_Lose
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
	compare VAR_R11_TRAINERS, 12
	goto_if_eq Route11_Tr14_Acetrainer_F_1
	compare VAR_R11_TRAINERS, 10
	goto_if_le Route11_Tr14_Acetrainer_F_4
Route11_Tr14_Acetrainer_F_3:
	goto R11_Ace_EligibleForBattle
	return

Route11_Tr14_Acetrainer_F_1:
	msgbox R11_Ace_PostBattle, MSGBOX_NPC
	end

Route11_Tr14_Acetrainer_F_2:
	msgbox R11_Ace_DefeatMoreTrainers, MSGBOX_NPC
	end

Route11_Tr14_Acetrainer_F_4:
	checktrainerflag TRAINER_R11_TR8_NINJABOY_2
	goto_if 1, Route11_Tr14_Acetrainer_F_6
	goto Route11_Tr14_Acetrainer_F_3

Route11_Tr14_Acetrainer_F_6:
	checktrainerflag TRAINER_R11_TR9_NINJABOY_3
	goto_if 1, Route11_Tr14_Acetrainer_F_2
	goto Route11_Tr14_Acetrainer_F_3


R11_Ace_EligibleForBattle::
	lockall
	faceplayer
	checktrainerflag TRAINER_R11_TR14_ACETRAINER_F
	goto_if 1, R11_Ace_EligibleForBattle_2
R11_Ace_EligibleForBattle_1:
	goto_if_unset FLAG_TEMP_5, R11_Ace_EligibleForBattle_5
	msgbox R11_Ace_ReadyForBattleShort, MSGBOX_YESNO
R11_Ace_EligibleForBattle_4:
	compare VAR_RESULT, TRUE
	goto_if_eq R11_Ace_EligibleForBattle_9
R11_Ace_EligibleForBattle_8:
	msgbox R11_Ace_DeclineBattle, MSGBOX_NPC
	end

R11_Ace_EligibleForBattle_2:
	goto R11_Ace_PostBattleScript
	goto R11_Ace_EligibleForBattle_1

R11_Ace_EligibleForBattle_5:
	setflag FLAG_TEMP_5
	msgbox R11_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R11_Ace_EligibleForBattle_4

R11_Ace_EligibleForBattle_9:
	msgbox R11_Ace_BeginBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_R11_TR14_ACETRAINER_F, R11_Ace_Lose
	goto R11_Ace_PostBattleScript
	goto R11_Ace_EligibleForBattle_8


R11_Ace_PostBattleScript::
	msgbox R11_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_LUCKY_EGG
	compare VAR_RESULT, FALSE
	goto_if_eq R11_Ace_PostBattleScript_2
	giveitem ITEM_LUCKY_EGG
	waitfanfare
	msgbox R11_Ace_ExplainReward
	setvar VAR_R11_TRAINERS, 12
	setvar VAR_0x8004, 25
	call RewardBP
	release
	end

R11_Ace_PostBattleScript_2:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


RewardBP::
	buffernumberstring STR_VAR_1, VAR_0x8004
	special GiveFrontierBattlePoints
	playfanfare MUS_OBTAIN_B_POINTS
	msgbox RewardBP_Text_0, MSGBOX_DEFAULT
	waitfanfare
	goto_if_unset FLAG_INTRO_TO_BP, RewardBP_2
RewardBP_1:
	waitmessage
	closemessage
	return

RewardBP_2:
	msgbox ExplainBP, MSGBOX_DEFAULT
	setflag FLAG_INTRO_TO_BP
	goto RewardBP_1


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
	goto_if_set FLAG_RIVAL_HARBOR_ANGRY, KorrinaIntro_2
	msgbox ThisPersonIs, MSGBOX_DEFAULT
KorrinaIntro_1:
	closemessage
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

KorrinaIntro_2:
	msgbox ThisPersonIsAngry, MSGBOX_DEFAULT
	goto KorrinaIntro_1


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
	setvar VAR_GYM_TELEPORT, 1
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
	lock
	msgbox SetRivalGfx, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq SetMayOutfit_2
	clearflag FLAG_MAY_COSTUME_CHANGE
	clearflag FLAG_BRENDAN_COSTUME_CHANGE
SetMayOutfit_1:
	msgbox SetPlayerGfx, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq SetMayOutfit_6
	clearflag FLAG_PC_CHANGE_COSTUME
SetMayOutfit_5:
	closemessage
	release
	end

SetMayOutfit_2:
	setflag FLAG_MAY_COSTUME_CHANGE
	setflag FLAG_BRENDAN_COSTUME_CHANGE
	goto SetMayOutfit_1

SetMayOutfit_6:
	setflag FLAG_PC_CHANGE_COSTUME
	goto SetMayOutfit_5


R11VarTest::
	buffernumberstring STR_VAR_1, VAR_R11_TRAINERS
	msgbox R11VarTest_Text_0, MSGBOX_NPC
	end


RewardBP_Text_0:
	.string "Earned {STR_VAR_1} BP!$"

R11VarTest_Text_0:
	.string "{STR_VAR_1}$"

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
	.string "If you don't pay attention,\n"
	.string "you could get hurt!$"

R11Tr1_Lose::
	.string "Ouch!\n"
	.string "I was the one to get hurt.$"

R11Tr1_PostBattle::
	.string "I wonder… Should I evolve my Pokémon?\n"
	.string "They're cute the way they are, though.$"

R11Tr2_Intro::
	.string "The vast sky holds untold promise!\p"
	.string "Nothing can compare to the sheer\n"
	.string "exhilaration of flight!$"

R11Tr2_Lose::
	.string "Down and out!$"

R11Tr2_PostBattle::
	.string "My bird Pokémon made my dreams of\n"
	.string "flying come true!$"

R11Tr3_Intro::
	.string "Once a bug catcher!\n"
	.string "And now a bug maniac!\p"
	.string "But my love for Pokémon remains\n"
	.string "unchanged!$"

R11Tr3_Lose::
	.string "My ineptitude also remains\n"
	.string "unchanged…$"

R11Tr3_PostBattle::
	.string "All I did was follow my heart, and now\n"
	.string "they call me a bug maniac\p"
	.string "Still, I am an expert on bug Pokémon,\n"
	.string "so it's only natural that they call me\l"
	.string "a bug maniac.$"

R11Tr4_Intro::
	.string "Bet you didn't see me coming!$"

R11Tr4_Lose::
	.string "Even with the element of surprise,\n"
	.string "I still lost…$"

R11Tr4_PostBattle::
	.string "This tall grass perfectly hides my\n"
	.string "presence. You never know what you'll\l"
	.string "find in it.$"

R11Tr5_Intro::
	.string "… … … … … …\n"
	.string "… … … … … …\l"
	.string "Want to battle?$"

R11Tr5_Lose::
	.string "Lost it…$"

R11Tr5_PostBattle::
	.string "… … … … … …\n"
	.string "… … … … … …\l"
	.string "I'll try harder…$"

R11Tr6_Intro::
	.string "Pokémon have many special abilities.\n"
	.string "If you want to become a first-class\l"
	.string "trainer, learn about them.$"

R11Tr6_Lose::
	.string "You're obviously thinking.$"

R11Tr6_PostBattle::
	.string "The special abilities of Pokémon\n"
	.string "will make battle styles change.$"

R11Tr7_Intro::
	.string "Hohoho!\n"
	.string "I like kid trainers!\l"
	.string "Let's have a good one!$"

R11Tr7_Lose::
	.string "You're pretty amazing!\n"
	.string "Hohoho!$"

R11Tr7_PostBattle::
	.string "Hohoho!\n"
	.string "I'll try emulating trainers\l"
	.string "like you!$"

R11Tr8_Intro::
	.string "To lurk in shadows, and live in\n"
	.string "darkness… That is my destiny.\p"
	.string "I emerge to challenge you!$"

R11Tr8_Lose::
	.string "I admit defeat!$"

R11Tr8_PostBattle::
	.string "Those defeated in battle withdraw\n"
	.string "quietly back into the shadows.\l"
	.string "That, too, is destiny…$"

R11Tr9_Intro::
	.string "If you're not on your guard,\n"
	.string "you're in for some pain!$"

R11Tr9_Lose::
	.string "You're surprisingly good!$"

R11Tr9_PostBattle::
	.string "My surprise attack ended in\n"
	.string "failure…$"

R11Tr10_Intro::
	.string "A true cycler keeps battling through\n"
	.string "even the most roughest of terrains!$"

R11Tr10_Lose::
	.string "Even in defeat, I never surrender!$"

R11Tr10_PostBattle::
	.string "It's hard to cycle with all this grass\n"
	.string "around, but I will prevail!$"

R11Tr11_Intro::
	.string "My Pokémon are strong!\n"
	.string "How about yours?$"

R11Tr11_Lose::
	.string "Your Pokémon were stronger…$"

R11Tr11_PostBattle::
	.string "A Pokémon that grows steadily is one\n"
	.string "you can count on.$"

R11Tr12_Intro::
	.string "With my Pokémon, I have traveled\n"
	.string "to the world's four corners.\p"
	.string "You might say I have some confidence\n"
	.string "in my abilities.$"

R11Tr12_Lose::
	.string "Ah, well played.$"

R11Tr12_PostBattle::
	.string "I would like to circle the globe once\n"
	.string "again with my POKéMON.$"

R11Tr13_Intro::
	.string "So, we finally meet! My psychic\n"
	.string "Pokémon will keep you company!$"

R11Tr13_Lose::
	.string "I wish we'd never met…$"

R11Tr13_PostBattle::
	.string "My third eye tried to warn me, yet I\n"
	.string "didn't listen…$"

R11_Ace_PostBattle::
	.string "I can't believe I just lost…$"

R11_Ace_DefeatMoreTrainers::
	.string "Heya! I've been looking for strong\n"
	.string "trainers to challenge.\p"
	.string "Think you got what it takes? Defeat all\n"
	.string "the other trainers in this area first\l"
	.string "and seek me out then.\p"
	.string "Having issues finding everyone?\p"
	.string "I heard people talking of some ninjas\n"
	.string "hiding in the tall grass.$"

R11_Ace_Lose::
	.string "No way that just happened…$"

R11_Ace_ReadyForBattle::
	.string "Heya! I've been looking for strong\n"
	.string "trainers to challenge, and I think you\l"
	.string "might fit the bill!\p"
	.string "How about it? Feel like having\n"
	.string "a Pokémon battle?$"

R11_Ace_ReadyForBattleShort::
	.string "You're back!\p"
	.string "How about it? Feel like having\n"
	.string "a Pokémon battle?$"

R11_Ace_BeginBattle::
	.string "Cool! Let's get this show\n"
	.string "on the road!$"

R11_Ace_DeclineBattle::
	.string "Oh…\n"
	.string "Okay…\p"
	.string "Well, let me know if you change\n"
	.string "your mind…$"

R11_Ace_Reward::
	.string "I'm still a bit shocked to find someone\n"
	.string "so strong in this area.\p"
	.string "Oh well…\p"
	.string "You beat me fair and square so I think\n"
	.string "the only course of action is for you\l"
	.string "to have this.$"

R11_Ace_ExplainReward::
	.string "Having a Pokémon hold that Lucky Egg\n"
	.string "greatly increases the experience it\l"
	.string "earns from battles.\p"
	.string "If you're ever trying to level up\n"
	.string "a weaker Pokémon, just give that egg\l"
	.string "to it and watch it grow!\p"
	.string "…Oh, and before I forget, take these\n"
	.string "as well.$"

R11_BrendanDowsing::
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "You can use it to root around for items\n"
	.string "that aren't usually visible.\p"
	.string "If it senses something, it emits\n"
	.string "a sound.$"

R11_MayDowsing::
	.string "{RIVAL}: That's an Itemfinder.\p"
	.string "Try it out. If there is an item that's\n"
	.string "not visible, it emits a sound.\p$"

MayAngryIntro::
	.string "{RIVAL}: Well, well, well.\n"
	.string "Look who finally showed up!\p"
	.string "I waited for you at the Coralgrove\n"
	.string "Harbor and you just bailed on me!\p"
	.string "Why, if we weren't in the middle\n"
	.string "of something, I'd…$"

BrendanAngryIntro::
	.string "{RIVAL}: Oh? Look who just\n"
	.string "waltzed in.\p"
	.string "You know, I'm really disappointed\n"
	.string "in you, {PLAYER}.\p"
	.string "I kept waiting for you at the\n"
	.string "Coralgrove Harbor but you just\l"
	.string "walked on me…\p"
	.string "If we weren't in the middle of\n"
	.string "something, I'd…$"

RivalAngry_Text::
	.string "{RIVAL}: Don't think I forgot how you\n"
	.string "just left me behind at Coralgrove.\p"
	.string "We were meant to have a Pokémon battle,\n"
	.string "but since that never happened,\l"
	.string "I'm challenging you here and now!\p"
	.string "I've practiced extra hard for this so\n"
	.string "I hope you haven't been slacking with\l"
	.string "your training.$"

MayNotAngryIntro::
	.string "{RIVAL}: Oh, hi, {PLAYER}! Nice to see\n"
	.string "you finally caught up!\p"
	.string "I hope you've been working diligently,\n"
	.string "training your Pokémon and filling up\l"
	.string "that Pokédex of yours!\p"
	.string "Anyway, I was just having a nice\n"
	.string "chat with--$"

BrendanNotAngryIntro::
	.string "{RIVAL}: Oh, hey, {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I hope you've been working hard,\n"
	.string "training your Pokémon and filling up\l"
	.string "that Pokédex my dad gave you.\p"
	.string "Anyway, we were just chatting with--$"

RivalNotAngry_Text::
	.string "{RIVAL}: Oh, I know!\n"
	.string "It's been such a long time since our\l"
	.string "last meeting, I want to see how much\l"
	.string "you've grown.\p"
	.string "You may have won our last Pokémon\n"
	.string "battle, but don't think I'll be going\l"
	.string "down as easy this time!$"

ThisPersonIsAngry::
	.string "{RIVAL}: Oh, I just realized how rude\n"
	.string "I was being to our guest.\p"
	.string "This person is--$"

ThisPersonIs::
	.string "{RIVAL}: Oh, that's right. You two\n"
	.string "probably haven't met before.\p"
	.string "This person is--$"

KorrinaIntro_Text::
	.string "Heyo! I'm Korrina!\p"
	.string "I'm the leader of Sandstone City\n"
	.string "Pokémon Gym!\l"
	.string "Nice to meetcha!\p"
	.string "But enough about me, you must be\n"
	.string "{PLAYER}.\p"
	.string "{RIVAL} had all sorts of interesting\n"
	.string "things to say about you.\p"
	.string "I get you two are some sort friends,\n"
	.string "or rivals?\p"
	.string "I don't want to butt in so I'll let\n"
	.string "you two get caught up.$"

KorrinaGiveRoom::
	.string "Korrina: Oh, this sounds like fun!\n"
	.string "I deffo want to see this!\p"
	.string "I'll give you two some space so\n"
	.string "you can go all out.$"

R11_AngryBrendanDefeated::
	.string "After all the extra practice\n"
	.string "I still lost…$"

R11_AngryMayDefeated::
	.string "No! We practiced so hard!\n"
	.string "We can't just lose like this!$"

R11_MayDefeated::
	.string "We lost again! How does this\n"
	.string "keep happening!?$"

R11_BrendanDefeated::
	.string "I can't believe I lost again…$"

R11_MayPostText::
	.string "{RIVAL}: Wow, {PLAYER}!\p"
	.string "I never imagined your team to have\n"
	.string "grown so much!\p"
	.string "Even if I lost, I still had a lot\n"
	.string "of fun!$"

R11_BrendanPostText::
	.string "{RIVAL}: What an amazing display\n"
	.string "of skill, {PLAYER}!\p"
	.string "I was so sure that I had it there, but\n"
	.string "look who turned out to be wrong.$"

KorrinaComeChallenge::
	.string "Korrina: From the way you two fought,\n"
	.string "I can see both of you really care\l"
	.string "for your Pokémon.\p"
	.string "I like trainers like you!\p"
	.string "You know, if it's cool with you two,\n"
	.string "I'd like to personally witness both\l"
	.string "of you in action.\p"
	.string "I need to head back to the gym now,\n"
	.string "but if you're ever in the area,\l"
	.string "I hope you guys come and take on the\l"
	.string "Sandstone City Pokémon Gym challenge!\p"
	.string "Anyways, catch you guys later!$"

R11_MayGiveDowsingMchn::
	.string "{RIVAL}: Oh, that's right! There's\n"
	.string "something I was going to give to you\l"
	.string "back in Coralgrove before you bailed\l"
	.string "on me!\p"
	.string "I guess I might as well give it to\n"
	.string "you now…$"

R11_BrendanGiveDowsingMchn::
	.string "{RIVAL}: Oh, that's right! There's\n"
	.string "something I was going to give to you\l"
	.string "before you left me behind at\l"
	.string "Coralgrove.\p"
	.string "Guess now's as good a time as any\n"
	.string "to give it…$"

R11MayChallengeKorrina::
	.string "{RIVAL}: I'm not going to lie,\n"
	.string "that Korrina seemed awfully relaxed.\p"
	.string "Do you think she realized watching our\n"
	.string "battle that she has nothing to worry\l"
	.string "about?\p"
	.string "We should prepare well before taking\n"
	.string "on her gym.\p"
	.string "I'm going to head on ahead and make\n"
	.string "sure my Pokémon are well and fit by\l"
	.string "the time I take on the challenge.\p"
	.string "See you again soon!$"

R11BrendanChallengeKorrina::
	.string "{RIVAL}: I'm not going to lie,\n"
	.string "that Korrina seemed awfully relaxed.\p"
	.string "Maybe our battle made her realize the\n"
	.string "power gap between us, and now she\l"
	.string "thinks she has nothing to fret about?\p"
	.string "If that's the case, I think we should\n"
	.string "make sure to train our Pokémon and see\l"
	.string "that they are well and fit before we\l"
	.string "take on the gym.\p"
	.string "I'm going to go ahead and make sure\n"
	.string "my Pokémon get an ample amount of\l"
	.string "training.\p"
	.string "Hope to see you soon!$"

SetRivalGfx::
	.string "Use new outfit for rival?$"

SetPlayerGfx::
	.string "Use new outfit for player?$"
