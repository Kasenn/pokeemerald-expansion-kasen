Sandstone_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SandstonePokeCenter1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Sandstone_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Sandstone_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
	.2byte 0


SandstonePokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_SANDSTONE_CITY
	call Common_EventScript_UpdateBrineyLocation
	end


SandstonePokeCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


SandstonePokeCenter1F_Youngster::
	msgbox SandstonePokeCenter1F_Youngster_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_Pokefan::
	msgbox SandstonePokeCenter1F_Pokefan_Text, MSGBOX_NPC
	end


SandstonePokeCenter1F_StarterGift::
	lock
	faceplayer
	msgbox TryOutFeature, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SandstonePokeCenter1F_StarterGift_2
	goto_if_unset FLAG_OBTAINED_MEGA_RING, SandstonePokeCenter1F_StarterGift_5
	message WhichMonWouldYouTest
	waitmessage
	multichoice 23, 0, MULTI_TESTMEGASTARTER, 0
	switch VAR_RESULT
	case 0, SandstonePokeCenter1F_StarterGift_8
	case 1, SandstonePokeCenter1F_StarterGift_9
	case 2, SandstonePokeCenter1F_StarterGift_10
	case 3, SandstonePokeCenter1F_StarterGift_11
	case 4, SandstonePokeCenter1F_StarterGift_12
	case 5, SandstonePokeCenter1F_StarterGift_13
	case MULTI_B_PRESSED, SandstonePokeCenter1F_StarterGift_14
	return

SandstonePokeCenter1F_StarterGift_2:
	closemessage
	release
	end

SandstonePokeCenter1F_StarterGift_5:
	msgbox MustClearTowerFirst, MSGBOX_NPC
	end

SandstonePokeCenter1F_StarterGift_8:
	givemon SPECIES_DECIDUEYE, 40, ITEM_DECIDUEITE
	bufferspeciesname STR_VAR_1, SPECIES_DECIDUEYE
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DECIDUEYE
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_9:
	givemon SPECIES_BLAZIKEN, 40, ITEM_BLAZIKENITE
	bufferspeciesname STR_VAR_1, SPECIES_BLAZIKEN
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_BLAZIKEN
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_10:
	givemon SPECIES_EMPOLEON, 40, ITEM_EMPOLEONITE
	bufferspeciesname STR_VAR_1, SPECIES_EMPOLEON
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_EMPOLEON
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_11:
	givemon SPECIES_CHESNAUGHT, 40, ITEM_CHESNAUGHTITE
	bufferspeciesname STR_VAR_1, SPECIES_CHESNAUGHT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CHESNAUGHT
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_12:
	givemon SPECIES_INCINEROAR, 40, ITEM_INCINEROARITE
	bufferspeciesname STR_VAR_1, SPECIES_INCINEROAR
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_INCINEROAR
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_13:
	givemon SPECIES_SWAMPERT, 40, ITEM_SWAMPERTITE
	bufferspeciesname STR_VAR_1, SPECIES_SWAMPERT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SWAMPERT
	goto ReceiveMegaStarter
	return

SandstonePokeCenter1F_StarterGift_14:
	closemessage
	release
	end


ReceiveMegaStarter::
	call ReceivedMegaMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ReceiveMegaStarter_2
ReceiveMegaStarter_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ReceiveMegaStarter_5
ReceiveMegaStarter_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ReceiveMegaStarter_2:
	goto ReceiveMegaParty
	goto ReceiveMegaStarter_1

ReceiveMegaStarter_5:
	goto ReceiveMegaPC
	goto ReceiveMegaStarter_4


ReceiveMegaParty::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq ReceiveMegaParty_2
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	closemessage
	release
	end
	end

ReceiveMegaParty_2:
	closemessage
	release
	end


ReceiveMegaPC::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveMegaPC_2
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	closemessage
	release
	end

ReceiveMegaPC_2:
	call Common_EventScript_TransferredToPC
	closemessage
	release
	end


ReceivedMegaMonFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message ReceivedMegaMon
	waitmessage
	waitfanfare
	return


SandstonePokeCenter1F_Youngster_Text::
	.string "I recently took one of my Pokémon back\n"
	.string "from the Pokémon Day Care and it had\l"
	.string "grown twice what I had expected!$"

SandstonePokeCenter1F_Pokefan_Text::
	.string "Have you heard?\p"
	.string "Many stores have lowered the cost of\n"
	.string "Max Repels, making them more\l"
	.string "cost-effective than Super Repels.$"

ReceivedMegaMon::
	.string "Received {STR_VAR_1}!$"

TryOutFeature::
	.string "I'm a temporary NPC to help test out\n"
	.string "a feature.\p"
	.string "Would you like to test the feature?$"

MustClearTowerFirst::
	.string "I'm sorry, but you are not ready\n"
	.string "for this feature yet.\l"
	.string "You must progress further in\l"
	.string "the story first.$"

WhichMonWouldYouTest::
	.string "Which Pokémon would you like to test?$"
