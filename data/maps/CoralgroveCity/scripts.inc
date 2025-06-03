CoralgroveCity_MapScripts::
# 2 "data/maps/CoralgroveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Coralgrove_State
	.byte 0


Coralgrove_State::
# 6 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_VISITED_RUSTBORO_CITY
# 7 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_TEMP_1
	return


CoralHideGhost2::
# 11 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 11
# 12 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 13 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_HauntedHouse::
# 17 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 18 "data/maps/CoralgroveCity/scripts.pory"
	goto_if_unset FLAG_0x267_CG_HIDEGHOST, Coralgrove_HauntedHouse_2
Coralgrove_HauntedHouse_1:
# 21 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_HauntedHouse_Text_0, MSGBOX_SIGN
# 22 "data/maps/CoralgroveCity/scripts.pory"
	waitmessage
# 23 "data/maps/CoralgroveCity/scripts.pory"
	closemessage
# 24 "data/maps/CoralgroveCity/scripts.pory"
	release
	end

Coralgrove_HauntedHouse_2:
# 19 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_TEMP_2
	goto Coralgrove_HauntedHouse_1


CoralShowGhost::
# 29 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_1
# 30 "data/maps/CoralgroveCity/scripts.pory"
	addobject 11
# 31 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


CoralHideGhost::
# 35 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 36 "data/maps/CoralgroveCity/scripts.pory"
	fadeoutbgm 0
# 37 "data/maps/CoralgroveCity/scripts.pory"
	delay 60
# 38 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralHideGhost_Text_0
# 39 "data/maps/CoralgroveCity/scripts.pory"
	closemessage
# 40 "data/maps/CoralgroveCity/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 2
# 41 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_0x267_CG_HIDEGHOST
# 42 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_TEMP_2
# 43 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 11
# 44 "data/maps/CoralgroveCity/scripts.pory"
	delay 30
# 45 "data/maps/CoralgroveCity/scripts.pory"
	fadescreenspeed FADE_FROM_WHITE, 2
# 46 "data/maps/CoralgroveCity/scripts.pory"
	delay 90
# 47 "data/maps/CoralgroveCity/scripts.pory"
	fadeinbgm 0
# 48 "data/maps/CoralgroveCity/scripts.pory"
	delay 60
# 49 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_MAN_3::
# 53 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_MAN_3_Text_0, MSGBOX_NPC
	return


Coralgrove_GENTLEMAN::
# 57 "data/maps/CoralgroveCity/scripts.pory"
	goto_if_set FLAG_CORALGROVE_CUTSCENE, Coralgrove_GENTLEMAN_2
# 61 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_GENTLEMAN_Text, MSGBOX_NPC
Coralgrove_GENTLEMAN_1:
# 63 "data/maps/CoralgroveCity/scripts.pory"
	turnobject 12, DIR_NORTH
	return

Coralgrove_GENTLEMAN_2:
# 58 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_DroppedSomething, MSGBOX_NPC
	goto Coralgrove_GENTLEMAN_1


Coralgrove_LeftBirds::
# 76 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_3, 1
# 77 "data/maps/CoralgroveCity/scripts.pory"
	goto Coralgrove_BirdEvent
	return


Coralgrove_RightBirds::
# 80 "data/maps/CoralgroveCity/scripts.pory"
	setvar VAR_TEMP_3, 2
# 81 "data/maps/CoralgroveCity/scripts.pory"
	goto Coralgrove_BirdEvent
	return


Coralgrove_BirdEvent::
# 85 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 86 "data/maps/CoralgroveCity/scripts.pory"
	safefollow
# 87 "data/maps/CoralgroveCity/scripts.pory"
	special SpawnCameraObject
# 88 "data/maps/CoralgroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Up
# 89 "data/maps/CoralgroveCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/CoralgroveCity/scripts.pory"
	compare VAR_TEMP_3, 1
	goto_if_eq Coralgrove_BirdEvent_2
# 98 "data/maps/CoralgroveCity/scripts.pory"
	applymovement 13, BirdFlyFromEast
# 99 "data/maps/CoralgroveCity/scripts.pory"
	waitmovement 13
# 100 "data/maps/CoralgroveCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 101 "data/maps/CoralgroveCity/scripts.pory"
	applymovement 13, BirdFlyFromEast
# 102 "data/maps/CoralgroveCity/scripts.pory"
	waitmovement 13
Coralgrove_BirdEvent_1:
# 104 "data/maps/CoralgroveCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Down
# 105 "data/maps/CoralgroveCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/CoralgroveCity/scripts.pory"
	special RemoveCameraObject
# 107 "data/maps/CoralgroveCity/scripts.pory"
	delay 30
# 108 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 13
# 109 "data/maps/CoralgroveCity/scripts.pory"
	removeobject 14
# 110 "data/maps/CoralgroveCity/scripts.pory"
	setflag FLAG_CORALGROVE_CUTSCENE
# 111 "data/maps/CoralgroveCity/scripts.pory"
	clearflag FLAG_OBTAINED_PIDGEOTITE
# 112 "data/maps/CoralgroveCity/scripts.pory"
	release
	end

Coralgrove_BirdEvent_2:
# 91 "data/maps/CoralgroveCity/scripts.pory"
	applymovement 14, BirdFlyFromWest
# 92 "data/maps/CoralgroveCity/scripts.pory"
	waitmovement 14
# 93 "data/maps/CoralgroveCity/scripts.pory"
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
# 94 "data/maps/CoralgroveCity/scripts.pory"
	applymovement 14, BirdFlyFromWest
# 95 "data/maps/CoralgroveCity/scripts.pory"
	waitmovement 14
	goto Coralgrove_BirdEvent_1


# 115 "data/maps/CoralgroveCity/scripts.pory"
BirdFlyFromWest:
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
# 116 "data/maps/CoralgroveCity/scripts.pory"
	walk_right
	step_end

# 118 "data/maps/CoralgroveCity/scripts.pory"
BirdFlyFromEast:
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
# 119 "data/maps/CoralgroveCity/scripts.pory"
	walk_left
	step_end

Coralgrove_MartMan::
# 123 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_MartMan_Text_0, MSGBOX_NPC
	return


CoralGrove_NINJA_BOY::
# 127 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_NINJA_BOY_Text_0, MSGBOX_NPC
	return


CoralGrove_OLD_WOMAN::
# 131 "data/maps/CoralgroveCity/scripts.pory"
	lock
# 132 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_OLD_WOMAN_Text_0, MSGBOX_DEFAULT
# 133 "data/maps/CoralgroveCity/scripts.pory"
	closemessage
# 134 "data/maps/CoralgroveCity/scripts.pory"
	release
	return


Coralgrove_Old_Woman2::
# 138 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Old_Woman2_Text, MSGBOX_NPC
	return


CoralGrove_OLD_MAN::
# 151 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_OLD_MAN_Text_0, MSGBOX_NPC
	return


Coralgrove_LASS::
# 155 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_LASS_Text_0, MSGBOX_NPC
	return


Coralgrove_HIKER::
# 159 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coral_Hiker_Text, MSGBOX_NPC
	return


Coralgrove_Children::
# 170 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Children_Text_0, MSGBOX_NPC
	return


Coralgrove_school::
# 174 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_school_Text_0, MSGBOX_SIGN
	return


Coralgrove_Lifthouse::
# 178 "data/maps/CoralgroveCity/scripts.pory"
	msgbox Coralgrove_Lifthouse_Text_0, MSGBOX_SIGN
	return


CoralSign::
# 182 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralSign_Text_0, MSGBOX_SIGN
	return


CoralGreatBall::
# 186 "data/maps/CoralgroveCity/scripts.pory"
	finditem ITEM_GREAT_BALL
	return


CoralGrove_EventScript_GymSign::
# 190 "data/maps/CoralgroveCity/scripts.pory"
	msgbox CoralGrove_EventScript_GymSign_Text_0, MSGBOX_SIGN
	return


Coralgrove_HauntedHouse_Text_0:
# 21 "data/maps/CoralgroveCity/scripts.pory"
	.string "The door is nailed shut.\nLooks like nobody lives here.$"

CoralHideGhost_Text_0:
# 38 "data/maps/CoralgroveCity/scripts.pory"
	.string "No, you're not the one…$"

Coralgrove_MAN_3_Text_0:
# 53 "data/maps/CoralgroveCity/scripts.pory"
	.string "To the south lies Primrose Town.\pIf you want to go anywhere else,\nyou must take the elevator to\lthe north to access the harbor area.$"

Coralgrove_MartMan_Text_0:
# 123 "data/maps/CoralgroveCity/scripts.pory"
	.string "Hello and welcome!\nThis is the Battle Shop.\pHere you can purchase useful\ncombat items and consumables.\pInstead of regular currency, everything\nin our shop is purchasable with\lBattle Points, or BP, instead!$"

CoralGrove_NINJA_BOY_Text_0:
# 127 "data/maps/CoralgroveCity/scripts.pory"
	.string "I swear I saw this ghost girl flying\nabout but none of the adults believe me!$"

CoralGrove_OLD_WOMAN_Text_0:
# 132 "data/maps/CoralgroveCity/scripts.pory"
	.string "Such pretty flowers…$"

CoralGrove_OLD_MAN_Text_0:
# 151 "data/maps/CoralgroveCity/scripts.pory"
	.string "My wife often gets mesmerized\nby flowers.\pI don't really care about flowers\nbut better not let her catch on…$"

Coralgrove_LASS_Text_0:
# 155 "data/maps/CoralgroveCity/scripts.pory"
	.string "Can you even call this place a city?\pThere's the Trainers' School and\nthe Pokémon Gym but apart from those\lthere's very little to do here.$"

Coralgrove_Children_Text_0:
# 170 "data/maps/CoralgroveCity/scripts.pory"
	.string "We're on recess!$"

Coralgrove_school_Text_0:
# 174 "data/maps/CoralgroveCity/scripts.pory"
	.string "Pokémon Trainers' School$"

Coralgrove_Lifthouse_Text_0:
# 178 "data/maps/CoralgroveCity/scripts.pory"
	.string "Elevator access to harbor area$"

CoralSign_Text_0:
# 182 "data/maps/CoralgroveCity/scripts.pory"
	.string "CORALGROVE CITY\n“Home of many aspiring trainers.”$"

CoralGrove_EventScript_GymSign_Text_0:
# 190 "data/maps/CoralgroveCity/scripts.pory"
	.string "Coralgrove City Pokémon Gym\nLeader: Aaron$"

Coralgrove_GENTLEMAN_Text::
# 65 "data/maps/CoralgroveCity/scripts.pory"
	.string "Do you ever look far into the horizon\n"
	.string "and let your worries fade away?$"

Coralgrove_DroppedSomething::
# 69 "data/maps/CoralgroveCity/scripts.pory"
	.string "Did you see that?\p"
	.string "I think that Pidgeot dropped\n"
	.string "something in the ocean.$"

Coralgrove_Old_Woman2_Text::
# 140 "data/maps/CoralgroveCity/scripts.pory"
	.string "Coralgrove is built on a massive\n"
	.string "cliff that overlooks the ocean.\p"
	.string "In olden days, in order to get down\n"
	.string "to ocean level, people used to climb\l"
	.string "precarious stairs carved into the\l"
	.string "cliff face.\p"
	.string "Nowadays we just use the elevator.$"

Coral_Hiker_Text::
# 162 "data/maps/CoralgroveCity/scripts.pory"
	.string "There was a landslide between\n"
	.string "Coralgrove City and Primrose Town.\p"
	.string "There's some rocks here and there but\n"
	.string "most of it has already been cleared.$"
