DrisledgeTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DespawnDrisledgeNPCs
	.byte 0


DespawnDrisledgeNPCs::
	compare VAR_DRISLEDGE_TOWN_STATE, 7
	goto_if_ge DespawnDrisledgeNPCs_1
	return

DespawnDrisledgeNPCs_1:
	setflag FLAG_TEMP_1
	return


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
