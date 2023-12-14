WW_Grotto_MapScripts::
	.byte 0


WW_GrottoPokemon::
	lockall
	random 8
	compare VAR_RESULT, 0
	goto_if_eq WW_GrottoPokemon_2
WW_GrottoPokemon_1:
	compare VAR_RESULT, 1
	goto_if_eq WW_GrottoPokemon_5
WW_GrottoPokemon_4:
	compare VAR_RESULT, 2
	goto_if_eq WW_GrottoPokemon_8
WW_GrottoPokemon_7:
	compare VAR_RESULT, 3
	goto_if_eq WW_GrottoPokemon_11
WW_GrottoPokemon_10:
	compare VAR_RESULT, 4
	goto_if_eq WW_GrottoPokemon_14
WW_GrottoPokemon_13:
	compare VAR_RESULT, 5
	goto_if_eq WW_GrottoPokemon_17
WW_GrottoPokemon_16:
	compare VAR_RESULT, 6
	goto_if_eq WW_GrottoPokemon_20
WW_GrottoPokemon_19:
	compare VAR_RESULT, 7
	goto_if_eq WW_GrottoPokemon_23
WW_GrottoPokemon_22:
	compare VAR_RESULT, 8
	goto_if_eq WW_GrottoPokemon_26
WW_GrottoPokemon_25:
	dowildbattle
	delay 20
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	delay 20
	setflag FLAG_UNUSED_WWGROTTO
	fadescreenswapbuffers FADE_FROM_BLACK
	delay 20
	release
	end

WW_GrottoPokemon_2:
	playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_DUNSPARCE, 10
	goto WW_GrottoPokemon_1

WW_GrottoPokemon_5:
	playmoncry SPECIES_HERACROSS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_HERACROSS, 10
	goto WW_GrottoPokemon_4

WW_GrottoPokemon_8:
	playmoncry SPECIES_SWABLU, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SWABLU, 10
	goto WW_GrottoPokemon_7

WW_GrottoPokemon_11:
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SNEASEL, 10
	goto WW_GrottoPokemon_10

WW_GrottoPokemon_14:
	playmoncry SPECIES_BAGON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_BAGON, 10
	goto WW_GrottoPokemon_13

WW_GrottoPokemon_17:
	playmoncry SPECIES_GLIGAR, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GLIGAR, 10
	goto WW_GrottoPokemon_16

WW_GrottoPokemon_20:
	playmoncry SPECIES_ABSOL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ABSOL, 10
	goto WW_GrottoPokemon_19

WW_GrottoPokemon_23:
	playmoncry SPECIES_SPHEAL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SPHEAL, 10
	goto WW_GrottoPokemon_22

WW_GrottoPokemon_26:
	playmoncry SPECIES_SKORUPI, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SKORUPI, 10
	goto WW_GrottoPokemon_25

