Drisledge_Pokecenter_1F_MapScripts::
# 2 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DrisledgePokeCenter1F_OnTransition
# 3 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DrisledgeCenter_SetTiles
	.byte 0


DrisledgePokeCenter1F_OnTransition::
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgePokeCenter1F_OnTransition_2
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
	goto_if_ge DrisledgePokeCenter1F_OnTransition_5
DrisledgePokeCenter1F_OnTransition_4:
	end

DrisledgePokeCenter1F_OnTransition_2:
# 8 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_DRISLEDGE_TOWN
# 9 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 10 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 11 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
	end

DrisledgePokeCenter1F_OnTransition_5:
# 21 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 22 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgePokeCenter1F_OnTransition_7
# 22 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgePokeCenter1F_OnTransition_7
# 27 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 28 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 29 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playbgm MUS_NONE, TRUE
	goto DrisledgePokeCenter1F_OnTransition_4

DrisledgePokeCenter1F_OnTransition_7:
# 23 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 24 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	goto DrisledgePokeCenter1F_OnTransition_4


DrisledgeCenter_SetTiles::
	checkitem ITEM_ZYGARDE_CUBE
# 0 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgeCenter_SetTiles_2
# 47 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeCenter_SetTiles_5
DrisledgeCenter_SetTiles_4:
# 57 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_3
# 58 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_2
# 59 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	gettime
# 60 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	copyvar VAR_TEMP_0, VAR_0x8000
# 61 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_DRISLEDGE_TOWN_STATE, 30
	goto_if_ge DrisledgeCenter_SetTiles_7
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
	end

DrisledgeCenter_SetTiles_5:
# 48 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 5, 2, 0x051, FALSE
# 49 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 2, 0x21E, FALSE
# 50 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 7, 2, 0x052, FALSE
# 51 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 5, 3, 0x059, TRUE
# 52 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 3, 0x23C, FALSE
# 53 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 7, 3, 0x05A, TRUE
# 54 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 4, 0x225, FALSE
# 55 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 7, 4, 0x267, FALSE
	goto DrisledgeCenter_SetTiles_4

DrisledgeCenter_SetTiles_7:
# 62 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setflag FLAG_TEMP_1
# 63 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 6
	goto_if_le DrisledgeCenter_SetTiles_9
# 63 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_ge DrisledgeCenter_SetTiles_9
# 68 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_3
# 69 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 70 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playbgm MUS_NONE, TRUE
	return

DrisledgeCenter_SetTiles_9:
# 64 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setweather WEATHER_SHADE
# 65 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	clearflag FLAG_TEMP_2
	return


DrisledgePokeCenter1F_NurseGengar::
# 76 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Drisledge_NurseGengar
# 77 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 78 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 79 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


Drisledge_NurseGengar::
# 84 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 85 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 86 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox GengarBehindCounter, MSGBOX_YESNO
# 87 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Drisledge_NurseGengar_2
Drisledge_NurseGengar_1:
# 90 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end

Drisledge_NurseGengar_2:
# 88 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	goto Gengar_HealPkmn
	goto Drisledge_NurseGengar_1


Gengar_HealPkmn::
# 94 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 95 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message GengarTakesPokemon
# 96 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 97 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Gengar_TakeAndHealPkmn
# 98 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	call Gengar_ReturnPkmn
# 99 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


Gengar_TakeAndHealPkmn::
# 103 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement 8, Movement_PkmnCenterNurse_Turn
# 104 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 105 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 106 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 107 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceFasterDown
# 108 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 109 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special HealPlayerParty
	return


Gengar_ReturnPkmn::
# 113 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message GengarRestoredPkmnToFull
# 114 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 115 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement 8, GengarSpin
# 116 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message GengarHappy
# 118 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 119 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
	return


# 141 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
GengarSpin:
# 142 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 143 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 144 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 145 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 146 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 147 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 148 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 149 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 150 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 151 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 152 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 153 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 154 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 155 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 157 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 158 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_left
# 159 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_up
# 160 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_right
# 161 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_faster_down
# 162 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	step_end

DrisledgeCenter_Misdreavus::
# 166 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 167 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 168 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 169 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_MISDREAVUS, CRY_MODE_NORMAL
# 170 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeMisdreavus_Text, MSGBOX_DEFAULT
# 171 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 172 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Sableye::
# 176 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 177 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 178 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 179 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_SABLEYE, CRY_MODE_NORMAL
# 180 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeSableye_Text, MSGBOX_DEFAULT
# 181 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 182 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Gastly::
# 186 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 187 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 188 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 189 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 190 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 191 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 192 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Gastly1::
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
	turnobject 11, DIR_WEST
	end


DrisledgeCenter_Gastly2::
# 207 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 208 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 209 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 210 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_GASTLY, CRY_MODE_NORMAL
# 211 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeGastly_Text, MSGBOX_DEFAULT
# 212 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 213 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
# 214 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	turnobject 12, DIR_EAST
	end


DrisledgeCenter_Shuppet::
# 218 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 219 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 220 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 221 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_SHUPPET, CRY_MODE_NORMAL
# 222 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgeShuppet_Text, MSGBOX_DEFAULT
# 223 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 224 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_Phantump::
# 228 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 229 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	faceplayer
# 230 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitse
# 231 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playmoncry SPECIES_PHANTUMP, CRY_MODE_NORMAL
# 232 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox DrisledgePhantump_Text, MSGBOX_DEFAULT
# 233 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmoncry
# 234 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end


DrisledgeCenter_NoNurse::
# 254 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	lock
# 255 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	msgbox NobodyBehindCenterCounter, MSGBOX_YESNO
# 256 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DrisledgeCenter_NoNurse_2
DrisledgeCenter_NoNurse_1:
# 260 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	end

DrisledgeCenter_NoNurse_2:
# 257 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	closemessage
# 258 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	goto Solo_HealPkmn
	goto DrisledgeCenter_NoNurse_1


Solo_HealPkmn::
# 265 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special SpawnCameraObject
# 266 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 267 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playse SE_LEDGE
# 268 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 8, 0x053, TRUE
# 269 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special DrawWholeMapView
# 270 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToNorth
# 271 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay 22
# 272 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 8, 0x036, TRUE
# 273 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 9, 0x054, TRUE
# 274 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 276 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 277 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 278 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	message SoloPkmnHealed
# 279 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmessage
# 280 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitbuttonpress
# 281 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	closemessage
# 282 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay 20
# 283 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	playse SE_LEDGE
# 284 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, HopOverLedgeToSouth
# 285 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay 8
# 286 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 8, 0x053, TRUE
# 287 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	setmetatile 6, 9, 0x205, TRUE
# 288 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special DrawWholeMapView
# 289 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	waitmovement 0
# 290 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special RemoveCameraObject
# 291 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	special HealPlayerParty
# 292 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	release
	return


# 295 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
HopOverLedgeToNorth:
# 296 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	jump_2_up
# 297 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay_16
# 298 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	walk_in_place_fast_left
# 299 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	step_end

# 301 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
HopOverLedgeToSouth:
# 302 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	jump_2_down
# 303 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	delay_16
# 304 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	step_end

GengarBehindCounter::
# 123 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "There seems to be a Gengar\n"
	.string "behind the counter.\p"
	.string "Give your Pokémon to the Gengar?$"

GengarTakesPokemon::
# 128 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "The Gengar takes your Pokémon\n"
	.string "for a few seconds.$"

GengarRestoredPkmnToFull::
# 132 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "The Gengar has restored\n"
	.string "your Pokémon to full health.$"

GengarHappy::
# 136 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "The Gengar seems happy to serve, and\n"
	.string "probably hopes to see you again soon.$"

DrisledgeMisdreavus_Text::
# 237 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Mi-mii!$"

DrisledgeSableye_Text::
# 240 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Shaaa…$"

DrisledgeGastly_Text::
# 243 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Ghaa!$"

DrisledgeShuppet_Text::
# 246 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Sha-shaa…$"

DrisledgePhantump_Text::
# 249 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Fa-fa!$"

NobodyBehindCenterCounter::
# 307 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "There's nobody behind the counter,\n"
	.string "but the machine looks operational.\p"
	.string "Jump over the counter and heal\n"
	.string "your Pokémon?$"

SoloPkmnHealed::
# 313 "data/maps/Drisledge_Pokecenter_1F/scripts.pory"
	.string "Your Pokémon have been restored\n"
	.string "to full health.$"
