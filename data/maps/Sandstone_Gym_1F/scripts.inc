Sandstone_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ResetCheckpoint
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandstoneGetPorted
	map_script MAP_SCRIPT_ON_RESUME, SetTeleportFloor
	map_script MAP_SCRIPT_ON_LOAD, RemoveGymWall2
	.byte 0


SetTeleportFloor::
	setstepcallback STEP_CB_TELEPORT_FLOOR
	end


SandstoneGetPorted::
	map_script_2 VAR_GYM_TELEPORT, 0, SandstoneGym_Warp
	end


ResetCheckpoint::
	goto_if_set FLAG_BADGE04_GET, ResetCheckpoint_2
ResetCheckpoint_1:
	copyvar VAR_GYM_TELEPORT, 1
	end

ResetCheckpoint_2:
	call RemoveGymWall
	special DrawWholeMapView
	goto ResetCheckpoint_1


RemoveGymWall2::
	goto_if_set FLAG_BADGE04_GET, RemoveGymWall2_1
	return

RemoveGymWall2_1:
	call RemoveGymWall
	return


RemoveGymWall::
	setmetatile 14, 36, 0x22F, FALSE
	setmetatile 14, 37, 0x237, FALSE
	setmetatile 14, 38, 0x202, FALSE
	setmetatile 14, 39, 0x210, FALSE
	setmetatile 14, 40, 0x21A, FALSE
	return


SandstoneGym_Warp::
	lockall
	playse SE_FAILURE
	waitse
	delay 10
	switch VAR_SANDSTONE_GYM_CHECKPOINTS
	case 0, SandstoneGym_Warp_3
	case 1, SandstoneGym_Warp_4
	case 2, SandstoneGym_Warp_5
SandstoneGym_Warp_1:
	waitstate
	end

SandstoneGym_Warp_3:
	warp MAP_SANDSTONE_GYM_1F, 9
	goto SandstoneGym_Warp_1

SandstoneGym_Warp_4:
	warp MAP_SANDSTONE_GYM_1F, 10
	goto SandstoneGym_Warp_1

SandstoneGym_Warp_5:
	warp MAP_SANDSTONE_GYM_1F, 11
	goto SandstoneGym_Warp_1


SetSandstoneBike::
	specialvar VAR_RESULT, GetPlayerAvatarBike
	compare VAR_RESULT, 0
	goto_if_eq SetSandstoneBike_2
SetSandstoneBike_1:
	setflag FLAG_SYS_CYCLING_ROAD
	release
	end

SetSandstoneBike_2:
	goto SandStoneNoBike
	goto SetSandstoneBike_1


ClearSandstoneBike::
	clearflag FLAG_SYS_CYCLING_ROAD
	release
	end


SandStoneNoBike::
	lockall
	playse SE_PIN
	turnobject 9, DIR_NORTH
	applymovement 9, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 9, Common_Movement_Delay48
	waitmovement 0
	applymovement 9, TurnLeft
	applymovement OBJ_EVENT_ID_PLAYER, MoveDown1
	waitmovement 0
	msgbox YouHaveNoBike
	closemessage
	release
	end


MoveDown1:
	walk_down
	walk_in_place_fast_right
	step_end

TurnLeft:
	walk_in_place_fast_left
	step_end

SandstoneCheckpoint0::
	switch VAR_SANDSTONE_GYM_CHECKPOINTS
	case 0, SandstoneCheckpoint0_3
	case 1, SandstoneCheckpoint0_4
	case 2, SandstoneCheckpoint0_5
SandstoneCheckpoint0_1:
	release
	end

SandstoneCheckpoint0_3:
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 8, 36
	goto SandstoneCheckpoint0_1

SandstoneCheckpoint0_4:
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 21, 9
	goto SandstoneCheckpoint0_1

SandstoneCheckpoint0_5:
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 36, 17
	goto SandstoneCheckpoint0_1


SandstoneCheckpoint1::
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 21, 9
	compare VAR_SANDSTONE_GYM_CHECKPOINTS, 0
	goto_if_eq SandstoneCheckpoint1_2
SandstoneCheckpoint1_1:
	release
	end

SandstoneCheckpoint1_2:
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 1
	goto SandstoneCheckpoint1_1


SandstoneCheckpoint2::
	setdynamicwarp MAP_SANDSTONE_GYM_1F, 36, 17
	compare VAR_SANDSTONE_GYM_CHECKPOINTS, 1
	goto_if_eq SandstoneCheckpoint2_2
SandstoneCheckpoint2_1:
	release
	end

SandstoneCheckpoint2_2:
	setvar VAR_SANDSTONE_GYM_CHECKPOINTS, 2
	goto SandstoneCheckpoint2_1


PrintIceStep::
	buffernumberstring STR_VAR_1, VAR_GYM_TELEPORT
	msgbox PrintIceStep_Text_0
	release
	end


SandGym_KorrinaTalk::
	goto_if_set FLAG_BADGE04_GET, SandGym_KorrinaTalk_2
	msgbox SandGym_YouArrived, MSGBOX_NPC
	turnobject 1, DIR_EAST
SandGym_KorrinaTalk_1:
	end

SandGym_KorrinaTalk_2:
	msgbox SandGym_KorrinaPosBat, MSGBOX_NPC
	goto SandGym_KorrinaTalk_1


Korrina_GymTrigger::
	call GymStartingMovement
	msgbox KorrinaInt
	trainerbattle_no_intro TRAINER_LEADER_KORRINA, KorrinaDef
	goto Korrina_PosBatEvent
	end


Korrina_PosBatEvent::
	call GymMovementAfter
	msgbox Korrina_Defeated
	message Korrina_ReceiveBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox Korrina_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE04_GET
	call SetBadgesAndTrainers
	giveitem ITEM_TM_POWER_UP_PUNCH
	msgbox Explain_PUPunch, MSGBOX_DEFAULT
	msgbox MeetMeAtAdTower, MSGBOX_DEFAULT
	closemessage
	call RemoveGymWall
	special RemoveCameraObject
	special DrawWholeMapView
	applymovement 1, KorrinaLeavesGym
	waitmovement 0
	setflag FLAG_KORRINA_LEAVESGYM
	removeobject 1
	release
	end


KorrinaLeavesGym:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

SandGym_Guide::
	goto_if_set FLAG_OBTAINED_MEGA_RING, SandGym_Guide_2
	goto_if_set FLAG_BADGE04_GET, SandGym_Guide_5
	msgbox SandGym_GuideAdvice, MSGBOX_NPC
	end

SandGym_Guide_2:
	msgbox SandGym_GuideRing, MSGBOX_NPC
	end

SandGym_Guide_5:
	msgbox SandGym_GuidePostVictory, MSGBOX_NPC
	end


SandGym_Statue::
	goto_if_set FLAG_BADGE04_GET, SandGym_Statue_2
	goto_if_set FLAG_BADGE05_GET, SandGym_Statue_3
	msgbox SandGym_GymStatue, MSGBOX_SIGN
SandGym_Statue_1:
	end

SandGym_Statue_2:
	msgbox SandGym_GymStatueCertified, MSGBOX_SIGN
	goto SandGym_Statue_1

SandGym_Statue_3:
	msgbox SandGym_GymStatueCertified2, MSGBOX_SIGN
	goto SandGym_Statue_1


SandGym_Tr1_CyclistM1::
	trainerbattle_single TRAINER_SANDGYM_TR1_CYCLISTM1, SandGym_Tr1_CyclistM1_Intro, SandGym_Tr1_CyclistM1_Defeat
	msgbox SandGym_Tr1_CyclistM1_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr2_CyclistF1::
	trainerbattle_single TRAINER_SANDGYM_TR2_CYCLISTF1, SandGym_Tr2_CyclistF1_Intro, SandGym_Tr2_CyclistF1_Defeat
	msgbox SandGym_Tr2_CyclistF1_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr3_CyclistF2::
	trainerbattle_single TRAINER_SANDGYM_TR3_CYCLISTF2, SandGym_Tr3_CyclistF2_Intro, SandGym_Tr3_CyclistF2_Defeat
	msgbox SandGym_Tr3_CyclistF2_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr4_CyclistM2::
	trainerbattle_single TRAINER_SANDGYM_TR4_CYCLISTM2, SandGym_Tr4_CyclistM2_Intro, SandGym_Tr4_CyclistM2_Defeat
	msgbox SandGym_Tr4_CyclistM2_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr5_CyclistF3::
	trainerbattle_single TRAINER_SANDGYM_TR5_CYCLISTF3, SandGym_Tr5_CyclistF3_Intro, SandGym_Tr5_CyclistF3_Defeat
	msgbox SandGym_Tr5_CyclistF3_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr6_CyclistM3::
	trainerbattle_single TRAINER_SANDGYM_TR6_CYCLISTM3, SandGym_Tr6_CyclistM3_Intro, SandGym_Tr6_CyclistM3_Defeat
	msgbox SandGym_Tr6_CyclistM3_PostBattle, MSGBOX_AUTOCLOSE
	end


SandGym_Tr7_CyclistM4::
	trainerbattle_single TRAINER_SANDGYM_TR7_CYCLISTM4, SandGym_Tr7_CyclistM4_Intro, SandGym_Tr7_CyclistM4_Defeat
	msgbox SandGym_Tr7_CyclistM4_PostBattle, MSGBOX_AUTOCLOSE
	end


PrintIceStep_Text_0:
	.string "{STR_VAR_1}$"

YouHaveNoBike::
	.string "I'm sorry, but you must be on a bike\n"
	.string "before you can proceed.$"

Korrina_Defeated::
	.string "Lady Korrina gave a terrible display!\p"
	.string "This is it. I must give up my title and\n"
	.string "admit that your strength far exceeds--\p"
	.string "Just teasing! But here's your Badge.\n"
	.string "Boy, you'll be rolling in 'em soon!$"

SandGym_YouArrived::
	.string "I knew you'd be here soon!\p"
	.string "If you're ready, go stand on the other\n"
	.string "side of the arena and let's get this\l"
	.string "show on the road!$"

KorrinaInt::
	.string "Time for Lady Korrina's big appearance!\p"
	.string "Haha, I'm just messing around with you!\n"
	.string "I know, you're rollin' in the aisles,\l"
	.string "right?\p"
	.string "I haven't forgotten your battle\n"
	.string "with your friend back on Route 11.\p"
	.string "I already know you're a strong Trainer,\n"
	.string "so let's get this show on the road!$"

MeetMeAtAdTower::
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
	.string "Oh! I have been defeated! Alack, alay!$"

Korrina_ReceiveBadge::
	.string "{PLAYER} received the Rumble Badge\n"
	.string "from Korrina!$"

Korrina_ExplainBadge::
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
	.string "Power-Up Punch does just what it says\n"
	.string "on the box!\p"
	.string "The more that you use it, the tougher\n"
	.string "your fists get.\p"
	.string "Keep using it.\n"
	.string "Your Attack will go through the roof!$"

SandGym_KorrinaPosBat::
	.string "Already rarin' to go again?\n"
	.string "I dunno…\p"
	.string "That Mega Ring was my trump card, but\n"
	.string "now that you have one as well, I doubt\l"
	.string "I'd have any chance against you!$"

SandGym_GuideAdvice::
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
	.string "Oh, I see you wearing that Mega Ring!\n"
	.string "Well done champ!\p"
	.string "I hope it helps you reach ever new\n"
	.string "heights!$"

SandGym_GymStatue::
	.string "Sandstone City Pokémon Gym\p"
	.string "Korrina's certified trainers:\n"
	.string "{RIVAL}$"

SandGym_GymStatueCertified::
	.string "Sandstone City Pokémon Gym\p"
	.string "Korrina's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"

SandGym_GymStatueCertified2::
	.string "Sandstone City Pokémon Gym\p"
	.string "Korrina's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "{PLAYER}\l"
	.string "{BROTHER}$"

SandGym_Tr1_CyclistM1_Intro::
	.string "Welcome to the high-speed gym!\n"
	.string "I hope I won't disappoint!$"

SandGym_Tr1_CyclistM1_Defeat::
	.string "I stood no chance…$"

SandGym_Tr1_CyclistM1_PostBattle::
	.string "Sometimes bumping into another trainer\n"
	.string "here could be beneficial.\p"
	.string "It all depends on how good you are\n"
	.string "handling your bike.$"

SandGym_Tr2_CyclistF1_Intro::
	.string "You may think yourself lucky that I\n"
	.string "was here to stop you, but this is\l"
	.string "where your luck runs out!$"

SandGym_Tr2_CyclistF1_Defeat::
	.string "I guess you still had some luck left…$"

SandGym_Tr2_CyclistF1_PostBattle::
	.string "Sometimes using your bike's Acro Mode\n"
	.string "can be beneficial so that you can\l"
	.string "position yourself better for the\l"
	.string "next challenge.$"

SandGym_Tr3_CyclistF2_Intro::
	.string "You're doing well!\n"
	.string "Too bad now you have to face me!$"

SandGym_Tr3_CyclistF2_Defeat::
	.string "I can't believe it!$"

SandGym_Tr3_CyclistF2_PostBattle::
	.string "Sometimes I wish I had roller skates\n"
	.string "like Korrina, but they've really fallen\l"
	.string "out of style and are kind of hard\l"
	.string "to find…$"

SandGym_Tr4_CyclistM2_Intro::
	.string "Don't go bumping into people or\n"
	.string "you'll regret it!$"

SandGym_Tr4_CyclistM2_Defeat::
	.string "I regret challenging you…$"

SandGym_Tr4_CyclistM2_PostBattle::
	.string "Anybody can ride a bike outdoors but\n"
	.string "only the true pro can handle theirs\l"
	.string "in an environment like this.$"

SandGym_Tr5_CyclistF3_Intro::
	.string "I've got that high-speed adrenaline\n"
	.string "flowing in my veins! Let's go!$"

SandGym_Tr5_CyclistF3_Defeat::
	.string "I still have some energy left in me!\n"
	.string "Let's go!$"

SandGym_Tr5_CyclistF3_PostBattle::
	.string "I heard there's a gym in Unova that\n"
	.string "uses massive fans to create wind.\p"
	.string "I wish we had something like that\n"
	.string "here.\p"
	.string "It's hard to get pumped up when\n"
	.string "there's no wind hitting your face.$"

SandGym_Tr6_CyclistM3_Intro::
	.string "You'll regret ever facing me!$"

SandGym_Tr6_CyclistM3_Defeat::
	.string "This cannot be!$"

SandGym_Tr6_CyclistM3_PostBattle::
	.string "Sometimes I struggle with my identity\n"
	.string "as a trainer.\p"
	.string "Should I follow the Gym Leader's style\n"
	.string "or go my own way?$"

SandGym_Tr7_CyclistM4_Intro::
	.string "You may have navigated the course,\n"
	.string "but you're not in the clear yet!$"

SandGym_Tr7_CyclistM4_Defeat::
	.string "I have been bested!$"

SandGym_Tr7_CyclistM4_PostBattle::
	.string "I see no challenge set forth could\n"
	.string "stop you.\p"
	.string "But can you take home the ultimate\n"
	.string "victory?$"
