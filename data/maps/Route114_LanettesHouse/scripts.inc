Route114_LanettesHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SetMudBallLoc
	.byte 0


CanceledFabrication::
	msgbox CanceledFabrication_Text, MSGBOX_SIGN
	end


SetMudBallLoc::
	checkitem ITEM_SAMPLE_BOX
	compare VAR_RESULT, FALSE
	goto_if_eq SetMudBallLoc_2
SetMudBallLoc_1:
	goto_if_unset FLAG_MUD_REWARD_WAITING, SetMudBallLoc_5
SetMudBallLoc_4:
	clearflag FLAG_MUD_WEAK_PRIZE
	clearflag FLAG_MUD_MID_PRIZE
	clearflag FLAG_MUD_GRAND_PRIZE
	clearflag FLAG_MUD_EXTRA_PRIZE
	return

SetMudBallLoc_2:
	setflag FLAG_MUD_REWARD_WAITING
	goto SetMudBallLoc_1

SetMudBallLoc_5:
	setobjectxyperm 2, 5, 2
	goto SetMudBallLoc_4


LanettesHouse_Scientist::
	buffernumberstring STR_VAR_1, VAR_MUD_BAD_LUCK_PROTECTION
	goto_if_set FLAG_MUD_WEAK_PRIZE, LanettesHouse_Scientist_2
	goto_if_set FLAG_MUD_MID_PRIZE, LanettesHouse_Scientist_5
	goto_if_set FLAG_MUD_GRAND_PRIZE, LanettesHouse_Scientist_8
	goto_if_set FLAG_MUD_EXTRA_PRIZE, LanettesHouse_Scientist_11
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
	clearflag FLAG_MUD_WEAK_PRIZE
	end

LanettesHouse_Scientist_5:
	msgbox MidPrize, MSGBOX_NPC
	clearflag FLAG_MUD_MID_PRIZE
	end

LanettesHouse_Scientist_8:
	compare VAR_MUD_BAD_LUCK_PROTECTION, 0
	goto_if_eq LanettesHouse_Scientist_14
	msgbox GrandPrize, MSGBOX_NPC
LanettesHouse_Scientist_13:
	clearflag FLAG_MUD_GRAND_PRIZE
	end

LanettesHouse_Scientist_11:
	msgbox ExtraPrize, MSGBOX_NPC
	clearflag FLAG_MUD_EXTRA_PRIZE
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
	lock
	showmoneybox 0, 0
	buffernumberstring STR_VAR_1, VAR_MUD_SAMPLES
	msgbox ReadyToFabricate, MSGBOX_YESNO
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
	random 100
	copyvar VAR_MUD_REWARD, VAR_RESULT
	delay 30
	waitmessage
	closemessage
	applymovement 2, Walk1Down
	waitmovement 0
	msgbox PleaseRemoveItemFromTray
	release
	end

LanettesHouse_Extractinator_2:
	msgbox Extractinator_Idle, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_7:
	msgbox Extractinator_PickUpTreasure, MSGBOX_SIGN
	end

LanettesHouse_Extractinator_10:
	hidemoneybox
	release
	end


LanettesHouse_PC::
	msgbox LanettesHouse_PC_Text, MSGBOX_SIGN
	return


ExtractBall::
	clearflag FLAG_MUD_WEAK_PRIZE
	clearflag FLAG_MUD_MID_PRIZE
	clearflag FLAG_MUD_GRAND_PRIZE
	clearflag FLAG_MUD_EXTRA_PRIZE
	compare VAR_MUD_BAD_LUCK_PROTECTION, 100
	goto_if_ge ExtractBall_2
	goto_if_unset FLAG_MUD_INTRO, ExtractBall_5
	random 15
	copyvar VAR_TEMP_7, VAR_RESULT
	addvar VAR_TEMP_7, 20
	switch VAR_MUD_REWARD
	case 0, ExtractBall_8
	case 1, ExtractBall_8
	case 2, ExtractBall_9
	case 3, ExtractBall_9
	case 4, ExtractBall_10
	case 5, ExtractBall_10
	case 6, ExtractBall_11
	case 7, ExtractBall_11
	case 8, ExtractBall_12
	case 9, ExtractBall_12
	case 10, ExtractBall_13
	case 11, ExtractBall_13
	case 12, ExtractBall_14
	case 13, ExtractBall_14
	case 14, ExtractBall_15
	case 15, ExtractBall_15
	case 16, ExtractBall_16
	case 17, ExtractBall_16
	case 18, ExtractBall_17
	case 19, ExtractBall_17
	case 20, ExtractBall_18
	case 21, ExtractBall_18
	case 22, ExtractBall_19
	case 23, ExtractBall_19
	case 24, ExtractBall_20
	case 25, ExtractBall_20
	case 26, ExtractBall_21
	case 27, ExtractBall_21
	case 28, ExtractBall_22
	case 29, ExtractBall_22
	case 30, ExtractBall_23
	case 31, ExtractBall_23
	case 32, ExtractBall_24
	case 33, ExtractBall_24
	case 34, ExtractBall_25
	case 35, ExtractBall_25
	case 36, ExtractBall_26
	case 37, ExtractBall_26
	case 38, ExtractBall_26
	case 39, ExtractBall_26
	case 40, ExtractBall_27
	case 41, ExtractBall_27
	case 42, ExtractBall_27
	case 43, ExtractBall_27
	case 44, ExtractBall_28
	case 45, ExtractBall_28
	case 46, ExtractBall_28
	case 47, ExtractBall_28
	case 48, ExtractBall_29
	case 49, ExtractBall_29
	case 50, ExtractBall_29
	case 51, ExtractBall_29
	case 52, ExtractBall_30
	case 53, ExtractBall_30
	case 54, ExtractBall_30
	case 55, ExtractBall_30
	case 56, ExtractBall_31
	case 57, ExtractBall_31
	case 58, ExtractBall_31
	case 59, ExtractBall_31
	case 60, ExtractBall_32
	case 61, ExtractBall_32
	case 62, ExtractBall_32
	case 63, ExtractBall_32
	case 64, ExtractBall_33
	case 65, ExtractBall_33
	case 66, ExtractBall_33
	case 67, ExtractBall_33
	case 68, ExtractBall_34
	case 69, ExtractBall_34
	case 70, ExtractBall_34
	case 71, ExtractBall_34
	case 72, ExtractBall_35
	case 73, ExtractBall_35
	case 74, ExtractBall_35
	case 75, ExtractBall_35
	case 76, ExtractBall_36
	case 77, ExtractBall_36
	case 78, ExtractBall_36
	case 79, ExtractBall_36
	case 80, ExtractBall_37
	case 81, ExtractBall_37
	case 82, ExtractBall_37
	case 83, ExtractBall_37
	case 84, ExtractBall_38
	case 85, ExtractBall_39
	case 86, ExtractBall_40
	case 87, ExtractBall_41
	case 88, ExtractBall_42
	case 89, ExtractBall_42
	case 90, ExtractBall_43
	case 91, ExtractBall_43
	case 92, ExtractBall_43
	case 93, ExtractBall_43
	case 94, ExtractBall_43
	case 95, ExtractBall_43
	case 96, ExtractBall_43
	case 97, ExtractBall_43
	case 98, ExtractBall_43
	case 99, ExtractBall_43
	return

ExtractBall_2:
	call GrandPrizeRandomization
	setvar VAR_MUD_BAD_LUCK_PROTECTION, 0
	setflag FLAG_MUD_EXTRA_PRIZE
	end

ExtractBall_5:
	finditem ITEM_ANCIENT_STONE
	setvar VAR_MUD_REWARD, 999
	setflag FLAG_MUD_INTRO
	end

ExtractBall_8:
	finditem ITEM_NORMAL_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_9:
	finditem ITEM_FIRE_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_10:
	finditem ITEM_WATER_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_11:
	finditem ITEM_ELECTRIC_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_12:
	finditem ITEM_GRASS_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_13:
	finditem ITEM_ICE_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_14:
	finditem ITEM_FIGHTING_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_15:
	finditem ITEM_POISON_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_16:
	finditem ITEM_GROUND_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_17:
	finditem ITEM_FLYING_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_18:
	finditem ITEM_PSYCHIC_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_19:
	finditem ITEM_BUG_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_20:
	finditem ITEM_ROCK_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_21:
	finditem ITEM_GHOST_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_22:
	finditem ITEM_DRAGON_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_23:
	finditem ITEM_DARK_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_24:
	finditem ITEM_STEEL_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_25:
	finditem ITEM_FAIRY_GEM, 2
	addvartovar
	setflag FLAG_MUD_WEAK_PRIZE
	return

ExtractBall_26:
	finditem ITEM_NUGGET
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_27:
	finditem ITEM_PEARL, 2
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_28:
	finditem ITEM_RARE_BONE
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_29:
	finditem ITEM_RELIC_COPPER, 3
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_30:
	finditem ITEM_RELIC_SILVER
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_31:
	finditem ITEM_HEART_SCALE
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_32:
	finditem ITEM_BIG_NUGGET
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_33:
	finditem ITEM_BIG_PEARL
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_34:
	finditem ITEM_RED_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_35:
	finditem ITEM_BLUE_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_36:
	finditem ITEM_YELLOW_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_37:
	finditem ITEM_GREEN_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_38:
	finditem ITEM_BIG_PEARL
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_39:
	finditem ITEM_RED_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_40:
	finditem ITEM_BLUE_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_41:
	finditem ITEM_YELLOW_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_42:
	finditem ITEM_GREEN_SHARD
	addvartovar
	setflag FLAG_MUD_MID_PRIZE
	return

ExtractBall_43:
	call GrandPrizeRandomization
	setflag FLAG_MUD_GRAND_PRIZE
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
	finditem ITEM_ANCIENT_STONE
	goto GrandPrizeRandomization_9

GrandPrizeRandomization_16:
	checkitem ITEM_FOSSILIZED_DINO
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_30
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_19:
	addvar VAR_TEMP_6, 1
	goto GrandPrizeRandomization_18

GrandPrizeRandomization_22:
	addvar VAR_TEMP_6, 1
	goto GrandPrizeRandomization_21

GrandPrizeRandomization_25:
	addvar VAR_TEMP_6, 1
	goto GrandPrizeRandomization_24

GrandPrizeRandomization_28:
	addvar VAR_TEMP_6, 1
	goto GrandPrizeRandomization_27

GrandPrizeRandomization_30:
	checkitem ITEM_FOSSILIZED_DRAKE
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_32
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_32:
	checkitem ITEM_FOSSILIZED_FISH
	compare VAR_RESULT, TRUE
	goto_if_eq GrandPrizeRandomization_34
	goto GrandPrizeRandomization_6

GrandPrizeRandomization_34:
	finditem ITEM_BIG_NUGGET, 2
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
	.string "You have {STR_VAR_1} mud samples.\p"
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
