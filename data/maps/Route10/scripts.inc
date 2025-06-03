Route10_MapScripts::
	.byte 0


Route10_Tr2_Swimmer_F1::
# 4 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR2_SWIMMER_F1, R10Tr2_Intro, R10Tr2_Lose
# 5 "data/maps/Route10/scripts.pory"
	msgbox R10Tr2_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr3_Fisherman::
# 21 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR3_FISHERMAN, R10Tr3_Intro, R10Tr3_Lose
# 22 "data/maps/Route10/scripts.pory"
	msgbox R10Tr3_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr4_Swimmer_M1::
# 40 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR4_SWIMMER_M1, R10Tr4_Intro, R10Tr4_Lose
# 41 "data/maps/Route10/scripts.pory"
	msgbox R10Tr4_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr5_BlackBelt::
# 58 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR5_BLACKBELT, R10Tr5_Intro, R10Tr5_Lose
# 59 "data/maps/Route10/scripts.pory"
	msgbox R10Tr5_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr6_Hiker::
# 76 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR6_HIKER, R10Tr6_Intro, R10Tr6_Lose
# 77 "data/maps/Route10/scripts.pory"
	msgbox R10Tr6_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr7_Swimmer_F2::
# 93 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR7_SWIMMER_F2, R10Tr7_Intro, R10Tr7_Lose
# 94 "data/maps/Route10/scripts.pory"
	msgbox R10Tr7_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr8_Swimmer_M2::
# 110 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR8_SWIMMER_M2, R10Tr8_Intro, R10Tr8_Lose
# 111 "data/maps/Route10/scripts.pory"
	msgbox R10Tr8_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr9_BattleGirl::
# 128 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR9_BATTLEGIRL, R10Tr9_Intro, R10Tr9_Lose
# 129 "data/maps/Route10/scripts.pory"
	msgbox R10Tr9_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Tr10_Tuber_M::
# 148 "data/maps/Route10/scripts.pory"
	trainerbattle_single TRAINER_R10_TR10_TUBER_M, R10Tr10_Intro, R10Tr10_Lose
# 149 "data/maps/Route10/scripts.pory"
	msgbox R10Tr10_PostBattle, MSGBOX_AUTOCLOSE
	end


Route10_Beachgoer_M::
# 166 "data/maps/Route10/scripts.pory"
	msgbox Route10_Beachgoer_M_Text
# 167 "data/maps/Route10/scripts.pory"
	release
	return


Route10_Beachgoer_F::
# 176 "data/maps/Route10/scripts.pory"
	msgbox Route10_Beachgoer_F_Text
# 177 "data/maps/Route10/scripts.pory"
	release
	return


Route10_Tr1_AceSwimmer::
# 185 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR1_ACESWIMMER
	goto_if 1, Route10_Tr1_AceSwimmer_1
# 188 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR2_SWIMMER_F1
	goto_if 1, Route10_Tr1_AceSwimmer_5
Route10_Tr1_AceSwimmer_3:
# 196 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_NotEligible, MSGBOX_NPC
	end

Route10_Tr1_AceSwimmer_1:
# 186 "data/maps/Route10/scripts.pory"
	goto R10_Ace_PostBattle
	return

Route10_Tr1_AceSwimmer_2:
# 193 "data/maps/Route10/scripts.pory"
	goto R10_Ace_EligibleForBattle
	return

Route10_Tr1_AceSwimmer_4:
# 190 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR7_SWIMMER_F2
	goto_if 1, Route10_Tr1_AceSwimmer_8
	goto Route10_Tr1_AceSwimmer_3

Route10_Tr1_AceSwimmer_5:
# 189 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR4_SWIMMER_M1
	goto_if 1, Route10_Tr1_AceSwimmer_4
	goto Route10_Tr1_AceSwimmer_3

Route10_Tr1_AceSwimmer_8:
# 191 "data/maps/Route10/scripts.pory"
	checktrainerflag TRAINER_R10_TR8_SWIMMER_M2
	goto_if 1, Route10_Tr1_AceSwimmer_2
	goto Route10_Tr1_AceSwimmer_3


R10_Ace_EligibleForBattle::
# 201 "data/maps/Route10/scripts.pory"
	lock
# 202 "data/maps/Route10/scripts.pory"
	faceplayer
# 203 "data/maps/Route10/scripts.pory"
	goto_if_unset FLAG_TEMP_5, R10_Ace_EligibleForBattle_2
# 208 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_ReadyForBattleShort, MSGBOX_YESNO
R10_Ace_EligibleForBattle_1:
# 210 "data/maps/Route10/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq R10_Ace_EligibleForBattle_6
R10_Ace_EligibleForBattle_5:
# 215 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_DeclineBattle, MSGBOX_NPC
	end

R10_Ace_EligibleForBattle_2:
# 204 "data/maps/Route10/scripts.pory"
	setflag FLAG_TEMP_5
# 205 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_ReadyForBattle, MSGBOX_YESNO
	goto R10_Ace_EligibleForBattle_1

R10_Ace_EligibleForBattle_6:
# 211 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_BeginBattle, MSGBOX_DEFAULT
# 212 "data/maps/Route10/scripts.pory"
	trainerbattle_no_intro TRAINER_R10_TR1_ACESWIMMER, R10_Ace_Lose
# 213 "data/maps/Route10/scripts.pory"
	goto R10_Ace_PostBattle
	goto R10_Ace_EligibleForBattle_5


R10_Ace_PostBattle::
# 220 "data/maps/Route10/scripts.pory"
	lock
# 221 "data/maps/Route10/scripts.pory"
	faceplayer
# 222 "data/maps/Route10/scripts.pory"
	goto_if_set FLAG_OBTAINED_BLUNDER_POLICY, R10_Ace_PostBattle_2
# 226 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_Reward, MSGBOX_DEFAULT
	checkitemspace ITEM_BLUNDER_POLICY
# 0 "data/maps/Route10/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq R10_Ace_PostBattle_5
R10_Ace_PostBattle_4:
# 230 "data/maps/Route10/scripts.pory"
	giveitem ITEM_BLUNDER_POLICY
# 231 "data/maps/Route10/scripts.pory"
	waitfanfare
# 232 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_ExplainReward
# 233 "data/maps/Route10/scripts.pory"
	setflag FLAG_OBTAINED_BLUNDER_POLICY
# 234 "data/maps/Route10/scripts.pory"
	setvar VAR_0x8004, 30
# 235 "data/maps/Route10/scripts.pory"
	call RewardBP
# 236 "data/maps/Route10/scripts.pory"
	release
	end

R10_Ace_PostBattle_2:
# 223 "data/maps/Route10/scripts.pory"
	msgbox R10_Ace_PostBattle_Text, MSGBOX_NPC
	end

R10_Ace_PostBattle_5:
# 228 "data/maps/Route10/scripts.pory"
	goto ZeBagIsFull
	goto R10_Ace_PostBattle_4


R10Tr2_Intro::
# 8 "data/maps/Route10/scripts.pory"
	.string "Out of my way, brat!$"

R10Tr2_Lose::
# 11 "data/maps/Route10/scripts.pory"
	.string "Ow ow ow!\n"
	.string "I'm sorry for my behavior!$"

R10Tr2_PostBattle::
# 15 "data/maps/Route10/scripts.pory"
	.string "I didn't mean to call you a brat!\n"
	.string "I'm sorry!$"

R10Tr3_Intro::
# 25 "data/maps/Route10/scripts.pory"
	.string "Which do you prefer, fishing in the\n"
	.string "sea or a stream?$"

R10Tr3_Lose::
# 29 "data/maps/Route10/scripts.pory"
	.string "Like in deep-sea fishing, I lost\n"
	.string "spectacularly!$"

R10Tr3_PostBattle::
# 33 "data/maps/Route10/scripts.pory"
	.string "Fishing is the greatest whether it's\n"
	.string "in the sea or a stream.\l"
	.string "You agree with me, right?$"

R10Tr4_Intro::
# 44 "data/maps/Route10/scripts.pory"
	.string "Adults are working out here.\n"
	.string "Move!$"

R10Tr4_Lose::
# 48 "data/maps/Route10/scripts.pory"
	.string "Oof…\n"
	.string "Can't believe I just lost to a kid…$"

R10Tr4_PostBattle::
# 52 "data/maps/Route10/scripts.pory"
	.string "You've had your fun,\n"
	.string "now leave me alone…$"

R10Tr5_Intro::
# 62 "data/maps/Route10/scripts.pory"
	.string "You're a Pokémon trainer.\n"
	.string "No need for words. We battle now.$"

R10Tr5_Lose::
# 66 "data/maps/Route10/scripts.pory"
	.string "… … … … … …\n"
	.string "… … … … … …$"

R10Tr5_PostBattle::
# 70 "data/maps/Route10/scripts.pory"
	.string "It was I who challenged you, and yet\n"
	.string "I lost. I am deeply shamed…$"

R10Tr6_Intro::
# 80 "data/maps/Route10/scripts.pory"
	.string "Young people are too happy to go with\n"
	.string "the flow. They're without direction.$"

R10Tr6_Lose::
# 84 "data/maps/Route10/scripts.pory"
	.string "You have a firm sense of purpose.$"

R10Tr6_PostBattle::
# 87 "data/maps/Route10/scripts.pory"
	.string "Don't let others lead you astray.\n"
	.string "Don't lose direction as you grow older.$"

R10Tr7_Intro::
# 97 "data/maps/Route10/scripts.pory"
	.string "I liked training here by myself.\n"
	.string "It's awful that all these people came!$"

R10Tr7_Lose::
# 101 "data/maps/Route10/scripts.pory"
	.string "I hate this!$"

R10Tr7_PostBattle::
# 104 "data/maps/Route10/scripts.pory"
	.string "Okay! I won't complain about other\n"
	.string "people being here.$"

R10Tr8_Intro::
# 114 "data/maps/Route10/scripts.pory"
	.string "Can your Pokémon dodge our\n"
	.string "lightning-quick attacks?$"

R10Tr8_Lose::
# 118 "data/maps/Route10/scripts.pory"
	.string "I never knew such a technique existed!\n"
	.string "You've defeated us thoroughly.$"

R10Tr8_PostBattle::
# 122 "data/maps/Route10/scripts.pory"
	.string "I haven't lost my passion for speed.\n"
	.string "I will try harder.$"

R10Tr9_Intro::
# 132 "data/maps/Route10/scripts.pory"
	.string "My Pokémon can't be taken down\n"
	.string "easily!$"

R10Tr9_Lose::
# 136 "data/maps/Route10/scripts.pory"
	.string "You're kidding!\n"
	.string "Explain how I lost!$"

R10Tr9_PostBattle::
# 140 "data/maps/Route10/scripts.pory"
	.string "Haha!\n"
	.string "You won, all right!\p"
	.string "I'll work my way back up by taking on\n"
	.string "trainers I happen to meet!$"

R10Tr10_Intro::
# 152 "data/maps/Route10/scripts.pory"
	.string "I love Water-type Pokémon.\n"
	.string "I love other Pokémon, too!$"

R10Tr10_Lose::
# 156 "data/maps/Route10/scripts.pory"
	.string "Waaah! I lost!\n"
	.string "Waaah! Waaah!$"

R10Tr10_PostBattle::
# 160 "data/maps/Route10/scripts.pory"
	.string "Shouting is good for me!\n"
	.string "It uplifts me!$"

Route10_Beachgoer_M_Text::
# 169 "data/maps/Route10/scripts.pory"
	.string "Strange…\p"
	.string "I swear I placed my cup down\n"
	.string "right next to me…$"

Route10_Beachgoer_F_Text::
# 179 "data/maps/Route10/scripts.pory"
	.string "Excuse me, but you're\n"
	.string "blocking the sun.$"

R10_Ace_NotEligible::
# 240 "data/maps/Route10/scripts.pory"
	.string "I met some rude swimmers here\n"
	.string "not too long ago.\p"
	.string "I wish I could've put them in their\n"
	.string "place, but my slow Pokémon just\l"
	.string "couldn't catch up to them.\p"
	.string "Why don't you see if you can take\n"
	.string "them on?\p"
	.string "And once you've done that, come back\n"
	.string "to me if you want a real challenge.$"

R10_Ace_ReadyForBattle::
# 251 "data/maps/Route10/scripts.pory"
	.string "I saw how you handled those rude\n"
	.string "swimmers.\p"
	.string "They were pestering me some time ago,\n"
	.string "so I'm glad to see someone put them\l"
	.string "in their place.\p"
	.string "I must admit, you're pretty good.\p"
	.string "But are you good enough to handle\n"
	.string "my Pokémon?$"

R10_Ace_ReadyForBattleShort::
# 261 "data/maps/Route10/scripts.pory"
	.string "Think you're good enough to handle\n"
	.string "my Pokémon?$"

R10_Ace_BeginBattle::
# 265 "data/maps/Route10/scripts.pory"
	.string "The game's on!$"

R10_Ace_Lose::
# 268 "data/maps/Route10/scripts.pory"
	.string "Oh wow, I sure got put in my place.$"

R10_Ace_DeclineBattle::
# 271 "data/maps/Route10/scripts.pory"
	.string "Aww… And here I was getting my\n"
	.string "hopes up…$"

R10_Ace_PostBattle_Text::
# 275 "data/maps/Route10/scripts.pory"
	.string "I should be sad for losing, but\n"
	.string "seeing you beat those rude swimmers\l"
	.string "really made my day.$"

R10_Ace_Reward::
# 280 "data/maps/Route10/scripts.pory"
	.string "Oh wow, you're way stronger\n"
	.string "than I expected.\p"
	.string "I thought I had my strategy perfected\n"
	.string "to a tee, but I guess I still need\l"
	.string "some more practice.\p"
	.string "Maybe you can put this item to\n"
	.string "better use?$"

R10_Ace_ExplainReward::
# 289 "data/maps/Route10/scripts.pory"
	.string "That there Blunder Policy massively\n"
	.string "boosts a Pokémon's speed when it\l"
	.string "misses with a move.\p"
	.string "Use it in combination with strong-\n"
	.string "hitting, low-accuracy moves, and\l"
	.string "watch how your Pokémon turns into\l"
	.string "an unstoppable force!\p"
	.string "Oh, and before I forget,\n"
	.string "take these as well.$"
