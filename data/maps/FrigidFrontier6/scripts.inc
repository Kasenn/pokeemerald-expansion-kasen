FrigidFrontier6_MapScripts::
	.byte 0


FrigidFrontier_Pryce::
# 4 "data/maps/FrigidFrontier6/scripts.pory"
	lock
# 5 "data/maps/FrigidFrontier6/scripts.pory"
	faceplayer
	checkplayergender
# 0 "data/maps/FrigidFrontier6/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FrigidFrontier_Pryce_2
# 10 "data/maps/FrigidFrontier6/scripts.pory"
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_1
FrigidFrontier_Pryce_1:
# 12 "data/maps/FrigidFrontier6/scripts.pory"
	msgbox EscortOldManToSafety
# 13 "data/maps/FrigidFrontier6/scripts.pory"
	goto_if_set FLAG_FIND_PRYCE_QUEST, FrigidFrontier_Pryce_6
FrigidFrontier_Pryce_5:
# 16 "data/maps/FrigidFrontier6/scripts.pory"
	closemessage
# 17 "data/maps/FrigidFrontier6/scripts.pory"
	dismountplayer
# 18 "data/maps/FrigidFrontier6/scripts.pory"
	setflag FLAG_ESCORTING_PRYCE
# 19 "data/maps/FrigidFrontier6/scripts.pory"
	setfollowernpc 2, FOLLOWER_NPC_FLAG_CLEAR_ON_WHITE_OUT, FrigidFrontier_PryceYapping
# 20 "data/maps/FrigidFrontier6/scripts.pory"
	release
	end

FrigidFrontier_Pryce_2:
# 7 "data/maps/FrigidFrontier6/scripts.pory"
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_0
	goto FrigidFrontier_Pryce_1

FrigidFrontier_Pryce_6:
# 14 "data/maps/FrigidFrontier6/scripts.pory"
	msgbox EscortPryceToSafety
	goto FrigidFrontier_Pryce_5


FrigidFrontier_PryceYapping::
# 24 "data/maps/FrigidFrontier6/scripts.pory"
	facefollowernpc
	checkplayergender
# 0 "data/maps/FrigidFrontier6/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq FrigidFrontier_PryceYapping_2
# 29 "data/maps/FrigidFrontier6/scripts.pory"
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_1
FrigidFrontier_PryceYapping_1:
# 31 "data/maps/FrigidFrontier6/scripts.pory"
	msgbox FrigidFrontier_PryceYapping_Text
# 32 "data/maps/FrigidFrontier6/scripts.pory"
	release
	return

FrigidFrontier_PryceYapping_2:
# 26 "data/maps/FrigidFrontier6/scripts.pory"
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_0
	goto FrigidFrontier_PryceYapping_1


PryceBlockCave::
# 70 "data/maps/FrigidFrontier6/scripts.pory"
	lockall
# 71 "data/maps/FrigidFrontier6/scripts.pory"
	delay 15
# 72 "data/maps/FrigidFrontier6/scripts.pory"
	turnobject OBJ_EVENT_ID_NPC_FOLLOWER, DIR_NORTH
# 73 "data/maps/FrigidFrontier6/scripts.pory"
	delay 15
# 74 "data/maps/FrigidFrontier6/scripts.pory"
	msgbox PryceLetsNotGoIn
# 75 "data/maps/FrigidFrontier6/scripts.pory"
	closemessage
# 76 "data/maps/FrigidFrontier6/scripts.pory"
	applymovement LOCALID_PLAYER, Walk1Down
# 77 "data/maps/FrigidFrontier6/scripts.pory"
	applymovement OBJ_EVENT_ID_NPC_FOLLOWER, PryceBlockCave_Movement_0
# 78 "data/maps/FrigidFrontier6/scripts.pory"
	waitmovement 0
# 79 "data/maps/FrigidFrontier6/scripts.pory"
	releaseall
	return


# 77 "data/maps/FrigidFrontier6/scripts.pory"
PryceBlockCave_Movement_0:
# 77 "data/maps/FrigidFrontier6/scripts.pory"
	face_left
# 77 "data/maps/FrigidFrontier6/scripts.pory"
	lock_facing_direction
# 77 "data/maps/FrigidFrontier6/scripts.pory"
	walk_right
# 77 "data/maps/FrigidFrontier6/scripts.pory"
	unlock_facing_direction
	step_end

FrigidFrontier_Pryce_Text_0:
# 7 "data/maps/FrigidFrontier6/scripts.pory"
	.string "lad$"

FrigidFrontier_Pryce_Text_1:
# 10 "data/maps/FrigidFrontier6/scripts.pory"
	.string "lass$"

FrigidFrontier_PryceYapping_Text::
# 34 "data/maps/FrigidFrontier6/scripts.pory"
	.string "I must say, I'm glad a fine {STR_VAR_1}\n"
	.string "like yourself came along.\p"
	.string "I'm not sure how much longer\n"
	.string "I could've lasted here by myself.$"

EscortPryceToSafety::
# 40 "data/maps/FrigidFrontier6/scripts.pory"
	.string "You're here looking for the\n"
	.string "Frosthearth City Gym Leader?\p"
	.string "Well, as it would happen to be,\n"
	.string "you're looking at the man himself.\p"
	.string "But enough chit-chat, let's get\n"
	.string "going before we both freeze.$"

EscortOldManToSafety::
# 48 "data/maps/FrigidFrontier6/scripts.pory"
	.string "Ah, you, young {STR_VAR_1}.\p"
	.string "I seem to have gotten myself in\n"
	.string "a bit of a pickle.\p"
	.string "I was exploring this frozen wasteland,\n"
	.string "and seem to have gotten myself lost.\p"
	.string "Do you think you could lead me out\n"
	.string "of this maze?\l"
	.string "I'd be ever so grateful.\p"
	.string "Mind you, my body isn't quite as spry\n"
	.string "as it used to be, so I implore you to\l"
	.string "slow down your pace a bit.\p"
	.string "With that out of the way,\n"
	.string "shall we get going?$"

PryceLetsNotGoIn::
# 63 "data/maps/FrigidFrontier6/scripts.pory"
	.string "Old man: This cave is definitely not\n"
	.string "where we came from.\p"
	.string "Come on, let's try another direction.$"
