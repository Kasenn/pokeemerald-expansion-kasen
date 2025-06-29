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
	checkitem ITEM_TOWN_MAP
# 0 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_Clerk_2
# 30 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, BasalekMart_Clerk_13
# 33 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, BasalekMart_Clerk_14
# 36 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, BasalekMart_Clerk_15
# 39 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, BasalekMart_Clerk_16
BasalekMart_Clerk_1:
# 43 "data/maps/BasalekMart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 44 "data/maps/BasalekMart/scripts.pory"
	release
	end

BasalekMart_Clerk_2:
# 16 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, BasalekMart_Clerk_5
# 19 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, BasalekMart_Clerk_6
# 22 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, BasalekMart_Clerk_7
# 25 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, BasalekMart_Clerk_8
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_5:
# 17 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_8BadgesMap
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_6:
# 20 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_7BadgesMap
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_7:
# 23 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_7BadgesMap
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_8:
# 26 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_4BadgesMap
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_13:
# 31 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_8Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_14:
# 34 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_7Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_15:
# 37 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_7Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_16:
# 40 "data/maps/BasalekMart/scripts.pory"
	pokemart BasalekMart_4Badges
	goto BasalekMart_Clerk_1


	.align 2
# 48 "data/maps/BasalekMart/scripts.pory"
BasalekMart_4Badges:
# 49 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 50 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 51 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 52 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 53 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 54 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 55 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 56 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 57 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 58 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 59 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 60 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 61 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 62 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 63 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 64 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 65 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 68 "data/maps/BasalekMart/scripts.pory"
BasalekMart_7Badges:
# 69 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 70 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 71 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 72 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 73 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 74 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 75 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 76 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 77 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 78 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 79 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 80 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 81 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 82 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 83 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 84 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 85 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 88 "data/maps/BasalekMart/scripts.pory"
BasalekMart_8Badges:
# 89 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 90 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 91 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 92 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POTION
# 93 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 94 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 95 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 96 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 97 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 98 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 99 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 100 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 101 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 102 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 103 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 104 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 105 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 106 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 110 "data/maps/BasalekMart/scripts.pory"
BasalekMart_4BadgesMap:
# 111 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 112 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 113 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 114 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 115 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 116 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 117 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 118 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 119 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 120 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 121 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 122 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 123 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 124 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 125 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 126 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 127 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 128 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 131 "data/maps/BasalekMart/scripts.pory"
BasalekMart_7BadgesMap:
# 132 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 133 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 134 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 135 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 136 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 137 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 138 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 139 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 140 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 141 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 142 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 143 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 144 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 145 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 146 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 147 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 148 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 149 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
# 152 "data/maps/BasalekMart/scripts.pory"
BasalekMart_8BadgesMap:
# 153 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_TOWN_MAP
# 154 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 155 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 156 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 157 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POTION
# 158 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 159 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SODA_POP
# 160 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_LEMONADE
# 161 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REVIVE
# 162 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 163 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 164 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_AWAKENING
# 165 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 166 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 167 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 168 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_REPEL
# 169 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 170 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 171 "data/maps/BasalekMart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

BasalekMart_Triathlete::
# 176 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMart_Triathlete_Text, MSGBOX_NPC
# 177 "data/maps/BasalekMart/scripts.pory"
	turnobject 4, DIR_NORTH
	return


BasalekMart_Man::
# 186 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMart_Man_Text, MSGBOX_NPC
	return


BasalekMart_Rival::
# 195 "data/maps/BasalekMart/scripts.pory"
	lock
# 196 "data/maps/BasalekMart/scripts.pory"
	faceplayer
# 197 "data/maps/BasalekMart/scripts.pory"
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekMart_Rival_2
BasalekMart_Rival_1:
# 207 "data/maps/BasalekMart/scripts.pory"
	setflag FLAG_RIVAL_MET_IN_BASALEK_MART
	checkplayergender
# 0 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BasalekMart_Rival_4
# 213 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_GettingReadyToHeadOut, MSGBOX_YESNO
# 214 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_BrendanBattle
	return

BasalekMart_Rival_2:
	checkplayergender
# 0 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq BasalekMart_Rival_7
# 203 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_ReadyToBattleNow, MSGBOX_YESNO
# 204 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_BrendanBattle
	goto BasalekMart_Rival_1

BasalekMart_Rival_4:
# 209 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_GettingReadyToHeadOut, MSGBOX_YESNO
# 210 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_MayBattle
	return

BasalekMart_Rival_7:
# 199 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_ReadyToBattleNow, MSGBOX_YESNO
# 200 "data/maps/BasalekMart/scripts.pory"
	goto BasalekMart_MayBattle
	goto BasalekMart_Rival_1


BasalekMart_MayBattle::
# 218 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_MayBattle_2
# 222 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_LetsGoFightOutside, MSGBOX_AUTOCLOSE
# 223 "data/maps/BasalekMart/scripts.pory"
	warp MAP_BASALUFF_TOWN, 23, 16
# 224 "data/maps/BasalekMart/scripts.pory"
	waitstate
	return

BasalekMart_MayBattle_2:
# 219 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartMay_WantToPrepare, MSGBOX_AUTOCLOSE
	end


BasalekMart_BrendanBattle::
# 227 "data/maps/BasalekMart/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_BrendanBattle_2
# 231 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_LetsGoFightOutside, MSGBOX_AUTOCLOSE
# 232 "data/maps/BasalekMart/scripts.pory"
	warp MAP_BASALUFF_TOWN, 23, 16
# 233 "data/maps/BasalekMart/scripts.pory"
	waitstate
	return

BasalekMart_BrendanBattle_2:
# 228 "data/maps/BasalekMart/scripts.pory"
	msgbox BasalekMartBrendan_WantToPrepare, MSGBOX_AUTOCLOSE
	end


BasalekMart_Triathlete_Text::
# 179 "data/maps/BasalekMart/scripts.pory"
	.string "The route up north is often hit with\n"
	.string "some extreme weather conditions.\p"
	.string "If you're heading that way,\n"
	.string "I recommend stocking up first.$"

BasalekMart_Man_Text::
# 188 "data/maps/BasalekMart/scripts.pory"
	.string "This mart seems to be stocked to the\n"
	.string "brim with drinks.\p"
	.string "That's fine and all, but I was really\n"
	.string "hoping to find some potions.$"

BasalekMartMay_GettingReadyToHeadOut::
# 236 "data/maps/BasalekMart/scripts.pory"
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
# 250 "data/maps/BasalekMart/scripts.pory"
	.string "I get it.\n"
	.string "You want some time to prepare.\p"
	.string "There's a PC in the far corner\n"
	.string "of the Mart.\p"
	.string "And if you need to get your\n"
	.string "Pokémon healed, just go take\l"
	.string "a dip in the hot spring outside.\p"
	.string "I'll be waiting for you here!$"

BasalekMartMay_LetsGoFightOutside::
# 260 "data/maps/BasalekMart/scripts.pory"
	.string "Alright!\p"
	.string "Come, let's go battle outside\n"
	.string "so we don't disturb the store\l"
	.string "with our battling.$"

BasalekMartBrendan_GettingReadyToHeadOut::
# 266 "data/maps/BasalekMart/scripts.pory"
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
# 280 "data/maps/BasalekMart/scripts.pory"
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
# 291 "data/maps/BasalekMart/scripts.pory"
	.string "Okay!\p"
	.string "But first, let's head outside.\p"
	.string "We don't want to disturb the store\n"
	.string "with our battle.$"

BasalekMartMay_ReadyToBattleNow::
# 297 "data/maps/BasalekMart/scripts.pory"
	.string "{RIVAL}: You're back!\p"
	.string "Are you ready to battle now?$"

BasalekMartBrendan_ReadyToBattleNow::
# 301 "data/maps/BasalekMart/scripts.pory"
	.string "{RIVAL}: Welcome back.\p"
	.string "Are you ready to battle now?$"
