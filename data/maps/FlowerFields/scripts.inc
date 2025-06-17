FlowerFields_MapScripts::
# 2 "data/maps/FlowerFields/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/FlowerFields/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FlowerFields_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_FIELDS
# 4 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_ge FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/FlowerFields/scripts.pory"
	setobjectxyperm 2, 31, 39
# 7 "data/maps/FlowerFields/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return

FlowerFields_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/FlowerFields/scripts.pory"
	map_script_2 VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED, FlowerFields_MinaEvent_FrameTable
	.2byte 0


FlowerFields_MinaEvent_FrameTable::
# 16 "data/maps/FlowerFields/scripts.pory"
	delay 15
# 17 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_FAINT
# 18 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 19 "data/maps/FlowerFields/scripts.pory"
	delay 15
# 20 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_EAST
# 21 "data/maps/FlowerFields/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 22 "data/maps/FlowerFields/scripts.pory"
	delay 5
# 23 "data/maps/FlowerFields/scripts.pory"
	msgbox ThanksForBattlingGranbull
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_MinaEvent_FrameTable_2
FlowerFields_MinaEvent_FrameTable_1:
# 28 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 29 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 30 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
# 31 "data/maps/FlowerFields/scripts.pory"
	release
# 32 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_Q08_FLOWER_FIELDS_GRANBULL_START, FlowerFields_MinaEvent_FrameTable_4
	return

FlowerFields_MinaEvent_FrameTable_2:
# 25 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
# 26 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto FlowerFields_MinaEvent_FrameTable_1

FlowerFields_MinaEvent_FrameTable_4:
# 33 "data/maps/FlowerFields/scripts.pory"
	completequest FLAG_Q08_FLOWER_FIELDS_GRANBULL_COMPLETE
# 34 "data/maps/FlowerFields/scripts.pory"
	special ShowJournalPopupRemove
	return


FlowerFields_Combee::
# 39 "data/maps/FlowerFields/scripts.pory"
	lock
# 40 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 41 "data/maps/FlowerFields/scripts.pory"
	waitse
# 42 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_COMBEE, CRY_MODE_NORMAL
# 43 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Combee_Text_0
# 44 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 45 "data/maps/FlowerFields/scripts.pory"
	release
	end


FlowerFields_Cutiefly::
# 48 "data/maps/FlowerFields/scripts.pory"
	lock
# 49 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 50 "data/maps/FlowerFields/scripts.pory"
	waitse
# 51 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_CUTIEFLY, CRY_MODE_NORMAL
# 52 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Combee_Text_0
# 53 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 54 "data/maps/FlowerFields/scripts.pory"
	release
	end


FlowerFields_HoneyTree::
# 57 "data/maps/FlowerFields/scripts.pory"
	lock
# 58 "data/maps/FlowerFields/scripts.pory"
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
# 80 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_HoneyTree_2:
# 60 "data/maps/FlowerFields/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

FlowerFields_HoneyTree_5:
# 64 "data/maps/FlowerFields/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 65 "data/maps/FlowerFields/scripts.pory"
	closemessage
# 66 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_HONEY, 1
# 67 "data/maps/FlowerFields/scripts.pory"
	random 20
# 68 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_le FlowerFields_HoneyTree_8
# 71 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 18
	goto_if_ge FlowerFields_HoneyTree_9
# 75 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_CUTIEFLY, 12, ITEM_NONE, SPECIES_NONE, 15
FlowerFields_HoneyTree_7:
# 77 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_CHANCE_TO_HIDDEN_ABILITY
# 78 "data/maps/FlowerFields/scripts.pory"
	dowildbattle
	goto FlowerFields_HoneyTree_4

FlowerFields_HoneyTree_8:
# 69 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_COMBEE, 12, ITEM_NONE, SPECIES_NONE, 15
	goto FlowerFields_HoneyTree_7

FlowerFields_HoneyTree_9:
# 72 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_TEDDIURSA, 12, ITEM_NONE, SPECIES_NONE, 15
	goto FlowerFields_HoneyTree_7


FlowerFields_HoneyTree2::
# 83 "data/maps/FlowerFields/scripts.pory"
	lock
# 84 "data/maps/FlowerFields/scripts.pory"
	checkitem ITEM_HONEY, 1
	checkitem ITEM_HONEY, 1
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_HoneyTree2_2
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FlowerFields_HoneyTree2_5
FlowerFields_HoneyTree2_4:
# 97 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_HoneyTree2_2:
# 86 "data/maps/FlowerFields/scripts.pory"
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

FlowerFields_HoneyTree2_5:
# 90 "data/maps/FlowerFields/scripts.pory"
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
# 91 "data/maps/FlowerFields/scripts.pory"
	closemessage
# 92 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_HONEY, 1
# 93 "data/maps/FlowerFields/scripts.pory"
	setwildbattlelevelrange SPECIES_HERACROSS, 20, ITEM_NONE, SPECIES_NONE, 25
# 94 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_CHANCE_TO_HIDDEN_ABILITY
# 95 "data/maps/FlowerFields/scripts.pory"
	dowildbattle
	goto FlowerFields_HoneyTree2_4


FlowerFields_Mina::
# 101 "data/maps/FlowerFields/scripts.pory"
	lock
# 102 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 103 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_NOT_SPOKEN_TO
	goto_if_eq FlowerFields_Mina_2
# 114 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto_if_eq FlowerFields_Mina_3
# 118 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	goto_if_eq FlowerFields_Mina_4
# 122 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_eq FlowerFields_Mina_5
# 132 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
	goto_if_eq FlowerFields_Mina_6
# 142 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_eq FlowerFields_Mina_7
# 148 "data/maps/FlowerFields/scripts.pory"
	msgbox MinaLikesToPaint, MSGBOX_NPC
# 149 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
FlowerFields_Mina_1:
# 151 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_Mina_2:
# 104 "data/maps/FlowerFields/scripts.pory"
	msgbox GranbullBeingRowdy, MSGBOX_NPC
# 105 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 106 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
# 107 "data/maps/FlowerFields/scripts.pory"
	release
# 108 "data/maps/FlowerFields/scripts.pory"
	goto_if_unset FLAG_Q08_FLOWER_FIELDS_GRANBULL_START, FlowerFields_Mina_16
FlowerFields_Mina_15:
	end

FlowerFields_Mina_3:
# 115 "data/maps/FlowerFields/scripts.pory"
	msgbox AllIWantToDoIsPaintGranbull, MSGBOX_NPC
# 116 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
	goto FlowerFields_Mina_1

FlowerFields_Mina_4:
# 119 "data/maps/FlowerFields/scripts.pory"
	msgbox FeistyGranbullAintHe, MSGBOX_NPC
# 120 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto FlowerFields_Mina_1

FlowerFields_Mina_5:
# 123 "data/maps/FlowerFields/scripts.pory"
	msgbox ThanksForBattlingGranbull
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Mina_19
FlowerFields_Mina_18:
# 128 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 129 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 130 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto FlowerFields_Mina_1

FlowerFields_Mina_6:
# 133 "data/maps/FlowerFields/scripts.pory"
	msgbox ThanksForBattlingGranbull_Short
	checkitemspace ITEM_RARE_CANDY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Mina_22
FlowerFields_Mina_21:
# 138 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 139 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 140 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto FlowerFields_Mina_1

FlowerFields_Mina_7:
# 143 "data/maps/FlowerFields/scripts.pory"
	msgbox MinaIntroduction, MSGBOX_NPC
# 144 "data/maps/FlowerFields/scripts.pory"
	turnobject 1, DIR_SOUTH
# 145 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
	goto FlowerFields_Mina_1

FlowerFields_Mina_16:
# 109 "data/maps/FlowerFields/scripts.pory"
	startquest FLAG_Q08_FLOWER_FIELDS_GRANBULL_START
# 110 "data/maps/FlowerFields/scripts.pory"
	special ShowJournalPopupAdd
	goto FlowerFields_Mina_15

FlowerFields_Mina_19:
# 125 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
# 126 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto FlowerFields_Mina_18

FlowerFields_Mina_22:
# 135 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
# 136 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto FlowerFields_Mina_21


FlowerFields_Granbull::
# 210 "data/maps/FlowerFields/scripts.pory"
	lock
# 211 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 212 "data/maps/FlowerFields/scripts.pory"
	waitse
# 213 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto_if_eq FlowerFields_Granbull_2
# 214 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	goto_if_eq FlowerFields_Granbull_2
# 253 "data/maps/FlowerFields/scripts.pory"
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_ge FlowerFields_Granbull_3
# 260 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_NORMAL
# 261 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Granbull_Text_1
# 262 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
FlowerFields_Granbull_1:
# 264 "data/maps/FlowerFields/scripts.pory"
	release
	return

FlowerFields_Granbull_2:
# 215 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_NORMAL
# 216 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
	msgbox WantToBattleGranbull, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Granbull_10
# 221 "data/maps/FlowerFields/scripts.pory"
	closemessage
# 222 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FlowerFields_Granbull_13
# 225 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, FlowerFields_Granbull_14
# 228 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, FlowerFields_Granbull_15
# 232 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 23, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_SCARY_FACE, FALSE
FlowerFields_Granbull_12:
# 234 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
# 235 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_SHINY_MULTIPLIER, 200
# 236 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_WILD_TRAINER_MON
# 237 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
# 238 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_SYSTEM_NO_CATCHING
# 239 "data/maps/FlowerFields/scripts.pory"
	dowildbattle
# 240 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_SHINY_MULTIPLIER, 0
# 241 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
# 242 "data/maps/FlowerFields/scripts.pory"
	clearflag FLAG_SYSTEM_NO_WILD_RUNNING
# 243 "data/maps/FlowerFields/scripts.pory"
	clearflag FLAG_WILD_TRAINER_MON
# 244 "data/maps/FlowerFields/scripts.pory"
	clearflag FLAG_SYSTEM_NO_CATCHING
# 245 "data/maps/FlowerFields/scripts.pory"
	fadescreen FADE_TO_BLACK
# 246 "data/maps/FlowerFields/scripts.pory"
	delay 40
# 247 "data/maps/FlowerFields/scripts.pory"
	msgbox CombeeFliesAway
# 248 "data/maps/FlowerFields/scripts.pory"
	closemessage
# 249 "data/maps/FlowerFields/scripts.pory"
	removeobject 3
# 250 "data/maps/FlowerFields/scripts.pory"
	warpsilentnofadeout MAP_FLOWER_FIELDS, 32, 37
# 251 "data/maps/FlowerFields/scripts.pory"
	waitstate
	goto FlowerFields_Granbull_1

FlowerFields_Granbull_3:
# 254 "data/maps/FlowerFields/scripts.pory"
	playmoncry SPECIES_GRANBULL, CRY_MODE_FAINT
# 255 "data/maps/FlowerFields/scripts.pory"
	msgbox FlowerFields_Granbull_Text_0
# 256 "data/maps/FlowerFields/scripts.pory"
	waitmoncry
# 257 "data/maps/FlowerFields/scripts.pory"
	turnobject 2, DIR_NORTH
	goto FlowerFields_Granbull_1

FlowerFields_Granbull_10:
# 218 "data/maps/FlowerFields/scripts.pory"
	release
	end

FlowerFields_Granbull_13:
# 223 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 45, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_PLAY_ROUGH, FALSE
	goto FlowerFields_Granbull_12

FlowerFields_Granbull_14:
# 226 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 38, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_RAGE, FALSE
	goto FlowerFields_Granbull_12

FlowerFields_Granbull_15:
# 229 "data/maps/FlowerFields/scripts.pory"
	createmon 1, 0, SPECIES_GRANBULL, 34, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_SCARY_FACE, FALSE
	goto FlowerFields_Granbull_12


Route8_HoneyTrader::
# 268 "data/maps/FlowerFields/scripts.pory"
	faceplayer
# 269 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_INTRODUCED_TO_BERRY_TRADER, Route8_HoneyTrader_2
Route8_HoneyTrader_1:
# 277 "data/maps/FlowerFields/scripts.pory"
	setflag FLAG_INTRODUCED_TO_BERRY_TRADER
	msgbox GotAnyOranBerries
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_5
Route8_HoneyTrader_4:
# 291 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	return

Route8_HoneyTrader_2:
	checkitem ITEM_ORAN_BERRY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_8
Route8_HoneyTrader_7:
# 275 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	goto Route8_HoneyTrader_1

Route8_HoneyTrader_5:
	checkitem ITEM_ORAN_BERRY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_10
# 283 "data/maps/FlowerFields/scripts.pory"
	msgbox Route8_HoneyTrader_DontHaveBerries, MSGBOX_NPC
# 284 "data/maps/FlowerFields/scripts.pory"
	goto_if_unset FLAG_Q09_FLOWER_FIELDS_BERRYTRADE_START, Route8_HoneyTrader_16
Route8_HoneyTrader_15:
	end

Route8_HoneyTrader_8:
	msgbox HereToTradeMoreBerries, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_13
	goto Route8_HoneyTrader_7

Route8_HoneyTrader_10:
# 280 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesMain
	goto Route8_HoneyTrader_4

Route8_HoneyTrader_13:
# 272 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesMain
	goto Route8_HoneyTrader_7

Route8_HoneyTrader_16:
# 285 "data/maps/FlowerFields/scripts.pory"
	startquest FLAG_Q09_FLOWER_FIELDS_BERRYTRADE_START
# 286 "data/maps/FlowerFields/scripts.pory"
	special ShowJournalPopupAdd
	goto Route8_HoneyTrader_15


TradeBerriesMain::
# 294 "data/maps/FlowerFields/scripts.pory"
	checkitemquant ITEM_ORAN_BERRY
	msgbox TradeHowManyBerries, MSGBOX_HOWMANY
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TradeBerriesMain_1
# 299 "data/maps/FlowerFields/scripts.pory"
	copyvar VAR_TEMP_2, VAR_RESULT
# 300 "data/maps/FlowerFields/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeBerriesMain_5:
# 301 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TradeBerriesMain_6
# 305 "data/maps/FlowerFields/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_TEMP_1
# 306 "data/maps/FlowerFields/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq TradeBerriesMain_9
	msgbox TradeBerriesForHoney_Text_Multiple, MSGBOX_YESNO
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TradeBerriesMain_14
TradeBerriesMain_8:
# 328 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	return

TradeBerriesMain_1:
# 296 "data/maps/FlowerFields/scripts.pory"
	goto TradeBerriesGoodbye
	return

TradeBerriesMain_6:
# 302 "data/maps/FlowerFields/scripts.pory"
	subvar VAR_RESULT, 1
# 303 "data/maps/FlowerFields/scripts.pory"
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
# 313 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_HONEY, VAR_TEMP_1
# 314 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_ORAN_BERRY, VAR_TEMP_2
	goto TradeBerriesMain_8

TradeBerriesMain_14:
	checkitemspace ITEM_HONEY, VAR_TEMP_1
# 0 "data/maps/FlowerFields/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TradeBerriesMain_20
TradeBerriesMain_19:
# 324 "data/maps/FlowerFields/scripts.pory"
	giveitem ITEM_HONEY, VAR_TEMP_1
# 325 "data/maps/FlowerFields/scripts.pory"
	removeitem ITEM_ORAN_BERRY, VAR_TEMP_2
	goto TradeBerriesMain_8

TradeBerriesMain_17:
# 309 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_1, 0
# 310 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_2, 0
# 311 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto TradeBerriesMain_16

TradeBerriesMain_20:
# 320 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_1, 0
# 321 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_2, 0
# 322 "data/maps/FlowerFields/scripts.pory"
	goto ZeBagIsFull
	goto TradeBerriesMain_19


TradeBerriesGoodbye::
# 332 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_1, 0
# 333 "data/maps/FlowerFields/scripts.pory"
	setvar VAR_TEMP_2, 0
# 334 "data/maps/FlowerFields/scripts.pory"
	msgbox ComeTradeWhenGetMoreBerries, MSGBOX_NPC
# 335 "data/maps/FlowerFields/scripts.pory"
	goto_if_set FLAG_Q09_FLOWER_FIELDS_BERRYTRADE_START, TradeBerriesGoodbye_3
TradeBerriesGoodbye_1:
	end

TradeBerriesGoodbye_2:
# 336 "data/maps/FlowerFields/scripts.pory"
	completequest FLAG_Q09_FLOWER_FIELDS_BERRYTRADE_COMPLETE
# 337 "data/maps/FlowerFields/scripts.pory"
	special ShowJournalPopupRemove
	goto TradeBerriesGoodbye_1

TradeBerriesGoodbye_3:
# 335 "data/maps/FlowerFields/scripts.pory"
	goto_if_unset FLAG_Q09_FLOWER_FIELDS_BERRYTRADE_COMPLETE, TradeBerriesGoodbye_2
	goto TradeBerriesGoodbye_1


FlowerFields_Combee_Text_0:
# 43 "data/maps/FlowerFields/scripts.pory"
	.string "Bzzz!$"

FlowerFields_Granbull_Text_0:
# 255 "data/maps/FlowerFields/scripts.pory"
	.string "Grr…$"

FlowerFields_Granbull_Text_1:
# 261 "data/maps/FlowerFields/scripts.pory"
	.string "Grr!$"

GranbullBeingRowdy::
# 154 "data/maps/FlowerFields/scripts.pory"
	.string "All I wanted to do was paint my\n"
	.string "Granbull doing a super cool pose,\l"
	.string "but he's just way too distracted\l"
	.string "by that Combee.$"

AllIWantToDoIsPaintGranbull::
# 160 "data/maps/FlowerFields/scripts.pory"
	.string "Wish he would calm down…$"

FeistyGranbullAintHe::
# 163 "data/maps/FlowerFields/scripts.pory"
	.string "Feisty, ain't he?\p"
	.string "Granbull really likes showing his\n"
	.string "affection through chomping.\l"
	.string "Like, he just can't stop chomping\l"
	.string "things.$"

ThanksForBattlingGranbull::
# 170 "data/maps/FlowerFields/scripts.pory"
	.string "Thanks for playing with Granbull.\p"
	.string "Hope he didn't cause you too much\n"
	.string "trouble.\p"
	.string "Wish I could like, reward you or\n"
	.string "something, but all I've got to give\l"
	.string "is this candy.$"

ThanksForBattlingGranbull_Short::
# 178 "data/maps/FlowerFields/scripts.pory"
	.string "Wish I could like, reward you or\n"
	.string "something, but all I've got to give\l"
	.string "is this candy.$"

MinaIntroduction::
# 183 "data/maps/FlowerFields/scripts.pory"
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
# 196 "data/maps/FlowerFields/scripts.pory"
	.string "If you don't mind, I'd like to\n"
	.string "focus on painting now.$"

WantToBattleGranbull::
# 200 "data/maps/FlowerFields/scripts.pory"
	.string "The Granbull looks like it's\n"
	.string "raring to go.\p"
	.string "Would you like to battle with it?$"

CombeeFliesAway::
# 205 "data/maps/FlowerFields/scripts.pory"
	.string "The Granbull calms down long enough\n"
	.string "for the Combee to escape.$"

HereToTradeMoreBerries::
# 341 "data/maps/FlowerFields/scripts.pory"
	.string "Have you come to trade\n"
	.string "Oran Berries?$"

GotAnyOranBerries::
# 344 "data/maps/FlowerFields/scripts.pory"
	.string "While my Pokémon mainly eat honey,\n"
	.string "they absolutely adore Oran Berries!\p"
	.string "Do you have any Oran Berries you\n"
	.string "would like to trade?\p"
	.string "I can give you two jars of honey\n"
	.string "for each Oran Berry.$"

TradeHowManyBerries::
# 351 "data/maps/FlowerFields/scripts.pory"
	.string "How many berries would you\n"
	.string "like to trade?$"

TradeBerriesForHoney_Text_Single::
# 354 "data/maps/FlowerFields/scripts.pory"
	.string "One Oran Berry for two jars of honey.\p"
	.string "Is that trade okay?$"

TradeBerriesForHoney_Text_Multiple::
# 357 "data/maps/FlowerFields/scripts.pory"
	.string "{STR_VAR_1} berries for {STR_VAR_2} jars\n"
	.string "of honey.\p"
	.string "Is that trade okay?$"

ComeTradeWhenGetMoreBerries::
# 361 "data/maps/FlowerFields/scripts.pory"
	.string "If you ever need any honey,\n"
	.string "you can find me here.$"

Route8_HoneyTrader_DontHaveBerries::
# 364 "data/maps/FlowerFields/scripts.pory"
	.string "Hm… You don't seem to be carrying\n"
	.string "any Oran Berries…$"
