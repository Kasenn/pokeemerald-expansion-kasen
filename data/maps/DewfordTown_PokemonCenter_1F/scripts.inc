# 1 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_MapScripts::
# 5 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_PokemonCenter_1F_OnTransition
# 6 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
    map_script MAP_SCRIPT_ON_FRAME_TABLE, Drisledge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 7 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_OnTransition:
# 10 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_COAST_TOWN
# 11 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	release
# 20 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_PokefanF::
# 23 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_StoneCavern, MSGBOX_NPC
# 24 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_EventScript_Man::
# 27 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM, MSGBOX_NPC
# 28 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	end
# 29 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_StoneCavern:
# 31 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I heard there's some rare Pokémon\n"
# 32 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "you can only find by fishing.\p"
# 33 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "It's said that they like to\n"
# 34 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "collect rare shards.$"
# 35 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
DewfordTown_PokemonCenter_1F_Text_FaintedMonCanUseHM:
# 37 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Even if a POKéMON faints and can't\n"
# 38 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "battle, it can still use a move learned\l"
# 39 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "from a HIDDEN MACHINE (HM).$"

DewfordTown_PokemonCenter_1F_OldMan::
# 43 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	lockall
# 44 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	faceplayer
	checkitem ITEM_TOWN_MAP
# 0 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_1
# 70 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
# 71 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 72 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 73 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DewfordTown_PokemonCenter_1F_OldMan_1:
# 46 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto_if_unset FLAG_TEMP_1, DewfordTown_PokemonCenter_1F_OldMan_4
# 59 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 60 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_MapIntro2, MSGBOX_YESNO
# 61 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_10
# 65 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_4:
# 47 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 48 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_MapIntro, MSGBOX_NPC
# 49 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 50 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_Interested, MSGBOX_YESNO
# 51 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_PokemonCenter_1F_OldMan_7
# 55 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_NotInterested
	return

DewfordTown_PokemonCenter_1F_OldMan_7:
# 52 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_SellMap
	return

DewfordTown_PokemonCenter_1F_OldMan_10:
# 62 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	goto DFTPC1F_SellMap
	return


DFTPC1F_NotInterested::
# 78 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 79 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_NotInterestedText, MSGBOX_NPC
# 80 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 81 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 82 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DFTPC1F_SellMap::
# 87 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	checkmoney 2000
# 88 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DFTPC1F_SellMap_1
# 100 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DFTPC1F_SellMap_Text_0, MSGBOX_NPC
# 101 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 102 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 103 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 104 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end

DFTPC1F_SellMap_1:
# 89 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 90 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	removemoney 2000
# 91 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 92 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 93 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	msgbox DewfordTown_PokemonCenter_1F_OldMan_Text_0, MSGBOX_NPC
# 94 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 95 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 96 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	releaseall
	end


DewfordTown_PokemonCenter_1F_OldMan_Text_0:
# 70 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Enjoy your brand new map!$"

DFTPC1F_SellMap_Text_0:
# 100 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Oh, you don't have enough money…$"

DFTPC1F_MapIntro::
# 109 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Ah, a fresh face around these parts.\p"
	.string "You must be from the\n"
	.string "Coralgrove Archipelago!\p"
	.string "The mainland can be scary and\n"
	.string "unknown for anyone first time here\l"
	.string "but I have just the cure!\p"
	.string "For the low low price of ¥2000, I can\n"
	.string "offer you a map of the entire region!$"

DFTPC1F_Interested::
# 119 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "What say you, interested?$"

DFTPC1F_MapIntro2::
# 122 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "I may still have one map\n"
	.string "left if you're interested…$"

DFTPC1F_NotInterestedText::
# 126 "data/maps/DewfordTown_PokemonCenter_1F/scripts.pory"
	.string "Hmph… Fine, have it your way.$"
