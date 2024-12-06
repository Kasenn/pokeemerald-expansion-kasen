WipCity1_MapScripts::
# 2 "data/maps/WipCity1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WipCity1_Visited
	.byte 0


WipCity1_Visited::
# 6 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_VISITED_WIP_CITY1
# 7 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_HIDE_AMPHAROS
	end


AldeleafCity_BirdTrainer::
# 12 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_BirdTrainer_Text, MSGBOX_NPC
	end


AldeleafCity_OldMan::
# 16 "data/maps/WipCity1/scripts.pory"
	lockall
# 17 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_OldMan_Text, MSGBOX_DEFAULT
# 18 "data/maps/WipCity1/scripts.pory"
	waitmessage
# 19 "data/maps/WipCity1/scripts.pory"
	closemessage
# 20 "data/maps/WipCity1/scripts.pory"
	release
	end


AldeleafCity_OldWoman::
# 24 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_OldWoman_Text, MSGBOX_NPC
	end


AldeleafCity_Runner::
# 28 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Runner_Text, MSGBOX_NPC
	end


AldeleafCity_Lass::
# 32 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Lass_Text, MSGBOX_NPC
	end


AldeleafCity_Boy::
# 36 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Boy_Text, MSGBOX_NPC
	end


AldeleafCity_Maniac::
# 40 "data/maps/WipCity1/scripts.pory"
	lockall
# 41 "data/maps/WipCity1/scripts.pory"
	faceplayer
# 42 "data/maps/WipCity1/scripts.pory"
	checktrainerflag TRAINER_VITO
	goto_if 1, AldeleafCity_Maniac_1
# 59 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Maniac_Text, MSGBOX_YESNO
# 60 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AldeleafCity_Maniac_8
# 64 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Maniac_DeclineBattle, MSGBOX_NPC
	end

AldeleafCity_Maniac_1:
# 43 "data/maps/WipCity1/scripts.pory"
	goto_if_set FLAG_SHELL_BELL_RECEIVED, AldeleafCity_Maniac_4
	checkitemspace ITEM_SHELL_BELL
# 0 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafCity_Maniac_12
AldeleafCity_Maniac_11:
# 51 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Maniac_Continues, MSGBOX_DEFAULT
# 52 "data/maps/WipCity1/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 53 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
# 54 "data/maps/WipCity1/scripts.pory"
	msgbox ExplainShellBell, MSGBOX_NPC
	end

AldeleafCity_Maniac_4:
# 44 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Maniac_PostBattle, MSGBOX_NPC
	end

AldeleafCity_Maniac_7:
# 67 "data/maps/WipCity1/scripts.pory"
	lockall
# 68 "data/maps/WipCity1/scripts.pory"
	faceplayer
# 69 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Maniac_Continues, MSGBOX_DEFAULT
	checkitemspace ITEM_SHELL_BELL
# 0 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafCity_Maniac_15
AldeleafCity_Maniac_14:
# 73 "data/maps/WipCity1/scripts.pory"
	giveitem ITEM_SHELL_BELL
# 74 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_SHELL_BELL_RECEIVED
# 75 "data/maps/WipCity1/scripts.pory"
	msgbox ExplainShellBell, MSGBOX_NPC
	end

AldeleafCity_Maniac_8:
# 61 "data/maps/WipCity1/scripts.pory"
	trainerbattle_no_intro TRAINER_VITO, AldeleafCity_Maniac_Defeated
	goto AldeleafCity_Maniac_7

AldeleafCity_Maniac_12:
# 49 "data/maps/WipCity1/scripts.pory"
	goto ZeBagIsFull
	goto AldeleafCity_Maniac_11

AldeleafCity_Maniac_15:
# 71 "data/maps/WipCity1/scripts.pory"
	goto ZeBagIsFull
	goto AldeleafCity_Maniac_14


AldeleafCity_Child1::
# 99 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Child1_Text, MSGBOX_NPC
# 100 "data/maps/WipCity1/scripts.pory"
	turnobject 10, DIR_EAST
	end


AldeleafCity_Child2::
# 104 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Child2_Text, MSGBOX_NPC
# 105 "data/maps/WipCity1/scripts.pory"
	turnobject 11, DIR_WEST
	end


AldeleafCity_LittleGirl::
# 109 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_LittleGirl_Text, MSGBOX_NPC
	end


AldeleafCity_Woman::
# 113 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Woman_Text, MSGBOX_NPC
	end


AldeleafCity_Youngster::
# 117 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Youngster_Text, MSGBOX_NPC
	end


DangerousOutside::
# 121 "data/maps/WipCity1/scripts.pory"
	msgbox DangerousOutside_Text, MSGBOX_NPC
	return


AldeleafTrigger1::
# 130 "data/maps/WipCity1/scripts.pory"
	setvar VAR_TEMP_5, 1
# 131 "data/maps/WipCity1/scripts.pory"
	goto AldeleafTriggerMain
	return


AldeleafTrigger2::
# 134 "data/maps/WipCity1/scripts.pory"
	setvar VAR_TEMP_5, 2
# 135 "data/maps/WipCity1/scripts.pory"
	goto AldeleafTriggerMain
	return


AldeleafTrigger3::
# 138 "data/maps/WipCity1/scripts.pory"
	setvar VAR_TEMP_5, 3
# 139 "data/maps/WipCity1/scripts.pory"
	goto AldeleafTriggerMain
	return


AldeleafTriggerMain::
# 142 "data/maps/WipCity1/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, AldeleafTriggerMain_2
# 146 "data/maps/WipCity1/scripts.pory"
	lock
# 147 "data/maps/WipCity1/scripts.pory"
	playse SE_PIN
# 148 "data/maps/WipCity1/scripts.pory"
	turnobject 18, DIR_WEST
# 149 "data/maps/WipCity1/scripts.pory"
	safefollow
# 150 "data/maps/WipCity1/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 151 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 152 "data/maps/WipCity1/scripts.pory"
	delay 48
# 153 "data/maps/WipCity1/scripts.pory"
	switch VAR_TEMP_5
# 154 "data/maps/WipCity1/scripts.pory"
	case 1, AldeleafTriggerMain_6
# 156 "data/maps/WipCity1/scripts.pory"
	case 2, AldeleafTriggerMain_7
# 158 "data/maps/WipCity1/scripts.pory"
	case 3, AldeleafTriggerMain_8
AldeleafTriggerMain_4:
# 161 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 162 "data/maps/WipCity1/scripts.pory"
	delay 10
# 163 "data/maps/WipCity1/scripts.pory"
	msgbox DangerousOutside_Text
# 164 "data/maps/WipCity1/scripts.pory"
	closemessage
# 165 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Down
# 166 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 167 "data/maps/WipCity1/scripts.pory"
	delay 10
# 168 "data/maps/WipCity1/scripts.pory"
	release
	end

AldeleafTriggerMain_2:
# 143 "data/maps/WipCity1/scripts.pory"
	release
	end

AldeleafTriggerMain_6:
# 155 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk2Right
	goto AldeleafTriggerMain_4

AldeleafTriggerMain_7:
# 157 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Right
	goto AldeleafTriggerMain_4

AldeleafTriggerMain_8:
# 159 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
	goto AldeleafTriggerMain_4


AldeleafTrigger4::
# 172 "data/maps/WipCity1/scripts.pory"
	setvar VAR_TEMP_5, 4
# 173 "data/maps/WipCity1/scripts.pory"
	goto AldeleafTriggerMain2
	return


AldeleafTrigger5::
# 176 "data/maps/WipCity1/scripts.pory"
	setvar VAR_TEMP_5, 5
# 177 "data/maps/WipCity1/scripts.pory"
	goto AldeleafTriggerMain2
	return


AldeleafTriggerMain2::
# 180 "data/maps/WipCity1/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, AldeleafTriggerMain2_2
# 184 "data/maps/WipCity1/scripts.pory"
	lock
# 185 "data/maps/WipCity1/scripts.pory"
	playse SE_PIN
# 186 "data/maps/WipCity1/scripts.pory"
	turnobject 19, DIR_EAST
# 187 "data/maps/WipCity1/scripts.pory"
	safefollow
# 188 "data/maps/WipCity1/scripts.pory"
	applymovement 19, Common_Movement_ExclamationMark
# 189 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 190 "data/maps/WipCity1/scripts.pory"
	delay 48
# 191 "data/maps/WipCity1/scripts.pory"
	switch VAR_TEMP_5
# 192 "data/maps/WipCity1/scripts.pory"
	case 4, AldeleafTriggerMain2_6
# 194 "data/maps/WipCity1/scripts.pory"
	case 5, AldeleafTriggerMain2_7
AldeleafTriggerMain2_4:
# 197 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 198 "data/maps/WipCity1/scripts.pory"
	delay 10
# 199 "data/maps/WipCity1/scripts.pory"
	msgbox DangerousOutside_Text
# 200 "data/maps/WipCity1/scripts.pory"
	closemessage
# 201 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Up
# 202 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 203 "data/maps/WipCity1/scripts.pory"
	delay 10
# 204 "data/maps/WipCity1/scripts.pory"
	release
	end

AldeleafTriggerMain2_2:
# 181 "data/maps/WipCity1/scripts.pory"
	release
	end

AldeleafTriggerMain2_6:
# 193 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
	goto AldeleafTriggerMain2_4

AldeleafTriggerMain2_7:
# 195 "data/maps/WipCity1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Walk1Left
	goto AldeleafTriggerMain2_4


AldeleafCity_Hidden::
# 209 "data/maps/WipCity1/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_QUICK_BALL, AldeleafCity_Hidden_2
# 220 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Hidden_Text2, MSGBOX_NPC
	end

AldeleafCity_Hidden_2:
# 210 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_Hidden_Text, MSGBOX_NPC
	checkitemspace ITEM_QUICK_BALL
# 0 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AldeleafCity_Hidden_5
AldeleafCity_Hidden_4:
# 214 "data/maps/WipCity1/scripts.pory"
	giveitem ITEM_QUICK_BALL, 1
# 215 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_ALDELEAF_QUICK_BALL
# 216 "data/maps/WipCity1/scripts.pory"
	waitmessage
# 217 "data/maps/WipCity1/scripts.pory"
	closemessage
	end

AldeleafCity_Hidden_5:
# 212 "data/maps/WipCity1/scripts.pory"
	goto ZeBagIsFull
	goto AldeleafCity_Hidden_4


AldeleafCity_KeyMan::
# 224 "data/maps/WipCity1/scripts.pory"
	lock
# 225 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_KeyMan_Text, MSGBOX_DEFAULT
# 226 "data/maps/WipCity1/scripts.pory"
	waitmessage
# 227 "data/maps/WipCity1/scripts.pory"
	closemessage
# 228 "data/maps/WipCity1/scripts.pory"
	checkitem ITEM_LOST_KEY
# 229 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AldeleafCity_KeyMan_2
AldeleafCity_KeyMan_1:
# 260 "data/maps/WipCity1/scripts.pory"
	release
	end

AldeleafCity_KeyMan_2:
# 230 "data/maps/WipCity1/scripts.pory"
	safefollow
# 231 "data/maps/WipCity1/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 232 "data/maps/WipCity1/scripts.pory"
	playse SE_PIN
# 233 "data/maps/WipCity1/scripts.pory"
	faceplayer
# 234 "data/maps/WipCity1/scripts.pory"
	delay 60
# 235 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_KeyMan_MyKey, MSGBOX_DEFAULT
# 236 "data/maps/WipCity1/scripts.pory"
	waitmessage
# 237 "data/maps/WipCity1/scripts.pory"
	closemessage
# 238 "data/maps/WipCity1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 239 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_KeyMan_Return, MSGBOX_DEFAULT
# 240 "data/maps/WipCity1/scripts.pory"
	waitfanfare
# 241 "data/maps/WipCity1/scripts.pory"
	closemessage
# 242 "data/maps/WipCity1/scripts.pory"
	msgbox AldeleafCity_KeyMan_Help, MSGBOX_DEFAULT
# 243 "data/maps/WipCity1/scripts.pory"
	closemessage
# 244 "data/maps/WipCity1/scripts.pory"
	delay 20
# 245 "data/maps/WipCity1/scripts.pory"
	removeitem ITEM_LOST_KEY
# 246 "data/maps/WipCity1/scripts.pory"
	turnobject 16, DIR_NORTH
# 247 "data/maps/WipCity1/scripts.pory"
	delay 30
# 248 "data/maps/WipCity1/scripts.pory"
	opendoor 8, 37
# 249 "data/maps/WipCity1/scripts.pory"
	waitdooranim
# 250 "data/maps/WipCity1/scripts.pory"
	applymovement 16, Walk1Up
# 251 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 252 "data/maps/WipCity1/scripts.pory"
	delay 5
# 253 "data/maps/WipCity1/scripts.pory"
	removeobject 16
# 254 "data/maps/WipCity1/scripts.pory"
	closedoor 8, 37
# 255 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_KEY_RETURNED
# 256 "data/maps/WipCity1/scripts.pory"
	waitdooranim
# 257 "data/maps/WipCity1/scripts.pory"
	hideobjectat 16, MAP_WIP_CITY1
# 258 "data/maps/WipCity1/scripts.pory"
	setobjectxyperm 16, 0, 30
	goto AldeleafCity_KeyMan_1


Aldeleaf_Sign::
# 264 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_Sign_Text, MSGBOX_SIGN
	end


Aldeleaf_Sign2::
# 268 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_Sign2_Text, MSGBOX_SIGN
	end


Aldeleaf_Sign3::
# 272 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_Sign3_Text, MSGBOX_SIGN
	end


Aldeleaf_Sign4::
# 276 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_Sign4_Text, MSGBOX_SIGN
	end


Aldeleaf_GymUnavailable::
# 293 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_GymUnavailable_Text, MSGBOX_NPC
	end


Aldeleaf_Sudowoodo::
# 306 "data/maps/WipCity1/scripts.pory"
	checkitem ITEM_WAILMER_PAIL
# 307 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_Sudowoodo_2
Aldeleaf_Sudowoodo_1:
# 323 "data/maps/WipCity1/scripts.pory"
	lockall
# 324 "data/maps/WipCity1/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, Aldeleaf_Sudowoodo_NoCut
# 325 "data/maps/WipCity1/scripts.pory"
	checkpartymove MOVE_CUT
# 326 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, PARTY_SIZE
	goto_if_eq Aldeleaf_Sudowoodo_4
# 330 "data/maps/WipCity1/scripts.pory"
	setfieldeffectargument 0, VAR_RESULT
# 331 "data/maps/WipCity1/scripts.pory"
	bufferpartymonnick STR_VAR_1, VAR_RESULT
# 332 "data/maps/WipCity1/scripts.pory"
	buffermovename STR_VAR_2, MOVE_CUT
# 333 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_WantToCut, MSGBOX_YESNO
# 334 "data/maps/WipCity1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_CancelCut
# 335 "data/maps/WipCity1/scripts.pory"
	msgbox Text_MonUsedFieldMove, MSGBOX_DEFAULT
# 336 "data/maps/WipCity1/scripts.pory"
	closemessage
# 337 "data/maps/WipCity1/scripts.pory"
	dofieldeffect FLDEFF_USE_CUT_ON_TREE
# 338 "data/maps/WipCity1/scripts.pory"
	waitstate
# 339 "data/maps/WipCity1/scripts.pory"
	goto Aldeleaf_Sudowoodo_CutDown
	end

Aldeleaf_Sudowoodo_2:
# 308 "data/maps/WipCity1/scripts.pory"
	lock
# 309 "data/maps/WipCity1/scripts.pory"
	msgbox WantToWaterTree, MSGBOX_YESNO
# 310 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Aldeleaf_Sudowoodo_7
# 316 "data/maps/WipCity1/scripts.pory"
	closemessage
# 317 "data/maps/WipCity1/scripts.pory"
	special DoWateringBerryTreeAnim
# 318 "data/maps/WipCity1/scripts.pory"
	waitstate
# 319 "data/maps/WipCity1/scripts.pory"
	waitse
# 320 "data/maps/WipCity1/scripts.pory"
	goto Aldeleaf_Sudowoodo_CutDown
	goto Aldeleaf_Sudowoodo_1

Aldeleaf_Sudowoodo_4:
# 327 "data/maps/WipCity1/scripts.pory"
	goto Aldeleaf_Sudowoodo_NoCut
	return

Aldeleaf_Sudowoodo_7:
# 311 "data/maps/WipCity1/scripts.pory"
	closemessage
# 312 "data/maps/WipCity1/scripts.pory"
	release
	end


Aldeleaf_Sudowoodo_NoCut::
# 354 "data/maps/WipCity1/scripts.pory"
	lock
# 355 "data/maps/WipCity1/scripts.pory"
	faceplayer
# 356 "data/maps/WipCity1/scripts.pory"
	waitse
# 357 "data/maps/WipCity1/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 358 "data/maps/WipCity1/scripts.pory"
	safefollow
# 359 "data/maps/WipCity1/scripts.pory"
	applymovement 1, Aldeleaf_SudowoodoShake
# 360 "data/maps/WipCity1/scripts.pory"
	waitmovement 1
# 361 "data/maps/WipCity1/scripts.pory"
	release
	end


# 364 "data/maps/WipCity1/scripts.pory"
Aldeleaf_SudowoodoShake:
# 365 "data/maps/WipCity1/scripts.pory"
	face_right
# 366 "data/maps/WipCity1/scripts.pory"
	delay_8
# 367 "data/maps/WipCity1/scripts.pory"
	face_down
# 368 "data/maps/WipCity1/scripts.pory"
	delay_8
# 369 "data/maps/WipCity1/scripts.pory"
	face_left
# 370 "data/maps/WipCity1/scripts.pory"
	delay_8
# 371 "data/maps/WipCity1/scripts.pory"
	face_down
# 372 "data/maps/WipCity1/scripts.pory"
	delay_8
# 373 "data/maps/WipCity1/scripts.pory"
	face_right
# 374 "data/maps/WipCity1/scripts.pory"
	delay_8
# 375 "data/maps/WipCity1/scripts.pory"
	face_down
# 376 "data/maps/WipCity1/scripts.pory"
	delay_8
# 377 "data/maps/WipCity1/scripts.pory"
	face_left
# 378 "data/maps/WipCity1/scripts.pory"
	delay_8
# 379 "data/maps/WipCity1/scripts.pory"
	face_down
# 380 "data/maps/WipCity1/scripts.pory"
	step_end

Aldeleaf_Sudowoodo_CutDown::
# 383 "data/maps/WipCity1/scripts.pory"
	waitse
# 384 "data/maps/WipCity1/scripts.pory"
	playse SE_SUDOWOODO_SHAKE
# 385 "data/maps/WipCity1/scripts.pory"
	safefollow
# 386 "data/maps/WipCity1/scripts.pory"
	applymovement 1, Aldeleaf_SudowoodoShake
# 387 "data/maps/WipCity1/scripts.pory"
	waitmovement 1
# 388 "data/maps/WipCity1/scripts.pory"
	checkitem ITEM_WAILMER_PAIL
# 389 "data/maps/WipCity1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Aldeleaf_Sudowoodo_CutDown_2
# 393 "data/maps/WipCity1/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
Aldeleaf_Sudowoodo_CutDown_1:
# 395 "data/maps/WipCity1/scripts.pory"
	closemessage
# 396 "data/maps/WipCity1/scripts.pory"
	waitse
# 397 "data/maps/WipCity1/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, CRY_MODE_ENCOUNTER
# 398 "data/maps/WipCity1/scripts.pory"
	delay 40
# 399 "data/maps/WipCity1/scripts.pory"
	waitmoncry
# 400 "data/maps/WipCity1/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 18
# 401 "data/maps/WipCity1/scripts.pory"
	dowildbattle
# 402 "data/maps/WipCity1/scripts.pory"
	delay 20
# 403 "data/maps/WipCity1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 404 "data/maps/WipCity1/scripts.pory"
	delay 20
# 405 "data/maps/WipCity1/scripts.pory"
	removeobject VAR_LAST_TALKED
# 406 "data/maps/WipCity1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 407 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 408 "data/maps/WipCity1/scripts.pory"
	delay 20
# 409 "data/maps/WipCity1/scripts.pory"
	release
	end

Aldeleaf_Sudowoodo_CutDown_2:
# 390 "data/maps/WipCity1/scripts.pory"
	msgbox gText_Sudowoodo_Attacked_Watering, MSGBOX_DEFAULT
	goto Aldeleaf_Sudowoodo_CutDown_1


Aldeleaf_TrainerNearSudowoodo::
# 413 "data/maps/WipCity1/scripts.pory"
	lock
# 414 "data/maps/WipCity1/scripts.pory"
	faceplayer
# 415 "data/maps/WipCity1/scripts.pory"
	goto_if_set FLAG_DEFEATED_SUDOWOODO, Aldeleaf_TrainerNearSudowoodo_2
# 439 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_OddTreeHereSeemsToWiggle, MSGBOX_DEFAULT
# 440 "data/maps/WipCity1/scripts.pory"
	waitmessage
# 441 "data/maps/WipCity1/scripts.pory"
	closemessage
Aldeleaf_TrainerNearSudowoodo_1:
# 443 "data/maps/WipCity1/scripts.pory"
	release
	end

Aldeleaf_TrainerNearSudowoodo_2:
# 416 "data/maps/WipCity1/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO2
# 417 "data/maps/WipCity1/scripts.pory"
	msgbox Aldeleaf_Text_OnceAnOddTreePastHere, MSGBOX_DEFAULT
# 418 "data/maps/WipCity1/scripts.pory"
	waitmessage
# 419 "data/maps/WipCity1/scripts.pory"
	closemessage
# 420 "data/maps/WipCity1/scripts.pory"
	safefollow
# 421 "data/maps/WipCity1/scripts.pory"
	compare VAR_FACING, DIR_WEST
	goto_if_eq Aldeleaf_TrainerNearSudowoodo_6
# 431 "data/maps/WipCity1/scripts.pory"
	applymovement 3, Aldeleaf_TrainerMoveShort
Aldeleaf_TrainerNearSudowoodo_5:
# 433 "data/maps/WipCity1/scripts.pory"
	waitmovement 0
# 434 "data/maps/WipCity1/scripts.pory"
	delay 10
# 435 "data/maps/WipCity1/scripts.pory"
	removeobject 3
# 436 "data/maps/WipCity1/scripts.pory"
	delay 30
	goto Aldeleaf_TrainerNearSudowoodo_1

Aldeleaf_TrainerNearSudowoodo_6:
# 422 "data/maps/WipCity1/scripts.pory"
	getfollowerxy VAR_TEMP_1, VAR_TEMP_2
# 423 "data/maps/WipCity1/scripts.pory"
	compare VAR_TEMP_1, 46
	goto_if_eq Aldeleaf_TrainerNearSudowoodo_11
Aldeleaf_TrainerNearSudowoodo_10:
# 427 "data/maps/WipCity1/scripts.pory"
	applymovement 3, Aldeleaf_TrainerMoveLong
	goto Aldeleaf_TrainerNearSudowoodo_5

Aldeleaf_TrainerNearSudowoodo_9:
# 424 "data/maps/WipCity1/scripts.pory"
	applymovement 3, Aldeleaf_TrainerMoveLongAlt
	goto Aldeleaf_TrainerNearSudowoodo_5

Aldeleaf_TrainerNearSudowoodo_11:
# 423 "data/maps/WipCity1/scripts.pory"
	compare VAR_TEMP_2, 6
	goto_if_eq Aldeleaf_TrainerNearSudowoodo_9
	goto Aldeleaf_TrainerNearSudowoodo_10


# 446 "data/maps/WipCity1/scripts.pory"
Aldeleaf_TrainerMoveLong:
# 447 "data/maps/WipCity1/scripts.pory"
	walk_down
# 448 "data/maps/WipCity1/scripts.pory"
	walk_right
# 448 "data/maps/WipCity1/scripts.pory"
	walk_right
# 448 "data/maps/WipCity1/scripts.pory"
	walk_right
# 449 "data/maps/WipCity1/scripts.pory"
	walk_up
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
# 450 "data/maps/WipCity1/scripts.pory"
	walk_right
	step_end

# 452 "data/maps/WipCity1/scripts.pory"
Aldeleaf_TrainerMoveLongAlt:
# 453 "data/maps/WipCity1/scripts.pory"
	walk_up
# 454 "data/maps/WipCity1/scripts.pory"
	walk_right
# 454 "data/maps/WipCity1/scripts.pory"
	walk_right
# 455 "data/maps/WipCity1/scripts.pory"
	walk_down
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
# 456 "data/maps/WipCity1/scripts.pory"
	walk_right
	step_end

# 458 "data/maps/WipCity1/scripts.pory"
Aldeleaf_TrainerMoveShort:
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
# 459 "data/maps/WipCity1/scripts.pory"
	walk_right
	step_end

AldeleafCity_Maniac_DeclineBattle::
# 79 "data/maps/WipCity1/scripts.pory"
	.string "That's fine,\n"
	.string "I would've beat you anyway.$"

AldeleafCity_Maniac_Continues::
# 83 "data/maps/WipCity1/scripts.pory"
	.string "Fine, I guess you win.\p"
	.string "… … …\p"
	.string "…What?\p"
	.string "You want a reward?\n"
	.string "Fine, take this…$"

ExplainShellBell::
# 90 "data/maps/WipCity1/scripts.pory"
	.string "Have your Pokémon hold that and\n"
	.string "any time it strikes a foe,\l"
	.string "it regains a small portion of its HP.$"

AldeleafCity_Maniac_PostBattle::
# 95 "data/maps/WipCity1/scripts.pory"
	.string "Leave me alone.$"

DangerousOutside_Text::
# 123 "data/maps/WipCity1/scripts.pory"
	.string "There's a lot of dangerous Pokémon\n"
	.string "this way.\p"
	.string "I don't think you should head outside\n"
	.string "unless you've beaten the local gym.$"

AldeleafCity_KeyMan_MyKey::
# 279 "data/maps/WipCity1/scripts.pory"
	.string "Oh! That's my key!$"

AldeleafCity_KeyMan_Return::
# 282 "data/maps/WipCity1/scripts.pory"
	.string "{PLAYER} returned the Lost Key\n"
	.string "to the man.$"

AldeleafCity_KeyMan_Help::
# 286 "data/maps/WipCity1/scripts.pory"
	.string "Thank you for returning my key!\p"
	.string "I want you to have something.\n"
	.string "Just let me open this door real quick…$"

Aldeleaf_GymUnavailable_Text::
# 296 "data/maps/WipCity1/scripts.pory"
	.string "I'm sorry, but we can't currently\n"
	.string "accept new challengers.\p"
	.string "The Gym Leader is busy dealing with a\n"
	.string "situation at the Pokémon Ranch.\p"
	.string "If you'd like to help, you can\l"
	.string "find the ranch just west of Aldeleaf.$"

Aldeleaf_WantToCut::
# 343 "data/maps/WipCity1/scripts.pory"
	.string "There's a weird tree blocking\n"
	.string "the way.\p"
	.string "Would you like to cut it?$"

WantToWaterTree::
# 348 "data/maps/WipCity1/scripts.pory"
	.string "There's a weird tree growing here.\p"
	.string "Would you like to water it with your\n"
	.string "Wailmer Pail?$"

Aldeleaf_Text_OnceAnOddTreePastHere::
# 461 "data/maps/WipCity1/scripts.pory"
	.string "Oh wow! So the tree was\n"
	.string "a wild Pokémon!?\l"
	.string "Thanks for clearing the way!$"

Aldeleaf_OddTreeHereSeemsToWiggle::
# 466 "data/maps/WipCity1/scripts.pory"
	.string "I wanted to go train in Windplume\n"
	.string "Valley but this weird tree\l"
	.string "has appeared here out of nowhere!\p"
	.string "Wonder if we should call a lumberjack\n"
	.string "to come and cut it down…$"

AldeleafCity_BirdTrainer_Text::
# 474 "data/maps/WipCity1/scripts.pory"
	.string "I wanted to take on the gym but I don't\n"
	.string "think my bird Pokémon stand a chance…$"

AldeleafCity_OldMan_Text::
# 478 "data/maps/WipCity1/scripts.pory"
	.string "There's been a lot of people\n"
	.string "coming and going recently.\l"
	.string "Could this be a sign of\l"
	.string "something sinister…$"

AldeleafCity_OldWoman_Text::
# 484 "data/maps/WipCity1/scripts.pory"
	.string "Sometimes my husband tries to\n"
	.string "read too much into everything.$"

AldeleafCity_Runner_Text::
# 488 "data/maps/WipCity1/scripts.pory"
	.string "There's no better exercise than\n"
	.string "running up and down the stairs!$"

AldeleafCity_Lass_Text::
# 492 "data/maps/WipCity1/scripts.pory"
	.string "I don't see why they had to fence off\n"
	.string "those floors on the upper layer.\p"
	.string "They're identical to the ones\n"
	.string "over here…$"

AldeleafCity_Boy_Text::
# 498 "data/maps/WipCity1/scripts.pory"
	.string "I don't remember seeing you before.\n"
	.string "Are you a Trainer?\p"
	.string "If you're looking for the gym,\n"
	.string "just head north.\l"
	.string "It's impossible to miss it.$"

AldeleafCity_Maniac_Text::
# 505 "data/maps/WipCity1/scripts.pory"
	.string "I see you are carrying\n"
	.string "some Poké Balls.\p"
	.string "You know, I'm something of a\n"
	.string "Pokémon Trainer myself.\l"
	.string "Care to have a go?$"

AldeleafCity_Maniac_Defeated::
# 512 "data/maps/WipCity1/scripts.pory"
	.string "Okay, I guess you pass…$"

AldeleafCity_Child1_Text::
# 515 "data/maps/WipCity1/scripts.pory"
	.string "We're conc…condug…doing tests!\n"
	.string "You're not allowed to look!$"

AldeleafCity_Child2_Text::
# 519 "data/maps/WipCity1/scripts.pory"
	.string "This is super secret!\n"
	.string "Go away!$"

AldeleafCity_LittleGirl_Text::
# 523 "data/maps/WipCity1/scripts.pory"
	.string "Have you been to the museum?\n"
	.string "There's lots of cool stuff to see!$"

AldeleafCity_Woman_Text::
# 527 "data/maps/WipCity1/scripts.pory"
	.string "Have you been to the ranch?\n"
	.string "They have a lot of cute Pokémon there!$"

AldeleafCity_Youngster_Text::
# 531 "data/maps/WipCity1/scripts.pory"
	.string "My friend and I are playing\n"
	.string "hide and seek.\l"
	.string "He's really hidden himself well…$"

AldeleafCity_Hidden_Text::
# 536 "data/maps/WipCity1/scripts.pory"
	.string "I'm hiding from my friend.\p"
	.string "Please don't tell him you\n"
	.string "found me, okay?\p"
	.string "Here, I'll give you this if you\n"
	.string "keep quiet.$"

AldeleafCity_Hidden_Text2::
# 543 "data/maps/WipCity1/scripts.pory"
	.string "I'm hiding from my friend.$"

AldeleafCity_KeyMan_Text::
# 546 "data/maps/WipCity1/scripts.pory"
	.string "Oh no, my key…\n"
	.string "Did I leave it at home?\l"
	.string "No… Maybe I dropped it?$"

Aldeleaf_Sign_Text::
# 551 "data/maps/WipCity1/scripts.pory"
	.string "ALDELEAF CITY\n"
	.string "“The border between nature and\l"
	.string "civilization.”$"

Aldeleaf_Sign2_Text::
# 556 "data/maps/WipCity1/scripts.pory"
	.string "Aldeleaf City Pokémon Gym\n"
	.string "Leader: Volkner$"

Aldeleaf_Sign3_Text::
# 560 "data/maps/WipCity1/scripts.pory"
	.string "{UP_ARROW} Route 28\n"
	.string "{RIGHT_ARROW} Windplume Valley$"

Aldeleaf_Sign4_Text::
# 564 "data/maps/WipCity1/scripts.pory"
	.string "Aldeleaf City Museum$"
