UndergroundRuins_VolcaronaRoom_MapScripts::
	.byte 0


VolcaronaBattle::
# 4 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
# 5 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	delay 40
# 6 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	waitmoncry
# 7 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	setwildbattle SPECIES_VOLCARONA, 30, ITEM_SILVER_POWDER
# 8 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 9 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	dowildbattle
# 10 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 11 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	setflag FLAG_VOLCARONA_FOUGHT
# 12 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
# 13 "data/maps/UndergroundRuins_VolcaronaRoom/scripts.pory"
	release
	end

