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


SandstonePokeCenter1F_EventScript_Nurse::
# 15 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 18 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 19 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


SandstoneCityPC_BunearyGirl::
# 24 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 25 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstoneCityPC_BunearyGirl_Text
# 26 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	return


SandstoneCityPC_Buneary::
# 33 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 34 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitse
# 36 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
# 37 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstoneCityPC_Buneary_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmoncry
# 39 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	return


SandstonePokeCenter1F_Youngster::
# 43 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstonePokeCenter1F_Youngster_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_Pokefan::
# 47 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox SandstonePokeCenter1F_Pokefan_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_StarterGift::
# 52 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	lock
# 53 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	faceplayer
# 54 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox TryOutFeature, MSGBOX_YESNO
# 55 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SandstonePokeCenter1F_StarterGift_2
# 60 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SandstonePokeCenter1F_StarterGift_5
# 64 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	message WhichMonWouldYouTest
# 65 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 66 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	multichoice 23, 0, MULTI_TESTMEGASTARTER, 0
# 67 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	switch VAR_RESULT
# 68 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 0, SandstonePokeCenter1F_StarterGift_8
# 73 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 1, SandstonePokeCenter1F_StarterGift_9
# 78 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 2, SandstonePokeCenter1F_StarterGift_10
# 83 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 3, SandstonePokeCenter1F_StarterGift_11
# 88 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 4, SandstonePokeCenter1F_StarterGift_12
# 93 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case 5, SandstonePokeCenter1F_StarterGift_13
# 98 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	case MULTI_B_PRESSED, SandstonePokeCenter1F_StarterGift_14
	return

SandstonePokeCenter1F_StarterGift_2:
# 56 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 57 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end

SandstonePokeCenter1F_StarterGift_5:
# 61 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox MustClearTowerFirst, MSGBOX_NPC
	end

SandstonePokeCenter1F_StarterGift_8:
# 69 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_DECIDUEYE, 40, ITEM_DECIDUEITE
# 70 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
# 71 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
# 72 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_9:
# 74 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_BLAZIKEN, 40, ITEM_BLAZIKENITE
# 75 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
# 76 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BLAZIKEN
# 77 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_10:
# 79 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_EMPOLEON, 40, ITEM_EMPOLEONITE
# 80 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
# 81 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
# 82 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_11:
# 84 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_CHESNAUGHT, 40, ITEM_CHESNAUGHTITE
# 85 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
# 86 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
# 87 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_12:
# 89 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_INCINEROAR, 40, ITEM_INCINEROARITE
# 90 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
# 91 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
# 92 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_13:
# 94 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	givemon SPECIES_SWAMPERT, 40, ITEM_SWAMPERTITE
# 95 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SWAMPERT
# 96 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SWAMPERT
# 97 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_14:
# 99 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 100 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceiveMegaStarter::
# 118 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call ReceivedMegaMonFanfare
# 119 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ReceiveMegaStarter_2
ReceiveMegaStarter_1:
# 122 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ReceiveMegaStarter_5
ReceiveMegaStarter_4:
# 125 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ReceiveMegaStarter_2:
# 120 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaParty
	goto ReceiveMegaStarter_1

ReceiveMegaStarter_5:
# 123 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	goto ReceiveMegaPC
	goto ReceiveMegaStarter_4


ReceiveMegaParty::
# 130 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 131 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ReceiveMegaParty_2
# 136 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 137 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 138 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 139 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
# 140 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	end
	end

ReceiveMegaParty_2:
# 132 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 133 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceiveMegaPC::
# 144 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 145 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveMegaPC_2
# 151 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 152 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 153 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 154 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end

ReceiveMegaPC_2:
# 146 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 147 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	closemessage
# 148 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	release
	end


ReceivedMegaMonFanfare::
# 159 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	message ReceivedMegaMon
# 161 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitmessage
# 162 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	waitfanfare
	return


SandstoneCityPC_Buneary_Text_0:
# 37 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Bi-bih!$"

SandstoneCityPC_BunearyGirl_Text::
# 28 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "There we go.\n"
	.string "Now that wasn't so bad, was it?$"

SandstonePokeCenter1F_Youngster_Text::
# 105 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I recently took one of my Pokémon back\n"
	.string "from the Pokémon Day Care and it had\l"
	.string "grown twice what I had expected!$"

SandstonePokeCenter1F_Pokefan_Text::
# 110 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Have you heard?\p"
	.string "Many stores have lowered the cost of\n"
	.string "Max Repels, making them more\l"
	.string "cost-effective than Super Repels.$"

ReceivedMegaMon::
# 166 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Received {STR_VAR_1}!$"

TryOutFeature::
# 170 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I'm a temporary NPC to help test out\n"
	.string "a feature.\p"
	.string "Would you like to test the feature?$"

MustClearTowerFirst::
# 175 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "I'm sorry, but you are not ready\n"
	.string "for this feature yet.\l"
	.string "You must progress further in\l"
	.string "the story first.$"

WhichMonWouldYouTest::
# 181 "data/maps/Sandstone_Pokecenter_1F/scripts.pory"
	.string "Which Pokémon would you like to test?$"
