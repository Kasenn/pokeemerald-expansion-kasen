AldeleafPokeCenter1F_MapScripts::
# 3 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafPokeCenter1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

AldeleafPokeCenter1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	setrespawn HEAL_LOCATION_ALDELEAF_CITY
	return


AldeleafPokeCenter1F_EventScript_Nurse::
# 9 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	setvar VAR_0x800B, 1
# 10 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 11 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	waitmessage
# 12 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	waitbuttonpress
# 13 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	release
	end


AldeleafPokeCenter1F_EventScript_Man::
# 18 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	goto_if_set FLAG_VOLKNER_HELPED, AldeleafPokeCenter1F_EventScript_Man_2
# 22 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_PokemonHavePersonalities, MSGBOX_NPC
AldeleafPokeCenter1F_EventScript_Man_1:
	end

AldeleafPokeCenter1F_EventScript_Man_2:
# 19 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_PokemonHavePersonalities2, MSGBOX_NPC
	goto AldeleafPokeCenter1F_EventScript_Man_1


AldeleafPokeCenter1F_EventScript_Boy::
# 27 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end


AldeleafPokeCenter1F_EventScript_Girl::
# 31 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	msgbox AldeleafPokeCenter1F_Text_HMCutNextDoor, MSGBOX_NPC
# 32 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	goto_if_unset FLAG_Q07_WINDPLUME_VALLEY_START, AldeleafPokeCenter1F_EventScript_Girl_2
AldeleafPokeCenter1F_EventScript_Girl_1:
	end

AldeleafPokeCenter1F_EventScript_Girl_2:
# 33 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	startquest FLAG_Q07_WINDPLUME_VALLEY_START
# 34 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	special ShowJournalPopupAdd
	goto AldeleafPokeCenter1F_EventScript_Girl_1


AldeleafPokeCenter1F_Text_PokemonHavePersonalities::
# 39 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "I saw a group of people clad in black\n"
	.string "heading towards the Pokémon Ranch\l"
	.string "not too long ago.\l"
	.string "Wonder what they were up to.$"

AldeleafPokeCenter1F_Text_PokemonHavePersonalities2::
# 45 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "I saw a group of people clad in black\n"
	.string "heading south of Aldeleaf City\l"
	.string "not too long ago.\l"
	.string "Wonder what they were up to.$"

AldeleafPokeCenter1F_Text_MaleAndFemalePokemon::
# 51 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "I love this city. It feels like a mix\n"
	.string "of a big city and a rural town.$"

AldeleafPokeCenter1F_Text_HMCutNextDoor::
# 55 "data/maps/AldeleafPokeCenter1F/scripts.pory"
	.string "To the east of the city lies\n"
	.string "the Windplume Valley.\p"
	.string "Many Flying-type trainers\n"
	.string "like to go there to train.$"
