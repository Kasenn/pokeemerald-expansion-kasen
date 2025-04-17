BasalekTunnels_MapScripts::
	.byte 0


BasaltTunnel_Tr1_Hiker1::
	trainerbattle_single TRAINER_BASALTUNNEL_TR1_HIKER1, BasaltTr1_Intro, BasaltTr1_Lose
	msgbox BasaltTr1_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr2_BlackBelt::
	trainerbattle_single TRAINER_BASALTUNNEL_TR2_BLACKBELT, BasaltTr2_Intro, BasaltTr2_Lose
	msgbox BasaltTr2_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr3_Picnicker::
	trainerbattle_single TRAINER_BASALTUNNEL_TR3_PICNICKER, BasaltTr3_Intro, BasaltTr3_Lose
	msgbox BasaltTr3_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr4_FireBreather::
	trainerbattle_single TRAINER_BASALTUNNEL_TR4_FIREBREATHER, BasaltTr4_Intro, BasaltTr4_Lose
	msgbox BasaltTr4_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr5_BlackBelt2::
	trainerbattle_single TRAINER_BASALTUNNEL_TR5_BLACKBELT2, BasaltTr5_Intro, BasaltTr5_Lose
	msgbox BasaltTr5_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr6_CamperM::
	trainerbattle_single TRAINER_BASALTUNNEL_TR6_CAMPERM, BasaltTr6_Intro, BasaltTr6_Lose
	msgbox BasaltTr6_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr7_Picnicker2::
	trainerbattle_single TRAINER_BASALTUNNEL_TR7_PICNICKER2, BasaltTr7_Intro, BasaltTr7_Lose
	msgbox BasaltTr7_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr8_Hiker2::
	trainerbattle_single TRAINER_BASALTUNNEL_TR8_HIKER2, BasaltTr8_Intro, BasaltTr8_Lose
	msgbox BasaltTr8_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr9_Beauty::
	trainerbattle_single TRAINER_BASALTUNNEL_TR9_BEAUTY, BasaltTr9_Intro, BasaltTr9_Lose
	msgbox BasaltTr9_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr10_FireBreather2::
	trainerbattle_single TRAINER_BASALTUNNEL_TR10_FIREBREATHER2, BasaltTr10_Intro, BasaltTr10_Lose
	msgbox BasaltTr10_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr11_Hiker3::
	trainerbattle_single TRAINER_BASALTUNNEL_TR11_HIKER3, BasaltTr11_Intro, BasaltTr11_Lose
	msgbox BasaltTr11_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr12_Brock::
	checkitem ITEM_HM08
	compare VAR_RESULT, 0
	goto_if_ne BasaltTunnel_Tr12_Brock_2
	lock
	faceplayer
	msgbox BasaltTr12_Intro, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq BasaltTunnel_Tr12_Brock_5
	msgbox BasaltTr12_IntroYes
BasaltTunnel_Tr12_Brock_4:
	trainerbattle_no_intro TRAINER_BASALTUNNEL_TR12_BROCK, BasaltTr12_Lose
	msgbox BrockPostBat
	closemessage
	giveitem ITEM_HM_ROCK_CLIMB
	waitfanfare
	msgbox ExplainRockClimb
	msgbox BasaltTr12_PostBattle
	goto_if_set FLAG_Q38_BASALEK_TUNNELS_START, BasaltTunnel_Tr12_Brock_9
BasaltTunnel_Tr12_Brock_8:
	release
	return

BasaltTunnel_Tr12_Brock_2:
	msgbox BasaltTr12_PostBattle, MSGBOX_NPC
	end

BasaltTunnel_Tr12_Brock_5:
	msgbox BasaltTr12_IntroNo
	goto BasaltTunnel_Tr12_Brock_4

BasaltTunnel_Tr12_Brock_9:
	completequest FLAG_Q38_BASALEK_TUNNELS_COMPLETE
	special ShowJournalPopupRemove
	goto BasaltTunnel_Tr12_Brock_8


BasalekTunnelGreeter::
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 1, BasalekTunnelGreeter_1
	msgbox BasalekTunnelGreeter_Guide, MSGBOX_NPC
	goto_if_unset FLAG_Q38_BASALEK_TUNNELS_START, BasalekTunnelGreeter_5
	return

BasalekTunnelGreeter_1:
	msgbox BasalekTunnelGreeter_Victory, MSGBOX_NPC
	return

BasalekTunnelGreeter_4:
	startquest FLAG_Q38_BASALEK_TUNNELS_START
	special ShowJournalPopupAdd
	return

BasalekTunnelGreeter_5:
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 0, BasalekTunnelGreeter_4
	return


BasaltTr1_Intro::
	.string "Think you're tough enough\n"
	.string "to train here?$"

BasaltTr1_Lose::
	.string "Ghahaha!\p"
	.string "Welcome to the Basalek Tunnels!\n"
	.string "I think you'll fit right in!$"

BasaltTr1_PostBattle::
	.string "These tunnels can be rough,\n"
	.string "but I'm sure you'll do fine!$"

BasaltTr2_Intro::
	.string "Our fists are hard as steel!$"

BasaltTr2_Lose::
	.string "Your will is strong as steel.$"

BasaltTr2_PostBattle::
	.string "Steel-type Pokémon do great here.\p"
	.string "Not only are they not encumbered by\n"
	.string "the rough terrain, they also do\l"
	.string "amazing against Rock-type Pokémon.$"

BasaltTr3_Intro::
	.string "Who has the knowledge and\n"
	.string "the technique for survival?\p"
	.string "Pokémon rangers, that's who!$"

BasaltTr3_Lose::
	.string "I didn't have enough Pokémon\n"
	.string "know-how…$"

BasaltTr3_PostBattle::
	.string "To break away from civilization and\n"
	.string "awaken the wild spirit within!\p"
	.string "That's our vision.$"

BasaltTr4_Intro::
	.string "My Pokémon are so hot,\n"
	.string "they'll melt even rock!$"

BasaltTr4_Lose::
	.string "Could not melt through your\n"
	.string "defenses…$"

BasaltTr4_PostBattle::
	.string "I thought my lava Pokémon could\n"
	.string "melt through rock, but I guess\l"
	.string "type advantages still exist…$"

BasaltTr5_Intro::
	.string "You've made a mistake\n"
	.string "coming here!$"

BasaltTr5_Lose::
	.string "Looks like I was the one\n"
	.string "mistaken.$"

BasaltTr5_PostBattle::
	.string "I've noticed my Pokémon gaining\n"
	.string "experience much faster here than\l"
	.string "anywhere else.\p"
	.string "If I train here for just a bit\n"
	.string "longer, I bet I could even take on\l"
	.string "the Pokemon League.$"

BasaltTr6_Intro::
	.string "I just caught some new Pokémon.\n"
	.string "Let's see how strong they are!$"

BasaltTr6_Lose::
	.string "I think we just need a bit more\n"
	.string "training, that's all.$"

BasaltTr6_PostBattle::
	.string "All Pokémon get stronger the more\n"
	.string "they train.\p"
	.string "I'm sure these ones are no exception.$"

BasaltTr7_Intro::
	.string "The warmth here is making me drowsy.\n"
	.string "Battle with me so I can stay awake.$"

BasaltTr7_Lose::
	.string "This is a dream.\n"
	.string "I'm sure of it…$"

BasaltTr7_PostBattle::
	.string "Losing burns me up…\n"
	.string "I'm just going to sleep right here!\l"
	.string "Zzz!$"

BasaltTr8_Intro::
	.string "Let's have ourselves an explosive\n"
	.string "showdown!$"

BasaltTr8_Lose::
	.string "I think we may have blown\n"
	.string "our fuse a bit too fast.$"

BasaltTr8_PostBattle::
	.string "Sometimes mutually assured\n"
	.string "destruction is the only way to go.$"

BasaltTr9_Intro::
	.string "I've come too far to be brought down\n"
	.string "by some kid!$"

BasaltTr9_Lose::
	.string "No!\n"
	.string "All my progress…$"

BasaltTr9_PostBattle::
	.string "I thought I was doing great,\n"
	.string "but I guess there are trainers here\l"
	.string "that are way beyond my league…$"

BasaltTr10_Intro::
	.string "I caught hot Pokémon in here!\n"
	.string "Take a look!$"

BasaltTr10_Lose::
	.string "What a bumpy ride that was!$"

BasaltTr10_PostBattle::
	.string "I like the way you battle.\n"
	.string "It has a certain flair to it.$"

BasaltTr11_Intro::
	.string "We will rock you!$"

BasaltTr11_Lose::
	.string "What a big disgrace we are.$"

BasaltTr11_PostBattle::
	.string "You're gonna be a big man someday,\n"
	.string "I can tell.$"

BasaltTr12_Intro::
	.string "Welcome, challenger.\n"
	.string "My name is Brock.\p"
	.string "Some people call me the reigning\n"
	.string "champion of Basalek Tunnels, but\l"
	.string "I'm not really one for titles.\p"
	.string "All I care about is challenging\n"
	.string "strong trainers in order to better\l"
	.string "myself and my Pokémon.\p"
	.string "Tell me, do you believe yourself\n"
	.string "to be a strong trainer?$"

BasaltTr12_IntroNo::
	.string "So humble.\p"
	.string "You're going to challenge me,\n"
	.string "knowing that you'll lose?\p"
	.string "That's the trainer's honor that\n"
	.string "compels you to challenge me.\p"
	.string "Fine, then!\n"
	.string "Show me your best!$"

BasaltTr12_IntroYes::
	.string "So confident.\p"
	.string "You think you're going to\n"
	.string "trounce over me, is that it?\p"
	.string "Fine, then!\n"
	.string "Let's see what you got!$"

BasaltTr12_Lose::
	.string "I took you for granted,\n"
	.string "and so I lost.$"

BasaltTr12_PostBattle::
	.string "I must get back to my training.\p"
	.string "Once my training is complete,\n"
	.string "maybe we can have another battle.$"

BrockPostBat::
	.string "I'm honored to have battled\n"
	.string "such a strong trainer.\p"
	.string "For your great performance,\n"
	.string "I want you to have this.$"

ExplainRockClimb::
	.string "That Hidden Machine contains\n"
	.string "the move Rock Climb.\p"
	.string "Rock Climb will clear most hazards\n"
	.string "from the battlefield, as well as\l"
	.string "increase the speed of the Pokémon\l"
	.string "using the move.\p"
	.string "It will also allow you to climb\n"
	.string "certain rocky walls.$"

BasalekTunnelGreeter_Guide::
	.string "Welcome to Basalek Tunnels.\p"
	.string "In this high pressure tunnel network,\n"
	.string "only the strongest may survive.\p"
	.string "If you feel up to the challenge, why\n"
	.string "don't you try finding and defeating\l"
	.string "the reigning champion?\p"
	.string "Be careful though!\p"
	.string "The ground here can be very rough,\n"
	.string "and heavily favors Rock-type Pokémon.\p"
	.string "All grounded Pokémon using Rock-type\n"
	.string "moves will pack an extra punch,\l"
	.string "but be warned, for if your Pokémon\l"
	.string "isn't of Rock, Ground, or Steel type,\l"
	.string "the sharp rocks might actually cause\l"
	.string "more harm than good.\p"
	.string "Also, due to the heat rising from the\n"
	.string "ground, many Water-type moves will be\l"
	.string "highly ineffective.\p"
	.string "With that out of the way,\n"
	.string "go get 'em, champ!$"

BasalekTunnelGreeter_Victory::
	.string "Beat the reigning champion, did you?\n"
	.string "Way to go!\p"
	.string "However, I better not catch you\n"
	.string "sitting on your laurels!\p"
	.string "Knowing the champion, I'm sure\n"
	.string "he's started to train even harder\l"
	.string "than before.\p"
	.string "The next time you meet, you may be\n"
	.string "in for a big surprise!$"
