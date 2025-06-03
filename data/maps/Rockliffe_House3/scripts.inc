Rockliffe_House3_MapScripts::
	.byte 0


Rockliffe_House1_OldWoman::
# 4 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_set FLAG_OBTAINED_BEEDRILLITE, Rockliffe_House1_OldWoman_2
# 8 "data/maps/Rockliffe_House3/scripts.pory"
	lock
# 9 "data/maps/Rockliffe_House3/scripts.pory"
	faceplayer
# 10 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox DoYouLikeBeedrills, MSGBOX_YESNO
# 11 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_5
# 19 "data/maps/Rockliffe_House3/scripts.pory"
	checkpartymon SPECIES_BEEDRILL, 0
# 20 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_8
# 28 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_unset FLAG_OBTAINED_MEGA_RING, Rockliffe_House1_OldWoman_14
# 36 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox TakeBeedrillite, MSGBOX_DEFAULT
	checkitemspace ITEM_BEEDRILLITE
# 0 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_20
Rockliffe_House1_OldWoman_19:
# 40 "data/maps/Rockliffe_House3/scripts.pory"
	giveitem ITEM_BEEDRILLITE
# 41 "data/maps/Rockliffe_House3/scripts.pory"
	setflag FLAG_OBTAINED_BEEDRILLITE
# 42 "data/maps/Rockliffe_House3/scripts.pory"
	waitse
# 43 "data/maps/Rockliffe_House3/scripts.pory"
	waitmessage
# 44 "data/maps/Rockliffe_House3/scripts.pory"
	closemessage
# 45 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_set FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_26
Rockliffe_House1_OldWoman_25:
# 49 "data/maps/Rockliffe_House3/scripts.pory"
	release
	end

Rockliffe_House1_OldWoman_2:
# 5 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox PutBeedrToGoodUse, MSGBOX_NPC
	end

Rockliffe_House1_OldWoman_5:
# 12 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox ThatsAShame, MSGBOX_NPC
# 13 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_unset FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_11
Rockliffe_House1_OldWoman_10:
	end

Rockliffe_House1_OldWoman_8:
# 21 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox YouDontHaveBeedrill, MSGBOX_NPC
# 22 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_unset FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_17
Rockliffe_House1_OldWoman_16:
	end

Rockliffe_House1_OldWoman_11:
# 14 "data/maps/Rockliffe_House3/scripts.pory"
	startquest FLAG_Q30_ROCKLIFFE_BEEDRILLS_START
# 15 "data/maps/Rockliffe_House3/scripts.pory"
	special ShowJournalPopupAdd
	goto Rockliffe_House1_OldWoman_10

Rockliffe_House1_OldWoman_14:
# 29 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox HaveBeedrillButNoRing, MSGBOX_NPC
# 30 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_unset FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_23
Rockliffe_House1_OldWoman_22:
	end

Rockliffe_House1_OldWoman_17:
# 23 "data/maps/Rockliffe_House3/scripts.pory"
	startquest FLAG_Q30_ROCKLIFFE_BEEDRILLS_START
# 24 "data/maps/Rockliffe_House3/scripts.pory"
	special ShowJournalPopupAdd
	goto Rockliffe_House1_OldWoman_16

Rockliffe_House1_OldWoman_20:
# 38 "data/maps/Rockliffe_House3/scripts.pory"
	goto ZeBagIsFull
	goto Rockliffe_House1_OldWoman_19

Rockliffe_House1_OldWoman_23:
# 31 "data/maps/Rockliffe_House3/scripts.pory"
	startquest FLAG_Q30_ROCKLIFFE_BEEDRILLS_START
# 32 "data/maps/Rockliffe_House3/scripts.pory"
	special ShowJournalPopupAdd
	goto Rockliffe_House1_OldWoman_22

Rockliffe_House1_OldWoman_26:
# 46 "data/maps/Rockliffe_House3/scripts.pory"
	completequest FLAG_Q30_ROCKLIFFE_BEEDRILLS_COMPLETE
# 47 "data/maps/Rockliffe_House3/scripts.pory"
	special ShowJournalPopupRemove
	goto Rockliffe_House1_OldWoman_25


RockliffeHouse3_Man1::
# 83 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_METAL_COAT, RockliffeHouse3_Man1_2
# 87 "data/maps/Rockliffe_House3/scripts.pory"
	lock
# 88 "data/maps/Rockliffe_House3/scripts.pory"
	faceplayer
# 89 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox WhichWeighsMore, MSGBOX_DEFAULT
# 90 "data/maps/Rockliffe_House3/scripts.pory"
	checkdexmon SPECIES_ARON
# 91 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_5
# 100 "data/maps/Rockliffe_House3/scripts.pory"
	checkdexmon SPECIES_EXCADRILL
# 101 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_8
RockliffeHouse3_Man1_7:
# 104 "data/maps/Rockliffe_House3/scripts.pory"
	closemessage
# 105 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_unset FLAG_Q29_ROCKLIFFE_HEAVYMON_START, RockliffeHouse3_Man1_14
RockliffeHouse3_Man1_13:
# 109 "data/maps/Rockliffe_House3/scripts.pory"
	release
	end

RockliffeHouse3_Man1_2:
# 84 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox IKnewAron, MSGBOX_NPC
	end

RockliffeHouse3_Man1_5:
# 92 "data/maps/Rockliffe_House3/scripts.pory"
	checkdexmon SPECIES_EXCADRILL
# 93 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_11
# 97 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox SeenAronNotExcadrill, MSGBOX_NPC
	end

RockliffeHouse3_Man1_8:
# 102 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox SeenExcadrillNotAron, MSGBOX_NPC
	goto RockliffeHouse3_Man1_7

RockliffeHouse3_Man1_11:
# 94 "data/maps/Rockliffe_House3/scripts.pory"
	goto WeighsMoreResult
	end

RockliffeHouse3_Man1_14:
# 106 "data/maps/Rockliffe_House3/scripts.pory"
	startquest FLAG_Q29_ROCKLIFFE_HEAVYMON_START
# 107 "data/maps/Rockliffe_House3/scripts.pory"
	special ShowJournalPopupAdd
	goto RockliffeHouse3_Man1_13


WeighsMoreResult::
# 142 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox AronWeighsMore, MSGBOX_DEFAULT
	checkitemspace ITEM_METAL_COAT
# 0 "data/maps/Rockliffe_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq WeighsMoreResult_2
WeighsMoreResult_1:
# 146 "data/maps/Rockliffe_House3/scripts.pory"
	giveitem ITEM_METAL_COAT
# 147 "data/maps/Rockliffe_House3/scripts.pory"
	waitse
# 148 "data/maps/Rockliffe_House3/scripts.pory"
	waitmessage
# 149 "data/maps/Rockliffe_House3/scripts.pory"
	setflag FLAG_RECEIVED_METAL_COAT
# 150 "data/maps/Rockliffe_House3/scripts.pory"
	closemessage
# 151 "data/maps/Rockliffe_House3/scripts.pory"
	goto_if_set FLAG_Q29_ROCKLIFFE_HEAVYMON_START, WeighsMoreResult_5
WeighsMoreResult_4:
# 155 "data/maps/Rockliffe_House3/scripts.pory"
	release
	end

WeighsMoreResult_2:
# 144 "data/maps/Rockliffe_House3/scripts.pory"
	goto ZeBagIsFull
	goto WeighsMoreResult_1

WeighsMoreResult_5:
# 152 "data/maps/Rockliffe_House3/scripts.pory"
	completequest FLAG_Q29_ROCKLIFFE_HEAVYMON_COMPLETE
# 153 "data/maps/Rockliffe_House3/scripts.pory"
	special ShowJournalPopupRemove
	goto WeighsMoreResult_4


RockliffeHouse3_Man2::
# 160 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox RockliffeHouse3_Man2_Text, MSGBOX_NPC
	end


RockliffeHouse2_Man::
# 169 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox RockliffeHouse2_Man_Text, MSGBOX_NPC
	end


RockliffeHouse2_Child::
# 181 "data/maps/Rockliffe_House3/scripts.pory"
	msgbox RockliffeHouse2_Child_Text, MSGBOX_NPC
# 182 "data/maps/Rockliffe_House3/scripts.pory"
	turnobject 2, DIR_NORTH
	end


DoYouLikeBeedrills::
# 53 "data/maps/Rockliffe_House3/scripts.pory"
	.string "I used to be a world-renowned\n"
	.string "Beedrill keeper.\l"
	.string "Say, do you like Beedrills?$"

ThatsAShame::
# 58 "data/maps/Rockliffe_House3/scripts.pory"
	.string "That's a shame…$"

YouDontHaveBeedrill::
# 61 "data/maps/Rockliffe_House3/scripts.pory"
	.string "You say you do but you don't even have\n"
	.string "a Beedrill of your own.\p"
	.string "I wish folks like you would stop\n"
	.string "wasting my time…$"

HaveBeedrillButNoRing::
# 67 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Yes, I can see it in your eyes,\n"
	.string "but I think your Beedrill could\l"
	.string "still use some training.$"

TakeBeedrillite::
# 72 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Yes, I can see it in your eyes.\p"
	.string "You must be a great trainer who\n"
	.string "loves their Beedrill.\p"
	.string "Maybe you'll find some use for this.$"

PutBeedrToGoodUse::
# 78 "data/maps/Rockliffe_House3/scripts.pory"
	.string "I hope you put that thing to good use.$"

WhichWeighsMore::
# 112 "data/maps/Rockliffe_House3/scripts.pory"
	.string "My friend and I were having a debate\n"
	.string "about which Pokémon weighs more:\l"
	.string "Aron or Excadrill.\p"
	.string "If you've managed to catch both of\n"
	.string "them, maybe you could show me their\l"
	.string "Pokédex entries?$"

SeenAronNotExcadrill::
# 120 "data/maps/Rockliffe_House3/scripts.pory"
	.string "…Oh?\p"
	.string "You seem to have caught an Aron but\n"
	.string "no Excadrill.$"

SeenExcadrillNotAron::
# 125 "data/maps/Rockliffe_House3/scripts.pory"
	.string "…Oh?\p"
	.string "You seem to have caught an Excadrill\n"
	.string "but no Aron.$"

AronWeighsMore::
# 130 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Hah!\p"
	.string "I knew it! Aron does weigh more\n"
	.string "after all!\p"
	.string "Thank you for helping us end this\n"
	.string "debate, buddy!\l"
	.string "Here, I want you to have this.$"

IKnewAron::
# 138 "data/maps/Rockliffe_House3/scripts.pory"
	.string "I knew Aron just had to weigh more!$"

RockliffeHouse3_Man2_Text::
# 163 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Surely an Excadrill must weigh more!\n"
	.string "Just look at the size difference!$"

RockliffeHouse2_Man_Text::
# 172 "data/maps/Rockliffe_House3/scripts.pory"
	.string "They say the ocean between Rockliffe\n"
	.string "and Kaolisle is littered with treasure.\p"
	.string "Sometimes people out there use the\n"
	.string "treasure they found as a bet during\l"
	.string "Pokémon battles.$"

RockliffeHouse2_Child_Text::
# 185 "data/maps/Rockliffe_House3/scripts.pory"
	.string "Can't talk, my favorite show is on.$"
