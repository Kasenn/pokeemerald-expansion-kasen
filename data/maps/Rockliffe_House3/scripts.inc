Rockliffe_House3_MapScripts::
	.byte 0


Rockliffe_House1_OldWoman::
	goto_if_set FLAG_OBTAINED_BEEDRILLITE, Rockliffe_House1_OldWoman_2
	lock
	faceplayer
	msgbox DoYouLikeBeedrills, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_5
	checkpartymon SPECIES_BEEDRILL, 0
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_8
	goto_if_unset FLAG_OBTAINED_MEGA_RING, Rockliffe_House1_OldWoman_14
	msgbox TakeBeedrillite, MSGBOX_DEFAULT
	checkitemspace ITEM_BEEDRILLITE
	compare VAR_RESULT, FALSE
	goto_if_eq Rockliffe_House1_OldWoman_20
Rockliffe_House1_OldWoman_19:
	giveitem ITEM_BEEDRILLITE
	setflag FLAG_OBTAINED_BEEDRILLITE
	waitse
	waitmessage
	closemessage
	goto_if_set FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_26
Rockliffe_House1_OldWoman_25:
	release
	end

Rockliffe_House1_OldWoman_2:
	msgbox PutBeedrToGoodUse, MSGBOX_NPC
	end

Rockliffe_House1_OldWoman_5:
	msgbox ThatsAShame, MSGBOX_NPC
	goto_if_unset FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_11
Rockliffe_House1_OldWoman_10:
	end

Rockliffe_House1_OldWoman_8:
	msgbox YouDontHaveBeedrill, MSGBOX_NPC
	goto_if_unset FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_17
Rockliffe_House1_OldWoman_16:
	end

Rockliffe_House1_OldWoman_11:
	startquest FLAG_Q30_ROCKLIFFE_BEEDRILLS_START
	special ShowJournalPopupAdd
	goto Rockliffe_House1_OldWoman_10

Rockliffe_House1_OldWoman_14:
	msgbox HaveBeedrillButNoRing, MSGBOX_NPC
	goto_if_unset FLAG_Q30_ROCKLIFFE_BEEDRILLS_START, Rockliffe_House1_OldWoman_23
Rockliffe_House1_OldWoman_22:
	end

Rockliffe_House1_OldWoman_17:
	startquest FLAG_Q30_ROCKLIFFE_BEEDRILLS_START
	special ShowJournalPopupAdd
	goto Rockliffe_House1_OldWoman_16

Rockliffe_House1_OldWoman_20:
	goto ZeBagIsFull
	goto Rockliffe_House1_OldWoman_19

Rockliffe_House1_OldWoman_23:
	startquest FLAG_Q30_ROCKLIFFE_BEEDRILLS_START
	special ShowJournalPopupAdd
	goto Rockliffe_House1_OldWoman_22

Rockliffe_House1_OldWoman_26:
	completequest FLAG_Q30_ROCKLIFFE_BEEDRILLS_COMPLETE
	special ShowJournalPopupRemove
	goto Rockliffe_House1_OldWoman_25


RockliffeHouse3_Man1::
	goto_if_set FLAG_RECEIVED_METAL_COAT, RockliffeHouse3_Man1_2
	lock
	faceplayer
	msgbox WhichWeighsMore, MSGBOX_DEFAULT
	checkdexmon SPECIES_ARON
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_5
	checkdexmon SPECIES_EXCADRILL
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_8
RockliffeHouse3_Man1_7:
	closemessage
	goto_if_unset FLAG_Q29_ROCKLIFFE_HEAVYMON_START, RockliffeHouse3_Man1_14
RockliffeHouse3_Man1_13:
	release
	end

RockliffeHouse3_Man1_2:
	msgbox IKnewAron, MSGBOX_NPC
	end

RockliffeHouse3_Man1_5:
	checkdexmon SPECIES_EXCADRILL
	compare VAR_RESULT, TRUE
	goto_if_eq RockliffeHouse3_Man1_11
	msgbox SeenAronNotExcadrill, MSGBOX_NPC
	end

RockliffeHouse3_Man1_8:
	msgbox SeenExcadrillNotAron, MSGBOX_NPC
	goto RockliffeHouse3_Man1_7

RockliffeHouse3_Man1_11:
	goto WeighsMoreResult
	end

RockliffeHouse3_Man1_14:
	startquest FLAG_Q29_ROCKLIFFE_HEAVYMON_START
	special ShowJournalPopupAdd
	goto RockliffeHouse3_Man1_13


WeighsMoreResult::
	msgbox AronWeighsMore, MSGBOX_DEFAULT
	checkitemspace ITEM_METAL_COAT
	compare VAR_RESULT, FALSE
	goto_if_eq WeighsMoreResult_2
WeighsMoreResult_1:
	giveitem ITEM_METAL_COAT
	waitse
	waitmessage
	setflag FLAG_RECEIVED_METAL_COAT
	closemessage
	goto_if_set FLAG_Q29_ROCKLIFFE_HEAVYMON_START, WeighsMoreResult_5
WeighsMoreResult_4:
	release
	end

WeighsMoreResult_2:
	goto ZeBagIsFull
	goto WeighsMoreResult_1

WeighsMoreResult_5:
	completequest FLAG_Q29_ROCKLIFFE_HEAVYMON_COMPLETE
	special ShowJournalPopupRemove
	goto WeighsMoreResult_4


RockliffeHouse3_Man2::
	msgbox RockliffeHouse3_Man2_Text, MSGBOX_NPC
	end


RockliffeHouse2_Man::
	msgbox RockliffeHouse2_Man_Text, MSGBOX_NPC
	end


RockliffeHouse2_Child::
	msgbox RockliffeHouse2_Child_Text, MSGBOX_NPC
	turnobject 2, DIR_NORTH
	end


DoYouLikeBeedrills::
	.string "I used to be a world-renowned\n"
	.string "Beedrill keeper.\l"
	.string "Say, do you like Beedrills?$"

ThatsAShame::
	.string "That's a shame…$"

YouDontHaveBeedrill::
	.string "You say you do but you don't even have\n"
	.string "a Beedrill of your own.\p"
	.string "I wish folks like you would stop\n"
	.string "wasting my time…$"

HaveBeedrillButNoRing::
	.string "Yes, I can see it in your eyes,\n"
	.string "but I think your Beedrill could\l"
	.string "still use some training.$"

TakeBeedrillite::
	.string "Yes, I can see it in your eyes.\p"
	.string "You must be a great trainer who\n"
	.string "loves their Beedrill.\p"
	.string "Maybe you'll find some use for this.$"

PutBeedrToGoodUse::
	.string "I hope you put that thing to good use.$"

WhichWeighsMore::
	.string "My friend and I were having a debate\n"
	.string "about which Pokémon weighs more:\l"
	.string "Aron or Excadrill.\p"
	.string "If you've managed to catch both of\n"
	.string "them, maybe you could show me their\l"
	.string "Pokédex entries?$"

SeenAronNotExcadrill::
	.string "…Oh?\p"
	.string "You seem to have caught an Aron but\n"
	.string "no Excadrill.$"

SeenExcadrillNotAron::
	.string "…Oh?\p"
	.string "You seem to have caught an Excadrill\n"
	.string "but no Aron.$"

AronWeighsMore::
	.string "Hah!\p"
	.string "I knew it! Aron does weigh more\n"
	.string "after all!\p"
	.string "Thank you for helping us end this\n"
	.string "debate, buddy!\l"
	.string "Here, I want you to have this.$"

IKnewAron::
	.string "I knew Aron just had to weigh more!$"

RockliffeHouse3_Man2_Text::
	.string "Surely an Excadrill must weigh more!\n"
	.string "Just look at the size difference!$"

RockliffeHouse2_Man_Text::
	.string "They say the ocean between Rockliffe\n"
	.string "and Kaolisle is littered with treasure.\p"
	.string "Sometimes people out there use the\n"
	.string "treasure they found as a bet during\l"
	.string "Pokémon battles.$"

RockliffeHouse2_Child_Text::
	.string "Can't talk, my favorite show is on.$"
