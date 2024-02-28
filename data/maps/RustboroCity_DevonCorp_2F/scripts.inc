RustboroCity_DevonCorp_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0


RustboroCity_DevonCorp_2F_OnTransition::
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	end


RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return


RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2:
	msgbox ResearchIntact, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_Betrayed::
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	msgbox RustboroCity_DevonCorp_2F_Text_Betrayed, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_MedicineScientist::
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_2
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewMedicine, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_2:
	msgbox ResearchDestroyed, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2:
	msgbox NotLettingDown, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
	lock
	faceplayer
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
	goto_if_set FLAG_OBTAINED_A_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4:
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
	msgbox FossilResearchAMess, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
	msgbox DevonShowAFossil, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7
	call Common_OpenBag
	switch VAR_ITEM_ID
	case 165, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11
	case 166, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12
	case 167, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13
	case 168, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_14
	case 169, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
	case 170, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
	case 171, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_17
	case 172, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_18
	case 173, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19
	case 174, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_20
	case 175, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_21
	case 0, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
	msgbox ThatsNotAFossil, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7:
	msgbox DevonShowAFossil_Decline, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11:
	call NoticesAFossil
	goto GiveHelixFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12:
	call NoticesAFossil
	goto GiveDomeFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13:
	call NoticesAFossil
	goto GiveAmberFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_14:
	call NoticesAFossil
	goto GiveRootFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15:
	call NoticesAFossil
	goto GiveClawFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16:
	call NoticesAFossil
	goto GiveArmorFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_17:
	call NoticesAFossil
	goto GiveSkullFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_18:
	call NoticesAFossil
	goto GiveCoverFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19:
	call NoticesAFossil
	goto GivePlumeFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_20:
	call NoticesAFossil
	goto GiveJawFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_21:
	call NoticesAFossil
	goto GiveSailFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22:
	goto RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4


NoticesAFossil::
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq NoticesAFossil_1
	return

NoticesAFossil_1:
	goto RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	return


GiveFossilFinish::
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_NPC
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	end


RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_NPC
	end


GiveHelixFossil::
	removeitem ITEM_HELIX_FOSSIL
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
	goto GiveFossilFinish
	return


GiveDomeFossil::
	removeitem ITEM_DOME_FOSSIL
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
	goto GiveFossilFinish
	return


GiveAmberFossil::
	removeitem ITEM_OLD_AMBER
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
	setvar VAR_WHICH_FOSSIL_REVIVED, 3
	goto GiveFossilFinish
	return


GiveRootFossil::
	removeitem ITEM_ROOT_FOSSIL
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 4
	goto GiveFossilFinish
	return


GiveClawFossil::
	removeitem ITEM_CLAW_FOSSIL
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 5
	goto GiveFossilFinish
	return


GiveArmorFossil::
	removeitem ITEM_ARMOR_FOSSIL
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 6
	goto GiveFossilFinish
	return


GiveSkullFossil::
	removeitem ITEM_SKULL_FOSSIL
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 7
	goto GiveFossilFinish
	return


GiveCoverFossil::
	removeitem ITEM_COVER_FOSSIL
	bufferitemname STR_VAR_1, ITEM_COVER_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 8
	goto GiveFossilFinish
	return


GivePlumeFossil::
	removeitem ITEM_PLUME_FOSSIL
	bufferitemname STR_VAR_1, ITEM_PLUME_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 9
	goto GiveFossilFinish
	return


GiveJawFossil::
	removeitem ITEM_JAW_FOSSIL
	bufferitemname STR_VAR_1, ITEM_JAW_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 10
	goto GiveFossilFinish
	return


GiveSailFossil::
	removeitem ITEM_SAIL_FOSSIL
	bufferitemname STR_VAR_1, ITEM_SAIL_FOSSIL
	setvar VAR_WHICH_FOSSIL_REVIVED, 11
	goto GiveFossilFinish
	return


RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
	switch VAR_WHICH_FOSSIL_REVIVED
	case 1, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_3
	case 2, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4
	case 3, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5
	case 4, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_6
	case 5, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_7
	case 6, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_8
	case 7, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_9
	case 8, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_10
	case 9, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_11
	case 10, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_12
	case 11, RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_13
RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1:
	end

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_3:
	goto OmanyteReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_4:
	goto KabutoReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_5:
	goto AerodactylReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_6:
	goto LileepReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_7:
	goto AnorithReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_8:
	goto CranidosReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_9:
	goto ShieldonReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_10:
	goto TirtougaReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_11:
	goto ArchenReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_12:
	goto TyruntReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_13:
	goto AmauraReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilMonReady_1


OmanyteReady::
	bufferspeciesname STR_VAR_2, SPECIES_OMANYTE
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OMANYTE
	givemon SPECIES_OMANYTE, 20
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OmanyteReady_2
OmanyteReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OmanyteReady_5
OmanyteReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

OmanyteReady_2:
	goto ReceiveFossilParty
	goto OmanyteReady_1

OmanyteReady_5:
	goto ReceiveFossilPC
	goto OmanyteReady_4


KabutoReady::
	bufferspeciesname STR_VAR_2, SPECIES_KABUTO
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KABUTO
	givemon SPECIES_KABUTO, 20
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq KabutoReady_2
KabutoReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq KabutoReady_5
KabutoReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

KabutoReady_2:
	goto ReceiveFossilParty
	goto KabutoReady_1

KabutoReady_5:
	goto ReceiveFossilPC
	goto KabutoReady_4


AerodactylReady::
	bufferspeciesname STR_VAR_2, SPECIES_AERODACTYL
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
	givemon SPECIES_AERODACTYL, 20
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AerodactylReady_2
AerodactylReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq AerodactylReady_5
AerodactylReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

AerodactylReady_2:
	goto ReceiveFossilParty
	goto AerodactylReady_1

AerodactylReady_5:
	goto ReceiveFossilPC
	goto AerodactylReady_4


LileepReady::
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
	givemon SPECIES_LILEEP, 20
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LileepReady_2
LileepReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LileepReady_5
LileepReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LileepReady_2:
	goto ReceiveFossilParty
	goto LileepReady_1

LileepReady_5:
	goto ReceiveFossilPC
	goto LileepReady_4


AnorithReady::
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
	givemon SPECIES_ANORITH, 20
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AnorithReady_2
AnorithReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq AnorithReady_5
AnorithReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

AnorithReady_2:
	goto ReceiveFossilParty
	goto AnorithReady_1

AnorithReady_5:
	goto ReceiveFossilPC
	goto AnorithReady_4


CranidosReady::
	bufferspeciesname STR_VAR_2, SPECIES_CRANIDOS
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CRANIDOS
	givemon SPECIES_CRANIDOS, 20
	bufferspeciesname STR_VAR_1, SPECIES_CRANIDOS
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CranidosReady_2
CranidosReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq CranidosReady_5
CranidosReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

CranidosReady_2:
	goto ReceiveFossilParty
	goto CranidosReady_1

CranidosReady_5:
	goto ReceiveFossilPC
	goto CranidosReady_4


ShieldonReady::
	bufferspeciesname STR_VAR_2, SPECIES_SHIELDON
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHIELDON
	givemon SPECIES_SHIELDON, 20
	bufferspeciesname STR_VAR_1, SPECIES_SHIELDON
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShieldonReady_2
ShieldonReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShieldonReady_5
ShieldonReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ShieldonReady_2:
	goto ReceiveFossilParty
	goto ShieldonReady_1

ShieldonReady_5:
	goto ReceiveFossilPC
	goto ShieldonReady_4


TirtougaReady::
	bufferspeciesname STR_VAR_2, SPECIES_TIRTOUGA
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TIRTOUGA
	givemon SPECIES_TIRTOUGA, 20
	bufferspeciesname STR_VAR_1, SPECIES_TIRTOUGA
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TirtougaReady_2
TirtougaReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TirtougaReady_5
TirtougaReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

TirtougaReady_2:
	goto ReceiveFossilParty
	goto TirtougaReady_1

TirtougaReady_5:
	goto ReceiveFossilPC
	goto TirtougaReady_4


ArchenReady::
	bufferspeciesname STR_VAR_2, SPECIES_ARCHEN
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHEN
	givemon SPECIES_ARCHEN, 20
	bufferspeciesname STR_VAR_1, SPECIES_ARCHEN
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ArchenReady_2
ArchenReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ArchenReady_5
ArchenReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ArchenReady_2:
	goto ReceiveFossilParty
	goto ArchenReady_1

ArchenReady_5:
	goto ReceiveFossilPC
	goto ArchenReady_4


TyruntReady::
	bufferspeciesname STR_VAR_2, SPECIES_TYRUNT
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRUNT
	givemon SPECIES_TYRUNT, 20
	bufferspeciesname STR_VAR_1, SPECIES_TYRUNT
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TyruntReady_2
TyruntReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TyruntReady_5
TyruntReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

TyruntReady_2:
	goto ReceiveFossilParty
	goto TyruntReady_1

TyruntReady_5:
	goto ReceiveFossilPC
	goto TyruntReady_4


AmauraReady::
	bufferspeciesname STR_VAR_2, SPECIES_AMAURA
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AMAURA
	givemon SPECIES_AMAURA, 20
	bufferspeciesname STR_VAR_1, SPECIES_AMAURA
	call ReceivedFossilMonFanfare
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AmauraReady_2
AmauraReady_1:
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq AmauraReady_5
AmauraReady_4:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

AmauraReady_2:
	goto ReceiveFossilParty
	goto AmauraReady_1

AmauraReady_5:
	goto ReceiveFossilPC
	goto AmauraReady_4


ReceiveFossilParty::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FinishReceivingFossilMon
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto FinishReceivingFossilMon
	end


ReceiveFossilPC::
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveFossilPC_2
ReceiveFossilPC_1:
	call Common_EventScript_NameReceivedBoxMon
	call Common_EventScript_TransferredToPC
	goto FinishReceivingFossilMon
	end

ReceiveFossilPC_2:
	call Common_EventScript_TransferredToPC
	goto FinishReceivingFossilMon
	goto ReceiveFossilPC_1


FinishReceivingFossilMon::
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release
	end


ReceivedFossilMonFanfare::
	playfanfare MUS_OBTAIN_ITEM
	message ReceivedMonFromResearcher
	waitmessage
	waitfanfare
	return


RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_NPC
	end


ResearchIntact::
	.string "Luckily much of my research is\n"
	.string "still intact.\l"
	.string "Pays to have external backups!$"

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon::
	.string "We're developing a device for talking\n"
	.string "with Pokémon.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_Betrayed::
	.string "I can't believe the person I worked\n"
	.string "with all these years turned out to be\l"
	.string "a Team Rocket spy…$"

RustboroCity_DevonCorp_2F_Text_DevelopNewMedicine::
	.string "I'm trying to develop a new medicine\n"
	.string "to increase the individual values\l"
	.string "of a Pokémon…\p"
	.string "But it's not going well.$"

ResearchDestroyed::
	.string "Much of my research got stolen…\n"
	.string "Why would Team Rocket do something\l"
	.string "like this?$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams::
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

NotLettingDown::
	.string "I'm not letting a minor setback\n"
	.string "like this impede my research!\p"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

DevonShowAFossil::
	.string "You look like an experienced traveler.\p"
	.string "Tell me, have you come across any\n"
	.string "fossils you would like to show me?$"

DevonShowAFossil_Decline::
	.string "Oh, that's a shame…$"

ThatsNotAFossil::
	.string "Um… I'm not sure why you're\n"
	.string "showing me that.\l"
	.string "That's not a Pokémon fossil…$"

FossilResearchAMess::
	.string "All of my fossil research is\n"
	.string "in shambles.\l"
	.string "How am I meant to sort this out…$"

FossilBroughtBackToLife::
	.string "Thanks for waiting!\p"
	.string "Your fossilized Pokémon has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient Pokémon.\n"
	.string "{STR_VAR_2}, it was!$"

ReceivedMonFromResearcher::
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the Devon researcher.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils::
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife::
	.string "Wait! That thing you have there…\n"
	.string "Is that an actual Pokémon fossil?\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo::
	.string "Oh, is that so?\p"
	.string "Devon's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher::
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the Devon researcher.$"

RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime::
	.string "The Fossil Regenerator, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"
