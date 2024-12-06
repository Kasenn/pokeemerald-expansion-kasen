RustboroCity_DevonCorp_2F_MapScripts::
# 2 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0


RustboroCity_DevonCorp_2F_OnTransition::
# 6 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	end


RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
# 10 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return


RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
# 15 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 16 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2
# 20 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist_2:
# 17 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox ResearchIntact, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_Betrayed::
# 34 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 35 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_Betrayed, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_MedicineScientist::
# 44 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 45 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_2
# 49 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewMedicine, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_MedicineScientist_2:
# 46 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox ResearchDestroyed, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
# 64 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
# 65 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2
# 69 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist_2:
# 66 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox NotLettingDown, MSGBOX_NPC
	end


RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
# 88 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_unset FLAG_DEVON_RESCUED, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2
# 92 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	lock
# 93 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	faceplayer
# 94 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 2, Devon_FossilMonReady
# 95 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_FOSSIL_RESURRECTION_STATE, 1, Devon_FossilStillRegenerating
# 96 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
# 97 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_set FLAG_OBTAINED_A_FOSSIL, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5
RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4:
# 152 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_2:
# 89 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilResearchAMess, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_5:
# 98 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox DevonShowAFossil, MSGBOX_YESNO
# 99 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7
# 104 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_OpenBag
# 105 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_ITEM_ID
# 106 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 165, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11
# 109 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 166, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12
# 112 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 167, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13
# 115 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 168, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_14
# 118 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 169, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15
# 121 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 170, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16
# 124 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 171, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_17
# 127 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 172, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_18
# 130 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 173, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19
# 133 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 174, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_20
# 136 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 175, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_21
# 139 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 176, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
# 140 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 177, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
# 141 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 178, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
# 142 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 179, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22
# 144 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 0, RustboroCity_DevonCorp_2F_EventScript_FossilScientist_23
# 147 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox ThatsNotAFossil, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_7:
# 100 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox DevonShowAFossil_Decline, MSGBOX_NPC
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_11:
# 107 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 108 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveHelixFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_12:
# 110 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 111 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveDomeFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_13:
# 113 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 114 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveAmberFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_14:
# 116 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 117 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveRootFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_15:
# 119 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 120 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveClawFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_16:
# 122 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 123 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveArmorFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_17:
# 125 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 126 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveSkullFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_18:
# 128 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 129 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveCoverFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_19:
# 131 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 132 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GivePlumeFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_20:
# 134 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 135 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveJawFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_21:
# 137 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAFossil
# 138 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveSailFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_22:
# 143 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GalarFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4

RustboroCity_DevonCorp_2F_EventScript_FossilScientist_23:
# 145 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_DeclineGiveFossil
	goto RustboroCity_DevonCorp_2F_EventScript_FossilScientist_4


GalarFossil::
# 157 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	copyvar VAR_TEMP_5, VAR_ITEM_ID
# 158 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FirstHalf
# 159 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_OpenBag
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 176
	goto_if_eq GalarFossil_3
GalarFossil_1:
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 178
	goto_if_eq GalarFossil_8
GalarFossil_6:
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 176
	goto_if_eq GalarFossil_13
GalarFossil_11:
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 179
	goto_if_eq GalarFossil_18
GalarFossil_16:
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 177
	goto_if_eq GalarFossil_23
GalarFossil_21:
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 178
	goto_if_eq GalarFossil_28
GalarFossil_26:
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 177
	goto_if_eq GalarFossil_33
GalarFossil_31:
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 179
	goto_if_eq GalarFossil_38
GalarFossil_36:
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 176
	goto_if_eq GalarFossil_43
GalarFossil_41:
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 177
	goto_if_eq GalarFossil_48
GalarFossil_46:
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 178
	goto_if_eq GalarFossil_53
GalarFossil_51:
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_TEMP_5, 179
	goto_if_eq GalarFossil_58
GalarFossil_56:
# 200 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox NotSureWhatToMake, MSGBOX_NPC
	end

GalarFossil_2:
# 161 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateDracozolt
	goto GalarFossil_1

GalarFossil_3:
# 160 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 178
	goto_if_eq GalarFossil_2
	goto GalarFossil_1

GalarFossil_7:
# 164 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateDracozolt
	goto GalarFossil_6

GalarFossil_8:
# 163 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 176
	goto_if_eq GalarFossil_7
	goto GalarFossil_6

GalarFossil_12:
# 167 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateArctozolt
	goto GalarFossil_11

GalarFossil_13:
# 166 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 179
	goto_if_eq GalarFossil_12
	goto GalarFossil_11

GalarFossil_17:
# 170 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateArctozolt
	goto GalarFossil_16

GalarFossil_18:
# 169 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 176
	goto_if_eq GalarFossil_17
	goto GalarFossil_16

GalarFossil_22:
# 173 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateDracovish
	goto GalarFossil_21

GalarFossil_23:
# 172 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 178
	goto_if_eq GalarFossil_22
	goto GalarFossil_21

GalarFossil_27:
# 176 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateDracovish
	goto GalarFossil_26

GalarFossil_28:
# 175 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 177
	goto_if_eq GalarFossil_27
	goto GalarFossil_26

GalarFossil_32:
# 179 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateArctovish
	goto GalarFossil_31

GalarFossil_33:
# 178 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 179
	goto_if_eq GalarFossil_32
	goto GalarFossil_31

GalarFossil_37:
# 182 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CreateArctovish
	goto GalarFossil_36

GalarFossil_38:
# 181 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 177
	goto_if_eq GalarFossil_37
	goto GalarFossil_36

GalarFossil_42:
# 185 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox SameArtifactTwice, MSGBOX_NPC
	end

GalarFossil_43:
# 184 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 176
	goto_if_eq GalarFossil_42
	goto GalarFossil_41

GalarFossil_47:
# 189 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox SameArtifactTwice, MSGBOX_NPC
	end

GalarFossil_48:
# 188 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 177
	goto_if_eq GalarFossil_47
	goto GalarFossil_46

GalarFossil_52:
# 193 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox SameArtifactTwice, MSGBOX_NPC
	end

GalarFossil_53:
# 192 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 178
	goto_if_eq GalarFossil_52
	goto GalarFossil_51

GalarFossil_57:
# 197 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox SameArtifactTwice, MSGBOX_NPC
	end

GalarFossil_58:
# 196 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_ITEM_ID, 179
	goto_if_eq GalarFossil_57
	goto GalarFossil_56


CreateDracozolt::
# 212 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAGalarFossil
# 213 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveDracozoltFossils
	return


CreateArctozolt::
# 216 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAGalarFossil
# 217 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveArctozoltFossils
	return


CreateDracovish::
# 220 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAGalarFossil
# 221 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveDracovishFossils
	return


CreateArctovish::
# 224 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call NoticesAGalarFossil
# 225 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveArctovishFossils
	return


NoticesAFossil::
# 241 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
# 242 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NoticesAFossil_1
	return

NoticesAFossil_1:
# 243 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_DeclineGiveFossil
	return


NoticesAGalarFossil::
# 250 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife2, MSGBOX_YESNO
# 251 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq NoticesAGalarFossil_1
	return

NoticesAGalarFossil_1:
# 252 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Devon_DeclineGiveFossil
	return


GiveFossilFinish::
# 259 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_NPC
# 260 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	end


GiveGalarFossilFinish::
# 264 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcherGalar, MSGBOX_NPC
# 265 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	end


Devon_DeclineGiveFossil::
# 269 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_NPC
	end


Devon_FossilStillRegenerating::
# 273 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox Devon_Text_FossilRegeneratorTakesTime, MSGBOX_NPC
	end


GiveHelixFossil::
# 281 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 282 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HELIX_FOSSIL
# 283 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
# 284 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveDomeFossil::
# 287 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 288 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_DOME_FOSSIL
# 289 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
# 290 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveAmberFossil::
# 293 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 294 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_OLD_AMBER
# 295 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 3
# 296 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveRootFossil::
# 299 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 300 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ROOT_FOSSIL
# 301 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 4
# 302 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveClawFossil::
# 305 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 306 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CLAW_FOSSIL
# 307 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 5
# 308 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveArmorFossil::
# 311 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
# 312 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ARMOR_FOSSIL
# 313 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 6
# 314 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveSkullFossil::
# 317 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
# 318 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SKULL_FOSSIL
# 319 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 7
# 320 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveCoverFossil::
# 323 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
# 324 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_COVER_FOSSIL
# 325 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 8
# 326 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GivePlumeFossil::
# 329 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
# 330 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PLUME_FOSSIL
# 331 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 9
# 332 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveJawFossil::
# 335 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 336 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_JAW_FOSSIL
# 337 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 10
# 338 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveSailFossil::
# 341 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 342 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_SAIL_FOSSIL
# 343 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 11
# 344 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveFossilFinish
	return


GiveDracozoltFossils::
# 347 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_BIRD
# 348 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
# 349 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_BIRD
# 350 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DRAKE
# 351 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 12
# 352 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveGalarFossilFinish
	return


GiveArctozoltFossils::
# 355 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_BIRD
# 356 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DINO
# 357 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_BIRD
# 358 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DINO
# 359 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 13
# 360 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveGalarFossilFinish
	return


GiveDracovishFossils::
# 363 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_FISH
# 364 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
# 365 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_FISH
# 366 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DRAKE
# 367 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 14
# 368 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveGalarFossilFinish
	return


GiveArctovishFossils::
# 371 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_FISH
# 372 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
# 373 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_FOSSILIZED_FISH
# 374 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_FOSSILIZED_DRAKE
# 375 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 15
# 376 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto GiveGalarFossilFinish
	return


Devon_FossilMonReady::
# 382 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	switch VAR_WHICH_FOSSIL_REVIVED
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 1, Devon_FossilMonReady_3
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 2, Devon_FossilMonReady_4
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 3, Devon_FossilMonReady_5
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 4, Devon_FossilMonReady_6
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 5, Devon_FossilMonReady_7
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 6, Devon_FossilMonReady_8
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 7, Devon_FossilMonReady_9
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 8, Devon_FossilMonReady_10
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 9, Devon_FossilMonReady_11
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 10, Devon_FossilMonReady_12
# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 11, Devon_FossilMonReady_13
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 12, Devon_FossilMonReady_14
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 13, Devon_FossilMonReady_15
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 14, Devon_FossilMonReady_16
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	case 15, Devon_FossilMonReady_17
Devon_FossilMonReady_1:
	end

Devon_FossilMonReady_3:
# 383 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto OmanyteReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_4:
# 384 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto KabutoReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_5:
# 385 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto AerodactylReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_6:
# 386 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto LileepReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_7:
# 387 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto AnorithReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_8:
# 388 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto CranidosReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_9:
# 389 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ShieldonReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_10:
# 390 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto TirtougaReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_11:
# 391 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ArchenReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_12:
# 392 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto TyruntReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_13:
# 393 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto AmauraReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_14:
# 394 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto DracozoltReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_15:
# 395 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ArctozoltReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_16:
# 396 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto DracovishReady
	goto Devon_FossilMonReady_1

Devon_FossilMonReady_17:
# 397 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ArctovishReady
	goto Devon_FossilMonReady_1


OmanyteReady::
# 414 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_OMANYTE
# 415 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 416 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_OMANYTE
# 417 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_OMANYTE, 20
# 418 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 419 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 420 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OmanyteReady_2
OmanyteReady_1:
# 423 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OmanyteReady_5
OmanyteReady_4:
# 426 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

OmanyteReady_2:
# 421 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto OmanyteReady_1

OmanyteReady_5:
# 424 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto OmanyteReady_4


KabutoReady::
# 431 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_KABUTO
# 432 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 433 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_KABUTO
# 434 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_KABUTO, 20
# 435 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 436 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 437 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq KabutoReady_2
KabutoReady_1:
# 440 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq KabutoReady_5
KabutoReady_4:
# 443 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

KabutoReady_2:
# 438 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto KabutoReady_1

KabutoReady_5:
# 441 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto KabutoReady_4


AerodactylReady::
# 448 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AERODACTYL
# 449 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 450 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AERODACTYL
# 451 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AERODACTYL, 20
# 452 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AERODACTYL
# 453 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 454 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AerodactylReady_2
AerodactylReady_1:
# 457 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq AerodactylReady_5
AerodactylReady_4:
# 460 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

AerodactylReady_2:
# 455 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto AerodactylReady_1

AerodactylReady_5:
# 458 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto AerodactylReady_4


LileepReady::
# 465 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_LILEEP
# 466 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 467 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_LILEEP
# 468 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_LILEEP, 20
# 469 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 470 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 471 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LileepReady_2
LileepReady_1:
# 474 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LileepReady_5
LileepReady_4:
# 477 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

LileepReady_2:
# 472 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto LileepReady_1

LileepReady_5:
# 475 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto LileepReady_4


AnorithReady::
# 482 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ANORITH
# 483 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 484 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ANORITH
# 485 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ANORITH, 20
# 486 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 487 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 488 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AnorithReady_2
AnorithReady_1:
# 491 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq AnorithReady_5
AnorithReady_4:
# 494 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

AnorithReady_2:
# 489 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto AnorithReady_1

AnorithReady_5:
# 492 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto AnorithReady_4


CranidosReady::
# 499 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_CRANIDOS
# 500 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 501 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_CRANIDOS
# 502 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_CRANIDOS, 20
# 503 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CRANIDOS
# 504 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 505 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq CranidosReady_2
CranidosReady_1:
# 508 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq CranidosReady_5
CranidosReady_4:
# 511 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

CranidosReady_2:
# 506 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto CranidosReady_1

CranidosReady_5:
# 509 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto CranidosReady_4


ShieldonReady::
# 516 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SHIELDON
# 517 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 518 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_SHIELDON
# 519 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_SHIELDON, 20
# 520 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SHIELDON
# 521 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 522 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShieldonReady_2
ShieldonReady_1:
# 525 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShieldonReady_5
ShieldonReady_4:
# 528 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ShieldonReady_2:
# 523 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto ShieldonReady_1

ShieldonReady_5:
# 526 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto ShieldonReady_4


TirtougaReady::
# 533 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TIRTOUGA
# 534 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 535 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TIRTOUGA
# 536 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TIRTOUGA, 20
# 537 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TIRTOUGA
# 538 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 539 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TirtougaReady_2
TirtougaReady_1:
# 542 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TirtougaReady_5
TirtougaReady_4:
# 545 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

TirtougaReady_2:
# 540 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto TirtougaReady_1

TirtougaReady_5:
# 543 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto TirtougaReady_4


ArchenReady::
# 550 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCHEN
# 551 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 552 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCHEN
# 553 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCHEN, 20
# 554 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARCHEN
# 555 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 556 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ArchenReady_2
ArchenReady_1:
# 559 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ArchenReady_5
ArchenReady_4:
# 562 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ArchenReady_2:
# 557 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto ArchenReady_1

ArchenReady_5:
# 560 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto ArchenReady_4


TyruntReady::
# 567 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TYRUNT
# 568 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 569 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_TYRUNT
# 570 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_TYRUNT, 20
# 571 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TYRUNT
# 572 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 573 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TyruntReady_2
TyruntReady_1:
# 576 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TyruntReady_5
TyruntReady_4:
# 579 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

TyruntReady_2:
# 574 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto TyruntReady_1

TyruntReady_5:
# 577 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto TyruntReady_4


AmauraReady::
# 584 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_AMAURA
# 585 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 586 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_AMAURA
# 587 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_AMAURA, 20
# 588 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_AMAURA
# 589 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 590 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq AmauraReady_2
AmauraReady_1:
# 593 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq AmauraReady_5
AmauraReady_4:
# 596 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

AmauraReady_2:
# 591 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto AmauraReady_1

AmauraReady_5:
# 594 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto AmauraReady_4


DracozoltReady::
# 601 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DRACOZOLT
# 602 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 603 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRACOZOLT
# 604 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_DRACOZOLT, 20
# 605 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DRACOZOLT
# 606 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 607 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DracozoltReady_2
DracozoltReady_1:
# 610 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DracozoltReady_5
DracozoltReady_4:
# 613 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

DracozoltReady_2:
# 608 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto DracozoltReady_1

DracozoltReady_5:
# 611 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto DracozoltReady_4


ArctozoltReady::
# 618 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCTOZOLT
# 619 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 620 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCTOZOLT
# 621 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 20
# 622 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARCTOZOLT
# 623 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 624 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ArctozoltReady_2
ArctozoltReady_1:
# 627 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ArctozoltReady_5
ArctozoltReady_4:
# 630 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ArctozoltReady_2:
# 625 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto ArctozoltReady_1

ArctozoltReady_5:
# 628 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto ArctozoltReady_4


DracovishReady::
# 635 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_DRACOVISH
# 636 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 637 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_DRACOVISH
# 638 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_DRACOVISH, 20
# 639 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_DRACOVISH
# 640 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 641 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DracovishReady_2
DracovishReady_1:
# 644 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DracovishReady_5
DracovishReady_4:
# 647 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

DracovishReady_2:
# 642 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto DracovishReady_1

DracovishReady_5:
# 645 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto DracovishReady_4


ArctovishReady::
# 652 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_ARCTOVISH
# 653 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox FossilBroughtBackToLife, MSGBOX_DEFAULT
# 654 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_ARCTOVISH
# 655 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	givemon SPECIES_ARCTOVISH, 20
# 656 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ARCTOVISH
# 657 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call ReceivedFossilMonFanfare
# 658 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ArctovishReady_2
ArctovishReady_1:
# 661 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ArctovishReady_5
ArctovishReady_4:
# 664 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

ArctovishReady_2:
# 659 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilParty
	goto ArctovishReady_1

ArctovishReady_5:
# 662 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto ReceiveFossilPC
	goto ArctovishReady_4


ReceiveFossilParty::
# 670 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 671 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FinishReceivingFossilMon
# 672 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 673 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 674 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto FinishReceivingFossilMon
	end


ReceiveFossilPC::
# 678 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 679 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq ReceiveFossilPC_2
ReceiveFossilPC_1:
# 683 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 684 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 685 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto FinishReceivingFossilMon
	end

ReceiveFossilPC_2:
# 680 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	call Common_EventScript_TransferredToPC
# 681 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	goto FinishReceivingFossilMon
	goto ReceiveFossilPC_1


FinishReceivingFossilMon::
# 689 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
# 690 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
# 691 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	release
	end


ReceivedFossilMonFanfare::
# 695 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 696 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	message ReceivedMonFromResearcher
# 697 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitmessage
# 698 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	waitfanfare
	return


ResearchIntact::
# 23 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Luckily much of my research is\n"
	.string "still intact.\l"
	.string "Pays to have external backups!$"

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon::
# 28 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "We're developing a device for talking\n"
	.string "with Pokémon.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_Betrayed::
# 38 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I can't believe the person I worked\n"
	.string "with all these years turned out to be\l"
	.string "a Team Rocket spy…$"

RustboroCity_DevonCorp_2F_Text_DevelopNewMedicine::
# 52 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a new medicine\n"
	.string "to increase the individual values\l"
	.string "of a Pokémon…\p"
	.string "But it's not going well.$"

ResearchDestroyed::
# 58 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Much of my research got stolen…\n"
	.string "Why would Team Rocket do something\l"
	.string "like this?$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams::
# 72 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

NotLettingDown::
# 78 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm not letting a minor setback\n"
	.string "like this impede my research!\p"
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

SameArtifactTwice::
# 204 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "It appears you have shown me the same\n"
	.string "fossil twice.\p"
	.string "I'm sorry, but I can't work like\n"
	.string "this.$"

FirstHalf::
# 228 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "That fossil looks to be one half\n"
	.string "of a complete fossil.\p"
	.string "If you can provide me with the other\n"
	.string "half, I believe we may be able to\l"
	.string "create something out of this.$"

NotSureWhatToMake::
# 235 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I'm sorry, but these two don't\n"
	.string "seem to match.$"

FossilBroughtBackToLife::
# 401 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Thanks for waiting!\p"
	.string "Your fossilized Pokémon has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient Pokémon.\n"
	.string "{STR_VAR_2}, it was!$"

ReceivedMonFromResearcher::
# 408 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the Devon researcher.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils::
# 706 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife::
# 712 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! That thing you have there…\n"
	.string "Is that an actual Pokémon fossil?\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife2::
# 720 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Wait! Those things you have there…\n"
	.string "These might actually be a whole fossil\l"
	.string "of a Pokémon!\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "Fossil Regenerator.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo::
# 730 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, is that so?\p"
	.string "Devon's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher::
# 736 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the Devon researcher.$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcherGalar::
# 742 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} and\n"
	.string "{STR_VAR_2} to the Devon researcher.$"

Devon_Text_FossilRegeneratorTakesTime::
# 749 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "The Fossil Regenerator, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

DevonShowAFossil::
# 758 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "You look like an experienced traveler.\p"
	.string "Tell me, have you come across any\n"
	.string "fossils you would like to show me?$"

DevonShowAFossil_Decline::
# 764 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Oh, that's a shame…$"

ThatsNotAFossil::
# 768 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "Um… I'm not sure why you're\n"
	.string "showing me that.\l"
	.string "That's not a Pokémon fossil…$"

FossilResearchAMess::
# 774 "data/maps/RustboroCity_DevonCorp_2F/scripts.pory"
	.string "All of my fossil research is\n"
	.string "in shambles.\l"
	.string "How am I meant to sort this out…$"
