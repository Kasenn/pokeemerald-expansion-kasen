AzuretideHouse2_MapScripts::
	.byte 0


AzuretideHouse2_Pikachu::
# 4 "data/maps/AzuretideHouse2/scripts.pory"
	lock
# 5 "data/maps/AzuretideHouse2/scripts.pory"
	faceplayer
# 6 "data/maps/AzuretideHouse2/scripts.pory"
	waitse
# 7 "data/maps/AzuretideHouse2/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 8 "data/maps/AzuretideHouse2/scripts.pory"
	msgbox AzuretideHouse2_Pikachu_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/AzuretideHouse2/scripts.pory"
	waitmoncry
# 10 "data/maps/AzuretideHouse2/scripts.pory"
	release
	end


AzuretideHouse2_OldWoman::
# 15 "data/maps/AzuretideHouse2/scripts.pory"
	lock
# 16 "data/maps/AzuretideHouse2/scripts.pory"
	faceplayer
# 17 "data/maps/AzuretideHouse2/scripts.pory"
	msgbox AzuretideHouse2_OldWoman_Text_0
# 18 "data/maps/AzuretideHouse2/scripts.pory"
	waitmessage
# 19 "data/maps/AzuretideHouse2/scripts.pory"
	closemessage
# 20 "data/maps/AzuretideHouse2/scripts.pory"
	release
	end


AzuretideHouse2_Girl::
# 25 "data/maps/AzuretideHouse2/scripts.pory"
	lock
# 26 "data/maps/AzuretideHouse2/scripts.pory"
	faceplayer
# 27 "data/maps/AzuretideHouse2/scripts.pory"
	msgbox AzuretideHouse2_Girl_Text_0, MSGBOX_DEFAULT
# 28 "data/maps/AzuretideHouse2/scripts.pory"
	waitmessage
# 29 "data/maps/AzuretideHouse2/scripts.pory"
	closemessage
# 30 "data/maps/AzuretideHouse2/scripts.pory"
	release
	end


AzuretideHouse2_Pikachu_Text_0:
# 8 "data/maps/AzuretideHouse2/scripts.pory"
	.string "Pika…$"

AzuretideHouse2_OldWoman_Text_0:
# 17 "data/maps/AzuretideHouse2/scripts.pory"
	.string "It's great to see my granddaughter\nbe so passionate about training\lher Pokémon.\pI bet she'll become a great\ntrainer one day.$"

AzuretideHouse2_Girl_Text_0:
# 27 "data/maps/AzuretideHouse2/scripts.pory"
	.string "I've heard of surfing Pikachus so I\nwanted to teach mine to surf as well.\pFor some reason it doesn't seem to\nlike it…$"
