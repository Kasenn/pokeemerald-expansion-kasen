UndergroundRuins_MapScripts::
# 2 "data/maps/UndergroundRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 3 "data/maps/UndergroundRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, UndergroundRuins_OnTransition
# 4 "data/maps/UndergroundRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, UndergroundRuinsSetHoleWarp
# 5 "data/maps/UndergroundRuins/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, UndergroundRuins_OnLoad
	.byte 0


UndergroundRuins_OnLoad::
# 9 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_DESERT_RUINS_OPENED, UndergroundRuins_OnLoad_2
UndergroundRuins_OnLoad_1:
	end

UndergroundRuins_OnLoad_2:
# 10 "data/maps/UndergroundRuins/scripts.pory"
	setmetatile 55, 49, 0x20E, FALSE
# 11 "data/maps/UndergroundRuins/scripts.pory"
	setmetatile 55, 50, 0x216, FALSE
	goto UndergroundRuins_OnLoad_1


UndergroundRuins_OnTransition::
# 17 "data/maps/UndergroundRuins/scripts.pory"
	clearflag FLAG_DESERT_STEPS
# 18 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_LANDMARK_DESERT_RUINS
# 19 "data/maps/UndergroundRuins/scripts.pory"
	goto CaveHole_FixCrackedGround
	return


UndergroundRuinsSetHoleWarp::
# 23 "data/maps/UndergroundRuins/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 24 "data/maps/UndergroundRuins/scripts.pory"
	setholewarp MAP_UNDERGROUND_RUINS_3F
# 25 "data/maps/UndergroundRuins/scripts.pory"
	setescapewarp MAP_DESERT, 0
	end


UndergroundRuinsLootRelic::
# 30 "data/maps/UndergroundRuins/scripts.pory"
	random 100
# 31 "data/maps/UndergroundRuins/scripts.pory"
	compare VAR_RESULT, 65
	goto_if_le UndergroundRuinsLootRelic_2
# 34 "data/maps/UndergroundRuins/scripts.pory"
	compare VAR_RESULT, 94
	goto_if_ge UndergroundRuinsLootRelic_3
# 38 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_RELIC_SILVER
UndergroundRuinsLootRelic_1:
	end

UndergroundRuinsLootRelic_2:
# 32 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_RELIC_COPPER
	goto UndergroundRuinsLootRelic_1

UndergroundRuinsLootRelic_3:
# 35 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_RELIC_GOLD
	goto UndergroundRuinsLootRelic_1


CheckForEscapeRope::
# 44 "data/maps/UndergroundRuins/scripts.pory"
	checkitem ITEM_ESCAPE_ROPE
# 45 "data/maps/UndergroundRuins/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CheckForEscapeRope_2
CheckForEscapeRope_1:
# 55 "data/maps/UndergroundRuins/scripts.pory"
	release
	end

CheckForEscapeRope_2:
# 46 "data/maps/UndergroundRuins/scripts.pory"
	lock
# 47 "data/maps/UndergroundRuins/scripts.pory"
	playse SE_PIN
# 48 "data/maps/UndergroundRuins/scripts.pory"
	safefollow
# 49 "data/maps/UndergroundRuins/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 50 "data/maps/UndergroundRuins/scripts.pory"
	waitmovement 0
# 51 "data/maps/UndergroundRuins/scripts.pory"
	delay 60
# 52 "data/maps/UndergroundRuins/scripts.pory"
	msgbox FoundRope
# 53 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_ESCAPE_ROPE
	goto CheckForEscapeRope_1


UndergroundSandstormTM::
# 65 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_TM_SANDSTORM
	end


UndergroundRuinsFossil::
# 70 "data/maps/UndergroundRuins/scripts.pory"
	lock
# 71 "data/maps/UndergroundRuins/scripts.pory"
	msgbox FossilInWall, MSGBOX_YESNO
# 72 "data/maps/UndergroundRuins/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq UndergroundRuinsFossil_1
# 78 "data/maps/UndergroundRuins/scripts.pory"
	checkitemspace ITEM_BUG_TERA_SHARD, 1
# 79 "data/maps/UndergroundRuins/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq UndergroundRuinsFossil_5
UndergroundRuinsFossil_4:
# 82 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_DESERT_RUINS_OPENED
# 83 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	return

UndergroundRuinsFossil_1:
# 73 "data/maps/UndergroundRuins/scripts.pory"
	closemessage
# 74 "data/maps/UndergroundRuins/scripts.pory"
	release
	end

UndergroundRuinsFossil_5:
# 80 "data/maps/UndergroundRuins/scripts.pory"
	goto ZeBagIsFull
	goto UndergroundRuinsFossil_4


RandomizeFossil::
# 88 "data/maps/UndergroundRuins/scripts.pory"
	random 11
# 89 "data/maps/UndergroundRuins/scripts.pory"
	switch VAR_RESULT
# 90 "data/maps/UndergroundRuins/scripts.pory"
	case 0, RandomizeFossil_2
# 92 "data/maps/UndergroundRuins/scripts.pory"
	case 1, RandomizeFossil_3
# 94 "data/maps/UndergroundRuins/scripts.pory"
	case 2, RandomizeFossil_4
# 96 "data/maps/UndergroundRuins/scripts.pory"
	case 3, RandomizeFossil_5
# 98 "data/maps/UndergroundRuins/scripts.pory"
	case 4, RandomizeFossil_6
# 100 "data/maps/UndergroundRuins/scripts.pory"
	case 5, RandomizeFossil_7
# 102 "data/maps/UndergroundRuins/scripts.pory"
	case 6, RandomizeFossil_8
# 104 "data/maps/UndergroundRuins/scripts.pory"
	case 7, RandomizeFossil_9
# 106 "data/maps/UndergroundRuins/scripts.pory"
	case 8, RandomizeFossil_10
# 108 "data/maps/UndergroundRuins/scripts.pory"
	case 9, RandomizeFossil_11
# 110 "data/maps/UndergroundRuins/scripts.pory"
	case 10, RandomizeFossil_12
	return

RandomizeFossil_2:
# 91 "data/maps/UndergroundRuins/scripts.pory"
	goto LootHelix
	return

RandomizeFossil_3:
# 93 "data/maps/UndergroundRuins/scripts.pory"
	goto LootDome
	return

RandomizeFossil_4:
# 95 "data/maps/UndergroundRuins/scripts.pory"
	goto LootOldAmber
	return

RandomizeFossil_5:
# 97 "data/maps/UndergroundRuins/scripts.pory"
	goto LootRoot
	return

RandomizeFossil_6:
# 99 "data/maps/UndergroundRuins/scripts.pory"
	goto LootClaw
	return

RandomizeFossil_7:
# 101 "data/maps/UndergroundRuins/scripts.pory"
	goto LootSkull
	return

RandomizeFossil_8:
# 103 "data/maps/UndergroundRuins/scripts.pory"
	goto LootArmor
	return

RandomizeFossil_9:
# 105 "data/maps/UndergroundRuins/scripts.pory"
	goto LootCover
	return

RandomizeFossil_10:
# 107 "data/maps/UndergroundRuins/scripts.pory"
	goto LootPlume
	return

RandomizeFossil_11:
# 109 "data/maps/UndergroundRuins/scripts.pory"
	goto LootJaw
	return

RandomizeFossil_12:
# 111 "data/maps/UndergroundRuins/scripts.pory"
	goto LootSail
	return


LootHelix::
# 126 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_HELIX_FOSSIL, LootHelix_2
LootHelix_1:
# 129 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_HELIX_FOSSIL
# 130 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_HELIX_FOSSIL
# 131 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootHelix_2:
# 127 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootHelix_1


LootDome::
# 134 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_DOME_FOSSIL, LootDome_2
LootDome_1:
# 137 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_DOME_FOSSIL
# 138 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_DOME_FOSSIL
# 139 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootDome_2:
# 135 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootDome_1


LootOldAmber::
# 142 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_OLDAMBER_FOSSIL, LootOldAmber_2
LootOldAmber_1:
# 145 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_OLD_AMBER
# 146 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_OLDAMBER_FOSSIL
# 147 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootOldAmber_2:
# 143 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootOldAmber_1


LootRoot::
# 150 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROOT_FOSSIL, LootRoot_2
LootRoot_1:
# 153 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_ROOT_FOSSIL
# 154 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_ROOT_FOSSIL
# 155 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootRoot_2:
# 151 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootRoot_1


LootClaw::
# 158 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_CLAW_FOSSIL, LootClaw_2
LootClaw_1:
# 161 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_CLAW_FOSSIL
# 162 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_CLAW_FOSSIL
# 163 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootClaw_2:
# 159 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootClaw_1


LootSkull::
# 166 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_SKULL_FOSSIL, LootSkull_2
LootSkull_1:
# 169 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_SKULL_FOSSIL
# 170 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_SKULL_FOSSIL
# 171 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootSkull_2:
# 167 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootSkull_1


LootArmor::
# 174 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_ARMOR_FOSSIL, LootArmor_2
LootArmor_1:
# 177 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_ARMOR_FOSSIL
# 178 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_ARMOR_FOSSIL
# 179 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootArmor_2:
# 175 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootArmor_1


LootCover::
# 182 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_COVER_FOSSIL, LootCover_2
LootCover_1:
# 185 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_COVER_FOSSIL
# 186 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_COVER_FOSSIL
# 187 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootCover_2:
# 183 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootCover_1


LootPlume::
# 190 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_PLUME_FOSSIL, LootPlume_2
LootPlume_1:
# 193 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_PLUME_FOSSIL
# 194 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_PLUME_FOSSIL
# 195 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootPlume_2:
# 191 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootPlume_1


LootJaw::
# 198 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_JAW_FOSSIL, LootJaw_2
LootJaw_1:
# 201 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_JAW_FOSSIL
# 202 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_JAW_FOSSIL
# 203 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootJaw_2:
# 199 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootJaw_1


LootSail::
# 206 "data/maps/UndergroundRuins/scripts.pory"
	goto_if_set FLAG_OBTAINED_SAIL_FOSSIL, LootSail_2
LootSail_1:
# 209 "data/maps/UndergroundRuins/scripts.pory"
	finditem ITEM_SAIL_FOSSIL
# 210 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_SAIL_FOSSIL
# 211 "data/maps/UndergroundRuins/scripts.pory"
	goto QuakeAfterFossil
	return

LootSail_2:
# 207 "data/maps/UndergroundRuins/scripts.pory"
	goto RandomizeFossil
	goto LootSail_1


QuakeAfterFossil::
# 216 "data/maps/UndergroundRuins/scripts.pory"
	setflag FLAG_OBTAINED_A_FOSSIL
# 217 "data/maps/UndergroundRuins/scripts.pory"
	fadeoutbgm 0
# 218 "data/maps/UndergroundRuins/scripts.pory"
	delay 60
# 219 "data/maps/UndergroundRuins/scripts.pory"
	playse SE_M_EARTHQUAKE
# 220 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8004, 2
# 221 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8005, 2
# 222 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8006, 30
# 223 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8007, 3
# 224 "data/maps/UndergroundRuins/scripts.pory"
	special ShakeCamera
# 225 "data/maps/UndergroundRuins/scripts.pory"
	waitstate
# 226 "data/maps/UndergroundRuins/scripts.pory"
	waitse
# 227 "data/maps/UndergroundRuins/scripts.pory"
	delay 120
# 228 "data/maps/UndergroundRuins/scripts.pory"
	playse SE_SWITCH
# 229 "data/maps/UndergroundRuins/scripts.pory"
	setmetatile 55, 49, 0x20E, FALSE
# 230 "data/maps/UndergroundRuins/scripts.pory"
	setmetatile 55, 50, 0x216, FALSE
# 231 "data/maps/UndergroundRuins/scripts.pory"
	special DrawWholeMapView
# 232 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8004, 2
# 233 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8005, 2
# 234 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8006, 4
# 235 "data/maps/UndergroundRuins/scripts.pory"
	setvar VAR_0x8007, 3
# 236 "data/maps/UndergroundRuins/scripts.pory"
	special ShakeCamera
# 237 "data/maps/UndergroundRuins/scripts.pory"
	waitstate
# 238 "data/maps/UndergroundRuins/scripts.pory"
	delay 30
# 239 "data/maps/UndergroundRuins/scripts.pory"
	fadeinbgm 0
# 240 "data/maps/UndergroundRuins/scripts.pory"
	delay 60
# 241 "data/maps/UndergroundRuins/scripts.pory"
	release
	end


FoundRope::
# 59 "data/maps/UndergroundRuins/scripts.pory"
	.string "You stumble upon some old rope that\n"
	.string "could be used to climb back out.$"

FossilInWall::
# 114 "data/maps/UndergroundRuins/scripts.pory"
	.string "There's a fossil of a Pokémon wedged\n"
	.string "in a small hole on the wall.\p"
	.string "Removing the fossil could release\n"
	.string "pressure from the walls, helping\l"
	.string "stabilize the nearby desert and\l"
	.string "reducing the amount of earthquakes.\p"
	.string "Would you like to try and pry it\n"
	.string "from the hole?$"
