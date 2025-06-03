FrosthearthCity_PokeCenter_MapScripts::
# 2 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FrosthearthCity_PokeCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FrosthearthCity_PokeCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_FROSTFIRE_CITY
	return


Frosthearth_PokeCenter_Woman::
# 8 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox Frosthearth_PokeCenter_Woman_Text, MSGBOX_NPC
	return


Frosthearth_PokeCenter_Man::
# 11 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox Frosthearth_PokeCenter_Man_Text, MSGBOX_NPC
	return


Frosthearth_Mart_Man::
# 28 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	compare VAR_SPHERES_FOUND, 4
	goto_if_ge Frosthearth_Mart_Man_1
# 32 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox Frosthearth_Mart_Man_Text, MSGBOX_NPC
	return

Frosthearth_Mart_Man_1:
# 29 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox Frosthearth_Mart_Man_Legendary, MSGBOX_NPC
	return


Frosthearth_Mart_Lass::
# 36 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox Frosthearth_Mart_Lass_Text, MSGBOX_NPC
	return


Frosthearth_Mart_Bounsweet::
# 61 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	lock
# 62 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	faceplayer
# 63 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitse
# 64 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 65 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox Frosthearth_Mart_Bounsweet_Text_0
# 66 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitmoncry
# 67 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	release
	end


FrosthearthPokeCenter_EventScript_Nurse::
# 72 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	setvar VAR_0x800B, 3
# 73 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 74 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitmessage
# 75 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitbuttonpress
# 76 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	release
	end


FrosthearthPokeCenter_Lanette::
# 81 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	lock
# 82 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	faceplayer
# 83 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox FrosthearthPokeCenter_Lanette_Text
# 84 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 85 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	message CanNowUseIVChecker
# 86 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitmessage
# 87 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitfanfare
# 88 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	delay 30
# 89 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox FrosthearthPokeCenter_Lanette_ExplainIVFunction
# 90 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	msgbox FrosthearthPokeCenter_Lanette_Goodbye
# 91 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	closemessage
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	applymovement 8, FrosthearthPokeCenter_Lanette_Movement_0
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	applymovement 0xFF, FrosthearthPokeCenter_Lanette_Movement_1
# 94 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	waitmovement 8
# 95 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	playse SE_SLIDING_DOOR
# 96 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	removeobject 8
# 97 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	setflag FLAG_SYS_PC_LANETTE
# 98 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	release
	return


# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
FrosthearthPokeCenter_Lanette_Movement_0:
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	delay_16
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	delay_16
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_left
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_left
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_left
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 92 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	delay_8
	step_end

# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
FrosthearthPokeCenter_Lanette_Movement_1:
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	lock_facing_direction
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_down
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	unlock_facing_direction
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	face_left
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	lock_facing_direction
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	walk_right
# 93 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	unlock_facing_direction
	step_end

Frosthearth_Mart_Bounsweet_Text_0:
# 65 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "Bounsweet: Beleleen!$"

Frosthearth_PokeCenter_Woman_Text::
# 14 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "I brought my newly-hatched Pokémon\n"
	.string "to train here, and the speed at which\l"
	.string "it grew is astounding!$"

Frosthearth_PokeCenter_Man_Text::
# 19 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "As convenient as Pokémon Centers\n"
	.string "are as a place of healing,\l"
	.string "they just can't beat the feeling\l"
	.string "you get from taking a dip in a\l"
	.string "hot spring.$"

Frosthearth_Mart_Man_Legendary::
# 39 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "On my way here, I saw this majestic\n"
	.string "looking Pokémon leaping over the\l"
	.string "trees and the mountains.\p"
	.string "I think I saw it heading towards\n"
	.string "the huge mountain just north of\l"
	.string "Route 18.$"

Frosthearth_Mart_Man_Text::
# 47 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "I swear I've never seen a single\n"
	.string "store selling Ethers.\p"
	.string "Where do they come from?\p"
	.string "How come they're so hard to\n"
	.string "come by?$"

Frosthearth_Mart_Lass_Text::
# 54 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "My Pokémon has been working\n"
	.string "extra hard, so I'm rewarding it by\l"
	.string "letting it pick any treat it wants.$"

FrosthearthPokeCenter_Lanette_Text::
# 100 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
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
# 117 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "The Judge function has been added\n"
	.string "to your PC boxes!$"

FrosthearthPokeCenter_Lanette_ExplainIVFunction::
# 121 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
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
# 132 "data/maps/FrosthearthCity_PokeCenter/scripts.pory"
	.string "Anyway, I should be heading out now.\n"
	.string "I've still got lots of PCs to update!\p"
	.string "Honestly, I'm glad to meet you--it's\n"
	.string "great you're using the Storage System.\p"
	.string "If you're ever visiting Valorwatch City,\n"
	.string "drop by and say hello!$"
