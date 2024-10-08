Route114_LanettesHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetMudBallLoc
	.byte 0


CanceledFabrication::
	msgbox CanceledFabrication_Text, MSGBOX_SIGN
	end


SetMudBallLoc::
	setflag FLAG_LANDMARK_LANETTES_HOUSE
	checkitem ITEM_SAMPLE_BOX
	compare VAR_RESULT, FALSE
	goto_if_eq SetMudBallLoc_2
SetMudBallLoc_1:
	goto_if_unset FLAG_MUD_REWARD_WAITING, SetMudBallLoc_4
	setvar VAR_MUD_REWARD, 0
	return

SetMudBallLoc_2:
	setflag FLAG_MUD_REWARD_WAITING
	goto SetMudBallLoc_1

SetMudBallLoc_4:
	setobjectxyperm 2, 5, 2
	return


LanettesHouse_Scientist::
	buffernumberstring STR_VAR_1, VAR_MUD_BAD_LUCK_PROTECTION
	compare VAR_MUD_REWARD, 1000
	goto_if_eq LanettesHouse_Scientist_2
	compare VAR_MUD_REWARD, 1001
	goto_if_eq LanettesHouse_Scientist_5
	compare VAR_MUD_REWARD, 1002
	goto_if_eq LanettesHouse_Scientist_8
	compare VAR_MUD_REWARD, 1003
	goto_if_eq LanettesHouse_Scientist_11
	compare VAR_MUD_REWARD, 999
	goto_if_eq LanettesHouse_Scientist_18
	checkitem ITEM_SAMPLE_BOX
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Scientist_21
	buffernumberstring STR_VAR_2, VAR_MUD_SAMPLES
	goto_if_unset FLAG_MUD_REWARD_WAITING, LanettesHouse_Scientist_24
	compare VAR_MUD_SAMPLES, 30
	goto_if_eq LanettesHouse_Scientist_27
	compare VAR_MUD_SAMPLES, 2
	goto_if_le LanettesHouse_Scientist_30
	msgbox GiveASpin, MSGBOX_NPC
	return

LanettesHouse_Scientist_2:
	msgbox WeakPrize, MSGBOX_NPC
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_5:
	msgbox MidPrize, MSGBOX_NPC
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_8:
	compare VAR_MUD_BAD_LUCK_PROTECTION, 0
	goto_if_eq LanettesHouse_Scientist_14
	msgbox GrandPrize, MSGBOX_NPC
LanettesHouse_Scientist_13:
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_11:
	msgbox ExtraPrize, MSGBOX_NPC
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_14:
	msgbox GrandPrizeFirstTime, MSGBOX_NPC
	goto LanettesHouse_Scientist_13

LanettesHouse_Scientist_18:
	msgbox FirstMudBall, MSGBOX_NPC
	setvar VAR_MUD_REWARD, 0
	end

LanettesHouse_Scientist_21:
	lock
	faceplayer
	msgbox SampleBoxIntro
	giveitem ITEM_SAMPLE_BOX
	msgbox SampleBoxIntro2, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox SampleBoxIntro3, MSGBOX_NPC
	end

LanettesHouse_Scientist_24:
	msgbox MudBallWaiting, MSGBOX_NPC
	end

LanettesHouse_Scientist_27:
	msgbox MudSamplesFull, MSGBOX_NPC
	end

LanettesHouse_Scientist_30:
	msgbox NotEnoughMudSamples, MSGBOX_NPC
	end


LanettesHouse_Extractinator::
	checkmoney 500
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Extractinator_2
	compare VAR_MUD_SAMPLES, 2
	goto_if_le LanettesHouse_Extractinator_2
	goto_if_unset FLAG_MUD_REWARD_WAITING, LanettesHouse_Extractinator_7
	call TurnExtractinatorOn
	lock
	buffernumberstring STR_VAR_1, VAR_MUD_SAMPLES
	msgbox ReadyToFabricate
	showmoneybox 0, 0
	msgbox ReadyToFabricate2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq LanettesHouse_Extractinator_10
	playse SE_SHOP
	removemoney 500
	updatemoneybox
	subvar VAR_MUD_SAMPLES, 3
	setobjectxyperm 2, 5, 1
	clearflag FLAG_MUD_REWARD_WAITING
	addobject 2
	message BeginFabrication
	waitmessage
	delay 80
	hidemoneybox
	message Fabricating
	delay 30
	waitmessage
	closemessage
	safefollow
	applymovement 2, Walk1Down
	waitmovement 0
	msgbox PleaseRemoveItemFromTray
	delay 6
	setmetatile 3, 1, 0x2A1, TRUE
	special DrawWholeMapView
	release
	end

LanettesHouse_Extractinator_2:
	playse SE_SELECT
	msgbox Extractinator_Idle, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_7:
	playse SE_SELECT
	msgbox Extractinator_PickUpTreasure, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_10:
	playse SE_PC_OFF
	delay 6
	setmetatile 3, 1, 0x2A1, TRUE
	special DrawWholeMapView
	hidemoneybox
	release
	end


TurnExtractinatorOn::
	playse SE_PC_ON
	delay 6
	setmetatile 3, 1, 0x2B1, TRUE
	special DrawWholeMapView
	delay 6
	setmetatile 3, 1, 0x2A1, TRUE
	special DrawWholeMapView
	delay 6
	setmetatile 3, 1, 0x2B1, TRUE
	special DrawWholeMapView
	delay 6
	setmetatile 3, 1, 0x2A1, TRUE
	special DrawWholeMapView
	delay 6
	delay 6
	setmetatile 3, 1, 0x2B1, TRUE
	special DrawWholeMapView
	return


LanettesHouse_PC::
	msgbox LanettesHouse_PC_Text, MSGBOX_SIGN
	return


ExtractBall::
	compare VAR_MUD_BAD_LUCK_PROTECTION, 100
	goto_if_ge ExtractBall_2
	goto_if_unset FLAG_MUD_INTRO, ExtractBall_5
	random 15
	copyvar VAR_TEMP_7, VAR_RESULT
	addvar VAR_TEMP_7, 20
	compare VAR_MUD_REWARD_1, 0
	goto_if_ne ExtractBall_8
	compare VAR_MUD_REWARD_2, 0
	goto_if_ne ExtractBall_9
	compare VAR_MUD_REWARD_3, 0
	goto_if_ne ExtractBall_10
	compare VAR_MUD_REWARD_4, 0
	goto_if_ne ExtractBall_11
	compare VAR_MUD_REWARD_5, 0
	goto_if_ne ExtractBall_12
	compare VAR_MUD_REWARD_6, 0
	goto_if_ne ExtractBall_13
	compare VAR_MUD_REWARD_7, 0
	goto_if_ne ExtractBall_14
	compare VAR_MUD_REWARD_8, 0
	goto_if_ne ExtractBall_15
	compare VAR_MUD_REWARD_9, 0
	goto_if_ne ExtractBall_16
	compare VAR_MUD_REWARD_10, 0
	goto_if_ne ExtractBall_17
ExtractBall_7:
	switch VAR_MUD_REWARD
	case 0, ExtractBall_29
	case 1, ExtractBall_29
	case 2, ExtractBall_30
	case 3, ExtractBall_30
	case 4, ExtractBall_31
	case 5, ExtractBall_31
	case 6, ExtractBall_32
	case 7, ExtractBall_32
	case 8, ExtractBall_33
	case 9, ExtractBall_33
	case 10, ExtractBall_34
	case 11, ExtractBall_34
	case 12, ExtractBall_35
	case 13, ExtractBall_35
	case 14, ExtractBall_36
	case 15, ExtractBall_36
	case 16, ExtractBall_37
	case 17, ExtractBall_37
	case 18, ExtractBall_38
	case 19, ExtractBall_38
	case 20, ExtractBall_39
	case 21, ExtractBall_39
	case 22, ExtractBall_40
	case 23, ExtractBall_40
	case 24, ExtractBall_41
	case 25, ExtractBall_41
	case 26, ExtractBall_42
	case 27, ExtractBall_42
	case 28, ExtractBall_43
	case 29, ExtractBall_43
	case 30, ExtractBall_44
	case 31, ExtractBall_44
	case 32, ExtractBall_45
	case 33, ExtractBall_45
	case 34, ExtractBall_46
	case 35, ExtractBall_46
	case 36, ExtractBall_47
	case 37, ExtractBall_47
	case 38, ExtractBall_47
	case 39, ExtractBall_47
	case 40, ExtractBall_48
	case 41, ExtractBall_48
	case 42, ExtractBall_48
	case 43, ExtractBall_48
	case 44, ExtractBall_49
	case 45, ExtractBall_49
	case 46, ExtractBall_49
	case 47, ExtractBall_49
	case 48, ExtractBall_50
	case 49, ExtractBall_50
	case 50, ExtractBall_50
	case 51, ExtractBall_50
	case 52, ExtractBall_51
	case 53, ExtractBall_51
	case 54, ExtractBall_51
	case 55, ExtractBall_51
	case 56, ExtractBall_52
	case 57, ExtractBall_52
	case 58, ExtractBall_52
	case 59, ExtractBall_52
	case 60, ExtractBall_53
	case 61, ExtractBall_53
	case 62, ExtractBall_53
	case 63, ExtractBall_53
	case 64, ExtractBall_54
	case 65, ExtractBall_54
	case 66, ExtractBall_54
	case 67, ExtractBall_54
	case 68, ExtractBall_55
	case 69, ExtractBall_55
	case 70, ExtractBall_55
	case 71, ExtractBall_55
	case 72, ExtractBall_56
	case 73, ExtractBall_56
	case 74, ExtractBall_56
	case 75, ExtractBall_56
	case 76, ExtractBall_57
	case 77, ExtractBall_57
	case 78, ExtractBall_57
	case 79, ExtractBall_57
	case 80, ExtractBall_58
	case 81, ExtractBall_58
	case 82, ExtractBall_58
	case 83, ExtractBall_58
	case 84, ExtractBall_59
	case 85, ExtractBall_60
	case 86, ExtractBall_61
	case 87, ExtractBall_62
	case 88, ExtractBall_63
	case 89, ExtractBall_63
	case 90, ExtractBall_64
	case 91, ExtractBall_64
	case 92, ExtractBall_64
	case 93, ExtractBall_64
	case 94, ExtractBall_64
	case 95, ExtractBall_64
	case 96, ExtractBall_64
	case 97, ExtractBall_64
	case 98, ExtractBall_64
	case 99, ExtractBall_64
	return

ExtractBall_2:
	call GrandPrizeRandomization
	setvar VAR_MUD_BAD_LUCK_PROTECTION, 0
	setvar VAR_MUD_REWARD, 1003
	end

ExtractBall_5:
	finditem ITEM_ANCIENT_STONE
	setvar VAR_MUD_REWARD, 999
	setflag FLAG_MUD_INTRO
	end

ExtractBall_8:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_1
	setvar VAR_MUD_REWARD_1, 0
	goto ExtractBall_7

ExtractBall_9:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_2
	setvar VAR_MUD_REWARD_2, 0
	goto ExtractBall_7

ExtractBall_10:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_3
	setvar VAR_MUD_REWARD_3, 0
	goto ExtractBall_7

ExtractBall_11:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_4
	setvar VAR_MUD_REWARD_4, 0
	goto ExtractBall_7

ExtractBall_12:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_5
	setvar VAR_MUD_REWARD_5, 0
	goto ExtractBall_7

ExtractBall_13:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_6
	setvar VAR_MUD_REWARD_6, 0
	goto ExtractBall_7

ExtractBall_14:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_7
	setvar VAR_MUD_REWARD_7, 0
	goto ExtractBall_7

ExtractBall_15:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_8
	setvar VAR_MUD_REWARD_8, 0
	goto ExtractBall_7

ExtractBall_16:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_9
	setvar VAR_MUD_REWARD_9, 0
	goto ExtractBall_7

ExtractBall_17:
	copyvar VAR_MUD_REWARD, VAR_MUD_REWARD_10
	setvar VAR_MUD_REWARD_10, 0
	goto ExtractBall_7

ExtractBall_29:
	finditem ITEM_NORMAL_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_30:
	finditem ITEM_FIRE_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_31:
	finditem ITEM_WATER_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_32:
	finditem ITEM_ELECTRIC_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_33:
	finditem ITEM_GRASS_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_34:
	finditem ITEM_ICE_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_35:
	finditem ITEM_FIGHTING_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_36:
	finditem ITEM_POISON_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_37:
	finditem ITEM_GROUND_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_38:
	finditem ITEM_FLYING_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_39:
	finditem ITEM_PSYCHIC_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_40:
	finditem ITEM_BUG_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_41:
	finditem ITEM_ROCK_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_42:
	finditem ITEM_GHOST_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_43:
	finditem ITEM_DRAGON_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_44:
	finditem ITEM_DARK_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_45:
	finditem ITEM_STEEL_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_46:
	finditem ITEM_FAIRY_GEM, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1000
	return

ExtractBall_47:
	finditem ITEM_NUGGET
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_48:
	finditem ITEM_PEARL, 2
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_49:
	finditem ITEM_RARE_BONE
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_50:
	finditem ITEM_RELIC_COPPER, 3
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_51:
	finditem ITEM_RELIC_SILVER
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_52:
	finditem ITEM_HEART_SCALE
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_53:
	finditem ITEM_BIG_NUGGET
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_54:
	finditem ITEM_BIG_PEARL
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_55:
	finditem ITEM_RED_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_56:
	finditem ITEM_BLUE_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_57:
	finditem ITEM_YELLOW_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_58:
	finditem ITEM_GREEN_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_59:
	finditem ITEM_BIG_PEARL
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_60:
	finditem ITEM_RED_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_61:
	finditem ITEM_BLUE_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_62:
	finditem ITEM_YELLOW_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_63:
	finditem ITEM_GREEN_SHARD
	addvartovar
	setvar VAR_MUD_REWARD, 1001
	return

ExtractBall_64:
	call GrandPrizeRandomization
	setvar VAR_MUD_REWARD, 1002
	return


GrandPrizeRandomization::
	goto_if_set FLAG_OBTAINED_MEGA_RING, GrandPrizeRandomization_3
GrandPrizeRandomization_1:
	checkitem ITEM_ANCIENT_STONE, 3
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_7
GrandPrizeRandomization_6:
	random 5
	copyvar VAR_TEMP_6, VAR_RESULT
	switch VAR_TEMP_6
	case 0, GrandPrizeRandomization_11
	case 1, GrandPrizeRandomization_12
	case 2, GrandPrizeRandomization_13
	case 3, GrandPrizeRandomization_14
	case 4, GrandPrizeRandomization_15
GrandPrizeRandomization_9:
	return

GrandPrizeRandomization_2:
	setflag FLAG_OBTAINED_AERODACTYLITE
	finditem ITEM_AERODACTYLITE
	return

GrandPrizeRandomization_3:
	goto_if_unset FLAG_OBTAINED_AERODACTYLITE, GrandPrizeRandomization_2
	goto GrandPrizeRandomization_1

GrandPrizeRandomization_7:
	checkitem ITEM_FOSSILIZED_BIRD
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_16
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_11:
	checkitem ITEM_FOSSILIZED_BIRD
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_19
GrandPrizeRandomization_18:
	finditem ITEM_FOSSILIZED_BIRD
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_12:
	checkitem ITEM_FOSSILIZED_DINO
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_22
GrandPrizeRandomization_21:
	finditem ITEM_FOSSILIZED_DINO
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_13:
	checkitem ITEM_FOSSILIZED_DRAKE
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_25
GrandPrizeRandomization_24:
	finditem ITEM_FOSSILIZED_DRAKE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_14:
	checkitem ITEM_FOSSILIZED_FISH
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_28
GrandPrizeRandomization_27:
	finditem ITEM_FOSSILIZED_FISH
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_15:
	checkitem ITEM_ANCIENT_STONE, 3
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_31
GrandPrizeRandomization_30:
	finditem ITEM_ANCIENT_STONE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_16:
	checkitem ITEM_FOSSILIZED_DINO
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_33
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_19:
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_18

GrandPrizeRandomization_22:
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_21

GrandPrizeRandomization_25:
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_24

GrandPrizeRandomization_28:
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_27

GrandPrizeRandomization_31:
	goto GrandPrizeLoop
	goto GrandPrizeRandomization_30

GrandPrizeRandomization_33:
	checkitem ITEM_FOSSILIZED_DRAKE
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_35
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_35:
	checkitem ITEM_FOSSILIZED_FISH
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_37
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_37:
	random 10
	compare VAR_RESULT, 2
	goto_if_ge GrandPrizeRandomization_40
	finditem ITEM_ANCIENT_STONE
GrandPrizeRandomization_39:
	return

GrandPrizeRandomization_40:
	finditem ITEM_BIG_NUGGET, 2
	goto GrandPrizeRandomization_39


GrandPrizeLoop::
	goto GrandPrizeRandomization
	return


CanceledFabrication_Text::
	.string "The game was not properly saved after\n"
	.string "starting the item fabrication process.\p"
	.string "The mud samples have been discarded.$"

WeakPrize::
	.string "Huh…\p"
	.string "I don't think that output was the best\n"
	.string "we can expect from the machine.\p"
	.string "But worry not, my data shows that the\n"
	.string "machine has stored up some minerals\l"
	.string "and is preparing to fabricate\l"
	.string "something great!$"

MidPrize::
	.string "Hmm…\p"
	.string "That wasn't bad, but I don't think\n"
	.string "it's the pinnacle of what this\l"
	.string "machine is able to fabricate.\p"
	.string "But worry not, my data shows that the\n"
	.string "machine has stored up some minerals\l"
	.string "and is preparing to fabricate\l"
	.string "something great!$"

GrandPrize::
	.string "Oh my!\p"
	.string "Now that is something worth\n"
	.string "celebrating!\p"
	.string "However, my data would suggest that\n"
	.string "this was a fluke and that any\l"
	.string "residue minerals from previous\l"
	.string "attempts are still stored inside\l"
	.string "the machine.$"

GrandPrizeFirstTime::
	.string "Oh my!\p"
	.string "Now that is something worth\n"
	.string "celebrating!\p"
	.string "I never expected to see two\n"
	.string "back-to-back fine items like that!$"

ExtraPrize::
	.string "Oh my!\p"
	.string "Looking at the data produced by the\n"
	.string "machine, I believe that outcome to be\l"
	.string "something fabricated from the piled-up\l"
	.string "minerals the machine had been saving.\p"
	.string "Even if it did take a few attempts to\n"
	.string "get there, I still believe this to be\l"
	.string "a great outcome!$"

GiveASpin::
	.string "Looks like you've collected enough\n"
	.string "mud samples.\p"
	.string "How about giving the machine a spin?$"

MudSamplesFull::
	.string "Looks like your Sample Box is full\n"
	.string "of mud samples.\p"
	.string "I don't think you can fit any more\n"
	.string "mud samples in it until you give\l"
	.string "the machine a spin.$"

NotEnoughMudSamples::
	.string "Looks like you don't have enough mud\n"
	.string "samples to fabricate any more items.\p"
	.string "If you want to give the machine a spin,\n"
	.string "I suggest heading out there and\l"
	.string "searching for more clumps of mud.\p"
	.string "If you want to know how many mud\n"
	.string "samples you have, you can always check\l"
	.string "the Sample Box in your bag.$"

FirstMudBall::
	.string "A pretty good first item you got\n"
	.string "there, I'd say!\p"
	.string "There's no telling what will come out\n"
	.string "of the machine next so we better keep\l"
	.string "feeding it more mud samples!\p"
	.string "Sometimes the machine may give out\n"
	.string "items that are of inferior quality,\l"
	.string "but that's only because it's saving\l"
	.string "the truly exquisite minerals for\l"
	.string "something grander.\p"
	.string "If you keep using the machine, I'm\n"
	.string "sure it will fabricate something\l"
	.string "great eventually!$"

MudBallWaiting::
	.string "Looks like the machine successfully\n"
	.string "fabricated an item.\p"
	.string "As promised, it's all yours.\n"
	.string "go ahead and pick it up!$"

PleaseRemoveItemFromTray::
	.string "Your item is now ready to be\n"
	.string "picked up.\p"
	.string "Please clear the table before\n"
	.string "fabricating again.$"

Fabricating::
	.string "{PLAY_SE SE_ELEVATOR}Fabricating…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}…{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}\n"
	.string "{PLAY_SE SE_DING_DONG}Fabrication completed.{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}{PAUSE 0x0F}$"

BeginFabrication::
	.string "Initializing item fabrication…$"

ReadyToFabricate::
	.string "It's a machine used to fabricate\n"
	.string "items from mud samples.\p"
	.string "You have {STR_VAR_1} mud samples.$"

ReadyToFabricate2::
	.string "Insert 3 mud samples and\n"
	.string "¥500 into the machine?$"

Extractinator_Idle::
	.string "The machine stands idle.$"

Extractinator_PickUpTreasure::
	.string "Please clear the table before\n"
	.string "fabricating again.$"

LanettesHouse_PC_Text::
	.string "The screen is full of all sorts of\n"
	.string "research data.\p"
	.string "…Better leave it be.$"

SampleBoxIntro::
	.string "Oh?\p"
	.string "I see a fine explorer has stumbled\n"
	.string "upon my humble abode!\p"
	.string "Welcome, welcome!\p"
	.string "Not many people know this, but the\n"
	.string "mud out there, it's full of riches!\p"
	.string "That is why I've been developing\n"
	.string "a machine that extracts the rich\l"
	.string "minerals from the mud and uses\l"
	.string "those to fabricate all kinds of\l"
	.string "items of interest.\p"
	.string "Here, why don't you give it a try?$"

SampleBoxIntro2::
	.string "When you're exploring Route 7, you\n"
	.string "may come across clumps of mud.\p"
	.string "All you need to do is scoop them up\n"
	.string "and place the mud samples in that box.\p"
	.string "I'm sure there has to always be at\n"
	.string "least one clump somewhere!\p"
	.string "Once you have at least 3 samples\n"
	.string "of mud, come back here and insert\l"
	.string "the samples in the machine on that\l"
	.string "wall over there.\p"
	.string "There's a small fee to use the machine\n"
	.string "but I promise that anything you find\l"
	.string "is yours to keep!$"

SampleBoxIntro3::
	.string "Oh, and one more thing!\p"
	.string "That box can only hold up to 30\n"
	.string "samples of mud so you should come\l"
	.string "and use the machine every now and then\l"
	.string "or you'll be just wasting resources!$"
