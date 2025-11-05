# 1 "data/maps/LittlerootTown/scripts.pory"

# 2 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_TWIN, 1
# 3 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_RIVAL, 7
# 4 "data/maps/LittlerootTown/scripts.pory"
.set LOCALID_BIRCH, 8
# 5 "data/maps/LittlerootTown/scripts.pory"

# 6 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_MapScripts::
# 7 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_OnTransition
# 8 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_OnFrame
# 9 "data/maps/LittlerootTown/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LittlerootTown_OnWarp
# 10 "data/maps/LittlerootTown/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown/scripts.pory"

# 12 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_TOWN_STATE
# 13 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Met Rival
# 14 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Saving Birch
# 15 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Received Pokedex
# 16 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Running Shoes
# 17 "data/maps/LittlerootTown/scripts.pory"

# 18 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_INTRO_STATE
# 19 "data/maps/LittlerootTown/scripts.pory"
	@ 1: In truck male
# 20 "data/maps/LittlerootTown/scripts.pory"
	@ 2: In truck female
# 21 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered house
# 22 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Told to go set clock
# 23 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Entered 2F to set clock
# 24 "data/maps/LittlerootTown/scripts.pory"
	@ 6: Set clock
# 25 "data/maps/LittlerootTown/scripts.pory"
	@ 7: Told to go meet rival
# 26 "data/maps/LittlerootTown/scripts.pory"

# 27 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_UNUSED_VAR
# 28 "data/maps/LittlerootTown/scripts.pory"
	@                    and VAR_LITTLEROOT_HOUSES_STATE_BRENDAN
# 29 "data/maps/LittlerootTown/scripts.pory"
	@ 1: On Truck (and is corresponding gender)
# 30 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Met Rival's Mom (and is corresponding gender)
# 31 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Entered Hall of Fame
# 32 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Completed Lati TV / SS Ticket event
# 33 "data/maps/LittlerootTown/scripts.pory"
	@ 5: Exited house after above event
# 34 "data/maps/LittlerootTown/scripts.pory"

# 35 "data/maps/LittlerootTown/scripts.pory"
	@ State descriptions for VAR_LITTLEROOT_RIVAL_STATE
# 36 "data/maps/LittlerootTown/scripts.pory"
	@ 1: Never occurs
# 37 "data/maps/LittlerootTown/scripts.pory"
	@ 2: Entered Rival's bedroom
# 38 "data/maps/LittlerootTown/scripts.pory"
	@ 3: Met Rival
# 39 "data/maps/LittlerootTown/scripts.pory"
	@ 4: Received Pokedex
# 40 "data/maps/LittlerootTown/scripts.pory"

# 41 "data/maps/LittlerootTown/scripts.pory"

# 42 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnTransition:
# 43 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
# 44 "data/maps/LittlerootTown/scripts.pory"
	call SetupRivalGfxId
# 45 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_MoveMomToMaysDoor
# 46 "data/maps/LittlerootTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_METAL_COAT, LittlerootTown_EventScript_SetTwinPos
# 47 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_TOWN_STATE, 3, LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos
# 48 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_UNUSED_VAR, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 49 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 4, LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent
# 50 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_OLDALE_RIVAL_STATE, 1, LittlerootTown_EventScript_MoveRivalFromOldale
# 51 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_LITTLEROOT_RIVAL_STATE, 3, LittlerootTown_EventScript_SetRivalLeftForRoute103
# 52 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_HideMapNamePopup
# 53 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 2, LittlerootTown_EventScript_LeftLabAfterDexUpgrade
# 54 "data/maps/LittlerootTown/scripts.pory"
	end
# 55 "data/maps/LittlerootTown/scripts.pory"

# 56 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_LeftLabAfterDexUpgrade::
# 57 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 3
# 58 "data/maps/LittlerootTown/scripts.pory"
	return
# 59 "data/maps/LittlerootTown/scripts.pory"

# 60 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_HideMapNamePopup::
# 61 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/LittlerootTown/scripts.pory"
	return
# 63 "data/maps/LittlerootTown/scripts.pory"

# 64 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalLeftForRoute103::
# 65 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_RIVAL_LEFT_FOR_ROUTE103
# 66 "data/maps/LittlerootTown/scripts.pory"
	return
# 67 "data/maps/LittlerootTown/scripts.pory"

# 68 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveRivalFromOldale::
# 69 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 70 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 71 "data/maps/LittlerootTown/scripts.pory"
	return
# 72 "data/maps/LittlerootTown/scripts.pory"

# 73 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetExitedHouseAfterLatiSSTicketEvent::
# 74 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_UNUSED_VAR, 5
# 75 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_BRENDAN, 5
# 76 "data/maps/LittlerootTown/scripts.pory"
	return
# 77 "data/maps/LittlerootTown/scripts.pory"

# 78 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MoveMomToMaysDoor::
# 79 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 8
# 80 "data/maps/LittlerootTown/scripts.pory"
	return
# 81 "data/maps/LittlerootTown/scripts.pory"

# 82 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinPos::
# 83 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_SetTwinGuardingRoutePos
# 84 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 10, 1
# 85 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_UP
# 86 "data/maps/LittlerootTown/scripts.pory"
	return
# 87 "data/maps/LittlerootTown/scripts.pory"

# 88 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetTwinGuardingRoutePos::
# 89 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_TWIN, 7, 2
# 90 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_TWIN, MOVEMENT_TYPE_FACE_DOWN
# 91 "data/maps/LittlerootTown/scripts.pory"
	return
# 92 "data/maps/LittlerootTown/scripts.pory"

# 93 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomStandingInFrontOfDoorPos::
# 94 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 95 "data/maps/LittlerootTown/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_DOWN
# 96 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 97 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetMomInFrontOfDoorMale
# 98 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetMomInFrontOfDoorFemale
# 99 "data/maps/LittlerootTown/scripts.pory"
	return
# 100 "data/maps/LittlerootTown/scripts.pory"

# 101 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorMale::
# 102 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 5, 9
# 103 "data/maps/LittlerootTown/scripts.pory"
	return
# 104 "data/maps/LittlerootTown/scripts.pory"

# 105 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetMomInFrontOfDoorFemale::
# 106 "data/maps/LittlerootTown/scripts.pory"
	setobjectxyperm LOCALID_MOM, 14, 9
# 107 "data/maps/LittlerootTown/scripts.pory"
	return
# 108 "data/maps/LittlerootTown/scripts.pory"

# 109 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnFrame:
# 110 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 1, LittlerootTown_EventScript_StepOffTruckMale
# 111 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 2, LittlerootTown_EventScript_StepOffTruckFemale
# 112 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_BeginDexUpgradeScene
# 113 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 114 "data/maps/LittlerootTown/scripts.pory"

# 115 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckMale::
# 116 "data/maps/LittlerootTown/scripts.pory"
	lock
# 117 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 5
# 118 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 119 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 120 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
# 121 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_1F, 8, 8
# 122 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 123 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 124 "data/maps/LittlerootTown/scripts.pory"
	end
# 125 "data/maps/LittlerootTown/scripts.pory"

# 126 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_StepOffTruckFemale::
# 127 "data/maps/LittlerootTown/scripts.pory"
	lock
# 128 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8004, 14
# 129 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8005, 8
# 130 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GoInsideWithMom
# 131 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
# 132 "data/maps/LittlerootTown/scripts.pory"
	warpsilent MAP_LITTLEROOT_TOWN_MAYS_HOUSE_1F, 2, 8
# 133 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 134 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 135 "data/maps/LittlerootTown/scripts.pory"
	end
# 136 "data/maps/LittlerootTown/scripts.pory"

# 137 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoInsideWithMom::
# 138 "data/maps/LittlerootTown/scripts.pory"
	delay 15
# 139 "data/maps/LittlerootTown/scripts.pory"
	playse SE_LEDGE
# 140 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerStepOffTruck
# 141 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 142 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 143 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 144 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_MOM
# 145 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitHouse
# 146 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 148 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 149 "data/maps/LittlerootTown/scripts.pory"
	delay 10
# 150 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerAtTruck
# 151 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_OurNewHomeLetsGoInside, MSGBOX_DEFAULT
# 153 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 154 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachDoor
# 155 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerApproachDoor
# 156 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 157 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 158 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 159 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomEnterHouse
# 160 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PlayerEnterHouse
# 161 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 162 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
# 163 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_INTRO_STATE, 3
# 164 "data/maps/LittlerootTown/scripts.pory"
	hideplayer
# 165 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 166 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 167 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
# 168 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 169 "data/maps/LittlerootTown/scripts.pory"
	return
# 170 "data/maps/LittlerootTown/scripts.pory"

# 171 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitHouse:
# 172 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 173 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 174 "data/maps/LittlerootTown/scripts.pory"

# 175 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerAtTruck:
# 176 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 177 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_left
# 178 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 179 "data/maps/LittlerootTown/scripts.pory"

# 180 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachDoor:
# 181 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 182 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 183 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 184 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 185 "data/maps/LittlerootTown/scripts.pory"

# 186 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomEnterHouse:
# 187 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 188 "data/maps/LittlerootTown/scripts.pory"
	set_invisible
# 189 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 190 "data/maps/LittlerootTown/scripts.pory"

# 191 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerApproachDoor:
# 192 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 193 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 194 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 195 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 196 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 197 "data/maps/LittlerootTown/scripts.pory"

# 198 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerEnterHouse:
# 199 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 200 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 201 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 202 "data/maps/LittlerootTown/scripts.pory"

# 203 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PlayerStepOffTruck:
# 204 "data/maps/LittlerootTown/scripts.pory"
	jump_right
# 205 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 206 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 207 "data/maps/LittlerootTown/scripts.pory"
	delay_16
# 208 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown/scripts.pory"

# 210 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BeginDexUpgradeScene::
# 211 "data/maps/LittlerootTown/scripts.pory"
	lock
# 212 "data/maps/LittlerootTown/scripts.pory"
	playse SE_PIN
# 213 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 214 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/LittlerootTown/scripts.pory"
	delay 80
# 216 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSomethingToShowYouAtLab, MSGBOX_DEFAULT
# 217 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 218 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
# 219 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
# 220 "data/maps/LittlerootTown/scripts.pory"
	delay 20
# 221 "data/maps/LittlerootTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 222 "data/maps/LittlerootTown/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 6, 5
# 223 "data/maps/LittlerootTown/scripts.pory"
	waitstate
# 224 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 225 "data/maps/LittlerootTown/scripts.pory"
	end
# 226 "data/maps/LittlerootTown/scripts.pory"

# 227 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_OnWarp:
# 228 "data/maps/LittlerootTown/scripts.pory"
	map_script_2 VAR_DEX_UPGRADE_JOHTO_STARTER_STATE, 1, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade
# 229 "data/maps/LittlerootTown/scripts.pory"
	.2byte 0
# 230 "data/maps/LittlerootTown/scripts.pory"

# 231 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgrade::
# 232 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_BIRCH
# 233 "data/maps/LittlerootTown/scripts.pory"
	addobject LOCALID_RIVAL
# 234 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 235 "data/maps/LittlerootTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale
# 236 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale
# 237 "data/maps/LittlerootTown/scripts.pory"
	end
# 238 "data/maps/LittlerootTown/scripts.pory"

# 239 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeMale::
# 240 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 6, 10
# 241 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 5, 10
# 242 "data/maps/LittlerootTown/scripts.pory"
	end
# 243 "data/maps/LittlerootTown/scripts.pory"

# 244 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetRivalBirchPosForDexUpgradeFemale::
# 245 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_RIVAL, 13, 10
# 246 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_BIRCH, 14, 10
# 247 "data/maps/LittlerootTown/scripts.pory"
	end
# 248 "data/maps/LittlerootTown/scripts.pory"

# 249 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_FatMan::
# 250 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanUsePCToStoreItems, MSGBOX_NPC
# 251 "data/maps/LittlerootTown/scripts.pory"
	end
# 252 "data/maps/LittlerootTown/scripts.pory"

# 253 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Boy::
# 254 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_BirchSpendsDaysInLab, MSGBOX_NPC
# 255 "data/maps/LittlerootTown/scripts.pory"
	end
# 256 "data/maps/LittlerootTown/scripts.pory"

# 257 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Twin::
# 258 "data/maps/LittlerootTown/scripts.pory"
	lock
# 259 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 260 "data/maps/LittlerootTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_METAL_COAT, LittlerootTown_EventScript_YouSavedBirch
# 261 "data/maps/LittlerootTown/scripts.pory"
	goto_if_ne VAR_LITTLEROOT_TOWN_STATE, 0, LittlerootTown_EventScript_GoSaveBirch
# 262 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 263 "data/maps/LittlerootTown/scripts.pory"
	release
# 264 "data/maps/LittlerootTown/scripts.pory"
	end
# 265 "data/maps/LittlerootTown/scripts.pory"

# 266 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirch::
# 267 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 268 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 269 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 270 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 271 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 272 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 273 "data/maps/LittlerootTown/scripts.pory"
	release
# 274 "data/maps/LittlerootTown/scripts.pory"
	end
# 275 "data/maps/LittlerootTown/scripts.pory"

# 276 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_YouSavedBirch::
# 277 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 278 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_YouSavedBirch, MSGBOX_DEFAULT
# 279 "data/maps/LittlerootTown/scripts.pory"
	release
# 280 "data/maps/LittlerootTown/scripts.pory"
	end
# 281 "data/maps/LittlerootTown/scripts.pory"

# 282 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoodLuck::
# 283 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_GoodLuckCatchingPokemon, MSGBOX_DEFAULT
# 284 "data/maps/LittlerootTown/scripts.pory"
	release
# 285 "data/maps/LittlerootTown/scripts.pory"
	end
# 286 "data/maps/LittlerootTown/scripts.pory"

# 287 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerLeft::
# 288 "data/maps/LittlerootTown/scripts.pory"
	lock
# 289 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerLeft
# 290 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 291 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 292 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnLeft
# 293 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 295 "data/maps/LittlerootTown/scripts.pory"
	end
# 296 "data/maps/LittlerootTown/scripts.pory"

# 297 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_DangerousWithoutPokemon::
# 298 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut, MSGBOX_DEFAULT
# 299 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 300 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinPushPlayerFromRoute
# 301 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, LittlerootTown_Movement_PushPlayerBackFromRoute
# 302 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 303 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_DangerousIfYouDontHavePokemon, MSGBOX_DEFAULT
# 304 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 305 "data/maps/LittlerootTown/scripts.pory"
	return
# 306 "data/maps/LittlerootTown/scripts.pory"

# 307 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerLeft:
# 308 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 309 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 310 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 311 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 312 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 313 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 314 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 315 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 316 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 317 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 318 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 319 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_left
# 320 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 321 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 322 "data/maps/LittlerootTown/scripts.pory"

# 323 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinPushPlayerFromRoute:
# 324 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 325 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 326 "data/maps/LittlerootTown/scripts.pory"

# 327 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnLeft:
# 328 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 329 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 330 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 331 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 332 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 333 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 334 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 335 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 336 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 337 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 338 "data/maps/LittlerootTown/scripts.pory"

# 339 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_PushPlayerBackFromRoute:
# 340 "data/maps/LittlerootTown/scripts.pory"
	lock_facing_direction
# 341 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 342 "data/maps/LittlerootTown/scripts.pory"
	unlock_facing_direction
# 343 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 344 "data/maps/LittlerootTown/scripts.pory"

# 345 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_NeedPokemonTriggerRight::
# 346 "data/maps/LittlerootTown/scripts.pory"
	lock
# 347 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinApproachPlayerRight
# 348 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 349 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_DangerousWithoutPokemon
# 350 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, LittlerootTown_Movement_TwinReturnRight
# 351 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 352 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 353 "data/maps/LittlerootTown/scripts.pory"
	end
# 354 "data/maps/LittlerootTown/scripts.pory"

# 355 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinApproachPlayerRight:
# 356 "data/maps/LittlerootTown/scripts.pory"
	face_right
# 357 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 358 "data/maps/LittlerootTown/scripts.pory"
	disable_jump_landing_ground_effect
# 359 "data/maps/LittlerootTown/scripts.pory"
	jump_in_place_right
# 360 "data/maps/LittlerootTown/scripts.pory"
	delay_8
# 361 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 362 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 363 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 364 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 365 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_up
# 366 "data/maps/LittlerootTown/scripts.pory"
	walk_fast_right
# 367 "data/maps/LittlerootTown/scripts.pory"
	face_down
# 368 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 369 "data/maps/LittlerootTown/scripts.pory"

# 370 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_TwinReturnRight:
# 371 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 372 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 373 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 374 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 375 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 376 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_down
# 377 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 378 "data/maps/LittlerootTown/scripts.pory"

# 379 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GoSaveBirchTrigger::
# 380 "data/maps/LittlerootTown/scripts.pory"
	lock
# 381 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterRight
# 382 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 384 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 385 "data/maps/LittlerootTown/scripts.pory"
	special GetPlayerBigGuyGirlString
# 386 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_CanYouGoSeeWhatsHappening, MSGBOX_DEFAULT
# 387 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 388 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_TWIN, Common_Movement_FaceOriginalDirection
# 389 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 390 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 2
# 391 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 392 "data/maps/LittlerootTown/scripts.pory"
	end
# 393 "data/maps/LittlerootTown/scripts.pory"

# 394 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_TownSign::
# 395 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_TownSign, MSGBOX_SIGN
# 396 "data/maps/LittlerootTown/scripts.pory"
	end
# 397 "data/maps/LittlerootTown/scripts.pory"

# 398 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsLabSign::
# 399 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsLab, MSGBOX_SIGN
# 400 "data/maps/LittlerootTown/scripts.pory"
	end
# 401 "data/maps/LittlerootTown/scripts.pory"

# 402 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BrendansHouseSign::
# 403 "data/maps/LittlerootTown/scripts.pory"
	lock
# 404 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 405 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_PlayersHouseSignMale
# 406 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_BirchsHouseSignFemale
# 407 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 408 "data/maps/LittlerootTown/scripts.pory"
	end
# 409 "data/maps/LittlerootTown/scripts.pory"

# 410 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignMale::
# 411 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 412 "data/maps/LittlerootTown/scripts.pory"
	return
# 413 "data/maps/LittlerootTown/scripts.pory"

# 414 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignFemale::
# 415 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 416 "data/maps/LittlerootTown/scripts.pory"
	return
# 417 "data/maps/LittlerootTown/scripts.pory"

# 418 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MaysHouseSign::
# 419 "data/maps/LittlerootTown/scripts.pory"
	lock
# 420 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 421 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_BirchsHouseSignMale
# 422 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_PlayersHouseSignFemale
# 423 "data/maps/LittlerootTown/scripts.pory"
	releaseall
# 424 "data/maps/LittlerootTown/scripts.pory"
	end
# 425 "data/maps/LittlerootTown/scripts.pory"

# 426 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_BirchsHouseSignMale::
# 427 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ProfBirchsHouse, MSGBOX_DEFAULT
# 428 "data/maps/LittlerootTown/scripts.pory"
	return
# 429 "data/maps/LittlerootTown/scripts.pory"

# 430 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_PlayersHouseSignFemale::
# 431 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_PlayersHouse, MSGBOX_DEFAULT
# 432 "data/maps/LittlerootTown/scripts.pory"
	return
# 433 "data/maps/LittlerootTown/scripts.pory"

# 434 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger0::
# 435 "data/maps/LittlerootTown/scripts.pory"
	lock
# 436 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 0
# 437 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 10, 9
# 438 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 439 "data/maps/LittlerootTown/scripts.pory"
	end
# 440 "data/maps/LittlerootTown/scripts.pory"

# 441 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger1::
# 442 "data/maps/LittlerootTown/scripts.pory"
	lock
# 443 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 1
# 444 "data/maps/LittlerootTown/scripts.pory"
	setobjectxy LOCALID_MOM, 11, 9
# 445 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 446 "data/maps/LittlerootTown/scripts.pory"
	end
# 447 "data/maps/LittlerootTown/scripts.pory"

# 448 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger2::
# 449 "data/maps/LittlerootTown/scripts.pory"
	lock
# 450 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 2
# 451 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 452 "data/maps/LittlerootTown/scripts.pory"
	end
# 453 "data/maps/LittlerootTown/scripts.pory"

# 454 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger3::
# 455 "data/maps/LittlerootTown/scripts.pory"
	lock
# 456 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 3
# 457 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 458 "data/maps/LittlerootTown/scripts.pory"
	end
# 459 "data/maps/LittlerootTown/scripts.pory"

# 460 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger4::
# 461 "data/maps/LittlerootTown/scripts.pory"
	lock
# 462 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 4
# 463 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 464 "data/maps/LittlerootTown/scripts.pory"
	end
# 465 "data/maps/LittlerootTown/scripts.pory"

# 466 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger5::
# 467 "data/maps/LittlerootTown/scripts.pory"
	lock
# 468 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8008, 5
# 469 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_GiveRunningShoesTrigger
# 470 "data/maps/LittlerootTown/scripts.pory"
	end
# 471 "data/maps/LittlerootTown/scripts.pory"

# 472 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoesTrigger::
# 473 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 474 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomNoticePlayerMale
# 475 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomNoticePlayerFemale
# 476 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 477 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 478 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 479 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WaitPlayer, MSGBOX_DEFAULT
# 480 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 481 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 482 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomApproachPlayerMale
# 483 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomApproachPlayerFemale
# 484 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 485 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 486 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_MomReturnHomeMale
# 487 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_MomReturnHomeFemale
# 488 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 489 "data/maps/LittlerootTown/scripts.pory"
	end
# 490 "data/maps/LittlerootTown/scripts.pory"

# 491 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsMale::
# 492 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 5
# 493 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 494 "data/maps/LittlerootTown/scripts.pory"
	return
# 495 "data/maps/LittlerootTown/scripts.pory"

# 496 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetHomeDoorCoordsFemale::
# 497 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x8009, 14
# 498 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_0x800A, 8
# 499 "data/maps/LittlerootTown/scripts.pory"
	return
# 500 "data/maps/LittlerootTown/scripts.pory"

# 501 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerMale::
# 502 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterRight
# 503 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 504 "data/maps/LittlerootTown/scripts.pory"
	return
# 505 "data/maps/LittlerootTown/scripts.pory"

# 506 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomNoticePlayerFemale::
# 507 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterLeft
# 508 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 509 "data/maps/LittlerootTown/scripts.pory"
	return
# 510 "data/maps/LittlerootTown/scripts.pory"

# 511 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale::
# 512 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 513 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 514 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerMale2
# 515 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerMale3
# 516 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerMale4
# 517 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerMale5
# 518 "data/maps/LittlerootTown/scripts.pory"
	return
# 519 "data/maps/LittlerootTown/scripts.pory"

# 520 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale::
# 521 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomApproachPlayer0
# 522 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomApproachPlayer1
# 523 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomApproachPlayerFemale2
# 524 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomApproachPlayerFemale3
# 525 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomApproachPlayerFemale4
# 526 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomApproachPlayerFemale5
# 527 "data/maps/LittlerootTown/scripts.pory"
	return
# 528 "data/maps/LittlerootTown/scripts.pory"

# 529 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer0::
# 530 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 531 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer0
# 533 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 534 "data/maps/LittlerootTown/scripts.pory"
	return
# 535 "data/maps/LittlerootTown/scripts.pory"

# 536 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayer1::
# 537 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 538 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 539 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayer1
# 540 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 541 "data/maps/LittlerootTown/scripts.pory"
	return
# 542 "data/maps/LittlerootTown/scripts.pory"

# 543 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale2::
# 544 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 545 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale2
# 547 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 548 "data/maps/LittlerootTown/scripts.pory"
	return
# 549 "data/maps/LittlerootTown/scripts.pory"

# 550 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale3::
# 551 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 552 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale3
# 554 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 555 "data/maps/LittlerootTown/scripts.pory"
	return
# 556 "data/maps/LittlerootTown/scripts.pory"

# 557 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale4::
# 558 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 559 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale4
# 561 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/LittlerootTown/scripts.pory"
	return
# 563 "data/maps/LittlerootTown/scripts.pory"

# 564 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerMale5::
# 565 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 566 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 567 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerMale5
# 568 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 569 "data/maps/LittlerootTown/scripts.pory"
	return
# 570 "data/maps/LittlerootTown/scripts.pory"

# 571 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale2::
# 572 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 573 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale2
# 575 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/LittlerootTown/scripts.pory"
	return
# 577 "data/maps/LittlerootTown/scripts.pory"

# 578 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale3::
# 579 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 580 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 581 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale3
# 582 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 583 "data/maps/LittlerootTown/scripts.pory"
	return
# 584 "data/maps/LittlerootTown/scripts.pory"

# 585 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale4::
# 586 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 587 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 588 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale4
# 589 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 590 "data/maps/LittlerootTown/scripts.pory"
	return
# 591 "data/maps/LittlerootTown/scripts.pory"

# 592 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomApproachPlayerFemale5::
# 593 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 594 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomApproachPlayerFemale5
# 596 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/LittlerootTown/scripts.pory"
	return
# 598 "data/maps/LittlerootTown/scripts.pory"

# 599 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale::
# 600 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 601 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 602 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeMale2
# 603 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeMale3
# 604 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeMale4
# 605 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeMale5
# 606 "data/maps/LittlerootTown/scripts.pory"
	return
# 607 "data/maps/LittlerootTown/scripts.pory"

# 608 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale::
# 609 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_EventScript_MomReturnHome0
# 610 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_EventScript_MomReturnHome1
# 611 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_EventScript_MomReturnHomeFemale2
# 612 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 3, LittlerootTown_EventScript_MomReturnHomeFemale3
# 613 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 4, LittlerootTown_EventScript_MomReturnHomeFemale4
# 614 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_0x8008, 5, LittlerootTown_EventScript_MomReturnHomeFemale5
# 615 "data/maps/LittlerootTown/scripts.pory"
	return
# 616 "data/maps/LittlerootTown/scripts.pory"

# 617 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome0::
# 618 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome0
# 619 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 620 "data/maps/LittlerootTown/scripts.pory"
	return
# 621 "data/maps/LittlerootTown/scripts.pory"

# 622 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHome1::
# 623 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHome1
# 624 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 625 "data/maps/LittlerootTown/scripts.pory"
	return
# 626 "data/maps/LittlerootTown/scripts.pory"

# 627 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale2::
# 628 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale2
# 629 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 630 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 631 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 632 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 633 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 634 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 635 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 636 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 637 "data/maps/LittlerootTown/scripts.pory"
	return
# 638 "data/maps/LittlerootTown/scripts.pory"

# 639 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale3::
# 640 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale3
# 641 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 642 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 643 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 644 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 645 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 646 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 647 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 648 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 649 "data/maps/LittlerootTown/scripts.pory"
	return
# 650 "data/maps/LittlerootTown/scripts.pory"

# 651 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale4::
# 652 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale4
# 653 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 654 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 655 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 656 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 657 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 659 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 660 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 661 "data/maps/LittlerootTown/scripts.pory"
	return
# 662 "data/maps/LittlerootTown/scripts.pory"

# 663 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeMale5::
# 664 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeMale5
# 665 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 666 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 667 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 668 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 669 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 670 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 671 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 672 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 673 "data/maps/LittlerootTown/scripts.pory"
	return
# 674 "data/maps/LittlerootTown/scripts.pory"

# 675 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale2::
# 676 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale2
# 677 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 679 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 680 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 681 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 682 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 683 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 684 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 685 "data/maps/LittlerootTown/scripts.pory"
	return
# 686 "data/maps/LittlerootTown/scripts.pory"

# 687 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale3::
# 688 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale3
# 689 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 690 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 691 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 692 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 693 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 695 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 696 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 697 "data/maps/LittlerootTown/scripts.pory"
	return
# 698 "data/maps/LittlerootTown/scripts.pory"

# 699 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale4::
# 700 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale4
# 701 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 702 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 703 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 704 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 705 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 706 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 707 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 708 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 709 "data/maps/LittlerootTown/scripts.pory"
	return
# 710 "data/maps/LittlerootTown/scripts.pory"

# 711 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_MomReturnHomeFemale5::
# 712 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomReturnHomeFemale5
# 713 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 714 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 715 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 716 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 717 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 718 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 719 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 720 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 721 "data/maps/LittlerootTown/scripts.pory"
	return
# 722 "data/maps/LittlerootTown/scripts.pory"

# 723 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer0:
# 724 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 725 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 726 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 727 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 728 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 729 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 730 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 731 "data/maps/LittlerootTown/scripts.pory"

# 732 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayer1:
# 733 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 734 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 735 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 736 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 737 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 738 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 739 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 740 "data/maps/LittlerootTown/scripts.pory"

# 741 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale2:
# 742 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 743 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 744 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 745 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 746 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 747 "data/maps/LittlerootTown/scripts.pory"

# 748 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale3:
# 749 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 750 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 751 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 752 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 753 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 754 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 755 "data/maps/LittlerootTown/scripts.pory"

# 756 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale4:
# 757 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 758 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 759 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 760 "data/maps/LittlerootTown/scripts.pory"

# 761 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerMale5:
# 762 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 763 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 764 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 765 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 766 "data/maps/LittlerootTown/scripts.pory"

# 767 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale2:
# 768 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 769 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 770 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 771 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 772 "data/maps/LittlerootTown/scripts.pory"

# 773 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale3:
# 774 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 775 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 776 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 777 "data/maps/LittlerootTown/scripts.pory"

# 778 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale4:
# 779 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 780 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 781 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 782 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 783 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 784 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 785 "data/maps/LittlerootTown/scripts.pory"

# 786 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomApproachPlayerFemale5:
# 787 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 788 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 789 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 790 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 791 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 792 "data/maps/LittlerootTown/scripts.pory"

# 793 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome0:
# 794 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 795 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 796 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 797 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 798 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 799 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 800 "data/maps/LittlerootTown/scripts.pory"

# 801 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHome1:
# 802 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 803 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 804 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 805 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 806 "data/maps/LittlerootTown/scripts.pory"
	walk_down
# 807 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 808 "data/maps/LittlerootTown/scripts.pory"

# 809 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale2:
# 810 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 811 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 812 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 813 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 814 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 815 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 816 "data/maps/LittlerootTown/scripts.pory"

# 817 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale3:
# 818 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 819 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 820 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 821 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 822 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 823 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 824 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 825 "data/maps/LittlerootTown/scripts.pory"

# 826 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale4:
# 827 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 828 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 829 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 830 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 831 "data/maps/LittlerootTown/scripts.pory"

# 832 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeMale5:
# 833 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 834 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 835 "data/maps/LittlerootTown/scripts.pory"
	walk_left
# 836 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 837 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 838 "data/maps/LittlerootTown/scripts.pory"

# 839 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale2:
# 840 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 841 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 842 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 843 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 844 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 845 "data/maps/LittlerootTown/scripts.pory"

# 846 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale3:
# 847 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 848 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 849 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 850 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 851 "data/maps/LittlerootTown/scripts.pory"

# 852 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale4:
# 853 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 854 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 855 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 856 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 857 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 858 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 859 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 860 "data/maps/LittlerootTown/scripts.pory"

# 861 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomReturnHomeFemale5:
# 862 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 863 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 864 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 865 "data/maps/LittlerootTown/scripts.pory"
	walk_right
# 866 "data/maps/LittlerootTown/scripts.pory"
	walk_in_place_faster_up
# 867 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 868 "data/maps/LittlerootTown/scripts.pory"

# 869 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Movement_MomExitThroughDoor:
# 870 "data/maps/LittlerootTown/scripts.pory"
	walk_up
# 871 "data/maps/LittlerootTown/scripts.pory"
	step_end
# 872 "data/maps/LittlerootTown/scripts.pory"

# 873 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_Mom::
# 874 "data/maps/LittlerootTown/scripts.pory"
	lock
# 875 "data/maps/LittlerootTown/scripts.pory"
	faceplayer
# 876 "data/maps/LittlerootTown/scripts.pory"
	checkplayergender
# 877 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, MALE, LittlerootTown_EventScript_SetHomeDoorCoordsMale
# 878 "data/maps/LittlerootTown/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, LittlerootTown_EventScript_SetHomeDoorCoordsFemale
# 879 "data/maps/LittlerootTown/scripts.pory"
	call LittlerootTown_EventScript_GiveRunningShoes
# 880 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterUp
# 881 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 882 "data/maps/LittlerootTown/scripts.pory"
	opendoor VAR_0x8009, VAR_0x800A
# 883 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 884 "data/maps/LittlerootTown/scripts.pory"
	applymovement LOCALID_MOM, LittlerootTown_Movement_MomExitThroughDoor
# 885 "data/maps/LittlerootTown/scripts.pory"
	waitmovement 0
# 886 "data/maps/LittlerootTown/scripts.pory"
	hideobjectat LOCALID_MOM, MAP_LITTLEROOT_TOWN
# 887 "data/maps/LittlerootTown/scripts.pory"
	closedoor VAR_0x8009, VAR_0x800A
# 888 "data/maps/LittlerootTown/scripts.pory"
	waitdooranim
# 889 "data/maps/LittlerootTown/scripts.pory"
	goto LittlerootTown_EventScript_SetReceivedRunningShoes
# 890 "data/maps/LittlerootTown/scripts.pory"
	end
# 891 "data/maps/LittlerootTown/scripts.pory"

# 892 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_SetReceivedRunningShoes::
# 893 "data/maps/LittlerootTown/scripts.pory"
	removeobject LOCALID_MOM
# 894 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 895 "data/maps/LittlerootTown/scripts.pory"
	setvar VAR_LITTLEROOT_TOWN_STATE, 4
# 896 "data/maps/LittlerootTown/scripts.pory"
	release
# 897 "data/maps/LittlerootTown/scripts.pory"
	end
# 898 "data/maps/LittlerootTown/scripts.pory"

# 899 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_EventScript_GiveRunningShoes::
# 900 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_WearTheseRunningShoes, MSGBOX_DEFAULT
# 901 "data/maps/LittlerootTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 902 "data/maps/LittlerootTown/scripts.pory"
	message LittlerootTown_Text_SwitchShoesWithRunningShoes
# 903 "data/maps/LittlerootTown/scripts.pory"
	waitfanfare
# 904 "data/maps/LittlerootTown/scripts.pory"
	setflag FLAG_KAOLISLE_ITEM8
# 905 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ExplainRunningShoes, MSGBOX_DEFAULT
# 906 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_Text_ComeHomeIfAnythingHappens, MSGBOX_DEFAULT
# 907 "data/maps/LittlerootTown/scripts.pory"
	closemessage
# 908 "data/maps/LittlerootTown/scripts.pory"
	delay 30
# 909 "data/maps/LittlerootTown/scripts.pory"
	return
# 910 "data/maps/LittlerootTown/scripts.pory"

# 911 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_OurNewHomeLetsGoInside:
# 912 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, we're here, honey!\p"
# 913 "data/maps/LittlerootTown/scripts.pory"
	.string "It must be tiring riding with our things\n"
# 914 "data/maps/LittlerootTown/scripts.pory"
	.string "in the moving truck.\p"
# 915 "data/maps/LittlerootTown/scripts.pory"
	.string "Well, this is LITTLEROOT TOWN.\p"
# 916 "data/maps/LittlerootTown/scripts.pory"
	.string "How do you like it?\n"
# 917 "data/maps/LittlerootTown/scripts.pory"
	.string "This is our new home!\p"
# 918 "data/maps/LittlerootTown/scripts.pory"
	.string "It has a quaint feel, but it seems to be\n"
# 919 "data/maps/LittlerootTown/scripts.pory"
	.string "an easy place to live, don't you think?\p"
# 920 "data/maps/LittlerootTown/scripts.pory"
	.string "And, you get your own room, {PLAYER}!\n"
# 921 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go inside.$"
# 922 "data/maps/LittlerootTown/scripts.pory"

# 923 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WaitPlayer:
# 924 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: Wait, {PLAYER}!$"
# 925 "data/maps/LittlerootTown/scripts.pory"

# 926 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_WearTheseRunningShoes:
# 927 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}! {PLAYER}! Did you\n"
# 928 "data/maps/LittlerootTown/scripts.pory"
	.string "introduce yourself to PROF. BIRCH?\p"
# 929 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh! What an adorable POKéMON!\n"
# 930 "data/maps/LittlerootTown/scripts.pory"
	.string "You got it from PROF. BIRCH. How nice!\p"
# 931 "data/maps/LittlerootTown/scripts.pory"
	.string "You're your father's child, all right.\n"
# 932 "data/maps/LittlerootTown/scripts.pory"
	.string "You look good together with POKéMON!\p"
# 933 "data/maps/LittlerootTown/scripts.pory"
	.string "Here, honey! If you're going out on an\n"
# 934 "data/maps/LittlerootTown/scripts.pory"
	.string "adventure, wear these RUNNING SHOES.\p"
# 935 "data/maps/LittlerootTown/scripts.pory"
	.string "They'll put a zip in your step!$"
# 936 "data/maps/LittlerootTown/scripts.pory"

# 937 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_SwitchShoesWithRunningShoes:
# 938 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER} switched shoes with the\n"
# 939 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES.$"
# 940 "data/maps/LittlerootTown/scripts.pory"

# 941 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ExplainRunningShoes:
# 942 "data/maps/LittlerootTown/scripts.pory"
	.string "MOM: {PLAYER}, those shoes came with\n"
# 943 "data/maps/LittlerootTown/scripts.pory"
	.string "instructions.\p"
# 944 "data/maps/LittlerootTown/scripts.pory"
	.string "“Press the B Button while wearing these\n"
# 945 "data/maps/LittlerootTown/scripts.pory"
	.string "RUNNING SHOES to run extra-fast!\p"
# 946 "data/maps/LittlerootTown/scripts.pory"
	.string "“Slip on these RUNNING SHOES and race\n"
# 947 "data/maps/LittlerootTown/scripts.pory"
	.string "in the great outdoors!”$"
# 948 "data/maps/LittlerootTown/scripts.pory"

# 949 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ComeHomeIfAnythingHappens:
# 950 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\n"
# 951 "data/maps/LittlerootTown/scripts.pory"
	.string "… … … … … … … …\p"
# 952 "data/maps/LittlerootTown/scripts.pory"
	.string "To think that you have your very own\n"
# 953 "data/maps/LittlerootTown/scripts.pory"
	.string "POKéMON now…\l"
# 954 "data/maps/LittlerootTown/scripts.pory"
	.string "Your father will be overjoyed.\p"
# 955 "data/maps/LittlerootTown/scripts.pory"
	.string "…But please be careful.\n"
# 956 "data/maps/LittlerootTown/scripts.pory"
	.string "If anything happens, you can come home.\p"
# 957 "data/maps/LittlerootTown/scripts.pory"
	.string "Go on, go get them, honey!$"
# 958 "data/maps/LittlerootTown/scripts.pory"

# 959 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanUsePCToStoreItems:
# 960 "data/maps/LittlerootTown/scripts.pory"
	.string "If you use a PC, you can store items\n"
# 961 "data/maps/LittlerootTown/scripts.pory"
	.string "and POKéMON.\p"
# 962 "data/maps/LittlerootTown/scripts.pory"
	.string "The power of science is staggering!$"
# 963 "data/maps/LittlerootTown/scripts.pory"

# 964 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSpendsDaysInLab:
# 965 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH spends days in his LAB\n"
# 966 "data/maps/LittlerootTown/scripts.pory"
	.string "studying, then he'll suddenly go out in\l"
# 967 "data/maps/LittlerootTown/scripts.pory"
	.string "the wild to do more research…\p"
# 968 "data/maps/LittlerootTown/scripts.pory"
	.string "When does PROF. BIRCH spend time\n"
# 969 "data/maps/LittlerootTown/scripts.pory"
	.string "at home?$"
# 970 "data/maps/LittlerootTown/scripts.pory"

# 971 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_IfYouGoInGrassPokemonWillJumpOut:
# 972 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, um, um!\p"
# 973 "data/maps/LittlerootTown/scripts.pory"
	.string "If you go outside and go in the grass,\n"
# 974 "data/maps/LittlerootTown/scripts.pory"
	.string "wild POKéMON will jump out!$"
# 975 "data/maps/LittlerootTown/scripts.pory"

# 976 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_DangerousIfYouDontHavePokemon:
# 977 "data/maps/LittlerootTown/scripts.pory"
	.string "It's dangerous if you don't have\n"
# 978 "data/maps/LittlerootTown/scripts.pory"
	.string "your own POKéMON.$"
# 979 "data/maps/LittlerootTown/scripts.pory"

# 980 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_CanYouGoSeeWhatsHappening:
# 981 "data/maps/LittlerootTown/scripts.pory"
	.string "Um, hi!\p"
# 982 "data/maps/LittlerootTown/scripts.pory"
	.string "There are scary POKéMON outside!\n"
# 983 "data/maps/LittlerootTown/scripts.pory"
	.string "I can hear their cries!\p"
# 984 "data/maps/LittlerootTown/scripts.pory"
	.string "I want to go see what's going on,\n"
# 985 "data/maps/LittlerootTown/scripts.pory"
	.string "but I don't have any POKéMON…\p"
# 986 "data/maps/LittlerootTown/scripts.pory"
	.string "Can you go see what's happening\n"
# 987 "data/maps/LittlerootTown/scripts.pory"
	.string "for me?$"
# 988 "data/maps/LittlerootTown/scripts.pory"

# 989 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_YouSavedBirch:
# 990 "data/maps/LittlerootTown/scripts.pory"
	.string "You saved PROF. BIRCH!\n"
# 991 "data/maps/LittlerootTown/scripts.pory"
	.string "I'm so glad!$"
# 992 "data/maps/LittlerootTown/scripts.pory"

# 993 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_GoodLuckCatchingPokemon:
# 994 "data/maps/LittlerootTown/scripts.pory"
	.string "Are you going to catch POKéMON?\n"
# 995 "data/maps/LittlerootTown/scripts.pory"
	.string "Good luck!$"
# 996 "data/maps/LittlerootTown/scripts.pory"

# 997 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_TownSign:
# 998 "data/maps/LittlerootTown/scripts.pory"
	.string "LITTLEROOT TOWN\n"
# 999 "data/maps/LittlerootTown/scripts.pory"
	.string "“A town that can't be shaded any hue.”$"
# 1000 "data/maps/LittlerootTown/scripts.pory"

# 1001 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsLab:
# 1002 "data/maps/LittlerootTown/scripts.pory"
	.string "Prof. Birch's Pokémon lab$"
# 1003 "data/maps/LittlerootTown/scripts.pory"

# 1004 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_PlayersHouse:
# 1005 "data/maps/LittlerootTown/scripts.pory"
	.string "{PLAYER}'s HOUSE$"
# 1006 "data/maps/LittlerootTown/scripts.pory"

# 1007 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_ProfBirchsHouse:
# 1008 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH'S HOUSE$"
# 1009 "data/maps/LittlerootTown/scripts.pory"

# 1010 "data/maps/LittlerootTown/scripts.pory"
LittlerootTown_Text_BirchSomethingToShowYouAtLab:
# 1011 "data/maps/LittlerootTown/scripts.pory"
	.string "PROF. BIRCH: Well, well, {PLAYER}{KUN}!\n"
# 1012 "data/maps/LittlerootTown/scripts.pory"
	.string "That was good work out there!\p"
# 1013 "data/maps/LittlerootTown/scripts.pory"
	.string "I knew there was something special\n"
# 1014 "data/maps/LittlerootTown/scripts.pory"
	.string "about you when I first saw you,\l"
# 1015 "data/maps/LittlerootTown/scripts.pory"
	.string "but I never expected this.\p"
# 1016 "data/maps/LittlerootTown/scripts.pory"
	.string "Oh, yes. Do you still have the POKéDEX\n"
# 1017 "data/maps/LittlerootTown/scripts.pory"
	.string "I gave you?\p"
# 1018 "data/maps/LittlerootTown/scripts.pory"
	.string "I have something to show you.\n"
# 1019 "data/maps/LittlerootTown/scripts.pory"
	.string "Let's go to my LAB.$"

LittlerootTown_EventScript_NewSign::
# 1025 "data/maps/LittlerootTown/scripts.pory"
	lock
# 1026 "data/maps/LittlerootTown/scripts.pory"
	msgbox LittlerootTown_EventScript_NewSign_Text_0
# 1027 "data/maps/LittlerootTown/scripts.pory"
	releaseall
	return


LittlerootTown_EventScript_NewSign_Text_0:
# 1026 "data/maps/LittlerootTown/scripts.pory"
	.string "Kasen was here$"
