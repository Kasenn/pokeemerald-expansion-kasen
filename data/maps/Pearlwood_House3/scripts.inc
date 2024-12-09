Pearlwood_House3_MapScripts::
	.byte 0


Pearlwood_House3_OldGuy::
	goto_if_unset FLAG_SYS_POKEMON_GET, Pearlwood_House3_OldGuy_2
	goto_if_unset FLAG_PEARLWOOD_POTION_SAMPLE, Pearlwood_House3_OldGuy_4
	msgbox Pearlwood_Potion_Given, MSGBOX_NPC
	return

Pearlwood_House3_OldGuy_2:
	msgbox GetYourPokemon, MSGBOX_NPC
	end

Pearlwood_House3_OldGuy_4:
	lock
	faceplayer
	msgbox Pearlwood_House3_OldGuy_Text
	giveitem ITEM_POTION, 1
	setflag FLAG_PEARLWOOD_POTION_SAMPLE
	release
	return


Pearlwood_House3_OldGuy_Text::
	.string "I used to work at a Pokémon Mart\n"
	.string "back in the day.\p"
	.string "Here, I want you to have this sample.$"

Pearlwood_Potion_Given::
	.string "A potion can be used anytime, so it's\n"
	.string "even more useful than a Pokémon Center\l"
	.string "in certain situations.$"

GetYourPokemon::
	.string "Oh?\p"
	.string "You look like the age where you're\n"
	.string "supposed to get your first Pokémon.\p"
	.string "If you're looking for the Professor's\n"
	.string "lab, you can find it on the opposite\l"
	.string "end of the town.$"
