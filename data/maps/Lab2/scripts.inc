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
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED, Lab_MegaStoneGet
	.2byte 0


Lab_Intro::
# 44 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_PLAYER, Walk6Up
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
# 78 "data/maps/Lab2/scripts.pory"
	switch VAR_TEMP_3
# 79 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_BallMain_6
# 81 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_BallMain_7
# 83 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_BallMain_8
Lab_BallMain_4:
# 86 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Lab_BallMain_10
# 91 "data/maps/Lab2/scripts.pory"
	givemon VAR_TEMP_3, 5
# 92 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/Lab2/scripts.pory"
	message Lab_BallMain_Text_4
# 94 "data/maps/Lab2/scripts.pory"
	waitmessage
# 95 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 96 "data/maps/Lab2/scripts.pory"
	removeobject VAR_LAST_TALKED
# 97 "data/maps/Lab2/scripts.pory"
	switch VAR_TEMP_3
# 98 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_BallMain_14
# 100 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_BallMain_15
# 102 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_BallMain_16
Lab_BallMain_12:
# 105 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 106 "data/maps/Lab2/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 107 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_4
# 108 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
# 109 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_5, MSGBOX_YESNO
# 110 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 111 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Lab_BallMain_18
Lab_BallMain_17:
# 115 "data/maps/Lab2/scripts.pory"
	callnative UpdateFollowingPokemon
# 116 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_BallMain_2:
# 69 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_0, MSGBOX_SIGN
	end

Lab_BallMain_6:
# 80 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_1, MSGBOX_YESNO
	goto Lab_BallMain_4

Lab_BallMain_7:
# 82 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_2, MSGBOX_YESNO
	goto Lab_BallMain_4

Lab_BallMain_8:
# 84 "data/maps/Lab2/scripts.pory"
	msgbox Lab_BallMain_Text_3, MSGBOX_YESNO
	goto Lab_BallMain_4

Lab_BallMain_10:
# 87 "data/maps/Lab2/scripts.pory"
	hidemonpic
# 88 "data/maps/Lab2/scripts.pory"
	release
	end

Lab_BallMain_14:
# 99 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_ROWLET
	goto Lab_BallMain_12

Lab_BallMain_15:
# 101 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_TORCHIC
	goto Lab_BallMain_12

Lab_BallMain_16:
# 103 "data/maps/Lab2/scripts.pory"
	setvar VAR_STARTER_MON, SPECIES_PIPLUP
	goto Lab_BallMain_12

Lab_BallMain_18:
# 112 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 113 "data/maps/Lab2/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto Lab_BallMain_17


Lab_NoPokemon::
# 120 "data/maps/Lab2/scripts.pory"
	lock
# 121 "data/maps/Lab2/scripts.pory"
	msgbox Lab_NoPokemon_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_PLAYER, Walk1Up
# 123 "data/maps/Lab2/scripts.pory"
	release
	return


Lab_FollowerEvent2::
# 127 "data/maps/Lab2/scripts.pory"
	setflag FLAG_TEMP_5
# 128 "data/maps/Lab2/scripts.pory"
	goto Lab_FollowerEvent
	return


Lab_FollowerEvent::
# 132 "data/maps/Lab2/scripts.pory"
	safefollow
# 133 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 134 "data/maps/Lab2/scripts.pory"
	lock
# 135 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_TEMP_5, Lab_FollowerEvent_2
# 140 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_BIRCH, DIR_EAST
Lab_FollowerEvent_1:
# 142 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_LAB_BIRCH, ExclamationMark
# 143 "data/maps/Lab2/scripts.pory"
	delay 48
# 144 "data/maps/Lab2/scripts.pory"
	msgbox BirchSurprised
# 145 "data/maps/Lab2/scripts.pory"
	msgbox Lab_FollowerEvent_Text_0, MSGBOX_AUTOCLOSE
# 146 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_TEMP_4
# 147 "data/maps/Lab2/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
	return

Lab_FollowerEvent_2:
# 137 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_BIRCH, DIR_NORTH
	goto Lab_FollowerEvent_1


Lab_DexGet::
# 151 "data/maps/Lab2/scripts.pory"
	safefollow
# 152 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_PLAYER, Walk6Up
# 153 "data/maps/Lab2/scripts.pory"
	unlockfollowermovement
# 154 "data/maps/Lab2/scripts.pory"
	lock
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab_DexGet_2
Lab_DexGet_1:
# 165 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Lab_DexGet_5
Lab_DexGet_4:
# 175 "data/maps/Lab2/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 176 "data/maps/Lab2/scripts.pory"
	message Lab_DexGet_Text_0
# 177 "data/maps/Lab2/scripts.pory"
	waitmessage
# 178 "data/maps/Lab2/scripts.pory"
	waitfanfare
# 179 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 180 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_LAB_RIVAL, DIR_WEST
# 181 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_1
# 182 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 183 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_2
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab_DexGet_8
# 188 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_4, MSGBOX_AUTOCLOSE
Lab_DexGet_7:
# 190 "data/maps/Lab2/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, LabFaceDown
# 191 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_PLAYER, LabFaceDown
# 192 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_RIVAL, Lab_Movement_RivalExit1
# 193 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 194 "data/maps/Lab2/scripts.pory"
	delay 60
# 195 "data/maps/Lab2/scripts.pory"
	removeobject LOCALID_LAB_RIVAL
# 196 "data/maps/Lab2/scripts.pory"
	savebgm MUS_DUMMY
# 197 "data/maps/Lab2/scripts.pory"
	turnobject OBJ_EVENT_ID_FOLLOWER, DIR_NORTH
# 198 "data/maps/Lab2/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 199 "data/maps/Lab2/scripts.pory"
	fadedefaultbgm
# 200 "data/maps/Lab2/scripts.pory"
	delay 25
# 201 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_5, MSGBOX_AUTOCLOSE
# 202 "data/maps/Lab2/scripts.pory"
	special SetUnlockedPokedexFlags
# 203 "data/maps/Lab2/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 204 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_DEX_OBTAINED
	return

Lab_DexGet_2:
# 156 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayA
# 157 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayB
# 158 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayC
# 159 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayD
# 160 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayE
# 161 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayF
# 162 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayG
# 163 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkMayH, MSGBOX_AUTOCLOSE
	goto Lab_DexGet_1

Lab_DexGet_5:
# 166 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanA
# 167 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanB
# 168 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanC
# 169 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanD
# 170 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanE
# 171 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanF
# 172 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanG
# 173 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexTalkBrendanH, MSGBOX_AUTOCLOSE
	goto Lab_DexGet_4

Lab_DexGet_8:
# 185 "data/maps/Lab2/scripts.pory"
	msgbox Lab_DexGet_Text_3, MSGBOX_AUTOCLOSE
	goto Lab_DexGet_7


Lab_MegaStoneGet::
# 208 "data/maps/Lab2/scripts.pory"
	safefollow
# 209 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_PLAYER, Walk6Up
# 210 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 211 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_HIDE_LAB_RIVAL, Lab_MegaStoneGet_2
# 215 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStones
Lab_MegaStoneGet_1:
# 217 "data/maps/Lab2/scripts.pory"
	closemessage
# 218 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_CORALGROVE_TRADE_COMPLETED, Lab_MegaStoneGet_6
Lab_MegaStoneGet_5:
# 226 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 227 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_MegaStoneGet_10
# 229 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_MegaStoneGet_11
# 231 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_MegaStoneGet_12
Lab_MegaStoneGet_8:
# 234 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab_MegaStoneGet_14
# 238 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
Lab_MegaStoneGet_13:
# 240 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_HIDE_LAB_RIVAL, Lab_MegaStoneGet_18
Lab_MegaStoneGet_17:
# 259 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_Q33_PROF_BIRCH_MEGASTONE_START, Lab_MegaStoneGet_21
Lab_MegaStoneGet_20:
# 263 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_MegaStoneGet_2:
# 212 "data/maps/Lab2/scripts.pory"
	msgbox LabMegaStonesWithoutRival
	goto Lab_MegaStoneGet_1

Lab_MegaStoneGet_6:
# 219 "data/maps/Lab2/scripts.pory"
	playse SE_PIN
# 220 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_BIRCH, Common_Movement_QuestionMark
# 221 "data/maps/Lab2/scripts.pory"
	waitmovement 0
# 222 "data/maps/Lab2/scripts.pory"
	delay 30
# 223 "data/maps/Lab2/scripts.pory"
	msgbox TradedAwayStarter, MSGBOX_AUTOCLOSE
# 224 "data/maps/Lab2/scripts.pory"
	closemessage
	goto Lab_MegaStoneGet_5

Lab_MegaStoneGet_10:
# 228 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab_MegaStoneGet_8

Lab_MegaStoneGet_11:
# 230 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab_MegaStoneGet_8

Lab_MegaStoneGet_12:
# 232 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab_MegaStoneGet_8

Lab_MegaStoneGet_14:
# 235 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto Lab_MegaStoneGet_13

Lab_MegaStoneGet_18:
# 241 "data/maps/Lab2/scripts.pory"
	closemessage
# 242 "data/maps/Lab2/scripts.pory"
	delay 24
# 243 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_LAB_BIRCH, ProfBackAndForth
# 244 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 245 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	checkplayergender
# 0 "data/maps/Lab2/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Lab_MegaStoneGet_24
# 250 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_Brendan
Lab_MegaStoneGet_23:
# 252 "data/maps/Lab2/scripts.pory"
	waitmove LOCALID_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 253 "data/maps/Lab2/scripts.pory"
	msgbox ThanksDadBirch, MSGBOX_AUTOCLOSE
# 254 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_LAB_RIVAL, Walk7Down
# 255 "data/maps/Lab2/scripts.pory"
	applymovement LOCALID_PLAYER, TurnPlayer
# 256 "data/maps/Lab2/scripts.pory"
	waitmovement LOCALID_LAB_RIVAL
# 257 "data/maps/Lab2/scripts.pory"
	removeobject LOCALID_LAB_RIVAL
	goto Lab_MegaStoneGet_17

Lab_MegaStoneGet_21:
# 260 "data/maps/Lab2/scripts.pory"
	completequest FLAG_Q33_PROF_BIRCH_MEGASTONE_COMPLETE
# 261 "data/maps/Lab2/scripts.pory"
	special ShowJournalPopupRemove
	goto Lab_MegaStoneGet_20

Lab_MegaStoneGet_24:
# 247 "data/maps/Lab2/scripts.pory"
	msgbox GonnaTakeMyLeave_May
	goto Lab_MegaStoneGet_23


Lab_Birch::
# 267 "data/maps/Lab2/scripts.pory"
	switch VAR_PEARLWOOD_TOWN_STATE
# 268 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_PROF_INTRO, Lab_Birch_3
# 270 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_PKMN_OBTAINED, Lab_Birch_4
# 271 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_BROTHER_FOUGHT, Lab_Birch_4
# 272 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_GIVEN_GOODBYE_TO_MOM, Lab_Birch_4
# 273 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_RIVAL_FOUGHT_IN_MEADOW, Lab_Birch_4
# 275 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_GET_MEGA_STONE_LATER, Lab_Birch_5
# 277 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_MEGA_STONE_OBTAINED, Lab_Birch_6
# 283 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_MEGA_EVENT_COMPLETED, Lab_Birch_7
# 284 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_DEX_OBTAINED, Lab_Birch_7
# 285 "data/maps/Lab2/scripts.pory"
	case STORY_PEARLWOOD_MEGA_RING_OBTAINED, Lab_Birch_7
Lab_Birch_1:
# 288 "data/maps/Lab2/scripts.pory"
	release
	return

Lab_Birch_3:
# 269 "data/maps/Lab2/scripts.pory"
	msgbox PickABall, MSGBOX_NPC
	goto Lab_Birch_1

Lab_Birch_4:
# 274 "data/maps/Lab2/scripts.pory"
	msgbox TakeCareOfPokemon, MSGBOX_NPC
	goto Lab_Birch_1

Lab_Birch_5:
# 276 "data/maps/Lab2/scripts.pory"
	call Lab_MegaStoneGetLater
	goto Lab_Birch_1

Lab_Birch_6:
# 278 "data/maps/Lab2/scripts.pory"
	msgbox YourFatherIsInTown, MSGBOX_NPC
# 279 "data/maps/Lab2/scripts.pory"
	goto_if_unset FLAG_Q34_DADS_HOME_START, Lab_Birch_8
	goto Lab_Birch_1

Lab_Birch_7:
# 286 "data/maps/Lab2/scripts.pory"
	call ProfBirch_EventScript_RatePokedexOrRegister
	goto Lab_Birch_1

Lab_Birch_8:
# 280 "data/maps/Lab2/scripts.pory"
	startquest FLAG_Q34_DADS_HOME_START
# 281 "data/maps/Lab2/scripts.pory"
	special ShowJournalPopupAdd
	goto Lab_Birch_1


Lab_MegaStoneGetLater::
# 292 "data/maps/Lab2/scripts.pory"
	lock
# 293 "data/maps/Lab2/scripts.pory"
	faceplayer
# 294 "data/maps/Lab2/scripts.pory"
	msgbox HeresYourStoneNow
# 295 "data/maps/Lab2/scripts.pory"
	switch VAR_STARTER_MON
# 296 "data/maps/Lab2/scripts.pory"
	case SPECIES_ROWLET, Lab_MegaStoneGetLater_3
# 298 "data/maps/Lab2/scripts.pory"
	case SPECIES_TORCHIC, Lab_MegaStoneGetLater_4
# 300 "data/maps/Lab2/scripts.pory"
	case SPECIES_PIPLUP, Lab_MegaStoneGetLater_5
Lab_MegaStoneGetLater_1:
# 303 "data/maps/Lab2/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, Lab_MegaStoneGetLater_6
# 307 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	return

Lab_MegaStoneGetLater_3:
# 297 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_DECIDUEITE
	goto Lab_MegaStoneGetLater_1

Lab_MegaStoneGetLater_4:
# 299 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_BLAZIKENITE
	goto Lab_MegaStoneGetLater_1

Lab_MegaStoneGetLater_5:
# 301 "data/maps/Lab2/scripts.pory"
	giveitem ITEM_EMPOLEONITE
	goto Lab_MegaStoneGetLater_1

Lab_MegaStoneGetLater_6:
# 304 "data/maps/Lab2/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	return


# 311 "data/maps/Lab2/scripts.pory"
Lab_Movement_RivalExit1:
# 312 "data/maps/Lab2/scripts.pory"
	player_run_down
# 312 "data/maps/Lab2/scripts.pory"
	player_run_down
# 312 "data/maps/Lab2/scripts.pory"
	player_run_down
# 313 "data/maps/Lab2/scripts.pory"
	player_run_left
# 314 "data/maps/Lab2/scripts.pory"
	player_run_down
# 314 "data/maps/Lab2/scripts.pory"
	player_run_down
# 314 "data/maps/Lab2/scripts.pory"
	player_run_down
# 314 "data/maps/Lab2/scripts.pory"
	player_run_down
# 314 "data/maps/Lab2/scripts.pory"
	player_run_down
	step_end

# 316 "data/maps/Lab2/scripts.pory"
LabFaceDown:
# 317 "data/maps/Lab2/scripts.pory"
	delay_16
# 318 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

# 320 "data/maps/Lab2/scripts.pory"
ProfBackAndForth:
# 321 "data/maps/Lab2/scripts.pory"
	walk_right
# 322 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 323 "data/maps/Lab2/scripts.pory"
	delay_16
# 323 "data/maps/Lab2/scripts.pory"
	delay_16
# 323 "data/maps/Lab2/scripts.pory"
	delay_16
# 323 "data/maps/Lab2/scripts.pory"
	delay_16
# 323 "data/maps/Lab2/scripts.pory"
	delay_16
# 323 "data/maps/Lab2/scripts.pory"
	delay_16
# 324 "data/maps/Lab2/scripts.pory"
	walk_left
# 325 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
# 326 "data/maps/Lab2/scripts.pory"
	step_end

# 328 "data/maps/Lab2/scripts.pory"
TurnPlayer:
# 329 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_right
# 330 "data/maps/Lab2/scripts.pory"
	walk_in_place_faster_down
	step_end

Lab_BallMain_Text_0:
# 69 "data/maps/Lab2/scripts.pory"
	.string "You already received a Pokémon.$"

Lab_BallMain_Text_1:
# 80 "data/maps/Lab2/scripts.pory"
	.string "Do you want to choose Rowlet,\nthe Grass Quill Pokémon?$"

Lab_BallMain_Text_2:
# 82 "data/maps/Lab2/scripts.pory"
	.string "Do you want to choose Torchic,\nthe Chick Pokémon?$"

Lab_BallMain_Text_3:
# 84 "data/maps/Lab2/scripts.pory"
	.string "Do you want to choose Piplup,\nthe Penguin Pokémon?$"

Lab_BallMain_Text_4:
# 93 "data/maps/Lab2/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}!$"

Lab_BallMain_Text_5:
# 109 "data/maps/Lab2/scripts.pory"
	.string "Do you want to give a nickname\nto your new Pokémon?$"

Lab_NoPokemon_Text_0:
# 121 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You haven't chosen a Pokémon yet!$"

Lab_FollowerEvent_Text_0:
# 145 "data/maps/Lab2/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can use the party menu to set\na preferred Pokémon, withdraw your\lcurrent one, or let another one out.$"

Lab_DexGet_Text_0:
# 176 "data/maps/Lab2/scripts.pory"
	.string "Obtained the Pokédex!$"

Lab_DexGet_Text_1:
# 181 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Here, you can have\nthese as well.$"

Lab_DexGet_Text_2:
# 183 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Now you can start catching\nyour own Pokémon and we can see which\lof us can fill our Pokédex faster!$"

Lab_DexGet_Text_3:
# 185 "data/maps/Lab2/scripts.pory"
	.string "Last one out the door is a rotten egg!$"

Lab_DexGet_Text_4:
# 188 "data/maps/Lab2/scripts.pory"
	.string "Come on, let's go catch some Pokémon!$"

Lab_DexGet_Text_5:
# 201 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Sigh…\pSometimes I wonder\nwhere {RIVAL} gets all that energy…$"

Lab_Intro_Speech::
# 333 "data/maps/Lab2/scripts.pory"
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
# 347 "data/maps/Lab2/scripts.pory"
	.string "Over there on the table lies three\n"
	.string "Poké Balls. Each of them stores\l"
	.string "some very rare Pokémon.\p"
	.string "You may now go and choose one of\n"
	.string "them as your own.\p"
	.string "You may only choose one so make\n"
	.string "sure you decide carefully!$"

BirchSurprised::
# 356 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh my!\p"
	.string "I knew these little fellas were\n"
	.string "energetic, but I never expected one\l"
	.string "to bust out of its ball like that!\p"
	.string "Now that you two are partners,\n"
	.string "I'm sure it will go back inside\l"
	.string "its ball if you simply ask it nicely.$"

Lab_DexTalkMayA::
# 365 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab_DexTalkMayB::
# 369 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Oh boy, is there…\p"
	.string "You gave {PLAYER} a Pokémon but\n"
	.string "never gave him a Pokédex, dad!\p"
	.string "How do you expect him to become\n"
	.string "a great trainer without one?!$"

Lab_DexTalkMayC::
# 376 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab_DexTalkMayD::
# 380 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Slipped your mind?!\n"
	.string "You're a Pokémon professor!\p"
	.string "Surely you realize that giving one to\n"
	.string "{PLAYER} helps your research as well?$"

Lab_DexTalkMayE::
# 386 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab_DexTalkMayF::
# 395 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?!$"

Lab_DexTalkMayG::
# 399 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Here, {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab_DexTalkMayH::
# 404 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Yay! Thanks, dad!$"

Lab_DexTalkBrendanA::
# 408 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: {RIVAL}, {PLAYER},\n"
	.string "is there something you need?$"

Lab_DexTalkBrendanB::
# 412 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: As a matter of fact, there is.\n"
	.string "You never gave {PLAYER} a Pokédex!\p"
	.string "How do you expect her to become\n"
	.string "a great trainer without one?$"

Lab_DexTalkBrendanC::
# 418 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, it must've\n"
	.string "slipped my mind…$"

Lab_DexTalkBrendanD::
# 422 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Slipped your mind?\n"
	.string "Aren't you a Pokémon professor?\p"
	.string "Surely giving one to {PLAYER}\n"
	.string "helps your research as well.$"

Lab_DexTalkBrendanE::
# 428 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I know, I know.\n"
	.string "I'll get {PLAYER} one right away.\p"
	.string "Now, let's see…\p"
	.string "… … … …\p"
	.string "Ah, darn it.\p"
	.string "Looks like I don't have any extra\n"
	.string "lying around at this time…$"

Lab_DexTalkBrendanF::
# 437 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Well we can't have {PLAYER}\n"
	.string "leaving empty-handed, now can we?$"

Lab_DexTalkBrendanG::
# 441 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Yes, I know. {PLAYER},\n"
	.string "you can have mine.\l"
	.string "I'll order myself a new one.$"

Lab_DexTalkBrendanH::
# 446 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: You're the best, dad!$"

LabMegaStones::
# 449 "data/maps/Lab2/scripts.pory"
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
# 474 "data/maps/Lab2/scripts.pory"
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
# 501 "data/maps/Lab2/scripts.pory"
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
# 514 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "You better train your Pokémon to use\n"
	.string "the stone, {PLAYER}!\p"
	.string "I don't want to hear you whining that\n"
	.string "you lost because you didn't know how\l"
	.string "to use Mega Evolution!$"

GonnaTakeMyLeave_Brendan::
# 523 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: I can't wait to see this\n"
	.string "thing in action!\p"
	.string "I hope you train your Pokémon to get\n"
	.string "the most out of that stone, {PLAYER}.\p"
	.string "I don't want to hear any complaints\n"
	.string "about how you lost because you didn't\l"
	.string "know how to Mega Evolve your Pokémon.$"

ThanksDadBirch::
# 532 "data/maps/Lab2/scripts.pory"
	.string "{RIVAL}: Thanks dad! I'm going to go\n"
	.string "and give this thing a try right away!$"

PickABall::
# 537 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Go on, pick one of the\n"
	.string "balls from the table.$"

TakeCareOfPokemon::
# 541 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you take\n"
	.string "good care of your new companion.$"

YourFatherIsInTown::
# 545 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: Oh, I almost forgot!\n"
	.string "Your father is currently in town.\p"
	.string "I know he's a busy man. You may want\n"
	.string "to dash on home before he leaves.$"

HeresYourStoneNow::
# 551 "data/maps/Lab2/scripts.pory"
	.string "Prof. Birch: I hope you've made enough\n"
	.string "space in your bag to hold this stone.$"
