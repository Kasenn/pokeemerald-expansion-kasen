PetalburgCity_MapScripts::
# 2 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 3 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PetalburgCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 5 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0


# 12 "data/maps/PetalburgCity/scripts.pory"

# 13 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 14 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 15 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_UNUSED_VAR, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 19 "data/maps/PetalburgCity/scripts.pory"
	end
# 20 "data/maps/PetalburgCity/scripts.pory"

# 21 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 22 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_GYM_BOY, 5, 11
# 23 "data/maps/PetalburgCity/scripts.pory"
	return
# 24 "data/maps/PetalburgCity/scripts.pory"

# 25 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 26 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 27 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 28 "data/maps/PetalburgCity/scripts.pory"
	return
# 29 "data/maps/PetalburgCity/scripts.pory"

# 30 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 31 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_UNUSED_VAR, 7
# 32 "data/maps/PetalburgCity/scripts.pory"
	return
# 33 "data/maps/PetalburgCity/scripts.pory"

# 34 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 35 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 36 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 37 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 38 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 39 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 40 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 42 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 43 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 44 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 46 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_PETALBURG_WALLY, MAP_PETALBURG_CITY
# 47 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 48 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 49 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 50 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 51 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 52 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 53 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 54 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_UNUSED_VAR, 1
# 55 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 56 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 57 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 58 "data/maps/PetalburgCity/scripts.pory"
	end
# 59 "data/maps/PetalburgCity/scripts.pory"

# 60 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 61 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 62 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 63 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 64 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 65 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 67 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 68 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 69 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 70 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_WALLYS_DAD, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 71 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 72 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 73 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 74 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat LOCALID_PLAYER, MAP_PETALBURG_CITY
# 75 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 76 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 77 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 78 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 80 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 82 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 83 "data/maps/PetalburgCity/scripts.pory"
	end
# 84 "data/maps/PetalburgCity/scripts.pory"

# 85 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 86 "data/maps/PetalburgCity/scripts.pory"
	lock
# 87 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 88 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_BOY, Common_Movement_FaceOriginalDirection
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity/scripts.pory"
	release
# 93 "data/maps/PetalburgCity/scripts.pory"
	end
# 94 "data/maps/PetalburgCity/scripts.pory"

# 95 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 96 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 97 "data/maps/PetalburgCity/scripts.pory"
	end
# 98 "data/maps/PetalburgCity/scripts.pory"

# 99 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 100 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 101 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 102 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 103 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 104 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 105 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 106 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 107 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 108 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 109 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 110 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 111 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 112 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 117 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 118 "data/maps/PetalburgCity/scripts.pory"

# 119 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 122 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 123 "data/maps/PetalburgCity/scripts.pory"

# 124 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 125 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 143 "data/maps/PetalburgCity/scripts.pory"

# 144 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 146 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 147 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 148 "data/maps/PetalburgCity/scripts.pory"

# 149 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 150 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 161 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 162 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 183 "data/maps/PetalburgCity/scripts.pory"

# 184 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 185 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 218 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 219 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 222 "data/maps/PetalburgCity/scripts.pory"

# 223 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 224 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 225 "data/maps/PetalburgCity/scripts.pory"
	end
# 226 "data/maps/PetalburgCity/scripts.pory"

# 227 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 228 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 229 "data/maps/PetalburgCity/scripts.pory"
	end
# 230 "data/maps/PetalburgCity/scripts.pory"

# 231 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 232 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 233 "data/maps/PetalburgCity/scripts.pory"
	end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 236 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 240 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 241 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 242 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 243 "data/maps/PetalburgCity/scripts.pory"
	end
# 244 "data/maps/PetalburgCity/scripts.pory"

# 245 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 246 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 247 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 248 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 252 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 253 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 254 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 255 "data/maps/PetalburgCity/scripts.pory"
	end
# 256 "data/maps/PetalburgCity/scripts.pory"

# 257 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 258 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 259 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 260 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 261 "data/maps/PetalburgCity/scripts.pory"
	end
# 262 "data/maps/PetalburgCity/scripts.pory"

# 263 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 264 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 265 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 267 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 268 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 269 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 270 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 271 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 272 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 273 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 274 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 275 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 276 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 277 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 278 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 279 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 282 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 285 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 287 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 288 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 289 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 291 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 292 "data/maps/PetalburgCity/scripts.pory"
	end
# 293 "data/maps/PetalburgCity/scripts.pory"

# 294 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 295 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 296 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 298 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity/scripts.pory"
	return
# 300 "data/maps/PetalburgCity/scripts.pory"

# 301 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 302 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 303 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 304 "data/maps/PetalburgCity/scripts.pory"
	return
# 305 "data/maps/PetalburgCity/scripts.pory"

# 306 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 307 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 308 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 310 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 311 "data/maps/PetalburgCity/scripts.pory"
	return
# 312 "data/maps/PetalburgCity/scripts.pory"

# 313 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 315 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	return
# 319 "data/maps/PetalburgCity/scripts.pory"

# 320 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	return
# 325 "data/maps/PetalburgCity/scripts.pory"

# 326 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 335 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity/scripts.pory"
	return
# 337 "data/maps/PetalburgCity/scripts.pory"

# 338 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 339 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 341 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 342 "data/maps/PetalburgCity/scripts.pory"
	return
# 343 "data/maps/PetalburgCity/scripts.pory"

# 344 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 345 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 346 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 347 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 348 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 349 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 350 "data/maps/PetalburgCity/scripts.pory"

# 351 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 352 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 353 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 354 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 355 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 356 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 357 "data/maps/PetalburgCity/scripts.pory"

# 358 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 359 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 364 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 365 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 366 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 368 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 369 "data/maps/PetalburgCity/scripts.pory"

# 370 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 389 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 390 "data/maps/PetalburgCity/scripts.pory"

# 391 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 397 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 405 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 406 "data/maps/PetalburgCity/scripts.pory"

# 407 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 418 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 419 "data/maps/PetalburgCity/scripts.pory"

# 420 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 426 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 432 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 433 "data/maps/PetalburgCity/scripts.pory"

# 434 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 448 "data/maps/PetalburgCity/scripts.pory"

# 449 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 459 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 460 "data/maps/PetalburgCity/scripts.pory"

# 461 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 462 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 463 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 467 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 468 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 474 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 475 "data/maps/PetalburgCity/scripts.pory"

# 476 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 482 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 487 "data/maps/PetalburgCity/scripts.pory"

# 488 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 494 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 495 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 499 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 500 "data/maps/PetalburgCity/scripts.pory"

# 501 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 502 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 503 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 504 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 505 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 10
# 506 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 507 "data/maps/PetalburgCity/scripts.pory"
	end
# 508 "data/maps/PetalburgCity/scripts.pory"

# 509 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 510 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 511 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 512 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 513 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 11
# 514 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 515 "data/maps/PetalburgCity/scripts.pory"
	end
# 516 "data/maps/PetalburgCity/scripts.pory"

# 517 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 518 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 519 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 520 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 521 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 12
# 522 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 523 "data/maps/PetalburgCity/scripts.pory"
	end
# 524 "data/maps/PetalburgCity/scripts.pory"

# 525 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 526 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 527 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_PETALBURG_SCOTT
# 528 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 529 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_PETALBURG_SCOTT, 13, 13
# 530 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 531 "data/maps/PetalburgCity/scripts.pory"
	end
# 532 "data/maps/PetalburgCity/scripts.pory"

# 533 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 534 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 535 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 536 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 537 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_ExclamationMark
# 538 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 539 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_Delay48
# 540 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 541 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 542 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 543 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 544 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 545 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 546 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 547 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 548 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 549 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 550 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 551 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 552 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 553 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 554 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 556 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 557 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 558 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 559 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 560 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 561 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 562 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 563 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_SCOTT
# 564 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 565 "data/maps/PetalburgCity/scripts.pory"
	end
# 566 "data/maps/PetalburgCity/scripts.pory"

# 567 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 569 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit0
# 570 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 571 "data/maps/PetalburgCity/scripts.pory"
	return
# 572 "data/maps/PetalburgCity/scripts.pory"

# 573 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 574 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 575 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit1
# 576 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 577 "data/maps/PetalburgCity/scripts.pory"
	return
# 578 "data/maps/PetalburgCity/scripts.pory"

# 579 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 580 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 581 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit2
# 582 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 583 "data/maps/PetalburgCity/scripts.pory"
	return
# 584 "data/maps/PetalburgCity/scripts.pory"

# 585 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 586 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_SCOTT, PetalburgCity_Movement_ScottExit3
# 588 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 589 "data/maps/PetalburgCity/scripts.pory"
	return
# 590 "data/maps/PetalburgCity/scripts.pory"

# 591 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 592 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 593 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 594 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 595 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 596 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 597 "data/maps/PetalburgCity/scripts.pory"

# 598 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 599 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 604 "data/maps/PetalburgCity/scripts.pory"

# 605 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 606 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 620 "data/maps/PetalburgCity/scripts.pory"

# 621 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 622 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 624 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 625 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 626 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 629 "data/maps/PetalburgCity/scripts.pory"

# 630 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 644 "data/maps/PetalburgCity/scripts.pory"

# 645 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 646 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 648 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 649 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity/scripts.pory"

# 653 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 667 "data/maps/PetalburgCity/scripts.pory"

# 668 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 669 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 671 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 672 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 675 "data/maps/PetalburgCity/scripts.pory"

# 676 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 690 "data/maps/PetalburgCity/scripts.pory"

# 691 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 692 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 694 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 695 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 698 "data/maps/PetalburgCity/scripts.pory"

# 699 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 700 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 701 "data/maps/PetalburgCity/scripts.pory"
	end
# 702 "data/maps/PetalburgCity/scripts.pory"

# 703 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 704 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 705 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 706 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 707 "data/maps/PetalburgCity/scripts.pory"

# 708 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie TRAINER?\p"
# 711 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what POKéMON TRAINERS\n"
# 712 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 729 "data/maps/PetalburgCity/scripts.pory"

# 730 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six POKéMON.\n"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a STORAGE\n"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "BOX over a PC connection.$"
# 735 "data/maps/PetalburgCity/scripts.pory"

# 736 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 738 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 740 "data/maps/PetalburgCity/scripts.pory"

# 741 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 742 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 744 "data/maps/PetalburgCity/scripts.pory"

# 745 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 747 "data/maps/PetalburgCity/scripts.pory"

# 748 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 752 "data/maps/PetalburgCity/scripts.pory"

# 753 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 759 "data/maps/PetalburgCity/scripts.pory"

# 760 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
