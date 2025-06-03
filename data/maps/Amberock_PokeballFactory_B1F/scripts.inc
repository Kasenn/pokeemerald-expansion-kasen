Amberock_PokeballFactory_B1F_MapScripts::
# 2 "data/maps/Amberock_PokeballFactory_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 8 "data/maps/Amberock_PokeballFactory_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Amberock_PokeballFactory_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

Amberock_PokeballFactory_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Amberock_PokeballFactory_B1F/scripts.pory"
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, Amberock_PokeballFactory_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Amberock_PokeballFactory_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Amberock_PokeballFactory_B1F/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 5 "data/maps/Amberock_PokeballFactory_B1F/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
	return

Amberock_PokeballFactory_B1F_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 9 "data/maps/Amberock_PokeballFactory_B1F/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, SetPlayerKrokorokModel
	.2byte 0

