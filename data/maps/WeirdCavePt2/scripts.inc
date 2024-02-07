WeirdCavePt2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WeirdCaveSetVar
	map_script MAP_SCRIPT_ON_FRAME_TABLE, WeirdCavePt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

WeirdCavePt2_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_WEIRDCAVE_PART2, 0, WeirdCaveDoNothing
	map_script_2 VAR_WEIRDCAVE_PART2, 2, WeirdCaveSetBGM
	.2byte 0


WeirdCaveSetVar::
	compare VAR_WEIRDCAVE_PART2, 3
	goto_if_eq WeirdCaveSetVar_2
WeirdCaveSetVar_1:
	release
	end

WeirdCaveSetVar_2:
	setvar VAR_WEIRDCAVE_PART2, 2
	goto WeirdCaveSetVar_1


WeirdCaveDoNothing::
	setvar VAR_WEIRDCAVE_PART2, 1
	release
	end


WeirdCaveSetBGM::
	playbgm MUS_SEALED_CHAMBER, TRUE
	setvar VAR_WEIRDCAVE_PART2, 3
	release
	end


WeirdCave_LootRock::
	finditem ITEM_STONE_SPHERE
	waitmessage
	playbgm MUS_SEALED_CHAMBER, TRUE
	setvar VAR_WEIRDCAVE_PART2, 3
	end

