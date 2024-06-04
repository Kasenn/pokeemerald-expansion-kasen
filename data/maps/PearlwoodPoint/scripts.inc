PearlwoodPoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_Visited
	.byte 0


Pearlwood_Visited::
	setflag FLAG_VISITED_PEARLWOOD_POINT
	return


Pearlwood_Point_NoPokemon1::
	goto_if_set FLAG_UNUSED_STARTER_GET, Pearlwood_Point_NoPokemon1_1
	lockall
	applymovement 2, Pearlwood_Point_Face
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox Pearlwood_Point_WatchOut, MSGBOX_NPC
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Pearlwood_Point_PlayerFace1
	waitmovement 0
	msgbox Pearlwood_Point_WildPokemon
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	releaseall
	return

Pearlwood_Point_NoPokemon1_1:
	releaseall
	end


Pearlwood_Point_NoPokemon2::
	goto_if_set FLAG_UNUSED_STARTER_GET, Pearlwood_Point_NoPokemon2_1
	lockall
	applymovement 2, Pearlwood_Point_Face
	waitmovement 0
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox Pearlwood_Point_WatchOut, MSGBOX_NPC
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
	msgbox Pearlwood_Point_WildPokemon
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	releaseall
	return

Pearlwood_Point_NoPokemon2_1:
	releaseall
	end


Pearlwood_Point_Face:
	face_player
	step_end

Pearlwood_Point_PlayerFace1:
	face_up
	step_end

Pearlwood_Point_StopGirlTalk::
	lockall
	faceplayer
	msgbox Pearlwood_Point_Dangerous
	waitmessage
	applymovement 2, Pearlwood_Point_Face2
	waitmovement 0
	release
	end


Pearlwood_Point_Face2:
	face_down
	step_end

Pearlwood_BrotherFightRight::
	lockall
	msgbox Pearlwood_BrotherFightRight_Text_0
	waitmessage
	closemessage
	delay 30
	applymovement 3, BrotherRightMove
	waitmovement 0
	msgbox BrotherFightIntro
	waitmessage
	closemessage
	call Pearlwood_BrotherCombat
	waitmessage
	releaseall
	return


BrotherRightMove:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Pearlwood_BrotherFightLeft::
	lockall
	msgbox Pearlwood_BrotherFightRight_Text_0
	waitmessage
	closemessage
	delay 30
	applymovement 3, BrotherLeftMove
	waitmovement 0
	msgbox BrotherFightIntro
	waitmessage
	closemessage
	call Pearlwood_BrotherCombat
	releaseall
	return


BrotherLeftMove:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Pearlwood_BrotherCombat::
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
	goto_if_set FLAG_UNUSED_PICKEDROWLET, Pearlwood_BrotherCombat_2
Pearlwood_BrotherCombat_1:
	goto_if_set FLAG_UNUSED_PICKEDTORCHIC, Pearlwood_BrotherCombat_5
Pearlwood_BrotherCombat_4:
	goto_if_set FLAG_UNUSED_PICKEDPIPLUP, Pearlwood_BrotherCombat_7
	return

Pearlwood_BrotherCombat_2:
	call PearlwoodBrotherRowlet
	goto Pearlwood_BrotherCombat_1

Pearlwood_BrotherCombat_5:
	call PearlwoodBrotherTorchic
	goto Pearlwood_BrotherCombat_4

Pearlwood_BrotherCombat_7:
	call PearlwoodBrotherPiplup
	return


PearlwoodBrotherRowlet::
	trainerbattle_single TRAINER_BROTHER1_ROWLET, Pearlwood_Brother_Intro, Pearlwood_Brother_Outro, PearlwoodWon
	waitmessage
	end


PearlwoodBrotherTorchic::
	trainerbattle_single TRAINER_BROTHER1_TORCHIC, Pearlwood_Brother_Intro, Pearlwood_Brother_Outro, PearlwoodWon
	waitmessage
	end


PearlwoodBrotherPiplup::
	trainerbattle_single TRAINER_BROTHER1_PIPLUP, Pearlwood_Brother_Intro, Pearlwood_Brother_Outro, PearlwoodWon
	waitmessage
	end


PearlwoodWon::
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PearlwoodWon_2
	msgbox PlayerHouse1F_Apology
PearlwoodWon_1:
	waitmessage
	closemessage
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	special HealPlayerParty
	applymovement 3, PearlwoodBrotherLeave
	waitmovement 0
	removeobject 3
	setflag FLAG_UNUSED_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 7
	releaseall
	return

PearlwoodWon_2:
	msgbox PearlwoodBrotherPrize
	goto PearlwoodWon_1


PearlwoodBrotherLeave:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Pearlwood_Point_FatMan::
	lockall
	faceplayer
	msgbox Pearlwood_Point_FatMan_Text_0
	waitmessage
	closemessage
	release
	end


Pearlwood_Point_LittleGirl::
	lockall
	faceplayer
	msgbox Pearlwood_Point_LittleGirl_Text_0
	waitmessage
	closemessage
	applymovement 4, Pearlwood_Point_LittleGirlface
	waitmovement 0
	release
	end


Pearlwood_Point_LittleGirlface:
	face_up
	step_end

Pearlwood_Sign::
	lockall
	msgbox Pearlwood_Sign_Text_0
	waitmessage
	closemessage
	release
	end


Pearlwood_Antidote::
	finditem ITEM_ANTIDOTE
	return


Pearlwood_BrotherFightRight_Text_0:
	.string "???: {PLAYER}!$"

Pearlwood_Point_FatMan_Text_0:
	.string "The weather is so calm here despite\nthe close proximity to the sea.\pMust be all the trees blocking\nthe sea breeze.$"

Pearlwood_Point_LittleGirl_Text_0:
	.string "Shh!\pI think I hear the cry of a wild\nPokémon coming from over there.$"

Pearlwood_Sign_Text_0:
	.string "PEARLWOOD POINT\n“A town of new beginnings.”\p{LEFT_ARROW} Prof. Birch's Pokémon lab\n{RIGHT_ARROW} Route 1$"

Pearlwood_Point_Dangerous::
	.string "It's dangerous to leave the town\nwithout your own Pokémon.$"

Pearlwood_Point_WatchOut::
	.string "Wait!$"

Pearlwood_Point_WildPokemon::
	.string "There are a lot of wild\nPokémon living outside the town!\pIt's dangerous to leave the town\nwithout your own Pokémon.$"

BrotherFightIntro::
	.string "{BROTHER}: I see you got your Pokémon\nfrom the professor.\pWell? What're we waiting for?$"

Pearlwood_Brother_Intro::
	.string "Let's see if it's any good\n"
	.string "in a Pokémon battle!\p"
	.string "Oh, don't worry. I won't use the same\n"
	.string "Pokémon I used during my fight against\l"
	.string "the Kanto Pokémon League.\p"
	.string "That would be simply unfair.\p"
	.string "However, don't expect any mercy from\n"
	.string "me either!$"

Pearlwood_Brother_Outro::
	.string "Of course you picked THAT one!$"

Pearlwood_Brother_PostBattle::
	.string "NO NEED FOR THIS$"

PearlwoodBrotherPrize::
	.string "Hmph… I guess I should not\nhave underestimated you.\pAnyway, have you thought about what\nyou're going to do next?\pIf you're up for it, we should totally\nsee which of us is the better trainer\lby taking on the Pokémon Gym Challenge!\pOur neighbor {RIVAL} just set out this\nmorning so we better get moving or\lwe'll fall behind!\pDon't know about you but I'm not content\nwith a second place.\pCatch ya later!$"
