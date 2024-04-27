SandstoneCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VisitedSandstone
	.byte 0


VisitedSandstone::
	setflag FLAG_VISITED_SANDSTONE_CITY
	end


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
	.string "Maybe the evolution method has changed…$"

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
