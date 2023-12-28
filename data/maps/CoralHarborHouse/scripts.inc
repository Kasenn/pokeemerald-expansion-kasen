CoralHarborHouse_MapScripts::
	.byte 0


CoralHarborHouse_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, CoralHarborHouse_EventScript_HowsFishing
	msgbox CoralHarborHouse_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CoralHarborHouse_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, CoralHarborHouse_EventScript_NotGettingItchToFish
	end


CoralHarborHouse_EventScript_GiveOldRod::
	msgbox CoralHarborHouse_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox CoralHarborHouse_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end


CoralHarborHouse_EventScript_NotGettingItchToFish::
	msgbox CoralHarborHouse_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end


CoralHarborHouse_EventScript_HowsFishing::
	msgbox CoralHarborHouse_Text_HowsYourFishing, MSGBOX_NPC
	waitmessage
	closemessage
	release
	end


CoralHarborHouse_Text_GettingItchToFish::
	.string "I've been planning to retire soon.\p"
	.string "Say, would you be interested in one\n"
	.string "of my old fishing rods?$"

CoralHarborHouse_Text_GiveYouOneOfMyRods::
	.string "That's the spirit!$"

CoralHarborHouse_Text_ThrowInFishingAdvice::
	.string "Even though that is an old rod,\n"
	.string "It still makes use of some new tech.\p"
	.string "As soon as you get a bite, the rod\n"
	.string "detects this and automatically reels\l"
	.string "the fish in without fail.$"

CoralHarborHouse_Text_ThatsTooBadThen::
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

CoralHarborHouse_Text_HowsYourFishing::
	.string "Now go, and become the next\n"
	.string "fishing legend!$"
