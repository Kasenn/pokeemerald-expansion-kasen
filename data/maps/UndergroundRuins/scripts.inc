UndergroundRuins_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
	map_script MAP_SCRIPT_ON_RESUME, UndergroundRuinsSetHoleWarp
	.byte 0


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


isthisadamprock::
	compare VAR_ITEM_ID, 447
	goto_if_eq isthisadamprock_1
	msgbox isthisadamprock_Text_1, MSGBOX_DEFAULT
	return

isthisadamprock_1:
	msgbox isthisadamprock_Text_0, MSGBOX_DEFAULT
	return


CheckForEscapeRope_Text_0:
	.string "There's a coil of old rope here that\ncould be used to climb back out.$"

isthisadamprock_Text_0:
	.string "that's a damp rock$"

isthisadamprock_Text_1:
	.string "that's not a damp rock$"
