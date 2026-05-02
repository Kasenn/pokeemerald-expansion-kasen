PlayerHouse2F_MapScripts::
# 4 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/PlayerHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD
# 21 "data/maps/PlayerHouse2F/scripts.pory"
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
	goto_if_ge PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/PlayerHouse2F/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 16 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/PlayerHouse2F/scripts.pory"
	setmaplayoutindex LAYOUT_PLAYER_HOUSE2F_MAY
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 12 "data/maps/PlayerHouse2F/scripts.pory"
	setflag FLAG_RECEIVED_CAPSULE
# 13 "data/maps/PlayerHouse2F/scripts.pory"
	clearflag FLAG_DAD_GIFT
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 11 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 10 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	goto PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 18 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_TEMP_3, 1
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 16 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_TEMP_2, 2
	goto_if_eq PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 26 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SYS_B_DASH, PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 27 "data/maps/PlayerHouse2F/scripts.pory"
	setmetatile 5, 7, 0x295, FALSE
	return

PlayerHouse2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/PlayerHouse2F/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO, PlayerHouse2F_Intro
# 23 "data/maps/PlayerHouse2F/scripts.pory"
	map_script_2 VAR_TEMP_3, 1, NES_Crashed
	.2byte 0


NES_Crashed::
# 33 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox NES_Crashed_Text, MSGBOX_SIGN
# 34 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_TEMP_3, 0
	return


PlayerHouse2F_NES::
	msgbox PlayerHouse2F_NES_Text, MSGBOX_YESNO
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerHouse2F_NES_2
# 49 "data/maps/PlayerHouse2F/scripts.pory"
	callnative ResetSkipCutscene
# 50 "data/maps/PlayerHouse2F/scripts.pory"
	warpsilent MAP_NES, 0
	return

PlayerHouse2F_NES_2:
# 46 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end


PlayerHouse2F_Intro::
# 59 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 60 "data/maps/PlayerHouse2F/scripts.pory"
	addobject LOCALID_PLAYERROOM_MOM
# 61 "data/maps/PlayerHouse2F/scripts.pory"
	delay 60
# 62 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYERROOM_MOM, Walk1Down
# 63 "data/maps/PlayerHouse2F/scripts.pory"
	turnobject LOCALID_PLAYERROOM_MOM, DIR_WEST
# 64 "data/maps/PlayerHouse2F/scripts.pory"
	delay 10
# 65 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_Intro_Text, MSGBOX_AUTOCLOSE
# 66 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 67 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYERROOM_MOM, Walk1Up
# 68 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject LOCALID_PLAYERROOM_MOM
# 69 "data/maps/PlayerHouse2F/scripts.pory"
	delay 30
# 70 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Right
# 71 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED
# 72 "data/maps/PlayerHouse2F/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYER_HOUSE2F
# 73 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ClockReminder::
# 86 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 87 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ClockReminder_Text, MSGBOX_AUTOCLOSE
# 88 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Left
# 89 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse2F_ShoesReminder::
# 98 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 99 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayerHouse2F_ShoesReminder_Text, MSGBOX_AUTOCLOSE
# 100 "data/maps/PlayerHouse2F/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Left
# 101 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


Player2FSetClock::
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Player2FSetClock_2
# 114 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, FEMALE
Player2FSetClock_1:
# 116 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_SYS_CLOCK_SET, Player2FSetClock_6
Player2FSetClock_5:
# 119 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox PlayersHouse_2F_Text_ClockIsStopped, MSGBOX_DEFAULT
# 120 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 121 "data/maps/PlayerHouse2F/scripts.pory"
	special StartWallClock
# 122 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 123 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return

Player2FSetClock_2:
# 111 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_0x8004, MALE
	goto Player2FSetClock_1

Player2FSetClock_6:
# 117 "data/maps/PlayerHouse2F/scripts.pory"
	goto Player2FCheckClock
	goto Player2FSetClock_5


Player2FCheckClock::
# 127 "data/maps/PlayerHouse2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 128 "data/maps/PlayerHouse2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 129 "data/maps/PlayerHouse2F/scripts.pory"
	special Special_ViewWallClock
# 130 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
# 131 "data/maps/PlayerHouse2F/scripts.pory"
	release
	return


PlayerHouse_ItemCapsule::
# 135 "data/maps/PlayerHouse2F/scripts.pory"
	finditem ITEM_ABILITY_CAPSULE
# 136 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_ge PlayerHouse_ItemCapsule_1
	return

PlayerHouse_ItemCapsule_1:
# 137 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


PlayerWardrobe::
# 142 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 143 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox ChangeOutfit2, MSGBOX_YESNO
# 144 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerWardrobe_2
# 149 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 150 "data/maps/PlayerHouse2F/scripts.pory"
	message PlayerWardrobe_Text_0
# 151 "data/maps/PlayerHouse2F/scripts.pory"
	waitmessage
	checkplayergender
# 0 "data/maps/PlayerHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PlayerWardrobe_4
# 183 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_1, SPECIES_MAY_RUBY
# 184 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_2, SPECIES_MAY_EMERALD
# 185 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_11
PlayerWardrobe_10:
# 188 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_OBTAIN_CONTEST_OUTFIT, PlayerWardrobe_17
PlayerWardrobe_16:
# 191 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_5, SPECIES_EMPTY
# 192 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 193 "data/maps/PlayerHouse2F/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_RUBY, PlayerWardrobe_26
# 197 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_EMERALD, PlayerWardrobe_27
# 200 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_ORAS, PlayerWardrobe_28
# 203 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_MAY_CONTEST, PlayerWardrobe_29
# 206 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_EMPTY, PlayerWardrobe_30
# 207 "data/maps/PlayerHouse2F/scripts.pory"
	case MULTI_B_PRESSED, PlayerWardrobe_30
	return

PlayerWardrobe_2:
# 145 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 146 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end

PlayerWardrobe_4:
# 153 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_1, SPECIES_BRENDAN_RUBY
# 154 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_2, SPECIES_BRENDAN_EMERALD
# 155 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_PURCHASED_OUTFIT, PlayerWardrobe_8
PlayerWardrobe_7:
# 158 "data/maps/PlayerHouse2F/scripts.pory"
	goto_if_set FLAG_OBTAIN_CONTEST_OUTFIT, PlayerWardrobe_14
PlayerWardrobe_13:
# 161 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_5, SPECIES_EMPTY
# 162 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultistack 23, 0, FALSE, 5, FALSE, 98, DYN_MULTICHOICE_CB_SHOW_MON
# 163 "data/maps/PlayerHouse2F/scripts.pory"
	switch VAR_RESULT
# 164 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_RUBY, PlayerWardrobe_20
# 167 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_EMERALD, PlayerWardrobe_21
# 170 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_ORAS, PlayerWardrobe_22
# 173 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_BRENDAN_CONTEST, PlayerWardrobe_23
# 176 "data/maps/PlayerHouse2F/scripts.pory"
	case SPECIES_EMPTY, PlayerWardrobe_24
# 177 "data/maps/PlayerHouse2F/scripts.pory"
	case MULTI_B_PRESSED, PlayerWardrobe_24
	return

PlayerWardrobe_8:
# 156 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_3, SPECIES_BRENDAN_ORAS
	goto PlayerWardrobe_7

PlayerWardrobe_11:
# 186 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_3, SPECIES_MAY_ORAS
	goto PlayerWardrobe_10

PlayerWardrobe_14:
# 159 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_4, SPECIES_BRENDAN_CONTEST
	goto PlayerWardrobe_13

PlayerWardrobe_17:
# 189 "data/maps/PlayerHouse2F/scripts.pory"
	dynmultipush PlayerWardrobe_Text_4, SPECIES_MAY_CONTEST
	goto PlayerWardrobe_16

PlayerWardrobe_20:
# 165 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_RUBYSAPPHIRE
# 166 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_21:
# 168 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_EMERALD
# 169 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_22:
# 171 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_ORAS
# 172 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_23:
# 174 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_CONTEST
# 175 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_24:
# 178 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end

PlayerWardrobe_26:
# 195 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_RUBYSAPPHIRE
# 196 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_27:
# 198 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_EMERALD
# 199 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_28:
# 201 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_ORAS
# 202 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_29:
# 204 "data/maps/PlayerHouse2F/scripts.pory"
	setvar VAR_CHOSEN_OUTFIT, OUTFIT_CONTEST
# 205 "data/maps/PlayerHouse2F/scripts.pory"
	goto ChangePlayerOutfit
	return

PlayerWardrobe_30:
# 208 "data/maps/PlayerHouse2F/scripts.pory"
	release
	end


ChangePlayerOutfit::
# 225 "data/maps/PlayerHouse2F/scripts.pory"
	closemessage
# 226 "data/maps/PlayerHouse2F/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 227 "data/maps/PlayerHouse2F/scripts.pory"
	warpsilent MAP_PLAYER_HOUSE2F, VAR_TEMP_1, VAR_TEMP_2
# 228 "data/maps/PlayerHouse2F/scripts.pory"
	waitstate
	end


PlayerHouse_Shoes::
# 233 "data/maps/PlayerHouse2F/scripts.pory"
	lock
# 234 "data/maps/PlayerHouse2F/scripts.pory"
	waitse
# 235 "data/maps/PlayerHouse2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 236 "data/maps/PlayerHouse2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 237 "data/maps/PlayerHouse2F/scripts.pory"
	setmetatile 5, 7, 0x295, FALSE
# 238 "data/maps/PlayerHouse2F/scripts.pory"
	special DrawWholeMapView
# 239 "data/maps/PlayerHouse2F/scripts.pory"
	message PlayerFoundShoes
# 240 "data/maps/PlayerHouse2F/scripts.pory"
	waitfanfare
# 241 "data/maps/PlayerHouse2F/scripts.pory"
	waitmessage
# 242 "data/maps/PlayerHouse2F/scripts.pory"
	msgbox ShoesIntroText, MSGBOX_AUTOCLOSE
	end


PlayerWardrobe_Text_0:
# 150 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Choose an outfit to wear.$"

PlayerWardrobe_Text_1:
# 153 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 1$"

PlayerWardrobe_Text_2:
# 154 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 2$"

PlayerWardrobe_Text_3:
# 156 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 3$"

PlayerWardrobe_Text_4:
# 159 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Option 4$"

PlayerWardrobe_Text_5:
# 161 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Exit$"

NES_Crashed_Text::
# 37 "data/maps/PlayerHouse2F/scripts.pory"
	.string "It looks like the game crashed…\p"
	.string "…Okay!\n"
	.string "It's time to go!$"

PlayerHouse2F_NES_Text::
# 52 "data/maps/PlayerHouse2F/scripts.pory"
	.string "It's a Nintendo Entertainment\n"
	.string "System.\p"
	.string "Boot up a game?$"

PlayerHouse2F_Intro_Text::
# 75 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Mom: Rise and shine,\n"
	.string "{PLAYER}!\p"
	.string "Today's a very special day so\n"
	.string "when you're ready, grab your shoes,\l"
	.string "and come on downstairs.\p"
	.string "Oh but first, don't forget to\n"
	.string "set your new clock!$"

PlayerHouse2F_ClockReminder_Text::
# 92 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better set the clock before\n"
	.string "heading downstairs.$"

PlayerHouse2F_ShoesReminder_Text::
# 104 "data/maps/PlayerHouse2F/scripts.pory"
	.string "Better put on the shoes before\n"
	.string "heading downstairs.$"

ChangeOutfit2::
# 214 "data/maps/PlayerHouse2F/scripts.pory"
	.string "It's a clothes rack used for\n"
	.string "storing outfits.\p"
	.string "Would you like to change your outfit?$"

SteppedAway::
# 219 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{PLAYER} stepped away from the\n"
	.string "clothes rack.$"

PlayerFoundShoes::
# 246 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{PLAYER} obtained the running shoes!$"

ShoesIntroText::
# 248 "data/maps/PlayerHouse2F/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Press the B Button while wearing these\n"
	.string "running shoes to run extra-fast!$"
