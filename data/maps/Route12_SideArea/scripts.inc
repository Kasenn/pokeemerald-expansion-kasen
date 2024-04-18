Route12_SideArea_MapScripts::
	.byte 0


StrengthWoman::
	goto_if_set FLAG_RECEIVED_HM_STRENGTH, StrengthWoman_2
	lock
	faceplayer
	msgbox R12FoundMyHideout, MSGBOX_DEFAULT
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_RECEIVED_HM_STRENGTH
	waitfanfare
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end

StrengthWoman_2:
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end


R12FoundMyHideout::
	.string "I see you've managed to reach my small\n"
	.string "getaway.\p"
	.string "That must mean you're strong,\n"
	.string "but are you strong enough for this?$"

Need4BadgesFirst::
	.string "That Hidden Machine contains the move\n"
	.string "Strength.\p"
	.string "Strength packs a real punch, but be\n"
	.string "careful, as it will also leave your\l"
	.string "Pokémon susceptible to counter-attacks.\p"
	.string "It also lets you push certain boulders\n"
	.string "out of your way, but in order to use it,\l"
	.string "you must first obtain the badge from\l"
	.string "Sandstone City Pokémon Gym.$"
