CoralgroveCity_MapScripts::
# 2 "data/maps/CoralgroveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralgroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CoralgroveCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_VISITED_CORALGROVE_CITY
# 4 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_TEMP_1
	return


CoralHideGhost2::
# 9 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 11
# 10 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 11 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_HauntedHouse::
# 15 "data/maps/CoralgroveCity/scripts.pory"
	goto_if_unset FLAG_0x267_CG_HIDEGHOST, Coralgrove_HauntedHouse_2
Coralgrove_HauntedHouse_1:
# 18 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_HauntedHouse_Text_0, MSGBOX_SIGN
	return

Coralgrove_HauntedHouse_2:
# 16 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_TEMP_2
	goto Coralgrove_HauntedHouse_1


CoralShowGhost::
# 22 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 23 "data/maps/CoralgroveCity/scripts.pory"
	addobject 11
# 24 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


CoralHideGhost::
# 28 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 29 "data/maps/CoralgroveCity/scripts.pory"
	fadeoutbgm 0
# 30 "data/maps/CoralgroveCity/scripts.pory"
	delay 60
# 31 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralHideGhost_Text_0, MSGBOX_AUTOCLOSE
# 32 "data/maps/CoralgroveCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 33 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 34 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 35 "data/maps/CoralgroveCity/scripts.pory"
	hideobjectat 11, MAP_CORALGROVE_CITY
# 36 "data/maps/CoralgroveCity/scripts.pory"
	delay 30
# 37 "data/maps/CoralgroveCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 38 "data/maps/CoralgroveCity/scripts.pory"
	delay 90
# 39 "data/maps/CoralgroveCity/scripts.pory"
	fadeinbgm 0
# 40 "data/maps/CoralgroveCity/scripts.pory"
	delay 60
# 41 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 11
# 42 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_MAN_3::
# 46 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_MAN_3_Text_0, MSGBOX_NPC
	return


Coralgrove_GENTLEMAN::
# 50 "data/maps/CoralgroveCity/scripts.pory"
	goto_if_set FLAG_CORALGROVE_CUTSCENE, Coralgrove_GENTLEMAN_2
# 54 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_GENTLEMAN_Text, MSGBOX_NPC
Coralgrove_GENTLEMAN_1:
# 56 "data/maps/CoralgroveCity/scripts.pory"
	turnobject 12, DIR_NORTH
	return

Coralgrove_GENTLEMAN_2:
# 51 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_DroppedSomething, MSGBOX_NPC
	goto Coralgrove_GENTLEMAN_1


Coralgrove_LeftBirds::
# 69 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_3, 1
# 70 "data/maps/CoralgroveCity/scripts.pory"
	goto Coralgrove_BirdEvent
	return


Coralgrove_RightBirds::
# 73 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_3, 2
# 74 "data/maps/CoralgroveCity/scripts.pory"
	goto Coralgrove_BirdEvent
	return


Coralgrove_BirdEvent::
# 78 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 79 "data/maps/CoralgroveCity/scripts.pory"
	safefollow
# 80 "data/maps/CoralgroveCity/scripts.pory"
	special SpawnCameraObject
# 81 "data/maps/CoralgroveCity/scripts.pory"
	waitmove OBJ_EVENT_ID_CAMERA, Walk3Up
# 82 "data/maps/CoralgroveCity/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Coralgrove_BirdEvent_2
# 88 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 13, BirdFlyFromEast
# 89 "data/maps/CoralgroveCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 90 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 13, BirdFlyFromEast
Coralgrove_BirdEvent_1:
# 92 "data/maps/CoralgroveCity/scripts.pory"
	waitmove OBJ_EVENT_ID_CAMERA, Walk3Down
# 93 "data/maps/CoralgroveCity/scripts.pory"
	special RemoveCameraObject
# 94 "data/maps/CoralgroveCity/scripts.pory"
	delay 30
# 95 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 13
# 96 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 14
# 97 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 98 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
# 99 "data/maps/CoralgroveCity/scripts.pory"
	release
	end

Coralgrove_BirdEvent_2:
# 83 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 14, BirdFlyFromWest
# 84 "data/maps/CoralgroveCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 85 "data/maps/CoralgroveCity/scripts.pory"
	waitmove 14, BirdFlyFromWest
	goto Coralgrove_BirdEvent_1


# 102 "data/maps/CoralgroveCity/scripts.pory"
BirdFlyFromWest:
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 103 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
	step_end

# 105 "data/maps/CoralgroveCity/scripts.pory"
BirdFlyFromEast:
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 106 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
	step_end

Coralgrove_MartMan::
# 110 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_MartMan_Text_0, MSGBOX_NPC
	return


CoralGrove_NINJA_BOY::
# 114 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_NINJA_BOY_Text_0, MSGBOX_NPC
	return


CoralGrove_OLD_WOMAN::
# 118 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 119 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_OLD_WOMAN_Text_0, MSGBOX_AUTOCLOSE
	return


Coralgrove_Old_Woman2::
# 123 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Old_Woman2_Text, MSGBOX_NPC
	return


CoralGrove_OLD_MAN::
# 136 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_OLD_MAN_Text_0, MSGBOX_NPC
	return


Coralgrove_LASS::
# 140 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_LASS_Text_0, MSGBOX_NPC
	return


Coralgrove_HIKER::
# 144 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coral_Hiker_Text, MSGBOX_NPC
	return


Coralgrove_Children::
# 155 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Children_Text_0, MSGBOX_NPC
	return


Coralgrove_school::
# 159 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_school_Text_0, MSGBOX_SIGN
	return


Coralgrove_Lifthouse::
# 163 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Lifthouse_Text_0, MSGBOX_SIGN
	return


CoralSign::
# 167 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralSign_Text_0, MSGBOX_SIGN
	return


CoralGrove_EventScript_GymSign::
# 171 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_EventScript_GymSign_Text_0, MSGBOX_SIGN
	return


MonFleeOff::
# 175 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_WILDS_CAN_FLEE
# 176 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


MonFleeOn::
# 180 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_WILDS_CAN_FLEE
# 181 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_HauntedHouse_Text_0:
# 18 "data/maps/CoralgroveCity/scripts.pory"
	.string "The door is nailed shut.\nLooks like nobody lives here.$"

CoralHideGhost_Text_0:
# 31 "data/maps/CoralgroveCity/scripts.pory"
	.string "No, you're not the one…$"

Coralgrove_MAN_3_Text_0:
# 46 "data/maps/CoralgroveCity/scripts.pory"
	.string "To the south lies Primrose Town.\pIf you want to go anywhere else,\nyou must take the elevator to\lthe north to access the harbor area.$"

Coralgrove_MartMan_Text_0:
# 110 "data/maps/CoralgroveCity/scripts.pory"
	.string "Hello and welcome!\nThis is the Battle Shop.\pHere you can purchase useful\ncombat items and consumables.\pInstead of regular currency, everything\nin our shop is purchasable with\lBattle Points, or BP, instead!$"

CoralGrove_NINJA_BOY_Text_0:
# 114 "data/maps/CoralgroveCity/scripts.pory"
	.string "I swear I saw this ghost girl flying\nabout but none of the adults believe me!$"

CoralGrove_OLD_WOMAN_Text_0:
# 119 "data/maps/CoralgroveCity/scripts.pory"
	.string "Such pretty flowers…$"

CoralGrove_OLD_MAN_Text_0:
# 136 "data/maps/CoralgroveCity/scripts.pory"
	.string "My wife often gets mesmerized\nby flowers.\pI don't really care about flowers\nbut better not let her catch on…$"

Coralgrove_LASS_Text_0:
# 140 "data/maps/CoralgroveCity/scripts.pory"
	.string "Can you even call this place a city?\pThere's the Trainers' School and\nthe Pokémon Gym but apart from those\lthere's very little to do here.$"

Coralgrove_Children_Text_0:
# 155 "data/maps/CoralgroveCity/scripts.pory"
	.string "We're on recess!$"

Coralgrove_school_Text_0:
# 159 "data/maps/CoralgroveCity/scripts.pory"
	.string "Pokémon Trainers' School$"

Coralgrove_Lifthouse_Text_0:
# 163 "data/maps/CoralgroveCity/scripts.pory"
	.string "Elevator access to harbor area$"

CoralSign_Text_0:
# 167 "data/maps/CoralgroveCity/scripts.pory"
	.string "CORALGROVE CITY\n“Home of many aspiring trainers.”$"

CoralGrove_EventScript_GymSign_Text_0:
# 171 "data/maps/CoralgroveCity/scripts.pory"
	.string "Coralgrove City Pokémon Gym\nLeader: Aaron$"

Coralgrove_GENTLEMAN_Text::
# 58 "data/maps/CoralgroveCity/scripts.pory"
	.string "Do you ever look far into the horizon\n"
	.string "and let your worries fade away?$"

Coralgrove_DroppedSomething::
# 62 "data/maps/CoralgroveCity/scripts.pory"
	.string "Did you see that?\p"
	.string "I think that Pidgeot dropped\n"
	.string "something in the ocean.$"

Coralgrove_Old_Woman2_Text::
# 125 "data/maps/CoralgroveCity/scripts.pory"
	.string "Coralgrove is built on a massive\n"
	.string "cliff that overlooks the ocean.\p"
	.string "In olden days, in order to get down\n"
	.string "to ocean level, people used to climb\l"
	.string "precarious stairs carved into the\l"
	.string "cliff face.\p"
	.string "Nowadays we just use the elevator.$"

Coral_Hiker_Text::
# 147 "data/maps/CoralgroveCity/scripts.pory"
	.string "There was a landslide between\n"
	.string "Coralgrove City and Primrose Town.\p"
	.string "There's some rocks here and there but\n"
	.string "most of it has already been cleared.$"
