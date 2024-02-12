Shoreslate_Pokecenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ShoreslatePokeCenter1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ShoreslatePokeCenter1F_OnTransition::
	setrespawn HEAL_LOCATION_SHORESLATE_CITY
	call Common_EventScript_UpdateBrineyLocation
	end


ShoreslatePokeCenter1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


ShoreslatePokeCenter1F_OldWoman::
	msgbox ShoreslatePokeCenter1F_OldWoman_Text, MSGBOX_NPC
	end


ShoreslatePokeCenter1F_Boy::
	msgbox ShoreslatePokeCenter1F_Boy_Text, MSGBOX_NPC
	end


ShoreslatePokeCenter1F_LittleGirl::
	msgbox ShoreslatePokeCenter1F_LittleGirl_Text, MSGBOX_NPC
	end


ShoreslatePokeCenter1F_OldWoman_Text::
	.string "Have you heard of the Devon\n"
	.string "Corporation?\p"
	.string "They create a lot of products that many\n"
	.string "Pokémon trainers use on a daily basis,\l"
	.string "like Poké Balls and medicines.\p"
	.string "If you'd like to know more, you can\n"
	.string "actually visit their offices right here\l"
	.string "in Shoreslate, just west of the\l"
	.string "Pokémon Center!$"

ShoreslatePokeCenter1F_Boy_Text::
	.string "Have you been to the upstairs to\n"
	.string "check the training area?\p"
	.string "My Pokémon grew stronger training here\n"
	.string "than they did when I visited Aldeleaf!$"

ShoreslatePokeCenter1F_LittleGirl_Text::
	.string "According to this book, on rare\n"
	.string "occasions, a Pokémon can be born with\l"
	.string "atypical coloration.\l"
	.string "These types of Pokémon are commonly\l"
	.string "known as “shiny” Pokémon.\p"
	.string "The book also has a mention of Sinko\n"
	.string "having an unusually large amount of\l"
	.string "these atypical colorations.$"
