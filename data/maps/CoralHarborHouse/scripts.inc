CoralHarborHouse_MapScripts::
	.byte 0


CoralHarborHouse_EventScript_OldRodFisherman::
# 4 "data/maps/CoralHarborHouse/scripts.pory"
	lock
# 5 "data/maps/CoralHarborHouse/scripts.pory"
	faceplayer
	checkitem ITEM_OLD_ROD
# 0 "data/maps/CoralHarborHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CoralHarborHouse_EventScript_OldRodFisherman_2
CoralHarborHouse_EventScript_OldRodFisherman_1:
# 9 "data/maps/CoralHarborHouse/scripts.pory"
	msgbox CoralHarborHouse_Text_GettingItchToFish, MSGBOX_YESNO
# 10 "data/maps/CoralHarborHouse/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CoralHarborHouse_EventScript_GiveOldRod
# 11 "data/maps/CoralHarborHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CoralHarborHouse_EventScript_NotGettingItchToFish
	end

CoralHarborHouse_EventScript_OldRodFisherman_2:
# 7 "data/maps/CoralHarborHouse/scripts.pory"
	goto CoralHarborHouse_EventScript_HowsFishing
	goto CoralHarborHouse_EventScript_OldRodFisherman_1


CoralHarborHouse_EventScript_GiveOldRod::
# 15 "data/maps/CoralHarborHouse/scripts.pory"
	msgbox CoralHarborHouse_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 16 "data/maps/CoralHarborHouse/scripts.pory"
	giveitem ITEM_OLD_ROD
# 17 "data/maps/CoralHarborHouse/scripts.pory"
	msgbox CoralHarborHouse_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 18 "data/maps/CoralHarborHouse/scripts.pory"
	release
	end


CoralHarborHouse_EventScript_NotGettingItchToFish::
# 22 "data/maps/CoralHarborHouse/scripts.pory"
	msgbox CoralHarborHouse_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 23 "data/maps/CoralHarborHouse/scripts.pory"
	release
	end


CoralHarborHouse_EventScript_HowsFishing::
# 27 "data/maps/CoralHarborHouse/scripts.pory"
	msgbox CoralHarborHouse_Text_HowsYourFishing, MSGBOX_NPC
	end


CoralHarborHouse_Text_GettingItchToFish::
# 31 "data/maps/CoralHarborHouse/scripts.pory"
	.string "I've been planning to retire soon.\p"
	.string "Say, would you be interested in one\n"
	.string "of my old fishing rods?$"

CoralHarborHouse_Text_GiveYouOneOfMyRods::
# 37 "data/maps/CoralHarborHouse/scripts.pory"
	.string "That's the spirit!$"

CoralHarborHouse_Text_ThrowInFishingAdvice::
# 41 "data/maps/CoralHarborHouse/scripts.pory"
	.string "Even though that is an old rod,\n"
	.string "It still makes use of some new tech.\p"
	.string "As soon as you get a bite, the rod\n"
	.string "detects this and automatically reels\l"
	.string "the fish in without fail.$"

CoralHarborHouse_Text_ThatsTooBadThen::
# 49 "data/maps/CoralHarborHouse/scripts.pory"
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

CoralHarborHouse_Text_HowsYourFishing::
# 54 "data/maps/CoralHarborHouse/scripts.pory"
	.string "Now go, and become the next\n"
	.string "fishing legend!$"
