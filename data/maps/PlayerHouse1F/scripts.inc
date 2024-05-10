PlayerHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PH1FClearFlag
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 2, PlayerHouse1F_MomIntro
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, 5, PlayerHouse1F_BrotherApology
	.2byte 0


PlayerHouse1F_MomIntro::
	goto_if_set FLAG_UNUSED_INTROGOSSIP, PlayerHouse1F_MomIntro_1
	lockall
	applymovement 1, PlayerHouse1F_face1
	waitmovement 0
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	msgbox PlayerHouse1F_LookPlayer
	waitmessage
	closemessage
	delay 30
	call IntroNameBrother
	msgbox PlayerHouse1F_LookPlayer2
	waitmessage
	closemessage
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse1F_PlayerSitTable
	waitmovement 0
	delay 20
	msgbox PlayerHouse1F_Disc1
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	delay 80
	fadescreen FADE_FROM_BLACK
	msgbox PlayerHouse1F_Disc2
	waitmessage
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	applymovement 1, PlayerHouse1F_face3
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse1F_face1
	waitmovement 0
	msgbox PlayerHouse1F_Disc3
	waitmessage
	closemessage
	setflag FLAG_UNUSED_INTROGOSSIP
	setflag FLAG_UNUSED_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 3
	call Player1F_Shoes
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	releaseall
	end

PlayerHouse1F_MomIntro_1:
	end


IntroNameBrother::
	fadescreen FADE_TO_BLACK
	special NameBrother
	waitstate
	msgbox SoItsBrother, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq IntroNameBrother_2
IntroNameBrother_1:
	closemessage
	return

IntroNameBrother_2:
	goto BrotherLoop
	goto IntroNameBrother_1


BrotherLoop::
	goto IntroNameBrother
	end


Player1F_Shoes::
	msgbox Player1F_Shoes_Text_0, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	msgbox Player1F_Shoes_Text_1, MSGBOX_DEFAULT
	setflag FLAG_SYS_B_DASH
	setflag FLAG_RECEIVED_RUNNING_SHOES
	msgbox Player1F_Shoes_Text_2, MSGBOX_DEFAULT
	closemessage
	delay 30
	return


PlayerHouse1F_face1:
	face_up
	step_end

PlayerHouse1F_face2:
	face_left
	step_end

PlayerHouse1F_face3:
	face_down
	step_end

PlayerHouse1F_face4:
	face_right
	step_end

PlayerHouse1F_PlayerSitTable:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	step_end

PlayerHouse1F_Brother::
	lockall
	faceplayer
	msgbox PlayerHouse1F_BrotherGossip
	waitmessage
	applymovement 2, PlayerHouse1F_face4
	waitmovement 0
	release
	end


PlayerHouse1F_Mom::
	lockall
	faceplayer
	compare VAR_PEARLWOOD_TOWN_STATE, 3
	goto_if_eq PlayerHouse1F_Mom_1
	compare VAR_PEARLWOOD_TOWN_STATE, 7
	goto_if_eq PlayerHouse1F_Mom_2
	compare VAR_PEARLWOOD_TOWN_STATE, 11
	goto_if_ge PlayerHouse1F_Mom_7
	goto PlayersHouse_1F_EventScript_MomHealsParty
	return

PlayerHouse1F_Mom_1:
	call PlayerHouse1F_MomGossip
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	release
	end

PlayerHouse1F_Mom_2:
	call PlayerHouse1F_MomGoodbye
	applymovement 1, PlayerHouse1F_face2
	waitmovement 0
	release
	end

PlayerHouse1F_Mom_7:
	goto_if_set FLAG_DAD_INTRO, PlayerHouse1F_Mom_10
PlayerHouse1F_Mom_9:
	msgbox MomLookWhosBack, MSGBOX_NPC
	setflag FLAG_DAD_INTRO
	end

PlayerHouse1F_Mom_10:
	goto PlayersHouse_1F_EventScript_MomHealsParty
	goto PlayerHouse1F_Mom_9


PlayerHouse1F_MomGossip::
	msgbox PlayerHouse1F_MomGossip_Text_0
	waitmessage
	closemessage
	return


PlayerHouse1F_MomGoodbye::
	msgbox PlayerHouse1F_MomGoodbye_Text_0
	waitmessage
	closemessage
	setvar VAR_PEARLWOOD_TOWN_STATE, 8
	return


PlayerHouse1F_BrotherApology::
	lockall
	playse SE_PIN
	applymovement 3, Common_Movement_ExclamationMark
	waitmovement 0
	delay 40
	applymovement 3, PlayerHouse1F_face1
	waitmovement 0
	delay 10
	applymovement 3, Walk2Up
	waitmovement 0
	delay 15
	msgbox PlayerHouse1F_Apology
	waitmessage
	closemessage
	applymovement 3, BrotherLeavesHouse
	waitmovement 0
	removeobject 3
	setflag FLAG_UNUSED_LOSTTOBROTHER
	setflag FLAG_UNUSED_BROTHER_PEARLFIGHT
	setvar VAR_PEARLWOOD_TOWN_STATE, 7
	delay 30
	release
	end


BrotherLeavesHouse:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

PH1FClearFlag::
	compare VAR_PEARLWOOD_TOWN_STATE, 5
	goto_if_eq PH1FClearFlag_2
PH1FClearFlag_1:
	compare VAR_PEARLWOOD_TOWN_STATE, 11
	goto_if_ge PH1FClearFlag_5
PH1FClearFlag_4:
	end

PH1FClearFlag_2:
	clearflag FLAG_UNUSED_LOSTTOBROTHER
	goto PH1FClearFlag_1

PH1FClearFlag_5:
	clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
	goto PH1FClearFlag_4


WooperDoll::
	lockall
	msgbox WooperDoll_Text_0
	waitmessage
	closemessage
	release
	end


AzurillDoll::
	lockall
	msgbox AzurillDoll_Text_0
	waitmessage
	closemessage
	release
	end


PlayerHouse1F_Dad::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_CAPSULE, PlayerHouse1F_Dad_2
	goto_if_set FLAG_TEMP_5, PlayerHouse1F_Dad_5
	msgbox GiftFromDad
PlayerHouse1F_Dad_4:
	closemessage
	checkitemspace ITEM_ABILITY_CAPSULE
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerHouse1F_Dad_9
	giveitem ITEM_ABILITY_CAPSULE
	waitse
	msgbox ExplainCapsule, MSGBOX_NPC
	setflag FLAG_RECEIVED_CAPSULE
	end

PlayerHouse1F_Dad_2:
	msgbox WhereBrother, MSGBOX_NPC
	end

PlayerHouse1F_Dad_5:
	msgbox GiftFromDadShort
	goto PlayerHouse1F_Dad_4

PlayerHouse1F_Dad_9:
	msgbox NotEnoughRoom, MSGBOX_NPC
	setflag FLAG_TEMP_5
	end


Player1F_Shoes_Text_0:
	.string "Oh, and one more thing.$"

Player1F_Shoes_Text_1:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Obtained the running shoes!$"

Player1F_Shoes_Text_2:
	.string "Mom: Now you can zip around everywhere\nmuch faster!$"

PlayerHouse1F_MomGossip_Text_0:
	.string "Mom: See you, honey!$"

PlayerHouse1F_MomGoodbye_Text_0:
	.string "Mom: You're leaving on an adventure?\nWell, can't say that I'm surprised.\pYour father was like that as well\nwhen we were young.\pSpeaking of which, your father has been\nworking hard to get accepted into\lthe Pokémon League.\pMaybe one day you'll challenge him to\na Pokémon battle on League grounds.\pIf your Pokémon ever get hurt,\ncome see me and I'll help patch them up.$"

WooperDoll_Text_0:
	.string "It's a Wooper doll.$"

AzurillDoll_Text_0:
	.string "It's an Azurill doll.$"

SoItsBrother::
	.string "So it's {BROTHER}?$"

PlayerHouse1F_LookPlayer::
	.string "Mom: Look, {PLAYER}!\n"
	.string "Your brother is back from his trip!$"

PlayerHouse1F_LookPlayer2::
	.string "Mom: Come, come sit by the table!$"

PlayerHouse1F_Disc1::
	.string "Mom: So, {BROTHER},\n"
	.string "how was your trip to Kanto?\p"
	.string "Go on, I want to hear everything!\p"
	.string "{BROTHER}: …$"

PlayerHouse1F_Disc2::
	.string "{BROTHER}: In the end, that Lance's\n"
	.string "Dragonite was simply too strong…\p"
	.string "Mom: Well, at least you tried\n"
	.string "your best.\p"
	.string "It sounds like you still had fun\n"
	.string "in the end!\p"
	.string "{BROTHER}: Anyway mom, aren't you\n"
	.string "forgetting something?$"

PlayerHouse1F_Disc3::
	.string "Mom: Oh, that's right!\p"
	.string "This is supposed to be your special day,\n"
	.string "{PLAYER}!\p"
	.string "That's right! Today is the day you get\n"
	.string "your very own Pokémon!\p"
	.string "Every young trainer in this town\n"
	.string "gets their first Pokémon from\l"
	.string "professor Birch.\p"
	.string "You should go see him in his lab\n"
	.string "and see what he has to offer.\p"
	.string "The professor's lab is just\n"
	.string "northwest from here.$"

PlayerHouse1F_BrotherGossip::
	.string "{BROTHER}: Go get 'em, champ!$"

PlayerHouse1F_Apology::
	.string "{BROTHER}: Sorry about that.\nI knew that with my experience it was\lgoing to be an unfair fight. I hope you\ldon't take that loss too seriously…\pAnyway, have you thought about what\nyou're going to do next?\pIf you're up for it, we should totally\nsee which of us is the better trainer\lby taking on the Pokémon Gym Challenge!\pOur neighbor {RIVAL} just set out so we\nbetter get moving or we'll fall behind!\pDon't know about you but I'm not content\nwith a second place.\pCatch ya later!$"

GiftFromDad::
	.string "Dad: Hm?\p"
	.string "Well, if it isn't {PLAYER}!\p"
	.string "I had hoped I could see you and\n"
	.string "{BROTHER} before you flew out the door,\l"
	.string "but the exams at the Pokémon League\l"
	.string "have kept me incredibly busy.\p"
	.string "Still, I can't believe how much you've\n"
	.string "grown. You must have at least, what,\l"
	.string "three or four Gym Badges by now?\p"
	.string "Oh!\p"
	.string "I almost forgot. I picked up something\n"
	.string "during my travels that both you and\l"
	.string "{BROTHER} would certainly find useful.\p"
	.string "It's a shame {BROTHER} isn't here,\n"
	.string "but you can still have yours.\p$"

GiftFromDadShort::
	.string "Dad: It's a shame {BROTHER} isn't here,\n"
	.string "but you can still have yours.\p$"

ExplainCapsule::
	.string "Dad: That's an Ability Capsule.\p"
	.string "Many Pokémon are born with one of two\n"
	.string "different abilities.\p"
	.string "Using it on a Pokémon will cause it\n"
	.string "to adapt and change its innate ability.\p"
	.string "Do note that the Ability Capsule can\n"
	.string "be used only once.\l"
	.string "Make sure you decide carefully which\l"
	.string "Pokémon to use it on.$"

WhereBrother::
	.string "Dad: Have you seen {BROTHER} lately?\p"
	.string "Seeing how well he managed during\n"
	.string "the Kanto challenge, I hardly doubt\l"
	.string "his abilities.\p"
	.string "However, as a parent, I do still feel\n"
	.string "a bit anxious knowing you two are\l"
	.string "out there, traveling the world.$"

MomLookWhosBack::
	.string "Mom: Oh, great timing, honey!\n"
	.string "Look who's back home!$"
