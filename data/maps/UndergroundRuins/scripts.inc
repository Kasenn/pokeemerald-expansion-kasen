UndergroundRuins_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundRuins_OnTransition
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


UndergroundRuins_OnTransition::
	clearflag FLAG_DESERT_STEPS
	setflag FLAG_LANDMARK_DESERT_RUINS
	goto CaveHole_FixCrackedGround
	return


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
CheckForEscapeRope_1:
	release
	end

CheckForEscapeRope_2:
	lock
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	delay 60
	msgbox FoundRope
	finditem ITEM_ESCAPE_ROPE
	goto CheckForEscapeRope_1


UndergroundSandstormTM::
	finditem ITEM_TM37
	end


UndergroundRuinsFossil::
	lockall
	msgbox FossilInWall, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq UndergroundRuinsFossil_1
	checkitemspace ITEM_BUG_TERA_SHARD, 1
	compare VAR_RESULT, FALSE
	goto_if_eq UndergroundRuinsFossil_5
UndergroundRuinsFossil_4:
	setflag FLAG_DESERT_RUINS_OPENED
	goto RandomizeFossil
	return

UndergroundRuinsFossil_1:
	closemessage
	release
	end

UndergroundRuinsFossil_5:
	goto NotEnoughRoom
	goto UndergroundRuinsFossil_4


NotEnoughRoom::
	msgbox NotEnoughRoom_Text_0, MSGBOX_NPC
	end


RandomizeFossil::
	random 11
	switch VAR_RESULT
	case 0, RandomizeFossil_2
	case 1, RandomizeFossil_3
	case 2, RandomizeFossil_4
	case 3, RandomizeFossil_5
	case 4, RandomizeFossil_6
	case 5, RandomizeFossil_7
	case 6, RandomizeFossil_8
	case 7, RandomizeFossil_9
	case 8, RandomizeFossil_10
	case 9, RandomizeFossil_11
	case 10, RandomizeFossil_12
	return

RandomizeFossil_2:
	goto LootHelix
	return

RandomizeFossil_3:
	goto LootDome
	return

RandomizeFossil_4:
	goto LootOldAmber
	return

RandomizeFossil_5:
	goto LootRoot
	return

RandomizeFossil_6:
	goto LootClaw
	return

RandomizeFossil_7:
	goto LootSkull
	return

RandomizeFossil_8:
	goto LootArmor
	return

RandomizeFossil_9:
	goto LootCover
	return

RandomizeFossil_10:
	goto LootPlume
	return

RandomizeFossil_11:
	goto LootJaw
	return

RandomizeFossil_12:
	goto LootSail
	return


LootHelix::
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelix_2
LootHelix_1:
	finditem ITEM_HELIX_FOSSIL
	setflag FLAG_OBTAINED_HELIX_FOSSIL
	goto QuakeAfterFossil
	return

LootHelix_2:
	goto RandomizeFossil
	goto LootHelix_1


LootDome::
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDome_2
LootDome_1:
	finditem ITEM_DOME_FOSSIL
	setflag FLAG_OBTAINED_DOME_FOSSIL
	goto QuakeAfterFossil
	return

LootDome_2:
	goto RandomizeFossil
	goto LootDome_1


LootOldAmber::
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmber_2
LootOldAmber_1:
	finditem ITEM_OLD_AMBER
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
	goto QuakeAfterFossil
	return

LootOldAmber_2:
	goto RandomizeFossil
	goto LootOldAmber_1


LootRoot::
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRoot_2
LootRoot_1:
	finditem ITEM_ROOT_FOSSIL
	setflag FLAG_OBTAINED_ROOT_FOSSIL
	goto QuakeAfterFossil
	return

LootRoot_2:
	goto RandomizeFossil
	goto LootRoot_1


LootClaw::
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClaw_2
LootClaw_1:
	finditem ITEM_CLAW_FOSSIL
	setflag FLAG_OBTAINED_CLAW_FOSSIL
	goto QuakeAfterFossil
	return

LootClaw_2:
	goto RandomizeFossil
	goto LootClaw_1


LootSkull::
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkull_2
LootSkull_1:
	finditem ITEM_SKULL_FOSSIL
	setflag FLAG_OBTAINED_SKULL_FOSSIL
	goto QuakeAfterFossil
	return

LootSkull_2:
	goto RandomizeFossil
	goto LootSkull_1


LootArmor::
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmor_2
LootArmor_1:
	finditem ITEM_ARMOR_FOSSIL
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
	goto QuakeAfterFossil
	return

LootArmor_2:
	goto RandomizeFossil
	goto LootArmor_1


LootCover::
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCover_2
LootCover_1:
	finditem ITEM_COVER_FOSSIL
	setflag FLAG_OBTAINED_COVER_FOSSIL
	goto QuakeAfterFossil
	return

LootCover_2:
	goto RandomizeFossil
	goto LootCover_1


LootPlume::
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlume_2
LootPlume_1:
	finditem ITEM_PLUME_FOSSIL
	setflag FLAG_OBTAINED_PLUME_FOSSIL
	goto QuakeAfterFossil
	return

LootPlume_2:
	goto RandomizeFossil
	goto LootPlume_1


LootJaw::
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJaw_2
LootJaw_1:
	finditem ITEM_JAW_FOSSIL
	setflag FLAG_OBTAINED_JAW_FOSSIL
	goto QuakeAfterFossil
	return

LootJaw_2:
	goto RandomizeFossil
	goto LootJaw_1


LootSail::
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSail_2
LootSail_1:
	finditem ITEM_SAIL_FOSSIL
	setflag FLAG_OBTAINED_SAIL_FOSSIL
	goto QuakeAfterFossil
	return

LootSail_2:
	goto RandomizeFossil
	goto LootSail_1


QuakeAfterFossil::
	setflag FLAG_OBTAINED_A_FOSSIL
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


NotEnoughRoom_Text_0:
	.string "You don't have enough room to\ncarry that item…$"

FoundRope::
	.string "You stumble upon some old rope that\n"
	.string "could be used to climb back out.$"

FossilInWall::
	.string "There's a fossil of a Pokémon wedged\n"
	.string "in a small hole on the wall.\p"
	.string "Would you like to try and pry it\n"
	.string "from the hole?$"
