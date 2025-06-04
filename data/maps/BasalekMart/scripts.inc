BasalekMart_MapScripts::
# 2 "data/maps/BasalekMart/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BasalekMart/scripts.pory"
	call SetupRivalGfxId
# 4 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK, BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/BasalekMart/scripts.pory"
	setflag FLAG_TEMP_1
	return


BasalekMart_Clerk::
# 11 "data/maps/BasalekMart/scripts.pory"
	lock
# 12 "data/maps/BasalekMart/scripts.pory"
	faceplayer
# 13 "data/maps/BasalekMart/scripts.pory"
	message gText_HowMayIServeYou
# 14 "data/maps/BasalekMart/scripts.pory"
	waitmessage
# 15 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, BasalekMart_Clerk_2
# 18 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, BasalekMart_Clerk_3
# 21 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, BasalekMart_Clerk_4
# 24 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, BasalekMart_Clerk_5
BasalekMart_Clerk_1:
# 27 "data/maps/BasalekMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 28 "data/maps/BasalekMart/scripts.pory"
	release
	end

BasalekMart_Clerk_2:
# 16 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_8Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_3:
# 19 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_7Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_4:
# 22 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_7Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_5:
# 25 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_4Badges
	goto BasalekMart_Clerk_1


	.align 2
# 32 "data/maps/BasalekMart/scripts.pory"
BasalekMart_4Badges:
# 33 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 34 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 35 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 36 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 37 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 38 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 39 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 40 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 41 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 42 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 43 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 44 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 45 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 46 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 47 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 48 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 49 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 52 "data/maps/BasalekMart/scripts.pory"
BasalekMart_7Badges:
# 53 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 54 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 55 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 56 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 57 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 58 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 59 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 60 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 61 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 63 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 64 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 65 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 66 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 67 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 68 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 69 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 72 "data/maps/BasalekMart/scripts.pory"
BasalekMart_8Badges:
# 73 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 74 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 75 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 76 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POTION
# 77 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 78 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 79 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 80 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 81 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 82 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 83 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 84 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 85 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 86 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 87 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 88 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 89 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 90 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

BasalekMart_Triathlete::
# 95 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMart_Triathlete_Text, MSGBOX_NPC
# 96 "data/maps/BasalekMart/scripts.pory"
	turnobject 4, DIR_NORTH
	return


BasalekMart_Man::
# 105 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMart_Man_Text, MSGBOX_NPC
	return


BasalekMart_Rival::
# 114 "data/maps/BasalekMart/scripts.pory"
	lock
# 115 "data/maps/BasalekMart/scripts.pory"
	faceplayer
# 116 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekMart_Rival_2
BasalekMart_Rival_1:
# 126 "data/maps/BasalekMart/scripts.pory"
	setflag FLAG_RIVAL_MET_IN_BASALEK_MART
	checkplayergender
# 0 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BasalekMart_Rival_4
# 132 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_GettingReadyToHeadOut, MSGBOX_YESNO
# 133 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_BrendanBattle
	return

BasalekMart_Rival_2:
	checkplayergender
# 0 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BasalekMart_Rival_7
# 122 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_ReadyToBattleNow, MSGBOX_YESNO
# 123 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_BrendanBattle
	goto BasalekMart_Rival_1

BasalekMart_Rival_4:
# 128 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_GettingReadyToHeadOut, MSGBOX_YESNO
# 129 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_MayBattle
	return

BasalekMart_Rival_7:
# 118 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_ReadyToBattleNow, MSGBOX_YESNO
# 119 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_MayBattle
	goto BasalekMart_Rival_1


BasalekMart_MayBattle::
# 137 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_MayBattle_2
# 141 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_LetsGoFightOutside, MSGBOX_AUTOCLOSE
# 142 "data/maps/BasalekMart/scripts.pory"
	warp MAP_BASALUFF_TOWN, 23, 16
# 143 "data/maps/BasalekMart/scripts.pory"
	waitstate
	return

BasalekMart_MayBattle_2:
# 138 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_WantToPrepare, MSGBOX_AUTOCLOSE
	end


BasalekMart_BrendanBattle::
# 146 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_BrendanBattle_2
# 150 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_LetsGoFightOutside, MSGBOX_AUTOCLOSE
# 151 "data/maps/BasalekMart/scripts.pory"
	warp MAP_BASALUFF_TOWN, 23, 16
# 152 "data/maps/BasalekMart/scripts.pory"
	waitstate
	return

BasalekMart_BrendanBattle_2:
# 147 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_WantToPrepare, MSGBOX_AUTOCLOSE
	end


BasalekMart_Triathlete_Text::
# 98 "data/maps/BasalekMart/scripts.pory"
	.string "The route up north is often hit with\n"
	.string "some extreme weather conditions.\p"
	.string "If you're heading that way,\n"
	.string "I recommend stocking up first.$"

BasalekMart_Man_Text::
# 107 "data/maps/BasalekMart/scripts.pory"
	.string "This mart seems to be stocked to the\n"
	.string "brim with drinks.\p"
	.string "That's fine and all, but I was really\n"
	.string "hoping to find some potions.$"

BasalekMartMay_GettingReadyToHeadOut::
# 155 "data/maps/BasalekMart/scripts.pory"
	.string "{RIVAL}: Oh, hi {PLAYER}!\n"
	.string "Long time no see!\p"
	.string "I honestly don't know how people can\n"
	.string "even live in this humid atmosphere.\p"
	.string "I had to turn back on Route 17\n"
	.string "just to get myself some extra drinks\l"
	.string "for the journey.\p"
	.string "Anyways, enough about me.\p"
	.string "How about we have ourselves\n"
	.string "a Pokémon battle?\p"
	.string "I'm curious to see if you've mastered\n"
	.string "using the Mega Evolution technique.$"

BasalekMartMay_WantToPrepare::
# 169 "data/maps/BasalekMart/scripts.pory"
	.string "I get it.\n"
	.string "You want some time to prepare.\p"
	.string "There's a PC in the far corner\n"
	.string "of the Mart.\p"
	.string "And if you need to get your\n"
	.string "Pokémon healed, just go take\l"
	.string "a dip in the hot spring outside.\p"
	.string "I'll be waiting for you here!$"

BasalekMartMay_LetsGoFightOutside::
# 179 "data/maps/BasalekMart/scripts.pory"
	.string "Alright!\p"
	.string "Come, let's go battle outside\n"
	.string "so we don't disturb the store\l"
	.string "with our battling.$"

BasalekMartBrendan_GettingReadyToHeadOut::
# 185 "data/maps/BasalekMart/scripts.pory"
	.string "{RIVAL}: Oh, hey {PLAYER}!\n"
	.string "It's been a while, huh?\p"
	.string "I was on my way to Route 17, but\n"
	.string "the weather was so unbearably humid\l"
	.string "that I just had to turn back and\l"
	.string "get myself some extra drinks for\l"
	.string "the journey.\p"
	.string "Anyway, enough about me.\p"
	.string "How about we have ourselves\n"
	.string "a Pokémon battle?\p"
	.string "I'm curious to see if you've mastered\n"
	.string "using the Mega Evolution technique.$"

BasalekMartBrendan_WantToPrepare::
# 199 "data/maps/BasalekMart/scripts.pory"
	.string "I get it.\n"
	.string "You want some time to prepare.\p"
	.string "There's a PC in the far corner\n"
	.string "of the Mart.\p"
	.string "And if you need to get your\n"
	.string "Pokémon healed, just give them\l"
	.string "a relaxing bath in the hot spring\l"
	.string "outside.\p"
	.string "I'll be waiting for you here.$"

BasalekMartBrendan_LetsGoFightOutside::
# 210 "data/maps/BasalekMart/scripts.pory"
	.string "Okay!\p"
	.string "But first, let's head outside.\p"
	.string "We don't want to disturb the store\n"
	.string "with our battle.$"

BasalekMartMay_ReadyToBattleNow::
# 216 "data/maps/BasalekMart/scripts.pory"
	.string "{RIVAL}: You're back!\p"
	.string "Are you ready to battle now?$"

BasalekMartBrendan_ReadyToBattleNow::
# 220 "data/maps/BasalekMart/scripts.pory"
	.string "{RIVAL}: Welcome back.\p"
	.string "Are you ready to battle now?$"
