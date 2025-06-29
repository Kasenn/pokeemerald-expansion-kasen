PlayerHouse2F_MapScripts::
# 2 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 9 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/PlayerHouse2F/scripts.pory"
	setmaplayoutindex LAYOUT_PLAYER_HOUSE2F_MAY
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 7 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_TEMP_1
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 12 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_RECEIVED_CAPSULE
# 13 "data/maps/PlayerHouse2F/scripts.pory"
	clearflag FLAG_DAD_GIFT
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 11 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 10 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 20 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SYS_B_DASH, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 21 "data/maps/PlayerHouse2F/scripts.pory"
	setmetatile 5, 7, 0x295, FALSE
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/PlayerHouse2F/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO, PlayerHouse2F_Intro
	.2byte 0


PlayerHouse2F_Intro::
# 29 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 30 "data/maps/PlayerHouse2F/scripts.pory"
	setobjectxy 1, 7, 1
# 31 "data/maps/PlayerHouse2F/scripts.pory"
	showobjectat 1, MAP_PLAYER_HOUSE2F
# 32 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 33 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement 1, Walk1Down
# 34 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 35 "data/maps/PlayerHouse2F/scripts.pory"
	turnobject 1, DIR_WEST
# 36 "data/maps/PlayerHouse2F/scripts.pory"
	delay 10
# 37 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Intro_Text
# 38 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 39 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 40 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement 1, Walk1Up
# 41 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject 1
# 43 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 44 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
# 45 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 46 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
# 47 "data/maps/PlayerHouse2F/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
# 48 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ClockReminder::
# 61 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 62 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ClockReminder_Text
# 63 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 64 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 65 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 66 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ShoesReminder::
# 75 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 76 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ShoesReminder_Text
# 77 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 78 "data/maps/PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 79 "data/maps/PlayerHouse2F/scripts.pory"
	waitmovement 0
# 80 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


Player2FSetClock::
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Player2FSetClock_2
# 93 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
Player2FSetClock_1:
# 95 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SYS_CLOCK_SET, Player2FSetClock_6
Player2FSetClock_5:
# 98 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 99 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/PlayerHouse2F/scripts.pory"
	special StartWallClock
# 101 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 102 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return

Player2FSetClock_2:
# 90 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto Player2FSetClock_1

Player2FSetClock_6:
# 96 "data/maps/PlayerHouse2F/scripts.pory"
	goto Player2FCheckClock
	goto Player2FSetClock_5


Player2FCheckClock::
# 106 "data/maps/PlayerHouse2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 107 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 108 "data/maps/PlayerHouse2F/scripts.pory"
	special Special_ViewWallClock
# 109 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 110 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse_ItemCapsule::
# 114 "data/maps/PlayerHouse2F/scripts.pory"
	finditem ITEM_ABILITY_CAPSULE
# 115 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge PlayerHouse_ItemCapsule_1
	return

PlayerHouse_ItemCapsule_1:
# 116 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


PlayerWardrobe::
# 121 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 122 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox ChangeOutfit2, MSGBOX_YESNO
# 123 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerWardrobe_2
# 128 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 129 "data/maps/PlayerHouse2F/scripts.pory"
	message PlayerWardrobe_Text_0
# 130 "data/maps/PlayerHouse2F/scripts.pory"
	waitmessage
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerWardrobe_4
# 156 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_1, SPECIES_MAY_RUBY
# 157 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_2, SPECIES_MAY_EMERALD
# 158 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_11
PlayerWardrobe_10:
# 161 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_4, SPECIES_EMPTY
# 162 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 163 "data/maps/PlayerHouse2F/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_RUBY, PlayerWardrobe_19
# 167 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_EMERALD, PlayerWardrobe_20
# 170 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_ORAS, PlayerWardrobe_21
# 173 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_EMPTY, PlayerWardrobe_22
# 174 "data/maps/PlayerHouse2F/scripts.pory"
	case MULTI_B_PRESSED, PlayerWardrobe_22
	return

PlayerWardrobe_2:
# 124 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 125 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end

PlayerWardrobe_4:
# 132 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_1, SPECIES_BRENDAN_RUBY
# 133 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_2, SPECIES_BRENDAN_EMERALD
# 134 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_8
PlayerWardrobe_7:
# 137 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_4, SPECIES_EMPTY
# 138 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 139 "data/maps/PlayerHouse2F/scripts.pory"
	switch VAR_RESULT
# 140 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_RUBY, PlayerWardrobe_14
# 143 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_EMERALD, PlayerWardrobe_15
# 146 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_ORAS, PlayerWardrobe_16
# 149 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_EMPTY, PlayerWardrobe_17
# 150 "data/maps/PlayerHouse2F/scripts.pory"
	case MULTI_B_PRESSED, PlayerWardrobe_17
	return

PlayerWardrobe_8:
# 135 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_3, SPECIES_BRENDAN_ORAS
	goto PlayerWardrobe_7

PlayerWardrobe_11:
# 159 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_3, SPECIES_MAY_ORAS
	goto PlayerWardrobe_10

PlayerWardrobe_14:
# 141 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 142 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_15:
# 144 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 145 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_16:
# 147 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 148 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_17:
# 151 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end

PlayerWardrobe_19:
# 165 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 166 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_20:
# 168 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 169 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_21:
# 171 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 172 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_22:
# 175 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end


ChangePlayerOutfit::
# 192 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 193 "data/maps/PlayerHouse2F/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 194 "data/maps/PlayerHouse2F/scripts.pory"
	warpsilent MAP_PLAYER_HOUSE2F, VAR_TEMP_1, VAR_TEMP_2
# 195 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
	end


PlayerHouse_Journal::
# 200 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 201 "data/maps/PlayerHouse2F/scripts.pory"
	waitse
# 202 "data/maps/PlayerHouse2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 203 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 204 "data/maps/PlayerHouse2F/scripts.pory"
	setmetatile 5, 7, 0x295, FALSE
# 205 "data/maps/PlayerHouse2F/scripts.pory"
	special DrawWholeMapView
# 206 "data/maps/PlayerHouse2F/scripts.pory"
	message PlayerFoundJournal
# 207 "data/maps/PlayerHouse2F/scripts.pory"
	waitfanfare
# 208 "data/maps/PlayerHouse2F/scripts.pory"
	waitmessage
# 209 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox JournalIntroText
# 210 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end


HeresQuests::
# 228 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox HeresQuests_Text, MSGBOX_NPC
# 229 "data/maps/PlayerHouse2F/scripts.pory"
	callnative StartAllQuests
# 230 "data/maps/PlayerHouse2F/scripts.pory"
	special ShowJournalPopupAdd
# 231 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerWardrobe_Text_0:
# 129 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Choose an outfit to wear.$"

PlayerWardrobe_Text_1:
# 132 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 1$"

PlayerWardrobe_Text_2:
# 133 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 2$"

PlayerWardrobe_Text_3:
# 135 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 3$"

PlayerWardrobe_Text_4:
# 137 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Exit$"

PlayerHouse2F_Intro_Text::
# 50 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Mom: Rise and shine,\n"
	.string "{PLAYER}!\p"
	.string "Today's a very special day so\n"
	.string "when you're ready, grab your shoes,\l"
	.string "and come on downstairs.\p"
	.string "Oh but first, don't forget to\n"
	.string "set your new clock!$"

PlayerHouse2F_ClockReminder_Text::
# 69 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better set the clock before\n"
	.string "heading downstairs.$"

PlayerHouse2F_ShoesReminder_Text::
# 83 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better put on the shoes before\n"
	.string "heading downstairs.$"

ChangeOutfit2::
# 181 "data/maps/PlayerHouse2F/scripts.pory"
	.string "It's a clothes rack used for\n"
	.string "storing outfits.\p"
	.string "Would you like to change your outfit?$"

SteppedAway::
# 186 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{PLAYER} stepped away from the\n"
	.string "clothes rack.$"

PlayerFoundJournal::
# 214 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{PLAYER} obtained the running shoes!$"

JournalIntroText::
# 216 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Press the B Button while wearing these\n"
	.string "running shoes to run extra-fast!$"

HeresQuests_Text::
# 234 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Sup.\n"
	.string "Here's a bunch of journal entries.$"

MakeSureToPickUpJournal::
# 239 "data/maps/PlayerHouse2F/scripts.pory"
	.string "I should also pick up the Journal\n"
	.string "from the table before leaving…$"
