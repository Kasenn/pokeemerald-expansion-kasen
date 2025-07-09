Sandstone_Pokecenter_1F_MapScripts::
# 2 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SandstonePokeCenter1F_OnTransition
	.byte 0


SandstonePokeCenter1F_OnTransition::
# 6 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_RIVAL_MET_IN_SANDSTONE, SandstonePokeCenter1F_OnTransition_2
SandstonePokeCenter1F_OnTransition_1:
# 9 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SANDSTONE_CITY
# 10 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end

SandstonePokeCenter1F_OnTransition_2:
# 7 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
	goto SandstonePokeCenter1F_OnTransition_1


SandstoneCityPC_BunearyGirl::
# 15 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 16 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstoneCityPC_BunearyGirl_Text
# 17 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	return


SandstoneCityPC_Buneary::
# 24 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 25 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	faceplayer
# 26 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitse
# 27 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 28 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstoneCityPC_Buneary_Text_0, MSGBOX_DEFAULT
# 29 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmoncry
# 30 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	return


SandstonePokeCenter1F_Youngster::
# 34 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstonePokeCenter1F_Youngster_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_Pokefan::
# 38 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstonePokeCenter1F_Pokefan_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_StarterGift::
# 43 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 44 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	faceplayer
# 45 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox TryOutFeature, MSGBOX_YESNO
# 46 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SandstonePokeCenter1F_StarterGift_2
# 51 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SandstonePokeCenter1F_StarterGift_5
# 55 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	message WhichMonWouldYouTest
# 56 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 57 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_TESTMEGASTARTER, 0
# 58 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 0, SandstonePokeCenter1F_StarterGift_8
# 64 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 1, SandstonePokeCenter1F_StarterGift_9
# 69 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 2, SandstonePokeCenter1F_StarterGift_10
# 74 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 3, SandstonePokeCenter1F_StarterGift_11
# 79 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 4, SandstonePokeCenter1F_StarterGift_12
# 84 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 5, SandstonePokeCenter1F_StarterGift_13
# 89 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, SandstonePokeCenter1F_StarterGift_14
	return

SandstonePokeCenter1F_StarterGift_2:
# 47 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 48 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end

SandstonePokeCenter1F_StarterGift_5:
# 52 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox MustClearTowerFirst, MSGBOX_NPC
	end

SandstonePokeCenter1F_StarterGift_8:
# 60 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_DECIDUEYE, 40, ITEM_DECIDUEITE
# 61 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
# 62 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
# 63 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_9:
# 65 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_BLAZIKEN, 40, ITEM_BLAZIKENITE
# 66 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
# 67 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BLAZIKEN
# 68 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_10:
# 70 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_EMPOLEON, 40, ITEM_EMPOLEONITE
# 71 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
# 72 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
# 73 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_11:
# 75 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_CHESNAUGHT, 40, ITEM_CHESNAUGHTITE
# 76 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
# 77 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
# 78 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_12:
# 80 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_INCINEROAR, 40, ITEM_INCINEROARITE
# 81 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
# 82 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
# 83 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_13:
# 85 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_SWAMPERT, 40, ITEM_SWAMPERTITE
# 86 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SWAMPERT
# 87 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SWAMPERT
# 88 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_14:
# 90 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 91 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceiveMegaStarter::
# 109 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call ReceivedMegaMonFanfare
# 110 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ReceiveMegaStarter_2
ReceiveMegaStarter_1:
# 113 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ReceiveMegaStarter_5
ReceiveMegaStarter_4:
# 116 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ReceiveMegaStarter_2:
# 111 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaParty
	goto ReceiveMegaStarter_1

ReceiveMegaStarter_5:
# 114 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaPC
	goto ReceiveMegaStarter_4


ReceiveMegaParty::
# 121 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 122 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ReceiveMegaParty_2
# 127 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 128 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 129 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 130 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
# 131 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	end
	end

ReceiveMegaParty_2:
# 123 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 124 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceiveMegaPC::
# 135 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 136 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveMegaPC_2
# 142 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 143 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 144 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 145 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end

ReceiveMegaPC_2:
# 137 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 138 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 139 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceivedMegaMonFanfare::
# 150 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 151 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	message ReceivedMegaMon
# 152 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 153 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitfanfare
	return


SandstoneCityPC_Buneary_Text_0:
# 28 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Bi-bih!$"

SandstoneCityPC_BunearyGirl_Text::
# 19 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "There we go.\n"
	.string "Now that wasn't so bad, was it?$"

SandstonePokeCenter1F_Youngster_Text::
# 96 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I recently took one of my Pokémon back\n"
	.string "from the Pokémon Day Care and it had\l"
	.string "grown twice what I had expected!$"

SandstonePokeCenter1F_Pokefan_Text::
# 101 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Have you heard?\p"
	.string "Many stores have lowered the cost of\n"
	.string "Max Repels, making them more\l"
	.string "cost-effective than Super Repels.$"

ReceivedMegaMon::
# 157 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TryOutFeature::
# 161 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I'm a temporary NPC to help test out\n"
	.string "a feature.\p"
	.string "Would you like to test the feature?$"

MustClearTowerFirst::
# 166 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I'm sorry, but you are not ready\n"
	.string "for this feature yet.\l"
	.string "You must progress further in\l"
	.string "the story first.$"

WhichMonWouldYouTest::
# 172 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Which Pokémon would you like to test?$"
