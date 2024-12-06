WeirdCave_MapScripts::
# 2 "data/maps/WeirdCave/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WeirdCaveHideDoor
# 3 "data/maps/WeirdCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SetRockVar
	.byte 0


WeirdCaveHideDoor::
# 6 "data/maps/WeirdCave/scripts.pory"
	goto_if_unset FLAG_WEIRDCAVESOLVED, WeirdCaveHideDoor_2
WeirdCaveHideDoor_1:
	end

WeirdCaveHideDoor_2:
# 7 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 5, 0x219, TRUE
# 8 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 5, 0x219, TRUE
# 9 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 5, 0x219, TRUE
# 10 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 6, 0x219, TRUE
# 11 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 6, 0x219, TRUE
# 12 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 6, 0x219, TRUE
	goto WeirdCaveHideDoor_1


SetRockVar::
# 17 "data/maps/WeirdCave/scripts.pory"
	goto_if_unset FLAG_WEIRDCAVESOLVED, SetRockVar_2
SetRockVar_1:
# 20 "data/maps/WeirdCave/scripts.pory"
	goto_if_set FLAG_WEIRDCAVESOLVED, SetRockVar_5
# 30 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 11
	goto_if_eq SetRockVar_8
SetRockVar_7:
# 33 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 0
	goto_if_eq SetRockVar_11
# 43 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 1
	goto_if_eq SetRockVar_14
# 53 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 2
	goto_if_eq SetRockVar_17
# 63 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 3
	goto_if_eq SetRockVar_20
# 73 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 4
	goto_if_eq SetRockVar_23
# 83 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 5
	goto_if_eq SetRockVar_26
# 93 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 6
	goto_if_eq SetRockVar_29
# 103 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 7
	goto_if_eq SetRockVar_32
# 113 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 8
	goto_if_eq SetRockVar_35
# 123 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 9
	goto_if_eq SetRockVar_38
# 133 "data/maps/WeirdCave/scripts.pory"
	compare VAR_WEIRDCAVEROCKFORMATION, 10
	goto_if_eq SetRockVar_40
	return

SetRockVar_2:
# 18 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 0
	goto SetRockVar_1

SetRockVar_5:
# 21 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVEROCKFORMATION, 20
# 22 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 23 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 9, 8
# 24 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 25 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 9, 11
# 26 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 27 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 9, 14
	end

SetRockVar_8:
# 31 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVEROCKFORMATION, 0
	goto SetRockVar_7

SetRockVar_11:
# 34 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 35 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 36 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 37 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 0, 0
# 38 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 39 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 40 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 9, 14
	end

SetRockVar_14:
# 44 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 45 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 46 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 47 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 48 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 49 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 50 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_17:
# 54 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 55 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 56 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 57 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 58 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 9, 11
# 59 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 60 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_20:
# 64 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 65 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 66 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 67 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 68 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 9, 11
# 69 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 70 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_23:
# 74 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 75 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 76 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 9, 8
# 77 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 0, 0
# 78 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 9, 11
# 79 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 0, 0
# 80 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_26:
# 84 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 85 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 86 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 87 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 88 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 9, 11
# 89 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 90 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_29:
# 94 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 95 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 96 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 97 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 98 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 99 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 100 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_32:
# 104 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 105 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 106 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 107 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 0, 0
# 108 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 109 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 110 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 9, 14
	end

SetRockVar_35:
# 114 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 115 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 116 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 117 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 5, 11
# 118 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 119 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 120 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end

SetRockVar_38:
# 124 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 125 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 5, 8
# 126 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 127 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 0, 0
# 128 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 129 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 5, 14
# 130 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 9, 14
	end

SetRockVar_40:
# 134 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVEROCKFORMATION, 1
# 135 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 1, 0, 0
# 136 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 2, 0, 0
# 137 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 3, 0, 0
# 138 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 4, 0, 0
# 139 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 5, 0, 0
# 140 "data/maps/WeirdCave/scripts.pory"
	setobjectxyperm 6, 0, 0
	end


SorryAboutPuzzle::
# 148 "data/maps/WeirdCave/scripts.pory"
	msgbox SorryAboutPuzzle_Text, MSGBOX_SIGN
	return


WeirdCave_TriggerTiles::
# 162 "data/maps/WeirdCave/scripts.pory"
	goto_if_set FLAG_WEIRDCAVESOLVED, WeirdCave_TriggerTiles_2
# 166 "data/maps/WeirdCave/scripts.pory"
	switch VAR_WEIRDCAVE_CORRECTSTEPS
# 167 "data/maps/WeirdCave/scripts.pory"
	case 0, WeirdCave_TriggerTiles_5
# 177 "data/maps/WeirdCave/scripts.pory"
	case 1, WeirdCave_TriggerTiles_6
# 187 "data/maps/WeirdCave/scripts.pory"
	case 2, WeirdCave_TriggerTiles_7
# 197 "data/maps/WeirdCave/scripts.pory"
	case 3, WeirdCave_TriggerTiles_8
# 207 "data/maps/WeirdCave/scripts.pory"
	case 4, WeirdCave_TriggerTiles_9
# 217 "data/maps/WeirdCave/scripts.pory"
	case 5, WeirdCave_TriggerTiles_10
# 227 "data/maps/WeirdCave/scripts.pory"
	case 6, WeirdCave_TriggerTiles_11
# 237 "data/maps/WeirdCave/scripts.pory"
	case 7, WeirdCave_TriggerTiles_12
# 247 "data/maps/WeirdCave/scripts.pory"
	case 8, WeirdCave_TriggerTiles_13
# 257 "data/maps/WeirdCave/scripts.pory"
	case 9, WeirdCave_TriggerTiles_14
# 290 "data/maps/WeirdCave/scripts.pory"
	case 20, WeirdCave_TriggerTiles_15
	return

WeirdCave_TriggerTiles_2:
# 163 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_5:
# 168 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 169 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_19
WeirdCave_TriggerTiles_18:
# 173 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_16:
# 175 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_6:
# 178 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 179 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq WeirdCave_TriggerTiles_25
WeirdCave_TriggerTiles_24:
# 183 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_22:
# 185 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_7:
# 188 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 189 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_31
WeirdCave_TriggerTiles_30:
# 193 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_28:
# 195 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_8:
# 198 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 199 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_37
WeirdCave_TriggerTiles_36:
# 203 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_34:
# 205 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_9:
# 208 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 209 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_43
WeirdCave_TriggerTiles_42:
# 213 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_40:
# 215 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_10:
# 218 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 219 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq WeirdCave_TriggerTiles_49
WeirdCave_TriggerTiles_48:
# 223 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_46:
# 225 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_11:
# 228 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 229 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_55
WeirdCave_TriggerTiles_54:
# 233 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_52:
# 235 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_12:
# 238 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 239 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq WeirdCave_TriggerTiles_61
WeirdCave_TriggerTiles_60:
# 243 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_58:
# 245 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_13:
# 248 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 249 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_67
WeirdCave_TriggerTiles_66:
# 253 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_64:
# 255 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_14:
# 258 "data/maps/WeirdCave/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_1
# 259 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_2, 7
	goto_if_eq WeirdCave_TriggerTiles_73
WeirdCave_TriggerTiles_72:
# 286 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_WEIRDCAVE_CORRECTSTEPS, 20
WeirdCave_TriggerTiles_70:
# 288 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_15:
# 291 "data/maps/WeirdCave/scripts.pory"
	release
	end

WeirdCave_TriggerTiles_17:
# 170 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_16

WeirdCave_TriggerTiles_19:
# 169 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_17
	goto WeirdCave_TriggerTiles_18

WeirdCave_TriggerTiles_23:
# 180 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_22

WeirdCave_TriggerTiles_25:
# 179 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_23
	goto WeirdCave_TriggerTiles_24

WeirdCave_TriggerTiles_29:
# 190 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_28

WeirdCave_TriggerTiles_31:
# 189 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_29
	goto WeirdCave_TriggerTiles_30

WeirdCave_TriggerTiles_35:
# 200 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_34

WeirdCave_TriggerTiles_37:
# 199 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_35
	goto WeirdCave_TriggerTiles_36

WeirdCave_TriggerTiles_41:
# 210 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_40

WeirdCave_TriggerTiles_43:
# 209 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq WeirdCave_TriggerTiles_41
	goto WeirdCave_TriggerTiles_42

WeirdCave_TriggerTiles_47:
# 220 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_46

WeirdCave_TriggerTiles_49:
# 219 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq WeirdCave_TriggerTiles_47
	goto WeirdCave_TriggerTiles_48

WeirdCave_TriggerTiles_53:
# 230 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_52

WeirdCave_TriggerTiles_55:
# 229 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 17
	goto_if_eq WeirdCave_TriggerTiles_53
	goto WeirdCave_TriggerTiles_54

WeirdCave_TriggerTiles_59:
# 240 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_58

WeirdCave_TriggerTiles_61:
# 239 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_59
	goto WeirdCave_TriggerTiles_60

WeirdCave_TriggerTiles_65:
# 250 "data/maps/WeirdCave/scripts.pory"
	addvar VAR_WEIRDCAVE_CORRECTSTEPS, 1
	goto WeirdCave_TriggerTiles_64

WeirdCave_TriggerTiles_67:
# 249 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 16
	goto_if_eq WeirdCave_TriggerTiles_65
	goto WeirdCave_TriggerTiles_66

WeirdCave_TriggerTiles_71:
# 260 "data/maps/WeirdCave/scripts.pory"
	lockall
# 261 "data/maps/WeirdCave/scripts.pory"
	setflag FLAG_WEIRDCAVESOLVED
# 262 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 5, 0x20B, TRUE
# 263 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 5, 0x20C, TRUE
# 264 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 5, 0x20D, TRUE
# 265 "data/maps/WeirdCave/scripts.pory"
	setmetatile 6, 6, 0x213, TRUE
# 266 "data/maps/WeirdCave/scripts.pory"
	setmetatile 7, 6, 0x214, FALSE
# 267 "data/maps/WeirdCave/scripts.pory"
	setmetatile 8, 6, 0x215, TRUE
# 268 "data/maps/WeirdCave/scripts.pory"
	special DrawWholeMapView
# 269 "data/maps/WeirdCave/scripts.pory"
	fadeoutbgm 0
# 270 "data/maps/WeirdCave/scripts.pory"
	delay 30
# 271 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8004, 1
# 272 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8005, 1
# 273 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8006, 8
# 274 "data/maps/WeirdCave/scripts.pory"
	setvar VAR_0x8007, 5
# 275 "data/maps/WeirdCave/scripts.pory"
	special ShakeCamera
# 276 "data/maps/WeirdCave/scripts.pory"
	waitstate
# 277 "data/maps/WeirdCave/scripts.pory"
	delay 60
# 278 "data/maps/WeirdCave/scripts.pory"
	playse SE_SWITCH
# 279 "data/maps/WeirdCave/scripts.pory"
	waitse
# 280 "data/maps/WeirdCave/scripts.pory"
	delay 90
# 281 "data/maps/WeirdCave/scripts.pory"
	fadeinbgm 0
# 282 "data/maps/WeirdCave/scripts.pory"
	delay 30
# 283 "data/maps/WeirdCave/scripts.pory"
	release
	goto WeirdCave_TriggerTiles_70

WeirdCave_TriggerTiles_73:
# 259 "data/maps/WeirdCave/scripts.pory"
	compare VAR_TEMP_1, 15
	goto_if_eq WeirdCave_TriggerTiles_71
	goto WeirdCave_TriggerTiles_72


SorryAboutPuzzle_Text::
# 150 "data/maps/WeirdCave/scripts.pory"
	.string "Hello, Kasen here\n"
	.string "(the rom hack creator).\p"
	.string "I decided to add this sign here to\n"
	.string "inform you that while this puzzle is\l"
	.string "possible to solve, it's not intuitive\l"
	.string "at all and is kind of unfair.\p"
	.string "This sign will be deleted once I can\n"
	.string "think of a better puzzle.$"
