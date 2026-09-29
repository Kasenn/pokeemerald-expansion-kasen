#ifdef __INTELLISENSE__
const struct SpeciesDexInfo gSpeciesDexInfoGen5[] =
{
#endif

#if P_FAMILY_VICTINI
    [SPECIES_VICTINI] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Victini"),
        .cryId = CRY_VICTINI,
        .natDexNum = NATIONAL_DEX_VICTINI,
        .categoryName = _("Victory"),
        .height = 4,
        .weight = 40,
        .description = COMPOUND_STRING(
            "This Pokémon brings victory.\n"
            "It is said that Trainers with Victini\n"
            "always win, regardless of the type\n"
            "of encounter."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_VICTINI

#if P_FAMILY_SNIVY
    [SPECIES_SNIVY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Snivy"),
        .cryId = CRY_SNIVY,
        .natDexNum = NATIONAL_DEX_SNIVY,
        .categoryName = _("Grass Snake"),
        .height = 6,
        .weight = 81,
        .description = COMPOUND_STRING(
            "It is very intelligent and calm.\n"
            "Being exposed to lots of sunlight makes\n"
            "its movements swifter. When they are\n"
            "not feeling well, their tails droop."),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SERVINE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Servine"),
        .cryId = CRY_SERVINE,
        .natDexNum = NATIONAL_DEX_SERVINE,
        .categoryName = _("Grass Snake"),
        .height = 8,
        .weight = 160,
        .description = COMPOUND_STRING(
            "When it gets dirty, its leaves can't be\n"
            "used in photosynthesis, so it always keeps\n"
            "clean. They avoid attacks by sinking into\n"
            "the shadows of thick foliage."),
        .pokemonScale = 366,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_SERPERIOR] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Serperior"),
        .cryId = CRY_SERPERIOR,
        .natDexNum = NATIONAL_DEX_SERPERIOR,
        .categoryName = _("Regal"),
        .height = 33,
        .weight = 630,
        .description = COMPOUND_STRING(
            "They raise their heads to intimidate foes,\n"
            "but only give it their all when fighting\n"
            "powerful opponents who are not fazed\n"
            "by the glare from its noble eyes."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 405,
        .trainerOffset = 8,
    },
#endif //P_FAMILY_SNIVY

#if P_FAMILY_TEPIG
    [SPECIES_TEPIG] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Tepig"),
        .cryId = CRY_TEPIG,
        .natDexNum = NATIONAL_DEX_TEPIG,
        .categoryName = _("Fire Pig"),
        .height = 5,
        .weight = 99,
        .description = COMPOUND_STRING(
            "It loves to eat roasted berries, but\n"
            "sometimes it gets too excited and burns\n"
            "them to a crisp. It blows fire through\n"
            "its nose."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PIGNITE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pignite"),
        .cryId = CRY_PIGNITE,
        .natDexNum = NATIONAL_DEX_PIGNITE,
        .categoryName = _("Fire Pig"),
        .height = 10,
        .weight = 555,
        .description = COMPOUND_STRING(
            "The more it eats, the more fuel it has\n"
            "to make the fire in its stomach stronger.\n"
            "When it is angered, the intensity of the\n"
            "flame increases."),
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_EMBOAR] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Emboar"),
        .cryId = CRY_EMBOAR,
        .natDexNum = NATIONAL_DEX_EMBOAR,
        .categoryName = _("Fire Pig"),
        .height = 16,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "It is adept at using many different moves.\n"
            "It can throw a fire punch by setting its\n"
            "fists on fire with its fiery chin.\n"
            "It cares deeply about its friends."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EMBOAR_MEGA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Emboar"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_EMBOAR_MEGA,
    #else
        .cryId = CRY_EMBOAR,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_EMBOAR,
        .categoryName = _("Fire Pig"),
        .height = 18,
        .weight = 1803,
        .description = COMPOUND_STRING(
            "Brandishing a blazing flame\n"
            "shaped like a serpentine spear,\n"
            "it rushes in to save its\n"
            "imperiled allies."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TEPIG

#if P_FAMILY_OSHAWOTT
    [SPECIES_OSHAWOTT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Oshawott"),
        .cryId = CRY_OSHAWOTT,
        .natDexNum = NATIONAL_DEX_OSHAWOTT,
        .categoryName = _("Sea Otter"),
        .height = 5,
        .weight = 59,
        .description = COMPOUND_STRING(
            "The scalchop on its stomach isn't just\n"
            "used for battle, it can be used to break\n"
            "open hard berries as well. It is made\n"
            "from the same element as its claws."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DEWOTT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Dewott"),
        .cryId = CRY_DEWOTT,
        .natDexNum = NATIONAL_DEX_DEWOTT,
        .categoryName = _("Discipline"),
        .height = 8,
        .weight = 245,
        .description = COMPOUND_STRING(
            "Strict training and disclipine leads it\n"
            "to master its flowing double-scalchop\n"
            "technique. Scalchop techniques differ\n"
            "from one Dewott to another."),
        .pokemonScale = 366,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_SAMUROTT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Samurott"),
        .cryId = CRY_SAMUROTT,
        .natDexNum = NATIONAL_DEX_SAMUROTT,
        .categoryName = _("Formidable"),
        .height = 15,
        .weight = 946,
        .description = COMPOUND_STRING(
            "One swing of the seamitars attached\n"
            "to its armor can fell an opponent.\n"
            "A simple glare from one of them is\n"
            "enough to intimidate most enemies."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_HISUIAN_FORMS
    [SPECIES_SAMUROTT_HISUI] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Samurott"),
        .cryId = CRY_SAMUROTT,
        .natDexNum = NATIONAL_DEX_SAMUROTT,
        .categoryName = _("Formidable"),
        .height = 15,
        .weight = 582,
        .description = COMPOUND_STRING(
            "Hard of heart and deft of blade,\n"
            "this rare form of Samurott is a\n"
            "product of the Pokémon's evolution in the\n"
            "region of Hisui."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_OSHAWOTT

#if P_FAMILY_PATRAT
    [SPECIES_PATRAT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Patrat"),
        .cryId = CRY_PATRAT,
        .natDexNum = NATIONAL_DEX_PATRAT,
        .categoryName = _("Scout"),
        .height = 5,
        .weight = 116,
        .description = COMPOUND_STRING(
            "Extremely cautious, they take shifts to\n"
            "maintain a constant watch of their nest.\n"
            "Using food stored in cheek pouches,\n"
            "they can keep watch for days."),
        .pokemonScale = 432,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WATCHOG] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Watchog"),
        .cryId = CRY_WATCHOG,
        .natDexNum = NATIONAL_DEX_WATCHOG,
        .categoryName = _("Lookout"),
        .height = 11,
        .weight = 270,
        .description = COMPOUND_STRING(
            "Using luminescent matter, it makes its\n"
            "eyes and body glow and stuns attacking\n"
            "opponents. Keen eyesight lets them see\n"
            "in the dark."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PATRAT

#if P_FAMILY_LILLIPUP
    [SPECIES_LILLIPUP] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lillipup"),
        .cryId = CRY_LILLIPUP,
        .natDexNum = NATIONAL_DEX_LILLIPUP,
        .categoryName = _("Puppy"),
        .height = 4,
        .weight = 41,
        .description = COMPOUND_STRING(
            "It faces strong opponents with great\n"
            "courage. Because it doesn't yelp, it's\n"
            "extremely popular with Trainers who live\n"
            "in apartment buildings."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HERDIER] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Herdier"),
        .cryId = CRY_HERDIER,
        .natDexNum = NATIONAL_DEX_HERDIER,
        .categoryName = _("Loyal Dog"),
        .height = 9,
        .weight = 147,
        .description = COMPOUND_STRING(
            "Its dense black fur grows continuously.\n"
            "The high cost of keeping its hard fur\n"
            "properly groomed makes this a\n"
            "troublesome Pokémon to train."),
        .pokemonScale = 338,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_STOUTLAND] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Stoutland"),
        .cryId = CRY_STOUTLAND,
        .natDexNum = NATIONAL_DEX_STOUTLAND,
        .categoryName = _("Big-Hearted"),
        .height = 12,
        .weight = 610,
        .description = COMPOUND_STRING(
            "Intelligent, good-natured, and valiant,\n"
            "there could be no concern that it would\n"
            "ever attack people. Some parents even\n"
            "trust it to babysit."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_LILLIPUP

#if P_FAMILY_PURRLOIN
    [SPECIES_PURRLOIN] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Purrloin"),
        .cryId = CRY_PURRLOIN,
        .natDexNum = NATIONAL_DEX_PURRLOIN,
        .categoryName = _("Devious"),
        .height = 4,
        .weight = 101,
        .description = COMPOUND_STRING(
            "Their deceptively cute act is the\n"
            "perfect ruse. They steal from people for\n"
            "fun, but their victims can't help but\n"
            "forgive them."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LIEPARD] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Liepard"),
        .cryId = CRY_LIEPARD,
        .natDexNum = NATIONAL_DEX_LIEPARD,
        .categoryName = _("Cruel"),
        .height = 11,
        .weight = 375,
        .description = COMPOUND_STRING(
            "Many Trainers are drawn to their\n"
            "beautiful form and fur. These Pokémon\n"
            "vanish and appear unexpectedly.\n"
            "They run silently in the night."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PURRLOIN

#if P_FAMILY_PANSAGE
    [SPECIES_PANSAGE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Pansage"),
        .cryId = CRY_PANSAGE,
        .natDexNum = NATIONAL_DEX_PANSAGE,
        .categoryName = _("Grass Monkey"),
        .height = 6,
        .weight = 105,
        .description = COMPOUND_STRING(
            "This Pokémon dwells deep in the forest.\n"
            "It's good at finding berries and gathers\n"
            "them from all over. It's kind enough to\n"
            "share them with friends."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SIMISAGE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Simisage"),
        .cryId = CRY_SIMISAGE,
        .natDexNum = NATIONAL_DEX_SIMISAGE,
        .categoryName = _("Thorn Monkey"),
        .height = 11,
        .weight = 305,
        .description = COMPOUND_STRING(
            "Ill tempered, it attacks enemies by\n"
            "swinging its barbed tail around wildly.\n"
            "The leaf growing on its head is\n"
            "very bitter."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PANSAGE

#if P_FAMILY_PANSEAR
    [SPECIES_PANSEAR] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pansear"),
        .cryId = CRY_PANSEAR,
        .natDexNum = NATIONAL_DEX_PANSEAR,
        .categoryName = _("High Temp"),
        .height = 6,
        .weight = 110,
        .description = COMPOUND_STRING(
            "The fire within the tuft on its head can\n"
            "reach up to 600ºF. Very intelligent,\n"
            "it roasts berries before eating them.\n"
            "It likes to help people."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SIMISEAR] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Simisear"),
        .cryId = CRY_SIMISEAR,
        .natDexNum = NATIONAL_DEX_SIMISEAR,
        .categoryName = _("Ember"),
        .height = 10,
        .weight = 280,
        .description = COMPOUND_STRING(
            "It loves sweets because they become\n"
            "energy for the fire burning inside its\n"
            "body. It scatters embers from its head\n"
            "and tail to sear its opponents."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PANSEAR

#if P_FAMILY_PANPOUR
    [SPECIES_PANPOUR] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Panpour"),
        .cryId = CRY_PANPOUR,
        .natDexNum = NATIONAL_DEX_PANPOUR,
        .categoryName = _("Spray"),
        .height = 6,
        .weight = 135,
        .description = COMPOUND_STRING(
            "The water stored inside the tuft of its\n"
            "head is rich in nutrients. It waters\n"
            "plants using its tail, plants that\n"
            "receive its water grow large."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SIMIPOUR] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Simipour"),
        .cryId = CRY_SIMIPOUR,
        .natDexNum = NATIONAL_DEX_SIMIPOUR,
        .categoryName = _("Geyser"),
        .height = 10,
        .weight = 290,
        .description = COMPOUND_STRING(
            "It can shoot highly-pressurised water\n"
            "from its tail with enough power to\n"
            "break through a solid concrete wall.\n"
            "It prefers places with clean water."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PANPOUR

#if P_FAMILY_MUNNA
    [SPECIES_MUNNA] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Munna"),
        .cryId = CRY_MUNNA,
        .natDexNum = NATIONAL_DEX_MUNNA,
        .categoryName = _("Dream Eater"),
        .height = 6,
        .weight = 233,
        .description = COMPOUND_STRING(
            "This Pokémon appears before people\n"
            "and Pokémon who are having nightmares\n"
            "and eats those dreams. Munna always\n"
            "float in the air. "),
        .pokemonScale = 422,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MUSHARNA] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Musharna"),
        .cryId = CRY_MUSHARNA,
        .natDexNum = NATIONAL_DEX_MUSHARNA,
        .categoryName = _("Drowsing"),
        .height = 11,
        .weight = 605,
        .description = COMPOUND_STRING(
            "The mist emanating from their foreheads\n"
            "is packed with the dreams of people and\n"
            "Pokémon. It changes into different colors\n"
            "depending on the dream that was eaten."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MUNNA

#if P_FAMILY_PIDOVE
    [SPECIES_PIDOVE] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Pidove"),
        .cryId = CRY_PIDOVE,
        .natDexNum = NATIONAL_DEX_PIDOVE,
        .categoryName = _("Tiny Pigeon"),
        .height = 3,
        .weight = 21,
        .description = COMPOUND_STRING(
            "This very forgetful Pokémon will wait for\n"
            "a new order from its Trainer even though\n"
            "it already has one. Flocks often gather\n"
            "in parks and plazas."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TRANQUILL] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Tranquill"),
        .cryId = CRY_TRANQUILL,
        .natDexNum = NATIONAL_DEX_TRANQUILL,
        .categoryName = _("Wild Pigeon"),
        .height = 6,
        .weight = 150,
        .description = COMPOUND_STRING(
            "No matter where in the world it goes,\n"
            "it knows where its nest is, so it can\n"
            "always return to its Trainer's location\n"
            "regardless of the distance."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_UNFEZANT] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Unfezant"),
        .cryId = CRY_UNFEZANT,
        .natDexNum = NATIONAL_DEX_UNFEZANT,
        .categoryName = _("Proud"),
        .height = 12,
        .weight = 290,
        .description = COMPOUND_STRING(
            "Males have plumage on their heads.\n"
            "The females' flying abilities surpass\n"
            "those of the males. They will only let\n"
            "themselves feel close to their Trainers."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PIDOVE

#if P_FAMILY_BLITZLE
    [SPECIES_BLITZLE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Blitzle"),
        .cryId = CRY_BLITZLE,
        .natDexNum = NATIONAL_DEX_BLITZLE,
        .categoryName = _("Electrified"),
        .height = 8,
        .weight = 298,
        .description = COMPOUND_STRING(
            "Its mane shines when it discharges\n"
            "electricity. They use the frequency and\n"
            "rhythm of these flashes to communicate\n"
            "with one another."),
        .pokemonScale = 366,
        .pokemonOffset = 8,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_ZEBSTRIKA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zebstrika"),
        .cryId = CRY_ZEBSTRIKA,
        .natDexNum = NATIONAL_DEX_ZEBSTRIKA,
        .categoryName = _("Thunderbolt"),
        .height = 16,
        .weight = 795,
        .description = COMPOUND_STRING(
            "When Zebstrika run at full speed, the\n"
            "sound of thunder reverberates. It is\n"
            "dangerous when it's angry as it shoots\n"
            "lightning from its mane in all directions."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_BLITZLE

#if P_FAMILY_ROGGENROLA
    [SPECIES_ROGGENROLA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Roggenrola"),
        .cryId = CRY_ROGGENROLA,
        .natDexNum = NATIONAL_DEX_ROGGENROLA,
        .categoryName = _("Mantle"),
        .height = 4,
        .weight = 180,
        .description = COMPOUND_STRING(
            "The hexagonal cavity is its ear.\n"
            "It walks in the direction of sounds it\n"
            "hears, but if the sounds cease, it panics\n"
            "and topples over."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BOLDORE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Boldore"),
        .cryId = CRY_BOLDORE,
        .natDexNum = NATIONAL_DEX_BOLDORE,
        .categoryName = _("Ore"),
        .height = 9,
        .weight = 1020,
        .description = COMPOUND_STRING(
            "Its orange crystal is a mass of energy.\n"
            "Just one crystal fragment would provide\n"
            "enough fuel for a hundred dump trucks.\n"
            "When it is healthy, its core sticks out."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GIGALITH] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Gigalith"),
        .cryId = CRY_GIGALITH,
        .natDexNum = NATIONAL_DEX_GIGALITH,
        .categoryName = _("Compressed"),
        .height = 17,
        .weight = 2600,
        .description = COMPOUND_STRING(
            "The blasts of energy it makes from\n"
            "sunbeams have terrifying power.\n"
            "However, it's not able to fire its blasts\n"
            "at night or on rainy days."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_ROGGENROLA

#if P_FAMILY_WOOBAT
    [SPECIES_WOOBAT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Woobat"),
        .cryId = CRY_WOOBAT,
        .natDexNum = NATIONAL_DEX_WOOBAT,
        .categoryName = _("Bat"),
        .height = 4,
        .weight = 21,
        .description = COMPOUND_STRING(
            "Its habitat is dark forests and caves.\n"
            "Suction from its nostrils enables it\n"
            "to stick to cave walls during sleep.\n"
            "It leaves a heart-shaped mark behind."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SWOOBAT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Swoobat"),
        .cryId = CRY_SWOOBAT,
        .natDexNum = NATIONAL_DEX_SWOOBAT,
        .categoryName = _("Courting"),
        .height = 9,
        .weight = 105,
        .description = COMPOUND_STRING(
            "Anyone who comes into contact with\n"
            "the ultrasonic waves emitted by a\n"
            "courting male experiences a positive\n"
            "mood shift."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_WOOBAT

#if P_FAMILY_DRILBUR
    [SPECIES_DRILBUR] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Drilbur"),
        .cryId = CRY_DRILBUR,
        .natDexNum = NATIONAL_DEX_DRILBUR,
        .categoryName = _("Mole"),
        .height = 3,
        .weight = 85,
        .description = COMPOUND_STRING(
            "It can dig through the ground at a\n"
            "speed of 30 mph by spinning its body.\n"
            "It could give a car running aboveground\n"
            "a good race."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_EXCADRILL] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Excadrill"),
        .cryId = CRY_EXCADRILL,
        .natDexNum = NATIONAL_DEX_EXCADRILL,
        .categoryName = _("Subterrene"),
        .height = 7,
        .weight = 404,
        .description = COMPOUND_STRING(
            "More than 300 feet below the surface,\n"
            "they build mazelike nests. Their activity\n"
            "can be destructive to subway tunnels,\n"
            "but it can also help with construction."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EXCADRILL_MEGA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Excadrill"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_EXCADRILL_MEGA,
    #else
        .cryId = CRY_EXCADRILL,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_EXCADRILL,
        .categoryName = _("Subterrene"),
        .height = 9,
        .weight = 600,
        .description = COMPOUND_STRING(
            "If this Pokémon brings its arms and\n"
            "head together to form a streamlined\n"
            "shape and spins at high speeds,\n"
            "it can destroy anything."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_DRILBUR

#if P_FAMILY_AUDINO
    [SPECIES_AUDINO] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Audino"),
        .cryId = CRY_AUDINO,
        .natDexNum = NATIONAL_DEX_AUDINO,
        .categoryName = _("Hearing"),
        .height = 11,
        .weight = 310,
        .description = COMPOUND_STRING(
            "Its auditory sense is astounding.\n"
            "Using the feelers on its ears, it can tell\n"
            "how someone is feeling or when an egg\n"
            "might hatch."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_MEGA_EVOLUTIONS
    [SPECIES_AUDINO_MEGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Audino"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_AUDINO_MEGA,
    #else
        .cryId = CRY_AUDINO,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_AUDINO,
        .categoryName = _("Hearing"),
        .height = 15,
        .weight = 320,
        .description = COMPOUND_STRING(
            "Mega Audino emits a soothing pulse from\n"
            "its body that reduces hostility in others.\n"
            "Anything that comes into contact with its\n"
            "second feelers will fall into a deep sleep."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_MEGA_EVOLUTIONS
#endif //P_FAMILY_AUDINO

#if P_FAMILY_TIMBURR
    [SPECIES_TIMBURR] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Timburr"),
        .cryId = CRY_TIMBURR,
        .natDexNum = NATIONAL_DEX_TIMBURR,
        .categoryName = _("Muscular"),
        .height = 6,
        .weight = 125,
        .description = COMPOUND_STRING(
            "These Pokémon appear at building\n"
            "sites and help out with construction.\n"
            "They always carry squared logs.\n"
            "As they grow, they carry bigger logs."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GURDURR] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Gurdurr"),
        .cryId = CRY_GURDURR,
        .natDexNum = NATIONAL_DEX_GURDURR,
        .categoryName = _("Muscular"),
        .height = 12,
        .weight = 400,
        .description = COMPOUND_STRING(
            "They strengthen their bodies by carrying\n"
            "steel beams. This Pokémon is so muscular\n"
            "and strongly built that even a group of\n"
            "wrestlers could not make it budge an inch."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CONKELDURR] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Conkeldurr"),
        .cryId = CRY_CONKELDURR,
        .natDexNum = NATIONAL_DEX_CONKELDURR,
        .categoryName = _("Muscular"),
        .height = 14,
        .weight = 870,
        .description = COMPOUND_STRING(
            "They use concrete pillars as walking\n"
            "canes. Rather than rely solely on force,\n"
            "they master moves that utilize the\n"
            "centrifugal force of spinning concrete."),
        .pokemonScale = 265,
        .pokemonOffset = 3,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TIMBURR

#if P_FAMILY_TYMPOLE
    [SPECIES_TYMPOLE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tympole"),
        .cryId = CRY_TYMPOLE,
        .natDexNum = NATIONAL_DEX_TYMPOLE,
        .categoryName = _("Tadpole"),
        .height = 5,
        .weight = 45,
        .description = COMPOUND_STRING(
            "By vibrating its cheeks, it emits sound\n"
            "waves imperceptible to humans. It uses\n"
            "the rhythm of these sounds to talk and\n"
            "warns others of danger."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_PALPITOAD] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Palpitoad"),
        .cryId = CRY_PALPITOAD,
        .natDexNum = NATIONAL_DEX_PALPITOAD,
        .categoryName = _("Vibration"),
        .height = 8,
        .weight = 170,
        .description = COMPOUND_STRING(
            "It lives in the water and on land.\n"
            "When they vibrate the bumps on their\n"
            "heads, they can make waves in water\n"
            "or earthquake-like vibrations on land."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_SEISMITOAD] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Seismitoad"),
        .cryId = CRY_SEISMITOAD,
        .natDexNum = NATIONAL_DEX_SEISMITOAD,
        .categoryName = _("Vibration"),
        .height = 15,
        .weight = 620,
        .description = COMPOUND_STRING(
            "It increases the power of its punches\n"
            "by vibrating the bumps on its fists.\n"
            "They can also shoot paralyzing liquid\n"
            "from their head bumps."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TYMPOLE

#if P_FAMILY_THROH
    [SPECIES_THROH] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Throh"),
        .cryId = CRY_THROH,
        .natDexNum = NATIONAL_DEX_THROH,
        .categoryName = _("Judo"),
        .height = 13,
        .weight = 555,
        .description = COMPOUND_STRING(
            "When it tightens its belt, it becomes\n"
            "stronger. Wild Throh use vines to weave\n"
            "their own belts. It changes belts as it\n"
            "gets more powerful."),
        .pokemonScale = 272,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_THROH

#if P_FAMILY_SAWK
    [SPECIES_SAWK] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sawk"),
        .cryId = CRY_SAWK,
        .natDexNum = NATIONAL_DEX_SAWK,
        .categoryName = _("Karate"),
        .height = 14,
        .weight = 510,
        .description = COMPOUND_STRING(
            "The sound of Sawk punching boulders\n"
            "and trees can be heard all the way from\n"
            "the mountains where they train.\n"
            "Disturbing their training angers them."),
        .pokemonScale = 265,
        .pokemonOffset = 4,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SAWK

#if P_FAMILY_SEWADDLE
    [SPECIES_SEWADDLE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Sewaddle"),
        .cryId = CRY_SEWADDLE,
        .natDexNum = NATIONAL_DEX_SEWADDLE,
        .categoryName = _("Sewing"),
        .height = 3,
        .weight = 25,
        .description = COMPOUND_STRING(
            "It chews up leaves and sews them with\n"
            "sticky thread extruded from its mouth.\n"
            "Since this Pokémon makes its own clothes,\n"
            "it is a mascot for fashion designers."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SWADLOON] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Swadloon"),
        .cryId = CRY_SWADLOON,
        .natDexNum = NATIONAL_DEX_SWADLOON,
        .categoryName = _("Leaf-Wrapped"),
        .height = 5,
        .weight = 73,
        .description = COMPOUND_STRING(
            "Forests where Swadloon live have\n"
            "superb foliage because the nutrients\n"
            "they make from fallen leaves nourish\n"
            "the plant life."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LEAVANNY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Leavanny"),
        .cryId = CRY_LEAVANNY,
        .natDexNum = NATIONAL_DEX_LEAVANNY,
        .categoryName = _("Nurturing"),
        .height = 12,
        .weight = 205,
        .description = COMPOUND_STRING(
            "It keeps its eggs warm with heat from\n"
            "fermenting leaves. It also uses leaves to\n"
            "weave warm wrappings for Sewaddle by\n"
            "using the silk secreted from its mouth."),
        .pokemonScale = 282,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SEWADDLE

#if P_FAMILY_VENIPEDE
    [SPECIES_VENIPEDE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Venipede"),
        .cryId = CRY_VENIPEDE,
        .natDexNum = NATIONAL_DEX_VENIPEDE,
        .categoryName = _("Centipede"),
        .height = 4,
        .weight = 53,
        .description = COMPOUND_STRING(
            "Using the feelers on its head and tail,\n"
            "it picks up vibrations in the air to\n"
            "determine its prey's location and state.\n"
            "It is brutally aggressive."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WHIRLIPEDE] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Whirlipede"),
        .cryId = CRY_WHIRLIPEDE,
        .natDexNum = NATIONAL_DEX_WHIRLIPEDE,
        .categoryName = _("Curlipede"),
        .height = 12,
        .weight = 585,
        .description = COMPOUND_STRING(
            "Storing energy for evolution, it sits.\n"
            "But when attacked, it spins its body at\n"
            "high speed like a wheel and then\n"
            "crashes furiously into its opponent."),
        .pokemonScale = 282,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SCOLIPEDE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Scolipede"),
        .cryId = CRY_SCOLIPEDE,
        .natDexNum = NATIONAL_DEX_SCOLIPEDE,
        .categoryName = _("Megapede"),
        .height = 25,
        .weight = 2005,
        .description = COMPOUND_STRING(
            "With quick movements, it chases down\n"
            "its foes, attacking relentlessly with its\n"
            "horns until it prevails. Then it finishes\n"
            "them off with deadly poison."),
        .pokemonScale = 257,
        .pokemonOffset = 2,
        .trainerScale = 423,
        .trainerOffset = 8,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCOLIPEDE_MEGA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Scolipede"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SCOLIPEDE_MEGA,
    #else
        .cryId = CRY_SCOLIPEDE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SCOLIPEDE,
        .categoryName = _("Megapede"),
        .height = 32,
        .weight = 2305,
        .description = COMPOUND_STRING(
            "Its deadly venom gives off a faint\n"
            "glow. The venom affects Scolipede's\n"
            "mind, honing its viciousness."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_VENIPEDE

    [SPECIES_EXPBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-00"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

    [SPECIES_HPBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-01"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

    [SPECIES_ATKBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-02"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

    [SPECIES_DEFBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-03"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

    [SPECIES_SPATKBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-04"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

    [SPECIES_SPDEFBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-05"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

    [SPECIES_SPEEDBOT] =
    {
        .description = COMPOUND_STRING(
            "No desc"),
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("F-06"),
        .cryId = CRY_ESCAVALIER,
        .height = 25,
        .weight = 20,
    },

#if P_FAMILY_COTTONEE
    [SPECIES_COTTONEE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Cottonee"),
        .cryId = CRY_COTTONEE,
        .natDexNum = NATIONAL_DEX_COTTONEE,
        .categoryName = _("Cotton Puff"),
        .height = 3,
        .weight = 6,
        .description = COMPOUND_STRING(
            "When it finds others of its kind, they all\n"
            "stick together. When enough of them\n"
            "have collected, the mass resembles a\n"
            "cumulonimbus cloud."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_WHIMSICOTT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Whimsicott"),
        .cryId = CRY_WHIMSICOTT,
        .natDexNum = NATIONAL_DEX_WHIMSICOTT,
        .categoryName = _("Windveiled"),
        .height = 7,
        .weight = 66,
        .description = COMPOUND_STRING(
            "It rides on the wind and slips into\n"
            "people's homes. After it has turned a\n"
            "room into a cotton-filled mess, it giggles\n"
            "to itself and takes off."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_COTTONEE

#if P_FAMILY_PETILIL
    [SPECIES_PETILIL] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Petilil"),
        .cryId = CRY_PETILIL,
        .natDexNum = NATIONAL_DEX_PETILIL,
        .categoryName = _("Bulb"),
        .height = 5,
        .weight = 66,
        .description = COMPOUND_STRING(
            "By pruning the leaves on its head with\n"
            "regularity, this Pokémon can be grown\n"
            "into a fine plump shape. These bitter\n"
            "leaves refresh those who eat them."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LILLIGANT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lilligant"),
        .cryId = CRY_LILLIGANT,
        .natDexNum = NATIONAL_DEX_LILLIGANT,
        .categoryName = _("Flowering"),
        .height = 11,
        .weight = 163,
        .description = COMPOUND_STRING(
            "Even veteran Trainers face a challenge\n"
            "in getting its beautiful flower to bloom.\n"
            "It withers away if a trainer does not\n"
            "take good care of it."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_HISUIAN_FORMS
    [SPECIES_LILLIGANT_HISUI] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Lilligant"),
        .cryId = CRY_LILLIGANT,
        .natDexNum = NATIONAL_DEX_LILLIGANT,
        .categoryName = _("Spinning"),
        .height = 12,
        .weight = 192,
        .description = COMPOUND_STRING(
            "Its well-developed legs are the result of\n"
            "a life spent on mountains covered in deep\n"
            "snow. The scent it exudes from its flower\n"
            "crown heartens those in proximity."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_PETILIL

#if P_FAMILY_BASCULIN
    [SPECIES_BASCULIN_RED_STRIPED] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculin"),
        .cryId = CRY_BASCULIN,
        .natDexNum = NATIONAL_DEX_BASCULIN,
        .categoryName = _("Hostile"),
        .height = 10,
        .weight = 180,
        .description = COMPOUND_STRING(
            "It used to be a common food source. The\n"
            "meat of red Basculin is on the fatty side\n"
            "and it's more popular with the youth.\n"
            "Its temperament is vicious and aggressive."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculin"),
        .cryId = CRY_BASCULIN,
        .natDexNum = NATIONAL_DEX_BASCULIN,
        .categoryName = _("Hostile"),
        .height = 10,
        .weight = 180,
        .description = COMPOUND_STRING(
            "They form schools with others of the same\n"
            "color. The greatest foe of a school of blue\n"
            "Basculin is a school of red Basculin.\n"
            "Its flavor is light and inoffensive."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

#if P_HISUIAN_FORMS
    [SPECIES_BASCULIN_WHITE_STRIPED] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculin"),
        .cryId = CRY_BASCULIN,
        .natDexNum = NATIONAL_DEX_BASCULIN,
        .categoryName = _("Mellow"),
        .height = 10,
        .weight = 180,
        .description = COMPOUND_STRING(
            "While this ancient form of Basculin shares\n"
            "a vast array of qualities with other forms,\n"
            "it differs in several respects, including\n"
            "demeanor, being much gentler than others."),
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_BASCULEGION_M] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculegion"),
        .cryId = CRY_BASCULEGION,
        .natDexNum = NATIONAL_DEX_BASCULEGION,
        .categoryName = _("Big Fish"),
        .height = 30,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Clads itself in the souls of comrades that\n"
            "perished before fulfilling their goals of\n"
            "journeying upstream. No other species in\n"
            "all Hisui's rivers is Basculegion's equal."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BASCULEGION_F] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Basculegion"),
        .cryId = CRY_BASCULEGION,
        .natDexNum = NATIONAL_DEX_BASCULEGION,
        .categoryName = _("Big Fish"),
        .height = 30,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "The souls of its comrades cloak its\n"
            "body and propel it effortlessly\n"
            "through even raging rapids."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN

#if P_FAMILY_SANDILE
    [SPECIES_SANDILE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sandile"),
        .cryId = CRY_SANDILE,
        .natDexNum = NATIONAL_DEX_SANDILE,
        .categoryName = _("Desert Croc"),
        .height = 7,
        .weight = 152,
        .description = COMPOUND_STRING(
            "It conceals itself in the sand and\n"
            "chomps down on the legs of any prey\n"
            "that unwarily walk over it. Its favorite\n"
            "food is Trapinch."),
        .pokemonScale = 365,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_KROKOROK] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Krokorok"),
        .cryId = CRY_KROKOROK,
        .natDexNum = NATIONAL_DEX_KROKOROK,
        .categoryName = _("Desert Croc"),
        .height = 10,
        .weight = 334,
        .description = COMPOUND_STRING(
            "They move in groups of a few individuals.\n"
            "Thanks to the special membrane covering\n"
            "its eyes, it can see its surroundings\n"
            "clearly, even in the dead of night."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_KROOKODILE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Krookodile"),
        .cryId = CRY_KROOKODILE,
        .natDexNum = NATIONAL_DEX_KROOKODILE,
        .categoryName = _("Intimidate"),
        .height = 15,
        .weight = 963,
        .description = COMPOUND_STRING(
            "Very violent Pokémon, they never allow\n"
            "their prey to escape. Their jaws are so\n"
            "powerful, they can crush the body of\n"
            "an automobile."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SANDILE

#if P_FAMILY_DARUMAKA
    [SPECIES_DARUMAKA] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Darumaka"),
        .cryId = CRY_DARUMAKA,
        .natDexNum = NATIONAL_DEX_DARUMAKA,
        .categoryName = _("Zen Charm"),
        .height = 6,
        .weight = 375,
        .description = COMPOUND_STRING(
            "When its internal fire is burning, it\n"
            "cannot calm down and it runs around.\n"
            "When the fire diminishes, it pulls its\n"
            "limbs into its body and falls asleep."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DARMANITAN_STANDARD] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Blazing"),
        .height = 13,
        .weight = 929,
        .description = COMPOUND_STRING(
            "When one is injured in a fierce battle,\n"
            "it transforms into a stone statue.\n"
            "Then it meditates and sharpens its\n"
            "mind and fights on mentally."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DARMANITAN_ZEN] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Blazing"),
        .height = 13,
        .weight = 929,
        .description = COMPOUND_STRING(
            "When wounded, it stops moving. It\n"
            "goes as still as stone to meditate,\n"
            "sharpening its mind and spirit."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GALARIAN_FORMS
    [SPECIES_DARUMAKA_GALAR] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darumaka"),
        .cryId = CRY_DARUMAKA,
        .natDexNum = NATIONAL_DEX_DARUMAKA,
        .categoryName = _("Zen Charm"),
        .height = 7,
        .weight = 400,
        .description = COMPOUND_STRING(
            "The colder they get, the more\n"
            "energetic they are. They freeze their\n"
            "breath to make snowballs, using them\n"
            "as ammo for playful snowball fights."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DARMANITAN_GALAR_STANDARD] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Zen Charm"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "On days when blizzards blow\n"
            "through, it comes down to where people\n"
            "live. It stashes food in the snowball on\n"
            "its head, taking it home for later."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DARMANITAN_GALAR_ZEN] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Darmanitan"),
        .cryId = CRY_DARMANITAN,
        .natDexNum = NATIONAL_DEX_DARMANITAN,
        .categoryName = _("Blazing"),
        .height = 17,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Darmanitan takes this form when\n"
            "enraged. It won't stop spewing flames\n"
            "until its rage has settled, even if\n"
            "its body starts to melt."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_DARUMAKA

#if P_FAMILY_MARACTUS
    [SPECIES_MARACTUS] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Maractus"),
        .cryId = CRY_MARACTUS,
        .natDexNum = NATIONAL_DEX_MARACTUS,
        .categoryName = _("Cactus"),
        .height = 10,
        .weight = 280,
        .description = COMPOUND_STRING(
            "Arid regions are their habitat.\n"
            "When it moves rhythmically, it makes a\n"
            "sound similar to maracas, making the\n"
            "surprised Pokémon flee."),
        .pokemonScale = 305,
        .pokemonOffset = 6,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MARACTUS

#if P_FAMILY_DWEBBLE
    [SPECIES_DWEBBLE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Dwebble"),
        .cryId = CRY_DWEBBLE,
        .natDexNum = NATIONAL_DEX_DWEBBLE,
        .categoryName = _("Rock Inn"),
        .height = 3,
        .weight = 145,
        .description = COMPOUND_STRING(
            "It makes a hole in a stone of a suitable\n"
            "size. If that rock breaks, the Pokémon\n"
            "remains agitated until it locates\n"
            "a replacement."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CRUSTLE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Crustle"),
        .cryId = CRY_CRUSTLE,
        .natDexNum = NATIONAL_DEX_CRUSTLE,
        .categoryName = _("Stone Home"),
        .height = 14,
        .weight = 2000,
        .description = COMPOUND_STRING(
            "Competing for territory, Crustle fight\n"
            "viciously. The one whose boulder is\n"
            "broken is the loser of the battle and\n"
            "begins to weaken."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_DWEBBLE

#if P_FAMILY_SCRAGGY
    [SPECIES_SCRAGGY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Scraggy"),
        .cryId = CRY_SCRAGGY,
        .natDexNum = NATIONAL_DEX_SCRAGGY,
        .categoryName = _("Shedding"),
        .height = 6,
        .weight = 118,
        .description = COMPOUND_STRING(
            "Its skin has a rubbery elasticity, so it\n"
            "can reduce damage by defensively\n"
            "pulling its skin up to its neck.\n"
            "Its skull is massively thick."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SCRAFTY] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Scrafty"),
        .cryId = CRY_SCRAFTY,
        .natDexNum = NATIONAL_DEX_SCRAFTY,
        .categoryName = _("Hoodlum"),
        .height = 11,
        .weight = 300,
        .description = COMPOUND_STRING(
            "Groups of them beat up anything that\n"
            "enters their territory. The one with the\n"
            "biggest crest is the group leader, and\n"
            "is the most respected."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_SCRAFTY_MEGA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Scrafty"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_SCRAFTY_MEGA,
    #else
        .cryId = CRY_SCRAFTY,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_SCRAFTY,
        .categoryName = _("Hoodlum"),
        .height = 11,
        .weight = 310,
        .description = COMPOUND_STRING(
            "Mega Evolution has caused Scrafty's\n"
            "shed skin to turn white, growing\n"
            "tough and supple. Of course, this\n"
            "Pokémon is still as feisty as ever."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_SCRAGGY

#if P_FAMILY_SIGILYPH
    [SPECIES_SIGILYPH] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Sigilyph"),
        .cryId = CRY_SIGILYPH,
        .natDexNum = NATIONAL_DEX_SIGILYPH,
        .categoryName = _("Avianoid"),
        .height = 14,
        .weight = 140,
        .description = COMPOUND_STRING(
            "The guardians of an ancient city, they\n"
            "always fly the same route while keeping\n"
            "watch for invaders. They use their\n"
            "psychic power to attack enemies."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SIGILYPH

#if P_FAMILY_YAMASK
    [SPECIES_YAMASK] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Yamask"),
        .cryId = CRY_YAMASK,
        .natDexNum = NATIONAL_DEX_YAMASK,
        .categoryName = _("Spirit"),
        .height = 5,
        .weight = 15,
        .description = COMPOUND_STRING(
            "These Pokémon arose from the spirits\n"
            "of people interred in graves in past ages.\n"
            "Each of them carries a mask that used\n"
            "to be its face when it was human."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_COFAGRIGUS] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cofagrigus"),
        .cryId = CRY_COFAGRIGUS,
        .natDexNum = NATIONAL_DEX_COFAGRIGUS,
        .categoryName = _("Coffin"),
        .height = 17,
        .weight = 765,
        .description = COMPOUND_STRING(
            "Grave robbers who mistake them for\n"
            "real coffins and get too close end up\n"
            "trapped inside their bodies. Their bodies\n"
            "are covered in pure gold."),
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 290,
        .trainerOffset = 1,
    },

#if P_GALARIAN_FORMS
    [SPECIES_YAMASK_GALAR] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Yamask"),
        .cryId = CRY_YAMASK,
        .natDexNum = NATIONAL_DEX_YAMASK,
        .categoryName = _("Spirit"),
        .height = 5,
        .weight = 15,
        .description = COMPOUND_STRING(
            "A clay slab with cursed engravings\n"
            "took possession of a Yamask. The\n"
            "slab is said to be absorbing the\n"
            "Yamask's dark power."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_RUNERIGUS] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Runerigus"),
        .cryId = CRY_RUNERIGUS,
        .natDexNum = NATIONAL_DEX_RUNERIGUS,
        .categoryName = _("Grudge"),
        .height = 16,
        .weight = 666,
        .description = COMPOUND_STRING(
            "A powerful curse was woven into an ancient\n"
            "painting. After absorbing the spirit of\n"
            "a Yamask, the painting began to move."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK

#if P_FAMILY_TIRTOUGA
    [SPECIES_TIRTOUGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Tirtouga"),
        .cryId = CRY_TIRTOUGA,
        .natDexNum = NATIONAL_DEX_TIRTOUGA,
        .categoryName = _("Prototurtle"),
        .height = 7,
        .weight = 165,
        .description = COMPOUND_STRING(
            "Reputed to be the ancestor of most\n"
            "turtle Pokémon, it lived in warm seas\n"
            "about a hundred million years ago.\n"
            "It was restored from a fossil."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CARRACOSTA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Carracosta"),
        .cryId = CRY_CARRACOSTA,
        .natDexNum = NATIONAL_DEX_CARRACOSTA,
        .categoryName = _("Prototurtle"),
        .height = 12,
        .weight = 810,
        .description = COMPOUND_STRING(
            "They can live both in the ocean and\n"
            "on land. Incredible jaw strength enables\n"
            "them to chew up steel beams and rocks\n"
            "along with their prey."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TIRTOUGA

#if P_FAMILY_ARCHEN
    [SPECIES_ARCHEN] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Archen"),
        .cryId = CRY_ARCHEN,
        .natDexNum = NATIONAL_DEX_ARCHEN,
        .categoryName = _("First Bird"),
        .height = 5,
        .weight = 95,
        .description = COMPOUND_STRING(
            "Said to be the ancestor of all bird\n"
            "Pokémon, Archen itself could not actually\n"
            "fly but moved by hopping from treetop\n"
            "to treetop."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ARCHEOPS] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Archeops"),
        .cryId = CRY_ARCHEOPS,
        .natDexNum = NATIONAL_DEX_ARCHEOPS,
        .categoryName = _("First Bird"),
        .height = 14,
        .weight = 320,
        .description = COMPOUND_STRING(
            "They are intelligent and will cooperate\n"
            "to catch prey. When one Archeops\n"
            "had the prey cornered, another would\n"
            "swoop on it."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ARCHEN

#if P_FAMILY_TRUBBISH
    [SPECIES_TRUBBISH] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Trubbish"),
        .cryId = CRY_TRUBBISH,
        .natDexNum = NATIONAL_DEX_TRUBBISH,
        .categoryName = _("Trash Bag"),
        .height = 6,
        .weight = 310,
        .description = COMPOUND_STRING(
            "It gorges on trash until its stomach\n"
            "is full. Then it belches toxic gas.\n"
            "An unlucky whiff of this gas will put\n"
            "a person in the hospital."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GARBODOR] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Garbodor"),
        .cryId = CRY_GARBODOR,
        .natDexNum = NATIONAL_DEX_GARBODOR,
        .categoryName = _("Trash Heap"),
        .height = 19,
        .weight = 1073,
        .description = COMPOUND_STRING(
            "Beware the poisonous liquid it shoots\n"
            "from its right arm. If even a little of it\n"
            "gets on you, you'll experience the full\n"
            "effects of this unidentified toxin."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GARBODOR_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Garbodor"),
        .cryId = CRY_GARBODOR,
        .natDexNum = NATIONAL_DEX_GARBODOR,
        .categoryName = _("Trash Heap"),
        .height = 210,
        .weight = 0,
        .description = COMPOUND_STRING(
            "It sprays toxic gas from its mouth\n"
            "and fingers. If the gas engulfs you,\n"
            "the toxins will seep in all the way\n"
            "down to your bones."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TRUBBISH

#if P_FAMILY_ZORUA
    [SPECIES_ZORUA] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zorua"),
        .cryId = CRY_ZORUA,
        .natDexNum = NATIONAL_DEX_ZORUA,
        .categoryName = _("Tricky Fox"),
        .height = 7,
        .weight = 125,
        .description = COMPOUND_STRING(
            "To protect themselves from danger, they\n"
            "hide their true identities by transforming\n"
            "into people and Pokémon. Apparently, it\n"
            "often transforms into a silent child."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ZOROARK] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zoroark"),
        .cryId = CRY_ZOROARK,
        .natDexNum = NATIONAL_DEX_ZOROARK,
        .categoryName = _("Illusion Fox"),
        .height = 16,
        .weight = 811,
        .description = COMPOUND_STRING(
            "Bonds between these Pokémon are very\n"
            "strong. It protects the safety of its\n"
            "pack by tricking its opponents. They\n"
            "defend their lair with illusory scenery."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

#if P_HISUIAN_FORMS
    [SPECIES_ZORUA_HISUI] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zorua"),
        .cryId = CRY_ZORUA,
        .natDexNum = NATIONAL_DEX_ZORUA,
        .categoryName = _("Spiteful Fox"),
        .height = 7,
        .weight = 125,
        .description = COMPOUND_STRING(
            "Derives power from resentment,\n"
            "which rises as energy atop its head and\n"
            "takes on the forms of foes. In this\n"
            "way, Zorua vents lingering malice."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ZOROARK_HISUI] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Zoroark"),
        .cryId = CRY_ZOROARK,
        .natDexNum = NATIONAL_DEX_ZOROARK,
        .categoryName = _("Baneful Fox"),
        .height = 16,
        .weight = 730,
        .description = COMPOUND_STRING(
            "Heedless of its own safety,\n"
            "Zoroark attacks its nemeses with a bitter\n"
            "energy so intense, it lacerates\n"
            "Zoroark's own body."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_ZORUA

#if P_FAMILY_MINCCINO
    [SPECIES_MINCCINO] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Minccino"),
        .cryId = CRY_MINCCINO,
        .natDexNum = NATIONAL_DEX_MINCCINO,
        .categoryName = _("Chinchilla"),
        .height = 4,
        .weight = 58,
        .description = COMPOUND_STRING(
            "These Pokémon prefer a tidy habitat.\n"
            "They greet one another by rubbing each\n"
            "other with their tails, which are always\n"
            "kept well groomed and clean."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CINCCINO] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Cinccino"),
        .cryId = CRY_CINCCINO,
        .natDexNum = NATIONAL_DEX_CINCCINO,
        .categoryName = _("Scarf"),
        .height = 5,
        .weight = 75,
        .description = COMPOUND_STRING(
            "Their white fur feels amazing to touch.\n"
            "Cinccino's body is coated in a special\n"
            "oil that repels dust and helps it deflect\n"
            "attacks, such as punches."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MINCCINO

#if P_FAMILY_GOTHITA
    [SPECIES_GOTHITA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gothita"),
        .cryId = CRY_GOTHITA,
        .natDexNum = NATIONAL_DEX_GOTHITA,
        .categoryName = _("Fixation"),
        .height = 4,
        .weight = 58,
        .description = COMPOUND_STRING(
            "They intently observe both Trainers and\n"
            "Pokémon. Apparently, Gothita are looking\n"
            "at something that only they can see. Their\n"
            "ribbonlike feelers increase their power."),
        .pokemonScale = 491,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOTHORITA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gothorita"),
        .cryId = CRY_GOTHORITA,
        .natDexNum = NATIONAL_DEX_GOTHORITA,
        .categoryName = _("Manipulate"),
        .height = 7,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Starlight is the source of their power.\n"
            "They use hypnosis to control people and\n"
            "Pokémon. Tales of Gothorita leading them\n"
            "astray are told in every corner."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GOTHITELLE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Gothitelle"),
        .cryId = CRY_GOTHITELLE,
        .natDexNum = NATIONAL_DEX_GOTHITELLE,
        .categoryName = _("Astral Body"),
        .height = 15,
        .weight = 440,
        .description = COMPOUND_STRING(
            "Starry skies thousands of light-years\n"
            "away are visible in the space distorted by\n"
            "their intense psychic power. When it learns\n"
            "its Trainer's life span, it cries in sadness."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_GOTHITA

#if P_FAMILY_SOLOSIS
    [SPECIES_SOLOSIS] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Solosis"),
        .cryId = CRY_SOLOSIS,
        .natDexNum = NATIONAL_DEX_SOLOSIS,
        .categoryName = _("Cell"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(
            "Because their bodies are enveloped\n"
            "in a special liquid, they are fine in any\n"
            "environment, no matter how severe. They\n"
            "can use telepathy to talk with others."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DUOSION] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Duosion"),
        .cryId = CRY_DUOSION,
        .natDexNum = NATIONAL_DEX_DUOSION,
        .categoryName = _("Mitosis"),
        .height = 6,
        .weight = 80,
        .description = COMPOUND_STRING(
            "When their brains, now divided in two,\n"
            "are thinking the same thoughts,\n"
            "these Pokémon exhibit their maximized\n"
            "psychic power."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_REUNICLUS] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Reuniclus"),
        .cryId = CRY_REUNICLUS,
        .natDexNum = NATIONAL_DEX_REUNICLUS,
        .categoryName = _("Multiplying"),
        .height = 10,
        .weight = 201,
        .description = COMPOUND_STRING(
            "They use psychic power to control their\n"
            "arms, which are made of a special liquid.\n"
            "When Reuniclus shake hands, a network\n"
            "forms between their brains."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SOLOSIS

#if P_FAMILY_DUCKLETT
    [SPECIES_DUCKLETT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Ducklett"),
        .cryId = CRY_DUCKLETT,
        .natDexNum = NATIONAL_DEX_DUCKLETT,
        .categoryName = _("Water Bird"),
        .height = 5,
        .weight = 55,
        .description = COMPOUND_STRING(
            "These bird Pokémon are excellent divers.\n"
            "They are better at swimming than flying,\n"
            "and they happily eat their favorite food,\n"
            "peat moss, as they dive underwater."),
        .pokemonScale = 432,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SWANNA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Swanna"),
        .cryId = CRY_SWANNA,
        .natDexNum = NATIONAL_DEX_SWANNA,
        .categoryName = _("White Bird"),
        .height = 13,
        .weight = 242,
        .description = COMPOUND_STRING(
            "Despite their elegant appearance, they\n"
            "can flap their wings strongly and fly for\n"
            "thousands of miles. The one in the middle\n"
            "is the leader of the flock."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_DUCKLETT

#if P_FAMILY_VANILLITE
    [SPECIES_VANILLITE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vanillite"),
        .cryId = CRY_VANILLITE,
        .natDexNum = NATIONAL_DEX_VANILLITE,
        .categoryName = _("Fresh Snow"),
        .height = 4,
        .weight = 57,
        .description = COMPOUND_STRING(
            "The temperature of their breath is -58ºF.\n"
            "They create snow crystals and make snow\n"
            "fall in the areas around them. Vanillite is\n"
            "treasured by households in warm regions."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VANILLISH] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vanillish"),
        .cryId = CRY_VANILLISH,
        .natDexNum = NATIONAL_DEX_VANILLISH,
        .categoryName = _("Icy Snow"),
        .height = 11,
        .weight = 410,
        .description = COMPOUND_STRING(
            "Vanillish has existed since the Ice Age.\n"
            "It controls particles of ice, freezes its\n"
            "opponents, and then shatters them with\n"
            "a headbutt."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VANILLUXE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Vanilluxe"),
        .cryId = CRY_VANILLUXE,
        .natDexNum = NATIONAL_DEX_VANILLUXE,
        .categoryName = _("Snowstorm"),
        .height = 13,
        .weight = 575,
        .description = COMPOUND_STRING(
            "Each of its two heads has a brain, and\n"
            "when they are in agreement, it attacks\n"
            "its enemies by exhaling a violent blizzard.\n"
            "It makes snow clouds inside its body."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_VANILLITE

#if P_FAMILY_DEERLING
    [SPECIES_DEERLING_SPRING] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Season"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Deerling have different scents\n"
            "depending on the season. In early\n"
            "spring, these Pokémon give off a\n"
            "delicate, sweet, and calming scent."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DEERLING_SUMMER] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Season"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "To prevent Deerling from entering\n"
            "their fields, many farmers will have\n"
            "several Lycanroc stand guard, as\n"
            "they are its natural enemy."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DEERLING_AUTUMN] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Season"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Deerling have different scents\n"
            "depending on the season. In this form,\n"
            "Deerling have a softly sweet scent\n"
            "that lingers in the nose."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DEERLING_WINTER] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Deerling"),
        .cryId = CRY_DEERLING,
        .natDexNum = NATIONAL_DEX_DEERLING,
        .categoryName = _("Season"),
        .height = 6,
        .weight = 195,
        .description = COMPOUND_STRING(
            "Deerling's scent changes with the\n"
            "seasons, but when the Pokémon is in\n"
            "its Winter Form, it has hardly any\n"
            "scent at all."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SAWSBUCK_SPRING] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Season"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Some people call Sawsbuck the harbingers\n"
            "of spring because the plants growing on\n"
            "its horns change according to the season.\n"
            "The leader possesses magnificent horns."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

    [SPECIES_SAWSBUCK_SUMMER] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Season"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "The thicker and larger the\n"
            "branches and leaves on its antlers, the\n"
            "more majestic the Sawsbuck is thought\n"
            "to be."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

    [SPECIES_SAWSBUCK_AUTUMN] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Season"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Sawsbuck in their Autumn Form are\n"
            "known for having very short\n"
            "tempers. The males fight each other\n"
            "incessantly."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

    [SPECIES_SAWSBUCK_WINTER] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Sawsbuck"),
        .cryId = CRY_SAWSBUCK,
        .natDexNum = NATIONAL_DEX_SAWSBUCK,
        .categoryName = _("Season"),
        .height = 19,
        .weight = 925,
        .description = COMPOUND_STRING(
            "Though there are many enthusiasts\n"
            "for Sawsbuck as a species, this\n"
            "seasonal form in particular is not\n"
            "very popular."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_DEERLING

#if P_FAMILY_EMOLGA
    [SPECIES_EMOLGA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Emolga"),
        .cryId = CRY_EMOLGA,
        .natDexNum = NATIONAL_DEX_EMOLGA,
        .categoryName = _("Sky Squirrel"),
        .height = 4,
        .weight = 50,
        .description = COMPOUND_STRING(
            "It glides using its cape-like membrane.\n"
            "It grills berries and bug Pokémon with\n"
            "electric shocks from the pouches on its\n"
            "cheeks and makes a meal of them."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_EMOLGA

#if P_FAMILY_KARRABLAST
    [SPECIES_KARRABLAST] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Karrablast"),
        .cryId = CRY_KARRABLAST,
        .natDexNum = NATIONAL_DEX_KARRABLAST,
        .categoryName = _("Clamping"),
        .height = 5,
        .weight = 59,
        .description = COMPOUND_STRING(
            "When they feel threatened, they spit an\n"
            "acidic liquid to drive attackers away.\n"
            "For some reason they evolve while they\n"
            "are in the same place as Shelmet."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ESCAVALIER] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Escavalier"),
        .cryId = CRY_ESCAVALIER,
        .natDexNum = NATIONAL_DEX_ESCAVALIER,
        .categoryName = _("Cavalry"),
        .height = 10,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Wearing the shell covering they stole\n"
            "from Shelmet, they defend themselves and\n"
            "attack with two lances. The steel armor\n"
            "protects their whole body."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KARRABLAST

#if P_FAMILY_FOONGUS
    [SPECIES_FOONGUS] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Foongus"),
        .cryId = CRY_FOONGUS,
        .natDexNum = NATIONAL_DEX_FOONGUS,
        .categoryName = _("Mushroom"),
        .height = 2,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It lures Pokémon in with its pattern that\n"
            "looks just like a Poké Ball, then releases\n"
            "its poison spores. Why it resembles a\n"
            "Poké Ball is unknown."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_AMOONGUSS] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Amoonguss"),
        .cryId = CRY_AMOONGUSS,
        .natDexNum = NATIONAL_DEX_AMOONGUSS,
        .categoryName = _("Mushroom"),
        .height = 6,
        .weight = 105,
        .description = COMPOUND_STRING(
            "It lures prey close by dancing and waving\n"
            "its arm caps, which resemble Poké Balls,\n"
            "in a swaying motion, but very few Pokémon\n"
            "are fooled by this."),
        .pokemonScale = 422,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_FOONGUS

#if P_FAMILY_FRILLISH
    [SPECIES_FRILLISH] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Frillish"),
        .cryId = CRY_FRILLISH,
        .natDexNum = NATIONAL_DEX_FRILLISH,
        .categoryName = _("Floating"),
        .height = 12,
        .weight = 330,
        .description = COMPOUND_STRING(
            "If its veil-like arms stun and wrap an\n"
            "opponent, that foe will be dragged\n"
            "five miles below the surface to its lair,\n"
            "never to return."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_JELLICENT] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Jellicent"),
        .cryId = CRY_JELLICENT,
        .natDexNum = NATIONAL_DEX_JELLICENT,
        .categoryName = _("Floating"),
        .height = 22,
        .weight = 1350,
        .description = COMPOUND_STRING(
            "They propel themselves by expelling\n"
            "absorbed seawater from their bodies.\n"
            "It's said there's a castle of ships\n"
            "Jellicent have sunk on the seafloor."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },
#endif //P_FAMILY_FRILLISH

#if P_FAMILY_ALOMOMOLA
    [SPECIES_ALOMOMOLA] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Alomomola"),
        .cryId = CRY_ALOMOMOLA,
        .natDexNum = NATIONAL_DEX_ALOMOMOLA,
        .categoryName = _("Caring"),
        .height = 12,
        .weight = 316,
        .description = COMPOUND_STRING(
            "When they find a wounded Pokémon,\n"
            "they embrace it and bring it to shore.\n"
            "The special membrane enveloping\n"
            "Alomomola has the ability to heal wounds."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ALOMOMOLA

#if P_FAMILY_JOLTIK
    [SPECIES_JOLTIK] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Joltik"),
        .cryId = CRY_JOLTIK,
        .natDexNum = NATIONAL_DEX_JOLTIK,
        .categoryName = _("Attaching"),
        .height = 1,
        .weight = 6,
        .description = COMPOUND_STRING(
            "Since they can't generate their own\n"
            "electricity, they attach themselves to\n"
            "large-bodied Pokémon and absorb static\n"
            "electricity, which they store in a pouch."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GALVANTULA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Galvantula"),
        .cryId = CRY_GALVANTULA,
        .natDexNum = NATIONAL_DEX_GALVANTULA,
        .categoryName = _("EleSpider"),
        .height = 8,
        .weight = 143,
        .description = COMPOUND_STRING(
            "It creates barriers from electrified silk\n"
            "that stun foes. This works as a weapon as\n"
            "well as a defense. While it is immobilized\n"
            "by shock, they leisurely consume it."),
        .pokemonScale = 366,
        .pokemonOffset = 10,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_JOLTIK

#if P_FAMILY_FERROSEED
    [SPECIES_FERROSEED] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferroseed"),
        .cryId = CRY_FERROSEED,
        .natDexNum = NATIONAL_DEX_FERROSEED,
        .categoryName = _("Thorn Seed"),
        .height = 6,
        .weight = 188,
        .description = COMPOUND_STRING(
            "It absorbs the iron it finds in the rock\n"
            "while clinging to the ceiling of caves.\n"
            "When threatened, it attacks by shooting\n"
            "a barrage of spikes."),
        .pokemonScale = 422,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FERROTHORN] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Ferrothorn"),
        .cryId = CRY_FERROTHORN,
        .natDexNum = NATIONAL_DEX_FERROTHORN,
        .categoryName = _("Thorn Pod"),
        .height = 10,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "It fights by swinging around its three\n"
            "spiky feelers and shooting spikes.\n"
            "A hit from these steel spikes can reduce\n"
            "a boulder to rubble."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_FERROSEED

#if P_FAMILY_KLINK
    [SPECIES_KLINK] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Klink"),
        .cryId = CRY_KLINK,
        .natDexNum = NATIONAL_DEX_KLINK,
        .categoryName = _("Gear"),
        .height = 3,
        .weight = 210,
        .description = COMPOUND_STRING(
            "Two bodies comprise a fixed pair.\n"
            "The two minigears that mesh together\n"
            "are predetermined. Each will rebound from\n"
            "other minigears without meshing."),
        .pokemonScale = 530,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_KLANG] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Klang"),
        .cryId = CRY_KLANG,
        .natDexNum = NATIONAL_DEX_KLANG,
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 510,
        .description = COMPOUND_STRING(
            "A minigear and big gear comprise its\n"
            "body. Spinning minigears are rotated\n"
            "at high speed and repeatedly fired away.\n"
            "It is dangerous if the gears don't return."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_KLINKLANG] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Klinklang"),
        .cryId = CRY_KLINKLANG,
        .natDexNum = NATIONAL_DEX_KLINKLANG,
        .categoryName = _("Gear"),
        .height = 6,
        .weight = 810,
        .description = COMPOUND_STRING(
            "Its red core functions as an energy tank.\n"
            "It is rotated at high speed for a rapid\n"
            "energy charge. It fires the charged energy\n"
            "through its spikes into an area."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KLINK

#if P_FAMILY_TYNAMO
    [SPECIES_TYNAMO] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Tynamo"),
        .cryId = CRY_TYNAMO,
        .natDexNum = NATIONAL_DEX_TYNAMO,
        .categoryName = _("EleFish"),
        .height = 2,
        .weight = 3,
        .description = COMPOUND_STRING(
            "These Pokémon move in schools.\n"
            "One alone can emit only a trickle of\n"
            "electricity, so a group of them gathers\n"
            "to unleash a powerful electric shock."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_EELEKTRIK] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eelektrik"),
        .cryId = CRY_EELEKTRIK,
        .natDexNum = NATIONAL_DEX_EELEKTRIK,
        .categoryName = _("EleFish"),
        .height = 12,
        .weight = 220,
        .description = COMPOUND_STRING(
            "These Pokémon have a big appetite.\n"
            "It wraps itself around its prey and\n"
            "paralyzes it with electricity from the\n"
            "round spots on its sides. Then it chomps."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_EELEKTROSS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eelektross"),
        .cryId = CRY_EELEKTROSS,
        .natDexNum = NATIONAL_DEX_EELEKTROSS,
        .categoryName = _("EleFish"),
        .height = 21,
        .weight = 805,
        .description = COMPOUND_STRING(
            "They crawl out of the ocean using their\n"
            "arms. They will attack prey on shore and\n"
            "immediately drag it into the ocean, with\n"
            "their sucker mouths."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 365,
        .trainerOffset = 7,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_EELEKTROSS_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eelektross"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_EELEKTROSS_MEGA,
    #else
        .cryId = CRY_EELEKTROSS,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_EELEKTROSS,
        .categoryName = _("EleFish"),
        .height = 30,
        .weight = 1800,
        .description = COMPOUND_STRING(
            "It now generates 10 times the\n"
            "electricity it did before Mega\n"
            "Evolving. It discharges this energy\n"
            "from its false Eelektrik made of mucus."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_TYNAMO

#if P_FAMILY_ELGYEM
    [SPECIES_ELGYEM] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Elgyem"),
        .cryId = CRY_ELGYEM,
        .natDexNum = NATIONAL_DEX_ELGYEM,
        .categoryName = _("Cerebral"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "It psychically squeezes the brain of\n"
            "its foe, causing unendurable headaches.\n"
            "Rumors of its origin are linked to a UFO\n"
            "crash site in the desert 50 years ago."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BEHEEYEM] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Beheeyem"),
        .cryId = CRY_BEHEEYEM,
        .natDexNum = NATIONAL_DEX_BEHEEYEM,
        .categoryName = _("Cerebral"),
        .height = 10,
        .weight = 345,
        .description = COMPOUND_STRING(
            "It can manipulate an opponent's memory.\n"
            "Apparently, it communicates by flashing\n"
            "its three fingers, but those patterns\n"
            "haven't been decoded. "),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ELGYEM

#if P_FAMILY_LITWICK
    [SPECIES_LITWICK] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Litwick"),
        .cryId = CRY_LITWICK,
        .natDexNum = NATIONAL_DEX_LITWICK,
        .categoryName = _("Candle"),
        .height = 3,
        .weight = 31,
        .description = COMPOUND_STRING(
            "While Litwick shines a light and pretends\n"
            "to be a guide, it absorbs the life force of\n"
            "any who follow it, which becomes the fuel\n"
            "that it burns."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_LAMPENT] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Lampent"),
        .cryId = CRY_LAMPENT,
        .natDexNum = NATIONAL_DEX_LAMPENT,
        .categoryName = _("Lamp"),
        .height = 6,
        .weight = 130,
        .description = COMPOUND_STRING(
            "This ominous Pokémon is feared.\n"
            "Through cities it wanders, searching\n"
            "for the spirits of the fallen. The spirits\n"
            "it absorbs fuel its baleful fire."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CHANDELURE] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chandelure"),
        .cryId = CRY_CHANDELURE,
        .natDexNum = NATIONAL_DEX_CHANDELURE,
        .categoryName = _("Luring"),
        .height = 10,
        .weight = 343,
        .description = COMPOUND_STRING(
            "Being consumed in Chandelure's flame burns\n"
            "up the spirit, leaving the body behind.\n"
            "By waving the flames on its arms, it puts\n"
            "its foes into a hypnotic trance."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_CHANDELURE_MEGA] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Chandelure"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_CHANDELURE_MEGA,
    #else
        .cryId = CRY_CHANDELURE,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_CHANDELURE,
        .categoryName = _("Luring"),
        .height = 25,
        .weight = 696,
        .description = COMPOUND_STRING(
            "One of its eyes is a window linking\n"
            "our world with the afterlife.\n"
            "This Pokémon draws in hatred and\n"
            "converts it into power."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_LITWICK

#if P_FAMILY_AXEW
    [SPECIES_AXEW] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Axew"),
        .cryId = CRY_AXEW,
        .natDexNum = NATIONAL_DEX_AXEW,
        .categoryName = _("Tusk"),
        .height = 6,
        .weight = 180,
        .description = COMPOUND_STRING(
            "They mark their territory by leaving\n"
            "gashes in trees with their tusks. If a\n"
            "tusk breaks, a new one grows in quickly,\n"
            "harder and sturdier than the last."),
        .pokemonScale = 422,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FRAXURE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Fraxure"),
        .cryId = CRY_FRAXURE,
        .natDexNum = NATIONAL_DEX_FRAXURE,
        .categoryName = _("Axe Jaw"),
        .height = 10,
        .weight = 360,
        .description = COMPOUND_STRING(
            "Their tusks can shatter rocks.\n"
            "A broken tusk will not grow back,\n"
            "so it diligently sharpens its tusks on\n"
            "river rocks after the end of a battle."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_HAXORUS] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Haxorus"),
        .cryId = CRY_HAXORUS,
        .natDexNum = NATIONAL_DEX_HAXORUS,
        .categoryName = _("Axe Jaw"),
        .height = 18,
        .weight = 1055,
        .description = COMPOUND_STRING(
            "They are kind but can be relentless\n"
            "when defending territory. Their sturdy\n"
            "tusks will stay sharp even if used to cut\n"
            "steel beams."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_AXEW

#if P_FAMILY_CUBCHOO
    [SPECIES_CUBCHOO] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cubchoo"),
        .cryId = CRY_CUBCHOO,
        .natDexNum = NATIONAL_DEX_CUBCHOO,
        .categoryName = _("Chill"),
        .height = 5,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Its nose is always running.\n"
            "Their snot is a barometer of health.\n"
            "When healthy, their snot is sticky and\n"
            "the power of their ice moves increases."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BEARTIC] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Beartic"),
        .cryId = CRY_BEARTIC,
        .natDexNum = NATIONAL_DEX_BEARTIC,
        .categoryName = _("Freezing"),
        .height = 26,
        .weight = 2600,
        .description = COMPOUND_STRING(
            "It freezes its breath to create fangs\n"
            "and claws of ice to fight with.\n"
            "Very able in the water, it swims around\n"
            "in northern seas and catches prey."),
        .pokemonScale = 266,
        .pokemonOffset = 3,
        .trainerScale = 399,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_CUBCHOO

#if P_FAMILY_CRYOGONAL
    [SPECIES_CRYOGONAL] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cryogonal"),
        .cryId = CRY_CRYOGONAL,
        .natDexNum = NATIONAL_DEX_CRYOGONAL,
        .categoryName = _("Crystallize"),
        .height = 11,
        .weight = 1480,
        .description = COMPOUND_STRING(
            "They are born in snow clouds. When\n"
            "its body temperature goes up, it turns\n"
            "into steam and vanishes. When its\n"
            "temperature lowers, it returns to ice."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CRYOGONAL

#if P_FAMILY_SHELMET
    [SPECIES_SHELMET] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Shelmet"),
        .cryId = CRY_SHELMET,
        .natDexNum = NATIONAL_DEX_SHELMET,
        .categoryName = _("Snail"),
        .height = 4,
        .weight = 77,
        .description = COMPOUND_STRING(
            "When attacked, it defends itself by\n"
            "closing the lid of its shell. It evolves\n"
            "when bathed in an electric-like energy\n"
            "along with Karrablast."),
        .pokemonScale = 491,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ACCELGOR] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Accelgor"),
        .cryId = CRY_ACCELGOR,
        .natDexNum = NATIONAL_DEX_ACCELGOR,
        .categoryName = _("Shell Out"),
        .height = 8,
        .weight = 253,
        .description = COMPOUND_STRING(
            "When its body dries out, it weakens. So, to\n"
            "prevent dehydration, it wraps itself in\n"
            "layers of thin membrane. It is very light\n"
            "and fights with ninja-like movements."),
        .pokemonScale = 366,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SHELMET

#if P_FAMILY_STUNFISK
    [SPECIES_STUNFISK] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Stunfisk"),
        .cryId = CRY_STUNFISK,
        .natDexNum = NATIONAL_DEX_STUNFISK,
        .categoryName = _("Trap"),
        .height = 7,
        .weight = 110,
        .description = COMPOUND_STRING(
            "It conceals itself in the mud of the\n"
            "seashore. Then it waits. When prey touch\n"
            "it, it delivers a jolt of electricity.\n"
            "It smiles when transmitting electricity."),
        .pokemonScale = 365,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GALARIAN_FORMS
    [SPECIES_STUNFISK_GALAR] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Stunfisk"),
        .cryId = CRY_STUNFISK,
        .natDexNum = NATIONAL_DEX_STUNFISK,
        .categoryName = _("Trap"),
        .height = 7,
        .weight = 205,
        .description = COMPOUND_STRING(
            "Its conspicuous lips lure prey in\n"
            "as it lies in wait in the mud. When\n"
            "prey gets close, Stunfisk clamps its\n"
            "jagged steel fins down on them."),
        .pokemonScale = 365,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_STUNFISK

#if P_FAMILY_MIENFOO
    [SPECIES_MIENFOO] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Mienfoo"),
        .cryId = CRY_MIENFOO,
        .natDexNum = NATIONAL_DEX_MIENFOO,
        .categoryName = _("Martial Arts"),
        .height = 9,
        .weight = 200,
        .description = COMPOUND_STRING(
            "They have mastered elegant combos.\n"
            "As they concentrate, their battle moves\n"
            "become swifter and more precise. What it\n"
            "lacks in power, it makes up for in quantity."),
        .pokemonScale = 338,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MIENSHAO] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Mienshao"),
        .cryId = CRY_MIENSHAO,
        .natDexNum = NATIONAL_DEX_MIENSHAO,
        .categoryName = _("Martial Arts"),
        .height = 14,
        .weight = 355,
        .description = COMPOUND_STRING(
            "They use the long fur on their arms as\n"
            "a whip to strike their opponents. Its arm\n"
            "attacks come with such rapidity that they\n"
            "cannot even be seen."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MIENFOO

#if P_FAMILY_DRUDDIGON
    [SPECIES_DRUDDIGON] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Druddigon"),
        .cryId = CRY_DRUDDIGON,
        .natDexNum = NATIONAL_DEX_DRUDDIGON,
        .categoryName = _("Cave"),
        .height = 16,
        .weight = 1390,
        .description = COMPOUND_STRING(
            "It warms its body by absorbing sunlight\n"
            "with its wings. When its body temperature\n"
            "falls, it can no longer move. It uses its\n"
            "sharp claws to catch prey."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_DRUDDIGON

#if P_FAMILY_GOLETT
    [SPECIES_GOLETT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Golett"),
        .cryId = CRY_GOLETT,
        .natDexNum = NATIONAL_DEX_GOLETT,
        .categoryName = _("Automaton"),
        .height = 10,
        .weight = 920,
        .description = COMPOUND_STRING(
            "These Pokémon are thought to have\n"
            "been created by the science of an\n"
            "ancient and mysterious civilization.\n"
            "It's been active for thousands of years."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_GOLURK] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Golurk"),
        .cryId = CRY_GOLURK,
        .natDexNum = NATIONAL_DEX_GOLURK,
        .categoryName = _("Automaton"),
        .height = 28,
        .weight = 3300,
        .description = COMPOUND_STRING(
            "Golurk were created to protect people\n"
            "and Pokémon by an ancient civilisation.\n"
            "Removing the seal on its chest makes its\n"
            "internal energy go out of control."),
        .pokemonScale = 275,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_GOLURK_MEGA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Golurk"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_GOLURK_MEGA,
    #else
        .cryId = CRY_GOLURK,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_GOLURK,
        .categoryName = _("Automaton"),
        .height = 40,
        .weight = 3300,
        .description = COMPOUND_STRING(
            "The energy within Golurk has been\n"
            "stimulated by Mega Evolution.\n"
            "The Pokémon could explode at any moment."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_GOLETT

#if P_FAMILY_PAWNIARD
    [SPECIES_PAWNIARD] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Pawniard"),
        .cryId = CRY_PAWNIARD,
        .natDexNum = NATIONAL_DEX_PAWNIARD,
        .categoryName = _("Sharp Blade"),
        .height = 5,
        .weight = 102,
        .description = COMPOUND_STRING(
            "Ignoring their injuries, groups attack by\n"
            "sinking the blades that cover their bodies\n"
            "into their prey. If battling dulls them, it\n"
            "sharpens them on stones by the river."),
        .pokemonScale = 432,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BISHARP] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Bisharp"),
        .cryId = CRY_BISHARP,
        .natDexNum = NATIONAL_DEX_BISHARP,
        .categoryName = _("Sword Blade"),
        .height = 16,
        .weight = 700,
        .description = COMPOUND_STRING(
            "This pitiless Pokémon commands a group\n"
            "of Pawniard to hound prey into immobility.\n"
            "It battles to become the boss, but will be\n"
            "driven from the group if it loses."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

#if P_GEN_9_CROSS_EVOS
    [SPECIES_KINGAMBIT] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Kingambit"),
        .cryId = CRY_KINGAMBIT,
        .natDexNum = NATIONAL_DEX_KINGAMBIT,
        .categoryName = _("Big Blade"),
        .height = 20,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "Though it commands a massive army\n"
            "in battle, it's not skilled at\n"
            "devising complex strategies. It just uses\n"
            "brute strength to keep pushing."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD

#if P_FAMILY_BOUFFALANT
    [SPECIES_BOUFFALANT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Bouffalant"),
        .cryId = CRY_BOUFFALANT,
        .natDexNum = NATIONAL_DEX_BOUFFALANT,
        .categoryName = _("Bash Buffalo"),
        .height = 16,
        .weight = 946,
        .description = COMPOUND_STRING(
            "Their fluffy fur absorbs damage, even\n"
            "if they strike foes with a fierce headbutt.\n"
            "Their headbutts have enough destructive\n"
            "force to derail a train."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_BOUFFALANT

#if P_FAMILY_RUFFLET
    [SPECIES_RUFFLET] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Rufflet"),
        .cryId = CRY_RUFFLET,
        .natDexNum = NATIONAL_DEX_RUFFLET,
        .categoryName = _("Eaglet"),
        .height = 5,
        .weight = 105,
        .description = COMPOUND_STRING(
            "With its sharp claws, this Pokémon pierces\n"
            "its prey, and then it pecks at them.\n"
            "Although it also consumes berries, it's a\n"
            "carnivore at heart."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BRAVIARY_OUTSIDER] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Braviary"),
        .cryId = CRY_BRAVIARY,
        .natDexNum = NATIONAL_DEX_BRAVIARY,
        .categoryName = _("Valiant"),
        .height = 15,
        .weight = 410,
        .description = COMPOUND_STRING(
            "For the sake of its friends, this brave\n"
            "warrior of the sky will not stop battling,\n"
            "even if it is injured. One can carry a car\n"
            "while flying."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_HISUIAN_FORMS
    [SPECIES_BRAVIARY] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Braviary"),
        .cryId = CRY_BRAVIARY,
        .natDexNum = NATIONAL_DEX_BRAVIARY,
        .categoryName = _("Battle Cry"),
        .height = 17,
        .weight = 434,
        .description = COMPOUND_STRING(
            "Screaming a bloodcurdling battle\n"
            "cry, this huge and ferocious bird\n"
            "Pokémon goes out on the hunt."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_RUFFLET

#if P_FAMILY_VULLABY
    [SPECIES_VULLABY] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Vullaby"),
        .cryId = CRY_VULLABY,
        .natDexNum = NATIONAL_DEX_VULLABY,
        .categoryName = _("Diapered"),
        .height = 5,
        .weight = 90,
        .description = COMPOUND_STRING(
            "It can't fly yet and must wait until its\n"
            "wings have developed more. They guard\n"
            "their posteriors with bones that were\n"
            "gathered by Mandibuzz."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MANDIBUZZ] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Mandibuzz"),
        .cryId = CRY_MANDIBUZZ,
        .natDexNum = NATIONAL_DEX_MANDIBUZZ,
        .categoryName = _("Bone Vulture"),
        .height = 12,
        .weight = 395,
        .description = COMPOUND_STRING(
            "They adorn themselves beautifully with\n"
            "bones. This is supposedly an effort to\n"
            "attract males, but no male Mandibuzz\n"
            "have ever been found."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_VULLABY

#if P_FAMILY_HEATMOR
    [SPECIES_HEATMOR] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Heatmor"),
        .cryId = CRY_HEATMOR,
        .natDexNum = NATIONAL_DEX_HEATMOR,
        .categoryName = _("Anteater"),
        .height = 14,
        .weight = 580,
        .description = COMPOUND_STRING(
            "It draws in air through its tail,\n"
            "transforms it into fire, and uses it like\n"
            "a tongue. They burn through Durant's steel\n"
            "bodies and consume their insides."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_HEATMOR

#if P_FAMILY_DURANT
    [SPECIES_DURANT] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Durant"),
        .cryId = CRY_DURANT,
        .natDexNum = NATIONAL_DEX_DURANT,
        .categoryName = _("Iron Ant"),
        .height = 3,
        .weight = 330,
        .description = COMPOUND_STRING(
            "Durant dig nests in mountains.\n"
            "Individuals each play different roles in\n"
            "driving Heatmor, their natural predator,\n"
            "away from their colony."),
        .pokemonScale = 530,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_DURANT

#if P_FAMILY_DEINO
    [SPECIES_DEINO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Deino"),
        .cryId = CRY_DEINO,
        .natDexNum = NATIONAL_DEX_DEINO,
        .categoryName = _("Irate"),
        .height = 8,
        .weight = 173,
        .description = COMPOUND_STRING(
            "Lacking sight, it's unaware of its\n"
            "surroundings, so it bumps into things and\n"
            "eats anything that moves. Approaching\n"
            "it carelessly is dangerous."),
        .pokemonScale = 366,
        .pokemonOffset = 12,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_ZWEILOUS] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Zweilous"),
        .cryId = CRY_ZWEILOUS,
        .natDexNum = NATIONAL_DEX_ZWEILOUS,
        .categoryName = _("Hostile"),
        .height = 14,
        .weight = 500,
        .description = COMPOUND_STRING(
            "After it has eaten up all the food in its\n"
            "territory, it moves on to another area.\n"
            "Whichever head eats more than the other\n"
            "gets to be the leader."),
        .pokemonScale = 265,
        .pokemonOffset = 3,
        .trainerScale = 262,
        .trainerOffset = 0,
    },

    [SPECIES_HYDREIGON] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Hydreigon"),
        .cryId = CRY_HYDREIGON,
        .natDexNum = NATIONAL_DEX_HYDREIGON,
        .categoryName = _("Brutal"),
        .height = 18,
        .weight = 1600,
        .description = COMPOUND_STRING(
            "This brutal Pokémon travels the skies on\n"
            "its six wings. The heads on their arms do\n"
            "not have brains. They use all three heads\n"
            "to consume and destroy everything."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_DEINO

#if P_FAMILY_LARVESTA
    [SPECIES_LARVESTA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Larvesta"),
        .cryId = CRY_LARVESTA,
        .natDexNum = NATIONAL_DEX_LARVESTA,
        .categoryName = _("Torch"),
        .height = 11,
        .weight = 288,
        .description = COMPOUND_STRING(
            "This Pokémon was believed to have\n"
            "been born from the sun. It spews fire from\n"
            "its horns and encases itself in a cocoon\n"
            "of fire when it evolves."),
        .pokemonScale = 320,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_VOLCARONA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Volcarona"),
        .cryId = CRY_VOLCARONA,
        .natDexNum = NATIONAL_DEX_VOLCARONA,
        .categoryName = _("Sun"),
        .height = 16,
        .weight = 460,
        .description = COMPOUND_STRING(
            "When volcanic ash darkened the\n"
            "atmosphere, it appeared and saved Pokémon\n"
            "from freezing, Volcarona's fire provided a\n"
            "replacement for the sun."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_LARVESTA

#if P_FAMILY_COBALION
    [SPECIES_COBALION] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cobalion"),
        .cryId = CRY_COBALION,
        .natDexNum = NATIONAL_DEX_COBALION,
        .categoryName = _("Iron Will"),
        .height = 21,
        .weight = 2500,
        .description = COMPOUND_STRING(
            "It has a body and heart of steel. This\n"
            "legendary Pokémon battled against humans\n"
            "to protect Pokémon. Its personality\n"
            "is calm and composed."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_COBALION

#if P_FAMILY_TERRAKION
    [SPECIES_TERRAKION] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Terrakion"),
        .cryId = CRY_TERRAKION,
        .natDexNum = NATIONAL_DEX_TERRAKION,
        .categoryName = _("Cavern"),
        .height = 19,
        .weight = 2600,
        .description = COMPOUND_STRING(
            "Spoken of in legend, this Pokémon used\n"
            "its phenomenal power to destroy a castle\n"
            "in its effort to protect Pokémon that had\n"
            "lost their homes in a war among humans."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 336,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_TERRAKION

#if P_FAMILY_VIRIZION
    [SPECIES_VIRIZION] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Virizion"),
        .cryId = CRY_VIRIZION,
        .natDexNum = NATIONAL_DEX_VIRIZION,
        .categoryName = _("Grassland"),
        .height = 20,
        .weight = 2000,
        .description = COMPOUND_STRING(
            "Its head sprouts horns as sharp as blades.\n"
            "Legends say this Pokémon used\n"
            "whirlwind-like movements to confound\n"
            "and swiftly cut its opponents."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 344,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_VIRIZION

#if P_FAMILY_TORNADUS
    [SPECIES_TORNADUS_INCARNATE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tornadus"),
        .cryId = CRY_TORNADUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_TORNADUS,
        .categoryName = _("Cyclone"),
        .height = 15,
        .weight = 630,
        .description = COMPOUND_STRING(
            "Tornadus expels massive energy from\n"
            "its tail, causing severe storms.\n"
            "Its power can blow entire houses away.\n"
            "It zooms through the sky at 200 mph."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [SPECIES_TORNADUS_THERIAN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Tornadus"),
        .cryId = CRY_TORNADUS_THERIAN,
        .natDexNum = NATIONAL_DEX_TORNADUS,
        .categoryName = _("Cyclone"),
        .height = 14,
        .weight = 630,
        .description = COMPOUND_STRING(
            "An example of what is known as a\n"
            "“form change”. Tornadus has been\n"
            "sighted crossing the ocean while in this\n"
            "form."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_TORNADUS

#if P_FAMILY_THUNDURUS
    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Thundurus"),
        .cryId = CRY_THUNDURUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_THUNDURUS,
        .categoryName = _("Bolt Strike"),
        .height = 15,
        .weight = 610,
        .description = COMPOUND_STRING(
            "The spikes on its tail discharge immense\n"
            "bolts of lightning. Countless charred\n"
            "remains mar the landscape of places\n"
            "through which Thundurus has passed."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [SPECIES_THUNDURUS_THERIAN] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Thundurus"),
        .cryId = CRY_THUNDURUS_THERIAN,
        .natDexNum = NATIONAL_DEX_THUNDURUS,
        .categoryName = _("Bolt Strike"),
        .height = 30,
        .weight = 610,
        .description = COMPOUND_STRING(
            "It pulverizes foes into nothingness\n"
            "with showers of devastatingly\n"
            "powerful lightning bolts launched\n"
            "from the string of orbs on its tail."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_THUNDURUS

#if P_FAMILY_RESHIRAM
    [SPECIES_RESHIRAM] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Reshiram"),
        .cryId = CRY_RESHIRAM,
        .natDexNum = NATIONAL_DEX_RESHIRAM,
        .categoryName = _("Vast White"),
        .height = 32,
        .weight = 3300,
        .description = COMPOUND_STRING(
            "This Pokémon appears in legends. It\n"
            "sends flames into the air from its tail,\n"
            "burning up everything around it. It helps\n"
            "those who want to build a world of truth."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 445,
        .trainerOffset = 8,
    },
#endif //P_FAMILY_RESHIRAM

#if P_FAMILY_ZEKROM
    [SPECIES_ZEKROM] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Zekrom"),
        .cryId = CRY_ZEKROM,
        .natDexNum = NATIONAL_DEX_ZEKROM,
        .categoryName = _("Deep Black"),
        .height = 29,
        .weight = 3450,
        .description = COMPOUND_STRING(
            "This legendary Pokémon can scorch the\n"
            "world with lightning. It has a generator\n"
            "that creates electricity in its tail. It\n"
            "assists those with strong ideals."),
        .pokemonScale = 275,
        .pokemonOffset = 2,
        .trainerScale = 412,
        .trainerOffset = 10,
    },
#endif //P_FAMILY_ZEKROM

#if P_FAMILY_LANDORUS
    [SPECIES_LANDORUS_INCARNATE] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Landorus"),
        .cryId = CRY_LANDORUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_LANDORUS,
        .categoryName = _("Abundance"),
        .height = 15,
        .weight = 680,
        .description = COMPOUND_STRING(
            "The energy that comes pouring from its\n"
            "tail increases the nutrition in the soil,\n"
            "granting bountiful crops. It has been\n"
            "hailed as “The Guardian of the Fields.”"),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

    [SPECIES_LANDORUS_THERIAN] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Landorus"),
        .cryId = CRY_LANDORUS_THERIAN,
        .natDexNum = NATIONAL_DEX_LANDORUS,
        .categoryName = _("Abundance"),
        .height = 13,
        .weight = 680,
        .description = COMPOUND_STRING(
            "Landorus soars through the sky in\n"
            "this form, bestowing plentiful\n"
            "harvests upon the land and earning the\n"
            "people's reverence."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_LANDORUS

#if P_FAMILY_KYUREM
    [SPECIES_KYUREM] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kyurem"),
        .cryId = CRY_KYUREM,
        .natDexNum = NATIONAL_DEX_KYUREM,
        .categoryName = _("Boundary"),
        .height = 30,
        .weight = 3250,
        .description = COMPOUND_STRING(
            "This legendary ice Pokémon waits for a\n"
            "hero to fill in the missing parts of its\n"
            "body with truth or ideals. Its body became\n"
            "frozen when its energy leaked out."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 356,
        .trainerOffset = 0,
    },

#if P_FUSION_FORMS
    [SPECIES_KYUREM_WHITE] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kyurem"),
        .cryId = CRY_KYUREM_WHITE,
        .natDexNum = NATIONAL_DEX_KYUREM,
        .categoryName = _("Boundary"),
        .height = 36,
        .weight = 3250,
        .description = COMPOUND_STRING(
            "The sameness of Reshiram's and\n"
            "Kyurem's genes allowed Kyurem to\n"
            "absorb Reshiram. Kyurem can now use the\n"
            "power of both fire and ice."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 356,
        .trainerOffset = 0,
    },

    [SPECIES_KYUREM_BLACK] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kyurem"),
        .cryId = CRY_KYUREM_BLACK,
        .natDexNum = NATIONAL_DEX_KYUREM,
        .categoryName = _("Boundary"),
        .height = 33,
        .weight = 3250,
        .description = COMPOUND_STRING(
            "The sameness of Zekrom's and\n"
            "Kyurem's genes allowed Kyurem to absorb\n"
            "Zekrom. Kyurem can now use the\n"
            "power of both electricity and ice."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 356,
        .trainerOffset = 0,
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM

#if P_FAMILY_KELDEO
    [SPECIES_KELDEO_ORDINARY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Keldeo"),
        .cryId = CRY_KELDEO,
        .natDexNum = NATIONAL_DEX_KELDEO,
        .categoryName = _("Colt"),
        .height = 14,
        .weight = 485,
        .description = COMPOUND_STRING(
            "When it is resolute, its body fills with\n"
            "power and it becomes swifter. It crosses\n"
            "the world, running over the surfaces of\n"
            "oceans and rivers."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },

    [SPECIES_KELDEO_RESOLUTE] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Keldeo"),
        .cryId = CRY_KELDEO,
        .natDexNum = NATIONAL_DEX_KELDEO,
        .categoryName = _("Colt"),
        .height = 14,
        .weight = 485,
        .description = COMPOUND_STRING(
            "The power that lay hidden in its\n"
            "body now covers its horn, turning it\n"
            "into a sword that can slice through\n"
            "anything."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_KELDEO

#if P_FAMILY_MELOETTA
    [SPECIES_MELOETTA_ARIA] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meloetta"),
        .cryId = CRY_MELOETTA,
        .natDexNum = NATIONAL_DEX_MELOETTA,
        .categoryName = _("Melody"),
        .height = 6,
        .weight = 65,
        .description = COMPOUND_STRING(
            "The melodies sung by Meloetta have the\n"
            "power to make Pokémon that hear them\n"
            "happy or sad. Many famous songs have been\n"
            "inspired by the tunes that Meloetta plays."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Meloetta"),
        .cryId = CRY_MELOETTA,
        .natDexNum = NATIONAL_DEX_MELOETTA,
        .categoryName = _("Melody"),
        .height = 6,
        .weight = 65,
        .description = COMPOUND_STRING(
            "Meloetta's melodies are sung with\n"
            "a special vocalization method that can\n"
            "control the feelings of those who hear it."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MELOETTA

#if P_FAMILY_GENESECT
#define GENESECT_SPECIES_INFO_DEX(form)                                                 \
    {                                                                               \
        .bodyColor = BODY_COLOR_PURPLE,                                             \
        .speciesName = _("Genesect"),                                               \
        .cryId = CRY_GENESECT,                                                      \
        .natDexNum = NATIONAL_DEX_GENESECT,                                         \
        .categoryName = _("Paleozoic"),                                             \
        .height = 15,                                                               \
        .weight = 825,                                                              \
        .description = gGenesectPokedexText,                                        \
        .pokemonScale = 268,                                                        \
        .pokemonOffset = 2,                                                         \
        .trainerScale = 271,                                                        \
        .trainerOffset = 0,                                                         \
    }

    [SPECIES_GENESECT]             = GENESECT_SPECIES_INFO_DEX(Genesect),
    [SPECIES_GENESECT_DOUSE] = GENESECT_SPECIES_INFO_DEX(GenesectDouseDrive),
    [SPECIES_GENESECT_SHOCK] = GENESECT_SPECIES_INFO_DEX(GenesectShockDrive),
    [SPECIES_GENESECT_BURN]  = GENESECT_SPECIES_INFO_DEX(GenesectBurnDrive),
    [SPECIES_GENESECT_CHILL] = GENESECT_SPECIES_INFO_DEX(GenesectChillDrive),
#endif //P_FAMILY_GENESECT

#ifdef __INTELLISENSE__
};
#endif
