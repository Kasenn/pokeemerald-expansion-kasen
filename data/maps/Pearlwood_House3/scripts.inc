Pearlwood_House3_MapScripts::
	.byte 0


Pearlwood_House3_OldGuy::
	lockall
	faceplayer
	goto_if_unset FLAG_UNUSED_PEARLWOOD_POTION_SAMPLE, Pearlwood_House3_OldGuy_2
Pearlwood_House3_OldGuy_1:
	msgbox Pearlwood_Potion_Given
	waitmessage
	closemessage
	release
	end

Pearlwood_House3_OldGuy_2:
	msgbox Pearlwood_House3_OldGuy_Text_0
	waitmessage
	closemessage
	giveitem ITEM_POTION, 1
	setflag FLAG_UNUSED_PEARLWOOD_POTION_SAMPLE
	goto Pearlwood_House3_OldGuy_1


Pearlwood_House3_OldGuy_Text_0:
	.string "I used to work at a Pokémon Mart\nback in the day.\lHere, I want you to have this sample.$"

Pearlwood_Potion_Given::
	.string "A potion can be used anytime, so it's\neven more useful than a Pokémon Center\lin certain situations.$"
