PearlwoodPoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_Visited
	.byte 0


Pearlwood_Visited::
	setflag FLAG_VISITED_PEARLWOOD_POINT
	return


Pearlwood_Point_NoPokemon1::
	setvar VAR_TEMP_1, 1
	goto Pearlwood_Point_NoPokemon
	return


Pearlwood_Point_NoPokemon2::
	setvar VAR_TEMP_1, 2
	goto Pearlwood_Point_NoPokemon
	return


Pearlwood_Point_NoPokemon::
	lock
	turnobject 2, DIR_SOUTH
	playse SE_PIN
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox Pearlwood_Point_WatchOut
	closemessage
	compare VAR_TEMP_1, 1
	goto_if_eq Pearlwood_Point_NoPokemon_2
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
	waitmovement 0
Pearlwood_Point_NoPokemon_1:
	msgbox Pearlwood_Point_WildPokemon
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	waitmovement 0
	release
	return

Pearlwood_Point_NoPokemon_2:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto Pearlwood_Point_NoPokemon_1


Pearlwood_Point_StopGirlTalk::
	msgbox Pearlwood_Point_Dangerous, MSGBOX_NPC
	turnobject 2, DIR_SOUTH
	return


Pearlwood_BrotherFightRight::
	setvar VAR_TEMP_2, 1
	goto Pearlwood_BrotherFightMain
	return


Pearlwood_BrotherFightLeft::
	setvar VAR_TEMP_2, 2
	goto Pearlwood_BrotherFightMain
	return


Pearlwood_BrotherFightMain::
	lock
	safefollow
	playse SE_PIN
	msgbox Pearlwood_BrotherFightMain_Text_0
	closemessage
	delay 30
	compare VAR_TEMP_2, 1
	goto_if_eq Pearlwood_BrotherFightMain_2
	applymovement 3, Walk1Left
	waitmovement 0
	applymovement 3, Walk5Up
Pearlwood_BrotherFightMain_1:
	waitmovement 0
	msgbox BrotherFightIntro
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
	playbgm MUS_ENCOUNTER_MALE, FALSE
	msgbox Pearlwood_Brother_Intro
	switch VAR_STARTER_MON
	case 0, Pearlwood_BrotherFightMain_7
	case 1, Pearlwood_BrotherFightMain_8
	case 2, Pearlwood_BrotherFightMain_9
Pearlwood_BrotherFightMain_5:
	goto PearlwoodWon
	return

Pearlwood_BrotherFightMain_2:
	applymovement 3, Walk5Up
	goto Pearlwood_BrotherFightMain_1

Pearlwood_BrotherFightMain_7:
	trainerbattle_no_intro TRAINER_BROTHER1_ROWLET, Pearlwood_Brother_Outro
	goto Pearlwood_BrotherFightMain_5

Pearlwood_BrotherFightMain_8:
	trainerbattle_no_intro TRAINER_BROTHER1_TORCHIC, Pearlwood_Brother_Outro
	goto Pearlwood_BrotherFightMain_5

Pearlwood_BrotherFightMain_9:
	trainerbattle_no_intro TRAINER_BROTHER1_PIPLUP, Pearlwood_Brother_Outro
	goto Pearlwood_BrotherFightMain_5


PearlwoodWon::
	safefollow
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PearlwoodWon_2
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq PearlwoodWon_6
	bufferstring STR_VAR_1, PearlwoodWon_Text_1
PearlwoodWon_5:
	msgbox PlayerHouse1F_Apology
PearlwoodWon_1:
	closemessage
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
	applymovement 3, Walk5Down
	waitmovement 0
	removeobject 3
	setvar VAR_PEARLWOOD_TOWN_STATE, 6
	delay 30
	safefollow
	release
	return

PearlwoodWon_2:
	msgbox PearlwoodBrotherPrize
	goto PearlwoodWon_1

PearlwoodWon_6:
	bufferstring STR_VAR_1, PearlwoodWon_Text_0
	goto PearlwoodWon_5


Pearlwood_Point_FatMan::
	msgbox Pearlwood_Point_FatMan_Text, MSGBOX_NPC
	return


Pearlwood_Point_LittleGirl::
	msgbox Pearlwood_Point_LittleGirl_Text, MSGBOX_NPC
	turnobject 4, DIR_NORTH
	return


Pearlwood_Sign::
	msgbox Pearlwood_Sign_Text, MSGBOX_SIGN
	return


Pearlwood_BrotherFightMain_Text_0:
	.string "???: {PLAYER}!$"

PearlwoodWon_Text_0:
	.string "she$"

PearlwoodWon_Text_1:
	.string "he$"

Pearlwood_Point_WatchOut::
	.string "Wait!$"

Pearlwood_Point_WildPokemon::
	.string "There are a lot of wild\n"
	.string "Pokémon living outside the town!\p"
	.string "It's dangerous to leave the town\n"
	.string "without your own Pokémon.$"

Pearlwood_Point_Dangerous::
	.string "It's dangerous to leave the town\n"
	.string "without your own Pokémon.$"

BrotherFightIntro::
	.string "{BROTHER}: I see you got your Pokémon\n"
	.string "from the professor.\p"
	.string "Well? What're we waiting for?$"

Pearlwood_Brother_Intro::
	.string "Let's see if it's any good\n"
	.string "in a Pokémon battle!\p"
	.string "Oh, don't worry.\p"
	.string "I won't use the same Pokémon I\n"
	.string "used during my fight against\l"
	.string "the Kanto Pokémon League.\p"
	.string "That would be simply too unfair.\p"
	.string "However, don't expect any mercy from\n"
	.string "me either!$"

Pearlwood_Brother_Outro::
	.string "Of course you picked THAT one!$"

PlayerHouse1F_Apology::
	.string "{BROTHER}: Sorry about that.\n"
	.string "I knew that with my experience it was\l"
	.string "going to be an unfair fight.\p"
	.string "I hope you don't take that loss\n"
	.string "too seriously…\p"
	.string "Anyway, have you thought about\n"
	.string "what you're going to do next?\p"
	.string "I talked with our neighbor {RIVAL}\n"
	.string "and {STR_VAR_1} mentioned {STR_VAR_1} was going to\l"
	.string "take on the Pokémon Gym Challenge.\p"
	.string "We should take part on the challenge\n"
	.string "as well and see which of us three\l"
	.string "is the best trainer!\p"
	.string "{RIVAL} set out just a few moments\n"
	.string "ago, so we better get moving as well\l"
	.string "or we'll fall behind!\p"
	.string "Don't know about you but I'm not\n"
	.string "content with a second place.\p"
	.string "Catch ya later!$"

PearlwoodBrotherPrize::
	.string "Hmph… I guess I should not\n"
	.string "have underestimated you.\p"
	.string "Anyway, have you thought about what\n"
	.string "you're going to do next?\p"
	.string "If you're up for it, we should totally\n"
	.string "see which of us is the better trainer\l"
	.string "by taking on the Pokémon Gym Challenge!\p"
	.string "Our neighbor {RIVAL} just set out this\n"
	.string "morning so we better get moving or\l"
	.string "we'll fall behind!\p"
	.string "Don't know about you but I'm not\n"
	.string "content with a second place.\p"
	.string "Catch ya later!$"

Pearlwood_Point_FatMan_Text::
	.string "The weather is so calm here despite\n"
	.string "the close proximity to the sea.\p"
	.string "Must be all the trees blocking\n"
	.string "the sea breeze.$"

Pearlwood_Point_LittleGirl_Text::
	.string "Shh!\p"
	.string "I think I hear the cry of a wild\n"
	.string "Pokémon coming from over there.$"

Pearlwood_Sign_Text::
	.string "PEARLWOOD POINT\n"
	.string "“A town of new beginnings.”\p"
	.string "{LEFT_ARROW} Prof. Birch's Pokémon lab\n"
	.string "{RIGHT_ARROW} Route 1$"
