FrosthearthCity_PokeCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_PokeCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_PokeCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_FROSTFIRE_CITY
	return


Frosthearth_PokeCenter_Woman::
	msgbox Frosthearth_PokeCenter_Woman_Text, MSGBOX_NPC
	return


Frosthearth_PokeCenter_Man::
	msgbox Frosthearth_PokeCenter_Man_Text, MSGBOX_NPC
	return


Frosthearth_Mart_Man::
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Frosthearth_Mart_Man_1
	msgbox Frosthearth_Mart_Man_Text, MSGBOX_NPC
	return

Frosthearth_Mart_Man_1:
	msgbox Frosthearth_Mart_Man_Legendary, MSGBOX_NPC
	return


Frosthearth_Mart_Lass::
	msgbox Frosthearth_Mart_Lass_Text, MSGBOX_NPC
	return


Frosthearth_Mart_Bounsweet::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
	msgbox Frosthearth_Mart_Bounsweet_Text_0
	waitmoncry
	release
	end


FrosthearthPokeCenter_EventScript_Nurse::
	setvar VAR_0x800B, 3
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


FrosthearthPokeCenter_Lanette::
	lock
	faceplayer
	msgbox FrosthearthPokeCenter_Lanette_Text
	playfanfare MUS_OBTAIN_TMHM
	message CanNowUseIVChecker
	waitmessage
	waitfanfare
	delay 30
	msgbox FrosthearthPokeCenter_Lanette_ExplainIVFunction
	msgbox FrosthearthPokeCenter_Lanette_Goodbye
	closemessage
	applymovement 8, FrosthearthPokeCenter_Lanette_Movement_0
	applymovement 0xFF, FrosthearthPokeCenter_Lanette_Movement_1
	waitmovement 8
	playse SE_SLIDING_DOOR
	removeobject 8
	setflag FLAG_SYS_PC_LANETTE
	release
	return


FrosthearthPokeCenter_Lanette_Movement_0:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FrosthearthPokeCenter_Lanette_Movement_1:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

Frosthearth_Mart_Bounsweet_Text_0:
	.string "Bounsweet: Beleleen!$"

Frosthearth_PokeCenter_Woman_Text::
	.string "I brought my newly-hatched Pokémon\n"
	.string "to train here, and the speed at which\l"
	.string "it grew is astounding!$"

Frosthearth_PokeCenter_Man_Text::
	.string "As convenient as Pokémon Centers\n"
	.string "are as a place of healing,\l"
	.string "they just can't beat the feeling\l"
	.string "you get from taking a dip in a\l"
	.string "hot spring.$"

Frosthearth_Mart_Man_Legendary::
	.string "On my way here, I saw this majestic\n"
	.string "looking Pokémon leaping over the\l"
	.string "trees and the mountains.\p"
	.string "I think I saw it heading towards\n"
	.string "the huge mountain just north of\l"
	.string "Route 18.$"

Frosthearth_Mart_Man_Text::
	.string "I swear I've never seen a single\n"
	.string "store selling Ethers.\p"
	.string "Where do they come from?\p"
	.string "How come they're so hard to\n"
	.string "come by?$"

Frosthearth_Mart_Lass_Text::
	.string "My Pokémon has been working\n"
	.string "extra hard, so I'm rewarding it by\l"
	.string "letting it pick any treat it wants.$"

FrosthearthPokeCenter_Lanette_Text::
	.string "Oh, hello.\n"
	.string "You are?\p"
	.string "Okay, your name's {PLAYER}.\n"
	.string "I can see that you're a trainer.\p"
	.string "So that means you use the Pokémon\n"
	.string "Storage System I developed.\p"
	.string "How I arrived at that conclusion is\n"
	.string "a simple deductive process.\p"
	.string "You spoke to me because you wanted\n"
	.string "to access something on this PC.\p"
	.string "Oh, I'm sorry. I'm Lanette.\p"
	.string "I'm the one behind the Pokémon Storage\n"
	.string "System you've come to learn and love,\l"
	.string "and I've just finished updating this\l"
	.string "machine with my latest update!$"

CanNowUseIVChecker::
	.string "The Judge function has been added\n"
	.string "to your PC boxes!$"

FrosthearthPokeCenter_Lanette_ExplainIVFunction::
	.string "When accessing your PC boxes,\n"
	.string "you can now use the Judge function\l"
	.string "and analyze a chosen Pokémon to see\l"
	.string "its biggest strengths and weaknesses.\p"
	.string "To access the Judge function, simply\n"
	.string "select a Pokémon, and choose “Judge”.\p"
	.string "You can also access the Judge\n"
	.string "function by pressing the L Button\l"
	.string "when using the normal Button Mode.$"

FrosthearthPokeCenter_Lanette_Goodbye::
	.string "Anyway, I should be heading out now.\n"
	.string "I've still got lots of PCs to update!\p"
	.string "Honestly, I'm glad to meet you--it's\n"
	.string "great you're using the Storage System.\p"
	.string "If you're ever visiting Valorwatch City,\n"
	.string "drop by and say hello!$"
