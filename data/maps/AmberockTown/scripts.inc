AmberockTown_MapScripts::
# 2 "data/maps/AmberockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_FlagControl
# 3 "data/maps/AmberockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Amberock_PaperVisibility
# 4 "data/maps/AmberockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AmberockTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 7 "data/maps/AmberockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AmberockTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AmberockTown_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 5 "data/maps/AmberockTown/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, SetPlayerKrokorokModel
	.2byte 0

AmberockTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/AmberockTown/scripts.pory"
	map_script_2 VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY, Amberock_GroupGoesToGate
	.2byte 0


Amberock_GateEvent1::
# 34 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_TEMP_3, 1
# 35 "data/maps/AmberockTown/scripts.pory"
	goto AmberockGateEventMain
	return


Amberock_GateEvent2::
# 38 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_TEMP_3, 2
# 39 "data/maps/AmberockTown/scripts.pory"
	goto AmberockGateEventMain
	return


Amberock_GateEvent3::
# 42 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_TEMP_3, 3
# 43 "data/maps/AmberockTown/scripts.pory"
	goto AmberockGateEventMain
	return


Amberock_GateEvent4::
# 46 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_TEMP_3, 4
# 47 "data/maps/AmberockTown/scripts.pory"
	goto AmberockGateEventMain
	return


AmberockGateEventMain::
# 50 "data/maps/AmberockTown/scripts.pory"
	lock
# 51 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 52 "data/maps/AmberockTown/scripts.pory"
	switch VAR_TEMP_3
# 53 "data/maps/AmberockTown/scripts.pory"
	case 1, AmberockGateEventMain_3
# 55 "data/maps/AmberockTown/scripts.pory"
	case 2, AmberockGateEventMain_4
# 57 "data/maps/AmberockTown/scripts.pory"
	case 3, AmberockGateEventMain_5
# 59 "data/maps/AmberockTown/scripts.pory"
	case 4, AmberockGateEventMain_6
AmberockGateEventMain_1:
# 62 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 63 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 64 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 65 "data/maps/AmberockTown/scripts.pory"
	msgbox VolknerTakePrisoners, MSGBOX_AUTOCLOSE
# 66 "data/maps/AmberockTown/scripts.pory"
	applymovement 7, Amberock_LeftRocketLeaves
# 67 "data/maps/AmberockTown/scripts.pory"
	applymovement 8, Amberock_RightRocketLeaves
# 68 "data/maps/AmberockTown/scripts.pory"
	delay 48
# 69 "data/maps/AmberockTown/scripts.pory"
	applymovement 22, Amberock_VolknerLeaves
# 70 "data/maps/AmberockTown/scripts.pory"
	delay 16
# 71 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 72 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 73 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/AmberockTown/scripts.pory"
	delay 16
# 75 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 76 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 77 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayGoAfterGiovanni, MSGBOX_AUTOCLOSE
# 78 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 79 "data/maps/AmberockTown/scripts.pory"
	applymovement 10, Walk1Up
# 80 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 81 "data/maps/AmberockTown/scripts.pory"
	delay 16
# 82 "data/maps/AmberockTown/scripts.pory"
	applymovement 27, MoveGateLeft
# 83 "data/maps/AmberockTown/scripts.pory"
	applymovement 28, MoveGateRight
# 84 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 86 "data/maps/AmberockTown/scripts.pory"
	applymovement 10, ClayGoesToFactory
# 87 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_BEAT_GUARDS
# 89 "data/maps/AmberockTown/scripts.pory"
	removeobject 10
# 90 "data/maps/AmberockTown/scripts.pory"
	removeobject 22
# 91 "data/maps/AmberockTown/scripts.pory"
	removeobject 7
# 92 "data/maps/AmberockTown/scripts.pory"
	removeobject 8
# 93 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 27, 41, 20
# 94 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 28, 44, 20
# 95 "data/maps/AmberockTown/scripts.pory"
	release
	return

AmberockGateEventMain_3:
# 54 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement1
	goto AmberockGateEventMain_1

AmberockGateEventMain_4:
# 56 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement2
	goto AmberockGateEventMain_1

AmberockGateEventMain_5:
# 58 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement3
	goto AmberockGateEventMain_1

AmberockGateEventMain_6:
# 60 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GateMovement4
	goto AmberockGateEventMain_1


# 97 "data/maps/AmberockTown/scripts.pory"
MoveGateLeft:
# 98 "data/maps/AmberockTown/scripts.pory"
	lock_facing_direction
# 99 "data/maps/AmberockTown/scripts.pory"
	lock_anim
# 100 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 101 "data/maps/AmberockTown/scripts.pory"
	unlock_anim
	step_end

# 103 "data/maps/AmberockTown/scripts.pory"
MoveGateRight:
# 104 "data/maps/AmberockTown/scripts.pory"
	lock_facing_direction
# 105 "data/maps/AmberockTown/scripts.pory"
	lock_anim
# 106 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 107 "data/maps/AmberockTown/scripts.pory"
	unlock_anim
	step_end

# 122 "data/maps/AmberockTown/scripts.pory"
Amberock_LeftRocketLeaves:
# 123 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 123 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 124 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 125 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 125 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 125 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 126 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 127 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 127 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 128 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 129 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 129 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

# 131 "data/maps/AmberockTown/scripts.pory"
Amberock_RightRocketLeaves:
# 132 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 133 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 134 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 134 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 134 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 135 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 136 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 136 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 137 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 138 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 138 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

# 140 "data/maps/AmberockTown/scripts.pory"
Amberock_VolknerLeaves:
# 141 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 141 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 141 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 141 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 142 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 143 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 143 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 144 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 145 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 145 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

# 147 "data/maps/AmberockTown/scripts.pory"
ClayGoesToFactory:
# 148 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 148 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 148 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 149 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 150 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 150 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/AmberockTown/scripts.pory"
GateMovement1:
# 153 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 153 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 154 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

# 156 "data/maps/AmberockTown/scripts.pory"
GateMovement2:
# 157 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 158 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 158 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 158 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 159 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_up
	step_end

# 161 "data/maps/AmberockTown/scripts.pory"
GateMovement3:
# 162 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 162 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 162 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 163 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_up
	step_end

# 165 "data/maps/AmberockTown/scripts.pory"
GateMovement4:
# 166 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 166 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 166 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 167 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

Amberock_GroupGoesToGate::
# 171 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 172 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 173 "data/maps/AmberockTown/scripts.pory"
	msgbox LetsGoToGate, MSGBOX_AUTOCLOSE
# 174 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 175 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 176 "data/maps/AmberockTown/scripts.pory"
	applymovement 9, Amberock_GroupGoesToGate_Movement_0
# 177 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/AmberockTown/scripts.pory"
	removeobject 9
# 179 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_1, Amberock_GroupGoesToGate_2
# 179 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_2, Amberock_GroupGoesToGate_2
# 179 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_3, Amberock_GroupGoesToGate_2
Amberock_GroupGoesToGate_1:
# 204 "data/maps/AmberockTown/scripts.pory"
	applymovement 10, ClayMovesToGate
# 205 "data/maps/AmberockTown/scripts.pory"
	applymovement 22, VolknerMovesToGate
# 206 "data/maps/AmberockTown/scripts.pory"
	waitmovement 10
# 207 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 10, 42, 22
# 208 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 10, 42, 22
# 209 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 22, 43, 22
# 210 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 22, 43, 22
# 211 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_NORTH
# 212 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_NORTH
# 213 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 214 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
# 215 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
# 216 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_GroupGoesToGate_2:
# 180 "data/maps/AmberockTown/scripts.pory"
	playse SE_PIN
# 181 "data/maps/AmberockTown/scripts.pory"
	applymovement 10, ExclamationMark
# 182 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 183 "data/maps/AmberockTown/scripts.pory"
	delay 48
# 184 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 185 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 186 "data/maps/AmberockTown/scripts.pory"
	msgbox KrokorokWasCarryingSomething, MSGBOX_AUTOCLOSE
# 187 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 188 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 189 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 190 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_1, Amberock_GroupGoesToGate_9
Amberock_GroupGoesToGate_8:
# 194 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_2, Amberock_GroupGoesToGate_12
Amberock_GroupGoesToGate_11:
# 198 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_3, Amberock_GroupGoesToGate_15
Amberock_GroupGoesToGate_14:
# 202 "data/maps/AmberockTown/scripts.pory"
	delay 60
	goto Amberock_GroupGoesToGate_1

Amberock_GroupGoesToGate_9:
# 191 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_FACTORY_ITEM_1_OUTSIDE
# 192 "data/maps/AmberockTown/scripts.pory"
	addobject 24
	goto Amberock_GroupGoesToGate_8

Amberock_GroupGoesToGate_12:
# 195 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_FACTORY_ITEM_2_OUTSIDE
# 196 "data/maps/AmberockTown/scripts.pory"
	addobject 25
	goto Amberock_GroupGoesToGate_11

Amberock_GroupGoesToGate_15:
# 199 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_FACTORY_ITEM_3_OUTSIDE
# 200 "data/maps/AmberockTown/scripts.pory"
	addobject 26
	goto Amberock_GroupGoesToGate_14


# 233 "data/maps/AmberockTown/scripts.pory"
ClayMovesToGate:
# 234 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 234 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 236 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 236 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 236 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 236 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 237 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

# 239 "data/maps/AmberockTown/scripts.pory"
VolknerMovesToGate:
# 240 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 240 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 240 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 240 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 240 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 240 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 241 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

SetFactoryWarp2::
# 244 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_lt SetFactoryWarp2_2
# 248 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY_NO_LIGHTS, 1
SetFactoryWarp2_1:
# 250 "data/maps/AmberockTown/scripts.pory"
	release
	return

SetFactoryWarp2_2:
# 245 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY, 1
	goto SetFactoryWarp2_1


SetFactoryWarp1::
# 253 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_lt SetFactoryWarp1_2
# 257 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY_NO_LIGHTS, 0
SetFactoryWarp1_1:
# 259 "data/maps/AmberockTown/scripts.pory"
	release
	return

SetFactoryWarp1_2:
# 254 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY, 0
	goto SetFactoryWarp1_1


Amberock_FlagControl::
# 263 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_FlagControl_2
Amberock_FlagControl_1:
# 267 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_ge Amberock_FlagControl_5
Amberock_FlagControl_4:
# 270 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	goto_if_eq Amberock_FlagControl_8
Amberock_FlagControl_7:
# 277 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_BEAT_GUARDS
	goto_if_ge Amberock_FlagControl_11
Amberock_FlagControl_10:
# 284 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_DISGUISED_AS_KROKOROK, Amberock_FlagControl_14
# 288 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 289 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_6
Amberock_FlagControl_13:
# 292 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_FlagControl_18
# 296 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_C
Amberock_FlagControl_17:
# 298 "data/maps/AmberockTown/scripts.pory"
	call Amberock_AcerolaEvent
# 299 "data/maps/AmberockTown/scripts.pory"
	call Amberock_SetPlayerModel
	return

Amberock_FlagControl_2:
# 264 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_A
# 265 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_REPAIR_AMBEROCK_BRIDGE
	goto Amberock_FlagControl_1

Amberock_FlagControl_5:
# 268 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_D
	goto Amberock_FlagControl_4

Amberock_FlagControl_8:
# 271 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_6
# 272 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 273 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
# 274 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 10, 42, 22
# 275 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 22, 43, 22
	goto Amberock_FlagControl_7

Amberock_FlagControl_11:
# 278 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_7
# 279 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_6
# 280 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_8
# 281 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 27, 41, 20
# 282 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 28, 44, 20
	goto Amberock_FlagControl_10

Amberock_FlagControl_14:
# 285 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto Amberock_FlagControl_13

Amberock_FlagControl_18:
# 293 "data/maps/AmberockTown/scripts.pory"
	setmaplayoutindex LAYOUT_AMBEROCK_TEST
	goto Amberock_FlagControl_17


Amberock_KrokorokIntro::
# 303 "data/maps/AmberockTown/scripts.pory"
	lock
# 304 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 305 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 306 "data/maps/AmberockTown/scripts.pory"
	playse SE_PIN
# 307 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 308 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_SOUTH
# 309 "data/maps/AmberockTown/scripts.pory"
	applymovement 10, ExclamationMark
# 310 "data/maps/AmberockTown/scripts.pory"
	applymovement 22, ExclamationMark
# 311 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 312 "data/maps/AmberockTown/scripts.pory"
	delay 64
# 313 "data/maps/AmberockTown/scripts.pory"
	dismountplayer
# 314 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Up
# 315 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 316 "data/maps/AmberockTown/scripts.pory"
	unlockfollowermovement
# 317 "data/maps/AmberockTown/scripts.pory"
	msgbox VolknerGreetsPlayer
# 318 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_WEST
# 319 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 320 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 321 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayHelped
# 322 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_SOUTH
# 323 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 324 "data/maps/AmberockTown/scripts.pory"
	msgbox VolknerControlKrokorok
# 325 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_WEST
# 326 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 327 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 328 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayTip
# 329 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_SPOKE_WITH_CLAY
# 330 "data/maps/AmberockTown/scripts.pory"
	release
	return


Amberock_Clay::
# 368 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Clay_Text, MSGBOX_NPC
	return


Amberock_Volkner::
# 388 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Volkner_Text, MSGBOX_NPC
	return


Amberock_KrokorokScript::
# 399 "data/maps/AmberockTown/scripts.pory"
	msgbox SwitchToKrokorok, MSGBOX_YESNO
# 400 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_KrokorokScript_2
# 404 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 405 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 407 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 408 "data/maps/AmberockTown/scripts.pory"
	addobject 11
# 410 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerToKrokorokNorth
# 411 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 412 "data/maps/AmberockTown/scripts.pory"
	setkrokorokdisguise
# 413 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
# 414 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 415 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_DISGUISED_AS_KROKOROK
# 416 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 417 "data/maps/AmberockTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 418 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 419 "data/maps/AmberockTown/scripts.pory"
	removeobject 9
# 420 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 421 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 422 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KrokorokGoesNorthThroughFence
# 423 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 424 "data/maps/AmberockTown/scripts.pory"
	playse SE_LEDGE
# 425 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 426 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 427 "data/maps/AmberockTown/scripts.pory"
	waitse
# 428 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 429 "data/maps/AmberockTown/scripts.pory"
	waitse
# 430 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 431 "data/maps/AmberockTown/scripts.pory"
	waitse
# 432 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 433 "data/maps/AmberockTown/scripts.pory"
	waitse
# 434 "data/maps/AmberockTown/scripts.pory"
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
# 435 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 436 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_SAND_ATTACK
# 437 "data/maps/AmberockTown/scripts.pory"
	playse SE_BIKE_HOP
# 438 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 439 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_KrokorokScript_2:
# 401 "data/maps/AmberockTown/scripts.pory"
	release
	end


Amberock_KrokorokGiovanniCutScene::
# 443 "data/maps/AmberockTown/scripts.pory"
	lock
# 444 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 445 "data/maps/AmberockTown/scripts.pory"
	msgbox GiovanniWeAreOnSchedule
# 446 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 447 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Amberock_KrokorokGiovanniCutScene_Movement_0
# 448 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 449 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBail
# 450 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBailPart2
# 451 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBailPart3
# 452 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 453 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Right
# 454 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 455 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBail2
# 456 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_GIOVANNI
# 457 "data/maps/AmberockTown/scripts.pory"
	release
	return


Amberock_RecallKrokorok::
	msgbox TellKrokorokToRetreat, MSGBOX_YESNO
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_RecallKrokorok_2
# 499 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 500 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 501 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KrokorokGoesSouthThroughFence
# 502 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 503 "data/maps/AmberockTown/scripts.pory"
	playse SE_LEDGE
# 504 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 505 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 506 "data/maps/AmberockTown/scripts.pory"
	waitse
# 507 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 508 "data/maps/AmberockTown/scripts.pory"
	waitse
# 509 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 510 "data/maps/AmberockTown/scripts.pory"
	waitse
# 511 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 512 "data/maps/AmberockTown/scripts.pory"
	waitse
# 513 "data/maps/AmberockTown/scripts.pory"
	fadenewbgm MUS_RUSTBORO
# 514 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 515 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_SAND_ATTACK
# 516 "data/maps/AmberockTown/scripts.pory"
	playse SE_BIKE_HOP
# 517 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_6
# 519 "data/maps/AmberockTown/scripts.pory"
	addobject 9
# 520 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MovePlayerFromKrokorokSouth
# 521 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 522 "data/maps/AmberockTown/scripts.pory"
	setkrokorokdisguise
# 523 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SetObjectVisible
# 524 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 525 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_DISGUISED_AS_KROKOROK
# 526 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 527 "data/maps/AmberockTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 528 "data/maps/AmberockTown/scripts.pory"
	removeobject 11
# 529 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return

Amberock_RecallKrokorok_2:
# 496 "data/maps/AmberockTown/scripts.pory"
	release
	end


PokeFactory_Packer::
# 533 "data/maps/AmberockTown/scripts.pory"
	msgbox PokeFactory_Packer_Text
# 534 "data/maps/AmberockTown/scripts.pory"
	release
	return


# 546 "data/maps/AmberockTown/scripts.pory"
KrokorokGoesNorthThroughFence:
# 547 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_up
# 548 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_up
# 549 "data/maps/AmberockTown/scripts.pory"
	set_invisible
# 550 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 551 "data/maps/AmberockTown/scripts.pory"
	walk_slow_up
# 551 "data/maps/AmberockTown/scripts.pory"
	walk_slow_up
# 552 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 552 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 552 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 553 "data/maps/AmberockTown/scripts.pory"
	set_visible
# 554 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_up
	step_end

# 556 "data/maps/AmberockTown/scripts.pory"
KrokorokGoesSouthThroughFence:
# 557 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_down
# 558 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_down
# 559 "data/maps/AmberockTown/scripts.pory"
	set_invisible
# 560 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 561 "data/maps/AmberockTown/scripts.pory"
	walk_slow_down
# 561 "data/maps/AmberockTown/scripts.pory"
	walk_slow_down
# 562 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 562 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 562 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 563 "data/maps/AmberockTown/scripts.pory"
	set_visible
# 564 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_down
	step_end

DiscoverAmberock::
# 568 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_VISITED_AMBEROCK
# 569 "data/maps/AmberockTown/scripts.pory"
	release
	return


Amberock_RetreatKrokorok::
	msgbox CallKrokorokBack, MSGBOX_YESNO
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_RetreatKrokorok_2
Amberock_RetreatKrokorok_1:
# 580 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_RetreatKrokorok_2:
# 574 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_DISGUISED_AS_KROKOROK
# 575 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 577 "data/maps/AmberockTown/scripts.pory"
	warp MAP_AMBEROCK_TOWN, 30, 21
# 578 "data/maps/AmberockTown/scripts.pory"
	waitstate
	goto Amberock_RetreatKrokorok_1


Amberock_PaperVisibility::
# 589 "data/maps/AmberockTown/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_PaperVisibility_2
	return

Amberock_PaperVisibility_1:
# 591 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 10, 0x128, FALSE
# 592 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 12, 0x189, FALSE
# 593 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 12, 0x189, FALSE
# 594 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 13, 0x170, FALSE
# 595 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 13, 0x170, FALSE
# 596 "data/maps/AmberockTown/scripts.pory"
	setmetatile 23 + 30, 13, 0x170, FALSE
# 597 "data/maps/AmberockTown/scripts.pory"
	setmetatile 23 + 30, 14, 0x170, FALSE
# 598 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 14, 0x170, FALSE
# 599 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 14, 0x170, FALSE
# 600 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 15, 0x170, FALSE
# 601 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 15, 0x170, FALSE
# 602 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 15, 0x170, FALSE
# 603 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 16, 0x170, FALSE
# 604 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 16, 0x170, FALSE
# 605 "data/maps/AmberockTown/scripts.pory"
	setmetatile 28 + 30, 16, 0x170, FALSE
	return

Amberock_PaperVisibility_2:
# 590 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_PaperVisibility_1
	return


Amberock_SurfScientist::
# 609 "data/maps/AmberockTown/scripts.pory"
	lock
# 610 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 611 "data/maps/AmberockTown/scripts.pory"
	msgbox HereIsSurfHM
# 612 "data/maps/AmberockTown/scripts.pory"
	giveitem ITEM_HM03
# 613 "data/maps/AmberockTown/scripts.pory"
	msgbox GoGetBackPapers
# 614 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 615 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 616 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Amberock_SurfScientist_2
# 624 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeavesStraight
Amberock_SurfScientist_1:
# 626 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 627 "data/maps/AmberockTown/scripts.pory"
	removeobject 1
# 628 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 629 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_SurfScientist_2:
# 617 "data/maps/AmberockTown/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 618 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 64
	goto_if_eq Amberock_SurfScientist_7
Amberock_SurfScientist_5:
# 621 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeavesDetour
	goto Amberock_SurfScientist_1

Amberock_SurfScientist_6:
# 619 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_SurfScientist_5

Amberock_SurfScientist_7:
# 618 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_eq Amberock_SurfScientist_6
	goto Amberock_SurfScientist_5


# 656 "data/maps/AmberockTown/scripts.pory"
ScientistLeavesDetour:
# 657 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 658 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 658 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 658 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 658 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 659 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 660 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 660 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 661 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 661 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 661 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 661 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 661 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 662 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 662 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

# 664 "data/maps/AmberockTown/scripts.pory"
ScientistLeavesStraight:
# 665 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 665 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 665 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 665 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 665 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 666 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 666 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 666 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 666 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 666 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 667 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 667 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

Amberock_Papers::
# 671 "data/maps/AmberockTown/scripts.pory"
	lock
# 672 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 673 "data/maps/AmberockTown/scripts.pory"
	msgbox PapersOnGround
# 674 "data/maps/AmberockTown/scripts.pory"
	removeobject 3
# 675 "data/maps/AmberockTown/scripts.pory"
	setmetatile 57, 10, 0x128, FALSE
# 676 "data/maps/AmberockTown/scripts.pory"
	special DrawWholeMapView
# 677 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 678 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_2
# 679 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 680 "data/maps/AmberockTown/scripts.pory"
	addobject 1
# 681 "data/maps/AmberockTown/scripts.pory"
	addobject 2
# 682 "data/maps/AmberockTown/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 683 "data/maps/AmberockTown/scripts.pory"
	checktrainerflag TRAINER_R15_TR18_BERRYROCKET
	goto_if 0, Amberock_Papers_2
Amberock_Papers_1:
# 686 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 687 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 688 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_6
# 693 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_7
# 699 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_8
Amberock_Papers_4:
# 706 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 707 "data/maps/AmberockTown/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 708 "data/maps/AmberockTown/scripts.pory"
	delay 24
# 709 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_TEMP_A, Amberock_Papers_10
# 713 "data/maps/AmberockTown/scripts.pory"
	msgbox OurPapers
Amberock_Papers_9:
# 715 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 716 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 717 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_30
# 719 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_31
# 721 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_32
Amberock_Papers_28:
# 724 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 725 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 726 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 727 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_35
# 729 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_36
# 732 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_37
Amberock_Papers_33:
# 736 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 737 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 738 "data/maps/AmberockTown/scripts.pory"
	checkplayergender
# 739 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_Papers_39
# 743 "data/maps/AmberockTown/scripts.pory"
	bufferstring STR_VAR_1, Amberock_Papers_Text_1
Amberock_Papers_38:
# 745 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_ACEROLA_TALKED_TO, Amberock_Papers_43
# 749 "data/maps/AmberockTown/scripts.pory"
	msgbox AcerolaVisitGymAlternative
Amberock_Papers_42:
# 751 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 752 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 753 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_48
# 755 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_49
# 757 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_50
Amberock_Papers_46:
# 760 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 761 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
# 762 "data/maps/AmberockTown/scripts.pory"
	removeobject 1
# 763 "data/maps/AmberockTown/scripts.pory"
	removeobject 2
# 764 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 765 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_Papers_2:
# 684 "data/maps/AmberockTown/scripts.pory"
	call AmberockAlternativeCutscene
	goto Amberock_Papers_1

Amberock_Papers_6:
# 689 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq Amberock_Papers_15
Amberock_Papers_13:
# 692 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, MoveScientist2
	goto Amberock_Papers_4

Amberock_Papers_7:
# 694 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Amberock_Papers_20
Amberock_Papers_18:
# 697 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 31, 28, 4
# 698 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, Walk6Down
	goto Amberock_Papers_4

Amberock_Papers_8:
# 700 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 56
	goto_if_eq Amberock_Papers_25
Amberock_Papers_23:
# 703 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 31, 28, 4
# 704 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, MoveScientist1
	goto Amberock_Papers_4

Amberock_Papers_10:
# 710 "data/maps/AmberockTown/scripts.pory"
	msgbox OurPapersAlternative
	goto Amberock_Papers_9

Amberock_Papers_14:
# 690 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_13

Amberock_Papers_15:
# 689 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq Amberock_Papers_14
	goto Amberock_Papers_13

Amberock_Papers_19:
# 695 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_18

Amberock_Papers_20:
# 694 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_19
	goto Amberock_Papers_18

Amberock_Papers_24:
# 701 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_23

Amberock_Papers_25:
# 700 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_24
	goto Amberock_Papers_23

Amberock_Papers_30:
# 718 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeave2
	goto Amberock_Papers_28

Amberock_Papers_31:
# 720 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, Walk5Up
	goto Amberock_Papers_28

Amberock_Papers_32:
# 722 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeave1
	goto Amberock_Papers_28

Amberock_Papers_35:
# 728 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, MoveScientist2
	goto Amberock_Papers_33

Amberock_Papers_36:
# 730 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 32, 28, 4
# 731 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, Walk6Down
	goto Amberock_Papers_33

Amberock_Papers_37:
# 733 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 32, 28, 4
# 734 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, MoveScientist1
	goto Amberock_Papers_33

Amberock_Papers_39:
# 740 "data/maps/AmberockTown/scripts.pory"
	bufferstring STR_VAR_1, Amberock_Papers_Text_0
	goto Amberock_Papers_38

Amberock_Papers_43:
# 746 "data/maps/AmberockTown/scripts.pory"
	msgbox AcerolaVisitGym
	goto Amberock_Papers_42

Amberock_Papers_48:
# 754 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, ScientistLeave2
	goto Amberock_Papers_46

Amberock_Papers_49:
# 756 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, Walk5Up
	goto Amberock_Papers_46

Amberock_Papers_50:
# 758 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, ScientistLeave1
	goto Amberock_Papers_46


# 840 "data/maps/AmberockTown/scripts.pory"
MoveScientist1:
# 841 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 841 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 842 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 842 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 843 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 843 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 843 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 843 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 844 "data/maps/AmberockTown/scripts.pory"
	step_end

# 846 "data/maps/AmberockTown/scripts.pory"
MoveScientist2:
# 847 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 847 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 848 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 849 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 849 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 849 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 850 "data/maps/AmberockTown/scripts.pory"
	step_end

# 852 "data/maps/AmberockTown/scripts.pory"
ScientistLeave2:
# 853 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 853 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 854 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 855 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 855 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 855 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 856 "data/maps/AmberockTown/scripts.pory"
	step_end

# 858 "data/maps/AmberockTown/scripts.pory"
ScientistLeave1:
# 859 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 859 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 860 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 860 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 861 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 861 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 861 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 862 "data/maps/AmberockTown/scripts.pory"
	step_end

AmberockAlternativeCutscene::
# 865 "data/maps/AmberockTown/scripts.pory"
	delay 48
# 866 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 867 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, AmberockAlternativeCutscene_3
# 868 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, AmberockAlternativeCutscene_3
AmberockAlternativeCutscene_1:
# 871 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 872 "data/maps/AmberockTown/scripts.pory"
	special SpawnCameraObject
# 873 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_5
# 877 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Down
AmberockAlternativeCutscene_4:
# 879 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 880 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 881 "data/maps/AmberockTown/scripts.pory"
	msgbox RocketYoureTooLate
# 882 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 883 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_A
# 884 "data/maps/AmberockTown/scripts.pory"
	applymovement 4, Walk4Down
# 885 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 886 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_9
# 890 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Up
AmberockAlternativeCutscene_8:
# 892 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 893 "data/maps/AmberockTown/scripts.pory"
	special RemoveCameraObject
	return

AmberockAlternativeCutscene_3:
# 869 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceDown
	goto AmberockAlternativeCutscene_1

AmberockAlternativeCutscene_5:
# 874 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Down
	goto AmberockAlternativeCutscene_4

AmberockAlternativeCutscene_9:
# 887 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Up
	goto AmberockAlternativeCutscene_8


Amberock_WelcomeSign::
# 905 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_WelcomeSign_Text, MSGBOX_SIGN
	return


Amberock_FactorySign::
# 912 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_FactorySign_Text, MSGBOX_SIGN
	return


Amberock_GameCornerSign::
# 918 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_GameCornerSign_Text, MSGBOX_SIGN
	return


PokeFactory_Bouncer::
# 926 "data/maps/AmberockTown/scripts.pory"
	msgbox PokeFactory_Bouncer_Text, MSGBOX_NPC
# 927 "data/maps/AmberockTown/scripts.pory"
	turnobject 7, DIR_SOUTH
# 928 "data/maps/AmberockTown/scripts.pory"
	turnobject 8, DIR_SOUTH
	return


Amberock_Girl2::
# 936 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_eq Amberock_Girl2_1
# 939 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	goto_if_ge Amberock_Girl2_2
# 943 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Girl2_Text2, MSGBOX_NPC
	return

Amberock_Girl2_1:
# 937 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Girl2_Text, MSGBOX_NPC
	return

Amberock_Girl2_2:
# 940 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Girl2_Text3, MSGBOX_NPC
	return


Amberock_OldWoman::
# 947 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_OldWoman_Text, MSGBOX_NPC
	return


Amberock_Boy::
# 950 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Boy_Text, MSGBOX_NPC
	return


Amberock_OldMan::
# 953 "data/maps/AmberockTown/scripts.pory"
	lock
	checkitem ITEM_COIN_CASE
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_OldMan_2
# 959 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 960 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_OldMan_Text
# 961 "data/maps/AmberockTown/scripts.pory"
	giveitem ITEM_COIN_CASE
# 962 "data/maps/AmberockTown/scripts.pory"
	release
# 963 "data/maps/AmberockTown/scripts.pory"
	turnobject 16, DIR_SOUTH
	end

Amberock_OldMan_2:
# 955 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_OldMan_Text2
# 956 "data/maps/AmberockTown/scripts.pory"
	release
	end


Amberock_Magnemite::
# 1000 "data/maps/AmberockTown/scripts.pory"
	lock
# 1001 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 1002 "data/maps/AmberockTown/scripts.pory"
	waitse
# 1003 "data/maps/AmberockTown/scripts.pory"
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_NORMAL
# 1004 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Magnemite_Text, MSGBOX_DEFAULT
# 1005 "data/maps/AmberockTown/scripts.pory"
	waitmoncry
# 1006 "data/maps/AmberockTown/scripts.pory"
	release
	end


Amberock_BridgeRepair::
# 1014 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_BridgeRepair_Text, MSGBOX_NPC
	return


Amberock_AcerolaEvent::
# 1024 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_3
# 1025 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_2
# 1026 "data/maps/AmberockTown/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_AcerolaEvent_2
Amberock_AcerolaEvent_1:
# 1030 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Amberock_AcerolaEvent_6
Amberock_AcerolaEvent_4:
	return

Amberock_AcerolaEvent_2:
# 1027 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_4
# 1028 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto Amberock_AcerolaEvent_1

Amberock_AcerolaEvent_5:
# 1031 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 1, 63, 11
# 1032 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Amberock_AcerolaEvent_4

Amberock_AcerolaEvent_6:
# 1030 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_SURF, Amberock_AcerolaEvent_5
	goto Amberock_AcerolaEvent_4


Amberock_SetPlayerModel::
	checkplayergender
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_SetPlayerModel_2
# 1048 "data/maps/AmberockTown/scripts.pory"
	switch VAR_CHOSEN_OUTFIT
# 1049 "data/maps/AmberockTown/scripts.pory"
	case 0, Amberock_SetPlayerModel_10
# 1051 "data/maps/AmberockTown/scripts.pory"
	case 1, Amberock_SetPlayerModel_11
# 1053 "data/maps/AmberockTown/scripts.pory"
	case 2, Amberock_SetPlayerModel_12
Amberock_SetPlayerModel_1:
	return

Amberock_SetPlayerModel_2:
# 1038 "data/maps/AmberockTown/scripts.pory"
	switch VAR_CHOSEN_OUTFIT
# 1039 "data/maps/AmberockTown/scripts.pory"
	case 0, Amberock_SetPlayerModel_6
# 1041 "data/maps/AmberockTown/scripts.pory"
	case 1, Amberock_SetPlayerModel_7
# 1043 "data/maps/AmberockTown/scripts.pory"
	case 2, Amberock_SetPlayerModel_8
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_6:
# 1040 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_NORMAL_RS
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_7:
# 1042 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_8:
# 1044 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_NORMAL_ORAS
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_10:
# 1050 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_NORMAL_RS
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_11:
# 1052 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_12:
# 1054 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_NORMAL_ORAS
	goto Amberock_SetPlayerModel_1


SetPlayerKrokorokModel::
# 1061 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, SetPlayerKrokorokModel_2
SetPlayerKrokorokModel_1:
# 1064 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_TEMP_3, 1
	return

SetPlayerKrokorokModel_2:
# 1062 "data/maps/AmberockTown/scripts.pory"
	setkrokorokdisguise
	goto SetPlayerKrokorokModel_1


# 176 "data/maps/AmberockTown/scripts.pory"
Amberock_GroupGoesToGate_Movement_0:
# 176 "data/maps/AmberockTown/scripts.pory"
	enter_pokeball
# 176 "data/maps/AmberockTown/scripts.pory"
	set_invisible
	step_end

# 447 "data/maps/AmberockTown/scripts.pory"
Amberock_KrokorokGiovanniCutScene_Movement_0:
# 447 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 447 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 447 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 447 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 447 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_down
	step_end

Amberock_Papers_Text_0:
# 740 "data/maps/AmberockTown/scripts.pory"
	.string "mister$"

Amberock_Papers_Text_1:
# 743 "data/maps/AmberockTown/scripts.pory"
	.string "miss$"

VolknerTakePrisoners::
# 109 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: These guards barely put up\n"
	.string "a fight.\p"
	.string "Volkner will deliver them to\n"
	.string "the police, while we will head\l"
	.string "inside and put a stop to this.$"

ClayGoAfterGiovanni::
# 116 "data/maps/AmberockTown/scripts.pory"
	.string "I'll head directly to the pier.\p"
	.string "You go grab those papers,\n"
	.string "and once you're ready,\l"
	.string "come assist me at the pier.$"

LetsGoToGate::
# 218 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: With the facility plunged\n"
	.string "into darkness, we can rush\l"
	.string "the gates without raising an alarm.\p"
	.string "Let's go!$"

KrokorokWasCarryingSomething::
# 224 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: It looks like the Krokorok\n"
	.string "was carrying something.\p"
	.string "Most of this stuff belonged to\n"
	.string "Team Rocket, so no need to feel bad\l"
	.string "for taking it.\p"
	.string "Once you're ready,\n"
	.string "meet us at the gates.$"

VolknerGreetsPlayer::
# 333 "data/maps/AmberockTown/scripts.pory"
	.string "Volkner: Oh, it's you.\n"
	.string "{PLAYER}, right?\p"
	.string "You're here after Team Rocket\n"
	.string "as well? Perfect timing.\p"
	.string "Busting through the main gate would\n"
	.string "most likely sound an alarm, so we\l"
	.string "came up with a different way in.$"

ClayHelped::
# 342 "data/maps/AmberockTown/scripts.pory"
	.string "Interrogating the grunt we caught\n"
	.string "at the Pokémon Ranch, we learned\l"
	.string "about where Team Rocket might\l"
	.string "attack next.\p"
	.string "So, I contacted Mr. Clay,\n"
	.string "who was willing to train a Krokorok\l"
	.string "we can order around and use to\l"
	.string "spy on their operations.$"

VolknerControlKrokorok::
# 352 "data/maps/AmberockTown/scripts.pory"
	.string "This Krokorok is wearing a hidden\n"
	.string "ear piece and a camera, allowing\l"
	.string "us to order it around remotely.\p"
	.string "I've seen how good you are with\n"
	.string "Pokémon.\p"
	.string "Maybe you'd like to command\n"
	.string "the Krokorok?\p"
	.string "The objective is simple: find out who\n"
	.string "is in charge, what their plans are,\l"
	.string "and sabotage the facility's generator\l"
	.string "so that we can sneak in while they are\l"
	.string "trying to figure out what happened.$"

Amberock_Clay_Text::
# 370 "data/maps/AmberockTown/scripts.pory"
	.string "Team Rocket ain't known for\n"
	.string "their kindness, so they might not\l"
	.string "like it if they spot a Krokorok\l"
	.string "wandering around aimlessly.\p"
	.string "Try to avoid their sight\n"
	.string "the best ye can.$"

ClayTip::
# 378 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: Team Rocket ain't known for\n"
	.string "their kindness, so they might not\l"
	.string "like it if they spot a Krokorok\l"
	.string "wandering around aimlessly.\p"
	.string "Try to avoid their sight\n"
	.string "the best ye can.$"

Amberock_Volkner_Text::
# 390 "data/maps/AmberockTown/scripts.pory"
	.string "The objective is simple: find out who\n"
	.string "is in charge, what their plans are,\l"
	.string "and sabotage the facility's generator\l"
	.string "so that we can sneak in while they are\l"
	.string "trying to figure out what happened.$"

GiovanniWeAreOnSchedule::
# 459 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: Is that who I think it is?\n"
	.string "Get us a bit closer, will ya?$"

ClayLetsBail::
# 463 "data/maps/AmberockTown/scripts.pory"
	.string "Proton: We've finished grabbing\n"
	.string "the Poké Balls from the assembly\l"
	.string "lines, and are now scouring through\l"
	.string "the crates.\p"
	.string "It will take a while to grab\n"
	.string "everything, but we should be able to\l"
	.string "finish before we are discovered.$"

ClayLetsBailPart2::
# 472 "data/maps/AmberockTown/scripts.pory"
	.string "???: Excellent. And what about\n"
	.string "the research?$"

ClayLetsBailPart3::
# 476 "data/maps/AmberockTown/scripts.pory"
	.string "Proton: Everything is going exactly\n"
	.string "as planned.\p"
	.string "Some of the smartest people I know\n"
	.string "are on the case.$"

ClayLetsBail2::
# 483 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: It's just as we feared.\p"
	.string "This ain't some small\n"
	.string "remnant force.\p"
	.string "That's Giovanni, the actual leader\n"
	.string "of the syndicate.\p"
	.string "Quick, we must cut the power NOW.\p"
	.string "We need to get inside this facility\n"
	.string "and put an end to this!$"

PokeFactory_Packer_Text::
# 536 "data/maps/AmberockTown/scripts.pory"
	.string "The grunt is too busy packing the\n"
	.string "crates to notice the Krokorok.$"

TellKrokorokToRetreat::
# 541 "data/maps/AmberockTown/scripts.pory"
	.string "Order the Krokorok to return back\n"
	.string "to the group?$"

CallKrokorokBack::
# 583 "data/maps/AmberockTown/scripts.pory"
	.string "Order the Krokorok to return back\n"
	.string "to the group?$"

HereIsSurfHM::
# 631 "data/maps/AmberockTown/scripts.pory"
	.string "Ah, perfect timing!\p"
	.string "I was able to get my hands on the\n"
	.string "perfect Hidden Machine for this job.\p"
	.string "Here, you should take it.$"

GoGetBackPapers::
# 637 "data/maps/AmberockTown/scripts.pory"
	.string "As much as I would like to help you on\n"
	.string "this, I'm just a scientist after all.\p"
	.string "I mean, I don't even have my own\n"
	.string "Pokémon!\p"
	.string "I know this is a lot to ask from\n"
	.string "someone you barely even know,\l"
	.string "but please, recover our research\l"
	.string "material from Team Rocket!\p"
	.string "I had a talk with my colleagues and we\n"
	.string "have unanimously decided that if you\l"
	.string "do this, we'll reward you with\l"
	.string "something special.\p"
	.string "With that said, I need to get back to\n"
	.string "my research.\p"
	.string "When you're done, come meet me back at\n"
	.string "the research center on Route 14.$"

PapersOnGround::
# 767 "data/maps/AmberockTown/scripts.pory"
	.string "There seems to be some papers on\n"
	.string "the ground here.\p"
	.string "{PLAYER} picked up the papers.$"

OurPapers::
# 772 "data/maps/AmberockTown/scripts.pory"
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "The culprit must have fled to Amberock\n"
	.string "Town and cut the bridge behind him,\l"
	.string "giving him ample time to hide.\p"
	.string "That scoundrel!\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry\l"
	.string "people across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

OurPapersAlternative::
# 794 "data/maps/AmberockTown/scripts.pory"
	.string "Can I see those papers?\p"
	.string "{PLAYER} handed the papers to the\n"
	.string "scientist.\p"
	.string "… … … …\p"
	.string "Yes, these are definitely some of\n"
	.string "the papers that were stolen.\p"
	.string "You say you saw the culprit flee to\n"
	.string "Amberock Town and cut the bridge\l"
	.string "behind him?\p"
	.string "That scoundrel!\p"
	.string "No matter what we do now, this\n"
	.string "has given him ample time to hide.\p"
	.string "It would take too long to wait for\n"
	.string "the bridge to be repaired.\p"
	.string "You should prepare your team for\n"
	.string "what lies ahead.\p"
	.string "In the meantime, I'll try to get my\n"
	.string "hands on a Hidden Machine that can\l"
	.string "teach your Pokémon how to carry\l"
	.string "people across water.\p"
	.string "I'll meet you back here once we're\n"
	.string "both ready.$"

AcerolaVisitGym::
# 818 "data/maps/AmberockTown/scripts.pory"
	.string "Acerola: I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"

AcerolaVisitGymAlternative::
# 829 "data/maps/AmberockTown/scripts.pory"
	.string "I couldn't help overhearing\n"
	.string "parts of your conversation.\p"
	.string "If you're looking to strengthen your\n"
	.string "Pokémon, you should totally check the\l"
	.string "Pokémon Gym over in Drisledge Town!\p"
	.string "I hear it's one of the best gyms in\n"
	.string "all of Sinko!\p"
	.string "Anyway, I need to head back home now.\n"
	.string "See you again, {STR_VAR_1}!$"

RocketYoureTooLate::
# 896 "data/maps/AmberockTown/scripts.pory"
	.string "Rocket Grunt: I see our little\n"
	.string "diversion wasn't enough to fool you.\p"
	.string "But, it matters not.\n"
	.string "You're late anyway!\p"
	.string "Good luck ever catching me!$"

Amberock_WelcomeSign_Text::
# 907 "data/maps/AmberockTown/scripts.pory"
	.string "AMBEROCK TOWN\n"
	.string "“The town where everyone prospers!”$"

Amberock_FactorySign_Text::
# 914 "data/maps/AmberockTown/scripts.pory"
	.string "Poké Ball Factory$"

Amberock_GameCornerSign_Text::
# 920 "data/maps/AmberockTown/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "Amberock Game Corner$"

PokeFactory_Bouncer_Text::
# 930 "data/maps/AmberockTown/scripts.pory"
	.string "This place isn't a playground.\n"
	.string "Beat it, kid.$"

Amberock_Girl2_Text::
# 966 "data/maps/AmberockTown/scripts.pory"
	.string "Team Rocket attacked the Poké Ball\n"
	.string "factory? I hope everybody is okay.$"

Amberock_Girl2_Text2::
# 970 "data/maps/AmberockTown/scripts.pory"
	.string "There's some pretty menacing guys\n"
	.string "guarding the gate to the factory.\p"
	.string "I wonder what's going on…$"

Amberock_Girl2_Text3::
# 975 "data/maps/AmberockTown/scripts.pory"
	.string "What's going on with the factory?$"

Amberock_OldWoman_Text::
# 978 "data/maps/AmberockTown/scripts.pory"
	.string "They kicked me out because I was\n"
	.string "too good of a player!\p"
	.string "They say my Magnemite was rigging the\n"
	.string "machines, but there's no proof of that!$"

Amberock_Boy_Text::
# 984 "data/maps/AmberockTown/scripts.pory"
	.string "They say Amberock Town used to be\n"
	.string "Amberock City, but the cliffs have\l"
	.string "slowly eroded away and reduced the\l"
	.string "size of livable land.$"

Amberock_OldMan_Text::
# 990 "data/maps/AmberockTown/scripts.pory"
	.string "I'm done gambling!\n"
	.string "It has led me absolutely nowhere!\p"
	.string "Here, you want this?\n"
	.string "Well, it's yours!$"

Amberock_OldMan_Text2::
# 996 "data/maps/AmberockTown/scripts.pory"
	.string "Stupid Game Corner…$"

Amberock_Magnemite_Text::
# 1009 "data/maps/AmberockTown/scripts.pory"
	.string "Magnemite: Bzzzt!$"

Amberock_BridgeRepair_Text::
# 1016 "data/maps/AmberockTown/scripts.pory"
	.string "This bridge breaks quite often,\n"
	.string "so we need to be on constant lookout\l"
	.string "and fix it before it causes trouble\l"
	.string "for the residents.$"
