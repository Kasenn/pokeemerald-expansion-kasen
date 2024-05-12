CoralgroveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Coralgrove_State
	.byte 0


Coralgrove_State::
	compare VAR_CORALGROVE_STATE, 0
	goto_if_eq Coralgrove_State_2
Coralgrove_State_1:
	setflag FLAG_VISITED_RUSTBORO_CITY
	end

Coralgrove_State_2:
	setvar VAR_CORALGROVE_STATE, 1
	setflag FLAG_CORAL_FLAG_1
	setflag FLAG_UNUSED_0x267_CG_HIDEGHOST
	hideobjectat 11, MAP_CORALGROVE_CITY
	goto Coralgrove_State_1


CoralHideGhost2::
	compare VAR_CORALGROVE_STATE, 1
	goto_if_eq CoralHideGhost2_2
	release
	end

CoralHideGhost2_2:
	hideobjectat 11, MAP_CORALGROVE_CITY
	release
	end


Coralgrove_HauntedHouse::
	lockall
	compare VAR_CORALGROVE_STATE, 1
	goto_if_eq Coralgrove_HauntedHouse_2
Coralgrove_HauntedHouse_1:
	msgbox Coralgrove_HauntedHouse_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	release
	end

Coralgrove_HauntedHouse_2:
	setvar VAR_CORALGROVE_STATE, 2
	goto Coralgrove_HauntedHouse_1


CoralShowGhost::
	compare VAR_CORALGROVE_STATE, 2
	goto_if_eq CoralShowGhost_1
	return

CoralShowGhost_1:
	setvar VAR_CORALGROVE_STATE, 3
	clearflag FLAG_UNUSED_0x267_CG_HIDEGHOST
	showobjectat 11, MAP_CORALGROVE_CITY
	return


CoralHideGhost::
	compare VAR_CORALGROVE_STATE, 3
	goto_if_eq CoralHideGhost_2
CoralHideGhost_1:
	end

CoralHideGhost_2:
	lockall
	fadeoutbgm 0
	delay 60
	msgbox CoralHideGhost_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	fadescreenspeed FADE_TO_WHITE, 2
	setflag FLAG_UNUSED_0x267_CG_HIDEGHOST
	setvar VAR_CORALGROVE_STATE, 4
	hideobjectat 11, MAP_CORALGROVE_CITY
	delay 30
	fadescreenspeed FADE_FROM_WHITE, 2
	delay 90
	fadeinbgm 0
	delay 60
	release
	goto CoralHideGhost_1


Coralgrove_MAN_3::
	lockall
	faceplayer
	msgbox Coralgrove_MAN_3_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_GENTLEMAN::
	goto_if_set FLAG_CORALGROVE_CUTSCENE, Coralgrove_GENTLEMAN_2
	msgbox Coralgrove_GENTLEMAN_Text, MSGBOX_NPC
Coralgrove_GENTLEMAN_1:
	turnobject 12, DIR_NORTH
	end

Coralgrove_GENTLEMAN_2:
	msgbox Coralgrove_DroppedSomething, MSGBOX_NPC
	goto Coralgrove_GENTLEMAN_1


Coralgrove_LeftBirds::
	setvar VAR_TEMP_3, 1
	goto Coralgrove_BirdEvent
	return


Coralgrove_RightBirds::
	setvar VAR_TEMP_3, 2
	goto Coralgrove_BirdEvent
	return


Coralgrove_BirdEvent::
	goto_if_set FLAG_CORALGROVE_CUTSCENE, Coralgrove_BirdEvent_2
	lock
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Up
	waitmovement 0
	compare VAR_TEMP_3, 1
	goto_if_eq Coralgrove_BirdEvent_5
	applymovement 13, BirdFlyFromEast
	waitmovement 13
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	applymovement 13, BirdFlyFromEast
	waitmovement 13
Coralgrove_BirdEvent_4:
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Down
	waitmovement 0
	special RemoveCameraObject
	delay 30
	removeobject 13
	removeobject 14
	setflag FLAG_CORALGROVE_CUTSCENE
	clearflag FLAG_OBTAINED_PIDGEOTITE
	release
	end

Coralgrove_BirdEvent_2:
	release
	end

Coralgrove_BirdEvent_5:
	applymovement 14, BirdFlyFromWest
	waitmovement 14
	playmoncry SPECIES_PIDGEOT, CRY_MODE_NORMAL
	applymovement 14, BirdFlyFromWest
	waitmovement 14
	goto Coralgrove_BirdEvent_4


BirdFlyFromWest:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

BirdFlyFromEast:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Coralgrove_MartMan::
	lockall
	faceplayer
	msgbox Coralgrove_MartMan_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralGrove_NINJA_BOY::
	lockall
	faceplayer
	msgbox CoralGrove_NINJA_BOY_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	end


CoralGrove_OLD_WOMAN::
	lockall
	msgbox CoralGrove_OLD_WOMAN_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	releaseall
	end


CoralGrove_OLD_MAN::
	lockall
	faceplayer
	msgbox CoralGrove_OLD_MAN_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_LASS::
	lockall
	faceplayer
	msgbox Coralgrove_LASS_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_HIKER::
	lockall
	faceplayer
	msgbox Coral_Hiker_Text, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_Children::
	lockall
	faceplayer
	msgbox Coralgrove_Children_Text_0, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


Coralgrove_school::
	msgbox Coralgrove_school_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	end


Coralgrove_Lifthouse::
	msgbox Coralgrove_Lifthouse_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	end


CoralSign::
	msgbox CoralSign_Text_0, MSGBOX_SIGN
	waitmessage
	closemessage
	return


CoralGreatBall::
	finditem ITEM_GREAT_BALL
	return


CoralGrove_EventScript_GymSign::
	msgbox CoralGrove_EventScript_GymSign_Text_0, MSGBOX_SIGN
	end


Coralgrove_HauntedHouse_Text_0:
	.string "The door is nailed shut.\nLooks like nobody lives here.$"

CoralHideGhost_Text_0:
	.string "No, you're not the one…$"

Coralgrove_MAN_3_Text_0:
	.string "To the south lies Primrose Town.\pIf you want to go anywhere else,\nyou must take the elevator to\lthe north to access the harbor area.$"

Coralgrove_MartMan_Text_0:
	.string "Hello and welcome!\nThis is the Battle Shop.\pHere you can purchase useful\ncombat items and consumables.\pInstead of regular currency, everything\nin our shop is purchasable with\lBattle Points, or BP, instead!$"

CoralGrove_NINJA_BOY_Text_0:
	.string "I swear I saw this ghost girl flying\nabout but none of the adults believe me!$"

CoralGrove_OLD_WOMAN_Text_0:
	.string "Such pretty flowers…$"

CoralGrove_OLD_MAN_Text_0:
	.string "My wife is mesmerized by flowers.\pI don't really care about flowers\nbut better not let her catch on…$"

Coralgrove_LASS_Text_0:
	.string "Can you even call this place a city?\pThere's the Trainers' School and\nthe Pokémon Gym but apart from those\lthere's very little to do here.$"

Coralgrove_Children_Text_0:
	.string "We're on recess!$"

Coralgrove_school_Text_0:
	.string "Pokémon Trainers' School$"

Coralgrove_Lifthouse_Text_0:
	.string "Elevator access to harbor area$"

CoralSign_Text_0:
	.string "CORALGROVE CITY\n“Home of many aspiring trainers.”$"

CoralGrove_EventScript_GymSign_Text_0:
	.string "Coralgrove City Pokémon Gym\nLeader: Aaron$"

Coralgrove_GENTLEMAN_Text::
	.string "Do you ever look far into the horizon\n"
	.string "and let your worries fade away?$"

Coralgrove_DroppedSomething::
	.string "Did you see that?\p"
	.string "I think that Pidgeot dropped\n"
	.string "something in the ocean.$"

Coral_Hiker_Text::
	.string "There was landslide between\n"
	.string "Coralgrove City and Primrose Town.\p"
	.string "There's some rocks here and there but\n"
	.string "most of it has already been cleared.$"
