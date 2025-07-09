DewfordTown_PokemonCenter_1F_MapScripts::
# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

DewfordTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_COAST_TOWN
	return


DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
	return


DewfordTown_PokemonCenter_1F_OldMan::
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lock
# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
	checkitem ITEM_TOWN_MAP
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_1
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
# 49 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 50 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_OldMan_1:
# 24 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, DewfordTown_PokemonCenter_1F_OldMan_4
# 37 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 38 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_MapIntro2, MSGBOX_YESNO
# 39 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_10
# 43 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_4:
# 25 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 26 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_MapIntro, MSGBOX_NPC
# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 28 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_Interested, MSGBOX_YESNO
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_7
# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_7:
# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_SellMap
	return

DewfordTown_PokemonCenter_1F_OldMan_10:
# 40 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_SellMap
	return


DFTPC1F_NotInterested::
# 56 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 57 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_NotInterestedText, MSGBOX_NPC
# 58 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 59 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 60 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DFTPC1F_SellMap::
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	checkmoney 2000
# 66 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DFTPC1F_SellMap_1
# 78 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_SellMap_Text_0, MSGBOX_NPC
# 79 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 80 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 82 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DFTPC1F_SellMap_1:
# 67 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 68 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	removemoney 2000
# 69 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 70 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 71 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
# 72 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 73 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 74 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DewfordTown_PokemonCenter_1F_OldMan_Text_0:
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Enjoy your brand new map!$"

DFTPC1F_SellMap_Text_0:
# 78 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, you don't have enough money…$"

DewfordTown_PokemonCenter_1F_Text_StoneCavern::
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I heard there's some rare Pokémon\n"
	.string "you can only find by fishing.\p"
	.string "It's said that they like to\n"
	.string "collect rare shards.$"

DFTPC1F_MapIntro::
# 87 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, a fresh face around these parts.\p"
	.string "You must be from the\n"
	.string "Coralgrove Archipelago!\p"
	.string "The mainland can be scary and\n"
	.string "unknown for anyone first time here\l"
	.string "but I have just the cure!\p"
	.string "For the low low price of ¥2000, I can\n"
	.string "offer you a map of the entire region!$"

DFTPC1F_Interested::
# 97 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "What say you, interested?$"

DFTPC1F_MapIntro2::
# 100 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I may still have one map\n"
	.string "left if you're interested…$"

DFTPC1F_NotInterestedText::
# 104 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Hmph… Fine, have it your way.$"
