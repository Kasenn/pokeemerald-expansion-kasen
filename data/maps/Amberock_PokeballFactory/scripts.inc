Amberock_PokeballFactory_MapScripts::
# 12 "data/maps/Amberock_PokeballFactory/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 25 "data/maps/Amberock_PokeballFactory/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 28 "data/maps/Amberock_PokeballFactory/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 13 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto_if_unset FLAG_MSG_FROM_CLAY, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 21 "data/maps/Amberock_PokeballFactory/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_PETREL
	goto_if_ge Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 14 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_8, 1
	goto Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 17 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setflag FLAG_TEMP_HIDE_FOLLOWER
# 18 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setflag FLAG_SYS_USE_STRENGTH
# 19 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setflag FLAG_TEMP_2
	goto Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 22 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setflag FLAG_TEMP_1
	return

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 26 "data/maps/Amberock_PokeballFactory/scripts.pory"
	map_script_2 VAR_TEMP_3, 0, SetPlayerKrokorokModel
	.2byte 0

Amberock_PokeballFactory_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/Amberock_PokeballFactory/scripts.pory"
	map_script_2 VAR_TEMP_8, 1, MsgFromClay
# 30 "data/maps/Amberock_PokeballFactory/scripts.pory"
	map_script_2 VAR_BOULDER_ID, 35, Factory_DoBoulderCheck
	.2byte 0


Factory_DoBoulderCheck::
# 35 "data/maps/Amberock_PokeballFactory/scripts.pory"
	getobjectxy 35
# 36 "data/maps/Amberock_PokeballFactory/scripts.pory"
	compare VAR_0x8002, 32
	goto_if_ne Factory_DoBoulderCheck_2
# 40 "data/maps/Amberock_PokeballFactory/scripts.pory"
	safefollow
# 41 "data/maps/Amberock_PokeballFactory/scripts.pory"
	compare VAR_0x8001, 20
	goto_if_eq Factory_DoBoulderCheck_6
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement 35, Factory_DoBoulderCheck_Movement_1
Factory_DoBoulderCheck_5:
# 47 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitmovement 0
# 48 "data/maps/Amberock_PokeballFactory/scripts.pory"
	playse SE_M_STRENGTH
# 49 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setobjectxy 35, 11, 32
# 50 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setobjectxyperm 35, 11, 32
# 51 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_BOULDER_ID, 0
Factory_DoBoulderCheck_1:
# 53 "data/maps/Amberock_PokeballFactory/scripts.pory"
	release
	return

Factory_DoBoulderCheck_2:
# 37 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_BOULDER_ID, 0
	goto Factory_DoBoulderCheck_1

Factory_DoBoulderCheck_6:
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement 35, Factory_DoBoulderCheck_Movement_0
	goto Factory_DoBoulderCheck_5


Factory_BusyKrokorok::
# 57 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox Factory_BusyKrokorok_Text
# 58 "data/maps/Amberock_PokeballFactory/scripts.pory"
	release
	return


Amberock_Factory_RocketWarpTo4::
# 66 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_3, 4
# 67 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketWarpTo5::
# 70 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_3, 5
# 71 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketWarpTo6::
# 74 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_3, 6
# 75 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketWarpTo7::
# 78 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_3, 7
# 79 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_RocketWarpTo8::
# 82 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_3, 8
# 83 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto Amberock_Factory_MainRocket
	return


Amberock_Factory_MainRocket::
# 87 "data/maps/Amberock_PokeballFactory/scripts.pory"
	lock
# 88 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 89 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitmovement 0
# 90 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 15
# 91 "data/maps/Amberock_PokeballFactory/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement VAR_LAST_TALKED, ExclamationMark
# 93 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitmovement 0
# 94 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 60
# 95 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox GetBackToWork
# 96 "data/maps/Amberock_PokeballFactory/scripts.pory"
	closemessage
# 97 "data/maps/Amberock_PokeballFactory/scripts.pory"
	switch VAR_TEMP_3
# 98 "data/maps/Amberock_PokeballFactory/scripts.pory"
	case 2, Amberock_Factory_MainRocket_3
# 100 "data/maps/Amberock_PokeballFactory/scripts.pory"
	case 4, Amberock_Factory_MainRocket_4
# 102 "data/maps/Amberock_PokeballFactory/scripts.pory"
	case 5, Amberock_Factory_MainRocket_5
# 104 "data/maps/Amberock_PokeballFactory/scripts.pory"
	case 6, Amberock_Factory_MainRocket_6
# 106 "data/maps/Amberock_PokeballFactory/scripts.pory"
	case 7, Amberock_Factory_MainRocket_7
# 108 "data/maps/Amberock_PokeballFactory/scripts.pory"
	case 8, Amberock_Factory_MainRocket_8
Amberock_Factory_MainRocket_1:
# 111 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitstate
	return

Amberock_Factory_MainRocket_3:
# 99 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 2
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_4:
# 101 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 4
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_5:
# 103 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 5
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_6:
# 105 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 6
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_7:
# 107 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 7
	goto Amberock_Factory_MainRocket_1

Amberock_Factory_MainRocket_8:
# 109 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilent MAP_AMBEROCK_POKEBALL_FACTORY, 8
	goto Amberock_Factory_MainRocket_1


FactoryEmployee_Basement::
# 119 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox FactoryEmployee_Basement_Text, MSGBOX_SIGN
	return


TooCloseToProton::
# 128 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_1, 4
# 129 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_2, DIR_EAST
# 130 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_3, 2
# 131 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto Amberock_Factory_MainRocket
	return


Factory_KrokorokPetrelCutScene::
# 135 "data/maps/Amberock_PokeballFactory/scripts.pory"
	lock
# 136 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 15
# 137 "data/maps/Amberock_PokeballFactory/scripts.pory"
	addobject 39
# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement 39, Factory_KrokorokPetrelCutScene_Movement_0
# 139 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitmovement 0
# 140 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 16
# 141 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox Petrel_MoveItGuys
# 142 "data/maps/Amberock_PokeballFactory/scripts.pory"
	turnobject 38, DIR_WEST
# 143 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox Sorry_Petrel
# 144 "data/maps/Amberock_PokeballFactory/scripts.pory"
	closemessage
# 145 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 16
# 146 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement 39, Factory_KrokorokPetrelCutScene_Movement_1
# 147 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement 37, Factory_RocketGuardLeaves2
# 148 "data/maps/Amberock_PokeballFactory/scripts.pory"
	applymovement 38, Factory_RocketGuardLeaves
# 149 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitmovement 0
# 150 "data/maps/Amberock_PokeballFactory/scripts.pory"
	removeobject 39
# 151 "data/maps/Amberock_PokeballFactory/scripts.pory"
	removeobject 37
# 152 "data/maps/Amberock_PokeballFactory/scripts.pory"
	removeobject 38
# 153 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 16
# 154 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox ThatsPetrel
# 155 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox AfterPapers
# 156 "data/maps/Amberock_PokeballFactory/scripts.pory"
	release
# 157 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_PETREL
	return


# 160 "data/maps/Amberock_PokeballFactory/scripts.pory"
Factory_RocketGuardLeaves:
# 161 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_16
# 162 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 162 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 162 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 162 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 163 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_up
# 164 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_4
# 165 "data/maps/Amberock_PokeballFactory/scripts.pory"
	set_invisible
	step_end

# 167 "data/maps/Amberock_PokeballFactory/scripts.pory"
Factory_RocketGuardLeaves2:
# 168 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_16
# 169 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 169 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 169 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 169 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 169 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_left
# 170 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_up
# 171 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_4
# 172 "data/maps/Amberock_PokeballFactory/scripts.pory"
	set_invisible
	step_end

Amberock_Factory_Generator::
# 201 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto_if_set FLAG_DISGUISED_AS_KROKOROK, Amberock_Factory_Generator_1
# 223 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox BustedGenerator, MSGBOX_SIGN
	return

Amberock_Factory_Generator_1:
# 202 "data/maps/Amberock_PokeballFactory/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_FOUND_GIOVANNI
	goto_if_ge Amberock_Factory_Generator_4
# 219 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox CompleteClaysObjective, MSGBOX_SIGN
	return

Amberock_Factory_Generator_4:
	msgbox OrderKrokorokDestroy, MSGBOX_YESNO
# 0 "data/maps/Amberock_PokeballFactory/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Amberock_Factory_Generator_8
Amberock_Factory_Generator_7:
# 215 "data/maps/Amberock_PokeballFactory/scripts.pory"
	release
	end

Amberock_Factory_Generator_8:
# 204 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox KrokorokBeginsRampage
# 205 "data/maps/Amberock_PokeballFactory/scripts.pory"
	closemessage
# 206 "data/maps/Amberock_PokeballFactory/scripts.pory"
	fadescreen FADE_TO_BLACK
# 207 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox KrokorokDestroysGenerator
# 208 "data/maps/Amberock_PokeballFactory/scripts.pory"
	closemessage
# 209 "data/maps/Amberock_PokeballFactory/scripts.pory"
	clearflag FLAG_DISGUISED_AS_KROKOROK
# 210 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 211 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_AMBEROCK_STORY, STORY_AMBEROCK_CUT_ELECTRICITY
# 212 "data/maps/Amberock_PokeballFactory/scripts.pory"
	warpsilentnofadeout MAP_AMBEROCK_TOWN, 30, 21
# 213 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitstate
	goto Amberock_Factory_Generator_7


MsgFromClay::
# 228 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox MsgFromClay_Text, MSGBOX_SIGN
# 229 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setflag FLAG_MSG_FROM_CLAY
# 230 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_8, 0
# 231 "data/maps/Amberock_PokeballFactory/scripts.pory"
	release
	return


Amberock_Crate::
# 267 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox Amberock_Crate_Text, MSGBOX_SIGN
	return


KrokBall1::
# 275 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_4, ITEM_MAX_ELIXIR
# 276 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto KrokBallMain
	return


KrokBall2::
# 279 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_4, ITEM_X_ATTACK
# 280 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto KrokBallMain
	return


KrokBall3::
# 283 "data/maps/Amberock_PokeballFactory/scripts.pory"
	setvar VAR_TEMP_4, ITEM_HYPER_POTION
# 284 "data/maps/Amberock_PokeballFactory/scripts.pory"
	goto KrokBallMain
	return


KrokBallMain::
# 287 "data/maps/Amberock_PokeballFactory/scripts.pory"
	lock
# 288 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitse
# 289 "data/maps/Amberock_PokeballFactory/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 290 "data/maps/Amberock_PokeballFactory/scripts.pory"
	removeobject VAR_LAST_TALKED
# 291 "data/maps/Amberock_PokeballFactory/scripts.pory"
	bufferitemname STR_VAR_2, VAR_TEMP_4
# 292 "data/maps/Amberock_PokeballFactory/scripts.pory"
	message KrokorokFoundItem
# 293 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay 10
# 294 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitfanfare
# 295 "data/maps/Amberock_PokeballFactory/scripts.pory"
	waitmessage
# 296 "data/maps/Amberock_PokeballFactory/scripts.pory"
	msgbox KrokorokCarriesItem
# 297 "data/maps/Amberock_PokeballFactory/scripts.pory"
	release
	end


# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
Factory_DoBoulderCheck_Movement_0:
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 42 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
	step_end

# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
Factory_DoBoulderCheck_Movement_1:
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
# 45 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_fast_left
	step_end

# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
Factory_KrokorokPetrelCutScene_Movement_0:
# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_16
# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_16
# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
	delay_16
# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_down
# 138 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_in_place_fast_right
	step_end

# 146 "data/maps/Amberock_PokeballFactory/scripts.pory"
Factory_KrokorokPetrelCutScene_Movement_1:
# 146 "data/maps/Amberock_PokeballFactory/scripts.pory"
	walk_up
# 146 "data/maps/Amberock_PokeballFactory/scripts.pory"
	set_invisible
	step_end

Factory_BusyKrokorok_Text::
# 60 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "The Krokorok seems busy scavenging\n"
	.string "through the boxes.$"

GetBackToWork::
# 113 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "Where do you think you're going?\n"
	.string "Get back to work!$"

FactoryEmployee_Basement_Text::
# 121 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "These look to be employees\n"
	.string "of the factory.\p"
	.string "They seem unharmed.$"

Petrel_MoveItGuys::
# 175 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "???: Hey, you two knuckleheads!\p"
	.string "Come with me to the office and see\n"
	.string "if you can figure out what these\l"
	.string "fancy research papers say!$"

Sorry_Petrel::
# 181 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "Yes boss!\n"
	.string "Right away, boss!$"

ThatsPetrel::
# 185 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "Clay: That's Petrel,\n"
	.string "one of the Rocket Executives.\p"
	.string "He stands above grunts, but I doubt\n"
	.string "he's the mastermind of this operation.\p"
	.string "Let's keep looking.$"

AfterPapers::
# 192 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "You're here because you were tasked\n"
	.string "with retrieving those papers?\p"
	.string "Don't worry, you can get them\n"
	.string "once we're done.\l"
	.string "I doubt they're going anywhere.$"

MsgFromClay_Text::
# 233 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "Clay: Oh, while we're here,\n"
	.string "you may wanna grab any items\l"
	.string "you see lying around.\p"
	.string "It's better we confiscate everything\n"
	.string "now, rather than letting Team Rocket\l"
	.string "simply take them with 'em.$"

OrderKrokorokDestroy::
# 242 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "Order the Krokorok to disable\n"
	.string "the generator?$"

KrokorokBeginsRampage::
# 246 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "The Krokorok starts gnawing\n"
	.string "on the cables…$"

KrokorokDestroysGenerator::
# 250 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "The entire facility goes dark, and\n"
	.string "Krokorok returns back to the group.$"

CompleteClaysObjective::
# 254 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "Volkner: This is the main\n"
	.string "generator of the facility.\p"
	.string "We can command the Krokorok to gnaw\n"
	.string "on some cables to cause a blackout,\l"
	.string "but first, we should finish the other\l"
	.string "objectives.$"

BustedGenerator::
# 262 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "(UNUSED)its a busted gen$"

Amberock_Crate_Text::
# 269 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "It's a light enough crate the\n"
	.string "Krokorok can push around with ease.$"

KrokorokFoundItem::
# 301 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "The Krokorok found one {STR_VAR_2}!$"

KrokorokCarriesItem::
# 304 "data/maps/Amberock_PokeballFactory/scripts.pory"
	.string "The Krokorok is carrying the\n"
	.string "{STR_VAR_2} in its hands for now.$"
