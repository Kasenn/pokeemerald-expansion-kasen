Drisledge_Pokecenter_1F_MapScripts::
# 2 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrisledgePokeCenter1F_OnTransition
# 3 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DrisledgeCenter_SetTiles
# 4 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Drisledge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Drisledge_Pokecenter_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
# 6 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
# 7 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 10, AutomaticUpdate3
# 8 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 11, AutomaticUpdate4
# 9 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script_2 VAR_DEBUG, 12, AutomaticUpdate5
	.2byte 0


DrisledgePokeCenter1F_OnTransition::
# 14 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 15 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 16 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DRISLEDGE_TOWN
# 17 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 18 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	gettime
# 19 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 20 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgePokeCenter1F_OnTransition_2
DrisledgePokeCenter1F_OnTransition_1:
	end

DrisledgePokeCenter1F_OnTransition_2:
# 21 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 22 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgePokeCenter1F_OnTransition_4
# 22 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgePokeCenter1F_OnTransition_4
# 27 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 28 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 29 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto DrisledgePokeCenter1F_OnTransition_1

DrisledgePokeCenter1F_OnTransition_4:
# 23 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 24 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto DrisledgePokeCenter1F_OnTransition_1


DrisledgeCenter_SetTiles::
# 36 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeCenter_SetTiles_2
DrisledgeCenter_SetTiles_1:
# 46 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 47 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 48 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	gettime
# 49 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 50 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeCenter_SetTiles_4
	return

DrisledgeCenter_SetTiles_2:
# 37 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 5, 2, 0x051, FALSE
# 38 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 2, 0x21E, FALSE
# 39 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 7, 2, 0x052, FALSE
# 40 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 5, 3, 0x059, TRUE
# 41 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 3, 0x23C, FALSE
# 42 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 7, 3, 0x05A, TRUE
# 43 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 4, 0x225, FALSE
# 44 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 7, 4, 0x267, FALSE
	goto DrisledgeCenter_SetTiles_1

DrisledgeCenter_SetTiles_4:
# 51 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 52 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeCenter_SetTiles_6
# 52 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeCenter_SetTiles_6
# 57 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 58 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 59 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playbgm MUS_NONE, TRUE
	return

DrisledgeCenter_SetTiles_6:
# 53 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 54 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	return


DrisledgePokeCenter1F_NurseGengar::
# 65 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Drisledge_NurseGengar
# 66 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 67 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 68 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


Drisledge_NurseGengar::
# 73 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 74 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 75 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox GengarBehindCounter, MSGBOX_YESNO
# 76 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Drisledge_NurseGengar_2
Drisledge_NurseGengar_1:
# 79 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end

Drisledge_NurseGengar_2:
# 77 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	goto Gengar_HealPkmn
	goto Drisledge_NurseGengar_1


Gengar_HealPkmn::
# 83 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 84 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message GengarTakesPokemon
# 85 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 86 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Gengar_TakeAndHealPkmn
# 87 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Gengar_ReturnPkmn
# 88 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


Gengar_TakeAndHealPkmn::
# 92 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement 8, Movement_PkmnCenterNurse_Turn
# 93 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 94 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 95 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 96 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 97 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 98 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special HealPlayerParty
	return


Gengar_ReturnPkmn::
# 102 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message GengarRestoredPkmnToFull
# 103 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 104 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement 8, GengarSpin
# 105 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 106 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message GengarHappy
# 107 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 108 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
	return


# 130 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
GengarSpin:
# 131 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 132 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 134 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 135 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 136 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 137 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 138 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 140 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 141 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 142 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 143 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 144 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 145 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 146 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 147 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 150 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 151 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	step_end

DrisledgeCenter_Misdreavus::
# 155 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 156 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 157 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 158 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_MISDREAVUS, CRY_MODE_NORMAL
# 159 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
# 160 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 161 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Sableye::
# 165 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 166 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 167 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 168 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_NORMAL
# 169 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeSableye_Text, MSGBOX_DEFAULT
# 170 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 171 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Gastly::
# 175 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 176 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 177 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 178 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 179 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 180 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 181 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Gastly1::
# 185 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 186 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 187 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 188 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 189 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 190 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 191 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
# 192 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	turnobject 11, DIR_WEST
	end


DrisledgeCenter_Gastly2::
# 196 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 197 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 198 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 199 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 200 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 201 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 202 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
# 203 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	turnobject 12, DIR_EAST
	end


DrisledgeCenter_Shuppet::
# 207 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 208 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 209 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 210 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 211 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeShuppet_Text, MSGBOX_DEFAULT
# 212 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 213 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Phantump::
# 217 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 218 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 219 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 220 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_PHANTUMP, CRY_MODE_NORMAL
# 221 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgePhantump_Text, MSGBOX_DEFAULT
# 222 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 223 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_NoNurse::
# 243 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 244 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox NobodyBehindCenterCounter, MSGBOX_YESNO
# 245 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgeCenter_NoNurse_2
DrisledgeCenter_NoNurse_1:
# 249 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end

DrisledgeCenter_NoNurse_2:
# 246 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	closemessage
# 247 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	goto Solo_HealPkmn
	goto DrisledgeCenter_NoNurse_1


Solo_HealPkmn::
# 254 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special SpawnCameraObject
# 255 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 256 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playse SE_LEDGE
# 257 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 8, 0x053, TRUE
# 258 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special DrawWholeMapView
# 259 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToNorth
# 260 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay 22
# 261 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 8, 0x036, TRUE
# 262 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 9, 0x054, TRUE
# 263 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special DrawWholeMapView
# 264 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 265 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 266 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 267 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message SoloPkmnHealed
# 268 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 269 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 270 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	closemessage
# 271 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay 20
# 272 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playse SE_LEDGE
# 273 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, HopOverLedgeToSouth
# 274 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay 8
# 275 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 8, 0x053, TRUE
# 276 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 9, 0x205, TRUE
# 277 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special DrawWholeMapView
# 278 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 279 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special RemoveCameraObject
# 280 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special HealPlayerParty
# 281 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	return


# 284 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
HopOverLedgeToNorth:
# 285 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	jump_2_up
# 286 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay_16
# 287 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_fast_left
# 288 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	step_end

# 290 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
HopOverLedgeToSouth:
# 291 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	jump_2_down
# 292 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay_16
# 293 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	step_end

GengarBehindCounter::
# 112 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "There seems to be a Gengar\n"
	.string "behind the counter.\p"
	.string "Give your Pokémon to the Gengar?$"

GengarTakesPokemon::
# 117 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "The Gengar takes your Pokémon\n"
	.string "for a few seconds.$"

GengarRestoredPkmnToFull::
# 121 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "The Gengar has restored\n"
	.string "your Pokémon to full health.$"

GengarHappy::
# 125 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "The Gengar seems happy to serve, and\n"
	.string "probably hopes to see you again soon.$"

DrisledgeMisdreavus_Text::
# 226 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Mi-mii!$"

DrisledgeSableye_Text::
# 229 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Shaaa…$"

DrisledgeGastly_Text::
# 232 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Ghaa!$"

DrisledgeShuppet_Text::
# 235 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Sha-shaa…$"

DrisledgePhantump_Text::
# 238 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Fa-fa!$"

NobodyBehindCenterCounter::
# 296 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "There's nobody behind the counter,\n"
	.string "but the machine looks operational.\p"
	.string "Jump over the counter and heal\n"
	.string "your Pokémon?$"

SoloPkmnHealed::
# 302 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Your Pokémon have been restored\n"
	.string "to full health.$"
