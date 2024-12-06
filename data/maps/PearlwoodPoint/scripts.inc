PearlwoodPoint_MapScripts::
# 2 "data/maps/PearlwoodPoint/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pearlwood_Visited
	.byte 0


Pearlwood_Visited::
# 10 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_VISITED_PEARLWOOD_POINT
# 11 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_PKMN_OBTAINED
	goto_if_ne Pearlwood_Visited_1
	return

Pearlwood_Visited_1:
# 12 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_TEMP_1
	return


Pearlwood_Point_NoPokemon1::
# 17 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_1, 1
# 18 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_Point_NoPokemon
	return


Pearlwood_Point_NoPokemon2::
# 22 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_1, 2
# 23 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_Point_NoPokemon
	return


Pearlwood_Point_NoPokemon::
# 27 "data/maps/PearlwoodPoint/scripts.pory"
	lock
# 28 "data/maps/PearlwoodPoint/scripts.pory"
	turnobject 2, DIR_SOUTH
# 29 "data/maps/PearlwoodPoint/scripts.pory"
	playse SE_PIN
# 30 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 31 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
# 32 "data/maps/PearlwoodPoint/scripts.pory"
	delay 48
# 33 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_WatchOut
# 34 "data/maps/PearlwoodPoint/scripts.pory"
	closemessage
# 35 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq Pearlwood_Point_NoPokemon_2
# 39 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 40 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
Pearlwood_Point_NoPokemon_1:
# 42 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_WildPokemon
# 43 "data/maps/PearlwoodPoint/scripts.pory"
	closemessage
# 44 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
# 45 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
# 46 "data/maps/PearlwoodPoint/scripts.pory"
	release
	return

Pearlwood_Point_NoPokemon_2:
# 36 "data/maps/PearlwoodPoint/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	goto Pearlwood_Point_NoPokemon_1


Pearlwood_Point_StopGirlTalk::
# 59 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_Dangerous, MSGBOX_NPC
# 60 "data/maps/PearlwoodPoint/scripts.pory"
	turnobject 2, DIR_SOUTH
	return


Pearlwood_BrotherFightRight::
# 68 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_2, 1
# 69 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_BrotherFightMain
	return


Pearlwood_BrotherFightLeft::
# 72 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_TEMP_2, 2
# 73 "data/maps/PearlwoodPoint/scripts.pory"
	goto Pearlwood_BrotherFightMain
	return


Pearlwood_BrotherFightMain::
# 77 "data/maps/PearlwoodPoint/scripts.pory"
	lock
# 78 "data/maps/PearlwoodPoint/scripts.pory"
	safefollow
# 79 "data/maps/PearlwoodPoint/scripts.pory"
	playse SE_PIN
# 80 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_BrotherFightMain_Text_0
# 81 "data/maps/PearlwoodPoint/scripts.pory"
	closemessage
# 82 "data/maps/PearlwoodPoint/scripts.pory"
	delay 30
# 83 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_TEMP_2, 1
	goto_if_eq Pearlwood_BrotherFightMain_2
# 87 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement 3, Walk1Left
# 88 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
# 89 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement 3, Walk5Up
Pearlwood_BrotherFightMain_1:
# 91 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
# 92 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox BrotherFightIntro
# 93 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_CONTINUE_AFTER_WHITEOUT
# 94 "data/maps/PearlwoodPoint/scripts.pory"
	playbgm MUS_ENCOUNTER_MALE, FALSE
# 95 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Brother_Intro
# 96 "data/maps/PearlwoodPoint/scripts.pory"
	setflag FLAG_HEAL_AFTER_BATTLE
# 97 "data/maps/PearlwoodPoint/scripts.pory"
	switch VAR_STARTER_MON
# 98 "data/maps/PearlwoodPoint/scripts.pory"
	case 0, Pearlwood_BrotherFightMain_7
# 100 "data/maps/PearlwoodPoint/scripts.pory"
	case 1, Pearlwood_BrotherFightMain_8
# 102 "data/maps/PearlwoodPoint/scripts.pory"
	case 2, Pearlwood_BrotherFightMain_9
Pearlwood_BrotherFightMain_5:
# 105 "data/maps/PearlwoodPoint/scripts.pory"
	goto PearlwoodWon
	return

Pearlwood_BrotherFightMain_2:
# 84 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement 3, Walk5Up
	goto Pearlwood_BrotherFightMain_1

Pearlwood_BrotherFightMain_7:
# 99 "data/maps/PearlwoodPoint/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER1_ROWLET, Pearlwood_Brother_Outro
	goto Pearlwood_BrotherFightMain_5

Pearlwood_BrotherFightMain_8:
# 101 "data/maps/PearlwoodPoint/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER1_TORCHIC, Pearlwood_Brother_Outro
	goto Pearlwood_BrotherFightMain_5

Pearlwood_BrotherFightMain_9:
# 103 "data/maps/PearlwoodPoint/scripts.pory"
	trainerbattle_no_intro TRAINER_BROTHER1_PIPLUP, Pearlwood_Brother_Outro
	goto Pearlwood_BrotherFightMain_5


PearlwoodWon::
# 131 "data/maps/PearlwoodPoint/scripts.pory"
	safefollow
# 132 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq PearlwoodWon_2
	checkplayergender
# 0 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PearlwoodWon_10
# 146 "data/maps/PearlwoodPoint/scripts.pory"
	bufferstring STR_VAR_1, PearlwoodWon_Text_1
PearlwoodWon_9:
# 148 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox PlayerHouse1F_Apology
PearlwoodWon_1:
# 150 "data/maps/PearlwoodPoint/scripts.pory"
	closemessage
# 151 "data/maps/PearlwoodPoint/scripts.pory"
	playse SE_PIN
# 152 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement 3, ExclamationMark
# 153 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
# 154 "data/maps/PearlwoodPoint/scripts.pory"
	delay 48
# 155 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox BrotherWatch
# 156 "data/maps/PearlwoodPoint/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 157 "data/maps/PearlwoodPoint/scripts.pory"
	message ObtainedWatch
# 158 "data/maps/PearlwoodPoint/scripts.pory"
	waitfanfare
# 159 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox ViewClock
# 160 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox BrotherGoodbye
# 161 "data/maps/PearlwoodPoint/scripts.pory"
	closemessage
# 162 "data/maps/PearlwoodPoint/scripts.pory"
	clearflag FLAG_CONTINUE_AFTER_WHITEOUT
# 163 "data/maps/PearlwoodPoint/scripts.pory"
	applymovement 3, Walk5Down
# 164 "data/maps/PearlwoodPoint/scripts.pory"
	waitmovement 0
# 165 "data/maps/PearlwoodPoint/scripts.pory"
	removeobject 3
# 166 "data/maps/PearlwoodPoint/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_BROTHER_FOUGHT
# 167 "data/maps/PearlwoodPoint/scripts.pory"
	clearflag FLAG_HEAL_AFTER_BATTLE
# 168 "data/maps/PearlwoodPoint/scripts.pory"
	delay 30
# 169 "data/maps/PearlwoodPoint/scripts.pory"
	release
	return

PearlwoodWon_2:
	checkplayergender
# 0 "data/maps/PearlwoodPoint/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq PearlwoodWon_6
# 137 "data/maps/PearlwoodPoint/scripts.pory"
	bufferstring STR_VAR_1, PearlwoodWon_Text_1
PearlwoodWon_5:
# 139 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox PearlwoodBrotherPrize
	goto PearlwoodWon_1

PearlwoodWon_6:
# 134 "data/maps/PearlwoodPoint/scripts.pory"
	bufferstring STR_VAR_1, PearlwoodWon_Text_0
	goto PearlwoodWon_5

PearlwoodWon_10:
# 143 "data/maps/PearlwoodPoint/scripts.pory"
	bufferstring STR_VAR_1, PearlwoodWon_Text_0
	goto PearlwoodWon_9


Pearlwood_Point_FatMan::
# 228 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_FatMan_Text, MSGBOX_NPC
	return


Pearlwood_Point_LittleGirl::
# 238 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Point_LittleGirl_Text, MSGBOX_NPC
# 239 "data/maps/PearlwoodPoint/scripts.pory"
	turnobject 4, DIR_NORTH
	return


Pearlwood_Sign::
# 248 "data/maps/PearlwoodPoint/scripts.pory"
	msgbox Pearlwood_Sign_Text, MSGBOX_SIGN
	return


Pearlwood_BrotherFightMain_Text_0:
# 80 "data/maps/PearlwoodPoint/scripts.pory"
	.string "???: {PLAYER}!$"

PearlwoodWon_Text_0:
# 134 "data/maps/PearlwoodPoint/scripts.pory"
	.string "she$"

PearlwoodWon_Text_1:
# 137 "data/maps/PearlwoodPoint/scripts.pory"
	.string "he$"

Pearlwood_Point_WatchOut::
# 48 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Wait!$"

Pearlwood_Point_WildPokemon::
# 51 "data/maps/PearlwoodPoint/scripts.pory"
	.string "There are a lot of wild\n"
	.string "Pokémon living outside the town!\p"
	.string "It's dangerous to leave the town\n"
	.string "without your own Pokémon.$"

Pearlwood_Point_Dangerous::
# 62 "data/maps/PearlwoodPoint/scripts.pory"
	.string "It's dangerous to leave the town\n"
	.string "without your own Pokémon.$"

BrotherFightIntro::
# 108 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{BROTHER}: I see you got your Pokémon\n"
	.string "from the professor.\p"
	.string "Well? What're we waiting for?$"

Pearlwood_Brother_Intro::
# 114 "data/maps/PearlwoodPoint/scripts.pory"
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
# 126 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Of course you picked THAT one!$"

BrotherWatch::
# 172 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Oh!\p"
	.string "Before I leave, there's something\n"
	.string "I meant to give you.$"

ObtainedWatch::
# 177 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{PLAYER} obtained a wristwatch!$"

ViewClock::
# 180 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{COLOR RED}{SHADOW LIGHT_RED}You can now view the time by\n"
	.string "pressing the START button!$"

BrotherGoodbye::
# 184 "data/maps/PearlwoodPoint/scripts.pory"
	.string "{BROTHER}: Catch ya later!$"

PlayerHouse1F_Apology::
# 188 "data/maps/PearlwoodPoint/scripts.pory"
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
	.string "content with a second place.$"

PearlwoodBrotherPrize::
# 209 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Hmph… I guess I should not\n"
	.string "have underestimated you.\p"
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
	.string "content with a second place.$"

Pearlwood_Point_FatMan_Text::
# 230 "data/maps/PearlwoodPoint/scripts.pory"
	.string "The weather is so calm here despite\n"
	.string "the close proximity to the sea.\p"
	.string "Must be all the trees blocking\n"
	.string "the sea breeze.$"

Pearlwood_Point_LittleGirl_Text::
# 241 "data/maps/PearlwoodPoint/scripts.pory"
	.string "Shh!\p"
	.string "I think I hear the cry of a wild\n"
	.string "Pokémon coming from over there.$"

Pearlwood_Sign_Text::
# 250 "data/maps/PearlwoodPoint/scripts.pory"
	.string "PEARLWOOD POINT\n"
	.string "“A town of new beginnings.”\p"
	.string "{LEFT_ARROW} Prof. Birch's Pokémon lab\n"
	.string "{RIGHT_ARROW} Route 1$"
