PlayerHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setmaplayoutindex LAYOUT_PLAYER_HOUSE2F_MAY
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	setflag FLAG_TEMP_1
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	setflag FLAG_RECEIVED_CAPSULE
	clearflag FLAG_DAD_GIFT
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO, PlayerHouse2F_Intro
	.2byte 0


PlayerHouse2F_Intro::
	delay 60
	setobjectxy 1, 7, 1
	showobjectat 1, MAP_PLAYER_HOUSE2F
	delay 60
	applymovement 1, Walk1Down
	waitmovement 0
	turnobject 1, DIR_WEST
	delay 10
	msgbox PlayerHouse2F_Intro_Text
	closemessage
	delay 30
	applymovement 1, Walk1Up
	waitmovement 0
	removeobject 1
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	waitmovement 0
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
	release
	return


PlayerHouse2F_ClockReminder::
	lock
	msgbox PlayerHouse2F_ClockReminder_Text
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	release
	return


Player2FSetClock::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Player2FSetClock_2
	setvar VAR_0x8004, FEMALE
Player2FSetClock_1:
	goto_if_set FLAG_SYS_CLOCK_SET, Player2FSetClock_6
Player2FSetClock_5:
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	release
	return

Player2FSetClock_2:
	setvar VAR_0x8004, MALE
	goto Player2FSetClock_1

Player2FSetClock_6:
	goto Player2FCheckClock
	goto Player2FSetClock_5


Player2FCheckClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	release
	return


PlayerHouse_ItemCapsule::
	finditem ITEM_ABILITY_CAPSULE
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge PlayerHouse_ItemCapsule_1
	return

PlayerHouse_ItemCapsule_1:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


PlayerWardrobe::
	lock
	msgbox ChangeOutfit2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerWardrobe_2
	closemessage
	message PlayerWardrobe_Text_0
	waitmessage
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PlayerWardrobe_4
	dynmultipush PlayerWardrobe_Text_1, SPECIES_MAY_RUBY
	dynmultipush PlayerWardrobe_Text_2, SPECIES_MAY_EMERALD
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_11
PlayerWardrobe_10:
	dynmultipush PlayerWardrobe_Text_4, SPECIES_EMPTY
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
	switch VAR_RESULT
	case SPECIES_MAY_RUBY, PlayerWardrobe_19
	case SPECIES_MAY_EMERALD, PlayerWardrobe_20
	case SPECIES_MAY_ORAS, PlayerWardrobe_21
	case SPECIES_EMPTY, PlayerWardrobe_22
	case MULTI_B_PRESSED, PlayerWardrobe_22
	return

PlayerWardrobe_2:
	closemessage
	release
	end

PlayerWardrobe_4:
	dynmultipush PlayerWardrobe_Text_1, SPECIES_BRENDAN_RUBY
	dynmultipush PlayerWardrobe_Text_2, SPECIES_BRENDAN_EMERALD
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_8
PlayerWardrobe_7:
	dynmultipush PlayerWardrobe_Text_4, SPECIES_EMPTY
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
	switch VAR_RESULT
	case SPECIES_BRENDAN_RUBY, PlayerWardrobe_14
	case SPECIES_BRENDAN_EMERALD, PlayerWardrobe_15
	case SPECIES_BRENDAN_ORAS, PlayerWardrobe_16
	case SPECIES_EMPTY, PlayerWardrobe_17
	case MULTI_B_PRESSED, PlayerWardrobe_17
	return

PlayerWardrobe_8:
	dynmultipush PlayerWardrobe_Text_3, SPECIES_BRENDAN_ORAS
	goto PlayerWardrobe_7

PlayerWardrobe_11:
	dynmultipush PlayerWardrobe_Text_3, SPECIES_MAY_ORAS
	goto PlayerWardrobe_10

PlayerWardrobe_14:
	setvar VAR_CHOSEN_OUTFIT, 0
	goto ChangePlayerOutfit
	return

PlayerWardrobe_15:
	setvar VAR_CHOSEN_OUTFIT, 1
	goto ChangePlayerOutfit
	return

PlayerWardrobe_16:
	setvar VAR_CHOSEN_OUTFIT, 2
	goto ChangePlayerOutfit
	return

PlayerWardrobe_17:
	release
	end

PlayerWardrobe_19:
	setvar VAR_CHOSEN_OUTFIT, 0
	goto ChangePlayerOutfit
	return

PlayerWardrobe_20:
	setvar VAR_CHOSEN_OUTFIT, 1
	goto ChangePlayerOutfit
	return

PlayerWardrobe_21:
	setvar VAR_CHOSEN_OUTFIT, 2
	goto ChangePlayerOutfit
	return

PlayerWardrobe_22:
	release
	end


ChangePlayerOutfit::
	closemessage
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	warpsilent MAP_PLAYER_HOUSE2F, VAR_TEMP_1, VAR_TEMP_2
	waitstate
	end


PlayerHouse_Journal::
	lock
	waitse
	playfanfare MUS_OBTAIN_ITEM
	removeobject VAR_LAST_TALKED
	setmetatile 1, 1, 0x28E, TRUE
	special DrawWholeMapView
	message PlayerFoundJournal
	waitfanfare
	waitmessage
	msgbox JournalIntroText
	release
	end


HeresQuests::
	msgbox HeresQuests_Text, MSGBOX_NPC
	callnative StartAllQuests
	special ShowJournalPopupAdd
	release
	return


PlayerWardrobe_Text_0:
	.string "Choose an outfit to wear.$"

PlayerWardrobe_Text_1:
	.string "Option 1$"

PlayerWardrobe_Text_2:
	.string "Option 2$"

PlayerWardrobe_Text_3:
	.string "Option 3$"

PlayerWardrobe_Text_4:
	.string "Exit$"

PlayerHouse2F_Intro_Text::
	.string "Mom: Rise and shine,\n"
	.string "{PLAYER}!\p"
	.string "Today's a very special day so\n"
	.string "when you're ready, come on\l"
	.string "downstairs.\p"
	.string "Oh but first, don't forget to\n"
	.string "set your new clock!$"

PlayerHouse2F_ClockReminder_Text::
	.string "Better set the clock before\n"
	.string "heading downstairs.$"

ChangeOutfit2::
	.string "It's a clothes rack used for\n"
	.string "storing outfits.\p"
	.string "Would you like to change your outfit?$"

SteppedAway::
	.string "{PLAYER} stepped away from the\n"
	.string "clothes rack.$"

PlayerFoundJournal::
	.string "{PLAYER} picked up a Journal!$"

JournalIntroText::
	.string "Certain events may be recorded in the\n"
	.string "Journal when they are discovered.\p"
	.string "The Journal can be accessed through\n"
	.string "the Start Menu.$"

HeresQuests_Text::
	.string "Sup.\n"
	.string "Here's a bunch of journal entries.$"
