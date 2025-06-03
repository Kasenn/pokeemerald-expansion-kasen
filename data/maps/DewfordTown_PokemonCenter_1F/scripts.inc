DewfordTown_PokemonCenter_1F_MapScripts::
# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_COAST_TOWN
	return


DewfordTown_PokemonCenter_1F_EventScript_Nurse::
# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 11 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 12 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
	return


DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 18 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	return


DewfordTown_PokemonCenter_1F_OldMan::
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
	checkitem ITEM_TOWN_MAP
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_1
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
# 57 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 58 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 59 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_OldMan_1:
# 32 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, DewfordTown_PokemonCenter_1F_OldMan_4
# 45 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 46 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_MapIntro2, MSGBOX_YESNO
# 47 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_10
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_4:
# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 34 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_MapIntro, MSGBOX_NPC
# 35 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 36 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_Interested, MSGBOX_YESNO
# 37 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_7
# 41 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_7:
# 38 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_SellMap
	return

DewfordTown_PokemonCenter_1F_OldMan_10:
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_SellMap
	return


DFTPC1F_NotInterested::
# 64 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_NotInterestedText, MSGBOX_NPC
# 66 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 67 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 68 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DFTPC1F_SellMap::
# 73 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	checkmoney 2000
# 74 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DFTPC1F_SellMap_1
# 86 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_SellMap_Text_0, MSGBOX_NPC
# 87 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 88 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 89 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 90 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DFTPC1F_SellMap_1:
# 75 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 76 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	removemoney 2000
# 77 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 78 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 79 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
# 80 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 82 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DewfordTown_PokemonCenter_1F_OldMan_Text_0:
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Enjoy your brand new map!$"

DFTPC1F_SellMap_Text_0:
# 86 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, you don't have enough money…$"

DewfordTown_PokemonCenter_1F_Text_StoneCavern::
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I heard there's some rare Pokémon\n"
	.string "you can only find by fishing.\p"
	.string "It's said that they like to\n"
	.string "collect rare shards.$"

DFTPC1F_MapIntro::
# 95 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, a fresh face around these parts.\p"
	.string "You must be from the\n"
	.string "Coralgrove Archipelago!\p"
	.string "The mainland can be scary and\n"
	.string "unknown for anyone first time here\l"
	.string "but I have just the cure!\p"
	.string "For the low low price of ¥2000, I can\n"
	.string "offer you a map of the entire region!$"

DFTPC1F_Interested::
# 105 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "What say you, interested?$"

DFTPC1F_MapIntro2::
# 108 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I may still have one map\n"
	.string "left if you're interested…$"

DFTPC1F_NotInterestedText::
# 112 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Hmph… Fine, have it your way.$"
