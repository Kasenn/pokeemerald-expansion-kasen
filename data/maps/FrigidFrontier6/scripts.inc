FrigidFrontier6_MapScripts::
	.byte 0


FrigidFrontier_Pryce::
	lock
	faceplayer
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FrigidFrontier_Pryce_2
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_1
FrigidFrontier_Pryce_1:
	msgbox EscortOldManToSafety
	goto_if_set FLAG_FIND_PRYCE_QUEST, FrigidFrontier_Pryce_6
FrigidFrontier_Pryce_5:
	closemessage
	setflag FLAG_ESCORTING_PRYCE
	setfollower 2, FOLLOWER_FLAG_CLEAR_ON_WHITE_OUT, FrigidFrontier_PryceYapping
	release
	end

FrigidFrontier_Pryce_2:
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_0
	goto FrigidFrontier_Pryce_1

FrigidFrontier_Pryce_6:
	msgbox EscortPryceToSafety
	goto FrigidFrontier_Pryce_5


FrigidFrontier_PryceYapping::
	facefollower
	checkplayergender
	compare VAR_RESULT, MALE
	goto_if_eq FrigidFrontier_PryceYapping_2
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_1
FrigidFrontier_PryceYapping_1:
	msgbox FrigidFrontier_PryceYapping_Text
	release
	return

FrigidFrontier_PryceYapping_2:
	bufferstring STR_VAR_1, FrigidFrontier_Pryce_Text_0
	goto FrigidFrontier_PryceYapping_1


PryceBlockCave::
	lockall
	delay 15
	turnobject OBJ_EVENT_ID_FOLLOW_ME, DIR_NORTH
	delay 15
	msgbox PryceLetsNotGoIn
	closemessage
	applymovement 0xFF, Walk1Down
	applymovement OBJ_EVENT_ID_FOLLOW_ME, PryceBlockCave_Movement_0
	waitmovement 0
	releaseall
	return


PryceBlockCave_Movement_0:
	face_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

FrigidFrontier_Pryce_Text_0:
	.string "lad$"

FrigidFrontier_Pryce_Text_1:
	.string "lass$"

FrigidFrontier_PryceYapping_Text::
	.string "I must say, I'm glad a fine {STR_VAR_1}\n"
	.string "like yourself came along.\p"
	.string "I'm not sure how much longer\n"
	.string "I could've lasted here by myself.$"

EscortPryceToSafety::
	.string "You're here looking for the\n"
	.string "Frosthearth City Gym Leader?\p"
	.string "Well, as it would happen to be,\n"
	.string "you're looking at the man himself.\p"
	.string "But enough chit-chat, let's get\n"
	.string "going before we both freeze.$"

EscortOldManToSafety::
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
	.string "Old man: This cave is definitely not\n"
	.string "where we came from.\p"
	.string "Come on, let's try another direction.$"
