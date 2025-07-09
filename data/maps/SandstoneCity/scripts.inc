SandstoneCity_MapScripts::
# 2 "data/maps/SandstoneCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedSandstone
	.byte 0


VisitedSandstone::
# 9 "data/maps/SandstoneCity/scripts.pory"
	setflag FLAG_TEMP_1
# 10 "data/maps/SandstoneCity/scripts.pory"
	setflag FLAG_VISITED_SANDSTONE_CITY
	checkitem ITEM_MEGA_RING
# 0 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq VisitedSandstone_1
	return

VisitedSandstone_1:
# 12 "data/maps/SandstoneCity/scripts.pory"
	clearflag FLAG_OBTAINED_MEGA_RING
	return


Sandstone_Sign1::
# 17 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Sign1_Text, MSGBOX_SIGN
	end


Sandstone_Sign2::
# 21 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Sign2_Text, MSGBOX_SIGN
	end


Sandstone_Sign3::
# 25 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Sign3_Text, MSGBOX_SIGN
	end


Sandstone_Sign4::
# 29 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Sign4_Text, MSGBOX_SIGN
	end


Sandstone_Sign5::
# 33 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Sign5_Text, MSGBOX_SIGN
	end


Sandstone_Sign6::
# 37 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Sign6_Text, MSGBOX_SIGN
	end


Sandstone_Boy2::
# 64 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Boy2_Text, MSGBOX_NPC
	end


Sandstone_Lass::
# 68 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Lass_Text, MSGBOX_NPC
	end


Sandstone_GameboyKid1::
# 72 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_GameboyKid1_Text, MSGBOX_NPC
	end


Sandstone_GameboyKid2::
# 76 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_GameboyKid2_Text, MSGBOX_NPC
	end


Sandstone_GossipWoman1::
# 80 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_GossipWoman1_Text, MSGBOX_NPC
	end


Sandstone_GossipWoman2::
# 84 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_GossipWoman2_Text, MSGBOX_NPC
	end


Sandstone_Gentleman::
# 88 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Gentleman_Text, MSGBOX_NPC
	end


Sandstone_Maniac::
# 92 "data/maps/SandstoneCity/scripts.pory"
	goto_if_set FLAG_SANDSTONE_ULTRABALL, Sandstone_Maniac_2
# 96 "data/maps/SandstoneCity/scripts.pory"
	lock
# 97 "data/maps/SandstoneCity/scripts.pory"
	faceplayer
# 98 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Maniac_Text2, MSGBOX_YESNO
# 99 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_Maniac_5
# 103 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Maniac_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_ULTRA_BALL
# 0 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_Maniac_8
Sandstone_Maniac_7:
# 107 "data/maps/SandstoneCity/scripts.pory"
	giveitem ITEM_ULTRA_BALL
# 108 "data/maps/SandstoneCity/scripts.pory"
	setflag FLAG_SANDSTONE_ULTRABALL
# 109 "data/maps/SandstoneCity/scripts.pory"
	release
	end

Sandstone_Maniac_2:
# 93 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Maniac_Text3, MSGBOX_NPC
	end

Sandstone_Maniac_5:
# 100 "data/maps/SandstoneCity/scripts.pory"
	msgbox WhyTravel, MSGBOX_NPC
	end

Sandstone_Maniac_8:
# 105 "data/maps/SandstoneCity/scripts.pory"
	goto ZeBagIsFull
	goto Sandstone_Maniac_7


Sandstone_Man3::
# 113 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Man3_Text, MSGBOX_NPC
	end


Sandstone_Man5::
# 117 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Man5_Text, MSGBOX_NPC
	end


Sandstone_Youngster::
# 121 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Youngster_Text, MSGBOX_NPC
	end


Sandstone_Nerd::
# 125 "data/maps/SandstoneCity/scripts.pory"
	msgbox Sandstone_Nerd_Text, MSGBOX_NPC
	end


SandstoneRivalTrigger1::
# 209 "data/maps/SandstoneCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 210 "data/maps/SandstoneCity/scripts.pory"
	goto SandstoneRival
	return


SandstoneRivalTrigger2::
# 213 "data/maps/SandstoneCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 214 "data/maps/SandstoneCity/scripts.pory"
	goto SandstoneRival
	return


SandstoneRivalTrigger3::
# 217 "data/maps/SandstoneCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 218 "data/maps/SandstoneCity/scripts.pory"
	goto SandstoneRival
	return


SandstoneRivalTrigger4::
# 221 "data/maps/SandstoneCity/scripts.pory"
	setvar VAR_TEMP_1, 4
# 222 "data/maps/SandstoneCity/scripts.pory"
	goto SandstoneRival
	return


SandstoneRival::
# 226 "data/maps/SandstoneCity/scripts.pory"
	setflag FLAG_RIVAL_COSTUME_CHANGE
# 227 "data/maps/SandstoneCity/scripts.pory"
	call SetupRivalGfxId
# 228 "data/maps/SandstoneCity/scripts.pory"
	lock
# 229 "data/maps/SandstoneCity/scripts.pory"
	delay 5
# 230 "data/maps/SandstoneCity/scripts.pory"
	opendoor 51, 22
# 231 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SandstoneRival_2
SandstoneRival_1:
# 235 "data/maps/SandstoneCity/scripts.pory"
	waitdooranim
# 236 "data/maps/SandstoneCity/scripts.pory"
	addobject 13
# 237 "data/maps/SandstoneCity/scripts.pory"
	switch VAR_TEMP_1
# 238 "data/maps/SandstoneCity/scripts.pory"
	case 1, SandstoneRival_6
# 244 "data/maps/SandstoneCity/scripts.pory"
	case 2, SandstoneRival_7
# 251 "data/maps/SandstoneCity/scripts.pory"
	case 3, SandstoneRival_8
# 260 "data/maps/SandstoneCity/scripts.pory"
	case 4, SandstoneRival_9
SandstoneRival_4:
	checkplayergender
# 0 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq SandstoneRival_11
	msgbox RivalBrendanLikeOutfit, MSGBOX_YESNO
# 0 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneRival_22
# 284 "data/maps/SandstoneCity/scripts.pory"
	msgbox DontLikeBrendansOutfit
# 285 "data/maps/SandstoneCity/scripts.pory"
	clearflag FLAG_RIVAL_COSTUME_CHANGE
SandstoneRival_10:
# 288 "data/maps/SandstoneCity/scripts.pory"
	closemessage
# 289 "data/maps/SandstoneCity/scripts.pory"
	switch VAR_TEMP_1
# 290 "data/maps/SandstoneCity/scripts.pory"
	case 1, SandstoneRival_16
# 291 "data/maps/SandstoneCity/scripts.pory"
	case 2, SandstoneRival_16
# 295 "data/maps/SandstoneCity/scripts.pory"
	case 3, SandstoneRival_17
# 299 "data/maps/SandstoneCity/scripts.pory"
	case 4, SandstoneRival_18
SandstoneRival_14:
# 304 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 13
# 305 "data/maps/SandstoneCity/scripts.pory"
	removeobject 13
# 306 "data/maps/SandstoneCity/scripts.pory"
	removeobject 14
# 307 "data/maps/SandstoneCity/scripts.pory"
	removeobject 15
# 308 "data/maps/SandstoneCity/scripts.pory"
	release
	end

SandstoneRival_2:
# 232 "data/maps/SandstoneCity/scripts.pory"
	delay 10
# 233 "data/maps/SandstoneCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
	goto SandstoneRival_1

SandstoneRival_6:
# 239 "data/maps/SandstoneCity/scripts.pory"
	applymovement LOCALID_PLAYER, Sandstone_PushPlayerDown
# 240 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk1Down
# 241 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/SandstoneCity/scripts.pory"
	closedoor 51, 22
# 243 "data/maps/SandstoneCity/scripts.pory"
	waitdooranim
	goto SandstoneRival_4

SandstoneRival_7:
# 245 "data/maps/SandstoneCity/scripts.pory"
	safefollow
# 246 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk1Down
# 247 "data/maps/SandstoneCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 248 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 0
# 249 "data/maps/SandstoneCity/scripts.pory"
	closedoor 51, 22
# 250 "data/maps/SandstoneCity/scripts.pory"
	waitdooranim
	goto SandstoneRival_4

SandstoneRival_8:
# 252 "data/maps/SandstoneCity/scripts.pory"
	safefollow
# 253 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk1Down
# 254 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 0
# 255 "data/maps/SandstoneCity/scripts.pory"
	closedoor 51, 22
# 256 "data/maps/SandstoneCity/scripts.pory"
	waitdooranim
# 257 "data/maps/SandstoneCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 258 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk1Down
# 259 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 0
	goto SandstoneRival_4

SandstoneRival_9:
# 261 "data/maps/SandstoneCity/scripts.pory"
	safefollow
# 262 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk1Down
# 263 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 0
# 264 "data/maps/SandstoneCity/scripts.pory"
	closedoor 51, 22
# 265 "data/maps/SandstoneCity/scripts.pory"
	waitdooranim
# 266 "data/maps/SandstoneCity/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 267 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk2Down
# 268 "data/maps/SandstoneCity/scripts.pory"
	waitmovement 0
	goto SandstoneRival_4

SandstoneRival_11:
	msgbox RivalMayLikeOutfit, MSGBOX_YESNO
# 0 "data/maps/SandstoneCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SandstoneRival_19
# 275 "data/maps/SandstoneCity/scripts.pory"
	msgbox DontLikeMaysOutfit
# 276 "data/maps/SandstoneCity/scripts.pory"
	clearflag FLAG_RIVAL_COSTUME_CHANGE
	goto SandstoneRival_10

SandstoneRival_16:
# 292 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Sandstone_RivalExitAfterStore
# 293 "data/maps/SandstoneCity/scripts.pory"
	delay 32
# 294 "data/maps/SandstoneCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto SandstoneRival_14

SandstoneRival_17:
# 296 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Sandstone_RivalExitAfterStore2
# 297 "data/maps/SandstoneCity/scripts.pory"
	delay 16
# 298 "data/maps/SandstoneCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto SandstoneRival_14

SandstoneRival_18:
# 300 "data/maps/SandstoneCity/scripts.pory"
	applymovement 13, Walk8Left
# 301 "data/maps/SandstoneCity/scripts.pory"
	delay 16
# 302 "data/maps/SandstoneCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	goto SandstoneRival_14

SandstoneRival_19:
# 272 "data/maps/SandstoneCity/scripts.pory"
	msgbox LikeMaysOutfit
	goto SandstoneRival_10

SandstoneRival_22:
# 281 "data/maps/SandstoneCity/scripts.pory"
	msgbox LikeBrendansOutfit
	goto SandstoneRival_10


# 312 "data/maps/SandstoneCity/scripts.pory"
Sandstone_PushPlayerDown:
# 313 "data/maps/SandstoneCity/scripts.pory"
	lock_facing_direction
# 314 "data/maps/SandstoneCity/scripts.pory"
	walk_down
# 315 "data/maps/SandstoneCity/scripts.pory"
	unlock_facing_direction
# 316 "data/maps/SandstoneCity/scripts.pory"
	delay_8
# 317 "data/maps/SandstoneCity/scripts.pory"
	step_end

# 320 "data/maps/SandstoneCity/scripts.pory"
Sandstone_RivalExitAfterStore:
# 321 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 322 "data/maps/SandstoneCity/scripts.pory"
	walk_down
# 323 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 324 "data/maps/SandstoneCity/scripts.pory"
	walk_down
# 325 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 325 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 325 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 325 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 325 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 325 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 326 "data/maps/SandstoneCity/scripts.pory"
	step_end

# 328 "data/maps/SandstoneCity/scripts.pory"
Sandstone_RivalExitAfterStore2:
# 329 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 330 "data/maps/SandstoneCity/scripts.pory"
	walk_down
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 331 "data/maps/SandstoneCity/scripts.pory"
	walk_left
# 332 "data/maps/SandstoneCity/scripts.pory"
	step_end

SandstoneCity_BunearyGirl::
# 395 "data/maps/SandstoneCity/scripts.pory"
	lock
# 396 "data/maps/SandstoneCity/scripts.pory"
	msgbox SandstoneCity_BunearyGirl_Text
# 397 "data/maps/SandstoneCity/scripts.pory"
	release
	return


Sandstone_Sign1_Text::
# 40 "data/maps/SandstoneCity/scripts.pory"
	.string "SANDSTONE CITY\n"
	.string "“Where Pokémon and people meet.”$"

Sandstone_Sign2_Text::
# 44 "data/maps/SandstoneCity/scripts.pory"
	.string "Fishing Guru's house$"

Sandstone_Sign3_Text::
# 47 "data/maps/SandstoneCity/scripts.pory"
	.string "Sandstone Library$"

Sandstone_Sign4_Text::
# 50 "data/maps/SandstoneCity/scripts.pory"
	.string "{UP_ARROW} Adamant Tower\n"
	.string "{DOWN_ARROW} Route 12\l"
	.string "{RIGHT_ARROW} Route 13\l"
	.string "{LEFT_ARROW} Route 14$"

Sandstone_Sign5_Text::
# 56 "data/maps/SandstoneCity/scripts.pory"
	.string "Sandstone City Pokémon Gym$"

Sandstone_Sign6_Text::
# 59 "data/maps/SandstoneCity/scripts.pory"
	.string "Sandstone Department Store$"

Sandstone_Boy2_Text::
# 128 "data/maps/SandstoneCity/scripts.pory"
	.string "To the north of the city lies the\n"
	.string "Adamant Tower.\p"
	.string "It's a real hotspot for strong\n"
	.string "trainers, but in order to get in,\l"
	.string "you must either earn the approval\l"
	.string "of the Gym Leader, or go through\l"
	.string "rigorous training at the gym.$"

Sandstone_Lass_Text::
# 137 "data/maps/SandstoneCity/scripts.pory"
	.string "I just returned from a trip to Unova.\p"
	.string "You wouldn't believe some of the\n"
	.string "crazy Pokémon I saw there!$"

Sandstone_GameboyKid1_Text::
# 142 "data/maps/SandstoneCity/scripts.pory"
	.string "We just tried trading two Pokémon that\n"
	.string "were meant to evolve through trading,\l"
	.string "but they didn't evolve at all!$"

Sandstone_GameboyKid2_Text::
# 147 "data/maps/SandstoneCity/scripts.pory"
	.string "Maybe the evolution method has\n"
	.string "changed…$"

Sandstone_GossipWoman1_Text::
# 151 "data/maps/SandstoneCity/scripts.pory"
	.string "The Department Store sells everything\n"
	.string "you could ever ask for!$"

Sandstone_GossipWoman2_Text::
# 155 "data/maps/SandstoneCity/scripts.pory"
	.string "Sometimes I take my Pokémon shopping\n"
	.string "with me.\p"
	.string "Seeing them be amazed by all the\n"
	.string "different products would put a smile\l"
	.string "on anyone's face!$"

Sandstone_Gentleman_Text::
# 162 "data/maps/SandstoneCity/scripts.pory"
	.string "As far as I can remember, Sandstone\n"
	.string "has always been a massive city.\p"
	.string "I wonder what it used to look like\n"
	.string "before it got this big.$"

Sandstone_Maniac_Text2::
# 168 "data/maps/SandstoneCity/scripts.pory"
	.string "Do you like Pokémon?$"

Sandstone_Maniac_Text::
# 171 "data/maps/SandstoneCity/scripts.pory"
	.string "Yes, yes, you have Pokémon with you,\n"
	.string "so I'm sure you do!\p"
	.string "If you want to have even more Pokémon\n"
	.string "with you, you need to use one of these!$"

Sandstone_Maniac_Text3::
# 177 "data/maps/SandstoneCity/scripts.pory"
	.string "Take care now!$"

WhyTravel::
# 180 "data/maps/SandstoneCity/scripts.pory"
	.string "That so? Then why are you on a journey\n"
	.string "with Pokémon?$"

Sandstone_Man3_Text::
# 184 "data/maps/SandstoneCity/scripts.pory"
	.string "I still haven't defeated the Gym\n"
	.string "Leader here…\p"
	.string "But that's all right.\p"
	.string "I'm going to become such a strong\n"
	.string "trainer, she'll be the one who comes\l"
	.string "looking for ME!$"

Sandstone_Man5_Text::
# 192 "data/maps/SandstoneCity/scripts.pory"
	.string "I just bought a hundred Potions from\n"
	.string "the Department Store.\p"
	.string "There's no way I'll lose against\n"
	.string "the Gym Leader now!$"

Sandstone_Youngster_Text::
# 198 "data/maps/SandstoneCity/scripts.pory"
	.string "I like shorts! They're comfy\n"
	.string "and easy to wear!$"

Sandstone_Nerd_Text::
# 202 "data/maps/SandstoneCity/scripts.pory"
	.string "Want to become smart like me?\p"
	.string "Then you need to head to the Sandstone\n"
	.string "Library and read a few books!$"

RivalMayLikeOutfit::
# 335 "data/maps/SandstoneCity/scripts.pory"
	.string "{RIVAL}: Oh, hi {PLAYER}!\n"
	.string "Were you going shopping too?\p"
	.string "I was just getting some essential items\n"
	.string "when I noticed this outfit on sale.\p"
	.string "Doesn't it look cute or what?$"

DontLikeMaysOutfit::
# 342 "data/maps/SandstoneCity/scripts.pory"
	.string "{RIVAL}: Oh… But I thought it was cute…\p"
	.string "No, you know what? It IS cute!\n"
	.string "You just don't understand fashion!\p"
	.string "Maybe you should think about switching\n"
	.string "that get-up of yours as well sometimes.\l"
	.string "Being on the road for such a long time\l"
	.string "has definitely left your outfit\l"
	.string "worse for wear!$"

LikeMaysOutfit::
# 352 "data/maps/SandstoneCity/scripts.pory"
	.string "{RIVAL}: I knew you'd like it!\p"
	.string "I see your sense of fashion\n"
	.string "isn't completely outdated.\p"
	.string "You too should visit the clothing\n"
	.string "store. Maybe you'll find something\l"
	.string "you like.\p"
	.string "…Anyway, I need to get going now!\p"
	.string "See you!$"

RivalBrendanLikeOutfit::
# 362 "data/maps/SandstoneCity/scripts.pory"
	.string "{RIVAL}: Oh, hey {PLAYER}!\n"
	.string "Planning to do a bit of shopping?\p"
	.string "I was just stocking up on some\n"
	.string "essential items when I happened to\l"
	.string "notice this outfit on sale.\p"
	.string "Does it look cool or what?$"

DontLikeBrendansOutfit::
# 370 "data/maps/SandstoneCity/scripts.pory"
	.string "{RIVAL}: Oh… I thought you'd agree…\p"
	.string "Well, if you're looking to update\n"
	.string "your style, they've just opened a new\l"
	.string "clothing store.\l"
	.string "They're even having a sale right now!\p"
	.string "…Anyway, I need to get going.\p"
	.string "See you…$"

LikeBrendansOutfit::
# 379 "data/maps/SandstoneCity/scripts.pory"
	.string "{RIVAL}: Thanks! Guess my sense of\n"
	.string "fashion isn't completely outdated\l"
	.string "after all!\p"
	.string "If you're looking to change your style,\n"
	.string "they just opened a new clothing store\l"
	.string "here.\p"
	.string "Our clothes do take quite a bit of\n"
	.string "damage when we're on the road so\l"
	.string "changing to a new get-up isn't such\l"
	.string "a bad idea.\p"
	.string "…Anyway, I need to get going now.\p"
	.string "See you again soon!$"

SandstoneCity_BunearyGirl_Text::
# 399 "data/maps/SandstoneCity/scripts.pory"
	.string "I know you don't like going to\n"
	.string "the Pokémon Center, but we really\l"
	.string "need to get that injury healed.$"
