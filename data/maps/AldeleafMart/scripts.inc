AldeleafMart_MapScripts::
	.byte 0


Aldeleaf_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Aldeleaf_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


	.align 2
Aldeleaf_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_NONE

Aldeleaf_Mart_EventScript_BlackBelt::
	msgbox Aldeleaf_Mart_Text_SomeItemsOnlyAtMart, MSGBOX_NPC
	end


Aldeleaf_Mart_EventScript_Man::
	msgbox Aldeleaf_Mart_Text_GreatBallIsBetter, MSGBOX_NPC
	end


Aldeleaf_Mart_Text_SomeItemsOnlyAtMart::
	.string "Do you use repels?\n"
	.string "They keep Pokémon away, so they're\l"
	.string "useful when you're in a hurry.$"

Aldeleaf_Mart_Text_GreatBallIsBetter::
	.string "I was hoping to find Great Balls here\n"
	.string "but it seems this mart's selection\l"
	.string "is a bit limited…$"
