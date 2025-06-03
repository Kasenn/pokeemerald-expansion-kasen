AmberockTown_KrokorokPier_MapScripts::
# 2 "data/maps/AmberockTown_KrokorokPier/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AmberockTown_KrokorokPier_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/AmberockTown_KrokorokPier/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, AmberockTown_KrokorokPier_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

AmberockTown_KrokorokPier_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AmberockTown_KrokorokPier/scripts.pory"
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, AmberockTown_KrokorokPier_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

AmberockTown_KrokorokPier_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/AmberockTown_KrokorokPier/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 5 "data/maps/AmberockTown_KrokorokPier/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
	return

AmberockTown_KrokorokPier_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/AmberockTown_KrokorokPier/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, SetPlayerKrokorokModel
	.2byte 0

