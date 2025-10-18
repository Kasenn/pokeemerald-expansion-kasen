PlayerHouse2F_MapScripts::
# 4 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 19 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD
# 16 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_TEMP_1
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PlayerHouse2F/scripts.pory"
	setmaplayoutindex LAYOUT_PLAYER_HOUSE2F_MAY
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 12 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_RECEIVED_CAPSULE
# 13 "data/maps/PlayerHouse2F/scripts.pory"
	clearflag FLAG_DAD_GIFT
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 10 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
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
# 27 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 28 "data/maps/PlayerHouse2F/scripts.pory"
	addobject LOCALID_PLAYERROOM_MOM
# 29 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 30 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYERROOM_MOM, Walk1Down
# 31 "data/maps/PlayerHouse2F/scripts.pory"
	turnobject LOCALID_PLAYERROOM_MOM, DIR_WEST
# 32 "data/maps/PlayerHouse2F/scripts.pory"
	delay 10
# 33 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Intro_Text, MSGBOX_AUTOCLOSE
# 34 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 35 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYERROOM_MOM, Walk1Up
# 36 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject LOCALID_PLAYERROOM_MOM
# 37 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 38 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Right
# 39 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
# 40 "data/maps/PlayerHouse2F/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
# 41 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ClockReminder::
# 54 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 55 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ClockReminder_Text, MSGBOX_AUTOCLOSE
# 56 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Left
# 57 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ShoesReminder::
# 66 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 67 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ShoesReminder_Text, MSGBOX_AUTOCLOSE
# 68 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Left
# 69 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


Player2FSetClock::
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Player2FSetClock_2
# 82 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
Player2FSetClock_1:
# 84 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SYS_CLOCK_SET, Player2FSetClock_6
Player2FSetClock_5:
# 87 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 88 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/PlayerHouse2F/scripts.pory"
	special StartWallClock
# 90 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 91 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return

Player2FSetClock_2:
# 79 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto Player2FSetClock_1

Player2FSetClock_6:
# 85 "data/maps/PlayerHouse2F/scripts.pory"
	goto Player2FCheckClock
	goto Player2FSetClock_5


Player2FCheckClock::
# 95 "data/maps/PlayerHouse2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 96 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 97 "data/maps/PlayerHouse2F/scripts.pory"
	special Special_ViewWallClock
# 98 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 99 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse_ItemCapsule::
# 103 "data/maps/PlayerHouse2F/scripts.pory"
	finditem ITEM_ABILITY_CAPSULE
# 104 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge PlayerHouse_ItemCapsule_1
	return

PlayerHouse_ItemCapsule_1:
# 105 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


PlayerWardrobe::
# 110 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 111 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox ChangeOutfit2, MSGBOX_YESNO
# 112 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerWardrobe_2
# 117 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 118 "data/maps/PlayerHouse2F/scripts.pory"
	message PlayerWardrobe_Text_0
# 119 "data/maps/PlayerHouse2F/scripts.pory"
	waitmessage
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerWardrobe_4
# 151 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_1, SPECIES_MAY_RUBY
# 152 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_2, SPECIES_MAY_EMERALD
# 153 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_11
PlayerWardrobe_10:
# 156 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_OBTAIN_CONTEST_OUTFIT, PlayerWardrobe_17
PlayerWardrobe_16:
# 159 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_5, SPECIES_EMPTY
# 160 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 161 "data/maps/PlayerHouse2F/scripts.pory"
	switch VAR_RESULT
# 162 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_RUBY, PlayerWardrobe_26
# 165 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_EMERALD, PlayerWardrobe_27
# 168 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_ORAS, PlayerWardrobe_28
# 171 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_CONTEST, PlayerWardrobe_29
# 174 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_EMPTY, PlayerWardrobe_30
# 175 "data/maps/PlayerHouse2F/scripts.pory"
	case MULTI_B_PRESSED, PlayerWardrobe_30
	return

PlayerWardrobe_2:
# 113 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 114 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end

PlayerWardrobe_4:
# 121 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_1, SPECIES_BRENDAN_RUBY
# 122 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_2, SPECIES_BRENDAN_EMERALD
# 123 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_8
PlayerWardrobe_7:
# 126 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_OBTAIN_CONTEST_OUTFIT, PlayerWardrobe_14
PlayerWardrobe_13:
# 129 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_5, SPECIES_EMPTY
# 130 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 131 "data/maps/PlayerHouse2F/scripts.pory"
	switch VAR_RESULT
# 132 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_RUBY, PlayerWardrobe_20
# 135 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_EMERALD, PlayerWardrobe_21
# 138 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_ORAS, PlayerWardrobe_22
# 141 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_CONTEST, PlayerWardrobe_23
# 144 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_EMPTY, PlayerWardrobe_24
# 145 "data/maps/PlayerHouse2F/scripts.pory"
	case MULTI_B_PRESSED, PlayerWardrobe_24
	return

PlayerWardrobe_8:
# 124 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_3, SPECIES_BRENDAN_ORAS
	goto PlayerWardrobe_7

PlayerWardrobe_11:
# 154 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_3, SPECIES_MAY_ORAS
	goto PlayerWardrobe_10

PlayerWardrobe_14:
# 127 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_4, SPECIES_BRENDAN_CONTEST
	goto PlayerWardrobe_13

PlayerWardrobe_17:
# 157 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_4, SPECIES_MAY_CONTEST
	goto PlayerWardrobe_16

PlayerWardrobe_20:
# 133 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 134 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_21:
# 136 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 137 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_22:
# 139 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 140 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_23:
# 142 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 3
# 143 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_24:
# 146 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end

PlayerWardrobe_26:
# 163 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 0
# 164 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_27:
# 166 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 1
# 167 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_28:
# 169 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 2
# 170 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_29:
# 172 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, 3
# 173 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_30:
# 176 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end


ChangePlayerOutfit::
# 193 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 194 "data/maps/PlayerHouse2F/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 195 "data/maps/PlayerHouse2F/scripts.pory"
	warpsilent MAP_PLAYER_HOUSE2F, VAR_TEMP_1, VAR_TEMP_2
# 196 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
	end


PlayerHouse_Shoes::
# 201 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 202 "data/maps/PlayerHouse2F/scripts.pory"
	waitse
# 203 "data/maps/PlayerHouse2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 204 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 205 "data/maps/PlayerHouse2F/scripts.pory"
	setmetatile 5, 7, 0x295, FALSE
# 206 "data/maps/PlayerHouse2F/scripts.pory"
	special DrawWholeMapView
# 207 "data/maps/PlayerHouse2F/scripts.pory"
	message PlayerFoundShoes
# 208 "data/maps/PlayerHouse2F/scripts.pory"
	waitfanfare
# 209 "data/maps/PlayerHouse2F/scripts.pory"
	waitmessage
# 210 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox ShoesIntroText, MSGBOX_AUTOCLOSE
	end


PlayerWardrobe_Text_0:
# 118 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Choose an outfit to wear.$"

PlayerWardrobe_Text_1:
# 121 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 1$"

PlayerWardrobe_Text_2:
# 122 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 2$"

PlayerWardrobe_Text_3:
# 124 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 3$"

PlayerWardrobe_Text_4:
# 127 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 4$"

PlayerWardrobe_Text_5:
# 129 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Exit$"

PlayerHouse2F_Intro_Text::
# 43 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Mom: Rise and shine,\n"
	.string "{PLAYER}!\p"
	.string "Today's a very special day so\n"
	.string "when you're ready, grab your shoes,\l"
	.string "and come on downstairs.\p"
	.string "Oh but first, don't forget to\n"
	.string "set your new clock!$"

PlayerHouse2F_ClockReminder_Text::
# 60 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better set the clock before\n"
	.string "heading downstairs.$"

PlayerHouse2F_ShoesReminder_Text::
# 72 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better put on the shoes before\n"
	.string "heading downstairs.$"

ChangeOutfit2::
# 182 "data/maps/PlayerHouse2F/scripts.pory"
	.string "It's a clothes rack used for\n"
	.string "storing outfits.\p"
	.string "Would you like to change your outfit?$"

SteppedAway::
# 187 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{PLAYER} stepped away from the\n"
	.string "clothes rack.$"

PlayerFoundShoes::
# 214 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{PLAYER} obtained the running shoes!$"

ShoesIntroText::
# 216 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Press the B Button while wearing these\n"
	.string "running shoes to run extra-fast!$"
