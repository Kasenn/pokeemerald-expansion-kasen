Pearlwood_MaysHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_MaysHouse2F_SetRival
	.byte 0


Pearlwood_MaysHouse2F_SetRival::
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq Pearlwood_MaysHouse2F_SetRival_2
Pearlwood_MaysHouse2F_SetRival_1:
	call Common_EventScript_SetupRivalGfxId
	return

Pearlwood_MaysHouse2F_SetRival_2:
	setmaplayoutindex LAYOUT_RIVAL_HOUSE2F_BRENDAN
	goto Pearlwood_MaysHouse2F_SetRival_1


Pearlwood_MaysHouse2F_Rival::
	lock
	compare VAR_PEARLWOOD_TOWN_STATE, 2
	goto_if_eq Pearlwood_MaysHouse2F_Rival_2
	msgbox Pearlwood_MaysHouse2F_Gossip
Pearlwood_MaysHouse2F_Rival_1:
	turnobject 3, DIR_NORTH
	release
	return

Pearlwood_MaysHouse2F_Rival_2:
	waitse
	playse SE_PIN
	safefollow
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	faceplayer
	delay 48
	msgbox Pearlwood_MaysHouse2F_Intro
	closemessage
	delay 20
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	setvar VAR_PEARLWOOD_TOWN_STATE, 3
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq Pearlwood_MaysHouse2F_Rival_5
	msgbox Pearlwood_MaysHouse2F_Intro2_FemalePC
	goto Pearlwood_MaysHouse2F_Rival_1

Pearlwood_MaysHouse2F_Rival_5:
	msgbox Pearlwood_MaysHouse2F_Intro2_MalePC
	goto Pearlwood_MaysHouse2F_Rival_1


Pearlwood_MaysHouse2F_Intro::
	.string "{RIVAL}: Oh, hi {PLAYER}!\p"
	.string "Sorry, I'm a bit busy answering to\n"
	.string "some e-mail.\p"
	.string "I heard that my dad\n"
	.string "was looking for you.$"

Pearlwood_MaysHouse2F_Intro2_MalePC::
	.string "I get it now!\n"
	.string "I bet it's time for you to finally\l"
	.string "get your own Pokémon!\l"
	.string "I hope you pick a cute one!\p"
	.string "Dad's probably waiting for you\n"
	.string "in his lab to the northwest.$"

Pearlwood_MaysHouse2F_Intro2_FemalePC::
	.string "I get it now!\n"
	.string "I bet it's time for you to finally\l"
	.string "get your own Pokémon!\l"
	.string "I hope you pick a cool one!\p"
	.string "Dad's probably waiting for you\n"
	.string "in his lab to the northwest.$"

Pearlwood_MaysHouse2F_Gossip::
	.string "{RIVAL}: Sorry, but I REALLY need to\n"
	.string "finish writing this e-mail.$"
