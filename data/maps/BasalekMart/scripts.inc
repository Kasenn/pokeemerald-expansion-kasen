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
	.string "may: getting ready to head out, battle?$"

BasalekMartMay_WantToPrepare::
	.string "may: want to prepare$"

BasalekMartMay_LetsGoFightOutside::
	.string "let's go fight outside$"

BasalekMartBrendan_GettingReadyToHeadOut::
	.string "brendan: getting ready to head out, battle?$"

BasalekMartBrendan_WantToPrepare::
	.string "brendan: want to prepare$"

BasalekMartBrendan_LetsGoFightOutside::
	.string "let's go fight outside$"

BasalekMartMay_ReadyToBattleNow::
	.string "may: ready now?$"

BasalekMartBrendan_ReadyToBattleNow::
	.string "brendan: ready now?$"
