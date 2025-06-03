WeirdCavePt2_MapScripts::
# 2 "data/maps/WeirdCavePt2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WeirdCaveSetVar
# 3 "data/maps/WeirdCavePt2/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WeirdCavePt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WeirdCavePt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/WeirdCavePt2/scripts.pory"
	map_script_2 VAR_WEIRDCAVE_PART2, 0, WeirdCaveDoNothing
# 5 "data/maps/WeirdCavePt2/scripts.pory"
	map_script_2 VAR_WEIRDCAVE_PART2, 2, WeirdCaveSetBGM
	.2byte 0


WeirdCaveSetVar::
# 9 "data/maps/WeirdCavePt2/scripts.pory"
	compare VAR_WEIRDCAVE_PART2, 3
	goto_if_eq WeirdCaveSetVar_2
WeirdCaveSetVar_1:
# 12 "data/maps/WeirdCavePt2/scripts.pory"
	release
	end

WeirdCaveSetVar_2:
# 10 "data/maps/WeirdCavePt2/scripts.pory"
	setvar VAR_WEIRDCAVE_PART2, 2
	goto WeirdCaveSetVar_1


WeirdCaveDoNothing::
# 16 "data/maps/WeirdCavePt2/scripts.pory"
	setvar VAR_WEIRDCAVE_PART2, 1
# 17 "data/maps/WeirdCavePt2/scripts.pory"
	release
	end


WeirdCaveSetBGM::
# 21 "data/maps/WeirdCavePt2/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 22 "data/maps/WeirdCavePt2/scripts.pory"
	setvar VAR_WEIRDCAVE_PART2, 3
# 23 "data/maps/WeirdCavePt2/scripts.pory"
	release
	end


WeirdCave_LootRock::
# 28 "data/maps/WeirdCavePt2/scripts.pory"
	finditem ITEM_STONE_SPHERE
# 29 "data/maps/WeirdCavePt2/scripts.pory"
	waitmessage
# 30 "data/maps/WeirdCavePt2/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 31 "data/maps/WeirdCavePt2/scripts.pory"
	setvar VAR_WEIRDCAVE_PART2, 3
# 32 "data/maps/WeirdCavePt2/scripts.pory"
	goto_if_set FLAG_Q17_DESERT_WEIRDCAVE_START, WeirdCave_LootRock_2
WeirdCave_LootRock_1:
	end

WeirdCave_LootRock_2:
# 33 "data/maps/WeirdCavePt2/scripts.pory"
	completequest FLAG_Q17_DESERT_WEIRDCAVE_COMPLETE
# 34 "data/maps/WeirdCavePt2/scripts.pory"
	special ShowJournalPopupRemove
	goto WeirdCave_LootRock_1

