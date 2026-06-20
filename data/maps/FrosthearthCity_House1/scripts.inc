FrosthearthCity_House1_MapScripts::
	.byte 0


Frosthearth_HyperTraining_Guru::
# 9 "data/maps/FrosthearthCity_House1/scripts.pory"
	lock
# 10 "data/maps/FrosthearthCity_House1/scripts.pory"
	faceplayer
# 11 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_HYPER_TRAINING, Frosthearth_HyperTraining_Guru_2
Frosthearth_HyperTraining_Guru_1:
	msgbox InterestedInHyperTraining, MSGBOX_YESNO
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_5
	checkitem ITEM_BOTTLE_CAP
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_8
Frosthearth_HyperTraining_Guru_7:
# 25 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ChooseMonForHyperTraining
# 26 "data/maps/FrosthearthCity_House1/scripts.pory"
	special ChoosePartyMon
# 27 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Frosthearth_HyperTraining_Guru_11
# 31 "data/maps/FrosthearthCity_House1/scripts.pory"
	checkmonlevel 50
# 32 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Frosthearth_HyperTraining_Guru_16
# 36 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_19
# 41 "data/maps/FrosthearthCity_House1/scripts.pory"
	setvar VAR_TEMP_0, 0
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_22
Frosthearth_HyperTraining_Guru_21:
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_25
Frosthearth_HyperTraining_Guru_24:
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_28
Frosthearth_HyperTraining_Guru_27:
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_31
Frosthearth_HyperTraining_Guru_30:
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_34
Frosthearth_HyperTraining_Guru_33:
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_37
Frosthearth_HyperTraining_Guru_36:
# 60 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_eq Frosthearth_HyperTraining_Guru_40
# 64 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto SelectHyperTraining
	return

Frosthearth_HyperTraining_Guru_2:
# 12 "data/maps/FrosthearthCity_House1/scripts.pory"
	setflag FLAG_INTRODUCTION_TO_HYPER_TRAINING
# 13 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox HyperTrainingIntro_Text
	goto Frosthearth_HyperTraining_Guru_1

Frosthearth_HyperTraining_Guru_5:
# 16 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_8:
	checkitem ITEM_GOLD_BOTTLE_CAP
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_13
	goto Frosthearth_HyperTraining_Guru_7

Frosthearth_HyperTraining_Guru_11:
# 28 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_13:
# 21 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox NoBottleCaps, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_16:
# 33 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox SelectedMonIsEgg, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_19:
# 37 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 38 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox SelectedMonNotHighEnoughForHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_22:
# 43 "data/maps/FrosthearthCity_House1/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_21

Frosthearth_HyperTraining_Guru_25:
# 46 "data/maps/FrosthearthCity_House1/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_24

Frosthearth_HyperTraining_Guru_28:
# 49 "data/maps/FrosthearthCity_House1/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_27

Frosthearth_HyperTraining_Guru_31:
# 52 "data/maps/FrosthearthCity_House1/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_30

Frosthearth_HyperTraining_Guru_34:
# 55 "data/maps/FrosthearthCity_House1/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_33

Frosthearth_HyperTraining_Guru_37:
# 58 "data/maps/FrosthearthCity_House1/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_36

Frosthearth_HyperTraining_Guru_40:
# 61 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonFullyHyperTrained, MSGBOX_AUTOCLOSE
	end


SelectHyperTraining::
# 67 "data/maps/FrosthearthCity_House1/scripts.pory"
	message UseWhichBottleCaps
# 68 "data/maps/FrosthearthCity_House1/scripts.pory"
	waitmessage
	checkitem ITEM_BOTTLE_CAP
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SelectHyperTraining_2
SelectHyperTraining_1:
	checkitem ITEM_GOLD_BOTTLE_CAP
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SelectHyperTraining_5
SelectHyperTraining_4:
# 79 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush SelectHyperTraining_Text_2, 2
# 80 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
# 81 "data/maps/FrosthearthCity_House1/scripts.pory"
	switch VAR_RESULT
# 82 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 0, SelectHyperTraining_8
# 84 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 1, SelectHyperTraining_9
# 86 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 2, SelectHyperTraining_10
# 87 "data/maps/FrosthearthCity_House1/scripts.pory"
	case MULTI_B_PRESSED, SelectHyperTraining_10
	return

SelectHyperTraining_2:
# 70 "data/maps/FrosthearthCity_House1/scripts.pory"
	checkitemquant ITEM_BOTTLE_CAP
# 71 "data/maps/FrosthearthCity_House1/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8005
# 72 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush SelectHyperTraining_Text_0, 0
	goto SelectHyperTraining_1

SelectHyperTraining_5:
# 75 "data/maps/FrosthearthCity_House1/scripts.pory"
	checkitemquant ITEM_GOLD_BOTTLE_CAP
# 76 "data/maps/FrosthearthCity_House1/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8005
# 77 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush SelectHyperTraining_Text_1, 1
	goto SelectHyperTraining_4

SelectHyperTraining_8:
# 83 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingNormalBottleCap
	return

SelectHyperTraining_9:
# 85 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingGoldBottleCap
	return

SelectHyperTraining_10:
# 88 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end


HyperTrainingNormalBottleCap::
# 93 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
# 94 "data/maps/FrosthearthCity_House1/scripts.pory"
	message WhichStatToTrain
# 95 "data/maps/FrosthearthCity_House1/scripts.pory"
	waitmessage
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_2
# 101 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_1, 0
HyperTrainingNormalBottleCap_1:
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_6
# 108 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_3, 1
HyperTrainingNormalBottleCap_5:
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_10
# 115 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_5, 2
HyperTrainingNormalBottleCap_9:
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_14
# 122 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_7, 3
HyperTrainingNormalBottleCap_13:
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_18
# 129 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_9, 4
HyperTrainingNormalBottleCap_17:
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_22
# 136 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_11, 5
HyperTrainingNormalBottleCap_21:
# 138 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_12, 6
# 140 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
# 141 "data/maps/FrosthearthCity_House1/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 0, HyperTrainingNormalBottleCap_26
# 147 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 1, HyperTrainingNormalBottleCap_27
# 152 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 2, HyperTrainingNormalBottleCap_28
# 157 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 3, HyperTrainingNormalBottleCap_29
# 162 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 4, HyperTrainingNormalBottleCap_30
# 167 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 5, HyperTrainingNormalBottleCap_31
# 172 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 6, HyperTrainingNormalBottleCap_32
# 173 "data/maps/FrosthearthCity_House1/scripts.pory"
	case MULTI_B_PRESSED, HyperTrainingNormalBottleCap_32
	return

HyperTrainingNormalBottleCap_2:
# 98 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_0, 0
	goto HyperTrainingNormalBottleCap_1

HyperTrainingNormalBottleCap_6:
# 105 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_2, 1
	goto HyperTrainingNormalBottleCap_5

HyperTrainingNormalBottleCap_10:
# 112 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_4, 2
	goto HyperTrainingNormalBottleCap_9

HyperTrainingNormalBottleCap_14:
# 119 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_6, 3
	goto HyperTrainingNormalBottleCap_13

HyperTrainingNormalBottleCap_18:
# 126 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_8, 4
	goto HyperTrainingNormalBottleCap_17

HyperTrainingNormalBottleCap_22:
# 133 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultipush HyperTrainingNormalBottleCap_Text_10, 5
	goto HyperTrainingNormalBottleCap_21

HyperTrainingNormalBottleCap_26:
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_34
HyperTrainingNormalBottleCap_33:
# 146 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Hypertrain_Hp
	return

HyperTrainingNormalBottleCap_27:
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_37
HyperTrainingNormalBottleCap_36:
# 151 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Hypertrain_Atk
	return

HyperTrainingNormalBottleCap_28:
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_40
HyperTrainingNormalBottleCap_39:
# 156 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Hypertrain_Def
	return

HyperTrainingNormalBottleCap_29:
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_43
HyperTrainingNormalBottleCap_42:
# 161 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Hypertrain_SpAtk
	return

HyperTrainingNormalBottleCap_30:
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_46
HyperTrainingNormalBottleCap_45:
# 166 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Hypertrain_SpDef
	return

HyperTrainingNormalBottleCap_31:
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_49
HyperTrainingNormalBottleCap_48:
# 171 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Hypertrain_Speed
	return

HyperTrainingNormalBottleCap_32:
# 174 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto SelectHyperTraining
	return

HyperTrainingNormalBottleCap_34:
# 144 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_33

HyperTrainingNormalBottleCap_37:
# 149 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_36

HyperTrainingNormalBottleCap_40:
# 154 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_39

HyperTrainingNormalBottleCap_43:
# 159 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_42

HyperTrainingNormalBottleCap_46:
# 164 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_45

HyperTrainingNormalBottleCap_49:
# 169 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_48


HyperTrainingCapped::
# 178 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox CantHypertrainThatStat
# 179 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingNormalBottleCap
	return


Hypertrain_Hp::
# 182 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_0
# 183 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertrain_Stat_MainBody
# 184 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
# 185 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 186 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 187 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 188 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end


Hypertrain_Atk::
# 192 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_2
# 193 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertrain_Stat_MainBody
# 194 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
# 195 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 196 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 197 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 198 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end


Hypertrain_Def::
# 202 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_4
# 203 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertrain_Stat_MainBody
# 204 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
# 205 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 206 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 207 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 208 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end


Hypertrain_SpAtk::
# 212 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, Hypertrain_SpAtk_Text_0
# 213 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertrain_Stat_MainBody
# 214 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
# 215 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 216 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 217 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 218 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end


Hypertrain_SpDef::
# 222 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, Hypertrain_SpDef_Text_0
# 223 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertrain_Stat_MainBody
# 224 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
# 225 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 226 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 227 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 228 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end


Hypertrain_Speed::
# 232 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_10
# 233 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertrain_Stat_MainBody
# 234 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
# 235 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 236 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_BOTTLE_CAP, 1
# 237 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 238 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end


Hypertrain_Stat_MainBody::
# 243 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox Hypertrain_Stat_Text, MSGBOX_YESNO
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Hypertrain_Stat_MainBody_2
Hypertrain_Stat_MainBody_1:
# 247 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertraining_Start
	return

Hypertrain_Stat_MainBody_2:
# 245 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto HyperTrainingNormalBottleCap
	goto Hypertrain_Stat_MainBody_1


Hypertraining_Start::
# 252 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox LetsHyperTrain
# 253 "data/maps/FrosthearthCity_House1/scripts.pory"
	closemessage
# 254 "data/maps/FrosthearthCity_House1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 255 "data/maps/FrosthearthCity_House1/scripts.pory"
	playse SE_EXP
# 256 "data/maps/FrosthearthCity_House1/scripts.pory"
	waitse
# 257 "data/maps/FrosthearthCity_House1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 258 "data/maps/FrosthearthCity_House1/scripts.pory"
	waitfanfare
# 259 "data/maps/FrosthearthCity_House1/scripts.pory"
	delay 60
# 260 "data/maps/FrosthearthCity_House1/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


HyperTrainingGoldBottleCap::
# 265 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox WillCostGoldCap, MSGBOX_YESNO
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingGoldBottleCap_2
HyperTrainingGoldBottleCap_1:
# 269 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Hypertraining_Start
	canhypertrain STAT_HP, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_5
HyperTrainingGoldBottleCap_4:
	canhypertrain STAT_ATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_8
HyperTrainingGoldBottleCap_7:
	canhypertrain STAT_DEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_11
HyperTrainingGoldBottleCap_10:
	canhypertrain STAT_SPEED, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_14
HyperTrainingGoldBottleCap_13:
	canhypertrain STAT_SPATK, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_17
HyperTrainingGoldBottleCap_16:
	canhypertrain STAT_SPDEF, VAR_0x8004
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_20
HyperTrainingGoldBottleCap_19:
# 288 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox MonHasBeenHyperTrained
# 289 "data/maps/FrosthearthCity_House1/scripts.pory"
	removeitem ITEM_GOLD_BOTTLE_CAP, 1
# 290 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox ComeBackForMoreHyperTraining
# 291 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end

HyperTrainingGoldBottleCap_2:
# 267 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto SelectHyperTraining
	goto HyperTrainingGoldBottleCap_1

HyperTrainingGoldBottleCap_5:
# 271 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_HP, VAR_0x8004
	goto HyperTrainingGoldBottleCap_4

HyperTrainingGoldBottleCap_8:
# 274 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_ATK, VAR_0x8004
	goto HyperTrainingGoldBottleCap_7

HyperTrainingGoldBottleCap_11:
# 277 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_DEF, VAR_0x8004
	goto HyperTrainingGoldBottleCap_10

HyperTrainingGoldBottleCap_14:
# 280 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_SPEED, VAR_0x8004
	goto HyperTrainingGoldBottleCap_13

HyperTrainingGoldBottleCap_17:
# 283 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_SPATK, VAR_0x8004
	goto HyperTrainingGoldBottleCap_16

HyperTrainingGoldBottleCap_20:
# 286 "data/maps/FrosthearthCity_House1/scripts.pory"
	hypertrain STAT_SPDEF, VAR_0x8004
	goto HyperTrainingGoldBottleCap_19


Frosthearth_TypeChecker::
# 394 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_FROSTHEARTH_TYPE_CHECK, TYPE_ELECTRIC
	goto_if_eq Frosthearth_TypeChecker_2
# 394 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_FROSTHEARTH_TYPE_CHECK, TYPE_ICE
	goto_if_eq Frosthearth_TypeChecker_2
# 398 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, Frosthearth_TypeChecker_Text_1
Frosthearth_TypeChecker_1:
# 400 "data/maps/FrosthearthCity_House1/scripts.pory"
	buffertypename STR_VAR_1, VAR_FROSTHEARTH_TYPE_CHECK
# 401 "data/maps/FrosthearthCity_House1/scripts.pory"
	lock
# 402 "data/maps/FrosthearthCity_House1/scripts.pory"
	faceplayer
# 403 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto_if_set FLAG_DAILY_FROSTHEARTH_TYPE_CHECK, Frosthearth_TypeChecker_8
# 407 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox LookingForType
# 408 "data/maps/FrosthearthCity_House1/scripts.pory"
	istypeinparty VAR_FROSTHEARTH_TYPE_CHECK
# 409 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_TypeChecker_11
# 417 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox YouHaveTypeInParty
# 418 "data/maps/FrosthearthCity_House1/scripts.pory"
	switch VAR_FROSTHEARTH_TYPE_CHECK
# 419 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_NORMAL, Frosthearth_TypeChecker_15
# 421 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_FIGHTING, Frosthearth_TypeChecker_16
# 423 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_FLYING, Frosthearth_TypeChecker_17
# 425 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_POISON, Frosthearth_TypeChecker_18
# 427 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_GROUND, Frosthearth_TypeChecker_19
# 429 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_ROCK, Frosthearth_TypeChecker_20
# 431 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_BUG, Frosthearth_TypeChecker_21
# 433 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_GHOST, Frosthearth_TypeChecker_22
# 435 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_STEEL, Frosthearth_TypeChecker_23
# 437 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_FIRE, Frosthearth_TypeChecker_24
# 439 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_WATER, Frosthearth_TypeChecker_25
# 441 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_GRASS, Frosthearth_TypeChecker_26
# 443 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_ELECTRIC, Frosthearth_TypeChecker_27
# 445 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_PSYCHIC, Frosthearth_TypeChecker_28
# 447 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_ICE, Frosthearth_TypeChecker_29
# 449 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_DRAGON, Frosthearth_TypeChecker_30
# 451 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_DARK, Frosthearth_TypeChecker_31
# 453 "data/maps/FrosthearthCity_House1/scripts.pory"
	case TYPE_FAIRY, Frosthearth_TypeChecker_32
Frosthearth_TypeChecker_13:
# 456 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_TypeChecker_37
Frosthearth_TypeChecker_36:
# 459 "data/maps/FrosthearthCity_House1/scripts.pory"
	setflag FLAG_DAILY_FROSTHEARTH_TYPE_CHECK
# 460 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
# 461 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto_if_set FLAG_Q41_FROSTHEARTH_TYPEMON_START, Frosthearth_TypeChecker_41
Frosthearth_TypeChecker_39:
	end

Frosthearth_TypeChecker_2:
# 395 "data/maps/FrosthearthCity_House1/scripts.pory"
	bufferstring STR_VAR_2, Frosthearth_TypeChecker_Text_0
	goto Frosthearth_TypeChecker_1

Frosthearth_TypeChecker_8:
# 404 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox TypeCheckerComeBackTomorrow, MSGBOX_AUTOCLOSE
	end

Frosthearth_TypeChecker_11:
# 410 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
# 411 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto_if_unset FLAG_Q41_FROSTHEARTH_TYPEMON_START, Frosthearth_TypeChecker_34
Frosthearth_TypeChecker_33:
	end

Frosthearth_TypeChecker_15:
# 420 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_NORMAL_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_16:
# 422 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_FIGHTING_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_17:
# 424 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_FLYING_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_18:
# 426 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_POISON_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_19:
# 428 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_GROUND_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_20:
# 430 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_ROCK_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_21:
# 432 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_BUG_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_22:
# 434 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_GHOST_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_23:
# 436 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_STEEL_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_24:
# 438 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_FIRE_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_25:
# 440 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_WATER_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_26:
# 442 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_GRASS_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_27:
# 444 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_28:
# 446 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_PSYCHIC_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_29:
# 448 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_ICE_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_30:
# 450 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_DRAGON_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_31:
# 452 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_DARK_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_32:
# 454 "data/maps/FrosthearthCity_House1/scripts.pory"
	giveitem ITEM_FAIRY_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_34:
# 412 "data/maps/FrosthearthCity_House1/scripts.pory"
	startquest FLAG_Q41_FROSTHEARTH_TYPEMON_START
# 413 "data/maps/FrosthearthCity_House1/scripts.pory"
	special ShowJournalPopupAdd
	goto Frosthearth_TypeChecker_33

Frosthearth_TypeChecker_37:
# 457 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto ZeBagIsFull
	goto Frosthearth_TypeChecker_36

Frosthearth_TypeChecker_40:
# 462 "data/maps/FrosthearthCity_House1/scripts.pory"
	completequest FLAG_Q41_FROSTHEARTH_TYPEMON_COMPLETE
# 463 "data/maps/FrosthearthCity_House1/scripts.pory"
	special ShowJournalPopupRemove
	goto Frosthearth_TypeChecker_39

Frosthearth_TypeChecker_41:
# 461 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto_if_unset FLAG_Q41_FROSTHEARTH_TYPEMON_COMPLETE, Frosthearth_TypeChecker_40
	goto Frosthearth_TypeChecker_39


Frosthearth_House2_Man::
# 488 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox Frosthearth_House2_Man_Text, MSGBOX_NPC
	return


Frosthearth_House2_Woman::
# 491 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox Frosthearth_House2_Woman_Text, MSGBOX_NPC
	return


Frosthearth_House4_Woman::
# 507 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox Frosthearth_House4_Woman_Text, MSGBOX_NPC
	return


Frosthearth_Harbor_Sailor::
# 518 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox Frosthearth_Harbor_Sailor_Text, MSGBOX_NPC
	return


Frosthearth_Harbor_OldWoman::
# 521 "data/maps/FrosthearthCity_House1/scripts.pory"
	msgbox Frosthearth_Harbor_OldWoman_Text, MSGBOX_NPC
	return


FrosthearthHarbor_Attendant::
# 540 "data/maps/FrosthearthCity_House1/scripts.pory"
	lock
# 541 "data/maps/FrosthearthCity_House1/scripts.pory"
	faceplayer
	msgbox Frosthearth_Text_GetAboard, MSGBOX_YESNO
# 0 "data/maps/FrosthearthCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrosthearthHarbor_Attendant_2
FrosthearthHarbor_Attendant_1:
# 545 "data/maps/FrosthearthCity_House1/scripts.pory"
	message FrosthearthHarbor_Attendant_Text_0
# 546 "data/maps/FrosthearthCity_House1/scripts.pory"
	waitmessage
# 547 "data/maps/FrosthearthCity_House1/scripts.pory"
	dynmultichoice 23, 0, FALSE, 4, 0, 0, FrosthearthHarbor_Attendant_Text_1, FrosthearthHarbor_Attendant_Text_2, FrosthearthHarbor_Attendant_Text_3, FrosthearthHarbor_Attendant_Text_4, FrosthearthHarbor_Attendant_Text_5, SelectHyperTraining_Text_2
# 548 "data/maps/FrosthearthCity_House1/scripts.pory"
	switch VAR_RESULT
# 549 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 0, FrosthearthHarbor_Attendant_6
# 552 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 1, FrosthearthHarbor_Attendant_7
# 555 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 2, FrosthearthHarbor_Attendant_8
# 558 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 3, FrosthearthHarbor_Attendant_9
# 561 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 4, FrosthearthHarbor_Attendant_10
# 564 "data/maps/FrosthearthCity_House1/scripts.pory"
	case 5, FrosthearthHarbor_Attendant_11
# 565 "data/maps/FrosthearthCity_House1/scripts.pory"
	case MULTI_B_PRESSED, FrosthearthHarbor_Attendant_11
FrosthearthHarbor_Attendant_4:
# 568 "data/maps/FrosthearthCity_House1/scripts.pory"
	waitstate
# 569 "data/maps/FrosthearthCity_House1/scripts.pory"
	release
	end

FrosthearthHarbor_Attendant_2:
# 543 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Harbor_ComeAgain
	goto FrosthearthHarbor_Attendant_1

FrosthearthHarbor_Attendant_6:
# 550 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 551 "data/maps/FrosthearthCity_House1/scripts.pory"
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_7:
# 553 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 554 "data/maps/FrosthearthCity_House1/scripts.pory"
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_8:
# 556 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 557 "data/maps/FrosthearthCity_House1/scripts.pory"
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_9:
# 559 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 560 "data/maps/FrosthearthCity_House1/scripts.pory"
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_10:
# 562 "data/maps/FrosthearthCity_House1/scripts.pory"
	call Harbor_BoardFerryGoingEast
# 563 "data/maps/FrosthearthCity_House1/scripts.pory"
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_11:
# 566 "data/maps/FrosthearthCity_House1/scripts.pory"
	goto Harbor_ComeAgain
	goto FrosthearthHarbor_Attendant_4


SelectHyperTraining_Text_0:
# 72 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Bottle Caps (Have {STR_VAR_1})$"

SelectHyperTraining_Text_1:
# 77 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Gold Bottle Caps (Have {STR_VAR_2})$"

SelectHyperTraining_Text_2:
# 79 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Never mind$"

HyperTrainingNormalBottleCap_Text_0:
# 98 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "HP$"

HyperTrainingNormalBottleCap_Text_1:
# 101 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}HP$"

HyperTrainingNormalBottleCap_Text_2:
# 105 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Attack$"

HyperTrainingNormalBottleCap_Text_3:
# 108 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Attack$"

HyperTrainingNormalBottleCap_Text_4:
# 112 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Defense$"

HyperTrainingNormalBottleCap_Text_5:
# 115 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Defense$"

HyperTrainingNormalBottleCap_Text_6:
# 119 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Sp. Atk$"

HyperTrainingNormalBottleCap_Text_7:
# 122 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Sp. Atk$"

HyperTrainingNormalBottleCap_Text_8:
# 126 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Sp. Def$"

HyperTrainingNormalBottleCap_Text_9:
# 129 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Sp. Def$"

HyperTrainingNormalBottleCap_Text_10:
# 133 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Speed$"

HyperTrainingNormalBottleCap_Text_11:
# 136 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Speed$"

HyperTrainingNormalBottleCap_Text_12:
# 138 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Back$"

Hypertrain_SpAtk_Text_0:
# 212 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Special Attack$"

Hypertrain_SpDef_Text_0:
# 222 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Special Defense$"

Frosthearth_TypeChecker_Text_0:
# 395 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "an$"

Frosthearth_TypeChecker_Text_1:
# 398 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "a$"

FrosthearthHarbor_Attendant_Text_0:
# 545 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Where would you like to sail?$"

FrosthearthHarbor_Attendant_Text_1:
# 547 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Coralgrove City$"

FrosthearthHarbor_Attendant_Text_2:
# 547 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Azuretide Town$"

FrosthearthHarbor_Attendant_Text_3:
# 547 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Shoreslate City$"

FrosthearthHarbor_Attendant_Text_4:
# 547 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Kaolisle City$"

FrosthearthHarbor_Attendant_Text_5:
# 547 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Rockliffe Town$"

ChooseMonForHyperTraining::
# 295 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Which one of your Pokémon do you\n"
	.string "want to do some Hyper Training on?$"

SelectedMonNotHighEnoughForHyperTraining::
# 299 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Oh no… No, no, no!\p"
	.string "That Pokémon hasn't leveled up\n"
	.string "enough to be ready for my amazing\l"
	.string "Hyper Training!\l"
	.string "Only Pokémon that have reached\l"
	.string "Lv. 50 can handle the hype!$"

MonFullyHyperTrained::
# 307 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "But that Pokémon is already so awesome\n"
	.string "that it doesn't need any training!$"

UseWhichBottleCaps::
# 311 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "So will it be a Bottle Cap or\n"
	.string "a Gold Bottle Cap?\p"
	.string "See how many you've got and\n"
	.string "let me know.$"

LetsHyperTrain::
# 317 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Then get hype!\p"
	.string "I'm about to do some real Hyper\n"
	.string "Training on {STR_VAR_1} here!$"

SelectedMonIsEgg::
# 322 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "An Egg?!\p"
	.string "I understand why you're hyped to\n"
	.string "have one, but I can't train\l"
	.string "that thing yet!$"

ComeBackForMoreHyperTraining::
# 328 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Come back any time you want to\n"
	.string "hype up any of your Pokémon!$"

WillCostGoldCap::
# 332 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "So you want me to get all of\n"
	.string "{STR_VAR_1}'s stats hyped up?$"

CantHypertrainThatStat::
# 336 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "But that Pokémon is already so awesome\n"
	.string "that it doesn't need any training\l"
	.string "in that stat!$"

WhichStatToTrain::
# 341 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Which one of {STR_VAR_1}'s stats do\n"
	.string "you want to do some Hyper Training on?$"

Hypertrain_Stat_Text::
# 345 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "So you want to have your Pokémon\n"
	.string "Hyper Trained in {STR_VAR_2}?$"

MonHasBeenHyperTrained::
# 349 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "All right! {STR_VAR_1} got even\n"
	.string "stronger thanks to my Hyper Training!$"

HyperTrainingIntro_Text::
# 354 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "The name's Mr. Hyper!\p"
	.string "You want to know why I'm so hyper?\p"
	.string "Because I can help Pokémon do\n"
	.string "Hyper Training!\p"
	.string "Allow me to explain!\p"
	.string "Hyper Training is a way to help\n"
	.string "Pokémon that have reached Lv. 50\l"
	.string "become even stronger!\p"
	.string "This special training can help them\n"
	.string "increase their strength and HP and\l"
	.string "other stats!\p"
	.string "If you want me to train up your\n"
	.string "Pokémon, bring me some Bottle Caps.\l"
	.string "I collect them.\p"
	.string "A regular Bottle Cap will get you\n"
	.string "training for a single stat.\p"
	.string "But bring me a rare Gold Bottle Cap,\n"
	.string "and I'll train up all your Pokémon's\l"
	.string "stats to the max at once!$"

InterestedInHyperTraining::
# 376 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Want to try some of my Hyper Training\n"
	.string "to boost your Pokémon's stats?$"

NotInterestedInHyperTraining::
# 380 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Not interested in Hyper Training\n"
	.string "at this time?\p"
	.string "Then come back anytime!\p"
	.string "Mr. Hyper will always be hyped up\n"
	.string "to see you!$"

NoBottleCaps::
# 387 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Oh no… No, no, no!\p"
	.string "You don't have a Bottle Cap or a\n"
	.string "Gold Bottle Cap! Not even one!$"

TypeCheckerComeBackTomorrow::
# 468 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "That was a fun little sport.\p"
	.string "Come back tomorrow, and I might\n"
	.string "have something new to give.$"

LookingForType::
# 473 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "You know what?\p"
	.string "Today, I would really fancy seeing\n"
	.string "{STR_VAR_2} {STR_VAR_1}-type Pokémon.\p"
	.string "If you can show me one,\n"
	.string "I'll give you something nice.$"

YouHaveTypeInParty::
# 480 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Oh, but you do have\n"
	.string "{STR_VAR_2} {STR_VAR_1}-type Pokémon!\p"
	.string "Well, a promise's a promise.\n"
	.string "Here you go!$"

Frosthearth_House2_Man_Text::
# 494 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Living up here ain't too bad.\p"
	.string "The heat rising from the ground is\n"
	.string "keeping our homes all nice and cozy.$"

Frosthearth_House2_Woman_Text::
# 499 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Most of the time, the snowfall is\n"
	.string "actually pretty relaxing.\p"
	.string "What isn't relaxing though,\n"
	.string "are the occasional blizzards.$"

Frosthearth_House4_Woman_Text::
# 509 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Have you heard the latest news?\p"
	.string "Some people have reported seeing\n"
	.string "windows to alternate universes\l"
	.string "appearing in the wilds.\p"
	.string "Sounds to me like crazy people talk.$"

Frosthearth_Harbor_Sailor_Text::
# 524 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "In order to sail in these parts\n"
	.string "of the world, the ships must have\l"
	.string "strengthened hulls that can withstand\l"
	.string "the impact of the ice hitting the\l"
	.string "ship's bow.$"

Frosthearth_Harbor_OldWoman_Text::
# 531 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "Many tourists visit Frosthearth City\n"
	.string "to watch the battles at the\l"
	.string "Pokémon World Tournament, or to\l"
	.string "relax by the hot springs.\p"
	.string "This city has something for everyone!$"

Frosthearth_Text_GetAboard::
# 573 "data/maps/FrosthearthCity_House1/scripts.pory"
	.string "The ferry is about to leave\n"
	.string "the port soon.\p"
	.string "Would you like to board the ferry?$"
