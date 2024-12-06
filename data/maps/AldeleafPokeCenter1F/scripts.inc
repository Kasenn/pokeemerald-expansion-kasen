AldeleafPokeCenter1F_MapScripts::
# 3 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafPokeCenter1F_OnTransition
# 4 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AldeleafPokeCenter1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AldeleafPokeCenter1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script_2 VAR_DEBUG, 8, AutomaticUpdate
# 6 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script_2 VAR_DEBUG, 9, AutomaticUpdate2
# 7 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script_2 VAR_DEBUG, 10, AutomaticUpdate3
# 8 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script_2 VAR_DEBUG, 11, AutomaticUpdate4
# 9 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script_2 VAR_DEBUG, 12, AutomaticUpdate5
	.2byte 0


AldeleafPokeCenter1F_OnTransition::
# 15 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	setrespawn HEAL_LOCATION_ALDELEAF_CITY
# 16 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
	end


AldeleafPokeCenter1F_EventScript_Nurse::
# 21 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	setvar VAR_0x800B, 1
# 22 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 23 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	waitmessage
# 24 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	release
	end


AldeleafPokeCenter1F_EventScript_Man::
# 30 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	goto_if_set FLAG_VOLKNER_HELPED, AldeleafPokeCenter1F_EventScript_Man_2
# 34 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_PokemonHavePersonalities, MSGBOX_NPC
AldeleafPokeCenter1F_EventScript_Man_1:
	end

AldeleafPokeCenter1F_EventScript_Man_2:
# 31 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_PokemonHavePersonalities2, MSGBOX_NPC
	goto AldeleafPokeCenter1F_EventScript_Man_1


AldeleafPokeCenter1F_EventScript_Boy::
# 39 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end


AldeleafPokeCenter1F_EventScript_Girl::
# 43 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_HMCutNextDoor, MSGBOX_NPC
	end


AldeleafPokeCenter1F_Text_PokemonHavePersonalities::
# 47 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "I saw a group of people clad in black\n"
	.string "heading towards the Pokémon Ranch\l"
	.string "not too long ago.\l"
	.string "Wonder what they were up to.$"

AldeleafPokeCenter1F_Text_PokemonHavePersonalities2::
# 53 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "I saw a group of people clad in black\n"
	.string "heading south of Aldeleaf City\l"
	.string "not too long ago.\l"
	.string "Wonder what they were up to.$"

AldeleafPokeCenter1F_Text_MaleAndFemalePokemon::
# 59 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "I love this city. It feels like a mix\n"
	.string "of a big city and a rural town.$"

AldeleafPokeCenter1F_Text_HMCutNextDoor::
# 63 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "To the east of the city lies\n"
	.string "the Windplume Valley.\p"
	.string "Many Flying-type trainers\n"
	.string "like to go there to train.$"
