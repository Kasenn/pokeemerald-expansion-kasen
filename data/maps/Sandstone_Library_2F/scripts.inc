Sandstone_Library_2F_MapScripts::
	.byte 0


Book1Event::
	lock
	msgbox Book2Intro, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book1Event_2
	msgbox Book2, MSGBOX_SIGN
	end

Book1Event_2:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end


Book2Event::
	lock
	msgbox Book5Intro, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book2Event_2
	msgbox Book5Part1, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book2Event_5
	msgbox Book5Part2, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book2Event_8
	msgbox Book5Part3, MSGBOX_SIGN
	end

Book2Event_2:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end

Book2Event_5:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end

Book2Event_8:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end


Book3Event::
	lock
	msgbox Book7Intro, MSGBOX_DEFAULT
	message ProtectorsIntro2
	waitmessage
	dynmultipush Part1_Text, 0
	dynmultipush Part2_Text, 1
	dynmultipush Part3_Text, 2
	dynmultipush PartExit_Text, 3
	dynmultistack 23, 0, FALSE, 4, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Book3Event_3
	case 1, Book3Event_4
	case 2, Book3Event_5
	case 3, Book3Event_6
	case MULTI_B_PRESSED, Book3Event_7
Book3Event_1:
	end

Book3Event_3:
	msgbox Book7Story1, MSGBOX_SIGN
	goto Book3Event_1

Book3Event_4:
	msgbox Book7Story2, MSGBOX_SIGN
	goto Book3Event_1

Book3Event_5:
	msgbox Book7Story3, MSGBOX_SIGN
	goto Book3Event_1

Book3Event_6:
	msgbox PutTheBookBack, MSGBOX_SIGN
	goto Book3Event_1

Book3Event_7:
	msgbox PutTheBookBack, MSGBOX_SIGN
	goto Book3Event_1


Book4Event::
	lock
	msgbox SinkoMythIntro, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book4Event_2
	msgbox SinkoMyth, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book4Event_5
	msgbox SinkoMythPart2, MSGBOX_SIGN
	end

Book4Event_2:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end

Book4Event_5:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end


Book5Event::
	lock
	msgbox ProtectorsIntro, MSGBOX_DEFAULT
	message ProtectorsIntro2
	waitmessage
	dynmultipush PartIntro_Text, 0
	dynmultipush Part2_Text, 1
	dynmultipush Part3_Text, 2
	dynmultipush Part4_Text, 3
	dynmultipush PartExit_Text, 4
	dynmultistack 23, 0, FALSE, 5, FALSE, 0, NULL
	switch VAR_RESULT
	case 0, Book5Event_3
	case 1, Book5Event_4
	case 2, Book5Event_5
	case 3, Book5Event_6
	case 4, Book5Event_7
	case MULTI_B_PRESSED, Book5Event_8
Book5Event_1:
	end

Book5Event_3:
	msgbox Protectors, MSGBOX_SIGN
	goto Book5Event_1

Book5Event_4:
	msgbox YoungestProtector, MSGBOX_SIGN
	goto Book5Event_1

Book5Event_5:
	msgbox SecondProtector, MSGBOX_SIGN
	goto Book5Event_1

Book5Event_6:
	msgbox OldestProtector, MSGBOX_SIGN
	goto Book5Event_1

Book5Event_7:
	msgbox PutTheBookBack, MSGBOX_SIGN
	goto Book5Event_1

Book5Event_8:
	msgbox PutTheBookBack, MSGBOX_SIGN
	goto Book5Event_1


Book6Event::
	lock
	msgbox LittleGreenMenIntro, MSGBOX_YESNO
	compare VAR_RESULT, FALSE
	goto_if_eq Book6Event_2
	msgbox LittleGreenMen, MSGBOX_SIGN
	end

Book6Event_2:
	msgbox PutTheBookBack, MSGBOX_SIGN
	end


PutTheBookBack::
	.string "{PLAYER} put the book back.$"

Book2Intro::
	.string "This book is titled “Old Verse 19.”\n"
	.string "Want to read it?$"

Book2::
	.string "When first this land was formed,\n"
	.string "man and 'mon lived happily,\l"
	.string "sharing all that they could see,\l"
	.string "by kind acts born and warmed.\p"
	.string "One Pokémon then proposed\n"
	.string "that they should always ready be\l"
	.string "to help humans should they need,\l"
	.string "and let their presence be disclosed.\p"
	.string "And that is why, to this day,\n"
	.string "not all Pokémon do flee\l"
	.string "when a human they do see--\l"
	.string "they leap out where tall grasses sway.$"

Book5Intro::
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

Book5Part1::
	.string "In the beginning, there was only\n"
	.string "a churning turmoil of chaos.\p"
	.string "At the heart of chaos, where all\n"
	.string "things became one, appeared an Egg.\p"
	.string "Having tumbled from the vortex, the\n"
	.string "Egg gave rise to the Original One.\p"
	.string "…Would you like to keep reading?$"

Book5Part2::
	.string "From itself, two beings the Original\n"
	.string "One did make.\p"
	.string "Time started to spin.\n"
	.string "Space began to expand.\p"
	.string "From itself again, three living things\n"
	.string "the Original One did make.\p"
	.string "…Would you like to keep reading?$"

Book5Part3::
	.string "The two beings wished, and from them,\n"
	.string "matter came to be.\p"
	.string "The three living things wished, and\n"
	.string "from them, spirit came to be.\p"
	.string "The world created, the Original One\n"
	.string "took to unyielding sleep…$"

Part1_Text::
	.string "Part 1$"

Part2_Text::
	.string "Part 2$"

Part3_Text::
	.string "Part 3$"

Part4_Text::
	.string "Part 4$"

PartExit_Text::
	.string "Exit$"

Book7Intro::
	.string "This book is titled “Sinko Folk\n"
	.string "Stories.”$"

Book7Story1::
	.string "“Sinko Folk Story 1”\p"
	.string "Just as people have lords, so too\n"
	.string "do the Pokémon.\p"
	.string "Just as people hate other people\n"
	.string "who trespass, so too, do these lords.\p"
	.string "A trekker who doesn't bow and show\n"
	.string "their utmost respect to the lord\l"
	.string "can rest easy, knowing, that they\l"
	.string "will never repeat said mistake again.$"

Book7Story2::
	.string "“Sinko Folk Story 2”\p"
	.string "There lived a Pokémon in the water.\p"
	.string "Sometimes it resembled a human,\n"
	.string "sometimes a rock, sometimes a branch.\p"
	.string "Sometimes the Pokémon would hum\n"
	.string "a tune.\p"
	.string "The Pokémon craved for attention.\p"
	.string "If ignored, the Pokémon would\n"
	.string "turn malicious, attempting to carry\l"
	.string "people away, never to be seen again.$"

Book7Story3::
	.string "“Sinko Folk Story 3”\p"
	.string "There once were Pokémon that\n"
	.string "married people.\p"
	.string "There once were people that\n"
	.string "married Pokémon.\p"
	.string "This was a common thing,\n"
	.string "because long time ago,\l"
	.string "people and Pokémon were the same.$"

SinkoMythIntro::
	.string "This book is titled “Sinko's\n"
	.string "Myth.” Want to read it?$"

SinkoMyth::
	.string "“Sinko's Myth.”\p"
	.string "As the Nightmare grew, the Four\n"
	.string "sought to vanquish it.\p"
	.string "And vanquish they did.\p"
	.string "Yet, as soon it became apparent,\n"
	.string "this had been the Nightmare's\l"
	.string "intention since the beginning.\p"
	.string "As the Nightmare subsided, its\n"
	.string "core being still remained in the\l"
	.string "world, corrupting the strongest\l"
	.string "of the Four.\p"
	.string "…Would you like to keep reading?$"

SinkoMythPart2::
	.string "A great battle soon ensued.\p"
	.string "In a last-ditch effort, the strongest\n"
	.string "of the Four buried itself deep beneath\l"
	.string "the earth, hoping to entomb itself and\l"
	.string "the Nightmare, forever.\p"
	.string "The Three, now leaderless, returned to\n"
	.string "their roosts to recover, not realizing\l"
	.string "that they too, had forever been\l"
	.string "tainted by the Nightmare.$"

PartIntro_Text::
	.string "Intro$"

ProtectorsIntro::
	.string "This book is titled “The\n"
	.string "Three Protectors.”$"

ProtectorsIntro2::
	.string "Which part would you like to read?$"

Protectors::
	.string "Once, this world was looked after by\n"
	.string "the Three Protectors.\p"
	.string "Yet, when the Calamity struck,\n"
	.string "powerless they were to stop it.\p"
	.string "Having failed their purpose, the Three\n"
	.string "fled the world in shame.\p"
	.string "However, as they departed the world,\n"
	.string "in their place a remnant of their\l"
	.string "former glory remained.\p"
	.string "And so it was decreed that a Beacon\n"
	.string "be built to house these remnants,\l"
	.string "so that one day, they may guide\l"
	.string "the Protectors back home.$"

YoungestProtector::
	.string "The youngest of the Protectors was\n"
	.string "also the friendliest.\p"
	.string "Instead of looking after people\n"
	.string "and Pokémon from afar, it would be\l"
	.string "often seen visiting people, aiding\l"
	.string "them with their problems.\p"
	.string "After the Calamity, as the other\n"
	.string "brothers prepared to depart,\l"
	.string "The youngest of the Three remained\l"
	.string "for a while, and was last seen aiding\l"
	.string "the survivors.\p"
	.string "Yet, one day it too fled from this\n"
	.string "world, leaving behind but a remnant.$"

SecondProtector::
	.string "The second of the Protectors was much\n"
	.string "more distant, avoiding human contact\l"
	.string "unless deemed absolutely necessary.\p"
	.string "The whereabouts of the remnant it left\n"
	.string "behind are unknown, but it is said\l"
	.string "that the location of the Beacon\l"
	.string "is not too far away from its den.\p"
	.string "The second and the youngest\n"
	.string "Protector are said to have shared\l"
	.string "a special bond, and this bond is\l"
	.string "believed to still linger between\l"
	.string "the remnants left behind.$"

OldestProtector::
	.string "Not much is known about the eldest\n"
	.string "of the Protectors, as it was always\l"
	.string "the most wary.\p"
	.string "Aware of its inability to stop the\n"
	.string "Calamity, it was overcome by despair\l"
	.string "and was last seen bolting towards the\l"
	.string "north in a fit of madness.\p"
	.string "The eldest Protector was said to have\n"
	.string "an aura that could revitalize areas\l"
	.string "around it.\p"
	.string "Some people have reported seeing fresh\n"
	.string "oak tree leaves blowing in the wind in\l"
	.string "areas normally inhospitable to them,\l"
	.string "believing these leaves to originate\l"
	.string "from the grove left behind by its\l"
	.string "remnant.$"

LittleGreenMenIntro::
	.string "This book is titled “The Little\n"
	.string "Green Men.” Want to read it?$"

LittleGreenMen::
	.string "“The Little Green Men.”\p"
	.string "Since time immemorial, people of Sinko\n"
	.string "have reported seeing “little green\l"
	.string "men” in the nature.\p"
	.string "These beings only appear for a fraction\n"
	.string "of a second before they're gone, and\l"
	.string "to this day not one has been caught,\l"
	.string "whether it be in a trap or on a film.\p"
	.string "Many believe these could be an elusive\n"
	.string "and rare Pokémon, but no reports of\l"
	.string "one being caught in a Poké Ball has\l"
	.string "ever surfaced.\p"
	.string "Whether these beings truly exist\n"
	.string "has been the topic of great many\l"
	.string "conversations.$"
