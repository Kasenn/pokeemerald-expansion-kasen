SandstoneCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedSandstone
	.byte 0


VisitedSandstone::
	setflag FLAG_VISITED_SANDSTONE_CITY
	compare VAR_RIVAL_AROUND_SANDSTONE, 3
	goto_if_eq VisitedSandstone_2
VisitedSandstone_1:
	end

VisitedSandstone_2:
	setvar VAR_RIVAL_AROUND_SANDSTONE, 4
	goto VisitedSandstone_1


Sandstone_Sign1::
	msgbox Sandstone_Sign1_Text, MSGBOX_SIGN
	end


Sandstone_Sign2::
	msgbox Sandstone_Sign2_Text, MSGBOX_SIGN
	end


Sandstone_Sign3::
	msgbox Sandstone_Sign3_Text, MSGBOX_SIGN
	end


Sandstone_Sign4::
	msgbox Sandstone_Sign4_Text, MSGBOX_SIGN
	end


Sandstone_Sign5::
	msgbox Sandstone_Sign5_Text, MSGBOX_SIGN
	end


Sandstone_Sign6::
	msgbox Sandstone_Sign6_Text, MSGBOX_SIGN
	end


Sandstone_Boy2::
	msgbox Sandstone_Boy2_Text, MSGBOX_NPC
	end


Sandstone_Lass::
	msgbox Sandstone_Lass_Text, MSGBOX_NPC
	end


Sandstone_GameboyKid1::
	msgbox Sandstone_GameboyKid1_Text, MSGBOX_NPC
	end


Sandstone_GameboyKid2::
	msgbox Sandstone_GameboyKid2_Text, MSGBOX_NPC
	end


Sandstone_GossipWoman1::
	msgbox Sandstone_GossipWoman1_Text, MSGBOX_NPC
	end


Sandstone_GossipWoman2::
	msgbox Sandstone_GossipWoman2_Text, MSGBOX_NPC
	end


Sandstone_Gentleman::
	msgbox Sandstone_Gentleman_Text, MSGBOX_NPC
	end


Sandstone_Maniac::
	goto_if_set FLAG_SANDSTONE_ULTRABALL, Sandstone_Maniac_2
	lock
	faceplayer
	msgbox Sandstone_Maniac_Text2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_Maniac_5
	msgbox Sandstone_Maniac_Text, MSGBOX_DEFAULT
	checkitemspace ITEM_ULTRA_BALL
	compare VAR_RESULT, FALSE
	goto_if_eq Sandstone_Maniac_8
	giveitem ITEM_ULTRA_BALL
	setflag FLAG_SANDSTONE_ULTRABALL
	release
	end

Sandstone_Maniac_2:
	msgbox Sandstone_Maniac_Text3, MSGBOX_NPC
	end

Sandstone_Maniac_5:
	msgbox WhyTravel, MSGBOX_NPC
	end

Sandstone_Maniac_8:
	msgbox NotEnoughRoom, MSGBOX_NPC
	end


Sandstone_Man3::
	msgbox Sandstone_Man3_Text, MSGBOX_NPC
	end


Sandstone_Man5::
	msgbox Sandstone_Man5_Text, MSGBOX_NPC
	end


Sandstone_Youngster::
	msgbox Sandstone_Youngster_Text, MSGBOX_NPC
	end


Sandstone_Nerd::
	msgbox Sandstone_Nerd_Text, MSGBOX_NPC
	end


SandstoneRival::
	compare VAR_RIVAL_AROUND_SANDSTONE, 4
	goto_if_eq SandstoneRival_2
	setflag FLAG_MAY_COSTUME_CHANGE
	setflag FLAG_BRENDAN_COSTUME_CHANGE
	call Common_EventScript_SetupRivalGfxId
	lock
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	opendoor 51, 22
	waitdooranim
	addobject 13
	applymovement OBJ_EVENT_ID_PLAYER, Sandstone_PushPlayerDown
	applymovement 13, Sandstone_RivalExitStore
	waitmovement 0
	closedoor 51, 22
	waitdooranim
	checkplayergender
	copyvar VAR_TEMP_2, VAR_RESULT
	compare VAR_TEMP_2, MALE
	goto_if_eq SandstoneRival_5
	msgbox RivalBrendanLikeOutfit, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SandstoneRival_11
	goto_if_set FLAG_PC_CHANGE_COSTUME, SandstoneRival_27
	msgbox LikeBrendansOutfit
SandstoneRival_26:
	compare VAR_RIVAL_AROUND_SANDSTONE, 0
	goto_if_eq SandstoneRival_36
SandstoneRival_4:
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Sandstone_PlayerWatchRivalExit
	applymovement 13, Sandstone_RivalExitAfterStore
	waitmovement 0
	removeobject 13
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
	release
	end

SandstoneRival_2:
	release
	end

SandstoneRival_5:
	msgbox RivalMayLikeOutfit, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq SandstoneRival_8
	goto_if_set FLAG_PC_CHANGE_COSTUME, SandstoneRival_19
	msgbox LikeMaysOutfit
SandstoneRival_18:
	compare VAR_RIVAL_AROUND_SANDSTONE, 0
	goto_if_eq SandstoneRival_32
	goto SandstoneRival_4

SandstoneRival_8:
	goto_if_set FLAG_PC_CHANGE_COSTUME, SandstoneRival_15
	msgbox DontLikeMaysOutfit
SandstoneRival_14:
	clearflag FLAG_MAY_COSTUME_CHANGE
	clearflag FLAG_BRENDAN_COSTUME_CHANGE
	compare VAR_RIVAL_AROUND_SANDSTONE, 0
	goto_if_eq SandstoneRival_30
	goto SandstoneRival_4

SandstoneRival_11:
	goto_if_set FLAG_PC_CHANGE_COSTUME, SandstoneRival_23
	msgbox DontLikeBrendansOutfit
SandstoneRival_22:
	clearflag FLAG_MAY_COSTUME_CHANGE
	clearflag FLAG_BRENDAN_COSTUME_CHANGE
	compare VAR_RIVAL_AROUND_SANDSTONE, 0
	goto_if_eq SandstoneRival_34
	goto SandstoneRival_4

SandstoneRival_15:
	msgbox DontLikeMaysOutfitV2
	goto SandstoneRival_14

SandstoneRival_19:
	msgbox LikeMaysOutfitV2
	goto SandstoneRival_18

SandstoneRival_23:
	msgbox DontLikeBrendansOutfitV2
	goto SandstoneRival_22

SandstoneRival_27:
	msgbox LikeBrendansOutfitV2
	goto SandstoneRival_26

SandstoneRival_30:
	setvar VAR_RIVAL_AROUND_SANDSTONE, 2
	goto SandstoneRival_4

SandstoneRival_32:
	setvar VAR_RIVAL_AROUND_SANDSTONE, 1
	goto SandstoneRival_4

SandstoneRival_34:
	setvar VAR_RIVAL_AROUND_SANDSTONE, 2
	goto SandstoneRival_4

SandstoneRival_36:
	setvar VAR_RIVAL_AROUND_SANDSTONE, 1
	goto SandstoneRival_4


Sandstone_PushPlayerDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

Sandstone_PlayerWatchRivalExit:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

Sandstone_RivalExitStore:
	delay_8
	walk_down
	step_end

Sandstone_RivalExitAfterStore:
	walk_left
	walk_down
	walk_left
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Sandstone_Sign1_Text::
	.string "SANDSTONE CITY\n"
	.string "“Where Pokémon and people meet.”$"

Sandstone_Sign2_Text::
	.string "Fishing Guru's house$"

Sandstone_Sign3_Text::
	.string "Sandstone Library$"

Sandstone_Sign4_Text::
	.string "{UP_ARROW} Adamant Tower\n"
	.string "{DOWN_ARROW} Route 12\l"
	.string "{RIGHT_ARROW} Route 13\l"
	.string "{LEFT_ARROW} Route 14$"

Sandstone_Sign5_Text::
	.string "Sandstone City Pokémon Gym$"

Sandstone_Sign6_Text::
	.string "Sandstone Department Store$"

Sandstone_Boy2_Text::
	.string "To the north of the city lies the\n"
	.string "Adamant Tower.\p"
	.string "It's a real hotspot for strong\n"
	.string "trainers, but in order to get in,\l"
	.string "you must either earn the approval\l"
	.string "of the Gym Leader, or go through\l"
	.string "rigorous training at the gym.$"

Sandstone_Lass_Text::
	.string "I just returned from a trip to Unova.\p"
	.string "You wouldn't believe some of the\n"
	.string "crazy Pokémon I saw there!$"

Sandstone_GameboyKid1_Text::
	.string "We just tried trading two Pokémon that\n"
	.string "were meant to evolve through trading,\l"
	.string "but they didn't evolve at all!$"

Sandstone_GameboyKid2_Text::
	.string "Maybe the evolution method has\n"
	.string "changed…$"

Sandstone_GossipWoman1_Text::
	.string "The Department Store sells everything\n"
	.string "you could ever ask for!$"

Sandstone_GossipWoman2_Text::
	.string "Sometimes I take my Pokémon shopping\n"
	.string "with me.\p"
	.string "Seeing them be amazed by all the\n"
	.string "different products would put a smile\l"
	.string "on anyone's face!$"

Sandstone_Gentleman_Text::
	.string "As far as I can remember, Sandstone\n"
	.string "has always been a massive city.\p"
	.string "I wonder what it used to look like\n"
	.string "before it got this big.$"

Sandstone_Maniac_Text2::
	.string "Do you like Pokémon?$"

Sandstone_Maniac_Text::
	.string "Yes, yes, you have Pokémon with you,\n"
	.string "so I'm sure you do!\p"
	.string "If you want to have even more Pokémon\n"
	.string "with you, you need to use one of these!$"

Sandstone_Maniac_Text3::
	.string "Take care now!$"

WhyTravel::
	.string "That so? Then why are you on a journey\n"
	.string "with Pokémon?$"

Sandstone_Man3_Text::
	.string "I still haven't defeated the Gym\n"
	.string "Leader here…\p"
	.string "But that's all right.\p"
	.string "I'm going to become such a strong\n"
	.string "trainer, she'll be the one who comes\l"
	.string "looking for ME!$"

Sandstone_Man5_Text::
	.string "I just bought a hundred Potions from\n"
	.string "the Department Store.\p"
	.string "There's no way I'll lose against\n"
	.string "the Gym Leader now!$"

Sandstone_Youngster_Text::
	.string "I like shorts! They're comfy\n"
	.string "and easy to wear!$"

Sandstone_Nerd_Text::
	.string "Want to become smart like me?\p"
	.string "Then you need to head to the Sandstone\n"
	.string "Library and read a few books!$"

RivalMayLikeOutfit::
	.string "{RIVAL}: Oh, hi {PLAYER}!\n"
	.string "Were you going shopping too?\p"
	.string "I was just getting some essential items\n"
	.string "when I noticed this outfit on sale.\p"
	.string "Doesn't it look cute or what?$"

DontLikeMaysOutfit::
	.string "{RIVAL}: Oh… But I thought it was cute…\p"
	.string "No, you know what? It IS cute!\n"
	.string "You just don't understand fashion!\p"
	.string "Maybe you should think about switching\n"
	.string "that get-up of yours as well sometimes.\l"
	.string "Being on the road for such a long time\l"
	.string "has definitely left your outfit\l"
	.string "worse for wear!$"

LikeMaysOutfit::
	.string "{RIVAL}: I knew you'd like it!\p"
	.string "I see your sense of fashion\n"
	.string "isn't completely outdated.\p"
	.string "You too should visit the clothing\n"
	.string "store. Maybe you'll find something\l"
	.string "you like.\p"
	.string "…Anyway, I need to get going now!\p"
	.string "See you!$"

RivalBrendanLikeOutfit::
	.string "{RIVAL}: Oh, hey {PLAYER}!\n"
	.string "Planning to do a bit of shopping?\p"
	.string "I was just stocking up on some\n"
	.string "essential items when I happened to\l"
	.string "notice this outfit on sale.\p"
	.string "Does it look cool or what?$"

DontLikeBrendansOutfit::
	.string "{RIVAL}: Oh… I thought you'd agree…\p"
	.string "Well, if you're looking to update\n"
	.string "your style, they've just opened a new\l"
	.string "clothing store.\l"
	.string "They're even having a sale right now!\p"
	.string "…Anyway, I need to get going.\p"
	.string "See you…$"

LikeBrendansOutfit::
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

DontLikeMaysOutfitV2::
	.string "{RIVAL}: Oh… But I thought it was cute…\p"
	.string "No, you know what? It IS cute!\n"
	.string "You just don't understand fashion!\p"
	.string "Maybe you should think about\n"
	.string "switching that get-up of yours\l"
	.string "as well sometimes--\p"
	.string "…Oh wait, you already have…\p"
	.string "Well, whatever!$"

LikeMaysOutfitV2::
	.string "{RIVAL}: I knew you'd like it!\p"
	.string "I see your sense of fashion\n"
	.string "isn't completely outdated.\p"
	.string "…Oh wait, I see you've already\n"
	.string "got some fancy new style!\p"
	.string "And here I thought I got to\n"
	.string "surprise you first.\p"
	.string "…Anyway, I need to get going now!\p"
	.string "See you!$"

DontLikeBrendansOutfitV2::
	.string "{RIVAL}: Oh… I thought you'd agree…\p"
	.string "Um, I think your outfit looks\n"
	.string "good on you though…\p"
	.string "…Anyway, I need to get going.\p"
	.string "See you…$"

LikeBrendansOutfitV2::
	.string "{RIVAL}: Thanks! Guess my sense of\n"
	.string "fashion isn't completely outdated\l"
	.string "after all!\p"
	.string "Looks like you've already found\n"
	.string "the new clothing store.\p"
	.string "I have to say, that outfit of yours\n"
	.string "looks good too!\p"
	.string "…Anyway, I need to get going now.\p"
	.string "See you again soon!$"
