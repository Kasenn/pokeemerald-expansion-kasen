NewCoralgroveCity_Gym_MapScripts::
	.byte 0


NewCoralgroveCity_Gym_Aaron_Talk::
# 6 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	checktrainerflag TRAINER_LEADER_AARON
	goto_if 1, NewCoralgroveCity_Gym_Aaron_Talk_1
# 10 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Aaron_Talk_Text_0
# 11 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	turnobject 1, DIR_WEST
	return

NewCoralgroveCity_Gym_Aaron_Talk_1:
# 7 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_AaronPostBattle, MSGBOX_NPC
	return


NewCoralgroveCity_Gym_EventScript_Aaron::
# 15 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	lock
# 16 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	delay 10
# 17 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_EAST
# 18 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	turnobject 1, DIR_WEST
# 19 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	special SpawnCameraObject
# 20 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Walk3Right
# 21 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	waitmovement 0
# 22 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	delay 10
# 23 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	special RemoveCameraObject
# 24 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_AARON, NewCoralgroveCity_Gym_Text_AaronIntro, NewCoralgroveCity_Gym_Text_AaronDefeat, NewCoralgroveCity_Gym_EventScript_AaronDefeated, NO_MUSIC
# 25 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_AaronPostBattle, MSGBOX_DEFAULT
# 26 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	release
	end


NewCoralgroveCity_Gym_EventScript_AaronDefeated::
# 30 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	delay 30
# 32 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	applymovement 1, Walk3Left
# 33 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Walk3Right
# 34 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	waitmovement 0
# 35 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	delay 15
# 36 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	message NewCoralgroveCity_Gym_Text_ReceivedStoneBadge
# 37 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	waitmessage
# 38 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 39 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
# 40 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 41 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 42 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 43 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	special RemoveCameraObject
# 44 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	giveitem ITEM_TM_U_TURN
# 45 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_ExplainUTurn
# 46 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	release
	return


NewCoralgroveCity_Gym_EventScript_Maniac::
# 50 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHIP, NewCoralgroveCity_Gym_Text_ManiacIntro, NewCoralgroveCity_Gym_Text_ManiacDefeat
# 51 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_ManiacPostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_Lass::
# 55 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_2, NewCoralgroveCity_Gym_Text_LassIntro, NewCoralgroveCity_Gym_Text_LassDefeat
# 56 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_LassPostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_NinjaBoy::
# 60 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_FOSTER, NewCoralgroveCity_Gym_Text_NinjaBoyIntro, NewCoralgroveCity_Gym_Text_NinjaBoyDefeat
# 61 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_NinjaBoyPostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_BugCatcher1::
# 65 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_3, NewCoralgroveCity_Gym_Text_BugCatcher1Intro, NewCoralgroveCity_Gym_Text_BugCatcher1Defeat
# 66 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_BugCatcher1PostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_BugCatcher2::
# 70 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_4, NewCoralgroveCity_Gym_Text_BugCatcher2Intro, NewCoralgroveCity_Gym_Text_BugCatcher2Defeat
# 71 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_BugCatcher2PostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_BugCatcher3::
# 75 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_5, NewCoralgroveCity_Gym_Text_BugCatcher3Intro, NewCoralgroveCity_Gym_Text_BugCatcher3Defeat
# 76 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_BugCatcher3PostBattle, MSGBOX_AUTOCLOSE
	end


NewCoralgroveCity_Gym_EventScript_GymGuide::
# 80 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	checktrainerflag TRAINER_LEADER_AARON
	goto_if 1, NewCoralgroveCity_Gym_EventScript_GymGuide_1
# 84 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_GymGuideAdvice, MSGBOX_NPC
	return

NewCoralgroveCity_Gym_EventScript_GymGuide_1:
# 81 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_GymGuidePostVictory, MSGBOX_NPC
	return


NewCoralgroveCity_Gym_EventScript_Statue::
# 89 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	checktrainerflag TRAINER_LEADER_AARON
	goto_if 1, NewCoralgroveCity_Gym_EventScript_Statue_1
# 93 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_GymStatue, MSGBOX_SIGN
	return

NewCoralgroveCity_Gym_EventScript_Statue_1:
# 90 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	msgbox NewCoralgroveCity_Gym_Text_GymStatueCertified, MSGBOX_SIGN
	return


NewCoralgroveCity_Gym_Aaron_Talk_Text_0:
# 10 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Ah, a new challenger.\pGo stand on the other side of\nthe arena and we may begin.$"

NewCoralgroveCity_Gym_Text_GymGuideAdvice::
# 97 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
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
	.string "with their Bug-type Pokémon.\p"
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
# 124 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
	.string "Check your Trainer Card.\p"
	.string "The Hive Badge you got should be\n"
	.string "properly recorded on it.\p"
	.string "In other words…\p"
	.string "You've climbed the first step on\n"
	.string "the stairs to the championship!\p"
	.string "That's got to feel awesome!$"

NewCoralgroveCity_Gym_Text_ManiacIntro::
# 134 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Don't take us gym trainers lightly!\n"
	.string "I'll show you why we're better!$"

NewCoralgroveCity_Gym_Text_ManiacDefeat::
# 138 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "You were too good for me…$"

NewCoralgroveCity_Gym_Text_ManiacPostBattle::
# 141 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "You haven't seen anything of the bug\n"
	.string "type's terrifying power!$"

NewCoralgroveCity_Gym_Text_LassIntro::
# 145 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Not all bug Pokémon are yucky!\n"
	.string "Let me show you some cute ones!$"

NewCoralgroveCity_Gym_Text_LassDefeat::
# 149 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "My precious Pokémon!$"

NewCoralgroveCity_Gym_Text_LassPostBattle::
# 152 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Some people find bug Pokémon ugly\n"
	.string "but there are actually a lot of\l"
	.string "beautiful ones as well.$"

NewCoralgroveCity_Gym_Text_NinjaBoyIntro::
# 157 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Hah! Bet you didn't see me sneaking\n"
	.string "through the bushes!$"

NewCoralgroveCity_Gym_Text_NinjaBoyDefeat::
# 161 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Mission failed…$"

NewCoralgroveCity_Gym_Text_NinjaBoyPostBattle::
# 164 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Bushes like these are perfect hiding\n"
	.string "places for bug Pokémon.$"

NewCoralgroveCity_Gym_Text_BugCatcher1Intro::
# 168 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "This is a natural bug Pokémon habitat!\n"
	.string "You have no chance of winning!$"

NewCoralgroveCity_Gym_Text_BugCatcher1Defeat::
# 172 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "But I had the terrain advantage…\n$"

NewCoralgroveCity_Gym_Text_BugCatcher1PostBattle::
# 175 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "You may have beaten me but\n"
	.string "you have no chance against Aaron!$"

NewCoralgroveCity_Gym_Text_BugCatcher2Intro::
# 179 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "If you can't beat me, you won't stand\n"
	.string "a chance against Aaron!$"

NewCoralgroveCity_Gym_Text_BugCatcher2Defeat::
# 183 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Wow! You've got some potential!$"

NewCoralgroveCity_Gym_Text_BugCatcher2PostBattle::
# 186 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Aaron is stronger than me by\n"
	.string "several times.\p"
	.string "You'd better be on your guard!$"

NewCoralgroveCity_Gym_Text_BugCatcher3Intro::
# 191 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Buzz buzz!\p"
	.string "Hear that? That's\n"
	.string "the sound of my impending victory!$"

NewCoralgroveCity_Gym_Text_BugCatcher3Defeat::
# 196 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Buzz buzz…$"

NewCoralgroveCity_Gym_Text_BugCatcher3PostBattle::
# 199 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "I came here to put what I had learned\n"
	.string "at the Trainers' School to the test.\p"
	.string "Guess I should go back to study…$"

NewCoralgroveCity_Gym_Text_AaronIntro::
# 204 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Hello! I am Aaron, the Coralgrove\n"
	.string "Pokémon Gym Leader.\p"
	.string "I'm a huge fan of bug Pokémon.\p"
	.string "Bug Pokémon are nasty-mean,\n"
	.string "and yet they're beautiful too.\p"
	.string "I became a gym leader so that\n"
	.string "I could take on challengers and\l"
	.string "become perfect, just like my bugs!\p"
	.string "OK! Without further ado,\n"
	.string "let me take you on!$"

NewCoralgroveCity_Gym_Text_AaronDefeat::
# 216 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I\n"
	.string "still have ways to go…\p"
	.string "I understand.\p"
	.string "The Pokémon league's rules state\n"
	.string "that trainers are to be given this\l"
	.string "if they defeat a gym leader.\p"
	.string "Please accept the official Pokémon\n"
	.string "League Hive Badge.$"

NewCoralgroveCity_Gym_Text_ReceivedStoneBadge::
# 228 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "{PLAYER} received the Hive Badge\n"
	.string "from Aaron!$"

NewCoralgroveCity_Gym_Text_StoneBadgeInfoTakeThis::
# 232 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "The Hive Badge makes any Pokémon up to\n"
	.string "level 30 obey all of your commands.\p"
	.string "It also enables them to use the HM move\n"
	.string "“Fly” outside of battle.\p"
	.string "Please take this with you, too.$"

NewCoralgroveCity_Gym_Text_ExplainUTurn::
# 239 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "That Technical Machine, TM89,\n"
	.string "contains U-turn.\p"
	.string "After making its attack, the user\n"
	.string "rushes back to switch places with\l"
	.string "a party Pokémon in waiting.\p"
	.string "Remember, a TM can be used as many\n"
	.string "times as you want, so feel free to\l"
	.string "experiment to your heart's content.$"

NewCoralgroveCity_Gym_Text_AaronPostBattle::
# 249 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
	.string "challenge other Gym Leaders.\p"
	.string "By gaining experience, you could take\n"
	.string "perfection to a whole another level.$"

NewCoralgroveCity_Gym_Text_GymStatue::
# 255 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Coralgrove City Pokémon Gym\p"
	.string "Aaron's certified trainers:\n"
	.string "{BROTHER}\l"
	.string "{RIVAL}$"

NewCoralgroveCity_Gym_Text_GymStatueCertified::
# 261 "data/maps/NewCoralgroveCity_Gym/scripts.pory"
	.string "Coralgrove City Pokémon Gym\p"
	.string "Aaron's certified trainers:\n"
	.string "{BROTHER}\l"
	.string "{RIVAL}\l"
	.string "{PLAYER}$"
