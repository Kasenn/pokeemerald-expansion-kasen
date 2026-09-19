MirageTower_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MirageTower_1F_OnTransition
	.byte 0

MirageTower_1F_OnTransition:
	setflag FLAG_ENTERED_MIRAGE_TOWER
	setflag FLAG_OLD_WORLD_FLAG
	setflag FLAG_OLD_WORLD_FLAG
	end

