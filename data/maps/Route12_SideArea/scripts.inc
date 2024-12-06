Route12_SideArea_MapScripts::
	.byte 0


StrengthWoman::
# 4 "data/maps/Route12_SideArea/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_STRENGTH, StrengthWoman_2
# 8 "data/maps/Route12_SideArea/scripts.pory"
	lock
# 9 "data/maps/Route12_SideArea/scripts.pory"
	faceplayer
# 10 "data/maps/Route12_SideArea/scripts.pory"
	msgbox R12FoundMyHideout, MSGBOX_DEFAULT
# 11 "data/maps/Route12_SideArea/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 12 "data/maps/Route12_SideArea/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 13 "data/maps/Route12_SideArea/scripts.pory"
	waitfanfare
# 14 "data/maps/Route12_SideArea/scripts.pory"
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end

StrengthWoman_2:
# 5 "data/maps/Route12_SideArea/scripts.pory"
	msgbox Need4BadgesFirst, MSGBOX_NPC
	end


R12FoundMyHideout::
# 18 "data/maps/Route12_SideArea/scripts.pory"
	.string "I see you've managed to reach my small\n"
	.string "getaway.\p"
	.string "That must mean you're strong,\n"
	.string "but are you strong enough for this?$"

Need4BadgesFirst::
# 25 "data/maps/Route12_SideArea/scripts.pory"
	.string "That Hidden Machine contains the move\n"
	.string "Strength.\p"
	.string "Strength packs a real punch, but be\n"
	.string "careful, as it will also leave your\l"
	.string "Pokémon weak to counter-attacks.\p"
	.string "It also lets you push certain boulders\n"
	.string "out of your way, but in order to use it,\l"
	.string "you must first obtain the badge from\l"
	.string "Sandstone City Pokémon Gym.$"
