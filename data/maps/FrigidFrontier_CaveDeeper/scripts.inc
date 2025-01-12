FrigidFrontier_CaveDeeper_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto_if_set FLAG_FRIGIDFRONTIERCAVE_VERDANT_SPHERE, FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	setvar VAR_TEMP_0, 1
	return

FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 1, FrigidCaveSetBGM
	.2byte 0


FrigidCaveSetBGM::
	playbgm MUS_SEALED_CHAMBER, TRUE
	setvar VAR_TEMP_0, 2
	release
	end


FrigidCave_LootRock::
	finditem ITEM_VERDANT_SPHERE
	waitmessage
	playbgm MUS_SEALED_CHAMBER, TRUE
	end

