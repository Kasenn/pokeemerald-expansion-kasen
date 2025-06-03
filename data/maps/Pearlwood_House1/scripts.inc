Pearlwood_House1_MapScripts::
	.byte 0


Pearlwood_House1_OldLady::
# 4 "data/maps/Pearlwood_House1/scripts.pory"
	msgbox Pearlwood_House1_OldLady_Text, MSGBOX_NPC
	return


Pearlwood_House1_YoungGirl::
# 15 "data/maps/Pearlwood_House1/scripts.pory"
	msgbox Pearlwood_House1_YoungGirl_Text, MSGBOX_NPC
# 16 "data/maps/Pearlwood_House1/scripts.pory"
	turnobject 2, DIR_NORTH
	return


Pearlwood_House1_OldLady_Text::
# 6 "data/maps/Pearlwood_House1/scripts.pory"
	.string "How is the professor able to provide\n"
	.string "all the young trainers with Pokémon?\p"
	.string "I rarely see him leaving the village\n"
	.string "so he must be getting them from\l"
	.string "somewhere nearby.$"

Pearlwood_House1_YoungGirl_Text::
# 18 "data/maps/Pearlwood_House1/scripts.pory"
	.string "Listen to this book I'm reading!\p"
	.string "“The Pokémon habitat can be more\n"
	.string "diverse than it initially seems.\l"
	.string "While most habitats seem to be \l"
	.string "dominated by only a handful of\l"
	.string "Pokémon species, one should never\l"
	.string "rule out the possibility of coming\l"
	.string "across something unexpected.”$"
