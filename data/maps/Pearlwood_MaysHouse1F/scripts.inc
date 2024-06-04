Pearlwood_MaysHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LoadBrendanHouse1F
	.byte 0


LoadBrendanHouse1F::
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq LoadBrendanHouse1F_1
	return

LoadBrendanHouse1F_1:
	setmaplayoutindex LAYOUT_RIVAL_HOUSE1F_BRENDAN
	return


Pearlwood_MaysHouse1F_RivalMom::
	compare VAR_PEARLWOOD_TOWN_STATE, 3
	goto_if_le Pearlwood_MaysHouse1F_RivalMom_1
	msgbox Pearlwood_MaysHouse1F_RivalMom2, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_1:
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Pearlwood_MaysHouse1F_RivalMom_5
	bufferstring STR_VAR_1, Pearlwood_MaysHouse1F_RivalMom_Text_1
Pearlwood_MaysHouse1F_RivalMom_4:
	msgbox Pearlwood_MaysHouse1F_RivalMom1, MSGBOX_NPC
	return

Pearlwood_MaysHouse1F_RivalMom_5:
	bufferstring STR_VAR_1, Pearlwood_MaysHouse1F_RivalMom_Text_0
	goto Pearlwood_MaysHouse1F_RivalMom_4


Pearlwood_MaysHouse1F_RivalMom_Text_0:
	.string "her$"

Pearlwood_MaysHouse1F_RivalMom_Text_1:
	.string "his$"

Pearlwood_MaysHouse1F_RivalMom1::
	.string "Hello neighbor!\p"
	.string "I believe {RIVAL} was working on\n"
	.string "something in {STR_VAR_1} room.\p"
	.string "If you're looking for my husband,\n"
	.string "you can probably find him in his lab.$"

Pearlwood_MaysHouse1F_RivalMom2::
	.string "Oh, {RIVAL} went out to Primrose Meadow\n"
	.string "just a little while ago.\p"
	.string "Like father, like child.\n"
	.string "{RIVAL} can't stay quietly at home.\p"
	.string "Primrose Meadow is just past\n"
	.string "the next town.$"
