Pearlwood_MaysHouse2F_MapScripts::
# 2 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_MaysHouse2F_SetRival
	.byte 0


Pearlwood_MaysHouse2F_SetRival::
	checkplayergender
# 0 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq Pearlwood_MaysHouse2F_SetRival_2
Pearlwood_MaysHouse2F_SetRival_1:
# 11 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	call SetupRivalGfxId
	return

Pearlwood_MaysHouse2F_SetRival_2:
# 9 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	setmaplayoutindex LAYOUT_RIVAL_HOUSE2F_BRENDAN
	goto Pearlwood_MaysHouse2F_SetRival_1


Pearlwood_MaysHouse2F_Rival::
# 15 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	lock
# 16 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES
	goto_if_eq Pearlwood_MaysHouse2F_Rival_2
# 40 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	msgbox Pearlwood_MaysHouse2F_Gossip
Pearlwood_MaysHouse2F_Rival_1:
# 42 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	turnobject 3, DIR_NORTH
# 43 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	release
	return

Pearlwood_MaysHouse2F_Rival_2:
# 17 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	waitse
# 18 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	playse SE_PIN
# 19 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	safefollow
# 20 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 21 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	waitmovement 0
# 22 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	faceplayer
# 23 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	delay 48
# 24 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	msgbox Pearlwood_MaysHouse2F_Intro
# 25 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	closemessage
# 26 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	delay 20
# 27 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	playse SE_PIN
# 28 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 29 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	waitmovement 0
# 30 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	delay 48
# 31 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MET_RIVAL
	checkplayergender
# 0 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Pearlwood_MaysHouse2F_Rival_5
# 36 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	msgbox Pearlwood_MaysHouse2F_Intro2_FemalePC
	goto Pearlwood_MaysHouse2F_Rival_1

Pearlwood_MaysHouse2F_Rival_5:
# 33 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	msgbox Pearlwood_MaysHouse2F_Intro2_MalePC
	goto Pearlwood_MaysHouse2F_Rival_1


WooperDoll::
# 78 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	msgbox WooperDoll_Text_0, MSGBOX_SIGN
	return


AzurillDoll::
# 81 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	msgbox AzurillDoll_Text_0, MSGBOX_SIGN
	return


WooperDoll_Text_0:
# 78 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	.string "It's a Wooper doll.$"

AzurillDoll_Text_0:
# 81 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	.string "It's an Azurill doll.$"

Pearlwood_MaysHouse2F_Intro::
# 46 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	.string "{RIVAL}: Oh, hi {PLAYER}!\p"
	.string "Sorry, I'm a bit busy answering to\n"
	.string "some e-mail.\p"
	.string "I heard that my dad\n"
	.string "was looking for you.$"

Pearlwood_MaysHouse2F_Intro2_MalePC::
# 54 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	.string "I get it now!\n"
	.string "I bet it's time for you to finally\l"
	.string "get your own Pokémon!\l"
	.string "I hope you pick a cute one!\p"
	.string "Dad's probably waiting for you\n"
	.string "in his lab to the northwest.$"

Pearlwood_MaysHouse2F_Intro2_FemalePC::
# 63 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	.string "I get it now!\n"
	.string "I bet it's time for you to finally\l"
	.string "get your own Pokémon!\l"
	.string "I hope you pick a cool one!\p"
	.string "Dad's probably waiting for you\n"
	.string "in his lab to the northwest.$"

Pearlwood_MaysHouse2F_Gossip::
# 72 "data/maps/Pearlwood_MaysHouse2F/scripts.pory"
	.string "{RIVAL}: Sorry, but I REALLY need to\n"
	.string "finish writing this e-mail.$"
