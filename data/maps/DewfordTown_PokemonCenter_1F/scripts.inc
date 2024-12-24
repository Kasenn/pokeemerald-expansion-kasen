DewfordTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_COAST_TOWN
	return


DewfordTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	return


DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	return


DewfordTown_PokemonCenter_1F_OldMan::
	lock
	faceplayer
	checkitem ITEM_TOWN_MAP
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_1
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	releaseall
	end

DewfordTown_PokemonCenter_1F_OldMan_1:
	goto_if_unset FLAG_TEMP_1, DewfordTown_PokemonCenter_1F_OldMan_4
	showmoneybox 0, 0
	msgbox DFTPC1F_MapIntro2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_10
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_4:
	setflag FLAG_TEMP_1
	msgbox DFTPC1F_MapIntro, MSGBOX_NPC
	showmoneybox 0, 0
	msgbox DFTPC1F_Interested, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_7
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_7:
	goto DFTPC1F_SellMap
	return

DewfordTown_PokemonCenter_1F_OldMan_10:
	goto DFTPC1F_SellMap
	return


DFTPC1F_NotInterested::
	hidemoneybox
	msgbox DFTPC1F_NotInterestedText, MSGBOX_NPC
	waitmessage
	closemessage
	releaseall
	end


DFTPC1F_SellMap::
	checkmoney 2000
	compare VAR_RESULT, YES
	goto_if_eq DFTPC1F_SellMap_1
	msgbox DFTPC1F_SellMap_Text_0, MSGBOX_NPC
	waitmessage
	hidemoneybox
	closemessage
	releaseall
	end

DFTPC1F_SellMap_1:
	hidemoneybox
	removemoney 2000
	giveitem ITEM_TOWN_MAP
	waitfanfare
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	releaseall
	end


DewfordTown_PokemonCenter_1F_OldMan_Text_0:
	.string "Enjoy your brand new map!$"

DFTPC1F_SellMap_Text_0:
	.string "Oh, you don't have enough money…$"

DewfordTown_PokemonCenter_1F_Text_StoneCavern::
	.string "I heard there's some rare Pokémon\n"
	.string "you can only find by fishing.\p"
	.string "It's said that they like to\n"
	.string "collect rare shards.$"

DFTPC1F_MapIntro::
	.string "Ah, a fresh face around these parts.\p"
	.string "You must be from the\n"
	.string "Coralgrove Archipelago!\p"
	.string "The mainland can be scary and\n"
	.string "unknown for anyone first time here\l"
	.string "but I have just the cure!\p"
	.string "For the low low price of ¥2000, I can\n"
	.string "offer you a map of the entire region!$"

DFTPC1F_Interested::
	.string "What say you, interested?$"

DFTPC1F_MapIntro2::
	.string "I may still have one map\n"
	.string "left if you're interested…$"

DFTPC1F_NotInterestedText::
	.string "Hmph… Fine, have it your way.$"
