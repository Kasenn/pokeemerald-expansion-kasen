Kaolisle_House1_MapScripts::
	.byte 0


Kaolisle_Pianist::
# 4 "data/maps/Kaolisle_House1/scripts.pory"
	goto_if_set FLAG_PIANOREWARD, Kaolisle_Pianist_2
# 8 "data/maps/Kaolisle_House1/scripts.pory"
	goto_if_set FLAG_KAOLISLE_PLAYINGPIANO, Kaolisle_Pianist_5
# 31 "data/maps/Kaolisle_House1/scripts.pory"
	lockall
# 32 "data/maps/Kaolisle_House1/scripts.pory"
	faceplayer
# 33 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox ListenToMePlay, MSGBOX_YESNO
# 34 "data/maps/Kaolisle_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Pianist_7
# 39 "data/maps/Kaolisle_House1/scripts.pory"
	turnobject 1, DIR_NORTH
# 40 "data/maps/Kaolisle_House1/scripts.pory"
	fadeoutbgm 1
# 41 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox PianistHereGoes, MSGBOX_DEFAULT
# 42 "data/maps/Kaolisle_House1/scripts.pory"
	release
# 43 "data/maps/Kaolisle_House1/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 44 "data/maps/Kaolisle_House1/scripts.pory"
	playbgm MUS_UNWAVERING, FALSE
# 45 "data/maps/Kaolisle_House1/scripts.pory"
	setflag FLAG_KAOLISLE_PLAYINGPIANO
	end

Kaolisle_Pianist_2:
# 5 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox ThankYouForListening2, MSGBOX_NPC
	end

Kaolisle_Pianist_5:
# 9 "data/maps/Kaolisle_House1/scripts.pory"
	lockall
# 10 "data/maps/Kaolisle_House1/scripts.pory"
	special CalcCyclingRoadChallenge
# 11 "data/maps/Kaolisle_House1/scripts.pory"
	compare VAR_RESULT, 11
	goto_if_le Kaolisle_Pianist_10
# 18 "data/maps/Kaolisle_House1/scripts.pory"
	faceplayer
# 19 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox ThankYouForListening, MSGBOX_DEFAULT
	checkitemspace ITEM_HEART_SCALE, 2
# 0 "data/maps/Kaolisle_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Kaolisle_Pianist_14
Kaolisle_Pianist_13:
# 23 "data/maps/Kaolisle_House1/scripts.pory"
	special FinishCyclingRoadChallenge
# 24 "data/maps/Kaolisle_House1/scripts.pory"
	giveitem ITEM_HEART_SCALE, 2
# 25 "data/maps/Kaolisle_House1/scripts.pory"
	clearflag FLAG_KAOLISLE_PLAYINGPIANO
# 26 "data/maps/Kaolisle_House1/scripts.pory"
	setflag FLAG_PIANOREWARD
# 27 "data/maps/Kaolisle_House1/scripts.pory"
	release
	end

Kaolisle_Pianist_7:
# 35 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox PianistSad, MSGBOX_NPC
	end

Kaolisle_Pianist_10:
# 12 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox BetterNotDisturb, MSGBOX_DEFAULT
# 13 "data/maps/Kaolisle_House1/scripts.pory"
	closemessage
# 14 "data/maps/Kaolisle_House1/scripts.pory"
	release
	end

Kaolisle_Pianist_14:
# 21 "data/maps/Kaolisle_House1/scripts.pory"
	goto ZeBagIsFull
	goto Kaolisle_Pianist_13


Kaolisle_Karatemaster::
# 83 "data/maps/Kaolisle_House1/scripts.pory"
	lock
# 84 "data/maps/Kaolisle_House1/scripts.pory"
	faceplayer
# 85 "data/maps/Kaolisle_House1/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_ROCK_SMASH, Kaolisle_Karatemaster_2
# 89 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox LostMemento, MSGBOX_DEFAULT
# 90 "data/maps/Kaolisle_House1/scripts.pory"
	checkitem ITEM_LOST_MEMENTO
# 91 "data/maps/Kaolisle_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Kaolisle_Karatemaster_5
Kaolisle_Karatemaster_4:
# 103 "data/maps/Kaolisle_House1/scripts.pory"
	release
	end

Kaolisle_Karatemaster_2:
# 86 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox RockSmashMonComesOut_Text, MSGBOX_NPC
	end

Kaolisle_Karatemaster_5:
# 92 "data/maps/Kaolisle_House1/scripts.pory"
	playse SE_PIN
# 93 "data/maps/Kaolisle_House1/scripts.pory"
	safefollow
# 94 "data/maps/Kaolisle_House1/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 95 "data/maps/Kaolisle_House1/scripts.pory"
	waitmovement 0
# 96 "data/maps/Kaolisle_House1/scripts.pory"
	delay 40
# 97 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox FoundMemento, MSGBOX_DEFAULT
# 98 "data/maps/Kaolisle_House1/scripts.pory"
	giveitem ITEM_HM_ROCK_SMASH
# 99 "data/maps/Kaolisle_House1/scripts.pory"
	setflag FLAG_RECEIVED_HM_ROCK_SMASH
# 100 "data/maps/Kaolisle_House1/scripts.pory"
	removeitem ITEM_LOST_MEMENTO
# 101 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox ExplainRockSmash, MSGBOX_DEFAULT
	goto Kaolisle_Karatemaster_4


Kaolisle_SphealHouseLady::
# 151 "data/maps/Kaolisle_House1/scripts.pory"
	faceplayer
# 152 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox Kaolisle_SphealHouseLady_Text, MSGBOX_DEFAULT
# 153 "data/maps/Kaolisle_House1/scripts.pory"
	closemessage
	end


Kaolisle_House4_Man::
# 164 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox Kaolisle_House4_Man_Text, MSGBOX_NPC
	end


Kaolisle_House4_Woman::
# 178 "data/maps/Kaolisle_House1/scripts.pory"
	msgbox Kaolisle_House4_Woman_Text, MSGBOX_NPC
	end


ListenToMePlay::
# 50 "data/maps/Kaolisle_House1/scripts.pory"
	.string "I've been learning how to play\n"
	.string "the piano.\p"
	.string "One day I hope to play in front of a\n"
	.string "large crowd but right now I don't have\l"
	.string "the self-confidence to do that.\p"
	.string "I need to start with something smaller.\n"
	.string "Would you like to hear me play?$"

PianistSad::
# 59 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Oh, okay…$"

PianistHereGoes::
# 62 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Okay, here goes…$"

BetterNotDisturb::
# 65 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Better not disturb her while she's\n"
	.string "playing…$"

ThankYouForListening::
# 69 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Thank you for listening to my piano\n"
	.string "recital.\p"
	.string "I'm not sure I'm still ready to play in\n"
	.string "front of a crowd but this definitely\l"
	.string "gave me a huge confidence boost.\p"
	.string "As a thanks for staying till the end of\n"
	.string "the recital, I want you to have these.$"

ThankYouForListening2::
# 78 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Thanks again for the confidence boost.$"

LostMemento::
# 107 "data/maps/Kaolisle_House1/scripts.pory"
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
# 119 "data/maps/Kaolisle_House1/scripts.pory"
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
# 136 "data/maps/Kaolisle_House1/scripts.pory"
	.string "That HM contains the move Rock Smash.\p"
	.string "If you come across large boulders\n"
	.string "that block your path…\p"
	.string "Well, use that HM move and smash\n"
	.string "them right out of your way!$"

RockSmashMonComesOut_Text::
# 143 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Oh, yes, when you smash a rock,\n"
	.string "there's a chance a Pokémon could come\l"
	.string "flying out of hiding!\l"
	.string "Do make sure you're prepared!$"

Kaolisle_SphealHouseLady_Text::
# 156 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Seeing the Spheal playing with each\n"
	.string "other really soothes the soul.\p"
	.string "I have places to be but I dare not\n"
	.string "break up their play.$"

Kaolisle_House4_Man_Text::
# 167 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Kaolisle is known for its holiday resort\n"
	.string "as well as its mining operation.\p"
	.string "The mining is handled by Pokémon and\n"
	.string "there are zero machinery at work,\l"
	.string "which makes the mines practically\l"
	.string "pollution free, allowing the mines\l"
	.string "and the resort to co-exist peacefully.$"

Kaolisle_House4_Woman_Text::
# 181 "data/maps/Kaolisle_House1/scripts.pory"
	.string "Have you noticed the white cliffs of\n"
	.string "Kaolisle City?\p"
	.string "There are certain minerals in the\n"
	.string "ground that give it its unique color.$"
