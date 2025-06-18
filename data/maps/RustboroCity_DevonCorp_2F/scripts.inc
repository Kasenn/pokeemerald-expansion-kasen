RustboroCity_DevonCorp_2F_MapScripts::
# 9 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_gt RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 12 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 12, RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 13, RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 14, RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 15, RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	addvar VAR_WHICH_FOSSIL_REVIVED, ITEM_HELIX_FOSSIL - 1
	goto RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 12
	goto_if_lt RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	goto RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 11 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call SetFossilReady
	goto RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_6

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 13 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOZOLT
	return

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 14 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOZOLT
	return

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_DRACOVISH
	return

RustboroCity_DevonCorp_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCTOVISH
	return


SetFossilReady::
# 21 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return


RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2
RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_1:
# 27 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_4
# 31 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_NPC
	return

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2:
# 26 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_1

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_4:
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox ResearchIntact, MSGBOX_NPC
	return


RustboroCity_DevonCorp_2F_EventScript_Betrayed::
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_Betrayed_2
RustboroCity_DevonCorp_2F_EventScript_Betrayed_1:
# 37 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_Betrayed, MSGBOX_NPC
	return

RustboroCity_DevonCorp_2F_EventScript_Betrayed_2:
# 36 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_Betrayed_1


RustboroCity_DevonCorp_2F_EventScript_MedicineScientist::
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_2
RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_1:
# 42 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_4
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewMedicine, MSGBOX_NPC
	return

RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_2:
# 41 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_1

RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_4:
# 43 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox ResearchDestroyed, MSGBOX_NPC
	return


RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2
RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_1:
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_4
# 56 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_NPC
	return

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2:
# 51 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call SetFossilReady
	goto RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_1

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_4:
# 53 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox NotLettingDown, MSGBOX_NPC
	return


RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 61 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 67 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4:
# 70 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8
# 75 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils
# 76 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox DevonShowAFossil, MSGBOX_YESNO
# 77 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11
# 82 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_OpenBag
# 83 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_ITEM_ID
# 84 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_HELIX_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 85 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_DOME_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 86 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_OLD_AMBER, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 87 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_ROOT_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_CLAW_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_ARMOR_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 90 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_SKULL_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 91 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_COVER_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_PLUME_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_JAW_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_SAIL_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_FOSSILIZED_BIRD, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_FOSSILIZED_FISH, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_FOSSILIZED_DRAKE, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case ITEM_FOSSILIZED_DINO, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
# 101 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_17
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox ThatsNotAFossil, MSGBOX_NPC
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10:
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 62 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilResearchAMess, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
# 68 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_FossilMonReady
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_8:
# 71 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox Devon_Text_FossilRegeneratorTakesTime, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11:
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox DevonShowAFossil_Decline, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15:
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto NoticesAFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16:
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GalarFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_17:
# 102 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_DeclineGiveFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_10


GalarFossil::
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, 0
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_TEMP_5, VAR_ITEM_ID
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FirstHalf
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_OpenBag
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_BIRD
	goto_if_eq GalarFossil_4
GalarFossil_3:
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_DRAKE
	goto_if_eq GalarFossil_7
GalarFossil_1:
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_BIRD
	goto_if_eq GalarFossil_13
GalarFossil_12:
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_DINO
	goto_if_eq GalarFossil_16
GalarFossil_10:
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_FISH
	goto_if_eq GalarFossil_22
GalarFossil_21:
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_DRAKE
	goto_if_eq GalarFossil_25
GalarFossil_19:
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_FISH
	goto_if_eq GalarFossil_31
GalarFossil_30:
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, ITEM_FOSSILIZED_DINO
	goto_if_eq GalarFossil_34
GalarFossil_28:
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_6, 0
	goto_if_ne GalarFossil_38
GalarFossil_37:
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, VAR_ITEM_ID
	goto_if_eq GalarFossil_41
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox NotSureWhatToMake, MSGBOX_NPC
	end

GalarFossil_2:
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_DRACOZOLT
	goto GalarFossil_1

GalarFossil_4:
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DRAKE
	goto_if_eq GalarFossil_2
	goto GalarFossil_3

GalarFossil_7:
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_BIRD
	goto_if_eq GalarFossil_2
	goto GalarFossil_1

GalarFossil_11:
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ARCTOZOLT
	goto GalarFossil_10

GalarFossil_13:
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DINO
	goto_if_eq GalarFossil_11
	goto GalarFossil_12

GalarFossil_16:
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_BIRD
	goto_if_eq GalarFossil_11
	goto GalarFossil_10

GalarFossil_20:
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_DRACOVISH
	goto GalarFossil_19

GalarFossil_22:
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DRAKE
	goto_if_eq GalarFossil_20
	goto GalarFossil_21

GalarFossil_25:
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_FISH
	goto_if_eq GalarFossil_20
	goto GalarFossil_19

GalarFossil_29:
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_6, SPECIES_ARCTOVISH
	goto GalarFossil_28

GalarFossil_31:
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_DINO
	goto_if_eq GalarFossil_29
	goto GalarFossil_30

GalarFossil_34:
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, ITEM_FOSSILIZED_FISH
	goto_if_eq GalarFossil_29
	goto GalarFossil_28

GalarFossil_38:
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateGalarianFossil
	goto GalarFossil_37

GalarFossil_41:
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox SameArtifactTwice, MSGBOX_NPC
	end


CreateGalarianFossil::
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife2, MSGBOX_YESNO
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CreateGalarianFossil_2
CreateGalarianFossil_1:
# 148 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem VAR_TEMP_5
# 149 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem VAR_ITEM_ID
# 150 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_5
# 151 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, VAR_ITEM_ID
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_WHICH_FOSSIL_REVIVED, VAR_TEMP_6
# 153 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcherGalar
# 154 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
# 155 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	return

CreateGalarianFossil_2:
# 146 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_DeclineGiveFossil
	goto CreateGalarianFossil_1


NoticesAFossil::
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NoticesAFossil_1
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem VAR_ITEM_ID
# 165 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_WHICH_FOSSIL_REVIVED, VAR_ITEM_ID
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher
# 168 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	return

NoticesAFossil_1:
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_DeclineGiveFossil
	return


Devon_DeclineGiveFossil::
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_NPC
	end


Devon_FossilMonReady::
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	callnative ScrCmd_FossilToPokemon
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_TEMP_TRANSFERRED_SPECIES
# 180 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon VAR_TEMP_TRANSFERRED_SPECIES, 20
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_TRANSFERRED_SPECIES
# 183 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message ReceivedMonFromResearcher
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 186 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
# 187 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Devon_FossilMonReady_2
Devon_FossilMonReady_1:
# 190 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Devon_FossilMonReady_5
Devon_FossilMonReady_4:
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Devon_FossilMonReady_2:
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_5:
# 191 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto Devon_FossilMonReady_4


ReceiveFossilParty::
# 198 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 199 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FinishReceivingFossilMon
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 201 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 202 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto FinishReceivingFossilMon
	end


ReceiveFossilPC::
# 206 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 207 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveFossilPC_2
ReceiveFossilPC_1:
# 211 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto FinishReceivingFossilMon
	end

ReceiveFossilPC_2:
# 208 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 209 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto FinishReceivingFossilMon
	goto ReceiveFossilPC_1


FinishReceivingFossilMon::
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 218 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 219 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils::
# 223 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife::
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
	.string "Is that an actual Pokémon fossil?\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife2::
# 236 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! Those things you have there…\n"
	.string "These might actually be a whole fossil\l"
	.string "of a Pokémon!\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo::
# 245 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
	.string "Devon's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher::
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the Devon researcher.$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcherGalar::
# 256 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} and\n"
	.string "{STR_VAR_2} to the Devon researcher.$"

Devon_Text_FossilRegeneratorTakesTime::
# 262 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Fossil Regenerator, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

DevonShowAFossil::
# 270 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You look like an experienced traveler.\p"
	.string "Tell me, have you come across any\n"
	.string "fossils you would like to show me?$"

DevonShowAFossil_Decline::
# 275 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, that's a shame…$"

ThatsNotAFossil::
# 278 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Um… I'm not sure why you're\n"
	.string "showing me that.\l"
	.string "That's not a Pokémon fossil…$"

FossilResearchAMess::
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "All of my fossil research is\n"
	.string "in shambles.\l"
	.string "How am I meant to sort this out…$"

FossilBroughtBackToLife::
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
	.string "Your fossilized Pokémon has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient Pokémon.\n"
	.string "{STR_VAR_2}, it was!$"

ReceivedMonFromResearcher::
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the Devon researcher.$"

FirstHalf::
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That fossil looks to be one half\n"
	.string "of a complete fossil.\p"
	.string "If you can provide me with the other\n"
	.string "half, I believe we may be able to\l"
	.string "create something out of this.$"

NotSureWhatToMake::
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm sorry, but these two don't\n"
	.string "seem to match.$"

SameArtifactTwice::
# 310 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It appears you have shown me the same\n"
	.string "fossil twice.\p"
	.string "I'm sorry, but I can't work like\n"
	.string "this.$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams::
# 316 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

NotLettingDown::
# 322 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm not letting a minor setback\n"
	.string "like this impede my research!\p"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewMedicine::
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new medicine\n"
	.string "to increase the individual values\l"
	.string "of a Pokémon…\p"
	.string "But it's not going well.$"

ResearchDestroyed::
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Much of my research got stolen…\n"
	.string "Why would Team Rocket do something\l"
	.string "like this?$"

ResearchIntact::
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Luckily much of my research is\n"
	.string "still intact.\l"
	.string "Pays to have external backups!$"

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon::
# 346 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
	.string "with Pokémon.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_Betrayed::
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can't believe the person I worked\n"
	.string "with all these years turned out to be\l"
	.string "a Team Rocket spy…$"
