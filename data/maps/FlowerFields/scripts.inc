FlowerFields_MapScripts::
# 2 "data/maps/FlowerFields/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/FlowerFields/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FlowerFields_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_ge FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_TEMP_1
# 5 "data/maps/FlowerFields/scripts.pory"
	setobjectxyperm 2, 31, 39
# 6 "data/maps/FlowerFields/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return

FlowerFields_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/FlowerFields/scripts.pory"
	map_script_2 VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED, FlowerFields_MinaEvent_FrameTable
	.2byte 0


FlowerFields_MinaEvent_FrameTable::
# 15 "data/maps/FlowerFields/scripts.pory"
	delay 15
# 16 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_FAINT
# 17 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 18 "data/maps/FlowerFields/scripts.pory"
	delay 15
# 19 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_EAST
# 20 "data/maps/FlowerFields/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 21 "data/maps/FlowerFields/scripts.pory"
	delay 5
# 22 "data/maps/FlowerFields/scripts.pory"
	msgbox ThanksForBattlingGranbull
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_MinaEvent_FrameTable_2
FlowerFields_MinaEvent_FrameTable_1:
# 27 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 28 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 29 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
# 30 "data/maps/FlowerFields/scripts.pory"
	release
	return

FlowerFields_MinaEvent_FrameTable_2:
# 24 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
# 25 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto FlowerFields_MinaEvent_FrameTable_1


FlowerFields_Combee::
# 34 "data/maps/FlowerFields/scripts.pory"
	lock
# 35 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 36 "data/maps/FlowerFields/scripts.pory"
	waitse
# 37 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_COMBEE, CRY_MODE_NORMAL
# 38 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Combee_Text_0
# 39 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 40 "data/maps/FlowerFields/scripts.pory"
	release
	end


FlowerFields_Cutiefly::
# 43 "data/maps/FlowerFields/scripts.pory"
	lock
# 44 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 45 "data/maps/FlowerFields/scripts.pory"
	waitse
# 46 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_CUTIEFLY, CRY_MODE_NORMAL
# 47 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Combee_Text_0
# 48 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 49 "data/maps/FlowerFields/scripts.pory"
	release
	end


FlowerFields_HoneyTree::
# 52 "data/maps/FlowerFields/scripts.pory"
	lock
# 53 "data/maps/FlowerFields/scripts.pory"
	checkitem ITEM_HONEY, 1
	checkitem ITEM_HONEY, 1
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_HoneyTree_2
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FlowerFields_HoneyTree_5
FlowerFields_HoneyTree_4:
# 74 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_HoneyTree_2:
# 55 "data/maps/FlowerFields/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

FlowerFields_HoneyTree_5:
# 59 "data/maps/FlowerFields/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 60 "data/maps/FlowerFields/scripts.pory"
	closemessage
# 61 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_HONEY, 1
# 62 "data/maps/FlowerFields/scripts.pory"
	random 20
# 63 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_le FlowerFields_HoneyTree_8
# 66 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_ge FlowerFields_HoneyTree_9
# 70 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_CUTIEFLY, 12, ITEM_NONE, SPECIES_NONE, 15
FlowerFields_HoneyTree_7:
# 72 "data/maps/FlowerFields/scripts.pory"
	dowildbattle
	goto FlowerFields_HoneyTree_4

FlowerFields_HoneyTree_8:
# 64 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_COMBEE, 12, ITEM_NONE, SPECIES_NONE, 15
	goto FlowerFields_HoneyTree_7

FlowerFields_HoneyTree_9:
# 67 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 12, ITEM_NONE, SPECIES_NONE, 15
	goto FlowerFields_HoneyTree_7


FlowerFields_Mina::
# 77 "data/maps/FlowerFields/scripts.pory"
	lock
# 78 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 79 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_NOT_SPOKEN_TO
	goto_if_eq FlowerFields_Mina_2
# 84 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto_if_eq FlowerFields_Mina_3
# 88 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	goto_if_eq FlowerFields_Mina_4
# 92 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_eq FlowerFields_Mina_5
# 102 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
	goto_if_eq FlowerFields_Mina_6
# 112 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_eq FlowerFields_Mina_7
# 118 "data/maps/FlowerFields/scripts.pory"
	msgbox MinaLikesToPaint, MSGBOX_NPC
# 119 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
FlowerFields_Mina_1:
# 121 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_Mina_2:
# 80 "data/maps/FlowerFields/scripts.pory"
	msgbox GranbullBeingRowdy, MSGBOX_NPC
# 81 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 82 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto FlowerFields_Mina_1

FlowerFields_Mina_3:
# 85 "data/maps/FlowerFields/scripts.pory"
	msgbox AllIWantToDoIsPaintGranbull, MSGBOX_NPC
# 86 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto FlowerFields_Mina_1

FlowerFields_Mina_4:
# 89 "data/maps/FlowerFields/scripts.pory"
	msgbox FeistyGranbullAintHe, MSGBOX_NPC
# 90 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto FlowerFields_Mina_1

FlowerFields_Mina_5:
# 93 "data/maps/FlowerFields/scripts.pory"
	msgbox ThanksForBattlingGranbull
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Mina_16
FlowerFields_Mina_15:
# 98 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 99 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 100 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto FlowerFields_Mina_1

FlowerFields_Mina_6:
# 103 "data/maps/FlowerFields/scripts.pory"
	msgbox ThanksForBattlingGranbull_Short
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Mina_19
FlowerFields_Mina_18:
# 108 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 109 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 110 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto FlowerFields_Mina_1

FlowerFields_Mina_7:
# 113 "data/maps/FlowerFields/scripts.pory"
	msgbox MinaIntroduction, MSGBOX_NPC
# 114 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 115 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
	goto FlowerFields_Mina_1

FlowerFields_Mina_16:
# 95 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
# 96 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto FlowerFields_Mina_15

FlowerFields_Mina_19:
# 105 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
# 106 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto FlowerFields_Mina_18


FlowerFields_Granbull::
# 180 "data/maps/FlowerFields/scripts.pory"
	lock
# 181 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 182 "data/maps/FlowerFields/scripts.pory"
	waitse
# 183 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto_if_eq FlowerFields_Granbull_2
# 184 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	goto_if_eq FlowerFields_Granbull_2
# 220 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_ge FlowerFields_Granbull_3
# 227 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_NORMAL
# 228 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Granbull_Text_1
# 229 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
FlowerFields_Granbull_1:
# 231 "data/maps/FlowerFields/scripts.pory"
	release
	return

FlowerFields_Granbull_2:
# 185 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_NORMAL
# 186 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
	msgbox WantToBattleGranbull, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Granbull_10
# 191 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FlowerFields_Granbull_13
# 194 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, FlowerFields_Granbull_14
# 197 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, FlowerFields_Granbull_15
# 201 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 23, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_SCARY_FACE, FALSE
FlowerFields_Granbull_12:
# 203 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
# 204 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_SHINY_MULTIPLIER, 200
# 205 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
# 206 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_SYSTEM_NO_CATCHING
# 207 "data/maps/FlowerFields/scripts.pory"
	dowildbattle
# 208 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_SHINY_MULTIPLIER, 0
# 209 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
# 210 "data/maps/FlowerFields/scripts.pory"
	clearflag FLAG_SYSTEM_NO_WILD_RUNNING
# 211 "data/maps/FlowerFields/scripts.pory"
	clearflag FLAG_SYSTEM_NO_CATCHING
# 212 "data/maps/FlowerFields/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/FlowerFields/scripts.pory"
	delay 40
# 214 "data/maps/FlowerFields/scripts.pory"
	msgbox CombeeFliesAway
# 215 "data/maps/FlowerFields/scripts.pory"
	closemessage
# 216 "data/maps/FlowerFields/scripts.pory"
	removeobject 3
# 217 "data/maps/FlowerFields/scripts.pory"
	warpsilentnofadeout MAP_FLOWER_FIELDS, 32, 37
# 218 "data/maps/FlowerFields/scripts.pory"
	waitstate
	goto FlowerFields_Granbull_1

FlowerFields_Granbull_3:
# 221 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_FAINT
# 222 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Granbull_Text_0
# 223 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 224 "data/maps/FlowerFields/scripts.pory"
	turnobject 2, DIR_NORTH
	goto FlowerFields_Granbull_1

FlowerFields_Granbull_10:
# 188 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_Granbull_13:
# 192 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 45, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_PLAY_ROUGH, FALSE
	goto FlowerFields_Granbull_12

FlowerFields_Granbull_14:
# 195 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 38, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_RAGE, FALSE
	goto FlowerFields_Granbull_12

FlowerFields_Granbull_15:
# 198 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 34, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_SCARY_FACE, FALSE
	goto FlowerFields_Granbull_12


Route8_HoneyTrader::
# 235 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 236 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_INTRODUCED_TO_BERRY_TRADER, Route8_HoneyTrader_2
Route8_HoneyTrader_1:
# 244 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_INTRODUCED_TO_BERRY_TRADER
	msgbox GotAnyOranBerries
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_5
Route8_HoneyTrader_4:
# 254 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	return

Route8_HoneyTrader_2:
	checkitem ITEM_ORAN_BERRY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_8
Route8_HoneyTrader_7:
# 242 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	goto Route8_HoneyTrader_1

Route8_HoneyTrader_5:
	checkitem ITEM_ORAN_BERRY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_10
# 250 "data/maps/FlowerFields/scripts.pory"
	msgbox Route8_HoneyTrader_DontHaveBerries, MSGBOX_NPC
	end

Route8_HoneyTrader_8:
	msgbox HereToTradeMoreBerries, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_13
	goto Route8_HoneyTrader_7

Route8_HoneyTrader_10:
# 247 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesMain
	goto Route8_HoneyTrader_4

Route8_HoneyTrader_13:
# 239 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesMain
	goto Route8_HoneyTrader_7


TradeBerriesMain::
# 257 "data/maps/FlowerFields/scripts.pory"
	checkitemquant ITEM_ORAN_BERRY
	msgbox TradeHowManyBerries, MSGBOX_HOWMANY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TradeBerriesMain_1
# 262 "data/maps/FlowerFields/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 263 "data/maps/FlowerFields/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeBerriesMain_5:
# 264 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TradeBerriesMain_6
# 268 "data/maps/FlowerFields/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 269 "data/maps/FlowerFields/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TradeBerriesMain_9
	msgbox TradeBerriesForHoney_Text_Multiple, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeBerriesMain_14
TradeBerriesMain_8:
# 291 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	return

TradeBerriesMain_1:
# 259 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	return

TradeBerriesMain_6:
# 265 "data/maps/FlowerFields/scripts.pory"
	subvar VAR_RESULT, 1
# 266 "data/maps/FlowerFields/scripts.pory"
	addvar VAR_TEMP_1, 2
	goto TradeBerriesMain_5

TradeBerriesMain_9:
	msgbox TradeBerriesForHoney_Text_Single, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeBerriesMain_12
	goto TradeBerriesMain_8

TradeBerriesMain_12:
	checkitemspace ITEM_HONEY, VAR_TEMP_1
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeBerriesMain_17
TradeBerriesMain_16:
# 276 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_HONEY, VAR_TEMP_1
# 277 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_ORAN_BERRY, VAR_TEMP_2
	goto TradeBerriesMain_8

TradeBerriesMain_14:
	checkitemspace ITEM_HONEY, VAR_TEMP_1
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeBerriesMain_20
TradeBerriesMain_19:
# 287 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_HONEY, VAR_TEMP_1
# 288 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_ORAN_BERRY, VAR_TEMP_2
	goto TradeBerriesMain_8

TradeBerriesMain_17:
# 272 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_1, 0
# 273 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_2, 0
# 274 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto TradeBerriesMain_16

TradeBerriesMain_20:
# 283 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_1, 0
# 284 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_2, 0
# 285 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto TradeBerriesMain_19


TradeBerriesGoodbye::
# 295 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_1, 0
# 296 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_2, 0
# 297 "data/maps/FlowerFields/scripts.pory"
	msgbox ComeTradeWhenGetMoreBerries, MSGBOX_NPC
	end


FlowerFields_Combee_Text_0:
# 38 "data/maps/FlowerFields/scripts.pory"
	.string "Bzzz!$"

FlowerFields_Granbull_Text_0:
# 222 "data/maps/FlowerFields/scripts.pory"
	.string "Grr…$"

FlowerFields_Granbull_Text_1:
# 228 "data/maps/FlowerFields/scripts.pory"
	.string "Grr!$"

GranbullBeingRowdy::
# 124 "data/maps/FlowerFields/scripts.pory"
	.string "All I wanted to do was paint my\n"
	.string "Granbull doing a super cool pose,\l"
	.string "but he's just way too distracted\l"
	.string "by that Combee.$"

AllIWantToDoIsPaintGranbull::
# 130 "data/maps/FlowerFields/scripts.pory"
	.string "Wish he would calm down…$"

FeistyGranbullAintHe::
# 133 "data/maps/FlowerFields/scripts.pory"
	.string "Feisty, ain't he?\p"
	.string "Granbull really likes showing his\n"
	.string "affection through chomping.\l"
	.string "Like, he just can't stop chomping\l"
	.string "things.$"

ThanksForBattlingGranbull::
# 140 "data/maps/FlowerFields/scripts.pory"
	.string "Thanks for playing with Granbull.\p"
	.string "Hope he didn't cause you too much\n"
	.string "trouble.\p"
	.string "Wish I could like, reward you or\n"
	.string "something, but all I've got to give\l"
	.string "is this candy.$"

ThanksForBattlingGranbull_Short::
# 148 "data/maps/FlowerFields/scripts.pory"
	.string "Wish I could like, reward you or\n"
	.string "something, but all I've got to give\l"
	.string "is this candy.$"

MinaIntroduction::
# 153 "data/maps/FlowerFields/scripts.pory"
	.string "Oh right, I never even introduced\n"
	.string "myself.\p"
	.string "My name is Mina.\p"
	.string "I found this super cool spot and\n"
	.string "thought I'd have my Granbull pose\l"
	.string "for an awesome painting, but the\l"
	.string "moment I let it out of its ball,\l"
	.string "it started chasing after the\l"
	.string "Pokémon here.\p"
	.string "Thanks for handling the situation\n"
	.string "though.$"

MinaLikesToPaint::
# 166 "data/maps/FlowerFields/scripts.pory"
	.string "If you don't mind, I'd like to\n"
	.string "focus on painting now.$"

WantToBattleGranbull::
# 170 "data/maps/FlowerFields/scripts.pory"
	.string "The Granbull looks like it's\n"
	.string "raring to go.\p"
	.string "Would you like to battle with it?$"

CombeeFliesAway::
# 175 "data/maps/FlowerFields/scripts.pory"
	.string "The Granbull calms down long enough\n"
	.string "for the Combee to escape.$"

HereToTradeMoreBerries::
# 300 "data/maps/FlowerFields/scripts.pory"
	.string "Have you come to trade\n"
	.string "Oran Berries?$"

GotAnyOranBerries::
# 303 "data/maps/FlowerFields/scripts.pory"
	.string "While my Pokémon mainly eat honey,\n"
	.string "they absolutely adore Oran Berries!\p"
	.string "Do you have any Oran Berries you\n"
	.string "would like to trade?\p"
	.string "I can give you two jars of honey\n"
	.string "for each Oran Berry.$"

TradeHowManyBerries::
# 310 "data/maps/FlowerFields/scripts.pory"
	.string "How many berries would you\n"
	.string "like to trade?$"

TradeBerriesForHoney_Text_Single::
# 313 "data/maps/FlowerFields/scripts.pory"
	.string "One Oran Berry for two jars of honey.\p"
	.string "Is that trade okay?$"

TradeBerriesForHoney_Text_Multiple::
# 316 "data/maps/FlowerFields/scripts.pory"
	.string "{STR_VAR_1} berries for {STR_VAR_2} jars\n"
	.string "of honey.\p"
	.string "Is that trade okay?$"

ComeTradeWhenGetMoreBerries::
# 320 "data/maps/FlowerFields/scripts.pory"
	.string "If you ever need any honey,\n"
	.string "you can find me here.$"

Route8_HoneyTrader_DontHaveBerries::
# 323 "data/maps/FlowerFields/scripts.pory"
	.string "Hm… You don't seem to be carrying\n"
	.string "any Oran Berries…$"
