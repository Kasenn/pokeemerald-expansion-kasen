DrisledgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DrisledgeTownOnTransition
	map_script MAP_SCRIPT_ON_LOAD, DrisledgeTownOnLoad
	.byte 0


DrisledgeTownOnLoad::
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	call SetDrisledgeGym
	return


DrisledgeTownOnTransition::
	setflag FLAG_VISITED_DRISLEDGE
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	special SetDrisledgeWeather
	call SetDrisledgeNPCs
	call SetDrisledgeGym
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeTownOnTransition_1
	return

DrisledgeTownOnTransition_1:
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeTownOnTransition_3
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeTownOnTransition_3
	setmaplayoutindex LAYOUT_DRISLEDGE_TOWN_BROKEN
	return

DrisledgeTownOnTransition_3:
	setmaplayoutindex LAYOUT_DRISLEDGE_TOWN_BROKEN2
	return


SetDrisledgeNPCs::
	setflag FLAG_TEMP_2
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ge SetDrisledgeNPCs_2
SetDrisledgeNPCs_1:
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeNPCs_6
SetDrisledgeNPCs_4:
	return

SetDrisledgeNPCs_2:
	setflag FLAG_TEMP_1
	goto SetDrisledgeNPCs_1

SetDrisledgeNPCs_5:
	clearflag FLAG_TEMP_2
	goto SetDrisledgeNPCs_4

SetDrisledgeNPCs_6:
	compare VAR_TEMP_0, 6
	goto_if_le SetDrisledgeNPCs_5
	compare VAR_TEMP_0, 18
	goto_if_ge SetDrisledgeNPCs_5
	goto SetDrisledgeNPCs_4


SetUpBrokenDrisledge::
	call SetUpDrisledgeTrees
	call SetUpDrisledgeBushes
	call SetUpDrisledgePuddles
	call SetUpDrisledgeHouses
	return


SetUpGhostTownDrisledge::
	return


SetUpDrisledgeTrees::
	setmetatile 23, 22, 0x204, FALSE
	setmetatile 22, 14, 0x204, FALSE
	setmetatile 24, 11, 0x204, FALSE
	setmetatile 9, 6, 0x254, FALSE
	setmetatile 10, 6, 0x254, FALSE
	setmetatile 11, 6, 0x254, FALSE
	setmetatile 9, 7, 0x254, FALSE
	setmetatile 10, 7, 0x254, FALSE
	setmetatile 11, 7, 0x254, FALSE
	setmetatile 9, 8, 0x254, FALSE
	setmetatile 10, 8, 0x254, FALSE
	setmetatile 7, 8, 0x254, FALSE
	setmetatile 8, 8, 0x254, FALSE
	setmetatile 7, 9, 0x254, FALSE
	setmetatile 8, 9, 0x254, FALSE
	return


SetUpDrisledgeBushes::
	setmetatile 14, 1, 0x205, FALSE
	setmetatile 15, 4, 0x205, FALSE
	setmetatile 18, 4, 0x205, FALSE
	setmetatile 20, 5, 0x205, FALSE
	setmetatile 28, 6, 0x205, FALSE
	setmetatile 15, 7, 0x205, FALSE
	setmetatile 15, 8, 0x205, FALSE
	setmetatile 26, 9, 0x205, FALSE
	setmetatile 27, 9, 0x205, FALSE
	setmetatile 27, 10, 0x205, FALSE
	setmetatile 25, 11, 0x205, FALSE
	setmetatile 25, 12, 0x205, FALSE
	setmetatile 22, 12, 0x205, FALSE
	setmetatile 16, 12, 0x205, FALSE
	setmetatile 17, 12, 0x205, FALSE
	setmetatile 12, 12, 0x205, FALSE
	setmetatile 12, 13, 0x205, FALSE
	setmetatile 15, 14, 0x205, FALSE
	setmetatile 15, 15, 0x205, FALSE
	setmetatile 20, 14, 0x205, FALSE
	setmetatile 20, 15, 0x205, FALSE
	setmetatile 20, 16, 0x205, FALSE
	setmetatile 21, 15, 0x205, FALSE
	setmetatile 24, 14, 0x205, FALSE
	setmetatile 5, 21, 0x205, FALSE
	setmetatile 5, 22, 0x205, FALSE
	setmetatile 6, 22, 0x205, FALSE
	setmetatile 6, 24, 0x205, FALSE
	setmetatile 11, 23, 0x205, FALSE
	setmetatile 12, 22, 0x205, FALSE
	setmetatile 20, 22, 0x205, FALSE
	setmetatile 20, 24, 0x205, FALSE
	setmetatile 21, 23, 0x205, FALSE
	setmetatile 23, 24, 0x205, FALSE
	return


SetUpDrisledgePuddles::
	setmetatile 13, 5, 0x254, FALSE
	setmetatile 14, 5, 0x254, FALSE
	setmetatile 12, 6, 0x254, FALSE
	setmetatile 13, 6, 0x254, FALSE
	setmetatile 14, 6, 0x254, FALSE
	setmetatile 12, 7, 0x254, FALSE
	setmetatile 13, 7, 0x254, FALSE
	setmetatile 14, 7, 0x254, FALSE
	setmetatile 9, 9, 0x254, FALSE
	setmetatile 10, 9, 0x254, FALSE
	setmetatile 11, 9, 0x254, FALSE
	setmetatile 8, 10, 0x254, FALSE
	setmetatile 9, 10, 0x254, FALSE
	setmetatile 10, 10, 0x254, FALSE
	setmetatile 11, 10, 0x254, FALSE
	setmetatile 8, 11, 0x254, FALSE
	setmetatile 9, 11, 0x254, FALSE
	setmetatile 10, 11, 0x254, FALSE
	setmetatile 11, 11, 0x254, FALSE
	return


SetUpDrisledgeHouses::
	setmetatile 7, 21, 0x2E8, FALSE
	setmetatile 8, 21, 0x2E9, FALSE
	setmetatile 9, 21, 0x2EA, FALSE
	setmetatile 10, 21, 0x2EB, FALSE
	setmetatile 7, 22, 0x2F4, TRUE
	setmetatile 8, 22, 0x2F5, TRUE
	setmetatile 9, 22, 0x2F2, TRUE
	setmetatile 10, 22, 0x2F3, TRUE
	setmetatile 7, 23, 0x2F8, TRUE
	setmetatile 8, 23, 0x2FD, TRUE
	setmetatile 9, 23, 0x2FA, TRUE
	setmetatile 10, 23, 0x2FB, TRUE
	setmetatile 7, 24, 0x300, TRUE
	setmetatile 9, 24, 0x302, TRUE
	setmetatile 10, 24, 0x303, TRUE
	setmetatile 7 + 9, 21 -8, 0x2E8, FALSE
	setmetatile 8 + 9, 21 -8, 0x2E9, FALSE
	setmetatile 9 + 9, 21 -8, 0x2EA, FALSE
	setmetatile 10 + 9, 21 -8, 0x2EB, FALSE
	setmetatile 7 + 9, 22 -8, 0x2F4, TRUE
	setmetatile 8 + 9, 22 -8, 0x2F5, TRUE
	setmetatile 9 + 9, 22 -8, 0x2F2, TRUE
	setmetatile 10 + 9, 22 -8, 0x2F3, TRUE
	setmetatile 7 + 9, 23 -8, 0x2F8, TRUE
	setmetatile 8 + 9, 23 -8, 0x2FD, TRUE
	setmetatile 9 + 9, 23 -8, 0x2FA, TRUE
	setmetatile 10 + 9, 23 -8, 0x2FB, TRUE
	setmetatile 7 + 9, 24 -8, 0x300, TRUE
	setmetatile 9 + 9, 24 -8, 0x302, TRUE
	setmetatile 10 + 9, 24 -8, 0x303, TRUE
	return


SetDrisledgeGym::
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge SetDrisledgeGym_2
	setdynamicwarp MAP_DRISLEDGE_GYM, 5, 51
SetDrisledgeGym_1:
	return

SetDrisledgeGym_2:
	setdynamicwarp MAP_DRISLEDGE_GYM_HOUSE, 4, 8
	goto SetDrisledgeGym_1


Drisledge_Sign1::
	msgbox Drisledge_Sign1_Text, MSGBOX_SIGN
	return


Drisledge_Sign2::
	msgbox Drisledge_Sign2_Text, MSGBOX_SIGN
	return


DrisledgeMart_OldMan::
	lock
	msgbox DrisledgeMart_OldMan_Text
	call SetDrisledgeOldPersonVar
	release
	return


Drisledge_LittleGirl::
	msgbox Drisledge_LittleGirl_Text, MSGBOX_NPC
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge Drisledge_LittleGirl_2
	compare VAR_DRISLEDGE_TOWN_STATE, 1
	goto_if_ne Drisledge_LittleGirl_4
	compare VAR_DRISLEDGE_TOWN_STATE, 3
	goto_if_ne Drisledge_LittleGirl_4
	compare VAR_DRISLEDGE_TOWN_STATE, 5
	goto_if_ne Drisledge_LittleGirl_4
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne Drisledge_LittleGirl_4
	return

Drisledge_LittleGirl_2:
	end

Drisledge_LittleGirl_4:
	addvar VAR_DRISLEDGE_TOWN_STATE, 1
	return


Drisledge_LittleGirl2::
	msgbox Drisledge_LittleGirl_Text2, MSGBOX_NPC
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge Drisledge_LittleGirl2_2
	compare VAR_DRISLEDGE_TOWN_STATE, 2
	goto_if_ne Drisledge_LittleGirl2_4
	compare VAR_DRISLEDGE_TOWN_STATE, 3
	goto_if_ne Drisledge_LittleGirl2_4
	compare VAR_DRISLEDGE_TOWN_STATE, 6
	goto_if_ne Drisledge_LittleGirl2_4
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne Drisledge_LittleGirl2_4
	return

Drisledge_LittleGirl2_2:
	end

Drisledge_LittleGirl2_4:
	addvar VAR_DRISLEDGE_TOWN_STATE, 2
	return


SetDrisledgeOldPersonVar::
	compare VAR_DRISLEDGE_TOWN_STATE, 10
	goto_if_ge SetDrisledgeOldPersonVar_2
	compare VAR_DRISLEDGE_TOWN_STATE, 4
	goto_if_ne SetDrisledgeOldPersonVar_4
	compare VAR_DRISLEDGE_TOWN_STATE, 5
	goto_if_ne SetDrisledgeOldPersonVar_4
	compare VAR_DRISLEDGE_TOWN_STATE, 6
	goto_if_ne SetDrisledgeOldPersonVar_4
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ne SetDrisledgeOldPersonVar_4
	return

SetDrisledgeOldPersonVar_2:
	release
	end

SetDrisledgeOldPersonVar_4:
	addvar VAR_DRISLEDGE_TOWN_STATE, 4
	return


DrisledgeTown_House2_ExpertM::
	lock
	msgbox DrisledgeTown_House2_ExpertM_Text
	call SetDrisledgeOldPersonVar
	release
	return


DrisledgeTown_House2_ExpertF::
	msgbox DrisledgeTown_House2_ExpertF_Text, MSGBOX_NPC
	call SetDrisledgeOldPersonVar
	return


Drisledge_House1_OldWoman::
	msgbox Drisledge_House1_OldWoman_Text, MSGBOX_NPC
	call SetDrisledgeOldPersonVar
	return


DrisledgeDoll1::
	bufferspeciesname STR_VAR_1, SPECIES_SEEDOT
	goto DrisledgeDollMain
	return


DrisledgeDoll2::
	bufferspeciesname STR_VAR_1, SPECIES_SMOOCHUM
	goto DrisledgeDollMain
	return


DrisledgeDoll3::
	bufferspeciesname STR_VAR_1, SPECIES_GULPIN
	goto DrisledgeDollMain
	return


DrisledgeDoll4::
	bufferspeciesname STR_VAR_1, SPECIES_CLEFAIRY
	goto DrisledgeDollMain
	return


DrisledgeDoll5::
	bufferspeciesname STR_VAR_1, SPECIES_DUSKULL
	goto DrisledgeDollMain
	return


DrisledgeDoll6::
	bufferspeciesname STR_VAR_1, SPECIES_JIGGLYPUFF
	goto DrisledgeDollMain
	return


DrisledgeDoll7::
	bufferspeciesname STR_VAR_1, SPECIES_AZURILL
	goto DrisledgeDollMain
	return


DrisledgeDoll8::
	bufferspeciesname STR_VAR_1, SPECIES_WYNAUT
	goto DrisledgeDollMain
	return


DrisledgeDoll9::
	bufferspeciesname STR_VAR_1, SPECIES_DITTO
	goto DrisledgeDollMain
	return


DrisledgeDoll10::
	bufferspeciesname STR_VAR_1, SPECIES_KECLEON
	goto DrisledgeDollMain
	return


DrisledgeDoll11::
	bufferspeciesname STR_VAR_1, SPECIES_LOTAD
	goto DrisledgeDollMain
	return


DrisledgeDoll12::
	bufferspeciesname STR_VAR_1, SPECIES_MEOWTH
	goto DrisledgeDollMain
	return


DrisledgeDoll13::
	bufferspeciesname STR_VAR_1, SPECIES_WOOPER
	goto DrisledgeDollMain
	return


DrisledgeDoll14::
	bufferspeciesname STR_VAR_1, SPECIES_TOGEPI
	goto DrisledgeDollMain
	return


DrisledgeDollMain::
	msgbox DrisledgeDollMain_Text, MSGBOX_SIGN
	return


Drisledge_Pokecenter_Boy3::
	msgbox Drisledge_Pokecenter_Boy3_Text, MSGBOX_NPC
	return


Drisledge_Pokecenter_Man1::
	msgbox Drisledge_Pokecenter_Man1_Text, MSGBOX_NPC
	return


Drisledge_Pokecenter_Girl2::
	msgbox Drisledge_Pokecenter_Girl2_Text, MSGBOX_NPC
	return


DrisledgeGymToggle::
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_eq DrisledgeGymToggle_1
	setvar VAR_DRISLEDGE_TOWN_STATE, 30
	msgbox DrisledgeGymToggle_Text_0, MSGBOX_SIGN
	return

DrisledgeGymToggle_1:
	setvar VAR_DRISLEDGE_TOWN_STATE, 1
	msgbox DrisledgeGymToggle_Text_0, MSGBOX_SIGN
	return


Drisledge_BerryGastly::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
	waitmoncry
	goto_if_unset FLAG_DRISLEDGE_ITEM2, Drisledge_BerryGastly_2
Drisledge_BerryGastly_1:
	release
	end

Drisledge_BerryGastly_2:
	giveitem ITEM_ORAN_BERRY
	setflag FLAG_DRISLEDGE_ITEM2
	goto Drisledge_BerryGastly_1


Drisledge_Haunter::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HAUNTER, CRY_MODE_NORMAL
	msgbox DrisledgeHaunter_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeBanette::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
	msgbox DrisledgeBanette_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeBanette1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BANETTE, CRY_MODE_NORMAL
	msgbox DrisledgeBanette_Text, MSGBOX_DEFAULT
	waitmoncry
	goto_if_unset FLAG_DRISLEDGE_ITEM3, DrisledgeBanette1_2
DrisledgeBanette1_1:
	release
	end

DrisledgeBanette1_2:
	giveitem ITEM_COLBUR_BERRY
	setflag FLAG_DRISLEDGE_ITEM3
	goto DrisledgeBanette1_1


Drisledge_Acerola::
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Drisledge_Acerola_2
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_1
Drisledge_Acerola_1:
	goto_if_set FLAG_RECEIVED_HM_SURF, Drisledge_Acerola_5
	msgbox AcerolaCheckWithScientist, MSGBOX_NPC
	return

Drisledge_Acerola_2:
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_0
	goto Drisledge_Acerola_1

Drisledge_Acerola_5:
	goto_if_set FLAG_ACEROLA_ITEM, Drisledge_Acerola_9
	compare VAR_TEMP_3, 1
	goto_if_eq Drisledge_Acerola_12
	msgbox AcerolaYoureBack, MSGBOX_NPC
	goto_if_unset FLAG_ACEROLA_ITEM, Drisledge_Acerola_14
	return

Drisledge_Acerola_9:
	msgbox AcerolaWithFriends, MSGBOX_NPC
	end

Drisledge_Acerola_12:
	msgbox AcerolaLetsDance, MSGBOX_NPC
	end

Drisledge_Acerola_14:
	setvar VAR_TEMP_3, 1
	return


AcerolaDanceTriggerCorner::
	addvar VAR_TEMP_4, 1
	release
	return


AcerolaDanceTriggerWest::
	setvar VAR_TEMP_5, 1
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerNorth::
	setvar VAR_TEMP_5, 2
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerEast::
	setvar VAR_TEMP_5, 3
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerSouth::
	setvar VAR_TEMP_5, 4
	goto AcerolaDanceTriggerMain
	return


AcerolaDanceTriggerMain::
	addvar VAR_TEMP_4, 1
	compare VAR_TEMP_4, 50
	goto_if_lt AcerolaDanceTriggerMain_2
	checkitemspace ITEM_BUG_TERA_SHARD
	compare VAR_RESULT, FALSE
	goto_if_eq AcerolaDanceTriggerMain_5
	lock
	safefollow
	applymovement 6, WW_Face
	waitmovement 0
	playse SE_PIN
	applymovement 6, ExclamationMark
	waitmovement 0
	delay 48
	switch VAR_TEMP_5
	case 1, AcerolaDanceTriggerMain_9
	case 2, AcerolaDanceTriggerMain_10
	case 3, AcerolaDanceTriggerMain_11
	case 4, AcerolaDanceTriggerMain_12
AcerolaDanceTriggerMain_7:
	delay 15
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq AcerolaDanceTriggerMain_14
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_1
AcerolaDanceTriggerMain_13:
	msgbox AcerolaGoodDancer
	giveitem ITEM_TM_CAPTIVATE
	setflag FLAG_ACEROLA_ITEM
	setvar VAR_TEMP_3, 0
	release
	return

AcerolaDanceTriggerMain_2:
	release
	end

AcerolaDanceTriggerMain_5:
	release
	end

AcerolaDanceTriggerMain_9:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_10:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_11:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_12:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto AcerolaDanceTriggerMain_7

AcerolaDanceTriggerMain_14:
	bufferstring STR_VAR_1, Drisledge_Acerola_Text_0
	goto AcerolaDanceTriggerMain_13


Drisledge_Gengar::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GENGAR, CRY_MODE_NORMAL
	msgbox DrisledgeGengar_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Drisledge_Mismagius::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MISMAGIUS, CRY_MODE_NORMAL
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


Drisledge_Mimikyu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MIMIKYU, CRY_MODE_NORMAL
	msgbox DrisledgeMimikyu_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeGymToggle_Text_0:
	.string "Town state changed.$"

Drisledge_Acerola_Text_0:
	.string "mister$"

Drisledge_Acerola_Text_1:
	.string "miss$"

Drisledge_Sign1_Text::
	.string "DRISLEDGE TOWN\n"
	.string "“The happiest town in the world.”$"

Drisledge_Sign2_Text::
	.string "Drisledge Town Pokémon Gym$"

DrisledgeMart_OldMan_Text::
	.string "I feel like the products here are\n"
	.string "constantly changing locations.\l"
	.string "I can never find what I want.$"

Drisledge_LittleGirl_Text::
	.string "The adults hate the rain so there's\n"
	.string "nobody to ruin our fun out here!$"

Drisledge_LittleGirl_Text2::
	.string "Whee!$"

DrisledgeTown_House2_ExpertM_Text::
	.string "Another rainy day…\n"
	.string "Splendid…$"

DrisledgeTown_House2_ExpertF_Text::
	.string "There's not much to do in a town\n"
	.string "where it never stops raining.\p"
	.string "At least the sound of raindrops\n"
	.string "hitting the roof is relaxing, I guess…$"

Drisledge_House1_OldWoman_Text::
	.string "Do you like my dolls?\p"
	.string "Sometimes it can be a bit noisy when\n"
	.string "everybody starts talking at the same\l"
	.string "time, but other than that, they tend to\l"
	.string "be very well-behaved.$"

DrisledgeDollMain_Text::
	.string "It's a regular {STR_VAR_1} doll.$"

Drisledge_Pokecenter_Boy3_Text::
	.string "Is it just me or are the locals\n"
	.string "a bit weird?$"

Drisledge_Pokecenter_Man1_Text::
	.string "I was afraid we might get drenched\n"
	.string "on our way here.\p"
	.string "Thankfully my Pokémon was holding\n"
	.string "a Utility Umbrella and was able to\l"
	.string "keep us dry through the rain.$"

Drisledge_Pokecenter_Girl2_Text::
	.string "I hate the rain.\n"
	.string "I hope it stops soon.$"

DrisledgeHaunter_Text::
	.string "Haaan!$"

DrisledgeBanette_Text::
	.string "Baaan!$"

AcerolaWithFriends::
	.string "If you're not busy, you\n"
	.string "could stay here forever!\p"
	.string "We can keep dancing and having\n"
	.string "fun with friends!$"

AcerolaLetsDance::
	.string "Yay! Now we've got a real\n"
	.string "dance party going!$"

AcerolaGoodDancer::
	.string "Wow, {STR_VAR_1}, you're\n"
	.string "a really good dancer!\p"
	.string "One of my friends was so impressed\n"
	.string "that they wanted you to have this.$"

AcerolaYoureBack::
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I'm just having some fun with\n"
	.string "my friends.\p"
	.string "If you don't have anything else in\n"
	.string "your mind, would you like to join us?\p"
	.string "We can keep dancing until our legs no\n"
	.string "longer have the energy to carry us!$"

AcerolaCheckWithScientist::
	.string "Hiya, {STR_VAR_1}!\p"
	.string "I'm just having some fun with\n"
	.string "my friends.\p"
	.string "Did you already visit yours near\n"
	.string "Amberock Town?$"

DrisledgeGengar_Text::
	.string "Gen gen!$"

DrisledgeMimikyu_Text::
	.string "Mii-mii!$"
