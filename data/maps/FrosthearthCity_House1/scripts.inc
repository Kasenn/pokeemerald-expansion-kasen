FrosthearthCity_House1_MapScripts::
	.byte 0


Frosthearth_HyperTraining_Guru::
	lock
	faceplayer
	goto_if_unset FLAG_INTRODUCTION_TO_HYPER_TRAINING, Frosthearth_HyperTraining_Guru_2
Frosthearth_HyperTraining_Guru_1:
	msgbox InterestedInHyperTraining, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_5
	checkitem ITEM_BOTTLE_CAP
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_8
Frosthearth_HyperTraining_Guru_7:
	msgbox ChooseMonForHyperTraining
	special ChoosePartyMon
	waitstate
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq Frosthearth_HyperTraining_Guru_11
	checkhypertraininglevel 50
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq Frosthearth_HyperTraining_Guru_16
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_19
	setvar VAR_TEMP_0, 0
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_22
Frosthearth_HyperTraining_Guru_21:
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_25
Frosthearth_HyperTraining_Guru_24:
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_28
Frosthearth_HyperTraining_Guru_27:
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_31
Frosthearth_HyperTraining_Guru_30:
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_34
Frosthearth_HyperTraining_Guru_33:
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_37
Frosthearth_HyperTraining_Guru_36:
	compare VAR_TEMP_0, 6
	goto_if_eq Frosthearth_HyperTraining_Guru_40
	goto SelectHyperTraining
	return

Frosthearth_HyperTraining_Guru_2:
	setflag FLAG_INTRODUCTION_TO_HYPER_TRAINING
	msgbox HyperTrainingIntro_Text
	goto Frosthearth_HyperTraining_Guru_1

Frosthearth_HyperTraining_Guru_5:
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_8:
	checkitem ITEM_GOLD_BOTTLE_CAP
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_13
	goto Frosthearth_HyperTraining_Guru_7

Frosthearth_HyperTraining_Guru_11:
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_13:
	msgbox NoBottleCaps, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_16:
	msgbox SelectedMonIsEgg, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_19:
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox SelectedMonNotHighEnoughForHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_22:
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_21

Frosthearth_HyperTraining_Guru_25:
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_24

Frosthearth_HyperTraining_Guru_28:
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_27

Frosthearth_HyperTraining_Guru_31:
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_30

Frosthearth_HyperTraining_Guru_34:
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_33

Frosthearth_HyperTraining_Guru_37:
	addvar VAR_TEMP_0, 1
	goto Frosthearth_HyperTraining_Guru_36

Frosthearth_HyperTraining_Guru_40:
	msgbox MonFullyHyperTrained, MSGBOX_AUTOCLOSE
	end


SelectHyperTraining::
	message UseWhichBottleCaps
	waitmessage
	checkitem ITEM_BOTTLE_CAP
	compare VAR_RESULT, TRUE
	goto_if_eq SelectHyperTraining_2
SelectHyperTraining_1:
	checkitem ITEM_GOLD_BOTTLE_CAP
	compare VAR_RESULT, TRUE
	goto_if_eq SelectHyperTraining_5
SelectHyperTraining_4:
	dynmultipush SelectHyperTraining_Text_2, 2
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, 0
	switch VAR_RESULT
	case 0, SelectHyperTraining_8
	case 1, SelectHyperTraining_9
	case 2, SelectHyperTraining_10
	case MULTI_B_PRESSED, SelectHyperTraining_10
	return

SelectHyperTraining_2:
	checkitemquant ITEM_BOTTLE_CAP
	buffernumberstring STR_VAR_1, VAR_0x8005
	dynmultipush SelectHyperTraining_Text_0, 0
	goto SelectHyperTraining_1

SelectHyperTraining_5:
	checkitemquant ITEM_GOLD_BOTTLE_CAP
	buffernumberstring STR_VAR_2, VAR_0x8005
	dynmultipush SelectHyperTraining_Text_1, 1
	goto SelectHyperTraining_4

SelectHyperTraining_8:
	goto HyperTrainingNormalBottleCap
	return

SelectHyperTraining_9:
	goto HyperTrainingGoldBottleCap
	return

SelectHyperTraining_10:
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end


HyperTrainingNormalBottleCap::
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	message WhichStatToTrain
	waitmessage
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_2
	dynmultipush HyperTrainingNormalBottleCap_Text_1, 0
HyperTrainingNormalBottleCap_1:
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_6
	dynmultipush HyperTrainingNormalBottleCap_Text_3, 1
HyperTrainingNormalBottleCap_5:
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_10
	dynmultipush HyperTrainingNormalBottleCap_Text_5, 2
HyperTrainingNormalBottleCap_9:
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_14
	dynmultipush HyperTrainingNormalBottleCap_Text_7, 3
HyperTrainingNormalBottleCap_13:
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_18
	dynmultipush HyperTrainingNormalBottleCap_Text_9, 4
HyperTrainingNormalBottleCap_17:
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingNormalBottleCap_22
	dynmultipush HyperTrainingNormalBottleCap_Text_11, 5
HyperTrainingNormalBottleCap_21:
	dynmultipush HyperTrainingNormalBottleCap_Text_12, 6
	dynmultistack 23, 0, FALSE, 6, FALSE, 0, 0
	switch VAR_RESULT
	case 0, HyperTrainingNormalBottleCap_26
	case 1, HyperTrainingNormalBottleCap_27
	case 2, HyperTrainingNormalBottleCap_28
	case 3, HyperTrainingNormalBottleCap_29
	case 4, HyperTrainingNormalBottleCap_30
	case 5, HyperTrainingNormalBottleCap_31
	case 6, HyperTrainingNormalBottleCap_32
	case MULTI_B_PRESSED, HyperTrainingNormalBottleCap_32
	return

HyperTrainingNormalBottleCap_2:
	dynmultipush HyperTrainingNormalBottleCap_Text_0, 0
	goto HyperTrainingNormalBottleCap_1

HyperTrainingNormalBottleCap_6:
	dynmultipush HyperTrainingNormalBottleCap_Text_2, 1
	goto HyperTrainingNormalBottleCap_5

HyperTrainingNormalBottleCap_10:
	dynmultipush HyperTrainingNormalBottleCap_Text_4, 2
	goto HyperTrainingNormalBottleCap_9

HyperTrainingNormalBottleCap_14:
	dynmultipush HyperTrainingNormalBottleCap_Text_6, 3
	goto HyperTrainingNormalBottleCap_13

HyperTrainingNormalBottleCap_18:
	dynmultipush HyperTrainingNormalBottleCap_Text_8, 4
	goto HyperTrainingNormalBottleCap_17

HyperTrainingNormalBottleCap_22:
	dynmultipush HyperTrainingNormalBottleCap_Text_10, 5
	goto HyperTrainingNormalBottleCap_21

HyperTrainingNormalBottleCap_26:
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_34
HyperTrainingNormalBottleCap_33:
	goto Hypertrain_Hp
	return

HyperTrainingNormalBottleCap_27:
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_37
HyperTrainingNormalBottleCap_36:
	goto Hypertrain_Atk
	return

HyperTrainingNormalBottleCap_28:
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_40
HyperTrainingNormalBottleCap_39:
	goto Hypertrain_Def
	return

HyperTrainingNormalBottleCap_29:
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_43
HyperTrainingNormalBottleCap_42:
	goto Hypertrain_SpAtk
	return

HyperTrainingNormalBottleCap_30:
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_46
HyperTrainingNormalBottleCap_45:
	goto Hypertrain_SpDef
	return

HyperTrainingNormalBottleCap_31:
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingNormalBottleCap_49
HyperTrainingNormalBottleCap_48:
	goto Hypertrain_Speed
	return

HyperTrainingNormalBottleCap_32:
	goto SelectHyperTraining
	return

HyperTrainingNormalBottleCap_34:
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_33

HyperTrainingNormalBottleCap_37:
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_36

HyperTrainingNormalBottleCap_40:
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_39

HyperTrainingNormalBottleCap_43:
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_42

HyperTrainingNormalBottleCap_46:
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_45

HyperTrainingNormalBottleCap_49:
	goto HyperTrainingCapped
	goto HyperTrainingNormalBottleCap_48


HyperTrainingCapped::
	msgbox CantHypertrainThatStat
	goto HyperTrainingNormalBottleCap
	return


Hypertrain_Hp::
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_0
	call Hypertrain_Stat_MainBody
	hypertrain STAT_HP, VAR_0x8004
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end


Hypertrain_Atk::
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_2
	call Hypertrain_Stat_MainBody
	hypertrain STAT_ATK, VAR_0x8004
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end


Hypertrain_Def::
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_4
	call Hypertrain_Stat_MainBody
	hypertrain STAT_DEF, VAR_0x8004
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end


Hypertrain_SpAtk::
	bufferstring STR_VAR_2, Hypertrain_SpAtk_Text_0
	call Hypertrain_Stat_MainBody
	hypertrain STAT_SPATK, VAR_0x8004
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end


Hypertrain_SpDef::
	bufferstring STR_VAR_2, Hypertrain_SpDef_Text_0
	call Hypertrain_Stat_MainBody
	hypertrain STAT_SPDEF, VAR_0x8004
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end


Hypertrain_Speed::
	bufferstring STR_VAR_2, HyperTrainingNormalBottleCap_Text_10
	call Hypertrain_Stat_MainBody
	hypertrain STAT_SPEED, VAR_0x8004
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end


Hypertrain_Stat_MainBody::
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox Hypertrain_Stat_Text, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Hypertrain_Stat_MainBody_2
Hypertrain_Stat_MainBody_1:
	call Hypertraining_Start
	return

Hypertrain_Stat_MainBody_2:
	goto HyperTrainingNormalBottleCap
	goto Hypertrain_Stat_MainBody_1


Hypertraining_Start::
	msgbox LetsHyperTrain
	closemessage
	fadescreen FADE_TO_BLACK
	playse SE_EXP
	waitse
	playfanfare MUS_LEVEL_UP
	waitfanfare
	delay 60
	fadescreen FADE_FROM_BLACK
	return


HyperTrainingGoldBottleCap::
	bufferpartymonnick STR_VAR_1, VAR_0x8004
	msgbox WillCostGoldCap, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq HyperTrainingGoldBottleCap_2
HyperTrainingGoldBottleCap_1:
	call Hypertraining_Start
	canhypertrain STAT_HP, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_5
HyperTrainingGoldBottleCap_4:
	canhypertrain STAT_ATK, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_8
HyperTrainingGoldBottleCap_7:
	canhypertrain STAT_DEF, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_11
HyperTrainingGoldBottleCap_10:
	canhypertrain STAT_SPEED, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_14
HyperTrainingGoldBottleCap_13:
	canhypertrain STAT_SPATK, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_17
HyperTrainingGoldBottleCap_16:
	canhypertrain STAT_SPDEF, VAR_0x8004
	compare VAR_RESULT, 0
	goto_if_ne HyperTrainingGoldBottleCap_20
HyperTrainingGoldBottleCap_19:
	msgbox MonHasBeenHyperTrained
	removeitem ITEM_GOLD_BOTTLE_CAP, 1
	msgbox ComeBackForMoreHyperTraining
	release
	end

HyperTrainingGoldBottleCap_2:
	goto SelectHyperTraining
	goto HyperTrainingGoldBottleCap_1

HyperTrainingGoldBottleCap_5:
	hypertrain STAT_HP, VAR_0x8004
	goto HyperTrainingGoldBottleCap_4

HyperTrainingGoldBottleCap_8:
	hypertrain STAT_ATK, VAR_0x8004
	goto HyperTrainingGoldBottleCap_7

HyperTrainingGoldBottleCap_11:
	hypertrain STAT_DEF, VAR_0x8004
	goto HyperTrainingGoldBottleCap_10

HyperTrainingGoldBottleCap_14:
	hypertrain STAT_SPEED, VAR_0x8004
	goto HyperTrainingGoldBottleCap_13

HyperTrainingGoldBottleCap_17:
	hypertrain STAT_SPATK, VAR_0x8004
	goto HyperTrainingGoldBottleCap_16

HyperTrainingGoldBottleCap_20:
	hypertrain STAT_SPDEF, VAR_0x8004
	goto HyperTrainingGoldBottleCap_19


Frosthearth_TypeChecker::
	compare VAR_FROSTHEARTH_TYPE_CHECK, TYPE_ELECTRIC
	goto_if_eq Frosthearth_TypeChecker_2
	compare VAR_FROSTHEARTH_TYPE_CHECK, TYPE_ICE
	goto_if_eq Frosthearth_TypeChecker_2
	bufferstring STR_VAR_2, Frosthearth_TypeChecker_Text_1
Frosthearth_TypeChecker_1:
	buffertypename STR_VAR_1, VAR_FROSTHEARTH_TYPE_CHECK
	lock
	faceplayer
	goto_if_set FLAG_DAILY_FROSTHEARTH_TYPE_CHECK, Frosthearth_TypeChecker_8
	msgbox LookingForType
	copyvar VAR_0x8004, VAR_FROSTHEARTH_TYPE_CHECK
	special IsTypeInParty
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_TypeChecker_11
	msgbox YouHaveTypeInParty
	switch VAR_FROSTHEARTH_TYPE_CHECK
	case TYPE_NORMAL, Frosthearth_TypeChecker_15
	case TYPE_FIGHTING, Frosthearth_TypeChecker_16
	case TYPE_FLYING, Frosthearth_TypeChecker_17
	case TYPE_POISON, Frosthearth_TypeChecker_18
	case TYPE_GROUND, Frosthearth_TypeChecker_19
	case TYPE_ROCK, Frosthearth_TypeChecker_20
	case TYPE_BUG, Frosthearth_TypeChecker_21
	case TYPE_GHOST, Frosthearth_TypeChecker_22
	case TYPE_STEEL, Frosthearth_TypeChecker_23
	case TYPE_FIRE, Frosthearth_TypeChecker_24
	case TYPE_WATER, Frosthearth_TypeChecker_25
	case TYPE_GRASS, Frosthearth_TypeChecker_26
	case TYPE_ELECTRIC, Frosthearth_TypeChecker_27
	case TYPE_PSYCHIC, Frosthearth_TypeChecker_28
	case TYPE_ICE, Frosthearth_TypeChecker_29
	case TYPE_DRAGON, Frosthearth_TypeChecker_30
	case TYPE_DARK, Frosthearth_TypeChecker_31
	case TYPE_FAIRY, Frosthearth_TypeChecker_32
Frosthearth_TypeChecker_13:
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_TypeChecker_37
Frosthearth_TypeChecker_36:
	setflag FLAG_DAILY_FROSTHEARTH_TYPE_CHECK
	release
	goto_if_set FLAG_Q41_FROSTHEARTH_TYPEMON_START, Frosthearth_TypeChecker_41
Frosthearth_TypeChecker_39:
	end

Frosthearth_TypeChecker_2:
	bufferstring STR_VAR_2, Frosthearth_TypeChecker_Text_0
	goto Frosthearth_TypeChecker_1

Frosthearth_TypeChecker_8:
	msgbox TypeCheckerComeBackTomorrow, MSGBOX_AUTOCLOSE
	end

Frosthearth_TypeChecker_11:
	release
	goto_if_unset FLAG_Q41_FROSTHEARTH_TYPEMON_START, Frosthearth_TypeChecker_34
Frosthearth_TypeChecker_33:
	end

Frosthearth_TypeChecker_15:
	giveitem ITEM_NORMAL_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_16:
	giveitem ITEM_FIGHTING_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_17:
	giveitem ITEM_FLYING_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_18:
	giveitem ITEM_POISON_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_19:
	giveitem ITEM_GROUND_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_20:
	giveitem ITEM_ROCK_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_21:
	giveitem ITEM_BUG_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_22:
	giveitem ITEM_GHOST_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_23:
	giveitem ITEM_STEEL_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_24:
	giveitem ITEM_FIRE_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_25:
	giveitem ITEM_WATER_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_26:
	giveitem ITEM_GRASS_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_27:
	giveitem ITEM_ELECTRIC_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_28:
	giveitem ITEM_PSYCHIC_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_29:
	giveitem ITEM_ICE_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_30:
	giveitem ITEM_DRAGON_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_31:
	giveitem ITEM_DARK_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_32:
	giveitem ITEM_FAIRY_GEM
	goto Frosthearth_TypeChecker_13

Frosthearth_TypeChecker_34:
	startquest FLAG_Q41_FROSTHEARTH_TYPEMON_START
	special ShowJournalPopupAdd
	goto Frosthearth_TypeChecker_33

Frosthearth_TypeChecker_37:
	goto ZeBagIsFull
	goto Frosthearth_TypeChecker_36

Frosthearth_TypeChecker_40:
	completequest FLAG_Q41_FROSTHEARTH_TYPEMON_COMPLETE
	special ShowJournalPopupRemove
	goto Frosthearth_TypeChecker_39

Frosthearth_TypeChecker_41:
	goto_if_unset FLAG_Q41_FROSTHEARTH_TYPEMON_COMPLETE, Frosthearth_TypeChecker_40
	goto Frosthearth_TypeChecker_39


Frosthearth_House2_Man::
	msgbox Frosthearth_House2_Man_Text, MSGBOX_NPC
	return


Frosthearth_House2_Woman::
	msgbox Frosthearth_House2_Woman_Text, MSGBOX_NPC
	return


Frosthearth_House4_Woman::
	msgbox Frosthearth_House4_Woman_Text, MSGBOX_NPC
	return


Frosthearth_Harbor_Sailor::
	msgbox Frosthearth_Harbor_Sailor_Text, MSGBOX_NPC
	return


Frosthearth_Harbor_OldWoman::
	msgbox Frosthearth_Harbor_OldWoman_Text, MSGBOX_NPC
	return


FrosthearthHarbor_Attendant::
	lock
	faceplayer
	msgbox Frosthearth_Text_GetAboard, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq FrosthearthHarbor_Attendant_2
FrosthearthHarbor_Attendant_1:
	message FrosthearthHarbor_Attendant_Text_0
	waitmessage
	dynmultichoice 23, 0, FALSE, 4, 0, 0, FrosthearthHarbor_Attendant_Text_1, FrosthearthHarbor_Attendant_Text_2, FrosthearthHarbor_Attendant_Text_3, FrosthearthHarbor_Attendant_Text_4, FrosthearthHarbor_Attendant_Text_5, SelectHyperTraining_Text_2
	switch VAR_RESULT
	case 0, FrosthearthHarbor_Attendant_6
	case 1, FrosthearthHarbor_Attendant_7
	case 2, FrosthearthHarbor_Attendant_8
	case 3, FrosthearthHarbor_Attendant_9
	case 4, FrosthearthHarbor_Attendant_10
	case 5, FrosthearthHarbor_Attendant_11
	case MULTI_B_PRESSED, FrosthearthHarbor_Attendant_11
FrosthearthHarbor_Attendant_4:
	waitstate
	release
	end

FrosthearthHarbor_Attendant_2:
	goto Harbor_ComeAgain
	goto FrosthearthHarbor_Attendant_1

FrosthearthHarbor_Attendant_6:
	call Harbor_BoardFerryGoingEast
	warp MAP_CORALGROVE_HARVOR_INTERIOR, 7, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_7:
	call Harbor_BoardFerryGoingEast
	warp MAP_COAST_TOWN_HARBOR, 16, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_8:
	call Harbor_BoardFerryGoingEast
	warp MAP_SHORESLATE_HARBOR, 16, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_9:
	call Harbor_BoardFerryGoingEast
	warp MAP_KAOLISLE_HARBOR, 7, 10
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_10:
	call Harbor_BoardFerryGoingEast
	warp MAP_ROCKLIFFE_HARBOR, 8, 3
	goto FrosthearthHarbor_Attendant_4

FrosthearthHarbor_Attendant_11:
	goto Harbor_ComeAgain
	goto FrosthearthHarbor_Attendant_4


SelectHyperTraining_Text_0:
	.string "Bottle Caps (Have {STR_VAR_1})$"

SelectHyperTraining_Text_1:
	.string "Gold Bottle Caps (Have {STR_VAR_2})$"

SelectHyperTraining_Text_2:
	.string "Never mind$"

HyperTrainingNormalBottleCap_Text_0:
	.string "HP$"

HyperTrainingNormalBottleCap_Text_1:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}HP$"

HyperTrainingNormalBottleCap_Text_2:
	.string "Attack$"

HyperTrainingNormalBottleCap_Text_3:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Attack$"

HyperTrainingNormalBottleCap_Text_4:
	.string "Defense$"

HyperTrainingNormalBottleCap_Text_5:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Defense$"

HyperTrainingNormalBottleCap_Text_6:
	.string "Sp. Atk$"

HyperTrainingNormalBottleCap_Text_7:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Sp. Atk$"

HyperTrainingNormalBottleCap_Text_8:
	.string "Sp. Def$"

HyperTrainingNormalBottleCap_Text_9:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Sp. Def$"

HyperTrainingNormalBottleCap_Text_10:
	.string "Speed$"

HyperTrainingNormalBottleCap_Text_11:
	.string "{COLOR LIGHT_GRAY}{SHADOW LIGHT_GRAY}Speed$"

HyperTrainingNormalBottleCap_Text_12:
	.string "Back$"

Hypertrain_SpAtk_Text_0:
	.string "Special Attack$"

Hypertrain_SpDef_Text_0:
	.string "Special Defense$"

Frosthearth_TypeChecker_Text_0:
	.string "an$"

Frosthearth_TypeChecker_Text_1:
	.string "a$"

FrosthearthHarbor_Attendant_Text_0:
	.string "Where would you like to sail?$"

FrosthearthHarbor_Attendant_Text_1:
	.string "Coralgrove City$"

FrosthearthHarbor_Attendant_Text_2:
	.string "Azuretide Town$"

FrosthearthHarbor_Attendant_Text_3:
	.string "Shoreslate City$"

FrosthearthHarbor_Attendant_Text_4:
	.string "Kaolisle City$"

FrosthearthHarbor_Attendant_Text_5:
	.string "Rockliffe Town$"

ChooseMonForHyperTraining::
	.string "Which one of your Pokémon do you\n"
	.string "want to do some Hyper Training on?$"

SelectedMonNotHighEnoughForHyperTraining::
	.string "Oh no… No, no, no!\p"
	.string "That Pokémon hasn't leveled up\n"
	.string "enough to be ready for my amazing\l"
	.string "Hyper Training!\l"
	.string "Only Pokémon that have reached\l"
	.string "Lv. 50 can handle the hype!$"

MonFullyHyperTrained::
	.string "But that Pokémon is already so awesome\n"
	.string "that it doesn't need any training!$"

UseWhichBottleCaps::
	.string "So will it be a Bottle Cap or\n"
	.string "a Gold Bottle Cap?\p"
	.string "See how many you've got and\n"
	.string "let me know.$"

LetsHyperTrain::
	.string "Then get hype!\p"
	.string "I'm about to do some real Hyper\n"
	.string "Training on {STR_VAR_1} here!$"

SelectedMonIsEgg::
	.string "An Egg?!\p"
	.string "I understand why you're hyped to\n"
	.string "have one, but I can't train\l"
	.string "that thing yet!$"

ComeBackForMoreHyperTraining::
	.string "Come back any time you want to\n"
	.string "hype up any of your Pokémon!$"

WillCostGoldCap::
	.string "So you want me to get all of\n"
	.string "{STR_VAR_1}'s stats hyped up?$"

CantHypertrainThatStat::
	.string "But that Pokémon is already so awesome\n"
	.string "that it doesn't need any training\l"
	.string "in that stat!$"

WhichStatToTrain::
	.string "Which one of {STR_VAR_1}'s stats do\n"
	.string "you want to do some Hyper Training on?$"

Hypertrain_Stat_Text::
	.string "So you want to have your Pokémon\n"
	.string "Hyper Trained in {STR_VAR_2}?$"

MonHasBeenHyperTrained::
	.string "All right! {STR_VAR_1} got even\n"
	.string "stronger thanks to my Hyper Training!$"

HyperTrainingIntro_Text::
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
	.string "Want to try some of my Hyper Training\n"
	.string "to boost your Pokémon's stats?$"

NotInterestedInHyperTraining::
	.string "Not interested in Hyper Training\n"
	.string "at this time?\p"
	.string "Then come back anytime!\p"
	.string "Mr. Hyper will always be hyped up\n"
	.string "to see you!$"

NoBottleCaps::
	.string "Oh no… No, no, no!\p"
	.string "You don't have a Bottle Cap or a\n"
	.string "Gold Bottle Cap! Not even one!$"

TypeCheckerComeBackTomorrow::
	.string "That was a fun little sport.\p"
	.string "Come back tomorrow, and I might\n"
	.string "have something new to give.$"

LookingForType::
	.string "You know what?\p"
	.string "Today, I would really fancy seeing\n"
	.string "{STR_VAR_2} {STR_VAR_1}-type Pokémon.\p"
	.string "If you can show me one,\n"
	.string "I'll give you something nice.$"

YouHaveTypeInParty::
	.string "Oh, but you do have\n"
	.string "{STR_VAR_2} {STR_VAR_1}-type Pokémon!\p"
	.string "Well, a promise's a promise.\n"
	.string "Here you go!$"

Frosthearth_House2_Man_Text::
	.string "Living up here ain't too bad.\p"
	.string "The heat rising from the ground is\n"
	.string "keeping our homes all nice and cozy.$"

Frosthearth_House2_Woman_Text::
	.string "Most of the time, the snowfall is\n"
	.string "actually pretty relaxing.\p"
	.string "What isn't relaxing though,\n"
	.string "are the occasional blizzards.$"

Frosthearth_House4_Woman_Text::
	.string "Have you heard the latest news?\p"
	.string "Some people have reported seeing\n"
	.string "windows to alternate universes\l"
	.string "appearing in the wilds.\p"
	.string "Sounds to me like crazy people talk.$"

Frosthearth_Harbor_Sailor_Text::
	.string "In order to sail in these parts\n"
	.string "of the world, the ships must have\l"
	.string "strengthened hulls that can withstand\l"
	.string "the impact of the ice hitting the\l"
	.string "ship's bow.$"

Frosthearth_Harbor_OldWoman_Text::
	.string "Many tourists visit Frosthearth City\n"
	.string "to watch the battles at the\l"
	.string "Pokémon World Tournament, or to\l"
	.string "relax by the hot springs.\p"
	.string "This city has something for everyone!$"

Frosthearth_Text_GetAboard::
	.string "The ferry is about to leave\n"
	.string "the port soon.\p"
	.string "Would you like to board the ferry?$"
