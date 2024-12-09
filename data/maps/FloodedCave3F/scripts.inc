FloodedCave3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FC3FSetVar
	map_script MAP_SCRIPT_ON_LOAD, FC3FSetVar
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FloodedCave3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

FloodedCave3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_FCCAVE, 0, FC3FDoNothing
	map_script_2 VAR_FCCAVE, 2, FC3FSetBGM
	.2byte 0


FC3FSetVar::
	compare VAR_FCCAVE, 3
	goto_if_eq FC3FSetVar_2
FC3FSetVar_1:
	release
	end

FC3FSetVar_2:
	setvar VAR_FCCAVE, 2
	goto FC3FSetVar_1


FC3FDoNothing::
	setvar VAR_FCCAVE, 1
	release
	end


FC3FSetBGM::
	playbgm MUS_SEALED_CHAMBER, TRUE
	setvar VAR_FCCAVE, 3
	release
	end


FC3F_LootRock::
	finditem ITEM_STEEL_SPHERE
	waitmessage
	playbgm MUS_SEALED_CHAMBER, TRUE
	setvar VAR_FCCAVE, 3
	end

