Pearlwood_House3_MapScripts::
	.byte 0


Pearlwood_House3_OldGuy::
# 4 "data/maps/Pearlwood_House3/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Pearlwood_House3_OldGuy_2
# 8 "data/maps/Pearlwood_House3/scripts.pory"
	goto_if_unset FLAG_PEARLWOOD_POTION_SAMPLE, Pearlwood_House3_OldGuy_4
# 17 "data/maps/Pearlwood_House3/scripts.pory"
	msgbox Pearlwood_Potion_Given, MSGBOX_NPC
	return

Pearlwood_House3_OldGuy_2:
# 5 "data/maps/Pearlwood_House3/scripts.pory"
	msgbox GetYourPokemon, MSGBOX_NPC
	end

Pearlwood_House3_OldGuy_4:
# 9 "data/maps/Pearlwood_House3/scripts.pory"
	lock
# 10 "data/maps/Pearlwood_House3/scripts.pory"
	faceplayer
# 11 "data/maps/Pearlwood_House3/scripts.pory"
	msgbox Pearlwood_House3_OldGuy_Text
# 12 "data/maps/Pearlwood_House3/scripts.pory"
	giveitem ITEM_POTION, 1
# 13 "data/maps/Pearlwood_House3/scripts.pory"
	setflag FLAG_PEARLWOOD_POTION_SAMPLE
# 14 "data/maps/Pearlwood_House3/scripts.pory"
	release
	return


Pearlwood_House3_OldGuy_Text::
# 21 "data/maps/Pearlwood_House3/scripts.pory"
	.string "I used to work at a Pokémon Mart\n"
	.string "back in the day.\p"
	.string "Here, I want you to have this sample.$"

Pearlwood_Potion_Given::
# 26 "data/maps/Pearlwood_House3/scripts.pory"
	.string "A potion can be used anytime, so it's\n"
	.string "even more useful than a Pokémon Center\l"
	.string "in certain situations.$"

GetYourPokemon::
# 31 "data/maps/Pearlwood_House3/scripts.pory"
	.string "Oh?\p"
	.string "You look like the age where you're\n"
	.string "supposed to get your first Pokémon.\p"
	.string "If you're looking for the Professor's\n"
	.string "lab, you can find it on the opposite\l"
	.string "end of the town.$"
