Pearlwood_MaysHouse1F_MapScripts::
# 2 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LoadBrendanHouse1F
	.byte 0


LoadBrendanHouse1F::
	checkplayergender
# 0 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq LoadBrendanHouse1F_1
	return

LoadBrendanHouse1F_1:
# 6 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	setmaplayoutindex LAYOUT_RIVAL_HOUSE1F_BRENDAN
	return


Pearlwood_MaysHouse1F_RivalMom::
# 11 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL
	goto_if_le Pearlwood_MaysHouse1F_RivalMom_1
# 20 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_BROTHER_FOUGHT
	goto_if_ge Pearlwood_MaysHouse1F_RivalMom_2
# 24 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	msgbox Pearlwood_MaysHouse1F_RivalMom2, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_1:
	checkplayergender
# 0 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Pearlwood_MaysHouse1F_RivalMom_7
# 16 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	bufferstring STR_VAR_1, Pearlwood_MaysHouse1F_RivalMom_Text_1
Pearlwood_MaysHouse1F_RivalMom_6:
# 18 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	msgbox Pearlwood_MaysHouse1F_RivalMom1, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_2:
# 21 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	msgbox Pearlwood_MaysHouse1F_RivalMom3, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_7:
# 13 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	bufferstring STR_VAR_1, Pearlwood_MaysHouse1F_RivalMom_Text_0
	goto Pearlwood_MaysHouse1F_RivalMom_6


Pearlwood_MaysHouse1F_RivalMom_Text_0:
# 13 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	.string "her$"

Pearlwood_MaysHouse1F_RivalMom_Text_1:
# 16 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	.string "his$"

Pearlwood_MaysHouse1F_RivalMom1::
# 28 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	.string "Hello neighbor!\p"
	.string "I believe {RIVAL} was working on\n"
	.string "something in {STR_VAR_1} room.\p"
	.string "If you're looking for my husband,\n"
	.string "you can probably find him in his lab.$"

Pearlwood_MaysHouse1F_RivalMom2::
# 36 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	.string "Oh, {RIVAL} went out to Primrose Meadow\n"
	.string "just a little while ago.\p"
	.string "Like father, like child.\n"
	.string "{RIVAL} can't stay quietly at home.\p"
	.string "Primrose Meadow is just past\n"
	.string "the next town.$"

Pearlwood_MaysHouse1F_RivalMom3::
# 45 "data/maps/Pearlwood_MaysHouse1F/scripts.pory"
	.string "I think it's wonderful for people to\n"
	.string "travel with Pokémon.\p"
	.string "But you should go home every so often\n"
	.string "to let your mother know you're okay.\p"
	.string "She might not say it, but I'm sure she\n"
	.string "worries about you, {PLAYER}.$"
