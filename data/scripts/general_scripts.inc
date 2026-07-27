DebugScript1::
# 9 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_1, VAR_ROCKPLATE_1
# 10 "data/scripts/general_scripts.pory"
	buffernumberstring STR_VAR_2, VAR_ROCKPLATE_2
# 11 "data/scripts/general_scripts.pory"
	msgbox DebugScript1_Text_0
	return


SetupMushroom::
# 15 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_MUSHROOMS_UNLOCKED, SetupMushroom_2
# 18 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomOnSpawn
# 19 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 20 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
	return

SetupMushroom_2:
	return


EventScript_LootMushroom::
# 24 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_ge EventScript_LootMushroom_2
# 28 "data/scripts/general_scripts.pory"
	playmoncry SPECIES_IRON_CROWN, 0
# 29 "data/scripts/general_scripts.pory"
	removeobject LOCALID_SUPER_MUSHROOM
# 30 "data/scripts/general_scripts.pory"
	callnative RandomizeMushroomScript
# 31 "data/scripts/general_scripts.pory"
	setobjectxyperm LOCALID_SUPER_MUSHROOM, VAR_MUSHROOM_X, VAR_MUSHROOM_Y
# 32 "data/scripts/general_scripts.pory"
	clearflag FLAG_MUSHROOM_PICKED_UP
# 33 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_INTRODUCTION_TO_MUSHROOMS, EventScript_LootMushroom_5
EventScript_LootMushroom_4:
# 40 "data/scripts/general_scripts.pory"
	compare VAR_MUSHROOM_COUNT, 10
	goto_if_lt EventScript_LootMushroom_8
EventScript_LootMushroom_7:
# 43 "data/scripts/general_scripts.pory"
	callnative UpdateMushroomPP
# 44 "data/scripts/general_scripts.pory"
	release
	return

EventScript_LootMushroom_2:
# 25 "data/scripts/general_scripts.pory"
	release
	end

EventScript_LootMushroom_5:
# 34 "data/scripts/general_scripts.pory"
	setmonmove 0, 1, MOVE_SUPER_MUSHROOM
# 35 "data/scripts/general_scripts.pory"
	setmonmove 0, 2, MOVE_LICK_BERRY
# 36 "data/scripts/general_scripts.pory"
	waitmoncry
# 37 "data/scripts/general_scripts.pory"
	setflag FLAG_INTRODUCTION_TO_MUSHROOMS
# 38 "data/scripts/general_scripts.pory"
	msgbox EventScript_LootMushroom_Text, MSGBOX_AUTOCLOSE
	goto EventScript_LootMushroom_4

EventScript_LootMushroom_8:
# 41 "data/scripts/general_scripts.pory"
	addvar VAR_MUSHROOM_COUNT, 1
	goto EventScript_LootMushroom_7


EventScript_FollowerEgg::
# 56 "data/scripts/general_scripts.pory"
	msgbox EventScript_FollowerEgg_Text_0, MSGBOX_AUTOCLOSE
	return


Script_StartMenuRest::
# 60 "data/scripts/general_scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 61 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 62 "data/scripts/general_scripts.pory"
	callnative DoInitialSave
# 63 "data/scripts/general_scripts.pory"
	msgbox Script_StartMenuRest_Text_0
# 64 "data/scripts/general_scripts.pory"
	release
	end


Script_RetreatWithDiglett::
# 69 "data/scripts/general_scripts.pory"
	msgbox RetreatWithDiglett_Text, MSGBOX_YESNO
# 70 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_RetreatWithDiglett_2
# 74 "data/scripts/general_scripts.pory"
	setfieldeffectargument 0, 0xFF
# 75 "data/scripts/general_scripts.pory"
	goto EventScript_DigCommon
	return

Script_RetreatWithDiglett_2:
# 71 "data/scripts/general_scripts.pory"
	release
	end


Script_TryLootEgg::
# 84 "data/scripts/general_scripts.pory"
	lock
# 85 "data/scripts/general_scripts.pory"
	callnative GeneratePokemonForEgg
# 86 "data/scripts/general_scripts.pory"
	clearflag FLAG_FORCE_ENCOUNTERRATE
# 87 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 5
	goto_if_lt Script_TryLootEgg_2
# 99 "data/scripts/general_scripts.pory"
	setflag FLAG_EGGPIC
# 100 "data/scripts/general_scripts.pory"
	showmonpic VAR_0x8000, 10, 3
# 101 "data/scripts/general_scripts.pory"
	callnative BufferEggTextBasedOnType
# 102 "data/scripts/general_scripts.pory"
	msgbox TooManyEggs, MSGBOX_YESNO
# 103 "data/scripts/general_scripts.pory"
	hidemonpic
# 104 "data/scripts/general_scripts.pory"
	clearflag FLAG_EGGPIC
# 105 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Script_TryLootEgg_6
# 110 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_1
# 111 "data/scripts/general_scripts.pory"
	special SavePlayerParty
# 112 "data/scripts/general_scripts.pory"
	callnative ReplaceChanseyWithEgg
# 113 "data/scripts/general_scripts.pory"
	special ChoosePartyMon
# 114 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge Script_TryLootEgg_9
# 114 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq Script_TryLootEgg_9
# 121 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 122 "data/scripts/general_scripts.pory"
	callnative ReplaceEggInParty
# 123 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_3
Script_TryLootEgg_1:
# 125 "data/scripts/general_scripts.pory"
	release
	return

Script_TryLootEgg_2:
# 89 "data/scripts/general_scripts.pory"
	playse SE_ITEMFINDER
# 90 "data/scripts/general_scripts.pory"
	message Script_TryLootEgg_Text_0
# 91 "data/scripts/general_scripts.pory"
	waitse
# 92 "data/scripts/general_scripts.pory"
	waitmessage
# 93 "data/scripts/general_scripts.pory"
	giveegg VAR_0x8000
# 94 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 95 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 96 "data/scripts/general_scripts.pory"
	callnative UpdateFollowingPokemon
	goto Script_TryLootEgg_1

Script_TryLootEgg_6:
# 107 "data/scripts/general_scripts.pory"
	release
	end

Script_TryLootEgg_9:
# 116 "data/scripts/general_scripts.pory"
	special LoadPlayerParty
# 117 "data/scripts/general_scripts.pory"
	msgbox Script_TryLootEgg_Text_2
# 118 "data/scripts/general_scripts.pory"
	release
	end


RiverCrossing1::
# 137 "data/scripts/general_scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 138 "data/scripts/general_scripts.pory"
	counteggs
# 139 "data/scripts/general_scripts.pory"
	compare VAR_0x8001, 1
	goto_if_lt RiverCrossing1_2
# 143 "data/scripts/general_scripts.pory"
	msgbox TryCrossingTheRiver, MSGBOX_YESNO
# 144 "data/scripts/general_scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RiverCrossing1_5
# 149 "data/scripts/general_scripts.pory"
	msgbox RiverCrossing1_Text_0
# 150 "data/scripts/general_scripts.pory"
	special ChoosePartyEgg
# 151 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, PARTY_SIZE
	goto_if_ge RiverCrossing1_8
# 151 "data/scripts/general_scripts.pory"
	compare VAR_0x8004, 0
	goto_if_eq RiverCrossing1_8
# 156 "data/scripts/general_scripts.pory"
	removeegg VAR_0x8004
# 157 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_13
# 161 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_RIGHT_1
RiverCrossing1_12:
# 163 "data/scripts/general_scripts.pory"
	call DoWaterEggMovement
# 164 "data/scripts/general_scripts.pory"
	delay 32
# 165 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 166 "data/scripts/general_scripts.pory"
	compare VAR_FACING, DIR_EAST
	goto_if_eq RiverCrossing1_17
# 170 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_1
RiverCrossing1_16:
# 172 "data/scripts/general_scripts.pory"
	delay 48
# 173 "data/scripts/general_scripts.pory"
	playse SE_LEDGE
# 174 "data/scripts/general_scripts.pory"
	waitmovement 0
# 175 "data/scripts/general_scripts.pory"
	delay 30
# 176 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, MoveWaterEggAway
# 177 "data/scripts/general_scripts.pory"
	waitmovement 0
# 178 "data/scripts/general_scripts.pory"
	hideobjectat VAR_TEMP_3, MAP_EGG_ISLAND_EXTERIOR
# 179 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, 36, 66
# 180 "data/scripts/general_scripts.pory"
	special CalculatePlayerPartyCount
# 181 "data/scripts/general_scripts.pory"
	callnative UpdateEggPP
# 182 "data/scripts/general_scripts.pory"
	callnative ForceResetFollowers
	return

RiverCrossing1_2:
# 140 "data/scripts/general_scripts.pory"
	msgbox CantCrossRiver, MSGBOX_AUTOCLOSE
	end

RiverCrossing1_5:
# 146 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_8:
# 153 "data/scripts/general_scripts.pory"
	release
	end

RiverCrossing1_13:
# 158 "data/scripts/general_scripts.pory"
	setvar VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto RiverCrossing1_12

RiverCrossing1_17:
# 167 "data/scripts/general_scripts.pory"
	applymovement LOCALID_PLAYER, RiverCrossing1_Movement_0
	goto RiverCrossing1_16


# 185 "data/scripts/general_scripts.pory"
MoveWaterEggAway:
# 186 "data/scripts/general_scripts.pory"
	lock_anim
# 187 "data/scripts/general_scripts.pory"
	lock_facing_direction
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 188 "data/scripts/general_scripts.pory"
	walk_fast_down
# 189 "data/scripts/general_scripts.pory"
	unlock_anim
# 190 "data/scripts/general_scripts.pory"
	unlock_facing_direction
	step_end

DoWaterEggMovement::
# 194 "data/scripts/general_scripts.pory"
	delay 16
# 195 "data/scripts/general_scripts.pory"
	addobject VAR_TEMP_3
# 196 "data/scripts/general_scripts.pory"
	setobjectxy VAR_TEMP_3, VAR_TEMP_0, VAR_TEMP_1
# 197 "data/scripts/general_scripts.pory"
	playse SE_M_JUMP_KICK
# 198 "data/scripts/general_scripts.pory"
	compare VAR_TEMP_3, LOCALID_WATEREGG_LEFT_1
	goto_if_eq DoWaterEggMovement_2
# 202 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_1
DoWaterEggMovement_1:
# 204 "data/scripts/general_scripts.pory"
	delay 32
# 205 "data/scripts/general_scripts.pory"
	playse SE_M_DIVE
# 206 "data/scripts/general_scripts.pory"
	waitmovement 0
	return

DoWaterEggMovement_2:
# 199 "data/scripts/general_scripts.pory"
	applymovement VAR_TEMP_3, DoWaterEggMovement_Movement_0
	goto DoWaterEggMovement_1


SavePointTrigger::
# 223 "data/scripts/general_scripts.pory"
	goto_if_unset FLAG_EXPLAIN_REST_POINT, SavePointTrigger_2
SavePointTrigger_1:
# 233 "data/scripts/general_scripts.pory"
	release
	return

SavePointTrigger_2:
# 224 "data/scripts/general_scripts.pory"
	playse SE_ICE_STAIRS
# 225 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_TO_BLUE, -2
# 226 "data/scripts/general_scripts.pory"
	delay 15
# 227 "data/scripts/general_scripts.pory"
	waitse
# 228 "data/scripts/general_scripts.pory"
	fadescreenspeed FADE_FROM_BLUE, -2
# 229 "data/scripts/general_scripts.pory"
	delay 30
# 230 "data/scripts/general_scripts.pory"
	setflag FLAG_EXPLAIN_REST_POINT
# 231 "data/scripts/general_scripts.pory"
	msgbox SavePointTrigger_Text, MSGBOX_SIGN
	goto SavePointTrigger_1


# 167 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_0:
# 167 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 167 "data/scripts/general_scripts.pory"
	jump_2_right
# 167 "data/scripts/general_scripts.pory"
	delay_16
# 167 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 167 "data/scripts/general_scripts.pory"
	jump_2_right
	step_end

# 170 "data/scripts/general_scripts.pory"
RiverCrossing1_Movement_1:
# 170 "data/scripts/general_scripts.pory"
	disable_jump_landing_ground_effect
# 170 "data/scripts/general_scripts.pory"
	jump_2_left
# 170 "data/scripts/general_scripts.pory"
	delay_16
# 170 "data/scripts/general_scripts.pory"
	enable_jump_landing_ground_effect
# 170 "data/scripts/general_scripts.pory"
	jump_2_left
	step_end

# 199 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_0:
# 199 "data/scripts/general_scripts.pory"
	set_visible
# 199 "data/scripts/general_scripts.pory"
	jump_2_right
# 199 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

# 202 "data/scripts/general_scripts.pory"
DoWaterEggMovement_Movement_1:
# 202 "data/scripts/general_scripts.pory"
	set_visible
# 202 "data/scripts/general_scripts.pory"
	jump_2_left
# 202 "data/scripts/general_scripts.pory"
	nurse_joy_bow
	step_end

DebugScript1_Text_0:
# 11 "data/scripts/general_scripts.pory"
	.string "{STR_VAR_1}\n{STR_VAR_2}$"

EventScript_FollowerEgg_Text_0:
# 56 "data/scripts/general_scripts.pory"
	.string "It's a Pokémon egg.$"

Script_StartMenuRest_Text_0:
# 63 "data/scripts/general_scripts.pory"
	.string "Your party has been\nfully healed.\pYour progress has been saved.$"

Script_TryLootEgg_Text_0:
# 90 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg!$"

Script_TryLootEgg_Text_1:
# 110 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss away.$"

Script_TryLootEgg_Text_2:
# 117 "data/scripts/general_scripts.pory"
	.string "Yoshi left the egg where it was.$"

Script_TryLootEgg_Text_3:
# 123 "data/scripts/general_scripts.pory"
	.string "Yoshi replaced an older egg\nwith the new one.$"

RiverCrossing1_Text_0:
# 149 "data/scripts/general_scripts.pory"
	.string "Choose an egg to toss.$"

EventScript_LootMushroom_Text::
# 47 "data/scripts/general_scripts.pory"
	.string "Yoshi picked up a Super\n"
	.string "Mushroom!\p"
	.string "Use the move “Super Mushroom”\n"
	.string "to consume a Super Mushroom\l"
	.string "and recover some health.$"

RetreatWithDiglett_Text::
# 78 "data/scripts/general_scripts.pory"
	.string "Call out for Diglett and\n"
	.string "return back to latest save point?$"

TooManyEggs::
# 128 "data/scripts/general_scripts.pory"
	.string "Yoshi found an egg, but it\n"
	.string "cannot carry any more.\p"
	.string "{STR_VAR_1}\p"
	.string "Replace an old egg with\n"
	.string "the new one?$"

CantCrossRiver::
# 209 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Maybe there's something that\n"
	.string "could be used as a temporary\l"
	.string "stepping stone.$"

TryCrossingTheRiver::
# 216 "data/scripts/general_scripts.pory"
	.string "It's a rapidly flowing river.\p"
	.string "Toss an egg to make\n"
	.string "a temporary stepping stone?$"

SavePointTrigger_Text::
# 236 "data/scripts/general_scripts.pory"
	.string "You have discovered a new\n"
	.string "rest point!\p"
	.string "When standing on a rest point,\n"
	.string "you are able to heal your party\l"
	.string "by choosing the “Rest” option\l"
	.string "in the Start Menu.\l"
	.string "Resting also saves your\l"
	.string "current progress.$"
