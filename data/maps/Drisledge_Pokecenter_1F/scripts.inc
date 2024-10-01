Drisledge_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DrisledgePokeCenter1F_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, DrisledgeCenter_SetTiles
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Drisledge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Drisledge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
	.2byte 0


DrisledgePokeCenter1F_OnTransition::
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	setrespawn HEAL_LOCATION_DRISLEDGE_TOWN
	call Common_EventScript_UpdateBrineyLocation
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgePokeCenter1F_OnTransition_2
DrisledgePokeCenter1F_OnTransition_1:
	end

DrisledgePokeCenter1F_OnTransition_2:
	setflag FLAG_TEMP_1
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgePokeCenter1F_OnTransition_4
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgePokeCenter1F_OnTransition_4
	clearflag FLAG_TEMP_3
	setweather WEATHER_SHADE
	playbgm MUS_NONE, TRUE
	goto DrisledgePokeCenter1F_OnTransition_1

DrisledgePokeCenter1F_OnTransition_4:
	setweather WEATHER_SHADE
	clearflag FLAG_TEMP_2
	goto DrisledgePokeCenter1F_OnTransition_1


DrisledgeCenter_SetTiles::
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeCenter_SetTiles_2
DrisledgeCenter_SetTiles_1:
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_2
	gettime
	copyvar VAR_TEMP_0, VAR_0x8000
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeCenter_SetTiles_4
	return

DrisledgeCenter_SetTiles_2:
	setmetatile 5, 2, 0x051, FALSE
	setmetatile 6, 2, 0x21E, FALSE
	setmetatile 7, 2, 0x052, FALSE
	setmetatile 5, 3, 0x059, TRUE
	setmetatile 6, 3, 0x23C, FALSE
	setmetatile 7, 3, 0x05A, TRUE
	setmetatile 6, 4, 0x225, FALSE
	setmetatile 7, 4, 0x267, FALSE
	goto DrisledgeCenter_SetTiles_1

DrisledgeCenter_SetTiles_4:
	setflag FLAG_TEMP_1
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeCenter_SetTiles_6
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeCenter_SetTiles_6
	clearflag FLAG_TEMP_3
	setweather WEATHER_SHADE
	playbgm MUS_NONE, TRUE
	return

DrisledgeCenter_SetTiles_6:
	setweather WEATHER_SHADE
	clearflag FLAG_TEMP_2
	return


DrisledgePokeCenter1F_NurseGengar::
	call Drisledge_NurseGengar
	waitmessage
	waitbuttonpress
	release
	end


Drisledge_NurseGengar::
	lock
	faceplayer
	msgbox GengarBehindCounter, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq Drisledge_NurseGengar_2
Drisledge_NurseGengar_1:
	release
	end

Drisledge_NurseGengar_2:
	goto Gengar_HealPkmn
	goto Drisledge_NurseGengar_1


Gengar_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	message GengarTakesPokemon
	waitmessage
	call Gengar_TakeAndHealPkmn
	call Gengar_ReturnPkmn
	release
	end


Gengar_TakeAndHealPkmn::
	applymovement 8, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	return


Gengar_ReturnPkmn::
	message GengarRestoredPkmnToFull
	waitmessage
	applymovement 8, GengarSpin
	waitmovement 0
	message GengarHappy
	waitmessage
	waitbuttonpress
	return


GengarSpin:
	walk_in_place_faster_left
	walk_in_place_faster_up
	walk_in_place_faster_right
	walk_in_place_faster_down
	walk_in_place_faster_left
	walk_in_place_faster_up
	walk_in_place_faster_right
	walk_in_place_faster_down
	walk_in_place_faster_left
	walk_in_place_faster_up
	walk_in_place_faster_right
	walk_in_place_faster_down
	walk_in_place_faster_left
	walk_in_place_faster_up
	walk_in_place_faster_right
	walk_in_place_faster_down
	walk_in_place_faster_left
	walk_in_place_faster_up
	walk_in_place_faster_right
	walk_in_place_faster_down
	step_end

DrisledgeCenter_Misdreavus::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MISDREAVUS, CRY_MODE_NORMAL
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeCenter_Sableye::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SABLEYE, CRY_MODE_NORMAL
	msgbox DrisledgeSableye_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeCenter_Gastly::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeCenter_Gastly1::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	turnobject 11, DIR_WEST
	end


DrisledgeCenter_Gastly2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	turnobject 12, DIR_EAST
	end


DrisledgeCenter_Shuppet::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
	msgbox DrisledgeShuppet_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeCenter_Phantump::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PHANTUMP, CRY_MODE_NORMAL
	msgbox DrisledgePhantump_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end


DrisledgeCenter_NoNurse::
	lock
	msgbox NobodyBehindCenterCounter, MSGBOX_YESNO
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgeCenter_NoNurse_2
DrisledgeCenter_NoNurse_1:
	release
	end

DrisledgeCenter_NoNurse_2:
	closemessage
	goto Solo_HealPkmn
	goto DrisledgeCenter_NoNurse_1


Solo_HealPkmn::
	special SpawnCameraObject
	incrementgamestat GAME_STAT_USED_POKECENTER
	playse SE_LEDGE
	setmetatile 6, 8, 0x053, TRUE
	special DrawWholeMapView
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToNorth
	delay 22
	setmetatile 6, 8, 0x036, TRUE
	setmetatile 6, 9, 0x054, TRUE
	special DrawWholeMapView
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	message SoloPkmnHealed
	waitmessage
	waitbuttonpress
	closemessage
	delay 20
	playse SE_LEDGE
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToSouth
	delay 8
	setmetatile 6, 8, 0x053, TRUE
	setmetatile 6, 9, 0x205, TRUE
	special DrawWholeMapView
	waitmovement 0
	special RemoveCameraObject
	special HealPlayerParty
	release
	return


HopOverLedgeToNorth:
	jump_2_up
	delay_16
	walk_in_place_fast_left
	step_end

HopOverLedgeToSouth:
	jump_2_down
	delay_16
	step_end

GengarBehindCounter::
	.string "There seems to be a Gengar\n"
	.string "behind the counter.\p"
	.string "Give your Pokémon to the Gengar?$"

GengarTakesPokemon::
	.string "The Gengar takes your Pokémon\n"
	.string "for a few seconds.$"

GengarRestoredPkmnToFull::
	.string "The Gengar has restored\n"
	.string "your Pokémon to full health.$"

GengarHappy::
	.string "The Gengar seems happy to serve, and\n"
	.string "probably hopes to see you again soon.$"

DrisledgeMisdreavus_Text::
	.string "Mi-mii!$"

DrisledgeSableye_Text::
	.string "Shaaa…$"

DrisledgeGastly_Text::
	.string "Ghaa!$"

DrisledgeShuppet_Text::
	.string "Sha-shaa…$"

DrisledgePhantump_Text::
	.string "Fa-fa!$"

NobodyBehindCenterCounter::
	.string "There's nobody behind the counter,\n"
	.string "but the machine looks operational.\p"
	.string "Jump over the counter and heal\n"
	.string "your Pokémon?$"

SoloPkmnHealed::
	.string "Your Pokémon have been restored\n"
	.string "to full health.$"
