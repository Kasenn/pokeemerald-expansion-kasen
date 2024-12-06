FloodedCave3F_MapScripts::
# 2 "data/maps/FloodedCave3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FC3FSetVar
# 3 "data/maps/FloodedCave3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FC3FSetVar
# 4 "data/maps/FloodedCave3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FloodedCave3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FloodedCave3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/FloodedCave3F/scripts.pory"
	map_script_2 VAR_FCCAVE, 0, FC3FDoNothing
# 6 "data/maps/FloodedCave3F/scripts.pory"
	map_script_2 VAR_FCCAVE, 2, FC3FSetBGM
	.2byte 0


FC3FSetVar::
# 11 "data/maps/FloodedCave3F/scripts.pory"
	compare VAR_FCCAVE, 3
	goto_if_eq FC3FSetVar_2
FC3FSetVar_1:
# 14 "data/maps/FloodedCave3F/scripts.pory"
	release
	end

FC3FSetVar_2:
# 12 "data/maps/FloodedCave3F/scripts.pory"
	setvar VAR_FCCAVE, 2
	goto FC3FSetVar_1


FC3FDoNothing::
# 18 "data/maps/FloodedCave3F/scripts.pory"
	setvar VAR_FCCAVE, 1
# 19 "data/maps/FloodedCave3F/scripts.pory"
	release
	end


FC3FSetBGM::
# 23 "data/maps/FloodedCave3F/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 24 "data/maps/FloodedCave3F/scripts.pory"
	setvar VAR_FCCAVE, 3
# 25 "data/maps/FloodedCave3F/scripts.pory"
	release
	end


FC3F_LootRock::
# 30 "data/maps/FloodedCave3F/scripts.pory"
	finditem ITEM_STEEL_SPHERE
# 31 "data/maps/FloodedCave3F/scripts.pory"
	waitmessage
# 32 "data/maps/FloodedCave3F/scripts.pory"
	playbgm MUS_SEALED_CHAMBER, TRUE
# 33 "data/maps/FloodedCave3F/scripts.pory"
	setvar VAR_FCCAVE, 3
	end

