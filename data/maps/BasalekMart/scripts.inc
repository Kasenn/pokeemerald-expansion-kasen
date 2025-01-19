BasalekMart_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call Common_EventScript_SetupRivalGfxId
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK, BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

BasalekMart_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setflag FLAG_TEMP_1
	return


BasalekMart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE08_GET, BasalekMart_Clerk_2
	goto_if_set FLAG_BADGE07_GET, BasalekMart_Clerk_3
	goto_if_set FLAG_BADGE06_GET, BasalekMart_Clerk_4
	goto_if_set FLAG_BADGE05_GET, BasalekMart_Clerk_5
BasalekMart_Clerk_1:
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

BasalekMart_Clerk_2:
	pokemart BasalekMart_8Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_3:
	pokemart BasalekMart_7Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_4:
	pokemart BasalekMart_7Badges
	goto BasalekMart_Clerk_1

BasalekMart_Clerk_5:
	pokemart BasalekMart_4Badges
	goto BasalekMart_Clerk_1


	.align 2
BasalekMart_4Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
BasalekMart_7Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

	.align 2
BasalekMart_8Badges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_FRESH_WATER
	.2byte ITEM_SODA_POP
	.2byte ITEM_LEMONADE
	.2byte ITEM_REVIVE
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

BasalekMart_Triathlete::
	msgbox BasalekMart_Triathlete_Text, MSGBOX_NPC
	turnobject 4, DIR_NORTH
	return


BasalekMart_Man::
	msgbox BasalekMart_Man_Text, MSGBOX_NPC
	return


BasalekMart_Rival::
	lock
	faceplayer
	goto_if_set FLAG_RIVAL_MET_IN_BASALEK_MART, BasalekMart_Rival_2
BasalekMart_Rival_1:
	setflag FLAG_RIVAL_MET_IN_BASALEK_MART
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BasalekMart_Rival_4
	msgbox BasalekMartBrendan_GettingReadyToHeadOut, MSGBOX_YESNO
	goto BasalekMart_BrendanBattle
	return

BasalekMart_Rival_2:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq BasalekMart_Rival_7
	msgbox BasalekMartBrendan_ReadyToBattleNow, MSGBOX_YESNO
	goto BasalekMart_BrendanBattle
	goto BasalekMart_Rival_1

BasalekMart_Rival_4:
	msgbox BasalekMartMay_GettingReadyToHeadOut, MSGBOX_YESNO
	goto BasalekMart_MayBattle
	return

BasalekMart_Rival_7:
	msgbox BasalekMartMay_ReadyToBattleNow, MSGBOX_YESNO
	goto BasalekMart_MayBattle
	goto BasalekMart_Rival_1


BasalekMart_MayBattle::
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_MayBattle_2
	msgbox BasalekMartMay_LetsGoFightOutside, MSGBOX_AUTOCLOSE
	warp MAP_BASALUFF_TOWN, 23, 16
	waitstate
	return

BasalekMart_MayBattle_2:
	msgbox BasalekMartMay_WantToPrepare, MSGBOX_AUTOCLOSE
	end


BasalekMart_BrendanBattle::
	compare VAR_RESULT, FALSE
	goto_if_eq BasalekMart_BrendanBattle_2
	msgbox BasalekMartBrendan_LetsGoFightOutside, MSGBOX_AUTOCLOSE
	warp MAP_BASALUFF_TOWN, 23, 16
	waitstate
	return

BasalekMart_BrendanBattle_2:
	msgbox BasalekMartBrendan_WantToPrepare, MSGBOX_AUTOCLOSE
	end


BasalekMart_Triathlete_Text::
	.string "The route up north is often hit with\n"
	.string "some extreme weather conditions.\p"
	.string "If you're heading that way,\n"
	.string "I recommend stocking up first.$"

BasalekMart_Man_Text::
	.string "This mart seems to be stocked to the\n"
	.string "brim with drinks.\p"
	.string "That's fine and all, but I was really\n"
	.string "hoping to find some potions.$"

BasalekMartMay_GettingReadyToHeadOut::
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
	.string "I get it.\n"
	.string "You want some time to prepare.\p"
	.string "There's a PC in the far corner\n"
	.string "of the Mart.\p"
	.string "And if you need to get your\n"
	.string "Pokémon healed, just go take\l"
	.string "a dip in the hot spring outside.\p"
	.string "I'll be waiting for you here!$"

BasalekMartMay_LetsGoFightOutside::
	.string "Alright!\p"
	.string "Come, let's go battle outside\n"
	.string "so we don't disturb the store\l"
	.string "with our battling.$"

BasalekMartBrendan_GettingReadyToHeadOut::
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
	.string "Okay!\p"
	.string "But first, let's head outside.\p"
	.string "We don't want to disturb the store\n"
	.string "with our battle.$"

BasalekMartMay_ReadyToBattleNow::
	.string "{RIVAL}: You're back!\p"
	.string "Are you ready to battle now?$"

BasalekMartBrendan_ReadyToBattleNow::
	.string "{RIVAL}: Welcome back.\p"
	.string "Are you ready to battle now?$"
