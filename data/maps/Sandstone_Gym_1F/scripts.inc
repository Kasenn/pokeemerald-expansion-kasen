Sandstone_Gym_1F_MapScripts::
# 2 "data/maps/Sandstone_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ResetCheckpoint
# 3 "data/maps/Sandstone_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandstoneGetPorted
# 4 "data/maps/Sandstone_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SetTeleportFloor
# 5 "data/maps/Sandstone_Gym_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RemoveGymWall2
	.byte 0


SetTeleportFloor::
# 9 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setstepcallback STEP_CB_TELEPORT_FLOOR
	end


SandstoneGetPorted::
# 14 "data/maps/Sandstone_Gym_1F/scripts.pory"
	map_script_2 VAR_GYM_TELEPORT, 0, SandstoneGym_Warp
	end


ResetCheckpoint::
# 19 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, ResetCheckpoint_2
ResetCheckpoint_1:
# 23 "data/maps/Sandstone_Gym_1F/scripts.pory"
	copyvar VAR_GYM_TELEPORT, 1
	end

ResetCheckpoint_2:
# 20 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call RemoveGymWall
# 21 "data/maps/Sandstone_Gym_1F/scripts.pory"
	special DrawWholeMapView
	goto ResetCheckpoint_1


RemoveGymWall2::
# 27 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, RemoveGymWall2_1
	return

RemoveGymWall2_1:
# 28 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call RemoveGymWall
	return


RemoveGymWall::
# 32 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setmetatile 14, 36, 0x22F, FALSE
# 33 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setmetatile 14, 37, 0x237, FALSE
# 34 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setmetatile 14, 38, 0x202, FALSE
# 35 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setmetatile 14, 39, 0x210, FALSE
# 36 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setmetatile 14, 40, 0x21A, FALSE
	return


SandstoneGym_Warp::
# 41 "data/maps/Sandstone_Gym_1F/scripts.pory"
	lock
# 42 "data/maps/Sandstone_Gym_1F/scripts.pory"
	playse SE_FAILURE
# 43 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitse
# 44 "data/maps/Sandstone_Gym_1F/scripts.pory"
	delay 10
# 45 "data/maps/Sandstone_Gym_1F/scripts.pory"
	switch VAR_SANDSTONE_GYM_CHECKPOINTS
# 46 "data/maps/Sandstone_Gym_1F/scripts.pory"
	case 0, SandstoneGym_Warp_3
# 48 "data/maps/Sandstone_Gym_1F/scripts.pory"
	case 1, SandstoneGym_Warp_4
# 50 "data/maps/Sandstone_Gym_1F/scripts.pory"
	case 2, SandstoneGym_Warp_5
SandstoneGym_Warp_1:
# 53 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitstate
	end

SandstoneGym_Warp_3:
# 47 "data/maps/Sandstone_Gym_1F/scripts.pory"
	warp MAP_SANDSTONE_GYM_1F, 9
	goto SandstoneGym_Warp_1

SandstoneGym_Warp_4:
# 49 "data/maps/Sandstone_Gym_1F/scripts.pory"
	warp MAP_SANDSTONE_GYM_1F, 10
	goto SandstoneGym_Warp_1

SandstoneGym_Warp_5:
# 51 "data/maps/Sandstone_Gym_1F/scripts.pory"
	warp MAP_SANDSTONE_GYM_1F, 11
	goto SandstoneGym_Warp_1


SetSandstoneBike::
# 58 "data/maps/Sandstone_Gym_1F/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 59 "data/maps/Sandstone_Gym_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SetSandstoneBike_2
SetSandstoneBike_1:
# 62 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setflag FLAG_SYS_CYCLING_ROAD
# 63 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end

SetSandstoneBike_2:
# 60 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto SandStoneNoBike
	goto SetSandstoneBike_1


ClearSandstoneBike::
# 69 "data/maps/Sandstone_Gym_1F/scripts.pory"
	clearflag FLAG_SYS_CYCLING_ROAD
# 70 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end


SandStoneNoBike::
# 75 "data/maps/Sandstone_Gym_1F/scripts.pory"
	lock
# 76 "data/maps/Sandstone_Gym_1F/scripts.pory"
	playse SE_PIN
# 77 "data/maps/Sandstone_Gym_1F/scripts.pory"
	turnobject 9, DIR_NORTH
# 78 "data/maps/Sandstone_Gym_1F/scripts.pory"
	safefollow
# 79 "data/maps/Sandstone_Gym_1F/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 80 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitmovement 0
# 81 "data/maps/Sandstone_Gym_1F/scripts.pory"
	applymovement 9, Common_Movement_Delay48
# 82 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/Sandstone_Gym_1F/scripts.pory"
	applymovement 9, TurnLeft
# 84 "data/maps/Sandstone_Gym_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MoveDown1
# 85 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitmovement 0
# 86 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox YouHaveNoBike
# 87 "data/maps/Sandstone_Gym_1F/scripts.pory"
	closemessage
# 88 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end


# 97 "data/maps/Sandstone_Gym_1F/scripts.pory"
MoveDown1:
# 98 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_down
# 99 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_in_place_fast_right
	step_end

# 101 "data/maps/Sandstone_Gym_1F/scripts.pory"
TurnLeft:
# 102 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_in_place_fast_left
	step_end

SandstoneCheckpoint0::
# 106 "data/maps/Sandstone_Gym_1F/scripts.pory"
	switch VAR_SANDSTONE_GYM_CHECKPOINTS
# 107 "data/maps/Sandstone_Gym_1F/scripts.pory"
	case 0, SandstoneCheckpoint0_3
# 109 "data/maps/Sandstone_Gym_1F/scripts.pory"
	case 1, SandstoneCheckpoint0_4
# 111 "data/maps/Sandstone_Gym_1F/scripts.pory"
	case 2, SandstoneCheckpoint0_5
SandstoneCheckpoint0_1:
# 115 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end

SandstoneCheckpoint0_3:
# 108 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 8, 36
	goto SandstoneCheckpoint0_1

SandstoneCheckpoint0_4:
# 110 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 21, 9
	goto SandstoneCheckpoint0_1

SandstoneCheckpoint0_5:
# 112 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 36, 17
	goto SandstoneCheckpoint0_1


SandstoneCheckpoint1::
# 119 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 21, 9
# 120 "data/maps/Sandstone_Gym_1F/scripts.pory"
	compare VAR_SANDSTONE_GYM_CHECKPOINTS, 0
	goto_if_eq SandstoneCheckpoint1_2
SandstoneCheckpoint1_1:
# 123 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end

SandstoneCheckpoint1_2:
# 121 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 1
	goto SandstoneCheckpoint1_1


SandstoneCheckpoint2::
# 127 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 36, 17
# 128 "data/maps/Sandstone_Gym_1F/scripts.pory"
	compare VAR_SANDSTONE_GYM_CHECKPOINTS, 1
	goto_if_eq SandstoneCheckpoint2_2
SandstoneCheckpoint2_1:
# 131 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end

SandstoneCheckpoint2_2:
# 129 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 2
	goto SandstoneCheckpoint2_1


PrintIceStep::
# 136 "data/maps/Sandstone_Gym_1F/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_GYM_TELEPORT
# 137 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox PrintIceStep_Text_0
# 138 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end


SandGym_KorrinaTalk::
# 143 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SandGym_KorrinaTalk_2
# 146 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_YouArrived, MSGBOX_NPC
# 147 "data/maps/Sandstone_Gym_1F/scripts.pory"
	turnobject 1, DIR_EAST
SandGym_KorrinaTalk_1:
	end

SandGym_KorrinaTalk_2:
# 144 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_KorrinaPosBat, MSGBOX_NPC
	goto SandGym_KorrinaTalk_1


Korrina_GymTrigger::
# 151 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setvar VAR_TEMP_0, 3
# 152 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call GymStartingMovement
# 154 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox KorrinaInt
# 155 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_LEADER_KORRINA, KorrinaDef
# 156 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto Korrina_PosBatEvent
	end


Korrina_PosBatEvent::
# 161 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call GymMovementAfter
# 162 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox Korrina_Defeated
# 163 "data/maps/Sandstone_Gym_1F/scripts.pory"
	message Korrina_ReceiveBadge
# 164 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitmessage
# 165 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 166 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox Korrina_ExplainBadge, MSGBOX_DEFAULT
# 167 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setflag FLAG_BADGE04_GET
# 168 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setvar VAR_0x8008, 4
# 169 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 170 "data/maps/Sandstone_Gym_1F/scripts.pory"
	giveitem ITEM_TM_POWER_UP_PUNCH
# 171 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox Explain_PUPunch, MSGBOX_DEFAULT
# 172 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox MeetMeAtAdTower, MSGBOX_DEFAULT
# 173 "data/maps/Sandstone_Gym_1F/scripts.pory"
	closemessage
# 174 "data/maps/Sandstone_Gym_1F/scripts.pory"
	call RemoveGymWall
# 175 "data/maps/Sandstone_Gym_1F/scripts.pory"
	special RemoveCameraObject
# 176 "data/maps/Sandstone_Gym_1F/scripts.pory"
	special DrawWholeMapView
# 177 "data/maps/Sandstone_Gym_1F/scripts.pory"
	applymovement 1, KorrinaLeavesGym
# 178 "data/maps/Sandstone_Gym_1F/scripts.pory"
	waitmovement 0
# 179 "data/maps/Sandstone_Gym_1F/scripts.pory"
	setflag FLAG_KORRINA_LEAVESGYM
# 180 "data/maps/Sandstone_Gym_1F/scripts.pory"
	removeobject 1
# 181 "data/maps/Sandstone_Gym_1F/scripts.pory"
	release
	end


# 184 "data/maps/Sandstone_Gym_1F/scripts.pory"
KorrinaLeavesGym:
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
# 185 "data/maps/Sandstone_Gym_1F/scripts.pory"
	walk_left
	step_end

SandGym_Guide::
# 261 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_MEGA_RING, SandGym_Guide_2
# 265 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SandGym_Guide_5
# 269 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_GuideAdvice, MSGBOX_NPC
	end

SandGym_Guide_2:
# 262 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_GuideRing, MSGBOX_NPC
	end

SandGym_Guide_5:
# 266 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_GuidePostVictory, MSGBOX_NPC
	end


SandGym_Statue::
# 273 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, SandGym_Statue_2
# 276 "data/maps/Sandstone_Gym_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, SandGym_Statue_3
# 280 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_GymStatue, MSGBOX_SIGN
SandGym_Statue_1:
	end

SandGym_Statue_2:
# 274 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_GymStatueCertified, MSGBOX_SIGN
	goto SandGym_Statue_1

SandGym_Statue_3:
# 277 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_GymStatueCertified2, MSGBOX_SIGN
	goto SandGym_Statue_1


SandGym_Tr1_CyclistM1::
# 372 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR1_CYCLISTM1, SandGym_Tr1_CyclistM1_Intro, SandGym_Tr1_CyclistM1_Defeat
# 373 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr1_CyclistM1_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr2_CyclistF1::
# 391 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR2_CYCLISTF1, SandGym_Tr2_CyclistF1_Intro, SandGym_Tr2_CyclistF1_Defeat
# 392 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr2_CyclistF1_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr3_CyclistF2::
# 411 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR3_CYCLISTF2, SandGym_Tr3_CyclistF2_Intro, SandGym_Tr3_CyclistF2_Defeat
# 412 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr3_CyclistF2_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr4_CyclistM2::
# 430 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR4_CYCLISTM2, SandGym_Tr4_CyclistM2_Intro, SandGym_Tr4_CyclistM2_Defeat
# 431 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr4_CyclistM2_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr5_CyclistF3::
# 448 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR5_CYCLISTF3, SandGym_Tr5_CyclistF3_Intro, SandGym_Tr5_CyclistF3_Defeat
# 449 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr5_CyclistF3_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr6_CyclistM3::
# 470 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR6_CYCLISTM3, SandGym_Tr6_CyclistM3_Intro, SandGym_Tr6_CyclistM3_Defeat
# 471 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr6_CyclistM3_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr7_CyclistM4::
# 488 "data/maps/Sandstone_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_SANDGYM_TR7_CYCLISTM4, SandGym_Tr7_CyclistM4_Intro, SandGym_Tr7_CyclistM4_Defeat
# 489 "data/maps/Sandstone_Gym_1F/scripts.pory"
	msgbox SandGym_Tr7_CyclistM4_PostBattle, MSGBOX_AUTOCLOSE
	end


PrintIceStep_Text_0:
# 137 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "{STR_VAR_1}$"

YouHaveNoBike::
# 92 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I'm sorry, but you must be on a bike\n"
	.string "before you can proceed.$"

Korrina_Defeated::
# 188 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Lady Korrina gave a terrible display!\p"
	.string "This is it. I must give up my title and\n"
	.string "admit that your strength far exceeds--\p"
	.string "Just teasing! But here's your Badge.\n"
	.string "Boy, you'll be rolling in 'em soon!$"

SandGym_YouArrived::
# 196 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I knew you'd be here soon!\p"
	.string "If you're ready, go stand on the other\n"
	.string "side of the arena and let's get this\l"
	.string "show on the road!$"

KorrinaInt::
# 202 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Time for Lady Korrina's big appearance!\p"
	.string "Haha, I'm just messing around with you!\n"
	.string "I know, you're rollin' in the aisles,\l"
	.string "right?\p"
	.string "I haven't forgotten your battle\n"
	.string "with your friend back on Route 11.\p"
	.string "I already know you're a strong Trainer,\n"
	.string "so let's get this show on the road!$"

MeetMeAtAdTower::
# 212 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Hey, uh…\p"
	.string "I was thinking of giving you something\n"
	.string "cool, but I've some urgent business\l"
	.string "elsewhere.\p"
	.string "Could you come meet me at the top of\n"
	.string "the Adamant Tower? It's just north of\l"
	.string "Sandstone City.\p"
	.string "Only certain people are allowed in,\n"
	.string "but I'll talk to the guard there to\l"
	.string "let you through. Cool?\p"
	.string "Anyway, meet you there!$"

KorrinaDef::
# 226 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Oh! I have been defeated! Alack, alay!$"

Korrina_ReceiveBadge::
# 229 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "{PLAYER} received the Rumble Badge\n"
	.string "from Korrina!$"

Korrina_ExplainBadge::
# 233 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "If you've got a Rumble Badge, then\n"
	.string "you can trade Pokémon up to level 60\l"
	.string "with your friends and they'll be ready\l"
	.string "to roll! They'll love you, all right!\p"
	.string "And you'll be able to push any pesky\n"
	.string "boulders out of your way using the\l"
	.string "HM Strength!\p"
	.string "And here, why don't you take this TM?\n"
	.string "I've really been on a roll with it myself!$"

Explain_PUPunch::
# 244 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Power-Up Punch does just what it says\n"
	.string "on the box!\p"
	.string "The more that you use it, the tougher\n"
	.string "your fists get.\p"
	.string "Keep using it.\n"
	.string "Your Attack will go through the roof!$"

SandGym_KorrinaPosBat::
# 252 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Already rarin' to go again?\n"
	.string "I dunno…\p"
	.string "That Mega Ring was my trump card, but\n"
	.string "now that you have one as well, I doubt\l"
	.string "I'd have any chance against you!$"

SandGym_GuideAdvice::
# 285 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Yo, champ in the making!\p"
	.string "The leader of this gym, Korrina,\n"
	.string "really loves Fighting-type Pokémon.\p"
	.string "She also really loves speed and expects\n"
	.string "all the fellow trainers to hone their\l"
	.string "speed to the fullest!\p"
	.string "That's why she decided to design her\n"
	.string "gym completely around the concept of\l"
	.string "going fast.\p"
	.string "If you ever hope to reach her, you need\n"
	.string "to hop on your bike and navigate\l"
	.string "through the precarious course.\p"
	.string "That said, it won't be quite that easy!\p"
	.string "There are patterned floors that send\n"
	.string "you back some ways if you're not\l"
	.string "crossing them at the fastest possible\l"
	.string "speed.\p"
	.string "However, go too fast, and you might\n"
	.string "just bump into another trainer or even\l"
	.string "fall of a ledge.\p"
	.string "If you do fall off, there are a few\n"
	.string "strategically placed pads around\l"
	.string "the gym that let you get back to your\l"
	.string "previous checkpoint.\p"
	.string "Anyway, that's enough from me.\n"
	.string "Go get 'em, Champ!$"

SandGym_GuidePostVictory::
# 313 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Korrina seemed to be in high spirits\n"
	.string "as she flew past here.\p"
	.string "That must have been one high-speed\n"
	.string "battle!\p"
	.string "But now, you should make haste and\n"
	.string "head to the Adamant Tower north of\l"
	.string "the city.\p"
	.string "Korrina doesn't like staying in one\n"
	.string "place for long so you might miss her\l"
	.string "if you tarry!$"

SandGym_GuideRing::
# 325 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Oh, I see you wearing that Mega Ring!\n"
	.string "Well done champ!\p"
	.string "I hope it helps you reach ever new\n"
	.string "heights!$"

SandGym_GymStatue::
# 332 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sandstone City Pokémon Gym\p"
	.string "Korrina's certified trainers:\n"
	.string "{RIVAL}$"

SandGym_GymStatueCertified::
# 337 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sandstone City Pokémon Gym\p"
	.string "Korrina's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"

SandGym_GymStatueCertified2::
# 343 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sandstone City Pokémon Gym\p"
	.string "Korrina's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{PLAYER}\l"
	.string "{BROTHER}$"

SandGym_Tr1_CyclistM1_Intro::
# 376 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Welcome to the high-speed gym!\n"
	.string "I hope I won't disappoint!$"

SandGym_Tr1_CyclistM1_Defeat::
# 380 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I stood no chance…$"

SandGym_Tr1_CyclistM1_PostBattle::
# 383 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sometimes bumping into another trainer\n"
	.string "here could be beneficial.\p"
	.string "It all depends on how good you are\n"
	.string "handling your bike.$"

SandGym_Tr2_CyclistF1_Intro::
# 395 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "You may think yourself lucky that I\n"
	.string "was here to stop you, but this is\l"
	.string "where your luck runs out!$"

SandGym_Tr2_CyclistF1_Defeat::
# 400 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I guess you still had some luck left…$"

SandGym_Tr2_CyclistF1_PostBattle::
# 403 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sometimes using your bike's Acro Mode\n"
	.string "can be beneficial so that you can\l"
	.string "position yourself better for the\l"
	.string "next challenge.$"

SandGym_Tr3_CyclistF2_Intro::
# 415 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "You're doing well!\n"
	.string "Too bad now you have to face me!$"

SandGym_Tr3_CyclistF2_Defeat::
# 419 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I can't believe it!$"

SandGym_Tr3_CyclistF2_PostBattle::
# 422 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sometimes I wish I had roller skates\n"
	.string "like Korrina, but they've really fallen\l"
	.string "out of style and are kind of hard\l"
	.string "to find…$"

SandGym_Tr4_CyclistM2_Intro::
# 434 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Don't go bumping into people or\n"
	.string "you'll regret it!$"

SandGym_Tr4_CyclistM2_Defeat::
# 438 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I regret challenging you…$"

SandGym_Tr4_CyclistM2_PostBattle::
# 441 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Anybody can ride a bike outdoors but\n"
	.string "only the true pro can handle theirs\l"
	.string "in an environment like this.$"

SandGym_Tr5_CyclistF3_Intro::
# 452 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I've got that high-speed adrenaline\n"
	.string "flowing in my veins! Let's go!$"

SandGym_Tr5_CyclistF3_Defeat::
# 456 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I still have some energy left in me!\n"
	.string "Let's go!$"

SandGym_Tr5_CyclistF3_PostBattle::
# 460 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I heard there's a gym in Unova that\n"
	.string "uses massive fans to create wind.\p"
	.string "I wish we had something like that\n"
	.string "here.\p"
	.string "It's hard to get pumped up when\n"
	.string "there's no wind hitting your face.$"

SandGym_Tr6_CyclistM3_Intro::
# 474 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "You'll regret ever facing me!$"

SandGym_Tr6_CyclistM3_Defeat::
# 477 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "This cannot be!$"

SandGym_Tr6_CyclistM3_PostBattle::
# 480 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "Sometimes I struggle with my identity\n"
	.string "as a trainer.\p"
	.string "Should I follow the Gym Leader's style\n"
	.string "or go my own way?$"

SandGym_Tr7_CyclistM4_Intro::
# 492 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "You may have navigated the course,\n"
	.string "but you're not in the clear yet!$"

SandGym_Tr7_CyclistM4_Defeat::
# 496 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I have been bested!$"

SandGym_Tr7_CyclistM4_PostBattle::
# 499 "data/maps/Sandstone_Gym_1F/scripts.pory"
	.string "I see no challenge set forth could\n"
	.string "stop you.\p"
	.string "But can you take home the ultimate\n"
	.string "victory?$"
