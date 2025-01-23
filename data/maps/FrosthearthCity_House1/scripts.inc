FrosthearthCity_House1_MapScripts::
	.byte 0


Frosthearth_HyperTraining_Guru::
	goto_if_unset FLAG_INTRODUCTION_TO_HYPER_TRAINING, Frosthearth_HyperTraining_Guru_2
	lock
	faceplayer
	msgbox InterestedInHyperTraining, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_5
	checkitem ITEM_BOTTLE_CAP
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_8
Frosthearth_HyperTraining_Guru_7:
	removeallitem ITEM_BOTTLE_CAP
	removeallitem ITEM_GOLD_BOTTLE_CAP
	msgbox CheatingAndy, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_2:
	setflag FLAG_INTRODUCTION_TO_HYPER_TRAINING
	msgbox HyperTrainingIntro_Text, MSGBOX_NPC
	end

Frosthearth_HyperTraining_Guru_5:
	msgbox NotInterestedInHyperTraining, MSGBOX_AUTOCLOSE
	end

Frosthearth_HyperTraining_Guru_8:
	checkitem ITEM_GOLD_BOTTLE_CAP
	compare VAR_RESULT, FALSE
	goto_if_eq Frosthearth_HyperTraining_Guru_10
	goto Frosthearth_HyperTraining_Guru_7

Frosthearth_HyperTraining_Guru_10:
	msgbox NoBottleCaps, MSGBOX_AUTOCLOSE
	end


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
	goto_if_eq Frosthearth_TypeChecker_34
Frosthearth_TypeChecker_33:
	setflag FLAG_DAILY_FROSTHEARTH_TYPE_CHECK
	release
	end

Frosthearth_TypeChecker_2:
	bufferstring STR_VAR_2, Frosthearth_TypeChecker_Text_0
	goto Frosthearth_TypeChecker_1

Frosthearth_TypeChecker_8:
	msgbox TypeCheckerComeBackTomorrow, MSGBOX_AUTOCLOSE
	end

Frosthearth_TypeChecker_11:
	release
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
	goto ZeBagIsFull
	goto Frosthearth_TypeChecker_33


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
	dynmultichoice 23, 0, FALSE, 4, 0, 0, FrosthearthHarbor_Attendant_Text_1, FrosthearthHarbor_Attendant_Text_2, FrosthearthHarbor_Attendant_Text_3, FrosthearthHarbor_Attendant_Text_4, FrosthearthHarbor_Attendant_Text_5, FrosthearthHarbor_Attendant_Text_6
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

FrosthearthHarbor_Attendant_Text_6:
	.string "Nevermind$"

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
	.string "Then come back anytime!\p"
	.string "Mr. Hyper will always be hyped up\n"
	.string "to see you!$"

NoBottleCaps::
	.string "Oh no… No, no, no!\p"
	.string "You don't have a Bottle Cap or a\n"
	.string "Gold Bottle Cap! Not even one!$"

CheatingAndy::
	.string "There's no way you could have obtained\n"
	.string "these Bottle Caps legitimately!\p"
	.string "I have no choice but to\n"
	.string "confiscate them!$"

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
