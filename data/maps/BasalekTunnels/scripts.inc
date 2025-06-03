BasalekTunnels_MapScripts::
	.byte 0


BasaltTunnel_Tr1_Hiker1::
# 6 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR1_HIKER1, BasaltTr1_Intro, BasaltTr1_Lose
# 7 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr1_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr2_BlackBelt::
# 25 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR2_BLACKBELT, BasaltTr2_Intro, BasaltTr2_Lose
# 26 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr2_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr3_Picnicker::
# 43 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR3_PICNICKER, BasaltTr3_Intro, BasaltTr3_Lose
# 44 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr3_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr4_FireBreather::
# 63 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR4_FIREBREATHER, BasaltTr4_Intro, BasaltTr4_Lose
# 64 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr4_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr5_BlackBelt2::
# 82 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR5_BLACKBELT2, BasaltTr5_Intro, BasaltTr5_Lose
# 83 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr5_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr6_CamperM::
# 104 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR6_CAMPERM, BasaltTr6_Intro, BasaltTr6_Lose
# 105 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr6_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr7_Picnicker2::
# 123 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR7_PICNICKER2, BasaltTr7_Intro, BasaltTr7_Lose
# 124 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr7_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr8_Hiker2::
# 142 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR8_HIKER2, BasaltTr8_Intro, BasaltTr8_Lose
# 143 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr8_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr9_Beauty::
# 160 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR9_BEAUTY, BasaltTr9_Intro, BasaltTr9_Lose
# 161 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr9_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr10_FireBreather2::
# 179 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR10_FIREBREATHER2, BasaltTr10_Intro, BasaltTr10_Lose
# 180 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr10_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr11_Hiker3::
# 196 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_single TRAINER_BASALTUNNEL_TR11_HIKER3, BasaltTr11_Intro, BasaltTr11_Lose
# 197 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr11_PostBattle, MSGBOX_AUTOCLOSE
	end


BasaltTunnel_Tr12_Brock::
	checkitem ITEM_HM08
# 0 "data/maps/BasalekTunnels/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne BasaltTunnel_Tr12_Brock_2
# 216 "data/maps/BasalekTunnels/scripts.pory"
	lock
# 217 "data/maps/BasalekTunnels/scripts.pory"
	faceplayer
# 218 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr12_Intro, MSGBOX_YESNO
# 219 "data/maps/BasalekTunnels/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BasaltTunnel_Tr12_Brock_5
# 223 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr12_IntroYes
BasaltTunnel_Tr12_Brock_4:
# 225 "data/maps/BasalekTunnels/scripts.pory"
	trainerbattle_no_intro TRAINER_BASALTUNNEL_TR12_BROCK, BasaltTr12_Lose
# 226 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BrockPostBat
# 227 "data/maps/BasalekTunnels/scripts.pory"
	closemessage
# 228 "data/maps/BasalekTunnels/scripts.pory"
	giveitem ITEM_HM_ROCK_CLIMB
# 229 "data/maps/BasalekTunnels/scripts.pory"
	waitfanfare
# 230 "data/maps/BasalekTunnels/scripts.pory"
	msgbox ExplainRockClimb
# 231 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr12_PostBattle
# 232 "data/maps/BasalekTunnels/scripts.pory"
	goto_if_set FLAG_Q38_BASALEK_TUNNELS_START, BasaltTunnel_Tr12_Brock_9
BasaltTunnel_Tr12_Brock_8:
# 236 "data/maps/BasalekTunnels/scripts.pory"
	release
	return

BasaltTunnel_Tr12_Brock_2:
# 213 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr12_PostBattle, MSGBOX_NPC
	end

BasaltTunnel_Tr12_Brock_5:
# 220 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasaltTr12_IntroNo
	goto BasaltTunnel_Tr12_Brock_4

BasaltTunnel_Tr12_Brock_9:
# 233 "data/maps/BasalekTunnels/scripts.pory"
	completequest FLAG_Q38_BASALEK_TUNNELS_COMPLETE
# 234 "data/maps/BasalekTunnels/scripts.pory"
	special ShowJournalPopupRemove
	goto BasaltTunnel_Tr12_Brock_8


BasalekTunnelGreeter::
# 293 "data/maps/BasalekTunnels/scripts.pory"
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 1, BasalekTunnelGreeter_1
# 297 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasalekTunnelGreeter_Guide, MSGBOX_NPC
# 298 "data/maps/BasalekTunnels/scripts.pory"
	goto_if_unset FLAG_Q38_BASALEK_TUNNELS_START, BasalekTunnelGreeter_5
	return

BasalekTunnelGreeter_1:
# 294 "data/maps/BasalekTunnels/scripts.pory"
	msgbox BasalekTunnelGreeter_Victory, MSGBOX_NPC
	return

BasalekTunnelGreeter_4:
# 299 "data/maps/BasalekTunnels/scripts.pory"
	startquest FLAG_Q38_BASALEK_TUNNELS_START
# 300 "data/maps/BasalekTunnels/scripts.pory"
	special ShowJournalPopupAdd
	return

BasalekTunnelGreeter_5:
# 298 "data/maps/BasalekTunnels/scripts.pory"
	checktrainerflag TRAINER_BASALTUNNEL_TR12_BROCK
	goto_if 0, BasalekTunnelGreeter_4
	return


BasaltTr1_Intro::
# 10 "data/maps/BasalekTunnels/scripts.pory"
	.string "Think you're tough enough\n"
	.string "to train here?$"

BasaltTr1_Lose::
# 14 "data/maps/BasalekTunnels/scripts.pory"
	.string "Ghahaha!\p"
	.string "Welcome to the Basalek Tunnels!\n"
	.string "I think you'll fit right in!$"

BasaltTr1_PostBattle::
# 19 "data/maps/BasalekTunnels/scripts.pory"
	.string "These tunnels can be rough,\n"
	.string "but I'm sure you'll do fine!$"

BasaltTr2_Intro::
# 29 "data/maps/BasalekTunnels/scripts.pory"
	.string "Our fists are hard as steel!$"

BasaltTr2_Lose::
# 32 "data/maps/BasalekTunnels/scripts.pory"
	.string "Your will is strong as steel.$"

BasaltTr2_PostBattle::
# 35 "data/maps/BasalekTunnels/scripts.pory"
	.string "Steel-type Pokémon do great here.\p"
	.string "Not only are they not encumbered by\n"
	.string "the rough terrain, they also do\l"
	.string "amazing against Rock-type Pokémon.$"

BasaltTr3_Intro::
# 47 "data/maps/BasalekTunnels/scripts.pory"
	.string "Who has the knowledge and\n"
	.string "the technique for survival?\p"
	.string "Pokémon rangers, that's who!$"

BasaltTr3_Lose::
# 52 "data/maps/BasalekTunnels/scripts.pory"
	.string "I didn't have enough Pokémon\n"
	.string "know-how…$"

BasaltTr3_PostBattle::
# 56 "data/maps/BasalekTunnels/scripts.pory"
	.string "To break away from civilization and\n"
	.string "awaken the wild spirit within!\p"
	.string "That's our vision.$"

BasaltTr4_Intro::
# 67 "data/maps/BasalekTunnels/scripts.pory"
	.string "My Pokémon are so hot,\n"
	.string "they'll melt even rock!$"

BasaltTr4_Lose::
# 71 "data/maps/BasalekTunnels/scripts.pory"
	.string "Could not melt through your\n"
	.string "defenses…$"

BasaltTr4_PostBattle::
# 75 "data/maps/BasalekTunnels/scripts.pory"
	.string "I thought my lava Pokémon could\n"
	.string "melt through rock, but I guess\l"
	.string "type advantages still exist…$"

BasaltTr5_Intro::
# 86 "data/maps/BasalekTunnels/scripts.pory"
	.string "You've made a mistake\n"
	.string "coming here!$"

BasaltTr5_Lose::
# 90 "data/maps/BasalekTunnels/scripts.pory"
	.string "Looks like I was the one\n"
	.string "mistaken.$"

BasaltTr5_PostBattle::
# 94 "data/maps/BasalekTunnels/scripts.pory"
	.string "I've noticed my Pokémon gaining\n"
	.string "experience much faster here than\l"
	.string "anywhere else.\p"
	.string "If I train here for just a bit\n"
	.string "longer, I bet I could even take on\l"
	.string "the Pokemon League.$"

BasaltTr6_Intro::
# 108 "data/maps/BasalekTunnels/scripts.pory"
	.string "I just caught some new Pokémon.\n"
	.string "Let's see how strong they are!$"

BasaltTr6_Lose::
# 112 "data/maps/BasalekTunnels/scripts.pory"
	.string "I think we just need a bit more\n"
	.string "training, that's all.$"

BasaltTr6_PostBattle::
# 116 "data/maps/BasalekTunnels/scripts.pory"
	.string "All Pokémon get stronger the more\n"
	.string "they train.\p"
	.string "I'm sure these ones are no exception.$"

BasaltTr7_Intro::
# 127 "data/maps/BasalekTunnels/scripts.pory"
	.string "The warmth here is making me drowsy.\n"
	.string "Battle with me so I can stay awake.$"

BasaltTr7_Lose::
# 131 "data/maps/BasalekTunnels/scripts.pory"
	.string "This is a dream.\n"
	.string "I'm sure of it…$"

BasaltTr7_PostBattle::
# 135 "data/maps/BasalekTunnels/scripts.pory"
	.string "Losing burns me up…\n"
	.string "I'm just going to sleep right here!\l"
	.string "Zzz!$"

BasaltTr8_Intro::
# 146 "data/maps/BasalekTunnels/scripts.pory"
	.string "Let's have ourselves an explosive\n"
	.string "showdown!$"

BasaltTr8_Lose::
# 150 "data/maps/BasalekTunnels/scripts.pory"
	.string "I think we may have blown\n"
	.string "our fuse a bit too fast.$"

BasaltTr8_PostBattle::
# 154 "data/maps/BasalekTunnels/scripts.pory"
	.string "Sometimes mutually assured\n"
	.string "destruction is the only way to go.$"

BasaltTr9_Intro::
# 164 "data/maps/BasalekTunnels/scripts.pory"
	.string "I've come too far to be brought down\n"
	.string "by some kid!$"

BasaltTr9_Lose::
# 168 "data/maps/BasalekTunnels/scripts.pory"
	.string "No!\n"
	.string "All my progress…$"

BasaltTr9_PostBattle::
# 172 "data/maps/BasalekTunnels/scripts.pory"
	.string "I thought I was doing great,\n"
	.string "but I guess there are trainers here\l"
	.string "that are way beyond my league…$"

BasaltTr10_Intro::
# 183 "data/maps/BasalekTunnels/scripts.pory"
	.string "I caught hot Pokémon in here!\n"
	.string "Take a look!$"

BasaltTr10_Lose::
# 187 "data/maps/BasalekTunnels/scripts.pory"
	.string "What a bumpy ride that was!$"

BasaltTr10_PostBattle::
# 190 "data/maps/BasalekTunnels/scripts.pory"
	.string "I like the way you battle.\n"
	.string "It has a certain flair to it.$"

BasaltTr11_Intro::
# 200 "data/maps/BasalekTunnels/scripts.pory"
	.string "We will rock you!$"

BasaltTr11_Lose::
# 203 "data/maps/BasalekTunnels/scripts.pory"
	.string "What a big disgrace we are.$"

BasaltTr11_PostBattle::
# 206 "data/maps/BasalekTunnels/scripts.pory"
	.string "You're gonna be a big man someday,\n"
	.string "I can tell.$"

BasaltTr12_Intro::
# 238 "data/maps/BasalekTunnels/scripts.pory"
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
# 250 "data/maps/BasalekTunnels/scripts.pory"
	.string "So humble.\p"
	.string "You're going to challenge me,\n"
	.string "knowing that you'll lose?\p"
	.string "That's the trainer's honor that\n"
	.string "compels you to challenge me.\p"
	.string "Fine, then!\n"
	.string "Show me your best!$"

BasaltTr12_IntroYes::
# 259 "data/maps/BasalekTunnels/scripts.pory"
	.string "So confident.\p"
	.string "You think you're going to\n"
	.string "trounce over me, is that it?\p"
	.string "Fine, then!\n"
	.string "Let's see what you got!$"

BasaltTr12_Lose::
# 266 "data/maps/BasalekTunnels/scripts.pory"
	.string "I took you for granted,\n"
	.string "and so I lost.$"

BasaltTr12_PostBattle::
# 270 "data/maps/BasalekTunnels/scripts.pory"
	.string "I must get back to my training.\p"
	.string "Once my training is complete,\n"
	.string "maybe we can have another battle.$"

BrockPostBat::
# 275 "data/maps/BasalekTunnels/scripts.pory"
	.string "I'm honored to have battled\n"
	.string "such a strong trainer.\p"
	.string "For your great performance,\n"
	.string "I want you to have this.$"

ExplainRockClimb::
# 281 "data/maps/BasalekTunnels/scripts.pory"
	.string "That Hidden Machine contains\n"
	.string "the move Rock Climb.\p"
	.string "Rock Climb will clear most hazards\n"
	.string "from the battlefield, as well as\l"
	.string "increase the speed of the Pokémon\l"
	.string "using the move.\p"
	.string "It will also allow you to climb\n"
	.string "certain rocky walls.$"

BasalekTunnelGreeter_Guide::
# 305 "data/maps/BasalekTunnels/scripts.pory"
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
# 327 "data/maps/BasalekTunnels/scripts.pory"
	.string "Beat the reigning champion, did you?\n"
	.string "Way to go!\p"
	.string "However, I better not catch you\n"
	.string "sitting on your laurels!\p"
	.string "Knowing the champion, I'm sure\n"
	.string "he's started to train even harder\l"
	.string "than before.\p"
	.string "The next time you meet, you may be\n"
	.string "in for a big surprise!$"
