PokemonWorldTournament_MapScripts::
	.byte 0


BP_Mart::
	lock
	faceplayer
	message BP_Mart_Greetings
	waitmessage
	bpmart BP_Mart_Items, TRUE
	compare VAR_RESULT, FALSE
	goto_if_eq BP_Mart_2
	msgbox gText_PleaseComeAgain
BP_Mart_1:
	release
	return

BP_Mart_2:
	msgbox PleaseSaveSomeBp
	goto BP_Mart_1


	.align 2
BP_Mart_Items:
	.2byte MOVE_POUND
	.2byte MOVE_KARATE_CHOP
	.2byte MOVE_DOUBLE_SLAP
	.2byte MOVE_COMET_PUNCH
	.2byte MOVE_MEGA_PUNCH
	.2byte MOVE_PAY_DAY
	.2byte MOVE_FIRE_PUNCH
	.2byte MOVE_ICE_PUNCH
	.2byte MOVE_THUNDER_PUNCH
	.2byte MOVE_SCRATCH
	.2byte MOVE_VISE_GRIP
	.2byte MOVE_VICE_GRIP
	.2byte MOVE_GUILLOTINE
	.2byte MOVE_RAZOR_WIND
	.2byte MOVE_SWORDS_DANCE
	.2byte MOVE_CUT
	.2byte MOVE_GUST
	.2byte MOVE_WING_ATTACK
	.2byte MOVE_WHIRLWIND
	.2byte MOVE_FLY
	.2byte MOVE_BIND
	.2byte MOVE_SLAM
	.2byte MOVE_VINE_WHIP
	.2byte MOVE_STOMP
	.2byte MOVE_DOUBLE_KICK
	.2byte MOVE_MEGA_KICK
	.2byte MOVE_JUMP_KICK
	.2byte MOVE_ROLLING_KICK
	.2byte MOVE_SAND_ATTACK
	.2byte MOVE_HEADBUTT
	.2byte MOVE_HORN_ATTACK
	.2byte MOVE_FURY_ATTACK
	.2byte MOVE_HORN_DRILL
	.2byte MOVE_TACKLE
	.2byte MOVE_BODY_SLAM
	.2byte MOVE_WRAP
	.2byte MOVE_TAKE_DOWN
	.2byte MOVE_THRASH
	.2byte MOVE_DOUBLE_EDGE
	.2byte MOVE_TAIL_WHIP
	.2byte MOVE_POISON_STING
	.2byte MOVE_TWINEEDLE
	.2byte MOVE_PIN_MISSILE
	.2byte MOVE_LEER
	.2byte MOVE_BITE
	.2byte MOVE_GROWL
	.2byte MOVE_ROAR
	.2byte MOVE_SING
	.2byte MOVE_SUPERSONIC
	.2byte MOVE_SONIC_BOOM
	.2byte MOVE_DISABLE
	.2byte MOVE_ACID
	.2byte MOVE_EMBER
	.2byte MOVE_FLAMETHROWER
	.2byte MOVE_MIST
	.2byte MOVE_WATER_GUN
	.2byte MOVE_HYDRO_PUMP
	.2byte MOVE_SURF
	.2byte MOVE_ICE_BEAM
	.2byte MOVE_BLIZZARD
	.2byte MOVE_PSYBEAM
	.2byte MOVE_BUBBLE_BEAM
	.2byte MOVE_AURORA_BEAM
	.2byte MOVE_HYPER_BEAM
	.2byte MOVE_PECK
	.2byte MOVE_DRILL_PECK
	.2byte MOVE_SUBMISSION
	.2byte MOVE_LOW_KICK
	.2byte MOVE_COUNTER
	.2byte MOVE_SEISMIC_TOSS
	.2byte MOVE_STRENGTH
	.2byte MOVE_ABSORB
	.2byte MOVE_MEGA_DRAIN
	.2byte MOVE_LEECH_SEED
	.2byte MOVE_GROWTH
	.2byte MOVE_RAZOR_LEAF
	.2byte MOVE_SOLAR_BEAM
	.2byte MOVE_POISON_POWDER
	.2byte MOVE_STUN_SPORE
	.2byte MOVE_SLEEP_POWDER
	.2byte MOVE_PETAL_DANCE
	.2byte MOVE_STRING_SHOT
	.2byte MOVE_DRAGON_RAGE
	.2byte MOVE_FIRE_SPIN
	.2byte MOVE_THUNDER_SHOCK
	.2byte MOVE_THUNDERBOLT
	.2byte MOVE_THUNDER_WAVE
	.2byte MOVE_THUNDER
	.2byte MOVE_ROCK_THROW
	.2byte MOVE_EARTHQUAKE
	.2byte MOVE_FISSURE
	.2byte MOVE_DIG
	.2byte MOVE_TOXIC
	.2byte MOVE_CONFUSION
	.2byte MOVE_PSYCHIC
	.2byte MOVE_HYPNOSIS
	.2byte MOVE_MEDITATE
	.2byte MOVE_AGILITY
	.2byte MOVE_QUICK_ATTACK
	.2byte MOVE_RAGE
	.2byte MOVE_NONE
	.2byte ITEM_NONE

TestDir::
	lock
	switch VAR_FACING
	case DIR_NORTH, TestDir_3
	case DIR_WEST, TestDir_4
	case DIR_EAST, TestDir_5
	case DIR_SOUTH, TestDir_6
TestDir_1:
	release
	return

TestDir_3:
	msgbox TestDir_Text_0
	goto TestDir_1

TestDir_4:
	msgbox TestDir_Text_1
	goto TestDir_1

TestDir_5:
	msgbox TestDir_Text_2
	goto TestDir_1

TestDir_6:
	msgbox TestDir_Text_3
	goto TestDir_1


DebugGuy::
	lock
	faceplayer
	msgbox EnableMoveInfo, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DebugGuy_2
	setflag FLAG_TEMP_1
	msgbox EnableContestInfo, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq DebugGuy_5
	setflag FLAG_TEMP_2
	msgbox EverythingEnabled
	release
	return

DebugGuy_2:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	msgbox BasicMenu
	release
	end

DebugGuy_5:
	clearflag FLAG_TEMP_2
	msgbox MoveInfoEnabled
	release
	end


TestDir_Text_0:
	.string "facing north$"

TestDir_Text_1:
	.string "facing west$"

TestDir_Text_2:
	.string "facing east$"

TestDir_Text_3:
	.string "facing south$"

BP_Mart_Greetings::
	.string "Hello!\p"
	.string "Welcome to the\n"
	.string "Exchange Service Corner!\p"
	.string "Would you like to trade in your BP\n"
	.string "to teach your Pokémon new moves?$"

PleaseSaveSomeBp::
	.string "Please save some BP\n"
	.string "and come see us again.$"

EnableMoveInfo::
	.string "Enable move info window?$"

BasicMenu::
	.string "Move Tutor set to default.$"

EnableContestInfo::
	.string "Enable contest move info?$"

MoveInfoEnabled::
	.string "Move Tutor set to show\n"
	.string "basic move info.$"

EverythingEnabled::
	.string "Move Tutor set to show\n"
	.string "all move info.$"
