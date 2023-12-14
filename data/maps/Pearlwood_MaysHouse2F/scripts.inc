Pearlwood_MaysHouse2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_MaysHouse2F_SetRival
	.byte 0


Pearlwood_MaysHouse2F_Rival::
	lockall
	goto_if_unset FLAG_UNUSED_RIVAL_INTRO, Pearlwood_MaysHouse2F_Rival_2
	msgbox Pearlwood_MaysHouse2F_Gossip
Pearlwood_MaysHouse2F_Rival_1:
	applymovement 3, Pearlwood_MaysHouse2F_Rival_face2
	waitmovement 0
	release
	end

Pearlwood_MaysHouse2F_Rival_2:
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 3, Pearlwood_MaysHouse2F_Rival_face
	waitmovement 0
	delay 40
	msgbox Pearlwood_MaysHouse2F_Intro
	waitmessage
	closemessage
	delay 20
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	setflag FLAG_UNUSED_RIVAL_INTRO
	checkplayergender
	compare VAR_RESULT, 0
	goto_if_eq Pearlwood_MaysHouse2F_Rival_6
Pearlwood_MaysHouse2F_Rival_5:
	compare VAR_RESULT, 1
	goto_if_eq Pearlwood_MaysHouse2F_Rival_8
	goto Pearlwood_MaysHouse2F_Rival_1

Pearlwood_MaysHouse2F_Rival_6:
	msgbox Pearlwood_MaysHouse2F_Intro2_MalePC
	waitmessage
	closemessage
	goto Pearlwood_MaysHouse2F_Rival_5

Pearlwood_MaysHouse2F_Rival_8:
	msgbox Pearlwood_MaysHouse2F_Intro2_FemalePC
	waitmessage
	closemessage
	goto Pearlwood_MaysHouse2F_Rival_1


Pearlwood_MaysHouse2F_Rival_face:
	face_player
	step_end

Pearlwood_MaysHouse2F_Rival_face2:
	face_up
	step_end

Pearlwood_MaysHouse2F_SetRival::
	call Common_EventScript_SetupRivalGfxId
	return


Pearlwood_MaysHouse2F_Intro::
	.string "{RIVAL}: Oh, hi {PLAYER}!\pSorry, I'm a bit busy answering to\nsome e-mail.\pI heard that my dad\nwas looking for you.$"

Pearlwood_MaysHouse2F_Intro2_MalePC::
	.string "I get it now!\nI bet it's time for you to finally\lget your own Pokémon!\lI hope you pick a cute one!\pDad's probably waiting for you\nin his lab to the northwest.$"

Pearlwood_MaysHouse2F_Intro2_FemalePC::
	.string "I get it now!\nI bet it's time for you to finally\lget your own Pokémon!\lI hope you pick a cool one!\pDad's probably waiting for you\nin his lab to the northwest.$"

Pearlwood_MaysHouse2F_Gossip::
	.string "{RIVAL}: Sorry, but I REALLY need to\nfinish writing this e-mail.$"
