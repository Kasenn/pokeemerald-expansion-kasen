Rockliffe_House3_MapScripts::
	.byte 0


Rockliffe_House1_OldWoman::
# 4 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_set FLAG_OBTAINED_BEEDRILLITE, Rockliffe_House1_OldWoman_2
# 8 "data/maps/Rockliffe_House3/scripts.pory"
	lockall
# 9 "data/maps/Rockliffe_House3/scripts.pory"
	faceplayer
# 10 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox DoYouLikeBeedrills, MSGBOX_YESNO
# 11 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_5
# 15 "data/maps/Rockliffe_House3/scripts.pory"
	checkpartymon SPECIES_BEEDRILL, 0
# 16 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_8
# 20 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, Rockliffe_House1_OldWoman_11
# 24 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox TakeBeedrillite, MSGBOX_DEFAULT
	checkitemspace ITEM_BEEDRILLITE
# 0 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_14
Rockliffe_House1_OldWoman_13:
# 28 "data/maps/Rockliffe_House3/scripts.pory"
	giveitem ITEM_BEEDRILLITE
# 29 "data/maps/Rockliffe_House3/scripts.pory"
	setflag FLAG_OBTAINED_BEEDRILLITE
# 30 "data/maps/Rockliffe_House3/scripts.pory"
	waitse
# 31 "data/maps/Rockliffe_House3/scripts.pory"
	waitmessage
# 32 "data/maps/Rockliffe_House3/scripts.pory"
	closemessage
# 33 "data/maps/Rockliffe_House3/scripts.pory"
	release
	end

Rockliffe_House1_OldWoman_2:
# 5 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox PutBeedrToGoodUse, MSGBOX_NPC
	end

Rockliffe_House1_OldWoman_5:
# 12 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox ThatsAShame, MSGBOX_NPC
	end

Rockliffe_House1_OldWoman_8:
# 17 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox YouDontHaveBeedrill, MSGBOX_NPC
	end

Rockliffe_House1_OldWoman_11:
# 21 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox HaveBeedrillButNoRing, MSGBOX_NPC
	end

Rockliffe_House1_OldWoman_14:
# 26 "data/maps/Rockliffe_House3/scripts.pory"
	goto ZeBagIsFull
	goto Rockliffe_House1_OldWoman_13


RockliffeHouse3_Man1::
# 67 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_METAL_COAT, RockliffeHouse3_Man1_2
# 71 "data/maps/Rockliffe_House3/scripts.pory"
	lockall
# 72 "data/maps/Rockliffe_House3/scripts.pory"
	faceplayer
# 73 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox WhichWeighsMore, MSGBOX_DEFAULT
# 74 "data/maps/Rockliffe_House3/scripts.pory"
	checkdexmon SPECIES_ARON
# 75 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_5
# 84 "data/maps/Rockliffe_House3/scripts.pory"
	checkdexmon SPECIES_EXCADRILL
# 85 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_8
RockliffeHouse3_Man1_7:
# 88 "data/maps/Rockliffe_House3/scripts.pory"
	closemessage
# 89 "data/maps/Rockliffe_House3/scripts.pory"
	release
	end

RockliffeHouse3_Man1_2:
# 68 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox IKnewAron, MSGBOX_NPC
	end

RockliffeHouse3_Man1_5:
# 76 "data/maps/Rockliffe_House3/scripts.pory"
	checkdexmon SPECIES_EXCADRILL
# 77 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_11
# 81 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox SeenAronNotExcadrill, MSGBOX_NPC
	end

RockliffeHouse3_Man1_8:
# 86 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox SeenExcadrillNotAron, MSGBOX_NPC
	goto RockliffeHouse3_Man1_7

RockliffeHouse3_Man1_11:
# 78 "data/maps/Rockliffe_House3/scripts.pory"
	goto WeighsMoreResult
	end


WeighsMoreResult::
# 122 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox AronWeighsMore, MSGBOX_DEFAULT
	checkitemspace ITEM_METAL_COAT
# 0 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WeighsMoreResult_2
WeighsMoreResult_1:
# 126 "data/maps/Rockliffe_House3/scripts.pory"
	giveitem ITEM_METAL_COAT
# 127 "data/maps/Rockliffe_House3/scripts.pory"
	waitse
# 128 "data/maps/Rockliffe_House3/scripts.pory"
	waitmessage
# 129 "data/maps/Rockliffe_House3/scripts.pory"
	setflag FLAG_RECEIVED_METAL_COAT
# 130 "data/maps/Rockliffe_House3/scripts.pory"
	closemessage
# 131 "data/maps/Rockliffe_House3/scripts.pory"
	release
	end

WeighsMoreResult_2:
# 124 "data/maps/Rockliffe_House3/scripts.pory"
	goto ZeBagIsFull
	goto WeighsMoreResult_1


RockliffeHouse3_Man2::
# 136 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox RockliffeHouse3_Man2_Text, MSGBOX_NPC
	end


RockliffeHouse2_Man::
# 145 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox RockliffeHouse2_Man_Text, MSGBOX_NPC
	end


RockliffeHouse2_Child::
# 157 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox RockliffeHouse2_Child_Text, MSGBOX_NPC
# 158 "data/maps/Rockliffe_House3/scripts.pory"
	turnobject 2, DIR_NORTH
	end


DoYouLikeBeedrills::
# 37 "data/maps/Rockliffe_House3/scripts.pory"
	.string "I used to be a world-renowned\n"
	.string "Beedrill keeper.\l"
	.string "Say, do you like Beedrills?$"

ThatsAShame::
# 42 "data/maps/Rockliffe_House3/scripts.pory"
	.string "That's a shame…$"

YouDontHaveBeedrill::
# 45 "data/maps/Rockliffe_House3/scripts.pory"
	.string "You say you do but you don't even have\n"
	.string "a Beedrill of your own.\p"
	.string "I wish folks like you would stop\n"
	.string "wasting my time…$"

HaveBeedrillButNoRing::
# 51 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Yes, I can see it in your eyes,\n"
	.string "but I think your Beedrill could\l"
	.string "still use some training.$"

TakeBeedrillite::
# 56 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Yes, I can see it in your eyes.\p"
	.string "You must be a great trainer who\n"
	.string "loves their Beedrill.\p"
	.string "Maybe you'll find some use for this.$"

PutBeedrToGoodUse::
# 62 "data/maps/Rockliffe_House3/scripts.pory"
	.string "I hope you put that thing to good use.$"

WhichWeighsMore::
# 92 "data/maps/Rockliffe_House3/scripts.pory"
	.string "My friend and I were having a debate\n"
	.string "about which Pokémon weighs more:\l"
	.string "Aron or Excadrill.\p"
	.string "If you've managed to catch both of\n"
	.string "them, maybe you could show me their\l"
	.string "Pokédex entries?$"

SeenAronNotExcadrill::
# 100 "data/maps/Rockliffe_House3/scripts.pory"
	.string "…Oh?\p"
	.string "You seem to have caught an Aron but\n"
	.string "no Excadrill.$"

SeenExcadrillNotAron::
# 105 "data/maps/Rockliffe_House3/scripts.pory"
	.string "…Oh?\p"
	.string "You seem to have caught an Excadrill\n"
	.string "but no Aron.$"

AronWeighsMore::
# 110 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Hah!\p"
	.string "I knew it! Aron does weigh more\n"
	.string "after all!\p"
	.string "Thank you for helping us end this\n"
	.string "debate, buddy!\l"
	.string "Here, I want you to have this.$"

IKnewAron::
# 118 "data/maps/Rockliffe_House3/scripts.pory"
	.string "I knew Aron just had to weigh more!$"

RockliffeHouse3_Man2_Text::
# 139 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Surely an Excadrill must weigh more!\n"
	.string "Just look at the size difference!$"

RockliffeHouse2_Man_Text::
# 148 "data/maps/Rockliffe_House3/scripts.pory"
	.string "They say the ocean between Rockliffe\n"
	.string "and Kaolisle is littered with treasure.\p"
	.string "Sometimes people out there use the\n"
	.string "treasure they found as a bet during\l"
	.string "Pokémon battles.$"

RockliffeHouse2_Child_Text::
# 161 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Can't talk, my favorite show is on.$"
