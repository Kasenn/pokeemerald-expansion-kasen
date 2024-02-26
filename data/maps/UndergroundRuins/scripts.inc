UndergroundRuins_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, UndergroundRuinsSetHoleWarp
	map_script MAP_SCRIPT_ON_LOAD, UndergroundRuins_OnLoad
	.byte 0


UndergroundRuins_OnLoad::
	goto_if_set FLAG_DESERT_RUINS_OPENED, UndergroundRuins_OnLoad_2
UndergroundRuins_OnLoad_1:
	end

UndergroundRuins_OnLoad_2:
	setmetatile 55, 49, 0x20E, FALSE
	setmetatile 55, 50, 0x216, FALSE
	goto UndergroundRuins_OnLoad_1


UndergroundRuinsSetHoleWarp::
	setstepcallback STEP_CB_CRACKED_FLOOR
	setholewarp MAP_UNDERGROUND_RUINS_3F
	setescapewarp MAP_DESERT, 0
	end


UndergroundRuinsLootRelic::
	random 100
	compare VAR_RESULT, 65
	goto_if_le UndergroundRuinsLootRelic_2
	compare VAR_RESULT, 94
	goto_if_ge UndergroundRuinsLootRelic_3
	finditem ITEM_RELIC_SILVER
UndergroundRuinsLootRelic_1:
	end

UndergroundRuinsLootRelic_2:
	finditem ITEM_RELIC_COPPER
	goto UndergroundRuinsLootRelic_1

UndergroundRuinsLootRelic_3:
	finditem ITEM_RELIC_GOLD
	goto UndergroundRuinsLootRelic_1


CheckForEscapeRope::
	checkitem ITEM_ESCAPE_ROPE
	compare VAR_RESULT, FALSE
	goto_if_eq CheckForEscapeRope_2
	release
	end

CheckForEscapeRope_2:
	lockall
	msgbox CheckForEscapeRope_Text_0, MSGBOX_DEFAULT
	finditem ITEM_ESCAPE_ROPE
	release
	end


UndergroundSandstormTM::
	finditem ITEM_TM37
	end


UndergroundRuinsFossil::
	lockall
	msgbox FossilInWall, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq UndergroundRuinsFossil_1
	setflag FLAG_DESERT_RUINS_OPENED
	random 11
	switch VAR_RESULT
	case 0, UndergroundRuinsFossil_5
	case 1, UndergroundRuinsFossil_6
	case 2, UndergroundRuinsFossil_7
	case 3, UndergroundRuinsFossil_8
	case 4, UndergroundRuinsFossil_9
	case 5, UndergroundRuinsFossil_10
	case 6, UndergroundRuinsFossil_11
	case 7, UndergroundRuinsFossil_12
	case 8, UndergroundRuinsFossil_13
	case 9, UndergroundRuinsFossil_14
	case 10, UndergroundRuinsFossil_15
	return

UndergroundRuinsFossil_1:
	closemessage
	release
	end

UndergroundRuinsFossil_5:
	goto LootHelix
	return

UndergroundRuinsFossil_6:
	goto LootDome
	return

UndergroundRuinsFossil_7:
	goto LootOldAmber
	return

UndergroundRuinsFossil_8:
	goto LootRoot
	return

UndergroundRuinsFossil_9:
	goto LootClaw
	return

UndergroundRuinsFossil_10:
	goto LootSkull
	return

UndergroundRuinsFossil_11:
	goto LootArmor
	return

UndergroundRuinsFossil_12:
	goto LootCover
	return

UndergroundRuinsFossil_13:
	goto LootPlume
	return

UndergroundRuinsFossil_14:
	goto LootJaw
	return

UndergroundRuinsFossil_15:
	goto LootSail
	return


LootHelix::
	finditem ITEM_HELIX_FOSSIL
	setflag FLAG_OBTAINED_HELIX_FOSSIL
	goto QuakeAfterFossil
	return


LootDome::
	finditem ITEM_DOME_FOSSIL
	setflag FLAG_OBTAINED_DOME_FOSSIL
	goto QuakeAfterFossil
	return


LootOldAmber::
	finditem ITEM_OLD_AMBER
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
	goto QuakeAfterFossil
	return


LootRoot::
	finditem ITEM_ROOT_FOSSIL
	setflag FLAG_OBTAINED_ROOT_FOSSIL
	goto QuakeAfterFossil
	return


LootClaw::
	finditem ITEM_CLAW_FOSSIL
	setflag FLAG_OBTAINED_CLAW_FOSSIL
	goto QuakeAfterFossil
	return


LootSkull::
	finditem ITEM_SKULL_FOSSIL
	setflag FLAG_OBTAINED_SKULL_FOSSIL
	goto QuakeAfterFossil
	return


LootArmor::
	finditem ITEM_ARMOR_FOSSIL
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
	goto QuakeAfterFossil
	return


LootCover::
	finditem ITEM_COVER_FOSSIL
	setflag FLAG_OBTAINED_COVER_FOSSIL
	goto QuakeAfterFossil
	return


LootPlume::
	finditem ITEM_PLUME_FOSSIL
	setflag FLAG_OBTAINED_PLUME_FOSSIL
	goto QuakeAfterFossil
	return


LootJaw::
	finditem ITEM_JAW_FOSSIL
	setflag FLAG_OBTAINED_JAW_FOSSIL
	goto QuakeAfterFossil
	return


LootSail::
	finditem ITEM_SAIL_FOSSIL
	setflag FLAG_OBTAINED_SAIL_FOSSIL
	goto QuakeAfterFossil
	return


QuakeAfterFossil::
	fadeoutbgm 0
	delay 60
	playse SE_M_EARTHQUAKE
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 30
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	waitse
	delay 120
	playse SE_SWITCH
	setmetatile 55, 49, 0x20E, FALSE
	setmetatile 55, 50, 0x216, FALSE
	special DrawWholeMapView
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 4
	setvar VAR_0x8007, 3
	special ShakeCamera
	waitstate
	delay 30
	fadeinbgm 0
	delay 60
	release
	end


CheckForEscapeRope_Text_0:
	.string "There's a coil of old rope here that\ncould be used to climb back out.$"

FossilInWall::
	.string "There's a fossil of a Pokémon wedged\n"
	.string "in a small hole on the wall.\p"
	.string "Would you like to try and pry it\n"
	.string "from the wall?\l"
	.string "This could affect the stability of\l"
	.string "the desert around the ruins.$"
