Kaolisle_House1_MapScripts::
	.byte 0


Kaolisle_Pianist::
	goto_if_set FLAG_PIANOREWARD, Kaolisle_Pianist_2
	goto_if_set FLAG_KAOLISLE_PLAYINGPIANO, Kaolisle_Pianist_5
	lockall
	faceplayer
	msgbox ListenToMePlay, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Pianist_7
	turnobject 1, DIR_NORTH
	fadeoutbgm 1
	msgbox PianistHereGoes, MSGBOX_DEFAULT
	release
	special Special_BeginCyclingRoadChallenge
	playbgm MUS_UNWAVERING, FALSE
	setflag FLAG_KAOLISLE_PLAYINGPIANO
	end

Kaolisle_Pianist_2:
	msgbox ThankYouForListening2, MSGBOX_NPC
	end

Kaolisle_Pianist_5:
	lockall
	special CalcCyclingRoadChallenge
	compare VAR_RESULT, 11
	goto_if_le Kaolisle_Pianist_10
	faceplayer
	msgbox ThankYouForListening, MSGBOX_DEFAULT
	checkitemspace ITEM_HEART_SCALE, 2
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Pianist_14
	special FinishCyclingRoadChallenge
	giveitem ITEM_HEART_SCALE, 2
	clearflag FLAG_KAOLISLE_PLAYINGPIANO
	setflag FLAG_PIANOREWARD
	release
	end

Kaolisle_Pianist_7:
	msgbox PianistSad, MSGBOX_NPC
	end

Kaolisle_Pianist_10:
	msgbox BetterNotDisturb, MSGBOX_DEFAULT
	closemessage
	release
	end

Kaolisle_Pianist_14:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


ListenToMePlay::
	.string "I've been learning how to play\n"
	.string "the piano.\p"
	.string "One day I hope to play in front of a\n"
	.string "large crowd but right now I don't have\l"
	.string "the self-confidence to do that.\p"
	.string "I need to start with something smaller.\n"
	.string "Would you like to hear me play?$"

PianistSad::
	.string "Oh, okay…$"

PianistHereGoes::
	.string "Okay, here goes…$"

BetterNotDisturb::
	.string "Better not disturb her while she's\n"
	.string "playing…$"

ThankYouForListening::
	.string "Thank you for listening to my piano\n"
	.string "recital.\p"
	.string "I'm not sure I'm still ready to play in\n"
	.string "front of a crowd but this definitely\l"
	.string "gave me a huge confidence boost.\p"
	.string "As a thanks for staying till the end of\n"
	.string "the recital, I want you to have these.$"

ThankYouForListening2::
	.string "Thanks again for the confidence boost.$"
