WipCity1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WipCity1_Visited
	.byte 0


WipCity1_Visited::
	setflag FLAG_VISITED_WIP_CITY1
	end


AldeleafCity_BirdTrainer::
	msgbox AldeleafCity_BirdTrainer_Text, MSGBOX_NPC
	end


Aldeleaf_Sudowoodo::
	lockall
	goto_if_unset FLAG_BADGE02_GET, Aldeleaf_Sudowoodo_NoCut
	checkpartymove MOVE_CUT
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Aldeleaf_Sudowoodo_1
	setfieldeffectargument 0, VAR_RESULT
	bufferpartymonnick STR_VAR_1, VAR_RESULT
	buffermovename STR_VAR_2, MOVE_CUT
	msgbox Aldeleaf_WantToCut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
	closemessage
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
	waitstate
	goto Aldeleaf_Sudowoodo_CutDown
	end

Aldeleaf_Sudowoodo_1:
	goto Aldeleaf_Sudowoodo_NoCut
	return


Aldeleaf_Sudowoodo_NoCut::
	lock
	faceplayer
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement 1, Aldeleaf_SudowoodoShake
	waitmovement 1
	release
	end


Aldeleaf_SudowoodoShake:
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	delay_8
	face_right
	delay_8
	face_down
	delay_8
	face_left
	delay_8
	face_down
	step_end

Aldeleaf_Sudowoodo_CutDown::
	waitse
	playse SE_SUDOWOODO_SHAKE
	applymovement 1, Aldeleaf_SudowoodoShake
	waitmovement 1
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SUDOWOODO, 25
	dowildbattle
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_DEFEATED_SUDOWOODO
	release
	end


Aldeleaf_TrainerNearSudowoodo::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SUDOWOODO, Aldeleaf_TrainerNearSudowoodo_2
	msgbox Aldeleaf_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
Aldeleaf_TrainerNearSudowoodo_1:
	release
	end

Aldeleaf_TrainerNearSudowoodo_2:
	msgbox Aldeleaf_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
	goto Aldeleaf_TrainerNearSudowoodo_1


AldeleafCity_BirdTrainer_Text::
	.string "I wanted to take on the gym but I don't\n"
	.string "think my bird Pokémon stand a chance…$"

Aldeleaf_WantToCut::
	.string "There's a weird tree blocking\n"
	.string "the way here.\p"
	.string "Would you like to cut it?$"

Aldeleaf_Text_OnceAnOddTreePastHere::
	.string "Excuse me, young one.\n"
	.string "Have you a good memory?\p"
	.string "I have this feeling there once was\n"
	.string "an odd tree past here.$"

Aldeleaf_OddTreeHereSeemsToWiggle::
	.string "Excuse me, young one.\n"
	.string "Have you good eyesight?\p"
	.string "There is an odd tree past here, and to\n"
	.string "my tired eyes it seems to wiggle.$"
