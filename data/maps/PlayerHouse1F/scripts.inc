PlayerHouse1F_MapScripts::
# 2 "data/maps/PlayerHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/PlayerHouse1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	checkplayergender
# 0 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_RESULT, FEMALE
	goto_if_eq PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto_if_ge PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 4 "data/maps/PlayerHouse1F/scripts.pory"
	setmaplayoutindex LAYOUT_PLAYER_HOUSE1F_MAY
	goto PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 7 "data/maps/PlayerHouse1F/scripts.pory"
	setflag FLAG_SPOKEN_TO_MOM_AFTER_MEGA_RING
	return

PlayerHouse1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/PlayerHouse1F/scripts.pory"
	map_script_2 VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_INTRO_COMPLETED, PlayerHouse1F_Intro
	.2byte 0


PlayerHouse1F_Intro::
# 18 "data/maps/PlayerHouse1F/scripts.pory"
	lock
# 19 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject 1, DIR_NORTH
# 20 "data/maps/PlayerHouse1F/scripts.pory"
	playse SE_PIN
# 21 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 22 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 23 "data/maps/PlayerHouse1F/scripts.pory"
	delay 48
# 24 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_LookPlayer
# 25 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 26 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject 1, DIR_WEST
# 27 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerHouse1F_PlayerSitTable
# 28 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/PlayerHouse1F/scripts.pory"
	delay 20
# 30 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Disc1
# 31 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Disc1Part2
# 32 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 33 "data/maps/PlayerHouse1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/PlayerHouse1F/scripts.pory"
	delay 80
# 35 "data/maps/PlayerHouse1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 36 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Disc2
# 37 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Disc2Part2
# 38 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Disc2Part3
# 39 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 40 "data/maps/PlayerHouse1F/scripts.pory"
	playse SE_PIN
# 41 "data/maps/PlayerHouse1F/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 42 "data/maps/PlayerHouse1F/scripts.pory"
	waitmovement 0
# 43 "data/maps/PlayerHouse1F/scripts.pory"
	delay 48
# 44 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject 1, DIR_SOUTH
# 45 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 46 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Disc3
# 47 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 48 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_Intro_Text_0
# 49 "data/maps/PlayerHouse1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 50 "data/maps/PlayerHouse1F/scripts.pory"
	message ObtainedWatch
# 52 "data/maps/PlayerHouse1F/scripts.pory"
	waitfanfare
# 53 "data/maps/PlayerHouse1F/scripts.pory"
	waitmessage
# 54 "data/maps/PlayerHouse1F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES
# 55 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox ViewClock
# 57 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
# 58 "data/maps/PlayerHouse1F/scripts.pory"
	delay 30
# 59 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject 1, DIR_WEST
# 60 "data/maps/PlayerHouse1F/scripts.pory"
	release
	return


# 108 "data/maps/PlayerHouse1F/scripts.pory"
PlayerHouse1F_PlayerSitTable:
# 109 "data/maps/PlayerHouse1F/scripts.pory"
	walk_down
# 109 "data/maps/PlayerHouse1F/scripts.pory"
	walk_down
# 109 "data/maps/PlayerHouse1F/scripts.pory"
	walk_down
# 109 "data/maps/PlayerHouse1F/scripts.pory"
	walk_down
# 110 "data/maps/PlayerHouse1F/scripts.pory"
	walk_left
# 110 "data/maps/PlayerHouse1F/scripts.pory"
	walk_left
# 110 "data/maps/PlayerHouse1F/scripts.pory"
	walk_left
	step_end

PlayerHouse1F_Brother::
# 114 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_BrotherGossip, MSGBOX_NPC
# 115 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject 2, DIR_EAST
	return


PlayerHouse1F_Mom::
# 123 "data/maps/PlayerHouse1F/scripts.pory"
	lock
# 124 "data/maps/PlayerHouse1F/scripts.pory"
	faceplayer
# 125 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_RECEIVED_RUNNING_SHOES
	goto_if_eq PlayerHouse1F_Mom_1
# 129 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_BROTHER_FOUGHT
	goto_if_eq PlayerHouse1F_Mom_2
# 133 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_RING_OBTAINED
	goto_if_ge PlayerHouse1F_Mom_5
PlayerHouse1F_Mom_4:
# 149 "data/maps/PlayerHouse1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	return

PlayerHouse1F_Mom_1:
# 126 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox MomSeeYou, MSGBOX_NPC
# 127 "data/maps/PlayerHouse1F/scripts.pory"
	turnobject 1, DIR_WEST
	return

PlayerHouse1F_Mom_2:
# 130 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox PlayerHouse1F_MomGoodbye_Text, MSGBOX_NPC
# 131 "data/maps/PlayerHouse1F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_GIVEN_GOODBYE_TO_MOM
	return

PlayerHouse1F_Mom_3:
# 135 "data/maps/PlayerHouse1F/scripts.pory"
	setflag FLAG_SPOKEN_TO_MOM_AFTER_MEGA_RING
# 136 "data/maps/PlayerHouse1F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_CAPSULE, PlayerHouse1F_Mom_10
# 145 "data/maps/PlayerHouse1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomHealsParty
	return

PlayerHouse1F_Mom_5:
# 134 "data/maps/PlayerHouse1F/scripts.pory"
	goto_if_unset FLAG_SPOKEN_TO_MOM_AFTER_MEGA_RING, PlayerHouse1F_Mom_3
	goto PlayerHouse1F_Mom_4

PlayerHouse1F_Mom_10:
# 137 "data/maps/PlayerHouse1F/scripts.pory"
	goto_if_set FLAG_HIDE_PLAYERS_HOUSE_DAD, PlayerHouse1F_Mom_13
# 141 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox MomLookWhosBack, MSGBOX_NPC
	return

PlayerHouse1F_Mom_13:
# 138 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox DadLeftAGift, MSGBOX_NPC
	return


PlayerHouse1F_Dad::
# 183 "data/maps/PlayerHouse1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_CAPSULE, PlayerHouse1F_Dad_2
# 187 "data/maps/PlayerHouse1F/scripts.pory"
	lock
# 188 "data/maps/PlayerHouse1F/scripts.pory"
	faceplayer
# 189 "data/maps/PlayerHouse1F/scripts.pory"
	goto_if_set FLAG_TEMP_5, PlayerHouse1F_Dad_5
# 193 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox GiftFromDad
PlayerHouse1F_Dad_4:
# 195 "data/maps/PlayerHouse1F/scripts.pory"
	closemessage
	checkitemspace ITEM_ABILITY_CAPSULE
# 0 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PlayerHouse1F_Dad_9
PlayerHouse1F_Dad_8:
# 200 "data/maps/PlayerHouse1F/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE
# 201 "data/maps/PlayerHouse1F/scripts.pory"
	waitse
# 202 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox ExplainCapsule, MSGBOX_NPC
# 203 "data/maps/PlayerHouse1F/scripts.pory"
	setflag FLAG_RECEIVED_CAPSULE
# 204 "data/maps/PlayerHouse1F/scripts.pory"
	compare VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_STONE_OBTAINED
	goto_if_eq PlayerHouse1F_Dad_12
PlayerHouse1F_Dad_11:
# 207 "data/maps/PlayerHouse1F/scripts.pory"
	goto_if_set FLAG_Q34_DADS_HOME_START, PlayerHouse1F_Dad_15
PlayerHouse1F_Dad_14:
	end

PlayerHouse1F_Dad_2:
# 184 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox WhereBrother, MSGBOX_NPC
	end

PlayerHouse1F_Dad_5:
# 190 "data/maps/PlayerHouse1F/scripts.pory"
	msgbox GiftFromDadShort
	goto PlayerHouse1F_Dad_4

PlayerHouse1F_Dad_9:
# 197 "data/maps/PlayerHouse1F/scripts.pory"
	setflag FLAG_TEMP_5
# 198 "data/maps/PlayerHouse1F/scripts.pory"
	goto ZeBagIsFull
	goto PlayerHouse1F_Dad_8

PlayerHouse1F_Dad_12:
# 205 "data/maps/PlayerHouse1F/scripts.pory"
	setvar VAR_PEARLWOOD_TOWN_STATE, STORY_PEARLWOOD_MEGA_EVENT_COMPLETED
	goto PlayerHouse1F_Dad_11

PlayerHouse1F_Dad_15:
# 208 "data/maps/PlayerHouse1F/scripts.pory"
	completequest FLAG_Q34_DADS_HOME_COMPLETE
# 209 "data/maps/PlayerHouse1F/scripts.pory"
	special ShowJournalPopupRemove
	goto PlayerHouse1F_Dad_14


PlayerHouse1F_Intro_Text_0:
# 48 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Oh, and one more thing.$"

PlayerHouse1F_LookPlayer::
# 63 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Mom: Look, {PLAYER}!\n"
	.string "Your brother is back from his trip!\p"
	.string "Come, come sit by the table!$"

PlayerHouse1F_Disc1::
# 69 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Mom: So, {BROTHER},\n"
	.string "how was your trip to Kanto?\p"
	.string "Go on, I want to hear everything!$"

PlayerHouse1F_Disc1Part2::
# 74 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{BROTHER}: …$"

PlayerHouse1F_Disc2::
# 78 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{BROTHER}: In the end, that Lance's\n"
	.string "Dragonite was simply too strong…$"

PlayerHouse1F_Disc2Part2::
# 82 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Mom: Well, at least you tried\n"
	.string "your best.\p"
	.string "It sounds like you still had fun\n"
	.string "in the end!$"

PlayerHouse1F_Disc2Part3::
# 88 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{BROTHER}: Anyway mom, aren't you\n"
	.string "forgetting something?$"

PlayerHouse1F_Disc3::
# 93 "data/maps/PlayerHouse1F/scripts.pory"
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
# 118 "data/maps/PlayerHouse1F/scripts.pory"
	.string "{BROTHER}: Go get 'em, champ!$"

MomSeeYou::
# 153 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Mom: See you, honey!$"

PlayerHouse1F_MomGoodbye_Text::
# 156 "data/maps/PlayerHouse1F/scripts.pory"
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
# 169 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Mom: Oh, great timing, honey!\n"
	.string "Look who's back home!$"

DadLeftAGift::
# 173 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Mom: Oh, hi honey!\p"
	.string "It's a shame you two just missed each\n"
	.string "other, but dad came to visit while\l"
	.string "you were away!\p"
	.string "I believe he left a gift for you in\n"
	.string "your room. You should go have a look!$"

GiftFromDad::
# 214 "data/maps/PlayerHouse1F/scripts.pory"
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
# 232 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Dad: It's a shame {BROTHER} isn't here,\n"
	.string "but you can still have yours.\p$"

ExplainCapsule::
# 236 "data/maps/PlayerHouse1F/scripts.pory"
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
# 247 "data/maps/PlayerHouse1F/scripts.pory"
	.string "Dad: Have you seen {BROTHER} lately?\p"
	.string "Seeing how well he managed during\n"
	.string "the Kanto challenge, I hardly doubt\l"
	.string "his abilities.\p"
	.string "However, as a parent, I do still feel\n"
	.string "a bit anxious knowing you two are\l"
	.string "out there, traveling the world.$"
