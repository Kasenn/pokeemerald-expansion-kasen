AzuretideHouse2_MapScripts::
	.byte 0


AzuretideHouse2_Pikachu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox AzuretideHouse2_Pikachu_Text_0, MSGBOX_DEFAULT
	waitmoncry
	release
	end


AzuretideHouse2_OldWoman::
	lock
	faceplayer
	msgbox AzuretideHouse2_OldWoman_Text_0
	waitmessage
	closemessage
	release
	end


AzuretideHouse2_Girl::
	lock
	faceplayer
	msgbox AzuretideHouse2_Girl_Text_0, MSGBOX_DEFAULT
	waitmessage
	closemessage
	release
	end


AzuretideHouse2_Pikachu_Text_0:
	.string "Pika…$"

AzuretideHouse2_OldWoman_Text_0:
	.string "It's great to see my granddaughter\nbe so passionate about training\lher Pokémon.\pI bet she'll become a great\ntrainer one day.$"

AzuretideHouse2_Girl_Text_0:
	.string "I've heard of surfing Pikachus so I\nwanted to teach mine to surf as well.\pFor some reason it doesn't seem to\nlike it…$"
