FrigidFrontier_CaveDeeper_MapScripts::
# 2 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	goto_if_set FLAG_FRIGIDCAVE_VERDANT_SPHERE, FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

FrigidFrontier_CaveDeeper_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	map_script_2 VAR_TEMP_0, 1, FrigidCaveSetBGM
	.2byte 0


FrigidCaveSetBGM::
# 13 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 14 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	setvar VAR_TEMP_0, 2
# 15 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	release
	end


FrigidCave_LootRock::
# 20 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	finditem ITEM_VERDANT_SPHERE
# 21 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	waitmessage
# 22 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 23 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	goto_if_set FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_START, FrigidCave_LootRock_2
FrigidCave_LootRock_1:
	end

FrigidCave_LootRock_2:
# 24 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	completequest FLAG_Q39_FRIGIDFRONTIER_WEIRDCAVE_COMPLETE
# 25 "data/maps/FrigidFrontier_CaveDeeper/scripts.pory"
	special ShowJournalPopupRemove
	goto FrigidCave_LootRock_1

