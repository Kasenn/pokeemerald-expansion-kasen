UndergroundRuins_VolcaronaRoom_MapScripts::
	.byte 0


VolcaronaBattle::
	playmoncry SPECIES_VOLCARONA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_VOLCARONA, 35, ITEM_SILVER_POWDER
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	dowildbattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, VolcaronaBattle_DefeatVolcarona
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, VolcaronaBattle_DefeatVolcarona
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, VolcaronaBattle_DefeatVolcarona
	setflag FLAG_VOLCARONA_FOUGHT
	release
	end


VolcaronaBattle_DefeatVolcarona::
	setflag FLAG_VOLCARONA_FOUGHT
	goto Common_EventScript_RemoveStaticPokemon
	end

