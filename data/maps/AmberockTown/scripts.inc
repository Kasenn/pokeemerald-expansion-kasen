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
	turnobject LOCALID_PLAYER, DIR_EAST
# 72 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 73 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/AmberockTown/scripts.pory"
	delay 16
# 75 "data/maps/AmberockTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
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
	applymovement LOCALID_PLAYER, GateMovement1
	goto AmberockGateEventMain_1

AmberockGateEventMain_4:
# 56 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, GateMovement2
	goto AmberockGateEventMain_1

AmberockGateEventMain_5:
# 58 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, GateMovement3
	goto AmberockGateEventMain_1

AmberockGateEventMain_6:
# 60 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, GateMovement4
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
# 202 "data/maps/AmberockTown/scripts.pory"
	applymovement 10, ClayMovesToGate
# 203 "data/maps/AmberockTown/scripts.pory"
	applymovement 22, VolknerMovesToGate
# 204 "data/maps/AmberockTown/scripts.pory"
	waitmovement 10
# 205 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 10, 42, 22
# 206 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 10, 42, 22
# 207 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 22, 43, 22
# 208 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 22, 43, 22
# 209 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_NORTH
# 210 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_NORTH
# 211 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 212 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
# 213 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
# 214 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_GroupGoesToGate_2:
# 180 "data/maps/AmberockTown/scripts.pory"
	playse SE_PIN
# 181 "data/maps/AmberockTown/scripts.pory"
	exclamationmark 10
# 182 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 183 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 184 "data/maps/AmberockTown/scripts.pory"
	msgbox KrokorokWasCarryingSomething, MSGBOX_AUTOCLOSE
# 185 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 186 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 187 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 188 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_1, Amberock_GroupGoesToGate_9
Amberock_GroupGoesToGate_8:
# 192 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_2, Amberock_GroupGoesToGate_12
Amberock_GroupGoesToGate_11:
# 196 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_FACTORY_ITEM_3, Amberock_GroupGoesToGate_15
Amberock_GroupGoesToGate_14:
# 200 "data/maps/AmberockTown/scripts.pory"
	delay 60
	goto Amberock_GroupGoesToGate_1

Amberock_GroupGoesToGate_9:
# 189 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_FACTORY_ITEM_1_OUTSIDE
# 190 "data/maps/AmberockTown/scripts.pory"
	addobject 24
	goto Amberock_GroupGoesToGate_8

Amberock_GroupGoesToGate_12:
# 193 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_FACTORY_ITEM_2_OUTSIDE
# 194 "data/maps/AmberockTown/scripts.pory"
	addobject 25
	goto Amberock_GroupGoesToGate_11

Amberock_GroupGoesToGate_15:
# 197 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_FACTORY_ITEM_3_OUTSIDE
# 198 "data/maps/AmberockTown/scripts.pory"
	addobject 26
	goto Amberock_GroupGoesToGate_14


# 231 "data/maps/AmberockTown/scripts.pory"
ClayMovesToGate:
# 232 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 232 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 233 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 233 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 234 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 234 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 234 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 234 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 235 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

# 237 "data/maps/AmberockTown/scripts.pory"
VolknerMovesToGate:
# 238 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 238 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 238 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 238 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 238 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 238 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 239 "data/maps/AmberockTown/scripts.pory"
	walk_right
	step_end

SetFactoryWarp2::
# 242 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_lt SetFactoryWarp2_2
# 246 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY_NO_LIGHTS, 1
SetFactoryWarp2_1:
# 248 "data/maps/AmberockTown/scripts.pory"
	release
	return

SetFactoryWarp2_2:
# 243 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY, 1
	goto SetFactoryWarp2_1


SetFactoryWarp1::
# 251 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_lt SetFactoryWarp1_2
# 255 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY_NO_LIGHTS, 0
SetFactoryWarp1_1:
# 257 "data/maps/AmberockTown/scripts.pory"
	release
	return

SetFactoryWarp1_2:
# 252 "data/maps/AmberockTown/scripts.pory"
	setdynamicwarp MAP_AMBEROCK_POKEBALL_FACTORY, 0
	goto SetFactoryWarp1_1


Amberock_FlagControl::
# 261 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_ge Amberock_FlagControl_2
Amberock_FlagControl_1:
# 265 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
	goto_if_ge Amberock_FlagControl_5
Amberock_FlagControl_4:
# 268 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	goto_if_eq Amberock_FlagControl_8
Amberock_FlagControl_7:
# 275 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_BEAT_GUARDS
	goto_if_ge Amberock_FlagControl_11
Amberock_FlagControl_10:
# 282 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_DISGUISED_AS_KROKOROK, Amberock_FlagControl_14
# 286 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 287 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_6
Amberock_FlagControl_13:
# 290 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_FlagControl_18
# 294 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_C
Amberock_FlagControl_17:
# 296 "data/maps/AmberockTown/scripts.pory"
	call Amberock_AcerolaEvent
# 297 "data/maps/AmberockTown/scripts.pory"
	call Amberock_SetPlayerModel
	return

Amberock_FlagControl_2:
# 262 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_A
# 263 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_REPAIR_AMBEROCK_BRIDGE
	goto Amberock_FlagControl_1

Amberock_FlagControl_5:
# 266 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_D
	goto Amberock_FlagControl_4

Amberock_FlagControl_8:
# 269 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_6
# 270 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 10, MOVEMENT_TYPE_FACE_UP
# 271 "data/maps/AmberockTown/scripts.pory"
	setobjectmovementtype 22, MOVEMENT_TYPE_FACE_UP
# 272 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 10, 42, 22
# 273 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 22, 43, 22
	goto Amberock_FlagControl_7

Amberock_FlagControl_11:
# 276 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_7
# 277 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_6
# 278 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_8
# 279 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 27, 41, 20
# 280 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 28, 44, 20
	goto Amberock_FlagControl_10

Amberock_FlagControl_14:
# 283 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_5
	goto Amberock_FlagControl_13

Amberock_FlagControl_18:
# 291 "data/maps/AmberockTown/scripts.pory"
	setmaplayoutindex LAYOUT_AMBEROCK_TEST
	goto Amberock_FlagControl_17


Amberock_KrokorokIntro::
# 301 "data/maps/AmberockTown/scripts.pory"
	lock
# 302 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 303 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 304 "data/maps/AmberockTown/scripts.pory"
	playse SE_PIN
# 305 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_SOUTH
# 306 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_SOUTH
# 307 "data/maps/AmberockTown/scripts.pory"
	exclamationmark 10, 22
# 308 "data/maps/AmberockTown/scripts.pory"
	dismountplayer
# 309 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, Walk2Up
# 310 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 311 "data/maps/AmberockTown/scripts.pory"
	unlockfollowermovement
# 312 "data/maps/AmberockTown/scripts.pory"
	msgbox VolknerGreetsPlayer
# 313 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_WEST
# 314 "data/maps/AmberockTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 315 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 316 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayHelped
# 317 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_SOUTH
# 318 "data/maps/AmberockTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 319 "data/maps/AmberockTown/scripts.pory"
	msgbox VolknerControlKrokorok
# 320 "data/maps/AmberockTown/scripts.pory"
	turnobject 22, DIR_WEST
# 321 "data/maps/AmberockTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_WEST
# 322 "data/maps/AmberockTown/scripts.pory"
	turnobject 10, DIR_EAST
# 323 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayTip
# 324 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_SPOKE_WITH_CLAY
# 325 "data/maps/AmberockTown/scripts.pory"
	release
	return


Amberock_Clay::
# 363 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Clay_Text, MSGBOX_NPC
	return


Amberock_Volkner::
# 383 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Volkner_Text, MSGBOX_NPC
	return


Amberock_KrokorokScript::
# 394 "data/maps/AmberockTown/scripts.pory"
	msgbox SwitchToKrokorok, MSGBOX_YESNO
# 395 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_KrokorokScript_2
# 399 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 400 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 402 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_5
# 403 "data/maps/AmberockTown/scripts.pory"
	addobject 11
# 405 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerToKrokorokNorth
# 406 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 407 "data/maps/AmberockTown/scripts.pory"
	setkrokorokdisguise
# 408 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, SetObjectVisible
# 409 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 410 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_DISGUISED_AS_KROKOROK
# 411 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 412 "data/maps/AmberockTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 413 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 414 "data/maps/AmberockTown/scripts.pory"
	removeobject 9
# 415 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SYS_B_DASH
# 416 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 417 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, KrokorokGoesNorthThroughFence
# 418 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 419 "data/maps/AmberockTown/scripts.pory"
	playse SE_LEDGE
# 420 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 421 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 422 "data/maps/AmberockTown/scripts.pory"
	waitse
# 423 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 424 "data/maps/AmberockTown/scripts.pory"
	waitse
# 425 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 426 "data/maps/AmberockTown/scripts.pory"
	waitse
# 427 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 428 "data/maps/AmberockTown/scripts.pory"
	waitse
# 429 "data/maps/AmberockTown/scripts.pory"
	fadenewbgm MUS_AQUA_MAGMA_HIDEOUT
# 430 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 431 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_SAND_ATTACK
# 432 "data/maps/AmberockTown/scripts.pory"
	playse SE_BIKE_HOP
# 433 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 434 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_KrokorokScript_2:
# 396 "data/maps/AmberockTown/scripts.pory"
	release
	end


Amberock_KrokorokGiovanniCutScene::
# 438 "data/maps/AmberockTown/scripts.pory"
	lock
# 439 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 440 "data/maps/AmberockTown/scripts.pory"
	msgbox GiovanniWeAreOnSchedule
# 441 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 442 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, Amberock_KrokorokGiovanniCutScene_Movement_0
# 443 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 444 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBail
# 445 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBailPart2
# 446 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBailPart3
# 447 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 448 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, Walk2Right
# 449 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 450 "data/maps/AmberockTown/scripts.pory"
	msgbox ClayLetsBail2
# 451 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_GIOVANNI
# 452 "data/maps/AmberockTown/scripts.pory"
	release
	return


Amberock_RecallKrokorok::
	msgbox TellKrokorokToRetreat, MSGBOX_YESNO
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Amberock_RecallKrokorok_2
# 494 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 495 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 496 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, KrokorokGoesSouthThroughFence
# 497 "data/maps/AmberockTown/scripts.pory"
	delay 8
# 498 "data/maps/AmberockTown/scripts.pory"
	playse SE_LEDGE
# 499 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 500 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 501 "data/maps/AmberockTown/scripts.pory"
	waitse
# 502 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 503 "data/maps/AmberockTown/scripts.pory"
	waitse
# 504 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 505 "data/maps/AmberockTown/scripts.pory"
	waitse
# 506 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_DIG
# 507 "data/maps/AmberockTown/scripts.pory"
	waitse
# 508 "data/maps/AmberockTown/scripts.pory"
	fadenewbgm MUS_RUSTBORO
# 509 "data/maps/AmberockTown/scripts.pory"
	delay 32
# 510 "data/maps/AmberockTown/scripts.pory"
	playse SE_M_SAND_ATTACK
# 511 "data/maps/AmberockTown/scripts.pory"
	playse SE_BIKE_HOP
# 512 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 513 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_6
# 514 "data/maps/AmberockTown/scripts.pory"
	addobject 9
# 515 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, MovePlayerFromKrokorokSouth
# 516 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 517 "data/maps/AmberockTown/scripts.pory"
	setkrokorokdisguise
# 518 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, SetObjectVisible
# 519 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 520 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_DISGUISED_AS_KROKOROK
# 521 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_HIDE_FOLLOWER
# 522 "data/maps/AmberockTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 523 "data/maps/AmberockTown/scripts.pory"
	removeobject 11
# 524 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
	return

Amberock_RecallKrokorok_2:
# 491 "data/maps/AmberockTown/scripts.pory"
	release
	end


PokeFactory_Packer::
# 528 "data/maps/AmberockTown/scripts.pory"
	msgbox PokeFactory_Packer_Text
# 529 "data/maps/AmberockTown/scripts.pory"
	release
	return


# 541 "data/maps/AmberockTown/scripts.pory"
KrokorokGoesNorthThroughFence:
# 542 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_up
# 543 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_up
# 544 "data/maps/AmberockTown/scripts.pory"
	set_invisible
# 545 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 546 "data/maps/AmberockTown/scripts.pory"
	walk_slow_up
# 546 "data/maps/AmberockTown/scripts.pory"
	walk_slow_up
# 547 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 547 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 547 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 548 "data/maps/AmberockTown/scripts.pory"
	set_visible
# 549 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_up
	step_end

# 551 "data/maps/AmberockTown/scripts.pory"
KrokorokGoesSouthThroughFence:
# 552 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_down
# 553 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_down
# 554 "data/maps/AmberockTown/scripts.pory"
	set_invisible
# 555 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 556 "data/maps/AmberockTown/scripts.pory"
	walk_slow_down
# 556 "data/maps/AmberockTown/scripts.pory"
	walk_slow_down
# 557 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 557 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 557 "data/maps/AmberockTown/scripts.pory"
	delay_16
# 558 "data/maps/AmberockTown/scripts.pory"
	set_visible
# 559 "data/maps/AmberockTown/scripts.pory"
	jump_in_place_down
	step_end

DiscoverAmberock::
# 563 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_VISITED_AMBEROCK
# 564 "data/maps/AmberockTown/scripts.pory"
	release
	return


Amberock_RetreatKrokorok::
	msgbox CallKrokorokBack, MSGBOX_YESNO
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_RetreatKrokorok_2
Amberock_RetreatKrokorok_1:
# 575 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_RetreatKrokorok_2:
# 569 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_DISGUISED_AS_KROKOROK
# 570 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 572 "data/maps/AmberockTown/scripts.pory"
	warp MAP_AMBEROCK_TOWN, 30, 21
# 573 "data/maps/AmberockTown/scripts.pory"
	waitstate
	goto Amberock_RetreatKrokorok_1


Amberock_PaperVisibility::
# 584 "data/maps/AmberockTown/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_PaperVisibility_2
	return

Amberock_PaperVisibility_1:
# 586 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 10, 0x128, FALSE
# 587 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 12, 0x189, FALSE
# 588 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 12, 0x189, FALSE
# 589 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 13, 0x170, FALSE
# 590 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 13, 0x170, FALSE
# 591 "data/maps/AmberockTown/scripts.pory"
	setmetatile 23 + 30, 13, 0x170, FALSE
# 592 "data/maps/AmberockTown/scripts.pory"
	setmetatile 23 + 30, 14, 0x170, FALSE
# 593 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 14, 0x170, FALSE
# 594 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 14, 0x170, FALSE
# 595 "data/maps/AmberockTown/scripts.pory"
	setmetatile 24 + 30, 15, 0x170, FALSE
# 596 "data/maps/AmberockTown/scripts.pory"
	setmetatile 25 + 30, 15, 0x170, FALSE
# 597 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 15, 0x170, FALSE
# 598 "data/maps/AmberockTown/scripts.pory"
	setmetatile 26 + 30, 16, 0x170, FALSE
# 599 "data/maps/AmberockTown/scripts.pory"
	setmetatile 27 + 30, 16, 0x170, FALSE
# 600 "data/maps/AmberockTown/scripts.pory"
	setmetatile 28 + 30, 16, 0x170, FALSE
	return

Amberock_PaperVisibility_2:
# 585 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_REPAIR_AMBEROCK_BRIDGE, Amberock_PaperVisibility_1
	return


Amberock_SurfScientist::
# 604 "data/maps/AmberockTown/scripts.pory"
	lock
# 605 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 606 "data/maps/AmberockTown/scripts.pory"
	msgbox HereIsSurfHM
# 607 "data/maps/AmberockTown/scripts.pory"
	giveitem ITEM_HM03
# 608 "data/maps/AmberockTown/scripts.pory"
	msgbox GoGetBackPapers
# 609 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 610 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 611 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq Amberock_SurfScientist_2
# 619 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeavesStraight
Amberock_SurfScientist_1:
# 621 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 622 "data/maps/AmberockTown/scripts.pory"
	removeobject 1
# 623 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_RECEIVED_HM_SURF
# 624 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_SurfScientist_2:
# 612 "data/maps/AmberockTown/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 613 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 64
	goto_if_eq Amberock_SurfScientist_7
Amberock_SurfScientist_5:
# 616 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeavesDetour
	goto Amberock_SurfScientist_1

Amberock_SurfScientist_6:
# 614 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_SurfScientist_5

Amberock_SurfScientist_7:
# 613 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 10
	goto_if_eq Amberock_SurfScientist_6
	goto Amberock_SurfScientist_5


# 651 "data/maps/AmberockTown/scripts.pory"
ScientistLeavesDetour:
# 652 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 653 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 653 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 653 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 653 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 654 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 655 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 655 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 656 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 656 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 656 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 656 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 656 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 657 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 657 "data/maps/AmberockTown/scripts.pory"
	walk_up
	step_end

# 659 "data/maps/AmberockTown/scripts.pory"
ScientistLeavesStraight:
# 660 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 660 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 660 "data/maps/AmberockTown/scripts.pory"
	walk_up
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

Amberock_Papers::
# 666 "data/maps/AmberockTown/scripts.pory"
	lock
# 667 "data/maps/AmberockTown/scripts.pory"
	safefollow
# 668 "data/maps/AmberockTown/scripts.pory"
	msgbox PapersOnGround
# 669 "data/maps/AmberockTown/scripts.pory"
	removeobject 3
# 670 "data/maps/AmberockTown/scripts.pory"
	setmetatile 57, 10, 0x128, FALSE
# 671 "data/maps/AmberockTown/scripts.pory"
	special DrawWholeMapView
# 672 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 673 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_2
# 674 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_3
# 675 "data/maps/AmberockTown/scripts.pory"
	addobject 1
# 676 "data/maps/AmberockTown/scripts.pory"
	addobject 2
# 677 "data/maps/AmberockTown/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 678 "data/maps/AmberockTown/scripts.pory"
	checktrainerflag TRAINER_R15_TR18_BERRYROCKET
	goto_if 0, Amberock_Papers_2
Amberock_Papers_1:
# 681 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 682 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 683 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_6
# 688 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_7
# 694 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_8
Amberock_Papers_4:
# 701 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/AmberockTown/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 703 "data/maps/AmberockTown/scripts.pory"
	delay 24
# 704 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_TEMP_A, Amberock_Papers_10
# 708 "data/maps/AmberockTown/scripts.pory"
	msgbox OurPapers
Amberock_Papers_9:
# 710 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 711 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 712 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_30
# 714 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_31
# 716 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_32
Amberock_Papers_28:
# 719 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 720 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 721 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 722 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_35
# 724 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_36
# 727 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_37
Amberock_Papers_33:
# 731 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 732 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 733 "data/maps/AmberockTown/scripts.pory"
	checkplayergender
# 734 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_Papers_39
# 738 "data/maps/AmberockTown/scripts.pory"
	bufferstring STR_VAR_1, Amberock_Papers_Text_1
Amberock_Papers_38:
# 740 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_ACEROLA_TALKED_TO, Amberock_Papers_43
# 744 "data/maps/AmberockTown/scripts.pory"
	msgbox AcerolaVisitGymAlternative
Amberock_Papers_42:
# 746 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 747 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 748 "data/maps/AmberockTown/scripts.pory"
	case DIR_SOUTH, Amberock_Papers_48
# 750 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, Amberock_Papers_49
# 752 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, Amberock_Papers_50
Amberock_Papers_46:
# 755 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 756 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_ROUTE14_ROCKET_EVENT, 6
# 757 "data/maps/AmberockTown/scripts.pory"
	removeobject 1
# 758 "data/maps/AmberockTown/scripts.pory"
	removeobject 2
# 759 "data/maps/AmberockTown/scripts.pory"
	delay 15
# 760 "data/maps/AmberockTown/scripts.pory"
	release
	return

Amberock_Papers_2:
# 679 "data/maps/AmberockTown/scripts.pory"
	call AmberockAlternativeCutscene
	goto Amberock_Papers_1

Amberock_Papers_6:
# 684 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 57
	goto_if_eq Amberock_Papers_15
Amberock_Papers_13:
# 687 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, MoveScientist2
	goto Amberock_Papers_4

Amberock_Papers_7:
# 689 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 58
	goto_if_eq Amberock_Papers_20
Amberock_Papers_18:
# 692 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 31, 28, 4
# 693 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, Walk6Down
	goto Amberock_Papers_4

Amberock_Papers_8:
# 695 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_1, 56
	goto_if_eq Amberock_Papers_25
Amberock_Papers_23:
# 698 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 31, 28, 4
# 699 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, MoveScientist1
	goto Amberock_Papers_4

Amberock_Papers_10:
# 705 "data/maps/AmberockTown/scripts.pory"
	msgbox OurPapersAlternative
	goto Amberock_Papers_9

Amberock_Papers_14:
# 685 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_13

Amberock_Papers_15:
# 684 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 8
	goto_if_eq Amberock_Papers_14
	goto Amberock_Papers_13

Amberock_Papers_19:
# 690 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_18

Amberock_Papers_20:
# 689 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_19
	goto Amberock_Papers_18

Amberock_Papers_24:
# 696 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
	goto Amberock_Papers_23

Amberock_Papers_25:
# 695 "data/maps/AmberockTown/scripts.pory"
	compare VAR_TEMP_2, 9
	goto_if_eq Amberock_Papers_24
	goto Amberock_Papers_23

Amberock_Papers_30:
# 713 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeave2
	goto Amberock_Papers_28

Amberock_Papers_31:
# 715 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, Walk5Up
	goto Amberock_Papers_28

Amberock_Papers_32:
# 717 "data/maps/AmberockTown/scripts.pory"
	applymovement 1, ScientistLeave1
	goto Amberock_Papers_28

Amberock_Papers_35:
# 723 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, MoveScientist2
	goto Amberock_Papers_33

Amberock_Papers_36:
# 725 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 32, 28, 4
# 726 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, Walk6Down
	goto Amberock_Papers_33

Amberock_Papers_37:
# 728 "data/maps/AmberockTown/scripts.pory"
	setobjectxy 32, 28, 4
# 729 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, MoveScientist1
	goto Amberock_Papers_33

Amberock_Papers_39:
# 735 "data/maps/AmberockTown/scripts.pory"
	bufferstring STR_VAR_1, Amberock_Papers_Text_0
	goto Amberock_Papers_38

Amberock_Papers_43:
# 741 "data/maps/AmberockTown/scripts.pory"
	msgbox AcerolaVisitGym
	goto Amberock_Papers_42

Amberock_Papers_48:
# 749 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, ScientistLeave2
	goto Amberock_Papers_46

Amberock_Papers_49:
# 751 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, Walk5Up
	goto Amberock_Papers_46

Amberock_Papers_50:
# 753 "data/maps/AmberockTown/scripts.pory"
	applymovement 2, ScientistLeave1
	goto Amberock_Papers_46


# 835 "data/maps/AmberockTown/scripts.pory"
MoveScientist1:
# 836 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 836 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 837 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 837 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 838 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 838 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 838 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 838 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 839 "data/maps/AmberockTown/scripts.pory"
	step_end

# 841 "data/maps/AmberockTown/scripts.pory"
MoveScientist2:
# 842 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 842 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 843 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 844 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 844 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 844 "data/maps/AmberockTown/scripts.pory"
	walk_down
# 845 "data/maps/AmberockTown/scripts.pory"
	step_end

# 847 "data/maps/AmberockTown/scripts.pory"
ScientistLeave2:
# 848 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 848 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 849 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 850 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 850 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 850 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 851 "data/maps/AmberockTown/scripts.pory"
	step_end

# 853 "data/maps/AmberockTown/scripts.pory"
ScientistLeave1:
# 854 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 854 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 855 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 855 "data/maps/AmberockTown/scripts.pory"
	walk_right
# 856 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 856 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 856 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 857 "data/maps/AmberockTown/scripts.pory"
	step_end

AmberockAlternativeCutscene::
# 860 "data/maps/AmberockTown/scripts.pory"
	delay 48
# 861 "data/maps/AmberockTown/scripts.pory"
	switch VAR_FACING
# 862 "data/maps/AmberockTown/scripts.pory"
	case DIR_WEST, AmberockAlternativeCutscene_3
# 863 "data/maps/AmberockTown/scripts.pory"
	case DIR_EAST, AmberockAlternativeCutscene_3
AmberockAlternativeCutscene_1:
# 866 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 867 "data/maps/AmberockTown/scripts.pory"
	special SpawnCameraObject
# 868 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_5
# 872 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Down
AmberockAlternativeCutscene_4:
# 874 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 875 "data/maps/AmberockTown/scripts.pory"
	delay 60
# 876 "data/maps/AmberockTown/scripts.pory"
	msgbox RocketYoureTooLate
# 877 "data/maps/AmberockTown/scripts.pory"
	closemessage
# 878 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_A
# 879 "data/maps/AmberockTown/scripts.pory"
	applymovement 4, Walk4Down
# 880 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 881 "data/maps/AmberockTown/scripts.pory"
	compare VAR_FACING, DIR_SOUTH
	goto_if_eq AmberockAlternativeCutscene_9
# 885 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk4Up
AmberockAlternativeCutscene_8:
# 887 "data/maps/AmberockTown/scripts.pory"
	waitmovement 0
# 888 "data/maps/AmberockTown/scripts.pory"
	special RemoveCameraObject
	return

AmberockAlternativeCutscene_3:
# 864 "data/maps/AmberockTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceDown
	goto AmberockAlternativeCutscene_1

AmberockAlternativeCutscene_5:
# 869 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Down
	goto AmberockAlternativeCutscene_4

AmberockAlternativeCutscene_9:
# 882 "data/maps/AmberockTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk5Up
	goto AmberockAlternativeCutscene_8


Amberock_WelcomeSign::
# 900 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_WelcomeSign_Text, MSGBOX_SIGN
	return


Amberock_FactorySign::
# 907 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_FactorySign_Text, MSGBOX_SIGN
	return


Amberock_GameCornerSign::
# 913 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_GameCornerSign_Text, MSGBOX_SIGN
	return


PokeFactory_Bouncer::
# 921 "data/maps/AmberockTown/scripts.pory"
	msgbox PokeFactory_Bouncer_Text, MSGBOX_NPC
# 922 "data/maps/AmberockTown/scripts.pory"
	turnobject 7, DIR_SOUTH
# 923 "data/maps/AmberockTown/scripts.pory"
	turnobject 8, DIR_SOUTH
	return


Amberock_Girl2::
# 931 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GIOVANNI_ESCAPED
	goto_if_eq Amberock_Girl2_1
# 934 "data/maps/AmberockTown/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_GROUP_WAITING_AT_GATE
	goto_if_ge Amberock_Girl2_2
# 938 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Girl2_Text2, MSGBOX_NPC
	return

Amberock_Girl2_1:
# 932 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Girl2_Text, MSGBOX_NPC
	return

Amberock_Girl2_2:
# 935 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Girl2_Text3, MSGBOX_NPC
	return


Amberock_OldWoman::
# 942 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_OldWoman_Text, MSGBOX_NPC
	return


Amberock_Boy::
# 945 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Boy_Text, MSGBOX_NPC
	return


Amberock_OldMan::
# 948 "data/maps/AmberockTown/scripts.pory"
	lock
	checkitem ITEM_COIN_CASE
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_OldMan_2
# 954 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 955 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_OldMan_Text
# 956 "data/maps/AmberockTown/scripts.pory"
	giveitem ITEM_COIN_CASE
# 957 "data/maps/AmberockTown/scripts.pory"
	release
# 958 "data/maps/AmberockTown/scripts.pory"
	turnobject 16, DIR_SOUTH
	end

Amberock_OldMan_2:
# 950 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_OldMan_Text2
# 951 "data/maps/AmberockTown/scripts.pory"
	release
	end


Amberock_Magnemite::
# 995 "data/maps/AmberockTown/scripts.pory"
	lock
# 996 "data/maps/AmberockTown/scripts.pory"
	faceplayer
# 997 "data/maps/AmberockTown/scripts.pory"
	waitse
# 998 "data/maps/AmberockTown/scripts.pory"
	playmoncry SPECIES_MAGNEMITE, CRY_MODE_NORMAL
# 999 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_Magnemite_Text, MSGBOX_DEFAULT
# 1000 "data/maps/AmberockTown/scripts.pory"
	waitmoncry
# 1001 "data/maps/AmberockTown/scripts.pory"
	release
	end


Amberock_BridgeRepair::
# 1009 "data/maps/AmberockTown/scripts.pory"
	msgbox Amberock_BridgeRepair_Text, MSGBOX_NPC
	return


Amberock_AcerolaEvent::
# 1019 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_3
# 1020 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_2
# 1021 "data/maps/AmberockTown/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge Amberock_AcerolaEvent_2
Amberock_AcerolaEvent_1:
# 1025 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Amberock_AcerolaEvent_6
Amberock_AcerolaEvent_4:
	return

Amberock_AcerolaEvent_2:
# 1022 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_4
# 1023 "data/maps/AmberockTown/scripts.pory"
	setflag FLAG_TEMP_1
	goto Amberock_AcerolaEvent_1

Amberock_AcerolaEvent_5:
# 1026 "data/maps/AmberockTown/scripts.pory"
	setobjectxyperm 1, 63, 11
# 1027 "data/maps/AmberockTown/scripts.pory"
	clearflag FLAG_TEMP_2
	goto Amberock_AcerolaEvent_4

Amberock_AcerolaEvent_6:
# 1025 "data/maps/AmberockTown/scripts.pory"
	goto_if_unset FLAG_RECEIVED_HM_SURF, Amberock_AcerolaEvent_5
	goto Amberock_AcerolaEvent_4


Amberock_SetPlayerModel::
	checkplayergender
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Amberock_SetPlayerModel_2
# 1043 "data/maps/AmberockTown/scripts.pory"
	switch VAR_CHOSEN_OUTFIT
# 1044 "data/maps/AmberockTown/scripts.pory"
	case 0, Amberock_SetPlayerModel_10
# 1046 "data/maps/AmberockTown/scripts.pory"
	case 1, Amberock_SetPlayerModel_11
# 1048 "data/maps/AmberockTown/scripts.pory"
	case 2, Amberock_SetPlayerModel_12
Amberock_SetPlayerModel_1:
	return

Amberock_SetPlayerModel_2:
# 1033 "data/maps/AmberockTown/scripts.pory"
	switch VAR_CHOSEN_OUTFIT
# 1034 "data/maps/AmberockTown/scripts.pory"
	case 0, Amberock_SetPlayerModel_6
# 1036 "data/maps/AmberockTown/scripts.pory"
	case 1, Amberock_SetPlayerModel_7
# 1038 "data/maps/AmberockTown/scripts.pory"
	case 2, Amberock_SetPlayerModel_8
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_6:
# 1035 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_RS_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_7:
# 1037 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_8:
# 1039 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_ORAS_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_10:
# 1045 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_RS_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_11:
# 1047 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	goto Amberock_SetPlayerModel_1

Amberock_SetPlayerModel_12:
# 1049 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_ORAS_NORMAL
	goto Amberock_SetPlayerModel_1


SetPlayerKrokorokModel::
# 1056 "data/maps/AmberockTown/scripts.pory"
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, SetPlayerKrokorokModel_2
SetPlayerKrokorokModel_1:
# 1059 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_TEMP_3, 1
	return

SetPlayerKrokorokModel_2:
# 1057 "data/maps/AmberockTown/scripts.pory"
	setkrokorokdisguise
	goto SetPlayerKrokorokModel_1


SetSittingPlayerModel::
	checkplayergender
# 0 "data/maps/AmberockTown/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SetSittingPlayerModel_2
# 1076 "data/maps/AmberockTown/scripts.pory"
	switch VAR_CHOSEN_OUTFIT
# 1077 "data/maps/AmberockTown/scripts.pory"
	case 0, SetSittingPlayerModel_11
# 1079 "data/maps/AmberockTown/scripts.pory"
	case 1, SetSittingPlayerModel_12
# 1081 "data/maps/AmberockTown/scripts.pory"
	case 2, SetSittingPlayerModel_13
# 1083 "data/maps/AmberockTown/scripts.pory"
	case 3, SetSittingPlayerModel_14
SetSittingPlayerModel_1:
	return

SetSittingPlayerModel_2:
# 1064 "data/maps/AmberockTown/scripts.pory"
	switch VAR_CHOSEN_OUTFIT
# 1065 "data/maps/AmberockTown/scripts.pory"
	case 0, SetSittingPlayerModel_6
# 1067 "data/maps/AmberockTown/scripts.pory"
	case 1, SetSittingPlayerModel_7
# 1069 "data/maps/AmberockTown/scripts.pory"
	case 2, SetSittingPlayerModel_8
# 1071 "data/maps/AmberockTown/scripts.pory"
	case 3, SetSittingPlayerModel_9
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_6:
# 1066 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_RS_RIDE
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_7:
# 1068 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_BRENDAN_SURFING
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_8:
# 1070 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_ORAS_RIDE
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_9:
# 1072 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_BRENDAN_CONTEST_RIDE
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_11:
# 1078 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_RS_RIDE
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_12:
# 1080 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_RIVAL_MAY_SURFING
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_13:
# 1082 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_ORAS_RIDE
	goto SetSittingPlayerModel_1

SetSittingPlayerModel_14:
# 1084 "data/maps/AmberockTown/scripts.pory"
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_MAY_CONTEST_RIDE
	goto SetSittingPlayerModel_1


# 176 "data/maps/AmberockTown/scripts.pory"
Amberock_GroupGoesToGate_Movement_0:
# 176 "data/maps/AmberockTown/scripts.pory"
	enter_pokeball
# 176 "data/maps/AmberockTown/scripts.pory"
	set_invisible
	step_end

# 442 "data/maps/AmberockTown/scripts.pory"
Amberock_KrokorokGiovanniCutScene_Movement_0:
# 442 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 442 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 442 "data/maps/AmberockTown/scripts.pory"
	walk_up
# 442 "data/maps/AmberockTown/scripts.pory"
	walk_left
# 442 "data/maps/AmberockTown/scripts.pory"
	walk_in_place_fast_down
	step_end

Amberock_Papers_Text_0:
# 735 "data/maps/AmberockTown/scripts.pory"
	.string "mister$"

Amberock_Papers_Text_1:
# 738 "data/maps/AmberockTown/scripts.pory"
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
# 216 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: With the facility plunged\n"
	.string "into darkness, we can rush\l"
	.string "the gates without raising an alarm.\p"
	.string "Let's go!$"

KrokorokWasCarryingSomething::
# 222 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: It looks like the Krokorok\n"
	.string "was carrying something.\p"
	.string "Most of this stuff belonged to\n"
	.string "Team Rocket, so no need to feel bad\l"
	.string "for taking it.\p"
	.string "Once you're ready,\n"
	.string "meet us at the gates.$"

VolknerGreetsPlayer::
# 328 "data/maps/AmberockTown/scripts.pory"
	.string "Volkner: Oh, it's you.\n"
	.string "{PLAYER}, right?\p"
	.string "You're here after Team Rocket\n"
	.string "as well? Perfect timing.\p"
	.string "Busting through the main gate would\n"
	.string "most likely sound an alarm, so we\l"
	.string "came up with a different way in.$"

ClayHelped::
# 337 "data/maps/AmberockTown/scripts.pory"
	.string "Interrogating the grunt we caught\n"
	.string "at the Pokémon Ranch, we learned\l"
	.string "about where Team Rocket might\l"
	.string "attack next.\p"
	.string "So, I contacted Mr. Clay,\n"
	.string "who was willing to train a Krokorok\l"
	.string "we can order around and use to\l"
	.string "spy on their operations.$"

VolknerControlKrokorok::
# 347 "data/maps/AmberockTown/scripts.pory"
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
# 365 "data/maps/AmberockTown/scripts.pory"
	.string "Team Rocket ain't known for\n"
	.string "their kindness, so they might not\l"
	.string "like it if they spot a Krokorok\l"
	.string "wandering around aimlessly.\p"
	.string "Try to avoid their sight\n"
	.string "the best ye can.$"

ClayTip::
# 373 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: Team Rocket ain't known for\n"
	.string "their kindness, so they might not\l"
	.string "like it if they spot a Krokorok\l"
	.string "wandering around aimlessly.\p"
	.string "Try to avoid their sight\n"
	.string "the best ye can.$"

Amberock_Volkner_Text::
# 385 "data/maps/AmberockTown/scripts.pory"
	.string "The objective is simple: find out who\n"
	.string "is in charge, what their plans are,\l"
	.string "and sabotage the facility's generator\l"
	.string "so that we can sneak in while they are\l"
	.string "trying to figure out what happened.$"

GiovanniWeAreOnSchedule::
# 454 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: Is that who I think it is?\n"
	.string "Get us a bit closer, will ya?$"

ClayLetsBail::
# 458 "data/maps/AmberockTown/scripts.pory"
	.string "Proton: We've finished grabbing\n"
	.string "the Poké Balls from the assembly\l"
	.string "lines, and are now scouring through\l"
	.string "the crates.\p"
	.string "It will take a while to grab\n"
	.string "everything, but we should be able to\l"
	.string "finish before we are discovered.$"

ClayLetsBailPart2::
# 467 "data/maps/AmberockTown/scripts.pory"
	.string "???: Excellent. And what about\n"
	.string "the research?$"

ClayLetsBailPart3::
# 471 "data/maps/AmberockTown/scripts.pory"
	.string "Proton: Everything is going exactly\n"
	.string "as planned.\p"
	.string "Some of the smartest people I know\n"
	.string "are on the case.$"

ClayLetsBail2::
# 478 "data/maps/AmberockTown/scripts.pory"
	.string "Clay: It's just as we feared.\p"
	.string "This ain't some small\n"
	.string "remnant force.\p"
	.string "That's Giovanni, the actual leader\n"
	.string "of the syndicate.\p"
	.string "Quick, we must cut the power NOW.\p"
	.string "We need to get inside this facility\n"
	.string "and put an end to this!$"

PokeFactory_Packer_Text::
# 531 "data/maps/AmberockTown/scripts.pory"
	.string "The grunt is too busy packing the\n"
	.string "crates to notice the Krokorok.$"

TellKrokorokToRetreat::
# 536 "data/maps/AmberockTown/scripts.pory"
	.string "Order the Krokorok to return back\n"
	.string "to the group?$"

CallKrokorokBack::
# 578 "data/maps/AmberockTown/scripts.pory"
	.string "Order the Krokorok to return back\n"
	.string "to the group?$"

HereIsSurfHM::
# 626 "data/maps/AmberockTown/scripts.pory"
	.string "Ah, perfect timing!\p"
	.string "I was able to get my hands on the\n"
	.string "perfect Hidden Machine for this job.\p"
	.string "Here, you should take it.$"

GoGetBackPapers::
# 632 "data/maps/AmberockTown/scripts.pory"
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
# 762 "data/maps/AmberockTown/scripts.pory"
	.string "There seems to be some papers on\n"
	.string "the ground here.\p"
	.string "{PLAYER} picked up the papers.$"

OurPapers::
# 767 "data/maps/AmberockTown/scripts.pory"
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
# 789 "data/maps/AmberockTown/scripts.pory"
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
# 813 "data/maps/AmberockTown/scripts.pory"
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
# 824 "data/maps/AmberockTown/scripts.pory"
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
# 891 "data/maps/AmberockTown/scripts.pory"
	.string "Rocket Grunt: I see our little\n"
	.string "diversion wasn't enough to fool you.\p"
	.string "But, it matters not.\n"
	.string "You're late anyway!\p"
	.string "Good luck ever catching me!$"

Amberock_WelcomeSign_Text::
# 902 "data/maps/AmberockTown/scripts.pory"
	.string "AMBEROCK TOWN\n"
	.string "“The town where everyone prospers!”$"

Amberock_FactorySign_Text::
# 909 "data/maps/AmberockTown/scripts.pory"
	.string "Poké Ball Factory$"

Amberock_GameCornerSign_Text::
# 915 "data/maps/AmberockTown/scripts.pory"
	.string "“The play spot for all!”\n"
	.string "Amberock Game Corner$"

PokeFactory_Bouncer_Text::
# 925 "data/maps/AmberockTown/scripts.pory"
	.string "This place isn't a playground.\n"
	.string "Beat it, kid.$"

Amberock_Girl2_Text::
# 961 "data/maps/AmberockTown/scripts.pory"
	.string "Team Rocket attacked the Poké Ball\n"
	.string "factory? I hope everybody is okay.$"

Amberock_Girl2_Text2::
# 965 "data/maps/AmberockTown/scripts.pory"
	.string "There's some pretty menacing guys\n"
	.string "guarding the gate to the factory.\p"
	.string "I wonder what's going on…$"

Amberock_Girl2_Text3::
# 970 "data/maps/AmberockTown/scripts.pory"
	.string "What's going on with the factory?$"

Amberock_OldWoman_Text::
# 973 "data/maps/AmberockTown/scripts.pory"
	.string "They kicked me out because I was\n"
	.string "too good of a player!\p"
	.string "They say my Magnemite was rigging the\n"
	.string "machines, but there's no proof of that!$"

Amberock_Boy_Text::
# 979 "data/maps/AmberockTown/scripts.pory"
	.string "They say Amberock Town used to be\n"
	.string "Amberock City, but the cliffs have\l"
	.string "slowly eroded away and reduced the\l"
	.string "size of livable land.$"

Amberock_OldMan_Text::
# 985 "data/maps/AmberockTown/scripts.pory"
	.string "I'm done gambling!\n"
	.string "It has led me absolutely nowhere!\p"
	.string "Here, you want this?\n"
	.string "Well, it's yours!$"

Amberock_OldMan_Text2::
# 991 "data/maps/AmberockTown/scripts.pory"
	.string "Stupid Game Corner…$"

Amberock_Magnemite_Text::
# 1004 "data/maps/AmberockTown/scripts.pory"
	.string "Magnemite: Bzzzt!$"

Amberock_BridgeRepair_Text::
# 1011 "data/maps/AmberockTown/scripts.pory"
	.string "This bridge breaks quite often,\n"
	.string "so we need to be on constant lookout\l"
	.string "and fix it before it causes trouble\l"
	.string "for the residents.$"
