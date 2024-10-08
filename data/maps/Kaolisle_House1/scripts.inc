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


Kaolisle_Karatemaster::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, Kaolisle_Karatemaster_2
	msgbox LostMemento, MSGBOX_DEFAULT
	checkitem ITEM_LOST_MEMENTO
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_Karatemaster_5
Kaolisle_Karatemaster_4:
	release
	end

Kaolisle_Karatemaster_2:
	msgbox RockSmashMonComesOut_Text, MSGBOX_NPC
	end

Kaolisle_Karatemaster_5:
	playse SE_PIN
	safefollow
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox FoundMemento, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
	removeitem ITEM_LOST_MEMENTO
	msgbox ExplainRockSmash, MSGBOX_DEFAULT
	goto Kaolisle_Karatemaster_4


Kaolisle_SphealHouseLady::
	faceplayer
	msgbox Kaolisle_SphealHouseLady_Text, MSGBOX_DEFAULT
	closemessage
	end


Kaolisle_House4_Man::
	msgbox Kaolisle_House4_Man_Text, MSGBOX_NPC
	end


Kaolisle_House4_Woman::
	msgbox Kaolisle_House4_Woman_Text, MSGBOX_NPC
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

LostMemento::
	.string "You look like a strong trainer.\p"
	.string "That means you must have been to\n"
	.string "numerous places.\p"
	.string "Tell me, have you come across any\n"
	.string "old pendants?\p"
	.string "A dear friend once gifted me a pendant\n"
	.string "but I seem to have misplaced it and\l"
	.string "have no idea where it could have gone…\p"
	.string "Please, if you find it,\n"
	.string "could you let me know?$"

FoundMemento::
	.string "That pendant…!\p"
	.string "Yes, that's the pendant I “lost”!\p"
	.string "I'm a retired karate master and\n"
	.string "you have just passed my test!\p"
	.string "Yes, I left that pendant at the end of\n"
	.string "the mines on purpose to see if anyone\l"
	.string "would be able to retrieve it for me.\p"
	.string "The mines are definitely no pushover,\n"
	.string "so seeing how you were able to return\l"
	.string "with the pendant tells me you were able\l"
	.string "to brave the dangers of that mine and\l"
	.string "return here safely.\p"
	.string "That means you and your Pokémon are\n"
	.string "worthy of my teachings!\l"
	.string "Here, have this Hidden Machine!$"

ExplainRockSmash::
	.string "That HM contains the move Rock Smash.\p"
	.string "If you come across large boulders\n"
	.string "that block your path…\p"
	.string "Well, use that HM move and smash\n"
	.string "them right out of your way!$"

RockSmashMonComesOut_Text::
	.string "Oh, yes, when you smash a rock,\n"
	.string "there's a chance a Pokémon could come\l"
	.string "flying out of hiding!\l"
	.string "Do make sure you're prepared!$"

Kaolisle_SphealHouseLady_Text::
	.string "Seeing the Spheal playing with each\n"
	.string "other really soothes the soul.\p"
	.string "I have places to be but I dare not\n"
	.string "break up their play.$"

Kaolisle_House4_Man_Text::
	.string "Kaolisle is known for its holiday resort\n"
	.string "as well as its mining operation.\p"
	.string "The mining is handled by Pokémon and\n"
	.string "there are zero machinery at work,\l"
	.string "which makes the mines practically\l"
	.string "pollution free, allowing the mines\l"
	.string "and the resort to co-exist peacefully.$"

Kaolisle_House4_Woman_Text::
	.string "Have you noticed the white cliffs of\n"
	.string "Kaolisle City?\p"
	.string "There are certain minerals in the\n"
	.string "ground that give it its unique color.$"
