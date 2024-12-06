Sandstone_Pokecenter_1F_MapScripts::
# 2 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandstonePokeCenter1F_OnTransition
# 3 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sandstone_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sandstone_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
# 5 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
# 6 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 10, AutomaticUpdate3
# 7 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 11, AutomaticUpdate4
# 8 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 12, AutomaticUpdate5
	.2byte 0


SandstonePokeCenter1F_OnTransition::
# 14 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_RIVAL_MET_IN_SANDSTONE, SandstonePokeCenter1F_OnTransition_2
SandstonePokeCenter1F_OnTransition_1:
# 17 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SANDSTONE_CITY
# 18 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end

SandstonePokeCenter1F_OnTransition_2:
# 15 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SandstonePokeCenter1F_OnTransition_1


SandstonePokeCenter1F_EventScript_Nurse::
# 23 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 24 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 25 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 26 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 27 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


SandstoneCityPC_BunearyGirl::
# 32 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 33 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstoneCityPC_BunearyGirl_Text
# 34 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	return


SandstoneCityPC_Buneary::
# 41 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 42 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	faceplayer
# 43 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitse
# 44 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 45 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstoneCityPC_Buneary_Text_0, MSGBOX_DEFAULT
# 46 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmoncry
# 47 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	return


SandstonePokeCenter1F_Youngster::
# 51 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstonePokeCenter1F_Youngster_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_Pokefan::
# 55 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstonePokeCenter1F_Pokefan_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_StarterGift::
# 60 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 61 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	faceplayer
# 62 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox TryOutFeature, MSGBOX_YESNO
# 63 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SandstonePokeCenter1F_StarterGift_2
# 68 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SandstonePokeCenter1F_StarterGift_5
# 72 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	message WhichMonWouldYouTest
# 73 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 74 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_TESTMEGASTARTER, 0
# 75 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 0, SandstonePokeCenter1F_StarterGift_8
# 81 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 1, SandstonePokeCenter1F_StarterGift_9
# 86 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 2, SandstonePokeCenter1F_StarterGift_10
# 91 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 3, SandstonePokeCenter1F_StarterGift_11
# 96 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 4, SandstonePokeCenter1F_StarterGift_12
# 101 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 5, SandstonePokeCenter1F_StarterGift_13
# 106 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, SandstonePokeCenter1F_StarterGift_14
	return

SandstonePokeCenter1F_StarterGift_2:
# 64 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 65 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end

SandstonePokeCenter1F_StarterGift_5:
# 69 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox MustClearTowerFirst, MSGBOX_NPC
	end

SandstonePokeCenter1F_StarterGift_8:
# 77 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_DECIDUEYE, 40, ITEM_DECIDUEITE
# 78 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
# 79 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
# 80 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_9:
# 82 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_BLAZIKEN, 40, ITEM_BLAZIKENITE
# 83 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
# 84 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BLAZIKEN
# 85 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_10:
# 87 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_EMPOLEON, 40, ITEM_EMPOLEONITE
# 88 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
# 89 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
# 90 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_11:
# 92 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_CHESNAUGHT, 40, ITEM_CHESNAUGHTITE
# 93 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
# 94 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
# 95 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_12:
# 97 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_INCINEROAR, 40, ITEM_INCINEROARITE
# 98 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
# 99 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
# 100 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_13:
# 102 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_SWAMPERT, 40, ITEM_SWAMPERTITE
# 103 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SWAMPERT
# 104 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SWAMPERT
# 105 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_14:
# 107 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 108 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceiveMegaStarter::
# 126 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call ReceivedMegaMonFanfare
# 127 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ReceiveMegaStarter_2
ReceiveMegaStarter_1:
# 130 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ReceiveMegaStarter_5
ReceiveMegaStarter_4:
# 133 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ReceiveMegaStarter_2:
# 128 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaParty
	goto ReceiveMegaStarter_1

ReceiveMegaStarter_5:
# 131 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaPC
	goto ReceiveMegaStarter_4


ReceiveMegaParty::
# 138 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 139 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ReceiveMegaParty_2
# 144 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 145 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 146 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 147 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
# 148 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	end
	end

ReceiveMegaParty_2:
# 140 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 141 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceiveMegaPC::
# 152 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 153 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveMegaPC_2
# 159 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 160 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 161 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 162 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end

ReceiveMegaPC_2:
# 154 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 155 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 156 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceivedMegaMonFanfare::
# 167 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	message ReceivedMegaMon
# 169 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 170 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitfanfare
	return


SandstoneCityPC_Buneary_Text_0:
# 45 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Bi-bih!$"

SandstoneCityPC_BunearyGirl_Text::
# 36 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "There we go.\n"
	.string "Now that wasn't so bad, was it?$"

SandstonePokeCenter1F_Youngster_Text::
# 113 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I recently took one of my Pokémon back\n"
	.string "from the Pokémon Day Care and it had\l"
	.string "grown twice what I had expected!$"

SandstonePokeCenter1F_Pokefan_Text::
# 118 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Have you heard?\p"
	.string "Many stores have lowered the cost of\n"
	.string "Max Repels, making them more\l"
	.string "cost-effective than Super Repels.$"

ReceivedMegaMon::
# 174 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TryOutFeature::
# 178 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I'm a temporary NPC to help test out\n"
	.string "a feature.\p"
	.string "Would you like to test the feature?$"

MustClearTowerFirst::
# 183 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I'm sorry, but you are not ready\n"
	.string "for this feature yet.\l"
	.string "You must progress further in\l"
	.string "the story first.$"

WhichMonWouldYouTest::
# 189 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Which Pokémon would you like to test?$"
