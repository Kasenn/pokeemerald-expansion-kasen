NewCoralgroveCity_Gym_MapScripts::
	.byte 0


NewCoralgroveCity_Gym_Aaron_Talk::
	goto_if_set FLAG_RECEIVED_TM_U_TURN, NewCoralgroveCity_Gym_Aaron_Talk_1
	lockall
	faceplayer
	msgbox NewCoralgroveCity_Gym_Aaron_Talk_Text_0
	waitmessage
	closemessage
	turnobject 9, DIR_WEST
	release
	end

NewCoralgroveCity_Gym_Aaron_Talk_1:
	lockall
	faceplayer
	msgbox NewCoralgroveCity_Gym_Text_AaronPostBattle, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


NewCoralgroveCity_Gym_EventScript_Aaron::
	lockall
	delay 10
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 9, DIR_WEST
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, NewCoralgroveCity_Gym_MoveCamera
	waitmovement 0
	delay 10
	special RemoveCameraObject
	trainerbattle_single TRAINER_GABBY_AND_TY_1, NewCoralgroveCity_Gym_Text_AaronIntro, NewCoralgroveCity_Gym_Text_AaronDefeat, NewCoralgroveCity_Gym_EventScript_AaronDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM_U_TURN, NewCoralgroveCity_Gym_EventScript_GiveUTurn
	msgbox NewCoralgroveCity_Gym_Text_AaronPostBattle, MSGBOX_DEFAULT
	release
	end


NewCoralgroveCity_Gym_MoveCamera:
	walk_right
	walk_right
	walk_right
	step_end

NewCoralgroveCity_Gym_EventScript_AaronDefeated::
	special SpawnCameraObject
	delay 30
	applymovement 1, NewCoralgroveCity_Gym_MoveLeft
	applymovement OBJ_EVENT_ID_PLAYER, NewCoralgroveCity_Gym_MoveRight
	waitmovement 0
	delay 15
	message NewCoralgroveCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox NewCoralgroveCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	special RemoveCameraObject
	goto NewCoralgroveCity_Gym_EventScript_GiveUTurn
	end


NewCoralgroveCity_Gym_MoveLeft:
	walk_left
	walk_left
	walk_left
	step_end

NewCoralgroveCity_Gym_MoveRight:
	walk_right
	walk_right
	walk_right
	step_end

NewCoralgroveCity_Gym_EventScript_GiveUTurn::
	giveitem ITEM_TM_U_TURN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_U_TURN
	msgbox NewCoralgroveCity_Gym_Text_ExplainUTurn, MSGBOX_DEFAULT
	release
	end


NewCoralgroveCity_Gym_MoveCamera2:
	walk_left
	step_end

NewCoralgroveCity_Gym_EventScript_Maniac::
	trainerbattle_single TRAINER_CHIP, NewCoralgroveCity_Gym_Text_ManiacIntro, NewCoralgroveCity_Gym_Text_ManiacDefeat
	msgbox NewCoralgroveCity_Gym_Text_ManiacPostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_Lass::
	trainerbattle_single TRAINER_FOSTER, NewCoralgroveCity_Gym_Text_LassIntro, NewCoralgroveCity_Gym_Text_LassDefeat
	msgbox NewCoralgroveCity_Gym_Text_LassPostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_NinjaBoy::
	trainerbattle_single TRAINER_DUSTY_2, NewCoralgroveCity_Gym_Text_NinjaBoyIntro, NewCoralgroveCity_Gym_Text_NinjaBoyDefeat
	msgbox NewCoralgroveCity_Gym_Text_NinjaBoyPostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_BugCatcher1::
	trainerbattle_single TRAINER_DUSTY_3, NewCoralgroveCity_Gym_Text_BugCatcher1Intro, NewCoralgroveCity_Gym_Text_BugCatcher1Defeat
	msgbox NewCoralgroveCity_Gym_Text_BugCatcher1PostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_BugCatcher2::
	trainerbattle_single TRAINER_DUSTY_4, NewCoralgroveCity_Gym_Text_BugCatcher2Intro, NewCoralgroveCity_Gym_Text_BugCatcher2Defeat
	msgbox NewCoralgroveCity_Gym_Text_BugCatcher2PostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_BugCatcher3::
	trainerbattle_single TRAINER_DUSTY_5, NewCoralgroveCity_Gym_Text_BugCatcher3Intro, NewCoralgroveCity_Gym_Text_BugCatcher3Defeat
	msgbox NewCoralgroveCity_Gym_Text_BugCatcher3PostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, NewCoralgroveCity_Gym_EventScript_GymGuidePostVictory
	msgbox NewCoralgroveCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end


NewCoralgroveCity_Gym_EventScript_GymGuidePostVictory::
	msgbox NewCoralgroveCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end


NewCoralgroveCity_Gym_EventScript_Statue::
	lockall
	goto_if_set FLAG_BADGE01_GET, NewCoralgroveCity_Gym_EventScript_GymStatueCertified
	goto NewCoralgroveCity_Gym_EventScript_GymStatue
	end


NewCoralgroveCity_Gym_EventScript_GymStatueCertified::
	msgbox NewCoralgroveCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end


NewCoralgroveCity_Gym_EventScript_GymStatue::
	msgbox NewCoralgroveCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end


NewCoralgroveCity_Gym_Aaron_Talk_Text_0:
	.string "Ah, a new challenger.\pGo stand on the other side of\nthe arena and we may begin.$"

NewCoralgroveCity_Gym_Text_GymGuideAdvice::
	.string "Yo, champ in the making!\p"
	.string "Listen, my friend! This gym is\n"
	.string "mostly covered by a huge thicket!\p"
	.string "Luckily some of the growth is a bit\n"
	.string "sparse, which lets you navigate the\l"
	.string "place a bit easier.\p"
	.string "With that said though,\n"
	.string "you'll want to take some caution!\p"
	.string "There are also trainers lurking in\n"
	.string "the thicket, ready to pounce you\l"
	.string "with their bug-type Pokémon.\p"
	.string "The leader of this gym, Aaron,\n"
	.string "also uses bug Pokémon.\p"
	.string "Many people think that bug Pokémon\n"
	.string "are weak.\p"
	.string "However, you shouldn't\n"
	.string "underestimate them!\p"
	.string "Many of them can pack quite a punch and\n"
	.string "some even apply very nasty poisons.\p"
	.string "Luckily, bug Pokémon can't really\n"
	.string "take the heat of fire type Pokémon.\p"
	.string "Flying type Pokémon are also very good\n"
	.string "at picking them off.\p"
	.string "Anyway, that's enough from me.\n"
	.string "Go for it, champ!$"

NewCoralgroveCity_Gym_Text_GymGuidePostVictory::
	.string "Whoa! What a breathtaking victory!\n"
	.string "Check your Trainer Card.\p"
	.string "The Hive Badge you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the championship!\p"
	.string "That's got to feel awesome!$"

NewCoralgroveCity_Gym_Text_ManiacIntro::
	.string "Don't take us gym trainers lightly!\n"
	.string "I'll show you why we're better!$"

NewCoralgroveCity_Gym_Text_ManiacDefeat::
	.string "You were too good for me…$"

NewCoralgroveCity_Gym_Text_ManiacPostBattle::
	.string "You haven't seen anything of the bug\n"
	.string "type's terrifying power!$"

NewCoralgroveCity_Gym_Text_LassIntro::
	.string "Not all bug Pokémon are yucky!\n"
	.string "Let me show you some cute ones!$"

NewCoralgroveCity_Gym_Text_LassDefeat::
	.string "My precious Pokémon!$"

NewCoralgroveCity_Gym_Text_LassPostBattle::
	.string "Some people find bug Pokémon ugly\n"
	.string "but there are actually a lot of\l"
	.string "beautiful ones as well.$"

NewCoralgroveCity_Gym_Text_NinjaBoyIntro::
	.string "Hah! Bet you didn't see me sneaking\n"
	.string "through the bushes!$"

NewCoralgroveCity_Gym_Text_NinjaBoyDefeat::
	.string "Mission failed…$"

NewCoralgroveCity_Gym_Text_NinjaBoyPostBattle::
	.string "Bushes like these are perfect hiding\n"
	.string "places for bug Pokémon.$"

NewCoralgroveCity_Gym_Text_BugCatcher1Intro::
	.string "This is a natural bug Pokémon habitat!\n"
	.string "You have no chance of winning!$"

NewCoralgroveCity_Gym_Text_BugCatcher1Defeat::
	.string "But I had the terrain advantage…\n$"

NewCoralgroveCity_Gym_Text_BugCatcher1PostBattle::
	.string "You may have beaten me but\p"
	.string "you have no chance against Aaron!\n$"

NewCoralgroveCity_Gym_Text_BugCatcher2Intro::
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Aaron!$"

NewCoralgroveCity_Gym_Text_BugCatcher2Defeat::
	.string "Wow! You've got some potential!$"

NewCoralgroveCity_Gym_Text_BugCatcher2PostBattle::
	.string "Aaron is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"

NewCoralgroveCity_Gym_Text_BugCatcher3Intro::
	.string "Buzz buzz!\p"
	.string "Hear that? That's\n"
	.string "the sound of my impending victory!$"

NewCoralgroveCity_Gym_Text_BugCatcher3Defeat::
	.string "Buzz buzz…$"

NewCoralgroveCity_Gym_Text_BugCatcher3PostBattle::
	.string "I came here to put what I had learned\n"
	.string "at the Trainers' School to the test.\p"
	.string "Guess I should go back to study…$"

NewCoralgroveCity_Gym_Text_AaronIntro::
	.string "Hello! I am Aaron, the Coralgrove\n"
	.string "Pokémon Gym Leader.\p"
	.string "I'm a huge fan of bug Pokémon.\p"
	.string "Bug Pokémon are nasty-mean,\n"
	.string "and yet they're beautiful too.\p"
	.string "I became a gym leader so that I could\n"
	.string "take on challengers and become perfect,\l"
	.string "just like my bug Pokémon!\p"
	.string "OK! Let me take you on!$"

NewCoralgroveCity_Gym_Text_AaronDefeat::
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The Pokémon league's rules state\n"
	.string "that trainers are to be given this\l"
	.string "if they defeat a gym leader.\p"
	.string "Please accept the official Pokémon\n"
	.string "League Hive Badge.$"

NewCoralgroveCity_Gym_Text_ReceivedStoneBadge::
	.string "{PLAYER} received the Hive Badge\n"
	.string "from Aaron.$"

NewCoralgroveCity_Gym_Text_StoneBadgeInfoTakeThis::
	.string "The Hive Badge heightens the attack\n"
	.string "power of your Pokémon.\p"
	.string "It also enables them to use the HM move\n"
	.string "“Cut” outside of battle.\p"
	.string "Please take this with you, too.$"

NewCoralgroveCity_Gym_Text_ExplainUTurn::
	.string "That Technical Machine, TM89,\n"
	.string "contains U-turn.\p"
	.string "After making its attack, the user\n"
	.string "rushes back to switch places with\l"
	.string "a party Pokémon in waiting.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a Pokémon.\p"
	.string "Remember, a TM can be used as many\n"
	.string "times as you want, so feel free to\l"
	.string "experiment to your heart's content.$"

NewCoralgroveCity_Gym_Text_AaronPostBattle::
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By gaining experience, you could take\n"
	.string "perfection to a whole another level.$"

NewCoralgroveCity_Gym_Text_GymStatue::
	.string "Coralgrove City Pokémon Gym\p"
	.string "Aaron's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "Brandon$"

NewCoralgroveCity_Gym_Text_GymStatueCertified::
	.string "Coralgrove City Pokémon Gym\p"
	.string "Aaron's certified trainers:\n"
	.string "{RIVAL}\l"
	.string "Brandon\l"
	.string "{PLAYER}$"
