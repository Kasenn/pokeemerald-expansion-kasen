AldeleafPokeCenter1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafPokeCenter1F_OnTransition
	.byte 0


AldeleafPokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_ALDELEAF_CITY
	call Common_EventScript_UpdateBrineyLocation
	end


AldeleafPokeCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


AldeleafPokeCenter1F_EventScript_Man::
	goto_if_set FLAG_VOLKNER_HELPED, AldeleafPokeCenter1F_EventScript_Man_2
	msgbox AldeleafPokeCenter1F_Text_PokemonHavePersonalities, MSGBOX_NPC
AldeleafPokeCenter1F_EventScript_Man_1:
	end

AldeleafPokeCenter1F_EventScript_Man_2:
	msgbox AldeleafPokeCenter1F_Text_PokemonHavePersonalities2, MSGBOX_NPC
	goto AldeleafPokeCenter1F_EventScript_Man_1


AldeleafPokeCenter1F_EventScript_Boy::
	msgbox AldeleafPokeCenter1F_Text_MaleAndFemalePokemon, MSGBOX_NPC
	end


AldeleafPokeCenter1F_EventScript_Girl::
	msgbox AldeleafPokeCenter1F_Text_HMCutNextDoor, MSGBOX_NPC
	end


AldeleafPokeCenter1F_Text_PokemonHavePersonalities::
	.string "I saw a group of people clad in black\n"
	.string "heading towards the Pokémon Ranch\l"
	.string "not too long ago.\l"
	.string "Wonder what they were up to.$"

AldeleafPokeCenter1F_Text_PokemonHavePersonalities2::
	.string "I saw a group of people clad in black\n"
	.string "heading south of Aldeleaf City\l"
	.string "not too long ago.\l"
	.string "Wonder what they were up to.$"

AldeleafPokeCenter1F_Text_MaleAndFemalePokemon::
	.string "I love this city. It feels like a mix\n"
	.string "of a big city and a rural town.$"

AldeleafPokeCenter1F_Text_HMCutNextDoor::
	.string "To the east of the city lies\n"
	.string "the Windplume Valley.\p"
	.string "Many Flying-type trainers\n"
	.string "like to go there to train.$"
