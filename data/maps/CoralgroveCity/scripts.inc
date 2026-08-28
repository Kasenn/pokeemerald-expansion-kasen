CoralgroveCity_MapScripts::
# 2 "data/maps/CoralgroveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralgroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CoralgroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_VISITED_CORALGROVE_CITY
# 4 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_TEMP_1
# 6 "data/maps/CoralgroveCity/scripts.pory"
	getplayerxy VAR_TEMP_4, VAR_TEMP_5
# 7 "data/maps/CoralgroveCity/scripts.pory"
	compare VAR_TEMP_5, 14
	goto_if_eq CoralgroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

CoralgroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_1, 1
	return


CoralHideGhost2::
# 14 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 11
# 15 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 16 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_HauntedHouse::
# 20 "data/maps/CoralgroveCity/scripts.pory"
	goto_if_unset FLAG_0x267_CG_HIDEGHOST, Coralgrove_HauntedHouse_2
Coralgrove_HauntedHouse_1:
# 23 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_HauntedHouse_Text_0, MSGBOX_SIGN
	return

Coralgrove_HauntedHouse_2:
# 21 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_TEMP_2
	goto Coralgrove_HauntedHouse_1


CoralShowGhost::
# 27 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 28 "data/maps/CoralgroveCity/scripts.pory"
	addobject 11
# 29 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


CoralHideGhost::
# 33 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 34 "data/maps/CoralgroveCity/scripts.pory"
	fadeoutbgm 0
# 35 "data/maps/CoralgroveCity/scripts.pory"
	delay 60
# 36 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralHideGhost_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/CoralgroveCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 38 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 39 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 40 "data/maps/CoralgroveCity/scripts.pory"
	hideobjectat 11, MAP_CORALGROVE_CITY
# 41 "data/maps/CoralgroveCity/scripts.pory"
	delay 30
# 42 "data/maps/CoralgroveCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 43 "data/maps/CoralgroveCity/scripts.pory"
	delay 90
# 44 "data/maps/CoralgroveCity/scripts.pory"
	fadeinbgm 0
# 45 "data/maps/CoralgroveCity/scripts.pory"
	delay 60
# 46 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 11
# 47 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_MAN_3::
# 51 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_MAN_3_Text_0, MSGBOX_NPC
	return


Coralgrove_GENTLEMAN::
# 55 "data/maps/CoralgroveCity/scripts.pory"
	goto_if_set FLAG_CORALGROVE_CUTSCENE, Coralgrove_GENTLEMAN_2
# 59 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_GENTLEMAN_Text, MSGBOX_NPC
Coralgrove_GENTLEMAN_1:
# 61 "data/maps/CoralgroveCity/scripts.pory"
	turnobject 12, DIR_NORTH
	return

Coralgrove_GENTLEMAN_2:
# 56 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_DroppedSomething, MSGBOX_NPC
	goto Coralgrove_GENTLEMAN_1


Coralgrove_LeftBirds::
# 74 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_3, 1
# 75 "data/maps/CoralgroveCity/scripts.pory"
	goto Coralgrove_BirdEvent
	return


Coralgrove_RightBirds::
# 78 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_3, 2
# 79 "data/maps/CoralgroveCity/scripts.pory"
	goto Coralgrove_BirdEvent
	return


Coralgrove_BirdEvent::
# 83 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 84 "data/maps/CoralgroveCity/scripts.pory"
	safefollow
# 85 "data/maps/CoralgroveCity/scripts.pory"
	special SpawnCameraObject
# 86 "data/maps/CoralgroveCity/scripts.pory"
	waitmove OBJ_EVENT_ID_CAMERA, Walk3Up
# 87 "data/maps/CoralgroveCity/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Coralgrove_BirdEvent_2
# 93 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 13, BirdFlyFromEast
# 94 "data/maps/CoralgroveCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 95 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 13, BirdFlyFromEast
Coralgrove_BirdEvent_1:
# 97 "data/maps/CoralgroveCity/scripts.pory"
	waitmove OBJ_EVENT_ID_CAMERA, Walk3Down
# 98 "data/maps/CoralgroveCity/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/CoralgroveCity/scripts.pory"
	delay 30
# 100 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 13
# 101 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 14
# 102 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 103 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
# 104 "data/maps/CoralgroveCity/scripts.pory"
	release
	end

Coralgrove_BirdEvent_2:
# 88 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 14, BirdFlyFromWest
# 89 "data/maps/CoralgroveCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 90 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 14, BirdFlyFromWest
	goto Coralgrove_BirdEvent_1


# 107 "data/maps/CoralgroveCity/scripts.pory"
BirdFlyFromWest:
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 108 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
	step_end

# 110 "data/maps/CoralgroveCity/scripts.pory"
BirdFlyFromEast:
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 111 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
	step_end

Coralgrove_MartMan::
# 115 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_MartMan_Text_0, MSGBOX_NPC
	return


CoralGrove_NINJA_BOY::
# 119 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_NINJA_BOY_Text_0, MSGBOX_NPC
	return


CoralGrove_OLD_WOMAN::
# 123 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 124 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_OLD_WOMAN_Text_0, MSGBOX_AUTOCLOSE
	return


Coralgrove_Old_Woman2::
# 128 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Old_Woman2_Text, MSGBOX_NPC
	return


CoralGrove_OLD_MAN::
# 141 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_OLD_MAN_Text_0, MSGBOX_NPC
	return


Coralgrove_LASS::
# 145 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_LASS_Text_0, MSGBOX_NPC
	return


Coralgrove_HIKER::
# 149 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coral_Hiker_Text, MSGBOX_NPC
	return


Coralgrove_Children::
# 160 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Children_Text_0, MSGBOX_NPC
	return


Coralgrove_school::
# 164 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_school_Text_0, MSGBOX_SIGN
	return


Coralgrove_Lifthouse::
# 168 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Lifthouse_Text_0, MSGBOX_SIGN
	return


CoralSign::
# 172 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralSign_Text_0, MSGBOX_SIGN
	return


CoralGrove_EventScript_GymSign::
# 176 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_EventScript_GymSign_Text_0, MSGBOX_SIGN
	return


MonFleeOff::
# 180 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_WILDS_CAN_FLEE
# 181 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


MonFleeOn::
# 185 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_WILDS_CAN_FLEE
# 186 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


LoadCoralgroveAdditionalPalette::
# 190 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 191 "data/maps/CoralgroveCity/scripts.pory"
	callnative LoadCoralGroveAdditionalPal
# 192 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


LoadCoralgroveOriginallPalette::
# 196 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 197 "data/maps/CoralgroveCity/scripts.pory"
	callnative LoadCoralGroveOriginalPal
# 198 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_HauntedHouse_Text_0:
# 23 "data/maps/CoralgroveCity/scripts.pory"
	.string "The door is nailed shut.\nLooks like nobody lives here.$"

CoralHideGhost_Text_0:
# 36 "data/maps/CoralgroveCity/scripts.pory"
	.string "No, you're not the one…$"

Coralgrove_MAN_3_Text_0:
# 51 "data/maps/CoralgroveCity/scripts.pory"
	.string "To the south lies Primrose Town.\pIf you want to go anywhere else,\nyou must take the elevator to\lthe north to access the harbor area.$"

Coralgrove_MartMan_Text_0:
# 115 "data/maps/CoralgroveCity/scripts.pory"
	.string "Hello and welcome!\nThis is the Battle Shop.\pHere you can purchase useful\ncombat items and consumables.\pInstead of regular currency, everything\nin our shop is purchasable with\lBattle Points, or BP, instead!$"

CoralGrove_NINJA_BOY_Text_0:
# 119 "data/maps/CoralgroveCity/scripts.pory"
	.string "I swear I saw this ghost girl flying\nabout but none of the adults believe me!$"

CoralGrove_OLD_WOMAN_Text_0:
# 124 "data/maps/CoralgroveCity/scripts.pory"
	.string "Such pretty flowers…$"

CoralGrove_OLD_MAN_Text_0:
# 141 "data/maps/CoralgroveCity/scripts.pory"
	.string "My wife often gets mesmerized\nby flowers.\pI don't really care about flowers\nbut better not let her catch on…$"

Coralgrove_LASS_Text_0:
# 145 "data/maps/CoralgroveCity/scripts.pory"
	.string "Can you even call this place a city?\pThere's the Trainers' School and\nthe Pokémon Gym but apart from those\lthere's very little to do here.$"

Coralgrove_Children_Text_0:
# 160 "data/maps/CoralgroveCity/scripts.pory"
	.string "We're on recess!$"

Coralgrove_school_Text_0:
# 164 "data/maps/CoralgroveCity/scripts.pory"
	.string "Pokémon Trainers' School$"

Coralgrove_Lifthouse_Text_0:
# 168 "data/maps/CoralgroveCity/scripts.pory"
	.string "Elevator access to harbor area$"

CoralSign_Text_0:
# 172 "data/maps/CoralgroveCity/scripts.pory"
	.string "CORALGROVE CITY\n“Home of many aspiring trainers.”$"

CoralGrove_EventScript_GymSign_Text_0:
# 176 "data/maps/CoralgroveCity/scripts.pory"
	.string "Coralgrove City Pokémon Gym\nLeader: Aaron$"

Coralgrove_GENTLEMAN_Text::
# 63 "data/maps/CoralgroveCity/scripts.pory"
	.string "Do you ever look far into the horizon\n"
	.string "and let your worries fade away?$"

Coralgrove_DroppedSomething::
# 67 "data/maps/CoralgroveCity/scripts.pory"
	.string "Did you see that?\p"
	.string "I think that Pidgeot dropped\n"
	.string "something in the ocean.$"

Coralgrove_Old_Woman2_Text::
# 130 "data/maps/CoralgroveCity/scripts.pory"
	.string "Coralgrove is built on a massive\n"
	.string "cliff that overlooks the ocean.\p"
	.string "In olden days, in order to get down\n"
	.string "to ocean level, people used to climb\l"
	.string "precarious stairs carved into the\l"
	.string "cliff face.\p"
	.string "Nowadays we just use the elevator.$"

Coral_Hiker_Text::
# 152 "data/maps/CoralgroveCity/scripts.pory"
	.string "There was a landslide between\n"
	.string "Coralgrove City and Primrose Town.\p"
	.string "There's some rocks here and there but\n"
	.string "most of it has already been cleared.$"
