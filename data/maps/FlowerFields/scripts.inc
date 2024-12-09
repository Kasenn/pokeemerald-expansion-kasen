FlowerFields_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FlowerFields_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_ge FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FlowerFields_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	setobjectxyperm 2, 31, 39
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return

FlowerFields_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED, FlowerFields_MinaEvent_FrameTable
	.2byte 0


FlowerFields_MinaEvent_FrameTable::
	delay 15
	playmoncry SPECIES_GRANBULL, CRY_MODE_FAINT
	waitmoncry
	delay 15
	turnobject 1, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	delay 5
	msgbox ThanksForBattlingGranbull
	checkitemspace ITEM_RARE_CANDY
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_MinaEvent_FrameTable_2
FlowerFields_MinaEvent_FrameTable_1:
	giveitem ITEM_RARE_CANDY
	turnobject 1, DIR_SOUTH
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	release
	return

FlowerFields_MinaEvent_FrameTable_2:
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
	goto ZeBagIsFull
	goto FlowerFields_MinaEvent_FrameTable_1


FlowerFields_Combee::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_COMBEE, CRY_MODE_NORMAL
	msgbox FlowerFields_Combee_Text_0
	waitmoncry
	release
	end


FlowerFields_Cutiefly::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CUTIEFLY, CRY_MODE_NORMAL
	msgbox FlowerFields_Combee_Text_0
	waitmoncry
	release
	end


FlowerFields_HoneyTree::
	lock
	checkitem ITEM_HONEY, 1
	checkitem ITEM_HONEY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_HoneyTree_2
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq FlowerFields_HoneyTree_5
FlowerFields_HoneyTree_4:
	release
	end

FlowerFields_HoneyTree_2:
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

FlowerFields_HoneyTree_5:
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
	closemessage
	removeitem ITEM_HONEY, 1
	random 20
	compare VAR_RESULT, 8
	goto_if_le FlowerFields_HoneyTree_8
	compare VAR_RESULT, 18
	goto_if_ge FlowerFields_HoneyTree_9
	setwildbattlelevelrange SPECIES_CUTIEFLY, 12, ITEM_NONE, SPECIES_NONE, 15
FlowerFields_HoneyTree_7:
	dowildbattle
	goto FlowerFields_HoneyTree_4

FlowerFields_HoneyTree_8:
	setwildbattlelevelrange SPECIES_COMBEE, 12, ITEM_NONE, SPECIES_NONE, 15
	goto FlowerFields_HoneyTree_7

FlowerFields_HoneyTree_9:
	setwildbattlelevelrange SPECIES_TEDDIURSA, 12, ITEM_NONE, SPECIES_NONE, 15
	goto FlowerFields_HoneyTree_7


FlowerFields_HoneyTree2::
	lock
	checkitem ITEM_HONEY, 1
	checkitem ITEM_HONEY, 1
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_HoneyTree2_2
	msgbox HoneyTree_YesHoney, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq FlowerFields_HoneyTree2_5
FlowerFields_HoneyTree2_4:
	release
	end

FlowerFields_HoneyTree2_2:
	msgbox HoneyTree_NoHoney, MSGBOX_SIGN
	end

FlowerFields_HoneyTree2_5:
	msgbox HoneyUsedOnTree, MSGBOX_DEFAULT
	closemessage
	removeitem ITEM_HONEY, 1
	setwildbattlelevelrange SPECIES_HERACROSS, 20, ITEM_NONE, SPECIES_NONE, 25
	dowildbattle
	goto FlowerFields_HoneyTree2_4


FlowerFields_Mina::
	lock
	faceplayer
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_NOT_SPOKEN_TO
	goto_if_eq FlowerFields_Mina_2
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto_if_eq FlowerFields_Mina_3
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	goto_if_eq FlowerFields_Mina_4
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_eq FlowerFields_Mina_5
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
	goto_if_eq FlowerFields_Mina_6
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto_if_eq FlowerFields_Mina_7
	msgbox MinaLikesToPaint, MSGBOX_NPC
	turnobject 1, DIR_SOUTH
FlowerFields_Mina_1:
	release
	end

FlowerFields_Mina_2:
	msgbox GranbullBeingRowdy, MSGBOX_NPC
	turnobject 1, DIR_SOUTH
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto FlowerFields_Mina_1

FlowerFields_Mina_3:
	msgbox AllIWantToDoIsPaintGranbull, MSGBOX_NPC
	turnobject 1, DIR_SOUTH
	goto FlowerFields_Mina_1

FlowerFields_Mina_4:
	msgbox FeistyGranbullAintHe, MSGBOX_NPC
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto FlowerFields_Mina_1

FlowerFields_Mina_5:
	msgbox ThanksForBattlingGranbull
	checkitemspace ITEM_RARE_CANDY
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Mina_16
FlowerFields_Mina_15:
	giveitem ITEM_RARE_CANDY
	turnobject 1, DIR_SOUTH
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto FlowerFields_Mina_1

FlowerFields_Mina_6:
	msgbox ThanksForBattlingGranbull_Short
	checkitemspace ITEM_RARE_CANDY
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Mina_19
FlowerFields_Mina_18:
	giveitem ITEM_RARE_CANDY
	turnobject 1, DIR_SOUTH
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_QUEST_COMPLETE
	goto FlowerFields_Mina_1

FlowerFields_Mina_7:
	msgbox MinaIntroduction, MSGBOX_NPC
	turnobject 1, DIR_SOUTH
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_INTRODUCED
	goto FlowerFields_Mina_1

FlowerFields_Mina_16:
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
	goto ZeBagIsFull
	goto FlowerFields_Mina_15

FlowerFields_Mina_19:
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_WITH_AFTER_BATTLE
	goto ZeBagIsFull
	goto FlowerFields_Mina_18


FlowerFields_Granbull::
	lock
	faceplayer
	waitse
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_SPOKEN_TO
	goto_if_eq FlowerFields_Granbull_2
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	goto_if_eq FlowerFields_Granbull_2
	compare VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	goto_if_ge FlowerFields_Granbull_3
	playmoncry SPECIES_GRANBULL, CRY_MODE_NORMAL
	msgbox FlowerFields_Granbull_Text_1
	waitmoncry
FlowerFields_Granbull_1:
	release
	return

FlowerFields_Granbull_2:
	playmoncry SPECIES_GRANBULL, CRY_MODE_NORMAL
	waitmoncry
	msgbox WantToBattleGranbull, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FlowerFields_Granbull_10
	goto_if_set FLAG_BADGE05_GET, FlowerFields_Granbull_13
	goto_if_set FLAG_BADGE04_GET, FlowerFields_Granbull_14
	goto_if_set FLAG_BADGE03_GET, FlowerFields_Granbull_15
	createmon 1, 0, SPECIES_GRANBULL, 23, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_SCARY_FACE, FALSE
FlowerFields_Granbull_12:
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_BATTLED
	setvar VAR_SHINY_MULTIPLIER, 200
	setflag FLAG_SYSTEM_NO_WILD_RUNNING
	setflag FLAG_SYSTEM_NO_CATCHING
	dowildbattle
	setvar VAR_SHINY_MULTIPLIER, 0
	setvar VAR_MINA_INTRO_QUEST, STORY_MINA_GRANBULL_DEFEATED
	clearflag FLAG_SYSTEM_NO_WILD_RUNNING
	clearflag FLAG_SYSTEM_NO_CATCHING
	fadescreen FADE_TO_BLACK
	delay 40
	msgbox CombeeFliesAway
	closemessage
	removeobject 3
	warpsilentnofadeout MAP_FLOWER_FIELDS, 32, 37
	waitstate
	goto FlowerFields_Granbull_1

FlowerFields_Granbull_3:
	playmoncry SPECIES_GRANBULL, CRY_MODE_FAINT
	msgbox FlowerFields_Granbull_Text_0
	waitmoncry
	turnobject 2, DIR_NORTH
	goto FlowerFields_Granbull_1

FlowerFields_Granbull_10:
	release
	end

FlowerFields_Granbull_13:
	createmon 1, 0, SPECIES_GRANBULL, 45, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_PLAY_ROUGH, FALSE
	goto FlowerFields_Granbull_12

FlowerFields_Granbull_14:
	createmon 1, 0, SPECIES_GRANBULL, 38, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_RAGE, FALSE
	goto FlowerFields_Granbull_12

FlowerFields_Granbull_15:
	createmon 1, 0, SPECIES_GRANBULL, 34, ITEM_NONE, ITEM_NONE, NATURE_HARDY, 0, MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_LICK, MOVE_BITE, MOVE_SCARY_FACE, FALSE
	goto FlowerFields_Granbull_12


Route8_HoneyTrader::
	faceplayer
	goto_if_set FLAG_INTRODUCED_TO_BERRY_TRADER, Route8_HoneyTrader_2
Route8_HoneyTrader_1:
	setflag FLAG_INTRODUCED_TO_BERRY_TRADER
	msgbox GotAnyOranBerries
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_5
Route8_HoneyTrader_4:
	goto TradeBerriesGoodbye
	return

Route8_HoneyTrader_2:
	checkitem ITEM_ORAN_BERRY
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_8
Route8_HoneyTrader_7:
	goto TradeBerriesGoodbye
	goto Route8_HoneyTrader_1

Route8_HoneyTrader_5:
	checkitem ITEM_ORAN_BERRY
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_10
	msgbox Route8_HoneyTrader_DontHaveBerries, MSGBOX_NPC
	end

Route8_HoneyTrader_8:
	msgbox HereToTradeMoreBerries, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Route8_HoneyTrader_13
	goto Route8_HoneyTrader_7

Route8_HoneyTrader_10:
	goto TradeBerriesMain
	goto Route8_HoneyTrader_4

Route8_HoneyTrader_13:
	goto TradeBerriesMain
	goto Route8_HoneyTrader_7


TradeBerriesMain::
	checkitemquant ITEM_ORAN_BERRY
	msgbox TradeHowManyBerries, MSGBOX_HOWMANY
	compare VAR_RESULT, 0
	goto_if_eq TradeBerriesMain_1
	copyvar VAR_TEMP_2, VAR_RESULT
	buffernumberstring STR_VAR_1, VAR_TEMP_2
TradeBerriesMain_5:
	compare VAR_RESULT, 0
	goto_if_ne TradeBerriesMain_6
	buffernumberstring STR_VAR_2, VAR_TEMP_1
	compare VAR_TEMP_2, 1
	goto_if_eq TradeBerriesMain_9
	msgbox TradeBerriesForHoney_Text_Multiple, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeBerriesMain_14
TradeBerriesMain_8:
	goto TradeBerriesGoodbye
	return

TradeBerriesMain_1:
	goto TradeBerriesGoodbye
	return

TradeBerriesMain_6:
	subvar VAR_RESULT, 1
	addvar VAR_TEMP_1, 2
	goto TradeBerriesMain_5

TradeBerriesMain_9:
	msgbox TradeBerriesForHoney_Text_Single, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq TradeBerriesMain_12
	goto TradeBerriesMain_8

TradeBerriesMain_12:
	checkitemspace ITEM_HONEY, VAR_TEMP_1
	compare VAR_RESULT, FALSE
	goto_if_eq TradeBerriesMain_17
TradeBerriesMain_16:
	giveitem ITEM_HONEY, VAR_TEMP_1
	removeitem ITEM_ORAN_BERRY, VAR_TEMP_2
	goto TradeBerriesMain_8

TradeBerriesMain_14:
	checkitemspace ITEM_HONEY, VAR_TEMP_1
	compare VAR_RESULT, FALSE
	goto_if_eq TradeBerriesMain_20
TradeBerriesMain_19:
	giveitem ITEM_HONEY, VAR_TEMP_1
	removeitem ITEM_ORAN_BERRY, VAR_TEMP_2
	goto TradeBerriesMain_8

TradeBerriesMain_17:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	goto ZeBagIsFull
	goto TradeBerriesMain_16

TradeBerriesMain_20:
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	goto ZeBagIsFull
	goto TradeBerriesMain_19


TradeBerriesGoodbye::
	setvar VAR_TEMP_1, 0
	setvar VAR_TEMP_2, 0
	msgbox ComeTradeWhenGetMoreBerries, MSGBOX_NPC
	end


FlowerFields_Combee_Text_0:
	.string "Bzzz!$"

FlowerFields_Granbull_Text_0:
	.string "Grr…$"

FlowerFields_Granbull_Text_1:
	.string "Grr!$"

GranbullBeingRowdy::
	.string "All I wanted to do was paint my\n"
	.string "Granbull doing a super cool pose,\l"
	.string "but he's just way too distracted\l"
	.string "by that Combee.$"

AllIWantToDoIsPaintGranbull::
	.string "Wish he would calm down…$"

FeistyGranbullAintHe::
	.string "Feisty, ain't he?\p"
	.string "Granbull really likes showing his\n"
	.string "affection through chomping.\l"
	.string "Like, he just can't stop chomping\l"
	.string "things.$"

ThanksForBattlingGranbull::
	.string "Thanks for playing with Granbull.\p"
	.string "Hope he didn't cause you too much\n"
	.string "trouble.\p"
	.string "Wish I could like, reward you or\n"
	.string "something, but all I've got to give\l"
	.string "is this candy.$"

ThanksForBattlingGranbull_Short::
	.string "Wish I could like, reward you or\n"
	.string "something, but all I've got to give\l"
	.string "is this candy.$"

MinaIntroduction::
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
	.string "If you don't mind, I'd like to\n"
	.string "focus on painting now.$"

WantToBattleGranbull::
	.string "The Granbull looks like it's\n"
	.string "raring to go.\p"
	.string "Would you like to battle with it?$"

CombeeFliesAway::
	.string "The Granbull calms down long enough\n"
	.string "for the Combee to escape.$"

HereToTradeMoreBerries::
	.string "Have you come to trade\n"
	.string "Oran Berries?$"

GotAnyOranBerries::
	.string "While my Pokémon mainly eat honey,\n"
	.string "they absolutely adore Oran Berries!\p"
	.string "Do you have any Oran Berries you\n"
	.string "would like to trade?\p"
	.string "I can give you two jars of honey\n"
	.string "for each Oran Berry.$"

TradeHowManyBerries::
	.string "How many berries would you\n"
	.string "like to trade?$"

TradeBerriesForHoney_Text_Single::
	.string "One Oran Berry for two jars of honey.\p"
	.string "Is that trade okay?$"

TradeBerriesForHoney_Text_Multiple::
	.string "{STR_VAR_1} berries for {STR_VAR_2} jars\n"
	.string "of honey.\p"
	.string "Is that trade okay?$"

ComeTradeWhenGetMoreBerries::
	.string "If you ever need any honey,\n"
	.string "you can find me here.$"

Route8_HoneyTrader_DontHaveBerries::
	.string "Hm… You don't seem to be carrying\n"
	.string "any Oran Berries…$"
