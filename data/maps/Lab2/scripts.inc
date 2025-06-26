Lab2_MapScripts::
# 9 "data/maps/Lab2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 35 "data/maps/Lab2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 11 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	goto_if_ge Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 16 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 27 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW
	goto_if_ne Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 28 "data/maps/Lab2/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ne Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 32 "data/maps/Lab2/scripts.pory"
	call SetupRivalGfxId
	return

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 12 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_2
# 14 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 17 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 18 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 20 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
# 22 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14
	goto Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 29 "data/maps/Lab2/scripts.pory"
	setflag FLAG_HIDE_LAB_RIVAL
	return

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 19 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_1
	goto Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 21 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_2
	goto Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_14:
# 23 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_3
	goto Lab2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Lab2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 36 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES, Lab_Intro
# 37 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL, Lab_Intro
# 38 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW, Lab_DexGet
# 39 "data/maps/Lab2/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED, Lab_GetMegaStone
	.2byte 0


Lab_Intro::
# 44 "data/maps/Lab2/scripts.pory"
	waitmove 0xFF, Walk6Up
# 45 "data/maps/Lab2/scripts.pory"
	lockall
# 46 "data/maps/Lab2/scripts.pory"
	msgbox Lab_Intro_Speech, MSGBOX_AUTOCLOSE
# 47 "data/maps/Lab2/scripts.pory"
	delay 20
# 48 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_BIRCH, DIR_EAST
# 49 "data/maps/Lab2/scripts.pory"
	delay 20
# 50 "data/maps/Lab2/scripts.pory"
	msgbox Lab_Intro_Speech2, MSGBOX_AUTOCLOSE
# 51 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PROF_INTRO
# 52 "data/maps/Lab2/scripts.pory"
	release
	return


Lab_Ball_Rowlet::
# 56 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_ROWLET
# 57 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab_Ball_Torchic::
# 60 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_TORCHIC
# 61 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab_Ball_Piplup::
# 64 "data/maps/Lab2/scripts.pory"
	setvar VAR_TEMP_3, SPECIES_PIPLUP
# 65 "data/maps/Lab2/scripts.pory"
	goto Lab_BallMain
	return


Lab_BallMain::
# 68 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, Lab_BallMain_2
# 72 "data/maps/Lab2/scripts.pory"
	lock
# 73 "data/maps/Lab2/scripts.pory"
	waitse
# 74 "data/maps/Lab2/scripts.pory"
	playmoncry VAR_TEMP_3, CRY_MODE_NORMAL
# 75 "data/maps/Lab2/scripts.pory"
	defaultmonpic VAR_TEMP_3
# 76 "data/maps/Lab2/scripts.pory"
	waitmoncry
# 77 "data/maps/Lab2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_3
	msgbox Lab_BallMain_Text_1, MSGBOX_YESNO
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab_BallMain_5
# 83 "data/maps/Lab2/scripts.pory"
	givemon VAR_TEMP_3, 5
# 84 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 85 "data/maps/Lab2/scripts.pory"
	message Lab_BallMain_Text_2
# 86 "data/maps/Lab2/scripts.pory"
	waitmessage
# 87 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 88 "data/maps/Lab2/scripts.pory"
	removeobject VAR_LAST_TALKED
# 89 "data/maps/Lab2/scripts.pory"
	switch VAR_TEMP_3
# 90 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_BallMain_9
# 92 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_BallMain_10
# 94 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_BallMain_11
Lab_BallMain_7:
# 97 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 98 "data/maps/Lab2/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 99 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_4
# 100 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
# 101 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_3, MSGBOX_YESNO
# 102 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 103 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lab_BallMain_13
Lab_BallMain_12:
# 107 "data/maps/Lab2/scripts.pory"
	callnative UpdateFollowingPokemon
# 108 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_BallMain_2:
# 69 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_0, MSGBOX_SIGN
	end

Lab_BallMain_5:
# 79 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 80 "data/maps/Lab2/scripts.pory"
	msgbox Lab_NotChosen, MSGBOX_AUTOCLOSE
	end

Lab_BallMain_9:
# 91 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto Lab_BallMain_7

Lab_BallMain_10:
# 93 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto Lab_BallMain_7

Lab_BallMain_11:
# 95 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto Lab_BallMain_7

Lab_BallMain_13:
# 104 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 105 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Lab_BallMain_12


Lab_NoLeave::
# 112 "data/maps/Lab2/scripts.pory"
	lock
# 113 "data/maps/Lab2/scripts.pory"
	msgbox Lab_NoLeave_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/Lab2/scripts.pory"
	waitmove OBJ_EVENT_ID_PLAYER, Walk1Up
# 115 "data/maps/Lab2/scripts.pory"
	release
	return


Lab_FollowerEvent2::
# 119 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_5
# 120 "data/maps/Lab2/scripts.pory"
	goto Lab_FollowerEvent
	return


Lab_FollowerEvent::
# 124 "data/maps/Lab2/scripts.pory"
	safefollow
# 125 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 126 "data/maps/Lab2/scripts.pory"
	lock
# 127 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 128 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_TEMP_5, Lab_FollowerEvent_2
# 132 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_BIRCH, DIR_EAST
Lab_FollowerEvent_1:
# 134 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_LAB_BIRCH, ExclamationMark
# 135 "data/maps/Lab2/scripts.pory"
	delay 48
# 136 "data/maps/Lab2/scripts.pory"
	msgbox BirchSurprised
# 137 "data/maps/Lab2/scripts.pory"
	msgbox Lab_FollowerEvent_Text_0, MSGBOX_AUTOCLOSE
# 138 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_TEMP_4
# 139 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
	return

Lab_FollowerEvent_2:
# 129 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_BIRCH, DIR_NORTH
	goto Lab_FollowerEvent_1


Lab_DexGet::
# 143 "data/maps/Lab2/scripts.pory"
	safefollow
# 144 "data/maps/Lab2/scripts.pory"
	waitmove OBJ_EVENT_ID_PLAYER, Walk6Up
# 145 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 146 "data/maps/Lab2/scripts.pory"
	lock
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab_DexGet_2
Lab_DexGet_1:
# 157 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab_DexGet_5
Lab_DexGet_4:
# 167 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 168 "data/maps/Lab2/scripts.pory"
	message Lab_DexGet_Text_0
# 169 "data/maps/Lab2/scripts.pory"
	waitmessage
# 170 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 171 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 172 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_RIVAL, DIR_WEST
# 173 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_1
# 174 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 175 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_2
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab_DexGet_8
# 180 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_4, MSGBOX_AUTOCLOSE
Lab_DexGet_7:
# 182 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, LabFaceDown
# 183 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LabFaceDown
# 184 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_RIVAL, Lab_Movement_RivalExit1
# 185 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 186 "data/maps/Lab2/scripts.pory"
	delay 60
# 187 "data/maps/Lab2/scripts.pory"
	removeobject LOCALID_LAB_RIVAL
# 188 "data/maps/Lab2/scripts.pory"
	savebgm MUS_DUMMY
# 189 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 190 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 191 "data/maps/Lab2/scripts.pory"
	fadedefaultbgm
# 192 "data/maps/Lab2/scripts.pory"
	delay 25
# 193 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_5, MSGBOX_AUTOCLOSE
# 194 "data/maps/Lab2/scripts.pory"
	special SetUnlockedPokedexFlags
# 195 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 196 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	return

Lab_DexGet_2:
# 148 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayA
# 149 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayB
# 150 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayC
# 151 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayD
# 152 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayE
# 153 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayF
# 154 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayG
# 155 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayH, MSGBOX_AUTOCLOSE
	goto Lab_DexGet_1

Lab_DexGet_5:
# 158 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanA
# 159 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanB
# 160 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanC
# 161 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanD
# 162 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanE
# 163 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanF
# 164 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanG
# 165 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanH, MSGBOX_AUTOCLOSE
	goto Lab_DexGet_4

Lab_DexGet_8:
# 177 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_3, MSGBOX_AUTOCLOSE
	goto Lab_DexGet_7


Lab_GetMegaStone::
# 200 "data/maps/Lab2/scripts.pory"
	safefollow
# 201 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk6Up
# 202 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 203 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab_GetMegaStone_2
# 207 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStones
Lab_GetMegaStone_1:
# 209 "data/maps/Lab2/scripts.pory"
	closemessage
# 210 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab_GetMegaStone_6
Lab_GetMegaStone_5:
# 218 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 219 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_GetMegaStone_10
# 221 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_GetMegaStone_11
# 223 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_GetMegaStone_12
Lab_GetMegaStone_8:
# 226 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab_GetMegaStone_14
# 230 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
Lab_GetMegaStone_13:
# 232 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_HIDE_LAB_RIVAL, Lab_GetMegaStone_18
Lab_GetMegaStone_17:
# 251 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_Q33_PROF_BIRCH_MEGASTONE_START, Lab_GetMegaStone_21
Lab_GetMegaStone_20:
# 255 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_GetMegaStone_2:
# 204 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStonesWithoutRival
	goto Lab_GetMegaStone_1

Lab_GetMegaStone_6:
# 211 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 212 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_BIRCH, Common_Movement_QuestionMark
# 213 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 214 "data/maps/Lab2/scripts.pory"
	delay 30
# 215 "data/maps/Lab2/scripts.pory"
	msgbox TradedAwayStarter, MSGBOX_AUTOCLOSE
# 216 "data/maps/Lab2/scripts.pory"
	closemessage
	goto Lab_GetMegaStone_5

Lab_GetMegaStone_10:
# 220 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab_GetMegaStone_8

Lab_GetMegaStone_11:
# 222 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab_GetMegaStone_8

Lab_GetMegaStone_12:
# 224 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab_GetMegaStone_8

Lab_GetMegaStone_14:
# 227 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab_GetMegaStone_13

Lab_GetMegaStone_18:
# 233 "data/maps/Lab2/scripts.pory"
	closemessage
# 234 "data/maps/Lab2/scripts.pory"
	delay 24
# 235 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_LAB_BIRCH, ProfBackAndForth
# 236 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 237 "data/maps/Lab2/scripts.pory"
	waitmove OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab_GetMegaStone_24
# 242 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_Brendan
Lab_GetMegaStone_23:
# 244 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 245 "data/maps/Lab2/scripts.pory"
	msgbox ThanksDadBirch, MSGBOX_AUTOCLOSE
# 246 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_RIVAL, Walk7Down
# 247 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TurnPlayer
# 248 "data/maps/Lab2/scripts.pory"
	waitmovement LOCALID_LAB_RIVAL
# 249 "data/maps/Lab2/scripts.pory"
	removeobject LOCALID_LAB_RIVAL
	goto Lab_GetMegaStone_17

Lab_GetMegaStone_21:
# 252 "data/maps/Lab2/scripts.pory"
	completequest FLAG_Q33_PROF_BIRCH_MEGASTONE_COMPLETE
# 253 "data/maps/Lab2/scripts.pory"
	special ShowJournalPopupRemove
	goto Lab_GetMegaStone_20

Lab_GetMegaStone_24:
# 239 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_May
	goto Lab_GetMegaStone_23


Lab_Birch::
# 259 "data/maps/Lab2/scripts.pory"
	switch VAR_PEARLWOOD_TOWN_STATE
# 260 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_PROF_INTRO, Lab_Birch_3
# 262 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_PKMN_OBTAINED, Lab_Birch_4
# 263 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_BROTHER_FOUGHT, Lab_Birch_4
# 264 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_GIVEN_GOODBYE_TO_MOM, Lab_Birch_4
# 265 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW, Lab_Birch_4
# 267 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_GET_MEGA_STONE_LATER, Lab_Birch_5
# 269 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_MEGA_STONE_OBTAINED, Lab_Birch_6
# 275 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_MEGA_EVENT_COMPLETED, Lab_Birch_7
# 276 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_DEX_OBTAINED, Lab_Birch_7
# 277 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_MEGA_RING_OBTAINED, Lab_Birch_7
Lab_Birch_1:
# 280 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_Birch_3:
# 261 "data/maps/Lab2/scripts.pory"
	msgbox PickABall, MSGBOX_NPC
	goto Lab_Birch_1

Lab_Birch_4:
# 266 "data/maps/Lab2/scripts.pory"
	msgbox TakeCareOfPokemon, MSGBOX_NPC
	goto Lab_Birch_1

Lab_Birch_5:
# 268 "data/maps/Lab2/scripts.pory"
	call Lab_GetMegaStoneLater
	goto Lab_Birch_1

Lab_Birch_6:
# 270 "data/maps/Lab2/scripts.pory"
	msgbox YourFatherIsInTown, MSGBOX_NPC
# 271 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_Q34_DADS_HOME_START, Lab_Birch_8
	goto Lab_Birch_1

Lab_Birch_7:
# 278 "data/maps/Lab2/scripts.pory"
	call ProfBirch_EventScript_RatePokedexOrRegister
	goto Lab_Birch_1

Lab_Birch_8:
# 272 "data/maps/Lab2/scripts.pory"
	startquest FLAG_Q34_DADS_HOME_START
# 273 "data/maps/Lab2/scripts.pory"
	special ShowJournalPopupAdd
	goto Lab_Birch_1


Lab_GetMegaStoneLater::
# 284 "data/maps/Lab2/scripts.pory"
	lock
# 285 "data/maps/Lab2/scripts.pory"
	faceplayer
# 286 "data/maps/Lab2/scripts.pory"
	msgbox HeresYourStoneNow
# 287 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 288 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_GetMegaStoneLater_3
# 290 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_GetMegaStoneLater_4
# 292 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_GetMegaStoneLater_5
Lab_GetMegaStoneLater_1:
# 295 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab_GetMegaStoneLater_6
# 299 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	return

Lab_GetMegaStoneLater_3:
# 289 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab_GetMegaStoneLater_1

Lab_GetMegaStoneLater_4:
# 291 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab_GetMegaStoneLater_1

Lab_GetMegaStoneLater_5:
# 293 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab_GetMegaStoneLater_1

Lab_GetMegaStoneLater_6:
# 296 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


# 303 "data/maps/Lab2/scripts.pory"
Lab_Movement_RivalExit1:
# 304 "data/maps/Lab2/scripts.pory"
	player_run_down
# 304 "data/maps/Lab2/scripts.pory"
	player_run_down
# 304 "data/maps/Lab2/scripts.pory"
	player_run_down
# 305 "data/maps/Lab2/scripts.pory"
	player_run_left
# 306 "data/maps/Lab2/scripts.pory"
	player_run_down
# 306 "data/maps/Lab2/scripts.pory"
	player_run_down
# 306 "data/maps/Lab2/scripts.pory"
	player_run_down
# 306 "data/maps/Lab2/scripts.pory"
	player_run_down
# 306 "data/maps/Lab2/scripts.pory"
	player_run_down
	step_end

# 308 "data/maps/Lab2/scripts.pory"
LabFaceDown:
# 309 "data/maps/Lab2/scripts.pory"
	delay_16
# 310 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

# 312 "data/maps/Lab2/scripts.pory"
ProfBackAndForth:
# 313 "data/maps/Lab2/scripts.pory"
	walk_right
# 314 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 315 "data/maps/Lab2/scripts.pory"
	delay_16
# 315 "data/maps/Lab2/scripts.pory"
	delay_16
# 315 "data/maps/Lab2/scripts.pory"
	delay_16
# 315 "data/maps/Lab2/scripts.pory"
	delay_16
# 315 "data/maps/Lab2/scripts.pory"
	delay_16
# 315 "data/maps/Lab2/scripts.pory"
	delay_16
# 316 "data/maps/Lab2/scripts.pory"
	walk_left
# 317 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 318 "data/maps/Lab2/scripts.pory"
	step_end

# 320 "data/maps/Lab2/scripts.pory"
TurnPlayer:
# 321 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_right
# 322 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

Lab_BallMain_Text_0:
# 69 "data/maps/Lab2/scripts.pory"
	.string "You already received a Pokémon.$"

Lab_BallMain_Text_1:
# 78 "data/maps/Lab2/scripts.pory"
	.string "Do you want to choose {STR_VAR_1}?$"

Lab_BallMain_Text_2:
# 85 "data/maps/Lab2/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Lab_BallMain_Text_3:
# 101 "data/maps/Lab2/scripts.pory"
	.string "Do you want to give a nickname\nto your new Pokémon?$"

Lab_NoLeave_Text_0:
# 113 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You haven't chosen a Pokémon yet!$"

Lab_FollowerEvent_Text_0:
# 137 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can use the party menu to set\na preferred Pokémon, withdraw your\lcurrent one, or let another one out.$"

Lab_DexGet_Text_0:
# 168 "data/maps/Lab2/scripts.pory"
	.string "Obtained the Pokédex!$"

Lab_DexGet_Text_1:
# 173 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Here, you can have\nthese as well.$"

Lab_DexGet_Text_2:
# 175 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Now you can start catching\nyour own Pokémon and we can see which\lof us can fill our Pokédex faster!$"

Lab_DexGet_Text_3:
# 177 "data/maps/Lab2/scripts.pory"
	.string "Last one out the door is a rotten egg!$"

Lab_DexGet_Text_4:
# 180 "data/maps/Lab2/scripts.pory"
	.string "Come on, let's go catch some Pokémon!$"

Lab_DexGet_Text_5:
# 193 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Sigh…\pSometimes I wonder\nwhere {RIVAL} gets all that energy…$"

Lab_Intro_Speech::
# 325 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Hello!\n"
	.string "You must be {PLAYER}!\p"
	.string "As you may know, it is customary in\n"
	.string "this town for every young person to\l"
	.string "be given their very first Pokémon.\p"
	.string "Some people use this opportunity to\n"
	.string "go on a journey of self-discovery\l"
	.string "while some are content with\l"
	.string "where they are now.\p"
	.string "What you do with your Pokémon is\n"
	.string "your decision.$"

Lab_Intro_Speech2::
# 339 "data/maps/Lab2/scripts.pory"
	.string "Over there on the table lies three\n"
	.string "Poké Balls. Each of them stores\l"
	.string "some very rare Pokémon.\p"
	.string "You may now go and choose one of\n"
	.string "them as your own.\p"
	.string "You may only choose one so make\n"
	.string "sure you decide carefully!$"

BirchSurprised::
# 348 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh my!\p"
	.string "I knew these little fellas were\n"
	.string "energetic, but I never expected one\l"
	.string "to bust out of its ball like that!\p"
	.string "Now that you two are partners,\n"
	.string "I'm sure it will go back inside\l"
	.string "its ball if you simply ask it nicely.$"

Lab_NotChosen::
# 357 "data/maps/Lab2/scripts.pory"
	.string "Take your time.$"

Lab_DexTalkMayA::
# 360 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab_DexTalkMayB::
# 364 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Oh boy, is there…\p"
	.string "You gave {PLAYER} a Pokémon but\n"
	.string "never gave him a Pokédex, dad!\p"
	.string "How do you expect him to become\n"
	.string "a great trainer without one?!$"

Lab_DexTalkMayC::
# 371 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab_DexTalkMayD::
# 375 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Slipped your mind?!\n"
	.string "You're a Pokémon professor!\p"
	.string "Surely you realize that giving one to\n"
	.string "{PLAYER} helps your research as well?$"

Lab_DexTalkMayE::
# 381 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab_DexTalkMayF::
# 390 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?!$"

Lab_DexTalkMayG::
# 394 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Here, {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab_DexTalkMayH::
# 399 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Yay! Thanks, dad!$"

Lab_DexTalkBrendanA::
# 403 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab_DexTalkBrendanB::
# 407 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: As a matter of fact, there is.\n"
	.string "You never gave {PLAYER} a Pokédex!\p"
	.string "How do you expect her to become\n"
	.string "a great trainer without one?$"

Lab_DexTalkBrendanC::
# 413 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab_DexTalkBrendanD::
# 417 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Slipped your mind?\n"
	.string "Aren't you a Pokémon professor?\p"
	.string "Surely giving one to {PLAYER}\n"
	.string "helps your research as well.$"

Lab_DexTalkBrendanE::
# 423 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab_DexTalkBrendanF::
# 432 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?$"

Lab_DexTalkBrendanG::
# 436 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Yes, I know. {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab_DexTalkBrendanH::
# 441 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: You're the best, dad!$"

LabMegaStones::
# 444 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "what a pleasant surprise.\l"
	.string "I was hoping to see you two soon.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor\l"
	.string "Sycamore of Kalos, I have been\l"
	.string "able to greatly further my research.\p"
	.string "This is where you two come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "Evolution within certain Pokémon.\p"
	.string "I would like you two to test out my\n"
	.string "theory, and see if your Pokémon are\l"
	.string "able to somehow interact with these\l"
	.string "Mega Stones.\p"
	.string "I want you both to have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I have given you.$"

LabMegaStonesWithoutRival::
# 469 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, hello, {PLAYER}.\n"
	.string "what a pleasant surprise.\p"
	.string "I must say, I was expecting to see\n"
	.string "you here a bit earlier, but I digress.\p"
	.string "Thanks to a colleague of mine, I have\n"
	.string "been able to do a lot of research on\l"
	.string "a phenomena called “Mega Evolution.”\p"
	.string "Not much is known about it here in\n"
	.string "Sinko, but thanks to Professor\l"
	.string "Sycamore of Kalos, I have been\l"
	.string "able to greatly further my research.\p"
	.string "This is where you and {RIVAL} come in.\p"
	.string "One day, I happened upon a mysterious\n"
	.string "set of stones. I believe these stones\l"
	.string "to be Mega Stones, special evolution\l"
	.string "stones capable of triggering a Mega\l"
	.string "Evolution within certain Pokémon.\p"
	.string "I would like you to test out my\n"
	.string "theory, and see if your Pokémon is\l"
	.string "able to somehow interact with one of\l"
	.string "these Mega Stones.\p"
	.string "I already gave {RIVAL} a stone, and\n"
	.string "I want you to also have a stone that\n"
	.string "I believe is related to the Pokémon\l"
	.string "I have given you.$"

TradedAwayStarter::
# 496 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, you haven't traded my\n"
	.string "magnanimous gift away, have you?\p"
	.string "Don't worry, I'm just kidding.\p"
	.string "I can still give you the stone that's\n"
	.string "associated with the Pokémon I gave you,\l"
	.string "but you'll have to figure out where to\l"
	.string "get the stone for the Pokémon you\l"
	.string "currently have by yourself.\p"
	.string "Maybe you could try checking with the\n"
	.string "person who traded you it originally?\p"
	.string "In any case, here you go.$"

GonnaTakeMyLeave_May::
# 509 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You better train your Pokémon to use\n"
	.string "the stone, {PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaTakeMyLeave_Brendan::
# 518 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "I hope you train your Pokémon to get\n"
	.string "the most out of that stone, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

ThanksDadBirch::
# 527 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Thanks dad! I'm going to go\n"
	.string "and give this thing a try right away!$"

PickABall::
# 532 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Go on, pick one of the\n"
	.string "balls from the table.$"

TakeCareOfPokemon::
# 536 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you take\n"
	.string "good care of your new companion.$"

YourFatherIsInTown::
# 540 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, I almost forgot!\n"
	.string "Your father is currently in town.\p"
	.string "I know he's a busy man. You may want\n"
	.string "to dash on home before he leaves.$"

HeresYourStoneNow::
# 546 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you've made enough\n"
	.string "space in your bag to hold this stone.$"
