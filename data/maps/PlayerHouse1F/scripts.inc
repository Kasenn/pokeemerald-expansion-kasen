PlayerHouse1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto_if_ge PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
	setmaplayoutindex LAYOUT_PLAYER_HOUSE1F_MAY
	goto PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	setflag FLAG_SPOKEN_TO_MOM_AFTER_MEGA_RING
	return

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED, PlayerHouse1F_Intro
	.2byte 0


PlayerHouse1F_Intro::
	lock
	turnobject 1, DIR_NORTH
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	msgbox PlayerHouse1F_LookPlayer
	closemessage
	turnobject 1, DIR_WEST
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse1F_PlayerSitTable
	waitmovement 0
	delay 20
	msgbox PlayerHouse1F_Disc1
	closemessage
	fadescreen FADE_TO_BLACK
	delay 80
	fadescreen FADE_FROM_BLACK
	msgbox PlayerHouse1F_Disc2
	closemessage
	playse SE_PIN
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	delay 48
	turnobject 1, DIR_SOUTH
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox PlayerHouse1F_Disc3
	closemessage
	msgbox PlayerHouse1F_Intro_Text_0
	playfanfare MUS_OBTAIN_ITEM
	message PlayerHouse1F_Intro_Text_1
	waitfanfare
	waitmessage
	setflag FLAG_SYS_B_DASH
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES
	msgbox PlayerHouse1F_Intro_Text_2
	closemessage
	delay 30
	turnobject 1, DIR_WEST
	release
	return


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
	msgbox PlayerHouse1F_BrotherGossip, MSGBOX_NPC
	turnobject 2, DIR_EAST
	return


PlayerHouse1F_Mom::
	lock
	faceplayer
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES
	goto_if_eq PlayerHouse1F_Mom_1
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_BROTHER_FOUGHT
	goto_if_eq PlayerHouse1F_Mom_2
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ge PlayerHouse1F_Mom_5
PlayerHouse1F_Mom_4:
	goto PlayersHouse_1F_EventScript_MomHealsParty
	return

PlayerHouse1F_Mom_1:
	msgbox MomSeeYou, MSGBOX_NPC
	turnobject 1, DIR_WEST
	return

PlayerHouse1F_Mom_2:
	msgbox PlayerHouse1F_MomGoodbye_Text, MSGBOX_NPC
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GIVEN_GOODBYE_TO_MOM
	return

PlayerHouse1F_Mom_3:
	setflag FLAG_SPOKEN_TO_MOM_AFTER_MEGA_RING
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse1F_Mom_10
	goto PlayersHouse_1F_EventScript_MomHealsParty
	return

PlayerHouse1F_Mom_5:
	goto_if_unset FLAG_SPOKEN_TO_MOM_AFTER_MEGA_RING, PlayerHouse1F_Mom_3
	goto PlayerHouse1F_Mom_4

PlayerHouse1F_Mom_10:
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse1F_Mom_13
	msgbox MomLookWhosBack, MSGBOX_NPC
	return

PlayerHouse1F_Mom_13:
	msgbox DadLeftAGift, MSGBOX_NPC
	return


PlayerHouse1F_Dad::
	goto_if_set FLAG_RECEIVED_CAPSULE, PlayerHouse1F_Dad_2
	lock
	faceplayer
	goto_if_set FLAG_TEMP_5, PlayerHouse1F_Dad_5
	msgbox GiftFromDad
PlayerHouse1F_Dad_4:
	closemessage
	checkitemspace ITEM_ABILITY_CAPSULE
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerHouse1F_Dad_9
PlayerHouse1F_Dad_8:
	giveitem ITEM_ABILITY_CAPSULE
	waitse
	msgbox ExplainCapsule, MSGBOX_NPC
	setflag FLAG_RECEIVED_CAPSULE
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq PlayerHouse1F_Dad_12
PlayerHouse1F_Dad_11:
	end

PlayerHouse1F_Dad_2:
	msgbox WhereBrother, MSGBOX_NPC
	end

PlayerHouse1F_Dad_5:
	msgbox GiftFromDadShort
	goto PlayerHouse1F_Dad_4

PlayerHouse1F_Dad_9:
	setflag FLAG_TEMP_5
	goto ZeBagIsFull
	goto PlayerHouse1F_Dad_8

PlayerHouse1F_Dad_12:
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto PlayerHouse1F_Dad_11


PlayerHouse1F_Intro_Text_0:
	.string "Oh, and one more thing.$"

PlayerHouse1F_Intro_Text_1:
	.string "{COLOR RED}{SHADOW LIGHT_RED}Obtained the running shoes!$"

PlayerHouse1F_Intro_Text_2:
	.string "Mom: Now you can zip around everywhere\nmuch faster!$"

PlayerHouse1F_LookPlayer::
	.string "Mom: Look, {PLAYER}!\n"
	.string "Your brother is back from his trip!\p"
	.string "Come, come sit by the table!$"

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

MomSeeYou::
	.string "Mom: See you, honey!$"

PlayerHouse1F_MomGoodbye_Text::
	.string "Mom: You're leaving on an adventure?\n"
	.string "Well, can't say that I'm surprised.\p"
	.string "Your father was like that as well\n"
	.string "when we were young.\p"
	.string "Speaking of which, your father has been\n"
	.string "working hard to get accepted into\l"
	.string "the Pokémon League.\p"
	.string "Maybe one day you'll challenge him to\n"
	.string "a Pokémon battle on League grounds.\p"
	.string "If your Pokémon ever get hurt,\n"
	.string "come see me and I'll help patch them up.$"

MomLookWhosBack::
	.string "Mom: Oh, great timing, honey!\n"
	.string "Look who's back home!$"

DadLeftAGift::
	.string "Mom: Oh, hi honey!\p"
	.string "It's a shame you two just missed each\n"
	.string "other, but dad came to visit while\l"
	.string "you were away!\p"
	.string "I believe he left a gift for you in\n"
	.string "your room. You should go have a look!$"

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
	.string "but you can still have yours.$"

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
