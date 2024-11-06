IrisBattle::
	trainerbattle_single TRAINER_CASUAL_IRIS, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


DraydenBattle::
	trainerbattle_single TRAINER_LEADER_DRAYDEN, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


MinaBattle::
	trainerbattle_single TRAINER_ELITE_FOUR_MINA, RustboroCity_DevonCorp_1F_Rocket1_Intro, RustboroCity_DevonCorp_1F_Rocket1_Defeat
	return


AutomaticUpdate::
	setvar VAR_DEBUG, 9
	clearflag FLAG_UNUSED_0x4E6
	clearflag FLAG_UNUSED_0x4E7
	clearflag FLAG_UNUSED_0x4E8
	msgbox AutomaticUpdate_Text1
	callnative DefaultFollower
	closemessage
	release
	end


AutomaticUpdate2::
	setvar VAR_DEBUG, 10
	msgbox AutomaticUpdate2_Text2, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq AutomaticUpdate2_2
AutomaticUpdate2_1:
	msgbox AutomaticUpdate2_Text2, MSGBOX_SIGN
	release
	end

AutomaticUpdate2_2:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq AutomaticUpdate2_5
	setvar VAR_0x8004, FEMALE
AutomaticUpdate2_4:
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	goto AutomaticUpdate2_1

AutomaticUpdate2_5:
	setvar VAR_0x8004, MALE
	goto AutomaticUpdate2_4


AutomaticUpdate3::
	setvar VAR_DEBUG, 11
	setvar VAR_UNUSED_0x4051, 0
	setvar VAR_UNUSED_0x4052, 0
	setvar VAR_UNUSED_0x4056, 0
	setvar VAR_UNUSED_0x405A, 0
	setvar VAR_UNUSED_0x407D, 0
	setvar VAR_UNUSED_0x408B, 0
	setvar VAR_UNUSED_0x40CD, 0
	clearflag FLAG_REUNITE_WITH_RIVAL
	clearflag FLAG_UNUSED_0x2ED
	clearflag FLAG_RIVAL_MET_IN_SANDSTONE
	clearflag FLAG_UNUSED_0x112
	clearflag FLAG_SANDSTONE_HIDDENITEM_1
	clearflag FLAG_SANDSTONE_HIDDENITEM_2
	clearflag FLAG_UNUSED_SYS_0x22
	clearflag FLAG_UNUSED_0x266
	clearflag FLAG_UNUSED_0x269
	clearflag FLAG_UNUSED_0x498
	clearflag FLAG_UNUSED_0x49C
	clearflag FLAG_UNUSED_0x49D
	clearflag FLAG_UNUSED_0x49F
	clearflag FLAG_UNUSED_0x4A2
	clearflag FLAG_UNUSED_0x4A3
	clearflag FLAG_UNUSED_0x4A4
	clearflag FLAG_UNUSED_0x4F0
	clearflag FLAG_UNUSED_SYS_0x84
	clearflag FLAG_ORICORIO_SHOWN_TO_MANIAC
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_gt AutomaticUpdate3_3
AutomaticUpdate3_1:
	release
	end

AutomaticUpdate3_2:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto AutomaticUpdate3_1

AutomaticUpdate3_3:
	compare VAR_PEARLWOOD_TOWN_STATE, 20
	goto_if_lt AutomaticUpdate3_2
	goto AutomaticUpdate3_1


Debug_Script_1::
	compare VAR_DEBUG, 0
	goto_if_eq Debug_Script_1_2
Debug_Script_1_1:
	compare VAR_DEBUG, 1
	goto_if_eq Debug_Script_1_5
Debug_Script_1_4:
	compare VAR_DEBUG, 2
	goto_if_eq Debug_Script_1_11
Debug_Script_1_10:
	compare VAR_DEBUG, 3
	goto_if_eq Debug_Script_1_20
Debug_Script_1_19:
	compare VAR_DEBUG, 4
	goto_if_eq Debug_Script_1_29
Debug_Script_1_28:
	compare VAR_DEBUG, 5
	goto_if_eq Debug_Script_1_41
Debug_Script_1_40:
	compare VAR_DEBUG, 6
	goto_if_eq Debug_Script_1_51
Debug_Script_1_50:
	compare VAR_DEBUG, 7
	goto_if_eq Debug_Script_1_57
Debug_Script_1_56:
	call UpdateItemCheck
	msgbox FlagsAndVarsUpdated2, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_60
Debug_Script_1_59:
	closemessage
	release
	end

Debug_Script_1_2:
	checkitem ITEM_GO_GOGGLES
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_8
Debug_Script_1_7:
	goto_if_set FLAG_ROUTE15_ITEM1, Debug_Script_1_17
Debug_Script_1_16:
	goto_if_set FLAG_ROUTE15_ITEM2, Debug_Script_1_26
Debug_Script_1_25:
	goto_if_set FLAG_ROUTE15_ITEM3, Debug_Script_1_38
Debug_Script_1_37:
	clearflag FLAG_SHOWED_BADGE
	clearflag FLAG_SYSTEM_NOREWARDBATTLES
	clearflag FLAG_OBTAINED_PAINTBRUSH
	clearflag FLAG_PARTNER_HEALS
	clearflag FLAG_TRADED_SMEARGLE
	clearflag FLAG_KORRINA_LEAVESGYM
	clearflag FLAG_HIDE_LIBRARY_BIRCH
	setflag FLAG_HIDE_STONE_SPHERE_FC
	setflag FLAG_OLDMAN_PEARLSTRING
	setflag FLAG_LANDMARK_LOST_GLADE
	setflag FLAG_LANDMARK_WINDY_WOODS
	setflag FLAG_VISITED_RUSTBORO_CITY
	setflag FLAG_VISITED_PEARLWOOD_POINT
	setflag FLAG_VISITED_OLDALE_TOWN
	setvar VAR_DEBUG, 1
	msgbox RenameBrother, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_48
	goto Debug_Script_1_1

Debug_Script_1_5:
	goto_if_unset FLAG_CORALGROVE_CUTSCENE, Debug_Script_1_14
Debug_Script_1_13:
	setvar VAR_DEBUG, 2
	goto Debug_Script_1_4

Debug_Script_1_8:
	setvar VAR_DESERT_BYPASS, 1
	goto Debug_Script_1_7

Debug_Script_1_11:
	checkitem ITEM_WHITE_FLUTE
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_23
Debug_Script_1_22:
	clearflag FLAG_ROUTE15_ITEM4
	clearflag FLAG_ROUTE15_ITEM5
	clearflag FLAG_ROUTE15_ITEM6
	clearflag FLAG_ROUTE15_ITEM7
	clearflag FLAG_R14_ITEM3
	goto_if_set FLAG_ROUTE15_ITEM1, Debug_Script_1_35
Debug_Script_1_34:
	goto_if_set FLAG_ROUTE15_ITEM2, Debug_Script_1_46
Debug_Script_1_45:
	goto_if_set FLAG_ROUTE15_ITEM3, Debug_Script_1_54
Debug_Script_1_53:
	setvar VAR_DEBUG, 3
	goto Debug_Script_1_10

Debug_Script_1_14:
	setflag FLAG_OBTAINED_PIDGEOTITE
	goto Debug_Script_1_13

Debug_Script_1_17:
	setvar VAR_STARTER_MON, 0
	goto Debug_Script_1_16

Debug_Script_1_20:
	checkitem ITEM_SAMPLE_BOX
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_1_32
Debug_Script_1_31:
	setvar VAR_DEBUG, 4
	goto Debug_Script_1_19

Debug_Script_1_23:
	msgbox ReplacedFlute
	removeitem ITEM_WHITE_FLUTE
	additem ITEM_BLACK_FLUTE
	goto Debug_Script_1_22

Debug_Script_1_26:
	setvar VAR_STARTER_MON, 1
	goto Debug_Script_1_25

Debug_Script_1_29:
	clearflag FLAG_ROUTE23_ITEM4
	clearflag FLAG_BERRYFIELDS_ITEM
	setvar VAR_DEBUG, 5
	goto Debug_Script_1_28

Debug_Script_1_32:
	compare VAR_MUD_REWARD_1, 0
	goto_if_eq Debug_Script_1_43
	goto Debug_Script_1_31

Debug_Script_1_35:
	clearflag FLAG_ROUTE15_ITEM1
	goto Debug_Script_1_34

Debug_Script_1_38:
	setvar VAR_STARTER_MON, 2
	goto Debug_Script_1_37

Debug_Script_1_41:
	setberrytree BERRY_TREE_ROUTE_123_GREPA_5, ITEM_TO_BERRY ( ITEM_GREPA_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_POMEG_5, ITEM_TO_BERRY ( ITEM_POMEG_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_QUALOT_5, ITEM_TO_BERRY ( ITEM_QUALOT_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_GREPA_6, ITEM_TO_BERRY ( ITEM_GREPA_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_POMEG_6, ITEM_TO_BERRY ( ITEM_POMEG_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_QUALOT_6, ITEM_TO_BERRY ( ITEM_QUALOT_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_GREPA_7, ITEM_TO_BERRY ( ITEM_GREPA_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_POMEG_7, ITEM_TO_BERRY ( ITEM_POMEG_BERRY ), BERRY_STAGE_BERRIES
	setberrytree BERRY_TREE_ROUTE_123_QUALOT_7, ITEM_TO_BERRY ( ITEM_QUALOT_BERRY ), BERRY_STAGE_BERRIES
	setvar VAR_DEBUG, 6
	goto Debug_Script_1_40

Debug_Script_1_43:
	call RandomizeMudRewards
	goto Debug_Script_1_31

Debug_Script_1_46:
	clearflag FLAG_ROUTE15_ITEM2
	goto Debug_Script_1_45

Debug_Script_1_48:
	fadescreen FADE_TO_BLACK
	special NameBrother
	waitstate
	goto Debug_Script_1_1

Debug_Script_1_51:
	clearflag FLAG_SYS_NATIONAL_DEX
	setflag FLAG_SYS_POKEDEX_GET
	setvar VAR_DEBUG, 7
	goto Debug_Script_1_50

Debug_Script_1_54:
	clearflag FLAG_ROUTE15_ITEM3
	goto Debug_Script_1_53

Debug_Script_1_57:
	setvar VAR_GROTTO_STEP_COUNT, 256
	setvar VAR_DEBUG, 8
	goto Debug_Script_1_56

Debug_Script_1_60:
	warp MAP_CORALGROVE_CITY, 26, 44
	goto Debug_Script_1_59


Debug_Script_2::
	setmonmetlocation 0, MAP_NEW_ROUTE101
	setmonmetlocation 1, MAP_NEW_ROUTE101
	setmonmetlocation 2, MAP_NEW_ROUTE101
	setmonmetlocation 3, MAP_NEW_ROUTE101
	setmonmetlocation 4, MAP_NEW_ROUTE101
	setmonmetlocation 5, MAP_NEW_ROUTE101
	return


Debug_Script_3::
	lock
	msgbox WantToSetRivalFight, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Debug_Script_3_2
	checkitem ITEM_DOWSING_MACHINE
	compare VAR_RESULT, TRUE
	goto_if_eq Debug_Script_3_5
	msgbox RivalFought, MSGBOX_NPC
	clearflag FLAG_RIVAL_HARBOR_ANGRY
	additem ITEM_DOWSING_MACHINE
Debug_Script_3_4:
	end

Debug_Script_3_2:
	closemessage
	release
	end

Debug_Script_3_5:
	msgbox RivalNotFought, MSGBOX_NPC
	setflag FLAG_RIVAL_HARBOR_ANGRY
	removeitem ITEM_DOWSING_MACHINE
	goto Debug_Script_3_4


Debug_Script_4::
	lock
	msgbox LevelSetIntro, MSGBOX_DEFAULT
	message WhichLevelToSet
	waitmessage
	dynmultipush Debug_Script_4_Text_0, 0
	dynmultipush Debug_Script_4_Text_1, 1
	dynmultipush Debug_Script_4_Text_2, 2
	dynmultipush Debug_Script_4_Text_3, 3
	dynmultipush Debug_Script_4_Text_4, 4
	dynmultipush Debug_Script_4_Text_5, 5
	dynmultipush Debug_Script_4_Text_6, 6
	dynmultipush Debug_Script_4_Text_7, 7
	dynmultipush Debug_Script_4_Text_8, 8
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Debug_Script_4_3
	case 1, Debug_Script_4_4
	case 2, Debug_Script_4_5
	case 3, Debug_Script_4_6
	case 4, Debug_Script_4_7
	case 5, Debug_Script_4_8
	case 6, Debug_Script_4_9
	case 7, Debug_Script_4_10
	case 8, Debug_Script_4_11
	case MULTI_B_PRESSED, Debug_Script_4_12
Debug_Script_4_1:
	release
	end

Debug_Script_4_3:
	msgbox Debug_Script_4_Text_9
	setpartylevel 14
	goto Debug_Script_4_1

Debug_Script_4_4:
	msgbox Debug_Script_4_Text_10
	setpartylevel 22
	goto Debug_Script_4_1

Debug_Script_4_5:
	msgbox Debug_Script_4_Text_11
	setpartylevel 24
	goto Debug_Script_4_1

Debug_Script_4_6:
	msgbox Debug_Script_4_Text_12
	setpartylevel 29
	goto Debug_Script_4_1

Debug_Script_4_7:
	msgbox Debug_Script_4_Text_13
	setpartylevel 34
	goto Debug_Script_4_1

Debug_Script_4_8:
	msgbox Debug_Script_4_Text_14
	setpartylevel 38
	goto Debug_Script_4_1

Debug_Script_4_9:
	msgbox Debug_Script_4_Text_15
	setpartylevel 40
	goto Debug_Script_4_1

Debug_Script_4_10:
	msgbox Debug_Script_4_Text_16
	setpartylevel 45
	goto Debug_Script_4_1

Debug_Script_4_11:
	closemessage
	goto Debug_Script_4_1

Debug_Script_4_12:
	closemessage
	goto Debug_Script_4_1


Debug_Script_5::
	clearflag FLAG_REUNITE_WITH_RIVAL
	return


Debug_Script_6::
	return


Debug_Script_7::
	return


Debug_Script_8::
	return


UpdateItemCheck::
	checkitem ITEM_TM49, 2
	compare VAR_RESULT, TRUE
	goto_if_eq UpdateItemCheck_2
UpdateItemCheck_1:
	checkitem ITEM_TM_CASE
	compare VAR_RESULT, FALSE
	goto_if_eq UpdateItemCheck_5
UpdateItemCheck_4:
	checkitem ITEM_TM_GIGA_DRAIN
	compare VAR_RESULT, TRUE
	goto_if_eq UpdateItemCheck_7
	return

UpdateItemCheck_2:
	removeitem ITEM_TM49, 1
	giveitem ITEM_TM_ROCK_SLIDE
	goto UpdateItemCheck_1

UpdateItemCheck_5:
	giveitem ITEM_TM_CASE
	goto UpdateItemCheck_4

UpdateItemCheck_7:
	msgbox ReplacedGrassKnot
	removeitem ITEM_TM_GIGA_DRAIN
	additem ITEM_TM_GRASS_KNOT
	return


Walk1Left:
	walk_left
	step_end

Walk2Left:
	walk_left
	walk_left
	step_end

Walk3Left:
	walk_left
	walk_left
	walk_left
	step_end

Walk4Left:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk5Left:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk6Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk7Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk8Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk9Left:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Walk1Right:
	walk_right
	step_end

Walk2Right:
	walk_right
	walk_right
	step_end

Walk3Right:
	walk_right
	walk_right
	walk_right
	step_end

Walk4Right:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk5Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk6Right:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Walk1Up:
	walk_up
	step_end

Walk2Up:
	walk_up
	walk_up
	step_end

Walk3Up:
	walk_up
	walk_up
	walk_up
	step_end

Walk4Up:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk5Up:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk6Up:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Walk1Down:
	walk_down
	step_end

Walk2Down:
	walk_down
	walk_down
	step_end

Walk3Down:
	walk_down
	walk_down
	walk_down
	step_end

Walk4Down:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Walk5Down:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Walk6Down:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Debug_Script_4_Text_0:
	.string "Gym 1 (lvl 14)$"

Debug_Script_4_Text_1:
	.string "Gym 2 (lvl 22)$"

Debug_Script_4_Text_2:
	.string "Side area (lvl 24)$"

Debug_Script_4_Text_3:
	.string "Story 1 (lvl 29)$"

Debug_Script_4_Text_4:
	.string "Gym 3 (lvl 34)$"

Debug_Script_4_Text_5:
	.string "Gym 4 (lvl 38)$"

Debug_Script_4_Text_6:
	.string "Post-Gym 4 (lvl 40)$"

Debug_Script_4_Text_7:
	.string "Gym 5 (lvl 45)$"

Debug_Script_4_Text_8:
	.string "Cancel$"

Debug_Script_4_Text_9:
	.string "Team set to level 14.$"

Debug_Script_4_Text_10:
	.string "Team set to level 22.$"

Debug_Script_4_Text_11:
	.string "Team set to level 24.$"

Debug_Script_4_Text_12:
	.string "Team set to level 29.$"

Debug_Script_4_Text_13:
	.string "Team set to level 34.$"

Debug_Script_4_Text_14:
	.string "Team set to level 38.$"

Debug_Script_4_Text_15:
	.string "Team set to level 40.$"

Debug_Script_4_Text_16:
	.string "Team set to level 45.$"

AutomaticUpdate_Text1::
	.string "A new update has been applied.\p"
	.string "Things included in this update:\p"
	.string "1. Followers, as well as setting a\n"
	.string "preferred follower from party screen.\p"
	.string "2. An updated “Stats” page in the\n"
	.string "start menu.\p"
	.string "3. A lot of bug fixes.$"

AutomaticUpdate2_Text::
	.string "Update: You have obtained a watch.\p"
	.string "You can now check the time by\n"
	.string "pressing the START button and can\l"
	.string "toggle between 12-hour and 24-hour\l"
	.string "modes through the options menu or\l"
	.string "by viewing a wall clock.\p"
	.string "Would you like to re-set the clock?$"

AutomaticUpdate2_Text2::
	.string "There are also many new window frames\n"
	.string "available in the options menu.\p"
	.string "There is now also a separate color\n"
	.string "switcher for the battle interface,\l"
	.string "as well as an ability to change\l"
	.string "window frames during battle.\p"
	.string "To cycle between colors, hold the\n"
	.string "START button during battle and press\l"
	.string "left and right on the D-Pad.\p"
	.string "To change window frames, hold the\n"
	.string "START button and press up and down\l"
	.string "on the D-Pad.\p"
	.string "The toggle between health numbers\n"
	.string "and bars in double battles has been\l"
	.string "moved to SELECT button.$"

ReplacedFlute::
	.string "Your White Flute has been replaced\n"
	.string "with a Black Flute.$"

ReplacedGrassKnot::
	.string "Your TM for Giga Drain has been\n"
	.string "replaced with a TM for Grass Knot.$"

WantToSetRivalFight::
	.string "This option will change an upcoming\n"
	.string "rival event based on whether the rival\l"
	.string "was fought in the Coralgrove elevator.\p"
	.string "Would you like to switch the event?$"

RivalNotFought::
	.string "Rival set to NOT FOUGHT.\n"
	.string "Removed the Itemfinder.$"

RivalFought::
	.string "Rival set to FOUGHT.\n"
	.string "Added the Itemfinder.$"

LevelSetIntro::
	.string "This option will set the level of your\n"
	.string "entire team to the specified level.\p"
	.string "This is meant for testing purposes so\n"
	.string "I'd prefer you didn't exploit this for\l"
	.string "no reason.\p"
	.string "Do note that this does NOT\n"
	.string "evolve/de-evolve your Pokémon,\l"
	.string "nor does it add or remove moves.\p"
	.string "The team's stats will be recalculated.\n"
	.string "EVs earned will remain unchanged.$"

WhichLevelToSet::
	.string "Which level would you like to set\n"
	.string "your team?$"

FlagsAndVarsUpdated2::
	.string "Flags and Vars updated.\p"
	.string "Would you like to warp to Coralgrove?\n"
	.string "(Choose YES if current area is bugged)$"

RenameBrother::
	.string "Would you like to rename your brother?\n"
	.string "(Yes if haven't seen this before!)$"
