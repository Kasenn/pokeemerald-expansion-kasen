#ifdef __INTELLISENSE__
const struct SpeciesDexInfo gSpeciesDexInfoGen8[] =
{
#endif

#if P_FAMILY_GROOKEY
    [SPECIES_GROOKEY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Grookey"),
        .cryId = CRY_GROOKEY,
        .natDexNum = NATIONAL_DEX_GROOKEY,
        .categoryName = _("Chimp"),
        .height = 3,
        .weight = 50,
        .description = COMPOUND_STRING(
            "When it uses its special stick to strike up\n"
            "a beat, the sound waves produced carry\n"
            "revitalizing energy to the plants and\n"
            "flowers in the area."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_THWACKEY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Thwackey"),
        .cryId = CRY_THWACKEY,
        .natDexNum = NATIONAL_DEX_THWACKEY,
        .categoryName = _("Beat"),
        .height = 7,
        .weight = 140,
        .description = COMPOUND_STRING(
            "The faster a Thwackey can beat out\n"
            "a rhythm with its two sticks, the more\n"
            "respect it wins from its peers."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_RILLABOOM] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rillaboom"),
        .cryId = CRY_RILLABOOM,
        .natDexNum = NATIONAL_DEX_RILLABOOM,
        .categoryName = _("Drummer"),
        .height = 21,
        .weight = 900,
        .description = COMPOUND_STRING(
            "By drumming, it taps into the power of\n"
            "its special tree stump. The roots of the\n"
            "stump follow its direction in battle."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_RILLABOOM_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Rillaboom"),
        .cryId = CRY_RILLABOOM,
        .natDexNum = NATIONAL_DEX_RILLABOOM,
        .categoryName = _("Drummer"),
        .height = 280,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Rillaboom has become one with its\n"
            "forest of drums and continues to lay\n"
            "down beats that shake all of Galar."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_GROOKEY

#if P_FAMILY_SCORBUNNY
    [SPECIES_SCORBUNNY] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Scorbunny"),
        .cryId = CRY_SCORBUNNY,
        .natDexNum = NATIONAL_DEX_SCORBUNNY,
        .categoryName = _("Rabbit"),
        .height = 3,
        .weight = 45,
        .description = COMPOUND_STRING(
            "A warm-up of running around gets fire\n"
            "energy coursing through this Pokémon's\n"
            "body. Once that happens, it's ready to\n"
            "fight at full power."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_RABOOT] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Raboot"),
        .cryId = CRY_RABOOT,
        .natDexNum = NATIONAL_DEX_RABOOT,
        .categoryName = _("Rabbit"),
        .height = 6,
        .weight = 90,
        .description = COMPOUND_STRING(
            "Its thick and fluffy fur protects it\n"
            "from the cold and enables it to use\n"
            "hotter fire moves."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CINDERACE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cinderace"),
        .cryId = CRY_CINDERACE,
        .natDexNum = NATIONAL_DEX_CINDERACE,
        .categoryName = _("Striker"),
        .height = 14,
        .weight = 330,
        .description = COMPOUND_STRING(
            "It juggles a pebble with its feet,\n"
            "turning it into a burning soccer ball.\n"
            "Its shots strike opponents hard and\n"
            "leave them scorched."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CINDERACE_GMAX] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Cinderace"),
        .cryId = CRY_CINDERACE,
        .natDexNum = NATIONAL_DEX_CINDERACE,
        .categoryName = _("Striker"),
        .height = 270,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Infused with Cinderace's fighting\n"
            "spirit, the gigantic Pyro Ball never\n"
            "misses its targets and completely\n"
            "roasts opponents."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SCORBUNNY

#if P_FAMILY_SOBBLE
    [SPECIES_SOBBLE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Sobble"),
        .cryId = CRY_SOBBLE,
        .natDexNum = NATIONAL_DEX_SOBBLE,
        .categoryName = _("Water Lizard"),
        .height = 3,
        .weight = 40,
        .description = COMPOUND_STRING(
            "When scared, this Pokémon cries.\n"
            "Its tears pack the chemical punch of 100\n"
            "onions, and attackers won't be\n"
            "able to resist weeping."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DRIZZILE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Drizzile"),
        .cryId = CRY_DRIZZILE,
        .natDexNum = NATIONAL_DEX_DRIZZILE,
        .categoryName = _("Water Lizard"),
        .height = 7,
        .weight = 115,
        .description = COMPOUND_STRING(
            "A clever combatant, this Pokémon battles\n"
            "using water balloons created with\n"
            "moisture secreted from its palms."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_INTELEON] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inteleon"),
        .cryId = CRY_INTELEON,
        .natDexNum = NATIONAL_DEX_INTELEON,
        .categoryName = _("Secret Agent"),
        .height = 19,
        .weight = 452,
        .description = COMPOUND_STRING(
            "It has many hidden capabilities, such as\n"
            "fingertips that can shoot water and a\n"
            "membrane on its back that it can use to\n"
            "glide through the air."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_INTELEON_GMAX] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Inteleon"),
        .cryId = CRY_INTELEON,
        .natDexNum = NATIONAL_DEX_INTELEON,
        .categoryName = _("Secret Agent"),
        .height = 400,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Gigantamax Inteleon's Water Gun\n"
            "move fires at Mach 7. As the Pokémon\n"
            "takes aim, it uses the crest on its\n"
            "head to gauge wind and temperature."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SOBBLE

#if P_FAMILY_SKWOVET
    [SPECIES_SKWOVET] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Skwovet"),
        .cryId = CRY_SKWOVET,
        .natDexNum = NATIONAL_DEX_SKWOVET,
        .categoryName = _("Cheeky"),
        .height = 3,
        .weight = 25,
        .description = COMPOUND_STRING(
            "Found throughout the Galar region, this\n"
            "Pokémon becomes uneasy if its cheeks are\n"
            "ever completely empty of berries."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GREEDENT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Greedent"),
        .cryId = CRY_GREEDENT,
        .natDexNum = NATIONAL_DEX_GREEDENT,
        .categoryName = _("Greedy"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "It stashes berries in its tail--so many\n"
            "berries that they fall out constantly.\n"
            "But this Pokémon is a bit slow-witted,\n"
            "so it doesn't notice the loss."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SKWOVET

#if P_FAMILY_ROOKIDEE
    [SPECIES_ROOKIDEE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Rookidee"),
        .cryId = CRY_ROOKIDEE,
        .natDexNum = NATIONAL_DEX_ROOKIDEE,
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 18,
        .description = COMPOUND_STRING(
            "It will bravely challenge any opponent,\n"
            "no matter how powerful. This Pokémon\n"
            "benefits from every battle--even a\n"
            "defeat increases its strength a bit."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CORVISQUIRE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Corvisquire"),
        .cryId = CRY_CORVISQUIRE,
        .natDexNum = NATIONAL_DEX_CORVISQUIRE,
        .categoryName = _("Raven"),
        .height = 8,
        .weight = 160,
        .description = COMPOUND_STRING(
            "Smart enough to use tools in battle,\n"
            "these Pokémon have been seen picking up\n"
            "rocks and flinging them or using ropes\n"
            "to wrap up enemies."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_CORVIKNIGHT] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Corviknight"),
        .cryId = CRY_CORVIKNIGHT,
        .natDexNum = NATIONAL_DEX_CORVIKNIGHT,
        .categoryName = _("Raven"),
        .height = 22,
        .weight = 750,
        .description = COMPOUND_STRING(
            "This Pokémon reigns supreme in the skies\n"
            "of the Galar region. The black luster of\n"
            "its steel body could drive terror into\n"
            "the heart of any foe."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CORVIKNIGHT_GMAX] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Corviknight"),
        .cryId = CRY_CORVIKNIGHT,
        .natDexNum = NATIONAL_DEX_CORVIKNIGHT,
        .categoryName = _("Raven"),
        .height = 140,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Imbued with Gigantamax energy, its\n"
            "wings can whip up winds more\n"
            "forceful than any a hurricane could\n"
            "muster. The gusts blow everything away."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROOKIDEE

#if P_FAMILY_BLIPBUG
    [SPECIES_BLIPBUG] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Blipbug"),
        .cryId = CRY_BLIPBUG,
        .natDexNum = NATIONAL_DEX_BLIPBUG,
        .categoryName = _("Larva"),
        .height = 4,
        .weight = 80,
        .description = COMPOUND_STRING(
            "A constant collector of information,\n"
            "this Pokémon is very smart. Very strong\n"
            "is what it isn't."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DOTTLER] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Dottler"),
        .cryId = CRY_DOTTLER,
        .natDexNum = NATIONAL_DEX_DOTTLER,
        .categoryName = _("Radome"),
        .height = 4,
        .weight = 195,
        .description = COMPOUND_STRING(
            "It barely moves, but it's still alive.\n"
            "Hiding in its shell without food or\n"
            "water seems to have awakened its\n"
            "psychic powers."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ORBEETLE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Orbeetle"),
        .cryId = CRY_ORBEETLE,
        .natDexNum = NATIONAL_DEX_ORBEETLE,
        .categoryName = _("Seven Spot"),
        .height = 4,
        .weight = 408,
        .description = COMPOUND_STRING(
            "It's famous for its high level of\n"
            "intelligence, and the large size of its\n"
            "brain is proof that it also possesses\n"
            "immense psychic power."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_ORBEETLE_GMAX] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Orbeetle"),
        .cryId = CRY_ORBEETLE,
        .natDexNum = NATIONAL_DEX_ORBEETLE,
        .categoryName = _("Seven Spot"),
        .height = 140,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Its brain has grown to a gargantuan\n"
            "size, as has the rest of its body.\n"
            "This Pokémon's intellect and\n"
            "psychic abilities are overpowering."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_BLIPBUG

#if P_FAMILY_NICKIT
    [SPECIES_NICKIT] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Nickit"),
        .cryId = CRY_NICKIT,
        .natDexNum = NATIONAL_DEX_NICKIT,
        .categoryName = _("Fox"),
        .height = 6,
        .weight = 89,
        .description = COMPOUND_STRING(
            "Aided by the soft pads on its feet, it\n"
            "silently raids the food stores of other\n"
            "Pokémon. It survives off its\n"
            "ill-gotten gains."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_THIEVUL] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Thievul"),
        .cryId = CRY_THIEVUL,
        .natDexNum = NATIONAL_DEX_THIEVUL,
        .categoryName = _("Fox"),
        .height = 12,
        .weight = 199,
        .description = COMPOUND_STRING(
            "It secretly marks potential targets with\n"
            "a scent. By following the scent, it\n"
            "stalks its targets and steals from them\n"
            "when they least expect it."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_NICKIT

#if P_FAMILY_GOSSIFLEUR
    [SPECIES_GOSSIFLEUR] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Gossifleur"),
        .cryId = CRY_GOSSIFLEUR,
        .natDexNum = NATIONAL_DEX_GOSSIFLEUR,
        .categoryName = _("Flowering"),
        .height = 4,
        .weight = 22,
        .description = COMPOUND_STRING(
            "It anchors itself in the ground with its\n"
            "single leg, then basks in the sun. After\n"
            "absorbing enough sunlight, its petals\n"
            "spread as it blooms brilliantly."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ELDEGOSS] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Eldegoss"),
        .cryId = CRY_ELDEGOSS,
        .natDexNum = NATIONAL_DEX_ELDEGOSS,
        .categoryName = _("Cotton Bloom"),
        .height = 5,
        .weight = 25,
        .description = COMPOUND_STRING(
            "The seeds attached to its cotton fluff\n"
            "are full of nutrients. It spreads them\n"
            "on the wind so that plants and other\n"
            "Pokémon can benefit from them."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_GOSSIFLEUR

#if P_FAMILY_WOOLOO
    [SPECIES_WOOLOO] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Wooloo"),
        .cryId = CRY_WOOLOO,
        .natDexNum = NATIONAL_DEX_WOOLOO,
        .categoryName = _("Sheep"),
        .height = 6,
        .weight = 60,
        .description = COMPOUND_STRING(
            "Its curly fleece is such an effective\n"
            "cushion that this Pokémon could fall off\n"
            "a cliff and stand right back up at the\n"
            "bottom, unharmed."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DUBWOOL] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Dubwool"),
        .cryId = CRY_DUBWOOL,
        .natDexNum = NATIONAL_DEX_DUBWOOL,
        .categoryName = _("Sheep"),
        .height = 13,
        .weight = 430,
        .description = COMPOUND_STRING(
            "Weave a carpet from its springy wool,\n"
            "and you end up with something closer to\n"
            "a trampoline. You'll start to bounce the\n"
            "moment you set foot on it."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_WOOLOO

#if P_FAMILY_CHEWTLE
    [SPECIES_CHEWTLE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Chewtle"),
        .cryId = CRY_CHEWTLE,
        .natDexNum = NATIONAL_DEX_CHEWTLE,
        .categoryName = _("Snapping"),
        .height = 3,
        .weight = 85,
        .description = COMPOUND_STRING(
            "Apparently the itch of its teething\n"
            "impels it to snap its jaws at anything\n"
            "in front of it."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DREDNAW] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Drednaw"),
        .cryId = CRY_DREDNAW,
        .natDexNum = NATIONAL_DEX_DREDNAW,
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 1155,
        .description = COMPOUND_STRING(
            "With jaws that can shear through steel\n"
            "rods, this highly aggressive Pokémon\n"
            "chomps down on its unfortunate prey."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DREDNAW_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Drednaw"),
        .cryId = CRY_DREDNAW,
        .natDexNum = NATIONAL_DEX_DREDNAW,
        .categoryName = _("Bite"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "In the Galar region, there's a tale\n"
            "about this Pokémon chewing up a\n"
            "mountain and using the rubble to stop a\n"
            "flood."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CHEWTLE

#if P_FAMILY_YAMPER
    [SPECIES_YAMPER] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Yamper"),
        .cryId = CRY_YAMPER,
        .natDexNum = NATIONAL_DEX_YAMPER,
        .categoryName = _("Puppy"),
        .height = 3,
        .weight = 135,
        .description = COMPOUND_STRING(
            "This Pokémon is very popular as a\n"
            "herding dog in the Galar region. As it\n"
            "runs, it generates electricity from the\n"
            "base of its tail."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BOLTUND] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Boltund"),
        .cryId = CRY_BOLTUND,
        .natDexNum = NATIONAL_DEX_BOLTUND,
        .categoryName = _("Dog"),
        .height = 10,
        .weight = 340,
        .description = COMPOUND_STRING(
            "This Pokémon generates electricity and\n"
            "channels it into its legs to keep them\n"
            "going strong. Boltund can run nonstop\n"
            "for three full days."),
        .pokemonScale = 305,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_YAMPER

#if P_FAMILY_ROLYCOLY
    [SPECIES_ROLYCOLY] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Rolycoly"),
        .cryId = CRY_ROLYCOLY,
        .natDexNum = NATIONAL_DEX_ROLYCOLY,
        .categoryName = _("Coal"),
        .height = 3,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Most of its body has the same composition\n"
            "as coal. Fittingly, this Pokémon was\n"
            "first discovered in coal mines about\n"
            "400 years ago."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CARKOL] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Carkol"),
        .cryId = CRY_CARKOL,
        .natDexNum = NATIONAL_DEX_CARKOL,
        .categoryName = _("Coal"),
        .height = 11,
        .weight = 780,
        .description = COMPOUND_STRING(
            "It forms coal inside its body. Coal\n"
            "dropped by this Pokémon once helped fuel\n"
            "the lives of people in the Galar region."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_COALOSSAL] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Coalossal"),
        .cryId = CRY_COALOSSAL,
        .natDexNum = NATIONAL_DEX_COALOSSAL,
        .categoryName = _("Coal"),
        .height = 28,
        .weight = 3105,
        .description = COMPOUND_STRING(
            "It's usually peaceful, but the vandalism\n"
            "of mines enrages it. Offenders will be\n"
            "incinerated with flames that reach\n"
            "2,700 degrees Fahrenheit."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COALOSSAL_GMAX] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Coalossal"),
        .cryId = CRY_COALOSSAL,
        .natDexNum = NATIONAL_DEX_COALOSSAL,
        .categoryName = _("Coal"),
        .height = 420,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Its body is a colossal stove. With\n"
            "Gigantamax energy stoking the fire,\n"
            "this Pokémon's flame burns hotter\n"
            "than 3,600 degrees Fahrenheit."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_ROLYCOLY

#if P_FAMILY_APPLIN
    [SPECIES_APPLIN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Applin"),
        .cryId = CRY_APPLIN,
        .natDexNum = NATIONAL_DEX_APPLIN,
        .categoryName = _("Apple Core"),
        .height = 2,
        .weight = 5,
        .description = COMPOUND_STRING(
            "It spends its entire life inside an\n"
            "apple. It hides from its natural enemies,\n"
            "bird Pokémon, by pretending it's just an\n"
            "apple and nothing more."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FLAPPLE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flapple"),
        .cryId = CRY_FLAPPLE,
        .natDexNum = NATIONAL_DEX_FLAPPLE,
        .categoryName = _("Apple Wing"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It ate a sour apple, and that induced its\n"
            "evolution. In its cheeks, it stores an acid\n"
            "capable of causing chemical burns."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_FLAPPLE_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Flapple"),
        .cryId = CRY_FLAPPLE,
        .natDexNum = NATIONAL_DEX_FLAPPLE,
        .categoryName = _("Apple Wing"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Under the influence of Gigantamax\n"
            "energy, it produces much more sweet\n"
            "nectar, and its shape has changed\n"
            "to resemble a giant apple."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_APPLETUN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Appletun"),
        .cryId = CRY_APPLETUN,
        .natDexNum = NATIONAL_DEX_APPLETUN,
        .categoryName = _("Apple Nectar"),
        .height = 4,
        .weight = 130,
        .description = COMPOUND_STRING(
            "Eating a sweet apple caused its evolution.\n"
            "A nectarous scent wafts from its body,\n"
            "luring in the bug Pokémon it preys on."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_APPLETUN_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Appletun"),
        .cryId = CRY_APPLETUN,
        .natDexNum = NATIONAL_DEX_APPLETUN,
        .categoryName = _("Apple Nectar"),
        .height = 240,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Due to Gigantamax energy, this\n"
            "Pokémon's nectar has thickened. The\n"
            "increased viscosity lets the nectar\n"
            "absorb more damage than before."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_DIPPLIN] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dipplin"),
        .cryId = CRY_DIPPLIN,
        .natDexNum = NATIONAL_DEX_DIPPLIN,
        .categoryName = _("Candy Apple"),
        .height = 4,
        .weight = 44,
        .description = COMPOUND_STRING(
            "Dipplin is two creatures in one Pokémon.\n"
            "Its evolution was triggered by a special\n"
            "apple grown only in one place."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HYDRAPPLE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Hydrapple"),
        .cryId = CRY_HYDRAPPLE,
        .natDexNum = NATIONAL_DEX_HYDRAPPLE,
        .categoryName = _("Apple Hydra"),
        .height = 18,
        .weight = 930,
        .description = COMPOUND_STRING(
            "These capricious syrpents have\n"
            "banded together. On the rare\n"
            "occasion that their moods align,\n"
            "their true power is unleashed."),
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN

#if P_FAMILY_SILICOBRA
    [SPECIES_SILICOBRA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Silicobra"),
        .cryId = CRY_SILICOBRA,
        .natDexNum = NATIONAL_DEX_SILICOBRA,
        .categoryName = _("Sand Snake"),
        .height = 22,
        .weight = 76,
        .description = COMPOUND_STRING(
            "As it digs, it swallows sand and stores\n"
            "it in its neck pouch. The pouch can hold\n"
            "more than 17 pounds of sand."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },

    [SPECIES_SANDACONDA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sandaconda"),
        .cryId = CRY_SANDACONDA,
        .natDexNum = NATIONAL_DEX_SANDACONDA,
        .categoryName = _("Sand Snake"),
        .height = 38,
        .weight = 655,
        .description = COMPOUND_STRING(
            "When it contracts its body, over 220\n"
            "pounds of sand sprays from its nose. If\n"
            "it ever runs out of sand, it becomes\n"
            "disheartened."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_SANDACONDA_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Sandaconda"),
        .cryId = CRY_SANDACONDA,
        .natDexNum = NATIONAL_DEX_SANDACONDA,
        .categoryName = _("Sand Snake"),
        .height = 220,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Its sand pouch has grown to tremendous\n"
            "proportions. More than 1,000,000 tons of\n"
            "sand now swirl around its body with enough\n"
            "speed and power to pulverize a skyscraper."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SILICOBRA

#if P_FAMILY_CRAMORANT
    [SPECIES_CRAMORANT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cramorant"),
        .cryId = CRY_CRAMORANT,
        .natDexNum = NATIONAL_DEX_CRAMORANT,
        .categoryName = _("Gulp"),
        .height = 8,
        .weight = 180,
        .description = COMPOUND_STRING(
            "It's so strong that it can knock out some\n"
            "opponents in a single hit, but it also may\n"
            "forget what it's battling midfight."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_CRAMORANT_GULPING] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cramorant"),
        .cryId = CRY_CRAMORANT_GULPING,
        .natDexNum = NATIONAL_DEX_CRAMORANT,
        .categoryName = _("Gulp"),
        .height = 8,
        .weight = 180,
        .description = COMPOUND_STRING(
            "Cramorant's gluttony led it to try\n"
            "to swallow an Arrokuda whole, which\n"
            "in turn led to Cramorant getting an\n"
            "Arrokuda stuck in its throat."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_CRAMORANT_GORGING] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Cramorant"),
        .cryId = CRY_CRAMORANT_GULPING,
        .natDexNum = NATIONAL_DEX_CRAMORANT,
        .categoryName = _("Gulp"),
        .height = 8,
        .weight = 180,
        .description = COMPOUND_STRING(
            "This Cramorant has accidentally\n"
            "gotten a Pikachu lodged in its gullet.\n"
            "Cramorant is choking a little, but it\n"
            "isn't really bothered."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_CRAMORANT

#if P_FAMILY_ARROKUDA
    [SPECIES_ARROKUDA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Arrokuda"),
        .cryId = CRY_ARROKUDA,
        .natDexNum = NATIONAL_DEX_ARROKUDA,
        .categoryName = _("Rush"),
        .height = 5,
        .weight = 10,
        .description = COMPOUND_STRING(
            "If it sees any movement around it, this\n"
            "Pokémon charges for it straightaway,\n"
            "leading with its sharply pointed jaw.\n"
            "It's very proud of that jaw."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_BARRASKEWDA] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Barraskewda"),
        .cryId = CRY_BARRASKEWDA,
        .natDexNum = NATIONAL_DEX_BARRASKEWDA,
        .categoryName = _("Skewer"),
        .height = 13,
        .weight = 300,
        .description = COMPOUND_STRING(
            "This Pokémon has a jaw that's as sharp\n"
            "as a spear and as strong as steel.\n"
            "Apparently Barraskewda's flesh is\n"
            "surprisingly tasty, too."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ARROKUDA

#if P_FAMILY_TOXEL
    [SPECIES_TOXEL] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxel"),
        .cryId = CRY_TOXEL,
        .natDexNum = NATIONAL_DEX_TOXEL,
        .categoryName = _("Baby"),
        .height = 4,
        .weight = 110,
        .description = COMPOUND_STRING(
            "It stores poison in an internal poison\n"
            "sac and secretes that poison through its\n"
            "skin. If you touch this Pokémon, a\n"
            "tingling sensation follows."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_TOXTRICITY_AMPED] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_AMPED,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punk"),
        .height = 16,
        .weight = 400,
        .description = COMPOUND_STRING(
            "When this Pokémon sounds as if it's\n"
            "strumming a guitar, it's actually clawing\n"
            "at the protrusions on its chest to\n"
            "generate electricity."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_AMPED_GMAX] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_AMPED,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punk"),
        .height = 240,
        .weight = 0,
        .description = gToxtricityGigantamaxPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_LOW_KEY,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punk"),
        .height = 16,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Capable of generating 15,000 volts\n"
            "of electricity, this Pokémon looks\n"
            "down on all that would challenge it."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_TOXTRICITY_LOW_KEY_GMAX] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Toxtricity"),
        .cryId = CRY_TOXTRICITY_LOW_KEY,
        .natDexNum = NATIONAL_DEX_TOXTRICITY,
        .categoryName = _("Punk"),
        .height = 240,
        .weight = 0,
        .description = gToxtricityGigantamaxPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_TOXEL

#if P_FAMILY_SIZZLIPEDE
    [SPECIES_SIZZLIPEDE] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Sizzlipede"),
        .cryId = CRY_SIZZLIPEDE,
        .natDexNum = NATIONAL_DEX_SIZZLIPEDE,
        .categoryName = _("Radiator"),
        .height = 7,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It stores flammable gas in its body and\n"
            "uses it to generate heat. The yellow\n"
            "sections on its belly get particularly hot."),
        .pokemonScale = 365,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CENTISKORCH] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Centiskorch"),
        .cryId = CRY_CENTISKORCH,
        .natDexNum = NATIONAL_DEX_CENTISKORCH,
        .categoryName = _("Radiator"),
        .height = 30,
        .weight = 1200,
        .description = COMPOUND_STRING(
            "When it heats up, its body temperature\n"
            "reaches about 1,500 degrees Fahrenheit.\n"
            "It lashes its body like a whip and\n"
            "launches itself at enemies."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_CENTISKORCH_GMAX] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Centiskorch"),
        .cryId = CRY_CENTISKORCH,
        .natDexNum = NATIONAL_DEX_CENTISKORCH,
        .categoryName = _("Radiator"),
        .height = 750,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The heat that comes off a\n"
            "Gigantamax Centiskorch may\n"
            "destabilize air currents. Sometimes\n"
            "it can even cause storms."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_SIZZLIPEDE

#if P_FAMILY_CLOBBOPUS
    [SPECIES_CLOBBOPUS] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Clobbopus"),
        .cryId = CRY_CLOBBOPUS,
        .natDexNum = NATIONAL_DEX_CLOBBOPUS,
        .categoryName = _("Tantrum"),
        .height = 6,
        .weight = 40,
        .description = COMPOUND_STRING(
            "It's very curious, but its means of\n"
            "investigating things is to try to punch\n"
            "them with its tentacles. The search for\n"
            "food is what brings it onto land."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_GRAPPLOCT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Grapploct"),
        .cryId = CRY_GRAPPLOCT,
        .natDexNum = NATIONAL_DEX_GRAPPLOCT,
        .categoryName = _("Jujitsu"),
        .height = 16,
        .weight = 390,
        .description = COMPOUND_STRING(
            "A body made up of nothing but muscle makes\n"
            "the grappling moves this Pokémon performs\n"
            "with its tentacles tremendously powerful."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_CLOBBOPUS

#if P_FAMILY_SINISTEA
    [SPECIES_SINISTEA_PHONY] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sinistea"),
        .cryId = CRY_SINISTEA,
        .natDexNum = NATIONAL_DEX_SINISTEA,
        .categoryName = _("Black Tea"),
        .height = 1,
        .weight = 2,
        .description = COMPOUND_STRING(
            "This Pokémon is said to have been born\n"
            "when a lonely spirit possessed a cold,\n"
            "leftover cup of tea."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_SINISTEA_ANTIQUE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Sinistea"),
        .cryId = CRY_SINISTEA,
        .natDexNum = NATIONAL_DEX_SINISTEA,
        .categoryName = _("Black Tea"),
        .height = 1,
        .weight = 2,
        .description = COMPOUND_STRING(
            "The swirl pattern in this Pokémon's\n"
            "body is its weakness. If it gets\n"
            "stirred, the swirl loses its shape, and\n"
            "Sinistea gets dizzy."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_POLTEAGEIST_PHONY] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Polteageist"),
        .cryId = CRY_POLTEAGEIST,
        .natDexNum = NATIONAL_DEX_POLTEAGEIST,
        .categoryName = _("Black Tea"),
        .height = 2,
        .weight = 4,
        .description = COMPOUND_STRING(
            "This species lives in antique teapots.\n"
            "Most pots are forgeries, but on rare\n"
            "occasions, an authentic work is found."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_POLTEAGEIST_ANTIQUE] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Polteageist"),
        .cryId = CRY_POLTEAGEIST,
        .natDexNum = NATIONAL_DEX_POLTEAGEIST,
        .categoryName = _("Black Tea"),
        .height = 2,
        .weight = 4,
        .description = COMPOUND_STRING(
            "Trainers Polteageist trusts will be\n"
            "allowed to experience its\n"
            "distinctive flavor and aroma firsthand by\n"
            "sampling just a tiny bit of its tea."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SINISTEA

#if P_FAMILY_HATENNA
    [SPECIES_HATENNA] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hatenna"),
        .cryId = CRY_HATENNA,
        .natDexNum = NATIONAL_DEX_HATENNA,
        .categoryName = _("Calm"),
        .height = 4,
        .weight = 34,
        .description = COMPOUND_STRING(
            "Via the protrusion on its head, it senses\n"
            "other creatures' emotions. If you don't\n"
            "have a calm disposition, it will never\n"
            "warm up to you."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HATTREM] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hattrem"),
        .cryId = CRY_HATTREM,
        .natDexNum = NATIONAL_DEX_HATTREM,
        .categoryName = _("Serene"),
        .height = 6,
        .weight = 48,
        .description = COMPOUND_STRING(
            "No matter who you are, if you bring strong\n"
            "emotions near this Pokémon, it will silence\n"
            "you violently."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_HATTERENE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hatterene"),
        .cryId = CRY_HATTERENE,
        .natDexNum = NATIONAL_DEX_HATTERENE,
        .categoryName = _("Silent"),
        .height = 21,
        .weight = 51,
        .description = COMPOUND_STRING(
            "It emits psychic power strong enough to\n"
            "cause headaches as a deterrent to the\n"
            "approach of others."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_HATTERENE_GMAX] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Hatterene"),
        .cryId = CRY_HATTERENE,
        .natDexNum = NATIONAL_DEX_HATTERENE,
        .categoryName = _("Silent"),
        .height = 260,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This Pokémon can read the\n"
            "emotions of creatures over 30 miles away.\n"
            "The minute it senses hostility, it\n"
            "goes on the attack."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_HATENNA

#if P_FAMILY_IMPIDIMP
    [SPECIES_IMPIDIMP] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Impidimp"),
        .cryId = CRY_IMPIDIMP,
        .natDexNum = NATIONAL_DEX_IMPIDIMP,
        .categoryName = _("Wily"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING(
            "Through its nose, it sucks in the\n"
            "emanations produced by people and\n"
            "Pokémon when they feel annoyed. It\n"
            "thrives off this negative energy."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MORGREM] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Morgrem"),
        .cryId = CRY_MORGREM,
        .natDexNum = NATIONAL_DEX_MORGREM,
        .categoryName = _("Devious"),
        .height = 8,
        .weight = 125,
        .description = COMPOUND_STRING(
            "When it gets down on all fours as if to\n"
            "beg for forgiveness, it's trying to lure\n"
            "opponents in so that it can stab them\n"
            "with its spear-like hair."),
        .pokemonScale = 366,
        .pokemonOffset = 7,
        .trainerScale = 257,
        .trainerOffset = 0,
    },

    [SPECIES_GRIMMSNARL] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grimmsnarl"),
        .cryId = CRY_GRIMMSNARL,
        .natDexNum = NATIONAL_DEX_GRIMMSNARL,
        .categoryName = _("Bulk Up"),
        .height = 15,
        .weight = 610,
        .description = COMPOUND_STRING(
            "With the hair wrapped around its body\n"
            "helping to enhance its muscles, this\n"
            "Pokémon can overwhelm even Machamp."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_GRIMMSNARL_GMAX] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Grimmsnarl"),
        .cryId = CRY_GRIMMSNARL,
        .natDexNum = NATIONAL_DEX_GRIMMSNARL,
        .categoryName = _("Bulk Up"),
        .height = 320,
        .weight = 0,
        .description = COMPOUND_STRING(
            "Gigantamax energy has caused more\n"
            "hair to sprout all over its body.\n"
            "With the added strength, it can jump\n"
            "over the world's tallest building."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_IMPIDIMP

#if P_FAMILY_MILCERY
    [SPECIES_MILCERY] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Milcery"),
        .cryId = CRY_MILCERY,
        .natDexNum = NATIONAL_DEX_MILCERY,
        .categoryName = _("Cream"),
        .height = 2,
        .weight = 3,
        .description = COMPOUND_STRING(
            "This Pokémon was born from sweet-smelling\n"
            "particles in the air. Its body is made\n"
            "of cream."),
        .pokemonScale = 682,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define ALCREMIE_MISC_INFO_DEX(color)                                               \
        .bodyColor = color,

#define ALCREMIE_REGULAR_SPECIES_INFO_DEX(sweet, cream, color)                                      \
    {                                                                                           \
        ALCREMIE_MISC_INFO_DEX(color)                                                              \
        .speciesName = _("Alcremie"),                                                           \
        .cryId = CRY_ALCREMIE,                                                                  \
        .natDexNum = NATIONAL_DEX_ALCREMIE,                                                     \
        .categoryName = _("Cream"),                                                             \
        .height = 3,                                                                            \
        .weight = 5,                                                                            \
        .description = gAlcremie ##cream##PokedexText,                                          \
        .pokemonScale = 530,                                                                    \
        .pokemonOffset = 13,                                                                    \
        .trainerScale = 256,                                                                    \
        .trainerOffset = 0,                                                                     \
    }

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM]    = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM]   = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM]  = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL]    = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Strawberry, RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_VANILLA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_BERRY_MATCHA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_BERRY_MINT_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_BERRY_LEMON_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_SALTED_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_BERRY_RUBY_SWIRL]         = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_BERRY_CARAMEL_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_BERRY_RAINBOW_SWIRL]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Berry,      RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_LOVE_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_LOVE_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_LOVE_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_LOVE_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_LOVE_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_LOVE_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Love,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_VANILLA_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STAR_MATCHA_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STAR_MINT_CREAM]          = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STAR_LEMON_CREAM]         = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_SALTED_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STAR_RUBY_SWIRL]          = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STAR_CARAMEL_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STAR_RAINBOW_SWIRL]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Star,       RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_CLOVER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_CLOVER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_CLOVER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_CLOVER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_CLOVER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_CLOVER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Clover,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_FLOWER_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_FLOWER_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_FLOWER_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_FLOWER_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_FLOWER_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_FLOWER_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Flower,     RainbowSwirl, BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_VANILLA_CREAM]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     VanillaCream, BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     RubyCream,    BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_RIBBON_MATCHA_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     MatchaCream,  BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_RIBBON_MINT_CREAM]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     MintCream,    BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_RIBBON_LEMON_CREAM]       = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     LemonCream,   BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_SALTED_CREAM]      = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     SaltedCream,  BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_RIBBON_RUBY_SWIRL]        = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     RubySwirl,    BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_RIBBON_CARAMEL_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     CaramelSwirl, BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_RIBBON_RAINBOW_SWIRL]     = ALCREMIE_REGULAR_SPECIES_INFO_DEX(Ribbon,     RainbowSwirl, BODY_COLOR_YELLOW),
#if P_GIGANTAMAX_FORMS
    [SPECIES_ALCREMIE_GMAX] =
    {
        ALCREMIE_MISC_INFO_DEX(BODY_COLOR_YELLOW)
        .speciesName = _("Alcremie"),
        .cryId = CRY_ALCREMIE,
        .natDexNum = NATIONAL_DEX_ALCREMIE,
        .categoryName = _("Cream"),
        .height = 3,
        .weight = 5,
        .description = COMPOUND_STRING(
            "It launches swarms of missiles,\n"
            "each made of cream and loaded with\n"
            "100,000 kilocalories. Get hit by one of\n"
            "these, and your head will swim."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_MILCERY

#if P_FAMILY_FALINKS
    [SPECIES_FALINKS] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Falinks"),
        .cryId = CRY_FALINKS,
        .natDexNum = NATIONAL_DEX_FALINKS,
        .categoryName = _("Formation"),
        .height = 30,
        .weight = 620,
        .description = COMPOUND_STRING(
            "Five of them are troopers, and one is the\n"
            "brass. The brass's orders are absolute."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GEN_9_MEGA_EVOLUTIONS
    [SPECIES_FALINKS_MEGA] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Falinks"),
    #if P_MODIFIED_MEGA_CRIES
        .cryId = CRY_FALINKS_MEGA,
    #else
        .cryId = CRY_FALINKS,
    #endif // P_MODIFIED_MEGA_CRIES
        .natDexNum = NATIONAL_DEX_FALINKS,
        .categoryName = _("Formation"),
        .height = 16,
        .weight = 990,
        .description = COMPOUND_STRING(
            "Mega Falinks has taken on the\n"
            "ultimate battle formation, which\n"
            "can be achieved only if the troopers\n"
            "and brass have the strongest of bonds."),
    },
#endif //P_GEN_9_MEGA_EVOLUTIONS
#endif //P_FAMILY_FALINKS

#if P_FAMILY_PINCURCHIN
    [SPECIES_PINCURCHIN] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Pincurchin"),
        .cryId = CRY_PINCURCHIN,
        .natDexNum = NATIONAL_DEX_PINCURCHIN,
        .categoryName = _("Sea Urchin"),
        .height = 3,
        .weight = 10,
        .description = COMPOUND_STRING(
            "It feeds on seaweed, using its teeth to\n"
            "scrape it off rocks. Electric current\n"
            "flows from the tips of its spines."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_PINCURCHIN

#if P_FAMILY_SNOM
    [SPECIES_SNOM] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Snom"),
        .cryId = CRY_SNOM,
        .natDexNum = NATIONAL_DEX_SNOM,
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 38,
        .description = COMPOUND_STRING(
            "It spits out thread imbued with a frigid\n"
            "sort of energy and uses it to tie its body\n"
            "to branches, disguising itself as an\n"
            "icicle while it sleeps."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_FROSMOTH] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Frosmoth"),
        .cryId = CRY_FROSMOTH,
        .natDexNum = NATIONAL_DEX_FROSMOTH,
        .categoryName = _("Frost Moth"),
        .height = 13,
        .weight = 420,
        .description = COMPOUND_STRING(
            "Icy scales fall from its wings like snow\n"
            "as it flies over fields and mountains.\n"
            "The temperature of its wings is less than\n"
            "-290 degrees Fahrenheit."),
        .pokemonScale = 272,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_SNOM

#if P_FAMILY_STONJOURNER
    [SPECIES_STONJOURNER] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Stonjourner"),
        .cryId = CRY_STONJOURNER,
        .natDexNum = NATIONAL_DEX_STONJOURNER,
        .categoryName = _("Big Rock"),
        .height = 25,
        .weight = 5200,
        .description = COMPOUND_STRING(
            "It stands in grasslands, watching the\n"
            "sun's descent from zenith to horizon. This\n"
            "Pokémon has a talent for delivering\n"
            "dynamic kicks."),
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
    },
#endif //P_FAMILY_STONJOURNER

#if P_FAMILY_EISCUE
    [SPECIES_EISCUE_ICE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eiscue"),
        .cryId = CRY_EISCUE_ICE,
        .natDexNum = NATIONAL_DEX_EISCUE,
        .categoryName = _("Penguin"),
        .height = 14,
        .weight = 890,
        .description = COMPOUND_STRING(
            "It drifted in on the flow of ocean waters\n"
            "from a frigid place. It keeps its head\n"
            "iced constantly to make sure it stays\n"
            "nice and cold."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },

    [SPECIES_EISCUE_NOICE] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Eiscue"),
        .cryId = CRY_EISCUE_NOICE_FACE,
        .natDexNum = NATIONAL_DEX_EISCUE,
        .categoryName = _("Penguin"),
        .height = 14,
        .weight = 890,
        .description = COMPOUND_STRING(
            "The hair on its head connects to\n"
            "the surface of its brain. When this\n"
            "Pokémon has something on its mind,\n"
            "its hair chills the air around it."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_EISCUE

#if P_FAMILY_INDEEDEE
    [SPECIES_INDEEDEE_M] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Indeedee"),
        .cryId = CRY_INDEEDEE_M,
        .natDexNum = NATIONAL_DEX_INDEEDEE,
        .categoryName = _("Emotion"),
        .height = 9,
        .weight = 280,
        .description = COMPOUND_STRING(
            "It uses the horns on its head to sense the\n"
            "emotions of others. Males will act as\n"
            "valets for those they serve, looking\n"
            "after their every need."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_INDEEDEE_F] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Indeedee"),
        .cryId = CRY_INDEEDEE_F,
        .natDexNum = NATIONAL_DEX_INDEEDEE,
        .categoryName = _("Emotion"),
        .height = 9,
        .weight = 280,
        .description = COMPOUND_STRING(
            "They diligently serve people and\n"
            "Pokémon so they can gather feelings\n"
            "of gratitude. The females are\n"
            "particularly good at babysitting."),
        .pokemonScale = 338,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_INDEEDEE

#if P_FAMILY_MORPEKO
    [SPECIES_MORPEKO_FULL_BELLY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Morpeko"),
        .cryId = CRY_MORPEKO_FULL_BELLY,
        .natDexNum = NATIONAL_DEX_MORPEKO,
        .categoryName = _("Two-Sided"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "As it eats the seeds stored up in its\n"
            "pocket-like pouches, this Pokémon is not\n"
            "just satisfying its constant hunger. It's\n"
            "also generating electricity."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_MORPEKO_HANGRY] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Morpeko"),
        .cryId = CRY_MORPEKO_HANGRY,
        .natDexNum = NATIONAL_DEX_MORPEKO,
        .categoryName = _("Two-Sided"),
        .height = 3,
        .weight = 30,
        .description = COMPOUND_STRING(
            "Intense hunger drives it to\n"
            "extremes of violence, and the electricity\n"
            "in its cheek sacs has converted into\n"
            "a Dark-type energy."),
        .pokemonScale = 530,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_MORPEKO

#if P_FAMILY_CUFANT
    [SPECIES_CUFANT] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Cufant"),
        .cryId = CRY_CUFANT,
        .natDexNum = NATIONAL_DEX_CUFANT,
        .categoryName = _("Copperderm"),
        .height = 12,
        .weight = 1000,
        .description = COMPOUND_STRING(
            "It digs up the ground with its trunk.\n"
            "It's also very strong, being able to\n"
            "carry loads of over five tons without any\n"
            "problem at all."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_COPPERAJAH] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Copperajah"),
        .cryId = CRY_COPPERAJAH,
        .natDexNum = NATIONAL_DEX_COPPERAJAH,
        .categoryName = _("Copperderm"),
        .height = 30,
        .weight = 6500,
        .description = COMPOUND_STRING(
            "They came over from another region long\n"
            "ago and worked together with humans.\n"
            "Their green skin is resistant to water."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_COPPERAJAH_GMAX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Copperajah"),
        .cryId = CRY_COPPERAJAH,
        .natDexNum = NATIONAL_DEX_COPPERAJAH,
        .categoryName = _("Copperderm"),
        .height = 230,
        .weight = 0,
        .description = COMPOUND_STRING(
            "After this Pokémon has Gigantamaxed,\n"
            "its massive nose can utterly demolish\n"
            "large structures with a single\n"
            "smashing blow."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_CUFANT

#if P_FAMILY_DRACOZOLT
    [SPECIES_DRACOZOLT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dracozolt"),
        .cryId = CRY_DRACOZOLT,
        .natDexNum = NATIONAL_DEX_DRACOZOLT,
        .categoryName = _("Fossil"),
        .height = 18,
        .weight = 1900,
        .description = COMPOUND_STRING(
            "In ancient times, it was unbeatable thanks\n"
            "to its powerful lower body, but it went\n"
            "extinct anyway after it depleted all its\n"
            "plant-based food sources."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_DRACOZOLT

#if P_FAMILY_ARCTOZOLT
    [SPECIES_ARCTOZOLT] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arctozolt"),
        .cryId = CRY_ARCTOZOLT,
        .natDexNum = NATIONAL_DEX_ARCTOZOLT,
        .categoryName = _("Fossil"),
        .height = 23,
        .weight = 1500,
        .description = COMPOUND_STRING(
            "The shaking of its freezing upper half is\n"
            "what generates its electricity. It has a\n"
            "hard time walking around."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_ARCTOZOLT

#if P_FAMILY_DRACOVISH
    [SPECIES_DRACOVISH] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dracovish"),
        .cryId = CRY_DRACOVISH,
        .natDexNum = NATIONAL_DEX_DRACOVISH,
        .categoryName = _("Fossil"),
        .height = 23,
        .weight = 2150,
        .description = COMPOUND_STRING(
            "Powerful legs and jaws made it the apex\n"
            "predator of its time. Its own overhunting\n"
            "of its prey was what drove it to\n"
            "extinction."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_DRACOVISH

#if P_FAMILY_ARCTOVISH
    [SPECIES_ARCTOVISH] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Arctovish"),
        .cryId = CRY_ARCTOVISH,
        .natDexNum = NATIONAL_DEX_ARCTOVISH,
        .categoryName = _("Fossil"),
        .height = 20,
        .weight = 1750,
        .description = COMPOUND_STRING(
            "Though it's able to capture prey by\n"
            "freezing its surroundings, it has trouble\n"
            "eating the prey afterward because its\n"
            "mouth is on top of its head."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_ARCTOVISH

#if P_FAMILY_DURALUDON
    [SPECIES_DURALUDON] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Duraludon"),
        .cryId = CRY_DURALUDON,
        .natDexNum = NATIONAL_DEX_DURALUDON,
        .categoryName = _("Alloy"),
        .height = 18,
        .weight = 400,
        .description = COMPOUND_STRING(
            "Its body resembles polished metal, and\n"
            "it's both lightweight and strong. The only\n"
            "drawback is that it rusts easily."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_DURALUDON_GMAX] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Duraludon"),
        .cryId = CRY_DURALUDON,
        .natDexNum = NATIONAL_DEX_DURALUDON,
        .categoryName = _("Alloy"),
        .height = 430,
        .weight = 0,
        .description = COMPOUND_STRING(
            "The hardness of its cells is\n"
            "exceptional, even among Steel types. It\n"
            "also has a body structure that's\n"
            "resistant to earthquakes."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_GIGANTAMAX_FORMS

#if P_GEN_9_CROSS_EVOS
    [SPECIES_ARCHALUDON] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Archaludon"),
        .cryId = CRY_ARCHALUDON,
        .natDexNum = NATIONAL_DEX_ARCHALUDON,
        .categoryName = _("Alloy"),
        .height = 20,
        .weight = 600,
        .description = COMPOUND_STRING(
            "It gathers static electricity\n"
            "from its surroundings. The beams\n"
            "it launches when down on all fours\n"
            "are tremendously powerful."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DURALUDON

#if P_FAMILY_DREEPY
    [SPECIES_DREEPY] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dreepy"),
        .cryId = CRY_DREEPY,
        .natDexNum = NATIONAL_DEX_DREEPY,
        .categoryName = _("Lingering"),
        .height = 5,
        .weight = 20,
        .description = COMPOUND_STRING(
            "After being reborn as a ghost Pokémon,\n"
            "Dreepy wanders the areas it used to\n"
            "inhabit back when it was alive in\n"
            "prehistoric seas."),
        .pokemonScale = 432,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_DRAKLOAK] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Drakloak"),
        .cryId = CRY_DRAKLOAK,
        .natDexNum = NATIONAL_DEX_DRAKLOAK,
        .categoryName = _("Caretaker"),
        .height = 14,
        .weight = 110,
        .description = COMPOUND_STRING(
            "It's capable of flying faster than 120 mph.\n"
            "It battles alongside Dreepy and dotes\n"
            "on them until they successfully evolve."),
        .pokemonScale = 265,
        .pokemonOffset = 2,
        .trainerScale = 262,
        .trainerOffset = 0,
    },

    [SPECIES_DRAGAPULT] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Dragapult"),
        .cryId = CRY_DRAGAPULT,
        .natDexNum = NATIONAL_DEX_DRAGAPULT,
        .categoryName = _("Stealth"),
        .height = 30,
        .weight = 500,
        .description = COMPOUND_STRING(
            "When it isn't battling, it keeps Dreepy\n"
            "in the holes on its horns. Once a fight\n"
            "starts, it launches the Dreepy like\n"
            "supersonic missiles."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_DREEPY

#if P_FAMILY_ZACIAN
    [SPECIES_ZACIAN_HERO] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Zacian"),
        .cryId = CRY_ZACIAN_HERO,
        .natDexNum = NATIONAL_DEX_ZACIAN,
        .categoryName = _("Warrior"),
        .height = 28,
        .weight = 1100,
        .description = COMPOUND_STRING(
            "Known as a legendary hero, this Pokémon\n"
            "absorbs metal particles, transforming\n"
            "them into a weapon it uses to battle."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ZACIAN_CROWNED] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Zacian"),
        .cryId = CRY_ZACIAN_CROWNED,
        .natDexNum = NATIONAL_DEX_ZACIAN,
        .categoryName = _("Warrior"),
        .height = 28,
        .weight = 3550,
        .description = COMPOUND_STRING(
            "Able to cut down anything with a\n"
            "single strike, it became known as the\n"
            "Fairy King's Sword, and it inspired\n"
            "awe in friend and foe alike."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ZACIAN

#if P_FAMILY_ZAMAZENTA
    [SPECIES_ZAMAZENTA_HERO] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Zamazenta"),
        .cryId = CRY_ZAMAZENTA_HERO,
        .natDexNum = NATIONAL_DEX_ZAMAZENTA,
        .categoryName = _("Warrior"),
        .height = 29,
        .weight = 2100,
        .description = COMPOUND_STRING(
            "In times past, it worked together with a\n"
            "king of the people to save the Galar\n"
            "region. It absorbs metal that it then\n"
            "uses in battle."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_ZAMAZENTA_CROWNED] =
    {
        .bodyColor = BODY_COLOR_RED,
        .speciesName = _("Zamazenta"),
        .cryId = CRY_ZAMAZENTA_CROWNED,
        .natDexNum = NATIONAL_DEX_ZAMAZENTA,
        .categoryName = _("Warrior"),
        .height = 29,
        .weight = 7850,
        .description = COMPOUND_STRING(
            "Its ability to deflect any attack\n"
            "led to it being known as the Fighting\n"
            "Master's Shield. It was feared and\n"
            "respected by all."),
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_ZAMAZENTA

#if P_FAMILY_ETERNATUS
    [SPECIES_ETERNATUS] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Eternatus"),
        .cryId = CRY_ETERNATUS,
        .natDexNum = NATIONAL_DEX_ETERNATUS,
        .categoryName = _("Gigantic"),
        .height = 200,
        .weight = 9500,
        .description = COMPOUND_STRING(
            "The core on its chest absorbs energy\n"
            "emanating from the lands of the Galar\n"
            "region. This energy is what allows\n"
            "Eternatus to stay active."),
        .pokemonScale = 230,
        .pokemonOffset = 0,
        .trainerScale = 4852,
        .trainerOffset = 20,
    },

    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        .speciesName = _("Eternatus"),
        .cryId = CRY_ETERNATUS_ETERNAMAX,
        .natDexNum = NATIONAL_DEX_ETERNATUS,
        .categoryName = _("Gigantic"),
        .height = 1000,
        .weight = 0,
        .description = COMPOUND_STRING(
            "As a result of Rose's meddling,\n"
            "Eternatus absorbed all the energy in\n"
            "the Galar region. It's now in a state\n"
            "of power overload."),
        .pokemonScale = 230,
        .pokemonOffset = 0,
        .trainerScale = 4852,
        .trainerOffset = 20,
    },
#endif //P_FAMILY_ETERNATUS

#if P_FAMILY_KUBFU
    [SPECIES_KUBFU] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Kubfu"),
        .cryId = CRY_KUBFU,
        .natDexNum = NATIONAL_DEX_KUBFU,
        .categoryName = _("Wushu"),
        .height = 6,
        .weight = 120,
        .description = COMPOUND_STRING(
            "Kubfu trains hard to perfect its moves.\n"
            "The moves it masters will determine which\n"
            "form it takes when it evolves."),
        .pokemonScale = 422,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_URSHIFU_SINGLE_STRIKE] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_SINGLE_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Wushu"),
        .height = 19,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "This form of Urshifu is a strong believer\n"
            "in the one-hit KO. Its strategy is to leap\n"
            "in close to foes and land a devastating\n"
            "blow with a hardened fist."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_SINGLE_STRIKE_GMAX] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_SINGLE_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Wushu"),
        .height = 290,
        .weight = 0,
        .description = COMPOUND_STRING(
            "People call it the embodiment of\n"
            "rage. It's said that this Pokémon's\n"
            "terrifying expression and shout will\n"
            "rid the world of malevolence."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_GIGANTAMAX_FORMS

    [SPECIES_URSHIFU_RAPID_STRIKE] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_RAPID_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Wushu"),
        .height = 19,
        .weight = 1050,
        .description = COMPOUND_STRING(
            "This form of Urshifu is a strong\n"
            "believer in defeating foes by raining\n"
            "many blows down on them. Its\n"
            "strikes are nonstop, flowing like a river."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },

#if P_GIGANTAMAX_FORMS
    [SPECIES_URSHIFU_RAPID_STRIKE_GMAX] =
    {
        .bodyColor = BODY_COLOR_GRAY,
        .speciesName = _("Urshifu"),
        .cryId = CRY_URSHIFU_RAPID_STRIKE,
        .natDexNum = NATIONAL_DEX_URSHIFU,
        .categoryName = _("Wushu"),
        .height = 260,
        .weight = 0,
        .description = COMPOUND_STRING(
            "As it waits for the right moment to\n"
            "unleash its Gigantamax power, this\n"
            "Pokémon maintains a perfect one-\n"
            "legged stance. It won't even twitch."),
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 326,
        .trainerOffset = 4,
    },
#endif //P_GIGANTAMAX_FORMS
#endif //P_FAMILY_KUBFU

#if P_FAMILY_ZARUDE
    [SPECIES_ZARUDE] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zarude"),
        .cryId = CRY_ZARUDE,
        .natDexNum = NATIONAL_DEX_ZARUDE,
        .categoryName = _("Rogue Monkey"),
        .height = 18,
        .weight = 700,
        .description = COMPOUND_STRING(
            "Within dense forests, this Pokémon lives\n"
            "in a pack with others of its kind. It's\n"
            "incredibly aggressive, and the other\n"
            "Pokémon of the forest fear it."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },

    [SPECIES_ZARUDE_DADA] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Zarude"),
        .cryId = CRY_ZARUDE,
        .natDexNum = NATIONAL_DEX_ZARUDE,
        .categoryName = _("Rogue Monkey"),
        .height = 18,
        .weight = 700,
        .description = COMPOUND_STRING(
            "This Zarude's special strength\n"
            "stems from its love and care for an\n"
            "orphaned human child that the Pokémon\n"
            "has raised."),
        .pokemonScale = 267,
        .pokemonOffset = 2,
        .trainerScale = 286,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_ZARUDE

#if P_FAMILY_REGIELEKI
    [SPECIES_REGIELEKI] =
    {
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Regieleki"),
        .cryId = CRY_REGIELEKI,
        .natDexNum = NATIONAL_DEX_REGIELEKI,
        .categoryName = _("Electron"),
        .height = 12,
        .weight = 1450,
        .description = COMPOUND_STRING(
            "This Pokémon is a cluster of electrical\n"
            "energy. It's said that removing the rings\n"
            "on Regieleki's body will unleash the\n"
            "Pokémon's latent power."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FAMILY_REGIELEKI

#if P_FAMILY_REGIDRAGO
    [SPECIES_REGIDRAGO] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Regidrago"),
        .cryId = CRY_REGIDRAGO,
        .natDexNum = NATIONAL_DEX_REGIDRAGO,
        .categoryName = _("Dragon Orb"),
        .height = 21,
        .weight = 2000,
        .description = COMPOUND_STRING(
            "An academic theory proposes that\n"
            "Regidrago's arms were once the head of an\n"
            "ancient dragon Pokémon. The theory\n"
            "remains unproven."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 365,
        .trainerOffset = 7,
    },
#endif //P_FAMILY_REGIDRAGO

#if P_FAMILY_GLASTRIER
    [SPECIES_GLASTRIER] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Glastrier"),
        .cryId = CRY_GLASTRIER,
        .natDexNum = NATIONAL_DEX_GLASTRIER,
        .categoryName = _("Wild Horse"),
        .height = 22,
        .weight = 8000,
        .description = COMPOUND_STRING(
            "Glastrier emits intense cold from its\n"
            "hooves. It's also a belligerent Pokémon--\n"
            "anything it wants, it takes by force."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 348,
        .trainerOffset = 6,
    },
#endif //P_FAMILY_GLASTRIER

#if P_FAMILY_SPECTRIER
    [SPECIES_SPECTRIER] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Spectrier"),
        .cryId = CRY_SPECTRIER,
        .natDexNum = NATIONAL_DEX_SPECTRIER,
        .categoryName = _("Swift Horse"),
        .height = 20,
        .weight = 445,
        .description = COMPOUND_STRING(
            "It probes its surroundings with all its\n"
            "senses save one--it doesn't use its sense\n"
            "of sight. Spectrier's kicks are said to\n"
            "separate soul from body."),
        .pokemonScale = 261,
        .pokemonOffset = 1,
        .trainerScale = 334,
        .trainerOffset = 4,
    },
#endif //P_FAMILY_SPECTRIER

#if P_FAMILY_CALYREX
    [SPECIES_CALYREX] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        .speciesName = _("Calyrex"),
        .cryId = CRY_CALYREX,
        .natDexNum = NATIONAL_DEX_CALYREX,
        .categoryName = _("King"),
        .height = 11,
        .weight = 77,
        .description = COMPOUND_STRING(
            "Calyrex is a merciful Pokémon, capable of\n"
            "providing healing and blessings. It\n"
            "reigned over the Galar region in times\n"
            "of yore."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#if P_FUSION_FORMS
    [SPECIES_CALYREX_ICE] =
    {
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Calyrex"),
        .cryId = CRY_CALYREX_ICE,
        .natDexNum = NATIONAL_DEX_CALYREX,
        .categoryName = _("High King"),
        .height = 24,
        .weight = 8091,
        .description = COMPOUND_STRING(
            "According to lore, this Pokémon\n"
            "showed no mercy to those who got in\n"
            "its way, yet it would heal its\n"
            "opponents' wounds after battle."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

    [SPECIES_CALYREX_SHADOW] =
    {
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("Calyrex"),
        .cryId = CRY_CALYREX_SHADOW,
        .natDexNum = NATIONAL_DEX_CALYREX,
        .categoryName = _("High King"),
        .height = 24,
        .weight = 536,
        .description = COMPOUND_STRING(
            "It's said that Calyrex and a\n"
            "Pokémon that had bonded with it ran all\n"
            "across the Galar region to bring green\n"
            "to the wastelands."),
        .pokemonScale = 320,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
#endif //P_FUSION_FORMS
#endif //P_FAMILY_CALYREX

#if P_FAMILY_ENAMORUS
    [SPECIES_ENAMORUS_INCARNATE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Enamorus"),
        .cryId = CRY_ENAMORUS_INCARNATE,
        .natDexNum = NATIONAL_DEX_ENAMORUS,
        .categoryName = _("Love-Hate"),
        .height = 16,
        .weight = 480,
        .description = COMPOUND_STRING(
            "Its arrival brings an end to the winter.\n"
            "According to legend, this Pokémon's love\n"
            "gives rise to the budding of fresh life\n"
            "across the land."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },

    [SPECIES_ENAMORUS_THERIAN] =
    {
        .bodyColor = BODY_COLOR_PINK,
        .speciesName = _("Enamorus"),
        .cryId = CRY_ENAMORUS_THERIAN,
        .natDexNum = NATIONAL_DEX_ENAMORUS,
        .categoryName = _("Love-Hate"),
        .height = 16,
        .weight = 480,
        .description = COMPOUND_STRING(
            "From the clouds, it descends upon\n"
            "those who treat any form of life\n"
            "with disrespect and metes out\n"
            "wrathful, ruthless punishment."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
    },
#endif //P_FAMILY_ENAMORUS

#ifdef __INTELLISENSE__
};
#endif
