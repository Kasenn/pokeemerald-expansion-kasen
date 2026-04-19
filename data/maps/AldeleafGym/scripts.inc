AldeleafGym_MapScripts::
# 2 "data/maps/AldeleafGym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AldeleafGymSetUpFromLoad
# 3 "data/maps/AldeleafGym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AldeleafGymSetUpFromLoad
	.byte 0


AldeleafGymSetUpFromLoad::
# 22 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_ROUTE14_ROCKET_EVENT, 6
	goto_if_ge AldeleafGymSetUpFromLoad_2
AldeleafGymSetUpFromLoad_1:
# 25 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_AMBEROCK_STORY, STORY_AMBEROCK_STORY_COMPLETE
	goto_if_ge AldeleafGymSetUpFromLoad_5
AldeleafGymSetUpFromLoad_4:
# 28 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSetUpFromLoad_8
AldeleafGymSetUpFromLoad_7:
# 31 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSetUpFromLoad_11
AldeleafGymSetUpFromLoad_10:
# 34 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSetUpFromLoad_13
	return

AldeleafGymSetUpFromLoad_2:
# 23 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_TEMP_1
	goto AldeleafGymSetUpFromLoad_1

AldeleafGymSetUpFromLoad_5:
# 26 "data/maps/AldeleafGym/scripts.pory"
	clearflag FLAG_TEMP_1
	goto AldeleafGymSetUpFromLoad_4

AldeleafGymSetUpFromLoad_8:
# 29 "data/maps/AldeleafGym/scripts.pory"
	setmetatile 1, 73, 0x206, FALSE
	goto AldeleafGymSetUpFromLoad_7

AldeleafGymSetUpFromLoad_11:
# 32 "data/maps/AldeleafGym/scripts.pory"
	setmetatile 1, 64, 0x206, FALSE
	goto AldeleafGymSetUpFromLoad_10

AldeleafGymSetUpFromLoad_13:
# 35 "data/maps/AldeleafGym/scripts.pory"
	setmetatile 1, 55, 0x206, FALSE
	return


AldeleafGymTriggerFlagSet::
# 39 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_SYSTEM_TOGGLE_DOUBLE_WILDS
# 40 "data/maps/AldeleafGym/scripts.pory"
	release
	end


AldeleafGymTriggerFlagClear::
# 44 "data/maps/AldeleafGym/scripts.pory"
	clearflag FLAG_SYSTEM_TOGGLE_DOUBLE_WILDS
# 45 "data/maps/AldeleafGym/scripts.pory"
	release
	end


AldeleafGymSwitch1::
# 49 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch1_1
# 66 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymSwitch1_1:
# 50 "data/maps/AldeleafGym/scripts.pory"
	lock
# 51 "data/maps/AldeleafGym/scripts.pory"
	playse SE_SWITCH
# 52 "data/maps/AldeleafGym/scripts.pory"
	setmetatile 1, 73, 0x206, FALSE
# 53 "data/maps/AldeleafGym/scripts.pory"
	special DrawWholeMapView
# 54 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH1
# 55 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch1_7
AldeleafGymSwitch1_6:
# 60 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGymSwitch1_Text_1, MSGBOX_SIGN
AldeleafGymSwitch1_4:
# 62 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymSwitch1_5:
# 56 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGymSwitch1_Text_0, MSGBOX_SIGN
# 57 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
	goto AldeleafGymSwitch1_4

AldeleafGymSwitch1_7:
# 55 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch1_9
	goto AldeleafGymSwitch1_6

AldeleafGymSwitch1_9:
# 55 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch1_5
	goto AldeleafGymSwitch1_6


AldeleafGymSwitch2::
# 71 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch2_1
# 88 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymSwitch2_1:
# 72 "data/maps/AldeleafGym/scripts.pory"
	lock
# 73 "data/maps/AldeleafGym/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/AldeleafGym/scripts.pory"
	setmetatile 1, 64, 0x206, FALSE
# 75 "data/maps/AldeleafGym/scripts.pory"
	special DrawWholeMapView
# 76 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH2
# 77 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch2_7
AldeleafGymSwitch2_6:
# 82 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGymSwitch2_Text_1, MSGBOX_SIGN
AldeleafGymSwitch2_4:
# 84 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymSwitch2_5:
# 78 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGymSwitch2_Text_0, MSGBOX_SIGN
# 79 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
	goto AldeleafGymSwitch2_4

AldeleafGymSwitch2_7:
# 77 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch2_9
	goto AldeleafGymSwitch2_6

AldeleafGymSwitch2_9:
# 77 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch2_5
	goto AldeleafGymSwitch2_6


AldeleafGymSwitch3::
# 93 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch3_1
# 110 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymSwitch3_1:
# 94 "data/maps/AldeleafGym/scripts.pory"
	lock
# 95 "data/maps/AldeleafGym/scripts.pory"
	playse SE_SWITCH
# 96 "data/maps/AldeleafGym/scripts.pory"
	setmetatile 1, 55, 0x206, FALSE
# 97 "data/maps/AldeleafGym/scripts.pory"
	special DrawWholeMapView
# 98 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH3
# 99 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH1, AldeleafGymSwitch3_7
AldeleafGymSwitch3_6:
# 104 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGymSwitch3_Text_1, MSGBOX_SIGN
AldeleafGymSwitch3_4:
# 106 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymSwitch3_5:
# 100 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGymSwitch3_Text_0, MSGBOX_SIGN
# 101 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
	goto AldeleafGymSwitch3_4

AldeleafGymSwitch3_7:
# 99 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH2, AldeleafGymSwitch3_9
	goto AldeleafGymSwitch3_6

AldeleafGymSwitch3_9:
# 99 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_ALDELEAF_SWITCH3, AldeleafGymSwitch3_5
	goto AldeleafGymSwitch3_6


AldeleafGymFloor1::
# 115 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH1, AldeleafGymFloor1_1
# 119 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymFloor1_1:
# 116 "data/maps/AldeleafGym/scripts.pory"
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloor2::
# 124 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH2, AldeleafGymFloor2_1
# 128 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymFloor2_1:
# 125 "data/maps/AldeleafGym/scripts.pory"
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloor3::
# 133 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH3, AldeleafGymFloor3_1
# 137 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymFloor3_1:
# 134 "data/maps/AldeleafGym/scripts.pory"
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloor4::
# 142 "data/maps/AldeleafGym/scripts.pory"
	goto_if_unset FLAG_ALDELEAF_SWITCH_ALL, AldeleafGymFloor4_1
# 146 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymFloor4_1:
# 143 "data/maps/AldeleafGym/scripts.pory"
	goto AldeleafGymFloorTriggered
	return


AldeleafGymFloorTriggered::
# 151 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_ALDELEAF_GYM_STEPS, 3
	goto_if_le AldeleafGymFloorTriggered_1
# 157 "data/maps/AldeleafGym/scripts.pory"
	setvar VAR_ALDELEAF_GYM_STEPS, 0
# 158 "data/maps/AldeleafGym/scripts.pory"
	random 10
# 159 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_le AldeleafGymFloorTriggered_5
# 163 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_ge AldeleafGymFloorTriggered_7
	return

AldeleafGymFloorTriggered_1:
# 152 "data/maps/AldeleafGym/scripts.pory"
	addvar VAR_ALDELEAF_GYM_STEPS, 1
# 153 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymFloorTriggered_5:
# 160 "data/maps/AldeleafGym/scripts.pory"
	release
	end

AldeleafGymFloorTriggered_7:
# 164 "data/maps/AldeleafGym/scripts.pory"
	random 10
# 165 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AldeleafGymFloorTriggered_10
AldeleafGymFloorTriggered_9:
# 168 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AldeleafGymFloorTriggered_13
AldeleafGymFloorTriggered_12:
# 171 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq AldeleafGymFloorTriggered_16
AldeleafGymFloorTriggered_15:
# 174 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq AldeleafGymFloorTriggered_19
AldeleafGymFloorTriggered_18:
# 177 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq AldeleafGymFloorTriggered_22
AldeleafGymFloorTriggered_21:
# 180 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq AldeleafGymFloorTriggered_25
AldeleafGymFloorTriggered_24:
# 183 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq AldeleafGymFloorTriggered_28
AldeleafGymFloorTriggered_27:
# 186 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq AldeleafGymFloorTriggered_31
AldeleafGymFloorTriggered_30:
# 189 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq AldeleafGymFloorTriggered_34
AldeleafGymFloorTriggered_33:
# 192 "data/maps/AldeleafGym/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq AldeleafGymFloorTriggered_37
AldeleafGymFloorTriggered_36:
# 195 "data/maps/AldeleafGym/scripts.pory"
	doscriptedmonwithouttrainerbattle
	return

AldeleafGymFloorTriggered_10:
# 166 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_MAGNEMITE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_9

AldeleafGymFloorTriggered_13:
# 169 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_VOLTORB, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_12

AldeleafGymFloorTriggered_16:
# 172 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_HELIOPTILE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_15

AldeleafGymFloorTriggered_19:
# 175 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_MAGNEMITE, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_18

AldeleafGymFloorTriggered_22:
# 178 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_VOLTORB, 11, ITEM_NONE, SPECIES_VOLTORB, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_21

AldeleafGymFloorTriggered_25:
# 181 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_VOLTORB, 11, ITEM_NONE, SPECIES_HELIOPTILE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_24

AldeleafGymFloorTriggered_28:
# 184 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_VOLTORB, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_27

AldeleafGymFloorTriggered_31:
# 187 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_HELIOPTILE, 11, ITEM_NONE, SPECIES_HELIOPTILE, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_30

AldeleafGymFloorTriggered_34:
# 190 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_HELIOPTILE, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_33

AldeleafGymFloorTriggered_37:
# 193 "data/maps/AldeleafGym/scripts.pory"
	setwildbattlelevelrange SPECIES_CHARJABUG, 11, ITEM_NONE, SPECIES_CHARJABUG, 14, ITEM_NONE
	goto AldeleafGymFloorTriggered_36


Aldeleaf_Gym_Volkner_Talk::
# 200 "data/maps/AldeleafGym/scripts.pory"
	lock
# 201 "data/maps/AldeleafGym/scripts.pory"
	faceplayer
# 202 "data/maps/AldeleafGym/scripts.pory"
	checktrainerflag TRAINER_LEADER_VOLKNER
	goto_if 1, Aldeleaf_Gym_Volkner_Talk_2
# 208 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Volkner_Talk_Text_0
# 209 "data/maps/AldeleafGym/scripts.pory"
	waitmessage
# 210 "data/maps/AldeleafGym/scripts.pory"
	closemessage
# 211 "data/maps/AldeleafGym/scripts.pory"
	turnobject 18, DIR_WEST
Aldeleaf_Gym_Volkner_Talk_1:
# 213 "data/maps/AldeleafGym/scripts.pory"
	release
	end

Aldeleaf_Gym_Volkner_Talk_2:
# 203 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_VolknerPostBattle, MSGBOX_DEFAULT
# 204 "data/maps/AldeleafGym/scripts.pory"
	waitmessage
# 205 "data/maps/AldeleafGym/scripts.pory"
	closemessage
	goto Aldeleaf_Gym_Volkner_Talk_1


Aldeleaf_Gym_EventScript_Volkner::
# 217 "data/maps/AldeleafGym/scripts.pory"
	lock
# 218 "data/maps/AldeleafGym/scripts.pory"
	delay 10
# 219 "data/maps/AldeleafGym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 220 "data/maps/AldeleafGym/scripts.pory"
	turnobject 18, DIR_WEST
# 221 "data/maps/AldeleafGym/scripts.pory"
	special SpawnCameraObject
# 222 "data/maps/AldeleafGym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
# 223 "data/maps/AldeleafGym/scripts.pory"
	waitmovement 0
# 224 "data/maps/AldeleafGym/scripts.pory"
	delay 10
# 225 "data/maps/AldeleafGym/scripts.pory"
	special RemoveCameraObject
# 226 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_VOLKNER, Aldeleaf_Gym_Text_VolknerIntro, Aldeleaf_Gym_Text_VolknerDefeat, Aldeleaf_Gym_EventScript_VolknerDefeated, NO_MUSIC
# 227 "data/maps/AldeleafGym/scripts.pory"
	goto Aldeleaf_Gym_EventScript_GiveWildCharge
# 228 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_VolknerPostBattle, MSGBOX_DEFAULT
# 229 "data/maps/AldeleafGym/scripts.pory"
	release
	end


Aldeleaf_Gym_EventScript_VolknerDefeated::
# 233 "data/maps/AldeleafGym/scripts.pory"
	special SpawnCameraObject
# 234 "data/maps/AldeleafGym/scripts.pory"
	delay 30
# 235 "data/maps/AldeleafGym/scripts.pory"
	applymovement 18, Walk3Left
# 236 "data/maps/AldeleafGym/scripts.pory"
	applymovement LOCALID_PLAYER, Walk3Right
# 237 "data/maps/AldeleafGym/scripts.pory"
	waitmovement 0
# 238 "data/maps/AldeleafGym/scripts.pory"
	delay 15
# 239 "data/maps/AldeleafGym/scripts.pory"
	message Aldeleaf_Gym_Text_ReceivedThunderBadge
# 240 "data/maps/AldeleafGym/scripts.pory"
	waitmessage
# 241 "data/maps/AldeleafGym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 242 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_ThunderBadgeInfoTakeThis, MSGBOX_DEFAULT
# 243 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 244 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 245 "data/maps/AldeleafGym/scripts.pory"
	setflag FLAG_ALDELEAF_SWITCH_ALL
# 246 "data/maps/AldeleafGym/scripts.pory"
	setvar VAR_0x8008, 2
# 247 "data/maps/AldeleafGym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 248 "data/maps/AldeleafGym/scripts.pory"
	special RemoveCameraObject
# 249 "data/maps/AldeleafGym/scripts.pory"
	goto Aldeleaf_Gym_EventScript_GiveWildCharge
	end


Aldeleaf_Gym_EventScript_GiveWildCharge::
# 254 "data/maps/AldeleafGym/scripts.pory"
	giveitem ITEM_TM_CHARGE_BEAM
# 255 "data/maps/AldeleafGym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 256 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_ExplainWildCharge, MSGBOX_DEFAULT
# 257 "data/maps/AldeleafGym/scripts.pory"
	release
	end


Aldeleaf_Gym_EventScript_GymGuide::
# 332 "data/maps/AldeleafGym/scripts.pory"
	lock
# 333 "data/maps/AldeleafGym/scripts.pory"
	faceplayer
# 334 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, Aldeleaf_Gym_EventScript_GymGuide_2
# 338 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
Aldeleaf_Gym_EventScript_GymGuide_1:
# 340 "data/maps/AldeleafGym/scripts.pory"
	release
	end

Aldeleaf_Gym_EventScript_GymGuide_2:
# 335 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	goto Aldeleaf_Gym_EventScript_GymGuide_1


Aldeleaf_Gym_EventScript_Statue::
# 344 "data/maps/AldeleafGym/scripts.pory"
	lock
# 345 "data/maps/AldeleafGym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Aldeleaf_Gym_EventScript_Statue_2
# 349 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_GymStatue, MSGBOX_SIGN
Aldeleaf_Gym_EventScript_Statue_1:
	end

Aldeleaf_Gym_EventScript_Statue_2:
# 346 "data/maps/AldeleafGym/scripts.pory"
	msgbox Aldeleaf_Gym_Text_GymStatueCertified, MSGBOX_SIGN
	goto Aldeleaf_Gym_EventScript_Statue_1


AldeleafGym_Man::
# 386 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Man_Text, MSGBOX_NPC
	end


AldeleafGym_Trainer1::
# 395 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_1, AldeleafGym_Text_Trainer1Intro, AldeleafGym_Text_Trainer1Defeat
# 396 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer2::
# 413 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_2, AldeleafGym_Text_Trainer2Intro, AldeleafGym_Text_Trainer2Defeat
# 414 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer2PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer3::
# 430 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_3, AldeleafGym_Text_Trainer3Intro, AldeleafGym_Text_Trainer3Defeat
# 431 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer3PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer4::
# 448 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_4, AldeleafGym_Text_Trainer4Intro, AldeleafGym_Text_Trainer4Defeat
# 449 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer4PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer5::
# 464 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_5, AldeleafGym_Text_Trainer5Intro, AldeleafGym_Text_Trainer5Defeat
# 465 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer5PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer6::
# 482 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_6, AldeleafGym_Text_Trainer6Intro, AldeleafGym_Text_Trainer6Defeat
# 483 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer6PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer7::
# 502 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_7, AldeleafGym_Text_Trainer7Intro, AldeleafGym_Text_Trainer7Defeat
# 503 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer7PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer8::
# 522 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_8, AldeleafGym_Text_Trainer8Intro, AldeleafGym_Text_Trainer8Defeat
# 523 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer8PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer9::
# 541 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_9, AldeleafGym_Text_Trainer9Intro, AldeleafGym_Text_Trainer9Defeat
# 542 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer9PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer10::
# 555 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_double TRAINER_ALDEGYM_10, AldeleafGym_Text_Trainer10Intro, AldeleafGym_Text_Trainer10Defeat, AldeleafGym_Text_10NotEnoughMons
# 556 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer10PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer11::
# 575 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_double TRAINER_ALDEGYM_10, AldeleafGym_Text_Trainer11Intro, AldeleafGym_Text_Trainer11Defeat, AldeleafGym_Text_11NotEnoughMons
# 576 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer11PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer12::
# 595 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_11, AldeleafGym_Text_Trainer12Intro, AldeleafGym_Text_Trainer12Defeat
# 596 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer12PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer13::
# 615 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_12, AldeleafGym_Text_Trainer13Intro, AldeleafGym_Text_Trainer13Defeat
# 616 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer13PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer14::
# 631 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_13, AldeleafGym_Text_Trainer14Intro, AldeleafGym_Text_Trainer14Defeat
# 632 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer15::
# 650 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_14, AldeleafGym_Text_Trainer15Intro, AldeleafGym_Text_Trainer15Defeat
# 651 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer1PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer16::
# 664 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_15, AldeleafGym_Text_Trainer16Intro, AldeleafGym_Text_Trainer16Defeat
# 665 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer16PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGym_Trainer17::
# 684 "data/maps/AldeleafGym/scripts.pory"
	trainerbattle_single TRAINER_ALDEGYM_16, AldeleafGym_Text_Trainer17Intro, AldeleafGym_Text_Trainer17Defeat
# 685 "data/maps/AldeleafGym/scripts.pory"
	msgbox AldeleafGym_Text_Trainer17PostBattle, MSGBOX_AUTOCLOSE
	end


AldeleafGymSwitch1_Text_0:
# 56 "data/maps/AldeleafGym/scripts.pory"
	.string "Switch 1 activated.\nAll switches have been activated.$"

AldeleafGymSwitch1_Text_1:
# 60 "data/maps/AldeleafGym/scripts.pory"
	.string "Switch 1 activated.$"

AldeleafGymSwitch2_Text_0:
# 78 "data/maps/AldeleafGym/scripts.pory"
	.string "Switch 2 activated.\nAll switches have been activated.$"

AldeleafGymSwitch2_Text_1:
# 82 "data/maps/AldeleafGym/scripts.pory"
	.string "Switch 2 activated.$"

AldeleafGymSwitch3_Text_0:
# 100 "data/maps/AldeleafGym/scripts.pory"
	.string "Switch 3 activated.\nAll switches have been activated.$"

AldeleafGymSwitch3_Text_1:
# 104 "data/maps/AldeleafGym/scripts.pory"
	.string "Switch 3 activated.$"

Aldeleaf_Gym_Volkner_Talk_Text_0:
# 208 "data/maps/AldeleafGym/scripts.pory"
	.string "Volkner: I see you've arrived.\pIf you're ready, go stand on the other\nside of the arena so we may begin.$"

Aldeleaf_Gym_Text_VolknerIntro::
# 261 "data/maps/AldeleafGym/scripts.pory"
	.string "Volkner: I knew you'd be here soon.\n"
	.string "Glad to see you did not disappoint.\p"
	.string "Even though I'm grateful for\n"
	.string "your help at the ranch,\l"
	.string "I am the Leader of this Gym and\l"
	.string "you are a challenger.\p"
	.string "I assume you understand what\n"
	.string "that entails…\p"
	.string "…All right, challenger.\p"
	.string "I'm Volkner, the Gym Leader.\p"
	.string "It's not often, but some Trainers\n"
	.string "manage to come and challenge me.\l"
	.string "But they've all been boring battles.\p"
	.string "Anyway, I guess we'd better get this\n"
	.string "done.\p"
	.string "I hope you're the Trainer who'll make\n"
	.string "me remember how fun it is to battle!$"

Aldeleaf_Gym_Text_VolknerDefeat::
# 280 "data/maps/AldeleafGym/scripts.pory"
	.string "…Hehehe.\p"
	.string "Hahahah!\p"
	.string "…That was the most fun I've had\n"
	.string "in a battle since…I don't know when!\p"
	.string "It's also made me excited to know\n"
	.string "you and your team will keep battling\l"
	.string "to greater heights!\p"
	.string "This is your second Gym Badge.\n"
	.string "You've earned this!$"

Aldeleaf_Gym_Text_ReceivedThunderBadge::
# 291 "data/maps/AldeleafGym/scripts.pory"
	.string "{PLAYER} received the Dynamo Badge\n"
	.string "from Volkner!$"

Aldeleaf_Gym_Text_ThunderBadgeInfoTakeThis::
# 295 "data/maps/AldeleafGym/scripts.pory"
	.string "The Dynamo Badge makes all Pokémon\n"
	.string "up to level 40, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "It also enables them to use the HM move\n"
	.string "“Cut” outside of battle.\p"
	.string "Here, have this TM as well.$"

Aldeleaf_Gym_Text_ExplainWildCharge::
# 303 "data/maps/AldeleafGym/scripts.pory"
	.string "That TM contains the move Charge Beam.\p"
	.string "It's a really powerful attack\n"
	.string "where the user charges up to fire\l"
	.string "an electric beam at the opponent.\p"
	.string "And sometimes the residual electricity\n"
	.string "from the attack may also boost\l"
	.string "the user's Sp. Atk stat.$"

Aldeleaf_Gym_Text_VolknerPostBattle::
# 312 "data/maps/AldeleafGym/scripts.pory"
	.string "After witnessing your strength here,\n"
	.string "I'm starting to doubt whether you even\l"
	.string "needed our help with Team Rocket\l"
	.string "back at the ranch.$"

Aldeleaf_Gym_Text_GymStatue::
# 318 "data/maps/AldeleafGym/scripts.pory"
	.string "Aldeleaf City Pokémon Gym\p"
	.string "Volkner's certified trainers:\n"
	.string "{BROTHER}\l"
	.string "{RIVAL}$"

Aldeleaf_Gym_Text_GymStatueCertified::
# 324 "data/maps/AldeleafGym/scripts.pory"
	.string "Aldeleaf City Pokémon Gym\p"
	.string "Volkner's certified trainers:\n"
	.string "{BROTHER}\l"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"

Aldeleaf_Gym_Text_GymGuideAdvice::
# 353 "data/maps/AldeleafGym/scripts.pory"
	.string "Yo, champ in the making!\p"
	.string "The leader of this gym, Volkner,\n"
	.string "is an Electric-type trainer.\p"
	.string "Go against him with flying- or water-\n"
	.string "type Pokémon and you're going to have\l"
	.string "a bad time!\p"
	.string "By the by, many of the trainers\n"
	.string "here like to work in pairs!\l"
	.string "And see those peculiar floor tiles?\p"
	.string "Stepping on one might activate a trap\n"
	.string "that sends a few Electric-type Pokémon\l"
	.string "flying your way, so you better be\l"
	.string "prepared!\p"
	.string "Do note that those Pokémon are\n"
	.string "actually the property of the gym and\l"
	.string "considered part of your gym trial.\p"
	.string "As such, catching them or running away\n"
	.string "from a battle is strictly prohibited!\p"
	.string "If you find the going too hard,\n"
	.string "there's always those pressure plates\l"
	.string "in the side rooms.\l"
	.string "Maybe stepping on one might\l"
	.string "tamper with the floor mechanism…\p"
	.string "Anyway, that's enough from me.\n"
	.string "Go get 'em, Champ!$"

Aldeleaf_Gym_Text_GymGuidePostVictory::
# 380 "data/maps/AldeleafGym/scripts.pory"
	.string "Whoa! What a shocking outcome!\n"
	.string "You sure charged in and showed\l"
	.string "everyone who's the boss!$"

AldeleafGym_Man_Text::
# 389 "data/maps/AldeleafGym/scripts.pory"
	.string "How peculiar…\p"
	.string "I don't see a plate controlling\n"
	.string "this floor…$"

AldeleafGym_Text_Trainer1Intro::
# 399 "data/maps/AldeleafGym/scripts.pory"
	.string "I trained under Volkner!\n"
	.string "There ain't no way I'll lose easily!$"

AldeleafGym_Text_Trainer1Defeat::
# 403 "data/maps/AldeleafGym/scripts.pory"
	.string "Unplugged and turned off…$"

AldeleafGym_Text_Trainer1PostBattle::
# 406 "data/maps/AldeleafGym/scripts.pory"
	.string "Volkner, our Gym Leader, is a really\n"
	.string "experienced trainer.\p"
	.string "There have been talks of him possibly\n"
	.string "becoming a member of the Elite Four!$"

AldeleafGym_Text_Trainer2Intro::
# 417 "data/maps/AldeleafGym/scripts.pory"
	.string "My electric soul, it'll shatter your\n"
	.string "dreams whole, whoa-yeahah!$"

AldeleafGym_Text_Trainer2Defeat::
# 421 "data/maps/AldeleafGym/scripts.pory"
	.string "That was plugged in, amped up,\n"
	.string "over-driven electric, man!$"

AldeleafGym_Text_Trainer2PostBattle::
# 425 "data/maps/AldeleafGym/scripts.pory"
	.string "Pokémon and rock, it's all about heart,\n"
	.string "whoa-yeah!$"

AldeleafGym_Text_Trainer3Intro::
# 434 "data/maps/AldeleafGym/scripts.pory"
	.string "With my charm and my Pokémon's moves,\n"
	.string "you'll be shocked!$"

AldeleafGym_Text_Trainer3Defeat::
# 438 "data/maps/AldeleafGym/scripts.pory"
	.string "I'm shocked by your power!$"

AldeleafGym_Text_Trainer3PostBattle::
# 441 "data/maps/AldeleafGym/scripts.pory"
	.string "I've heard that Volkner used to be\n"
	.string "the leader of a gym over in Sinnoh.\p"
	.string "Wonder what caused him to move over\n"
	.string "here…$"

AldeleafGym_Text_Trainer4Intro::
# 452 "data/maps/AldeleafGym/scripts.pory"
	.string "I love shiny things!$"

AldeleafGym_Text_Trainer4Defeat::
# 455 "data/maps/AldeleafGym/scripts.pory"
	.string "Oh…\n"
	.string "My eyes are frazzled…$"

AldeleafGym_Text_Trainer4PostBattle::
# 459 "data/maps/AldeleafGym/scripts.pory"
	.string "You shine brighter than anyone\n"
	.string "I've seen before!$"

AldeleafGym_Text_Trainer5Intro::
# 468 "data/maps/AldeleafGym/scripts.pory"
	.string "This Gym's got interesting mechanics!\n"
	.string "Isn't it fun?$"

AldeleafGym_Text_Trainer5Defeat::
# 472 "data/maps/AldeleafGym/scripts.pory"
	.string "It's no fun to lose…$"

AldeleafGym_Text_Trainer5PostBattle::
# 475 "data/maps/AldeleafGym/scripts.pory"
	.string "Volkner is surprisingly good at\n"
	.string "tinkering with technology.\p"
	.string "Did you know that he personally\n"
	.string "designed all those floor traps?$"

AldeleafGym_Text_Trainer6Intro::
# 486 "data/maps/AldeleafGym/scripts.pory"
	.string "Get ready to face the next Pokémon\n"
	.string "League Champion!$"

AldeleafGym_Text_Trainer6Defeat::
# 490 "data/maps/AldeleafGym/scripts.pory"
	.string "Did I say I'd be the next Champion?\n"
	.string "I meant the one after that…$"

AldeleafGym_Text_Trainer6PostBattle::
# 494 "data/maps/AldeleafGym/scripts.pory"
	.string "If you're goals feel unreachable,\n"
	.string "don't beat yourself up for not being\l"
	.string "able to reach them.\p"
	.string "Sometimes it's better to lower your\n"
	.string "expectations instead.$"

AldeleafGym_Text_Trainer7Intro::
# 506 "data/maps/AldeleafGym/scripts.pory"
	.string "Here it comes!\n"
	.string "Get ready for my trump card!$"

AldeleafGym_Text_Trainer7Defeat::
# 510 "data/maps/AldeleafGym/scripts.pory"
	.string "Shocking… I didn't see this coming!$"

AldeleafGym_Text_Trainer7PostBattle::
# 513 "data/maps/AldeleafGym/scripts.pory"
	.string "You've got me beat…\p"
	.string "Your desire and the noble way\n"
	.string "your Pokémon battled for you…\p"
	.string "I even felt thrilled during our\n"
	.string "match.\p"
	.string "That was a very good battle.$"

AldeleafGym_Text_Trainer8Intro::
# 526 "data/maps/AldeleafGym/scripts.pory"
	.string "Wow! I'm surprised you've come this\n"
	.string "far, but you'll have to turn back.\p"
	.string "There isn't any chance that you\n"
	.string "could ever beat me!$"

AldeleafGym_Text_Trainer8Defeat::
# 532 "data/maps/AldeleafGym/scripts.pory"
	.string "What makes your Pokémon\n"
	.string "so special?$"

AldeleafGym_Text_Trainer8PostBattle::
# 536 "data/maps/AldeleafGym/scripts.pory"
	.string "As a challenger, you're one tough\n"
	.string "Trainer.$"

AldeleafGym_Text_Trainer9Intro::
# 545 "data/maps/AldeleafGym/scripts.pory"
	.string "I want to win!$"

AldeleafGym_Text_Trainer9Defeat::
# 548 "data/maps/AldeleafGym/scripts.pory"
	.string "I couldn't win…$"

AldeleafGym_Text_Trainer9PostBattle::
# 551 "data/maps/AldeleafGym/scripts.pory"
	.string "Next time I'll win, for sure!$"

AldeleafGym_Text_Trainer10Intro::
# 559 "data/maps/AldeleafGym/scripts.pory"
	.string "Teri: Yay! We're gonna battle with\n"
	.string "lots of Pokémon today!$"

AldeleafGym_Text_Trainer10Defeat::
# 563 "data/maps/AldeleafGym/scripts.pory"
	.string "Teri: Even with both of us, we lost.$"

AldeleafGym_Text_Trainer10PostBattle::
# 566 "data/maps/AldeleafGym/scripts.pory"
	.string "Teri: One day, our twin power will\n"
	.string "rule the world!$"

AldeleafGym_Text_10NotEnoughMons::
# 570 "data/maps/AldeleafGym/scripts.pory"
	.string "Teri: It's not a fair fight if\n"
	.string "you only have 1 Pokémon!$"

AldeleafGym_Text_Trainer11Intro::
# 579 "data/maps/AldeleafGym/scripts.pory"
	.string "Tia: Yay! We're gonna have a battle\n"
	.string "with three Trainers!$"

AldeleafGym_Text_Trainer11Defeat::
# 583 "data/maps/AldeleafGym/scripts.pory"
	.string "Tia: We two couldn't win.$"

AldeleafGym_Text_Trainer11PostBattle::
# 586 "data/maps/AldeleafGym/scripts.pory"
	.string "Tia: As long as we fight together,\n"
	.string "we're twice as strong!$"

AldeleafGym_Text_11NotEnoughMons::
# 590 "data/maps/AldeleafGym/scripts.pory"
	.string "Tia: You should have at least 2 Pokémon\n"
	.string "to make this fair!$"

AldeleafGym_Text_Trainer12Intro::
# 599 "data/maps/AldeleafGym/scripts.pory"
	.string "I'm not just looking for tough\n"
	.string "Trainers to battle.\p"
	.string "I've been battling here because\n"
	.string "I want to feel the rush!$"

AldeleafGym_Text_Trainer12Defeat::
# 605 "data/maps/AldeleafGym/scripts.pory"
	.string "Your power is thrilling...\n"
	.string "I'm thrilled down to my toes!$"

AldeleafGym_Text_Trainer12PostBattle::
# 609 "data/maps/AldeleafGym/scripts.pory"
	.string "I'm so glad that there are Pokémon!\p"
	.string "There isn't much else that gives me\n"
	.string "the thrill that Pokémon do!$"

AldeleafGym_Text_Trainer13Intro::
# 619 "data/maps/AldeleafGym/scripts.pory"
	.string "My Pikachu is the strongest\n"
	.string "in the world!$"

AldeleafGym_Text_Trainer13Defeat::
# 623 "data/maps/AldeleafGym/scripts.pory"
	.string "My Pikachu…$"

AldeleafGym_Text_Trainer13PostBattle::
# 626 "data/maps/AldeleafGym/scripts.pory"
	.string "Should I evolve my Pikachu?\n"
	.string "Will it stay cute afterwards?$"

AldeleafGym_Text_Trainer14Intro::
# 635 "data/maps/AldeleafGym/scripts.pory"
	.string "I'm one of the strongest trainers\n"
	.string "in this gym!\l"
	.string "You better not underestimate me!$"

AldeleafGym_Text_Trainer14Defeat::
# 640 "data/maps/AldeleafGym/scripts.pory"
	.string "Looks like I'm the one who\n"
	.string "underestimated YOU.$"

AldeleafGym_Text_Trainer14PostBattle::
# 644 "data/maps/AldeleafGym/scripts.pory"
	.string "The gap between me and Volkner is\n"
	.string "unimaginable.\l"
	.string "I hope you're prepared.$"

AldeleafGym_Text_Trainer15Intro::
# 654 "data/maps/AldeleafGym/scripts.pory"
	.string "Watch out, or I'll zap you!$"

AldeleafGym_Text_Trainer15Defeat::
# 657 "data/maps/AldeleafGym/scripts.pory"
	.string "Couldn't create a big enough spark…$"

AldeleafGym_Text_Trainer15PostBattle::
# 660 "data/maps/AldeleafGym/scripts.pory"
	.string "Next time I'll really zap you!$"

AldeleafGym_Text_Trainer16Intro::
# 668 "data/maps/AldeleafGym/scripts.pory"
	.string "Whether you're a Trainer or a\n"
	.string "Guitarist, it takes dedication to\l"
	.string "improve your mad skills!$"

AldeleafGym_Text_Trainer16Defeat::
# 673 "data/maps/AldeleafGym/scripts.pory"
	.string "My skills seem to have let me down.\n"
	.string "I must have been out of tune!$"

AldeleafGym_Text_Trainer16PostBattle::
# 677 "data/maps/AldeleafGym/scripts.pory"
	.string "The way you battle, I can feel the\n"
	.string "very heart of rock and roll.\p"
	.string "Tell me, are you maybe a fan of\n"
	.string "rocking out?$"

AldeleafGym_Text_Trainer17Intro::
# 688 "data/maps/AldeleafGym/scripts.pory"
	.string "You're not strong enough for Volkner!\n"
	.string "I'll take you on instead!$"

AldeleafGym_Text_Trainer17Defeat::
# 692 "data/maps/AldeleafGym/scripts.pory"
	.string "Okay, you are strong…$"

AldeleafGym_Text_Trainer17PostBattle::
# 695 "data/maps/AldeleafGym/scripts.pory"
	.string "I wasn't strong enough to block\n"
	.string "your way…\l"
	.string "I need to train more!$"
